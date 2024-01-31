// glibc commit 035c012e32c11e84d64905efaf55e74f704d3668 removes
// __libc_csu_init and __libc_csu_fini. Prior to this point, the main
// executable's pre-main startup code was unconditonally invoked by
// __libc_csu_init. After this commit, __libc_start_main will now use the
// dynamic loader infrastructure if the `init` parameter is nullptr; the ELF
// dynamic tags DT_INIT and DT_INIT_ARRAY are used to locate and run pre-main
// code.
//
// A local workalike for __libc_csu_init is contained here to allow binaries
// built with new toolchains that happen to be linked to new crtX.o files to
// continue to operate correctly when run on older versions of glibc.

using size_t = __SIZE_TYPE__;
using uintptr_t = __UINTPTR_TYPE__;
using init_func_t = void (*) (int, char **, char **);

extern "C" {
    extern init_func_t const __init_array_start __attribute__((weak, visibility("hidden")));
    extern init_func_t const __init_array_end __attribute__((weak, visibility("hidden")));
    uintptr_t cursor __asm__("__musl_glibc_csu_init_cursor") __attribute__((visibility("hidden")));

    static void __do_nothing_init() __asm__("__do_nothing_init");
    static void __do_nothing_init() { }
    extern void _init() __attribute__((weak, alias("__do_nothing_init")));
}

extern "C"
void __attribute__((visibility("hidden"), noinline))
__musl_glibc_compat_csu_init(int argc, char **argv, char **envp) { // __libc_csu_init, libc_start_init
    // Attempt to avoid creating a "rop gadget". Storing the function pointer
    // cursor in a local variable will result in the cursor's state being
    // maintained in a call-preserved register. That register will be saved to
    // the stack in this function's prologue; more importantly, that register
    // will be restored from the stack in this function's epilogue, which can
    // apparently be exploited as a pair of "return-oriented programming"
    // "gadgets".
    //
    // As an alternative, the counter state is maintained in a global variable.
    // The counter state is then saved and restored to memory during each loop
    // iteration, and is highly likely to be loaded into a call-clobbered
    // register that is then used by the generated call instruction, which
    // prevents a stack overwrite from eventually controling the contents of
    // the register, used to store the address of the target, that is passed to
    // the call instruction. This use of non-modular global state should be
    // fine, because __musl_glibc_compat_csu_init should only be called once:
    // either by __libc_start_main in the main executable, or by some dynamic
    // loader code I haven't yet identified during shared library loading as a
    // result of DT_NEEDED or dlopen.
    //
    // "cursor" is initialized during the execution of this function rather
    // than being statically initialized; this avoids creating an extra
    // relocation that needs to be processed at dynamic-load-time.
    //
    // For more information, see:
    //
    // - H. Marco-Gisbert and I. Ripoll-Ripoll, "return-to-csu: A New Method to Bypass 64-bit Linux ASLR"

    _init();
    cursor = reinterpret_cast<uintptr_t>(&__init_array_start);
    uintptr_t const end = reinterpret_cast<uintptr_t>(&__init_array_end);
    for (; cursor < end; cursor += sizeof(init_func_t *)) (*reinterpret_cast<init_func_t *>(cursor))(argc, argv, envp);
}

extern "C"
void __attribute__((visibility("hidden"), noinline))
__musl_glibc_compat_csu_fini() { // __libc_csu_fini
    // Do nothing.
    //
    // glibc stopped using the fini parameter to __libc_start_main in commit
    // 9dcafc559763e339d4a79580c333127033e39c11. Is this symbol really needed
    // at all?
}

using rtld_fini_t = void (*) ();
using main_t = int (*) (int, char **, char **);
using init_t = void (*) (int, char **, char **);
using fini_t = void (*) ();

extern "C" int
__libc_start_main(main_t main, int argc, char **argv, init_t init, fini_t fini, fini_t rtld_fini, void *stack_end);

extern "C" int
main(int, char **, char **);

#if __SIZEOF_SIZE_T__ == 8
    using gpreg_t = __UINT64_TYPE__;
#elif __SIZEOF_SIZE_T__ == 4
    using gpreg_t = __UINT32_TYPE__;
#else
    #error "Unexpected non-8/4 size_t size."
#endif

extern "C"
void __attribute__((visibility("hidden"), noinline, noreturn))
__glibc_compat_start_cee(void * const sysv_initial_stack_data, rtld_fini_t const rtld_fini) {
    auto const argc = *static_cast<gpreg_t const *>(sysv_initial_stack_data);
    auto const argv = reinterpret_cast<char **>(static_cast<char *>(sysv_initial_stack_data) + sizeof(gpreg_t));
    __libc_start_main(main, static_cast<int>(argc), argv,
        __musl_glibc_compat_csu_init,
        __musl_glibc_compat_csu_fini,
        rtld_fini, sysv_initial_stack_data);
    __builtin_trap();
}

