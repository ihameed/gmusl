#include <features.h>

#if !GMUSL_gcompat__glibc_cstdio // {

#include "stdio_impl.h"
#include <limits.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>

#else // } {

	#include <bits/alltypes.h>
	#include "../include/stdarg.h" // va_list, va_arg, va_start
	#include "../gmusl/src/glibc-compat/src/glibc-compat-c-std-io.h"
	#include <string.h> // memcpy
	#include <errno.h> // EOVERFLOW
	#include <limits.h> // INT_MAX

#endif // }

struct cookie {
	char *s;
	size_t n;
};

#define MIN(a, b) ((a) < (b) ? (a) : (b))

#if !GMUSL_gcompat__glibc_cstdio // {
static size_t sn_write(FILE *f, const unsigned char *s, size_t l)
{
	struct cookie *c = f->cookie;
	size_t k = MIN(c->n, f->wpos - f->wbase);
	if (k) {
		memcpy(c->s, f->wbase, k);
		c->s += k;
		c->n -= k;
	}
	k = MIN(c->n, l);
	if (k) {
		memcpy(c->s, s, k);
		c->s += k;
		c->n -= k;
	}
	*c->s = 0;
	f->wpos = f->wbase = f->buf;
	/* pretend to succeed, even if we discarded extra data */
	return l;
}

int vsnprintf(char *restrict s, size_t n, const char *restrict fmt, va_list ap)
{
	unsigned char buf[1];
	char dummy[1];
	struct cookie c = { .s = n ? s : dummy, .n = n ? n-1 : 0 };
	FILE f = {
		.lbf = EOF,
		.write = sn_write,
		.lock = -1,
		.buf = buf,
		.cookie = &c,
	};

	*c.s = 0;
	return vfprintf(&f, fmt, ap);
}
#else // } {
int
__vfprintf_internal(FILE * restrict f, char const * restrict fmt, musl_glibc_cstdio_out_t out, va_list ap);

static void
sn_write(FILE * restrict f, const char * restrict s, size_t l) {
	struct cookie *c = (struct cookie *) f->_IO_read_ptr;
	size_t k = MIN(c->n, l);
	if (k) {
		memcpy(c->s, s, k);
		c->s += k;
		c->n -= k;
	}
	*c->s = 0;
}

int
vsnprintf(char *restrict s, size_t n, const char *restrict fmt, va_list ap) {
	char dummy[1];
	struct cookie c = { .s = n ? s : dummy, .n = n ? n-1 : 0 };
	struct _IO_FILE fake_glibc_file = { ._flags = 0, ._IO_read_ptr = (char *) &c };
	if (n > INT_MAX) {
		errno = EOVERFLOW;
		return -1;
	}
	*c.s = 0;
	return __vfprintf_internal(&fake_glibc_file, fmt, &sn_write, ap);
}
#endif // }
