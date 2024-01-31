#include <features.h>

#if !GMUSL_gcompat__glibc_cstdio // {

#include "stdio_impl.h"
#include <limits.h>
#include <errno.h>
#include <stdint.h>
#include <stdlib.h>
#include <wchar.h>

#else // } {

	#include <bits/alltypes.h>
	#include "../include/stdarg.h" // va_list, va_arg, va_start
	#include "../gmusl/src/glibc-compat/src/glibc-compat-c-std-io.h"
	#include <string.h> // memcpy
	#include <errno.h> // EOVERFLOW
	#include <limits.h> // INT_MAX

#endif // }

struct cookie {
	wchar_t *ws;
	size_t l;
};

#if !GMUSL_gcompat__glibc_cstdio // {

static size_t sw_write(FILE *f, const unsigned char *s, size_t l)
{
	size_t l0 = l;
	int i = 0;
	struct cookie *c = f->cookie;
	if (s!=f->wbase && sw_write(f, f->wbase, f->wpos-f->wbase)==-1)
		return -1;
	while (c->l && l && (i=mbtowc(c->ws, (void *)s, l))>=0) {
		if (!i) i=1;
		s+=i;
		l-=i;
		c->l--;
		c->ws++;
	}
	*c->ws = 0;
	if (i < 0) {
		f->wpos = f->wbase = f->wend = 0;
		f->flags |= F_ERR;
		return i;
	}
	f->wend = f->buf + f->buf_size;
	f->wpos = f->wbase = f->buf;
	return l0;
}

int vswprintf(wchar_t *restrict s, size_t n, const wchar_t *restrict fmt, va_list ap)
{
	int r;
	unsigned char buf[256];
	struct cookie c = { s, n-1 };
	FILE f = {
		.lbf = EOF,
		.write = sw_write,
		.lock = -1,
		.buf = buf,
		.buf_size = sizeof buf,
		.cookie = &c,
	};

	if (!n) {
		return -1;
	}
	r = vfwprintf(&f, fmt, ap);
	sw_write(&f, 0, 0);
	return r>=n ? -1 : r;
}

#else // } {

#define MIN(a, b) ((a) < (b) ? (a) : (b))
int mbtowc(wchar_t *restrict wc, const char *restrict src, size_t n);

static void
sn_writew(FILE * restrict f, wchar_t const * restrict s, size_t l) {
	struct cookie *c = (struct cookie *) f->_IO_read_ptr;
	size_t k = MIN(c->l, l);
	if (k) {
		memcpy(c->ws, s, k * sizeof(wchar_t));
		c->ws += k;
		c->l -= k;
	}
	*c->ws = 0;
}

static void
sn_writec(FILE * restrict f, char const * restrict s, size_t l) {
	struct cookie *c = (struct cookie *) f->_IO_read_ptr;
	size_t l0 = l;
	int i = 0;
	while (c->l && l && (i=mbtowc(c->ws, (void *)s, l))>=0) {
		if (!i) i=1;
		s+=i;
		l-=i;
		c->l--;
		c->ws++;
	}
	*c->ws = 0;
}

int
__vfwprintf_internal(FILE * restrict f, wchar_t const * restrict fmt,
	musl_glibc_cstdio_outw_t out,
	musl_glibc_cstdio_out_t outc,
	va_list ap);

int
vswprintf(wchar_t *restrict s, size_t n, const wchar_t *restrict fmt, va_list ap)
{
	int r;
	unsigned char buf[256];
	struct cookie c = { s, n-1 };
	struct _IO_FILE fake_glibc_file = { ._flags = 0, ._IO_read_ptr = (char *) &c };
	if (n == 0) {
		return -1;
	} else if (n > INT_MAX) {
		errno = EOVERFLOW;
		return -1;
	}
	r = __vfwprintf_internal(&fake_glibc_file, fmt, &sn_writew, &sn_writec, ap);
	return r>=n ? -1 : r;
}

#endif // }
