#include <features.h>

#if !GMUSL_gcompat__glibc_cstdio // {

#include "stdio_impl.h"

#else // } {

	#define __NEED_uintptr_t
	#include <bits/alltypes.h>
	#include "../include/stdarg.h" // va_list, va_arg, va_start
	#include "../gmusl/src/glibc-compat/src/glibc-compat-c-std-io.h"
	#include <syscall.h>

#endif // }

#if !GMUSL_gcompat__glibc_cstdio // {

int vdprintf(int fd, const char *restrict fmt, va_list ap)
{
	FILE f = {
		.fd = fd, .lbf = EOF, .write = __stdio_write,
		.buf = (void *)fmt, .buf_size = 0,
		.lock = -1
	};
	return vfprintf(&f, fmt, ap);
}

#else // } {

int
__vfprintf_internal(FILE * restrict f, char const * restrict fmt, musl_glibc_cstdio_out_t out, va_list ap);

static void
vdprintf_fdout(FILE * restrict f, char const * const s, size_t const len) {
	int const fd = (int) (uintptr_t) f->_IO_read_ptr;
	char const * cursor = s;
	size_t rem = len;
	for (;;) {
	       ssize_t cnt = syscall(SYS_write, fd, cursor, len);
	       if (cnt == rem) return;
	       else if (cnt > 0) { rem -= cnt; cursor += cnt; continue; }
	       else if (cnt == EINTR) continue;
	       else { f->_flags |= _IO_ERR_SEEN; return; }
	}
}

int
vdprintf(int fd, const char *restrict fmt, va_list ap)
{
	struct _IO_FILE fake_glibc_file = { ._flags = 0, ._IO_read_ptr = (char *)(uintptr_t)(fd) };
	return __vfprintf_internal(&fake_glibc_file, fmt, &vdprintf_fdout, ap);
}

#endif // }
