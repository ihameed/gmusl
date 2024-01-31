#include <sys/auxv.h>
#include <errno.h>
#include "libc.h"

#if GMUSL_gcompat__musl_global_state // (

unsigned long __getauxval(unsigned long item)
{
	size_t *auxv = libc.auxv;
	if (item == AT_SECURE) return libc.secure;
	for (; *auxv; auxv+=2)
		if (*auxv==item) return auxv[1];
	errno = ENOENT;
	return 0;
}

weak_alias(__getauxval, getauxval);

#else // ) (

#if __GMUSL_needs_getauxval_shim // (

#include "atomic.h"
#include "syscall.h"
#include "../../include/fcntl.h"
#include "../../include/unistd.h"

#define __USE_GNU
#include "../../gmusl/src/glibc-compat/include/dlfcn.h"
typedef unsigned long (* getauxval_proc_t) (unsigned long item);

static unsigned long
__gmusl_init_getauxval(unsigned long item);

// The maximum value defined for any of the AT_* constants in Linux as of
// 1c23f9e627a7b412978b4e852793c5e3c3efc555 is 51. And `AT_VECTOR_SIZE_BASE` is
// 20, while `AT_VECTOR_SIZE_ARCH` is no greater than 15. Any system that uses
// a newer kernel that launches executables with enough auxv entries to cause
// trailing entry truncation during the initialization of `__gmusl_auxv` is
// also highly likely going to use a newer glibc version that doesn't have a
// broken `getauxval`, so 32 entries (31 with a trailing zero tag) should be
// more than sufficient.
#define __GMUSL_proc_auxv_max_entries 63

#if 1 && (defined(__x86_64__) || defined(__aarch64__))
	#define __GMUSL_getauxval_relative_pointer 1
	#define __GMUSL_getauxval_naked_wrapper
	__asm__(
		".section .data.rel.local.__fptr_getauxval, \"aw\"\n"
		".align 8\n"
		".type __fptr_getauxval, @object\n"
		".size __fptr_getauxval, 8\n"
		"__fptr_getauxval:\n"
		"    .quad __gmusl_init_getauxval - .\n");
	extern getauxval_proc_t volatile __fptr_getauxval __asm__("__fptr_getauxval"); // FIXME: use _Atomic
#elif defined(__i386__)
	#define __GMUSL_getauxval_relative_pointer 1
	#define __GMUSL_getauxval_naked_wrapper __attribute__((naked))
	__asm__(
		".section .data.rel.local.__fptr_getauxval, \"aw\"\n"
		".align 4\n"
		".type __fptr_getauxval, @object\n"
		".size __fptr_getauxval, 4\n"
		"__fptr_getauxval:\n"
		"    .long __gmusl_init_getauxval - .\n");
	extern getauxval_proc_t volatile __fptr_getauxval __asm__("__fptr_getauxval"); // FIXME: use _Atomic
#else
	#define __GMUSL_getauxval_relative_pointer 0
	#define __GMUSL_getauxval_naked_wrapper
	static getauxval_proc_t volatile __fptr_getauxval = &__gmusl_init_getauxval; // FIXME: use _Atomic
#endif

#if __GMUSL_getauxval_relative_pointer
	#define __GMUSL_getauxval_used_by_inline_asm __attribute__((used))
	#define __GMUSL_to_relative(af) ((getauxval_proc_t) ((__UINTPTR_TYPE__) af - (__UINTPTR_TYPE__) &__fptr_getauxval))
	#define __GMUSL_from_relative(rf) ((getauxval_proc_t) ((__UINTPTR_TYPE__) rf + (__UINTPTR_TYPE__) &__fptr_getauxval))
#else
	#define __GMUSL_getauxval_used_by_inline_asm
	#define __GMUSL_to_relative(af) af
	#define __GMUSL_from_relative(af) af
#endif

// `saved_auxv` is defined as an array of "c" "unsigned long"s in include/linux/mm_types.h.
struct __gmusl_auxv_entry { uintptr_t tag; uintptr_t val; };

static struct __gmusl_auxv_entry __gmusl_auxv[__GMUSL_proc_auxv_max_entries + 1] = { 0 };
static struct __gmusl_auxv_entry *__gmusl_auxv_data_dependency_ordering_ptr = 0; // FIXME: use _Atomic

static unsigned long __attribute__((noinline))
__gmusl_always_enoent(unsigned long item) {
	(void) item;
	errno = ENOENT;
	return 0;
}

#ifndef PR_GET_AUXV
	#define PR_GET_AUXV 0x41555856u
#endif

static int __attribute__((noinline))
__gmusl_populate_auxv_from_prctl() {
	int result = __syscall(SYS_prctl, PR_GET_AUXV, __gmusl_auxv, sizeof(__gmusl_auxv) - sizeof(struct __gmusl_auxv_entry), 0, 0);
	if (__builtin_expect(result < 0, 0)) return 0;
	a_cas_p(&__gmusl_auxv_data_dependency_ordering_ptr, 0, __gmusl_auxv);
	return 1;
}