#if defined(__x86_64__) // {
    // See H.J. Lu, M. Matz, M. Girkar, J. Hubicka, A. Jaeger, M. Mitchell,
    // "System V Application Binary Interface AMD64 Architecture Processor Supplement Version 1.0",
    // pages 34 and 35 of section 3.4.1 ("Initial Stack and Register State"),
    // found under section 3.4 ("Process Initialization").
    __asm__(R"asm(
.symver __libc_start_main, __libc_start_main@GLIBC_2.2.5
.text
.hidden __glibc_compat_start
.globl __glibc_compat_start
.type __glibc_compat_start, "function"
.align 1<<4
__glibc_compat_start:
    .cfi_startproc
    .cfi_undefined rip
    xor %ebp, %ebp # Clear rbp to mark this frame as the deepest stack frame.
    mov %rsp, %rdi # "C" parameter 1: Contains the address pointing to the beginning (low address) of the initial process stack.
    mov %rdx, %rsi # "C" parameter 2: Contains a function pointer that __libc_start_main will register as an atexit handler; used for dll deinitializers for dlls with initializers that have run before the main entry point.
    and $~15, %rsp # Align the stack to a 16 byte boundary. This is guaranteed by the "psABI", but it costs almost nothing to do this here.
    sub $8, %rsp   # Make rsp + 8 a multiple of 16; see the sysv amd64 abi, section 3.2.2 ("The Stack Frame").
    jmp __glibc_compat_start_cee
    .cfi_endproc
    )asm");
#elif defined(__i386__) // } {
    // See H.J. Lu, D.L. Kreitzer, M. Girkar, Z. Ansari,
    // "System V Application Binary Interface Intel386 Architecture Processor Supplement Version 1.1",
    // pages 18, 19, and 20 of section 2.3.1 ("Initial Stack and Register State"),
    // found under section 2.3 ("Process Initialization").
    __asm__(R"asm(
.symver __libc_start_main, __libc_start_main@GLIBC_2.0
.text
.hidden __glibc_compat_start
.globl __glibc_compat_start
.type __glibc_compat_start, "function"
.align 1<<4
__glibc_compat_start:
    .cfi_startproc
    xor  %ebp, %ebp # Clear ebp to mark this frame as the deepest stack frame.
    mov  %esp, %eax # Contains the address pointing to the beginning (low address) of the initial process stack.
    and  $~15, %esp # Align the stack to a 16 byte boundary.
    sub  $8, %esp   # Decrement the stack pointer by 8 bytes.
    push %edx       # "C" parameter 2: Contains a function pointer that __libc_start_main will register as an atexit handler; used for dll deinitializers for dlls with initializers that have run before the main entry point.
    push %eax       # "C" parameter 1: Points to the initial data block. The stack is now aligned to a 16 byte boundary.
    sub  $4, %esp   # Make esp + 4 a multiple of 16; see the sysv i386 abi, section 2.2.2 ("The Stack Frame").
    jmp  __glibc_compat_start_cee
    .cfi_endproc
    )asm");
#elif defined(__aarch64__) // } {
    __asm__(R"asm(
.symver __libc_start_main, __libc_start_main@GLIBC_2.17
.text
.hidden __glibc_compat_start
.globl __glibc_compat_start
.type __glibc_compat_start, "function"
.p2align 6
__glibc_compat_start:
    .cfi_startproc
    .cfi_undefined x30
    mov x29, #0      // Clear the frame pointer register.
    mov x30, #0      // Clear the link register.
    mov x1, x0       // "C" parameter 1: Contains a function pointer that __libc_start_main will register as an atexit handler; used for dll deinitializers for dlls with initializers that have run before the main entry point.
    mov x0, sp       // "C" parameter 2: Contains the address pointing to the beginning (low address) of the initial process stack.
    and sp, x0, #~15 // Align the stack to a 16 byte boundary.
    b   __glibc_compat_start_cee
    .cfi_endproc
    )asm");
#endif // }

// atexit is implemented with a statically-linked wrapper that forwards
// parameters to __cxa_atexit.
extern "C" {
    __attribute__((visibility("hidden")))
    void *__dso_handle = &__dso_handle;

    using atexit_func_t = void (*) ();

    extern int
    __cxa_atexit(atexit_func_t f, void *arg, void *dso);

    int __attribute__((visibility("hidden")))
    atexit(atexit_func_t f) { return __cxa_atexit(f, nullptr, __dso_handle); }

    // TODO: is at_quick_exit necessary?
}

extern "C" {
    extern void __cxa_finalize(void *) __attribute__((weak));

    static int has_run_cpp_destructors = 0;

    // See:
    // - https://public-inbox.org/libc-alpha/20190402150157.GM23599@brightrain.aerifal.cx/T/
    // - https://sourceware.org/pipermail/libc-alpha/2019-April/102446.html
    // - https://sourceware.org/pipermail/libc-alpha/2019-April/102472.html
    // TODO: deal with non-PIC, non-PIE
    static void
    __musl_glibc_compat_run_cpp_destructors() {
        if (has_run_cpp_destructors) return;
        has_run_cpp_destructors = 1;
        __cxa_finalize(__dso_handle);
    }

    __attribute__((section(".fini_array"), used))
    static fini_t run_cpp_destructors = &__musl_glibc_compat_run_cpp_destructors;
}