static int __attribute__((noinline))
__gmusl_populate_auxv_from_procfs() {
	int ret = 1;
	int const hdl = __sys_open("/proc/self/auxv", O_RDONLY);
	if (hdl == -1) {
		return 0;
	}
	size_t const max_sz = __GMUSL_proc_auxv_max_entries * sizeof(struct __gmusl_auxv_entry);
	size_t offs = 0;
	struct __gmusl_auxv_entry local_auxv_buf[__GMUSL_proc_auxv_max_entries] = { 0 };
	for (;;) {
		// XXXih: TODO: Is a single large SYS_read on /proc/self/auxv
		// on a real procfs guaranteed to not return partial results?
		// If so, on what kernel versions? And do people ever configure
		// execution environments with some sort of non-procfs
		// interposing filesystem mounted at /proc that exposes a
		// /proc/self/auxv?
		ssize_t const result = read(hdl, local_auxv_buf + offs, max_sz - offs);
		if (__builtin_expect(result == -1, 0)) {
			if (errno == EINTR) continue;
			ret = 0;
			goto error;
		} else if (__builtin_expect(result == 0, 1)) {
			if (__builtin_expect(offs % (2 * sizeof(uintptr_t)) != 0, 0)) {
				ret = 0;
				goto done;
			}
			for (size_t i = 0; i < __GMUSL_proc_auxv_max_entries && local_auxv_buf[i].tag != 0; ++i) {
				__gmusl_auxv[i] = local_auxv_buf[i];
			}
			goto done;
		}
		offs += result;
	}
done:
	a_cas_p(&__gmusl_auxv_data_dependency_ordering_ptr, 0, __gmusl_auxv);
error:
	__syscall(SYS_close, hdl);
	return ret;
}

static unsigned long __attribute__((noinline))
__gmusl_scan_auxv(unsigned long tag) {
	struct __gmusl_auxv_entry *auxv = __gmusl_auxv_data_dependency_ordering_ptr;
	if (__builtin_expect(auxv == 0, 0)) {
		// It is possible, in the c++11 memory model, for
		// __gmusl_auxv_data_dependency_ordering_ptr's load to yield a
		// stale value; the latest value is acquired with an RMW
		// operation. If execution reaches this point, then
		// __gmusl_populate_auxv_from_procfs or
		// __gmusl_populate_auxv_from_prctl should have already
		// successfully completed on some thread, and the store effects
		// produced by that execution should be made observable here.
		// As far as I can tell, musl's a_cas_p emits an an instruction
		// sequence that would also be used for a c++11 seqcst CAS, so
		// the relative order of stores to __fptr_getauxval and
		// __gmusl_auxv_data_dependency_ordering_ptr should be
		// preserved.
		auxv = a_cas_p(&__gmusl_auxv_data_dependency_ordering_ptr, 0, 0);
	}
	for (; auxv->tag != 0; ++auxv) if (auxv->tag == tag) return auxv->val;
	errno = ENOENT;
	return 0;
}

#if defined(__aarch64__)
    #define __GMUSL_symver_getauxval "GLIBC_2.17"
#elif defined(__i386__) || defined(__amd64__) || defined(__arm__)
    #define __GMUSL_symver_getauxval "GLIBC_2.16"
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    #define __GMUSL_symver_getauxval "GLIBC_2.17"
#elif defined(__powerpc64__) || defined(__powerpc__)
    #define __GMUSL_symver_getauxval "GLIBC_2.16"
#elif defined(__riscv)
    #define __GMUSL_symver_getauxval "GLIBC_2.27"
#else
    #define __GMUSL_symver_getauxval "GMUSL_UNKNOWN_VERSION_FOR_ARCH"
    #error "Unknown architecture: please add a symbol version for getauxval."
#endif

extern void *
__gmusl_glibc_dlvsym(void *__restrict dll, char const *__restrict name, char const *__restrict version) __asm__("dlvsym");

/*
 * First, try loading and using `getauxval` from glibc by using
 * `dlsym(RTLD_DEFAULT, "getauxval")`. `getauxval` was added in glibc 2.16
 * (2012-06-30); it had a bug in which it failed to report `ENOENT` for missing
 * elf auxiliary vector "types". This bug was fixed in glibc 2.19 (2014-02-07).
 *
 * Second, try copying auxiliary vector values into fixed-size dso-global
 * memory by using the prctl syscall with PR_GET_AUXV. Linux added support for
 * this in 6.4. It is tempting to use this method in favor of glibc's
 * getauxval, but any system that both uses glibc and runs linux 6.4 or newer
 * is likely going to have a glibc version new enough to avoid the silly
 * 2.16-2.18 `ENOENT` bug.
 *
 * Third, try reading auxiliary vector values from `/proc/self/auxv`. The
 * contents of this file are copied to a local 64-entry buffer; it is extremely
 * unlikely that a system using glibc < 2.16 will also use a kernel that has
 * more than 64 auxv pairs. Note that procfs might not be mounted and some
 * procfs entries might be unreadable (like on e.g. Android [1], although
 * Android is not a target platform for this project).
 *
 * Otherwise, if the above doesn't work, fall back to a function that always
 * returns 0 and sets `ENOENT`.
 *
 * glibc exports a dynamic symbol named `_argv` that points to the original
 * argument vector. It would be possible to fetch the auxiliary vector by
 * getting the address of `_argv` via `dlsym(RTLD_DEFAULT, "_argv")` and then
 * scanning forward for the argv zero terminator and environment zero
 * terminator.  Unfortunately, `_argc` is not exported, and the memory pointed
 * to by `_argv` may be mutated arbitrarily; it's possible to read
 * `/proc/self/cmdline` to determine the size of the argument vector (and
 * `/proc/self/environ` to determine the size of the memory pointed to by
 * `__environ`), but if procfs is accessible and glibc is being used (e.g.  if
 * the underlying os is normal Linux and not Android) then `/proc/self/auxv`
 * should also be readable.
 *
 * It'd also be possible to add before-main startup code that saves a copy of
 * the address of the auxiliary vector that is then read by an exported
 * (default visibility) getauxval-compatible function; in this case, an
 * executable using musl-glibc, and dlls built with musl-glibc loaded in a
 * musl-glibc executable, would have a reliable implementation of `getauxval`.
 * I may do this later.
 *
 * [1] https://android-review.googlesource.com/c/platform/ndk/+/51271/1/sources/android/cpufeatures/cpu-features.c
 */

static unsigned long __attribute__((noinline)) __GMUSL_getauxval_used_by_inline_asm
__gmusl_init_getauxval(unsigned long item) {
	// It is possible in the c++11 memory model for __getauxval's load from
	// __fptr_getauxval to be stale; the latest value is acquired here via
	// an RMW operation. Technically this a_cas_p + volatile stuff isn't
	// c++11, but whatever.
	getauxval_proc_t const initp = __GMUSL_to_relative(__gmusl_init_getauxval);
	getauxval_proc_t proc = (getauxval_proc_t) a_cas_p(&__fptr_getauxval, initp, initp);
	if (proc != initp) goto finish;
	// `getauxval` was introduced in glibc 2.16. glibc failed to report
	// ENOENT for missing AT_* "types" until 2.19. It's possible to eagerly
	// fall back to the prctl-based or procfs-based implementation for
	// glibc 2.16 to 2.18, but that would require parsing the output of
	// `gnu_get_libc_version` or doing something similarly unpleasant.
	// Alternatively it would be possible to grab the `auxv` field from
	// ld.so's `_rtld_global_ro` by hardcoding each supported
	// architecture's field offset from glibc 2.16 to 2.18, with the
	// assumption that nobody running these old versions of glibc
	// arbitrarily altered the layout of this record. I'm not sure this is
	// worth the code size hit or additional possible divergence in
	// behavior.
	void * const raw_proc = __gmusl_glibc_dlvsym(RTLD_DEFAULT, "getauxval", __GMUSL_symver_getauxval);
	if (__builtin_expect(raw_proc != 0, 1)) {
		proc = (getauxval_proc_t) raw_proc;
		goto commit;
	}
	{
		int const success = __gmusl_populate_auxv_from_prctl();
		if (__builtin_expect(!!success, 1)) {
			proc = __gmusl_scan_auxv;
			goto commit;
		}
	}
	{
		int const success = __gmusl_populate_auxv_from_procfs();
		if (__builtin_expect(!!success, 1)) {
			proc = __gmusl_scan_auxv;
			goto commit;
		}
	}
	proc = __gmusl_always_enoent;
	commit:
	a_cas_p(&__fptr_getauxval, initp, __GMUSL_to_relative(proc));
	finish:
	return proc(item);
}

unsigned long __GMUSL_getauxval_naked_wrapper
__getauxval(unsigned long item)
{
#if __GMUSL_getauxval_relative_pointer && defined(__i386__)
	__asm__(
	"    .byte 0xf3,0x0f,0x1e,0xfb # endbr32\n"
	"    call 0f\n"
	" 0: pop %eax\n"
	"    add $(__fptr_getauxval - 0b), %eax\n"
	"    add (%eax), %eax\n"
	"    jmp *%eax\n"
	);
#else
	getauxval_proc_t const _proc = __fptr_getauxval;
	getauxval_proc_t const proc = __GMUSL_from_relative(_proc);
	return proc(item);
#endif
}

weak_alias(__getauxval, getauxval);

#endif // ) __GMUSL_needs_getauxval_shim

#endif // )
