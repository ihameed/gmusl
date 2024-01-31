#include <features.h>

#if !GMUSL_gcompat__glibc_cstdio
#include "stdio_impl.h"
#include <wchar.h>
#include <errno.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include "libc.h"
#else
	#if !defined(_GNU_SOURCE)
		#define _GNU_SOURCE
	#endif
	#define __NEED_size_t
	#define __NEED_uint32_t
	#include <bits/alltypes.h>
	#include <errno.h>
	#include <limits.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	struct __glibc_mbstate_layout {
		uint32_t __count;
		uint32_t __value;
	};
	typedef struct __glibc_mbstate_layout mbstate_t;
	size_t mbsnrtowcs(wchar_t *restrict wcs, const char **restrict src, size_t n, size_t wn, mbstate_t *restrict st);
	int fwide(FILE *f, int mode);
#endif

#if GMUSL_gcompat__glibc_cstdio
	typedef void cbenv_t;
	typedef off_t *cookieoffs_t;
	typedef int seekret_t;
	typedef ssize_t writeret_t;
	typedef char bufchar_t;
	#define __get_cookie(f) (&((struct wms_FILE *)(f))->c)
	#define __deallocate(f) free(f)
	#define __get_off(off) (*off)
	#define __return_off(off, _off) do { *(_off) = (off); return 0; } while (0)
#else
	typedef FILE cbenv_t;
	typedef off_t cookieoffs_t;
	typedef off_t seekret_t;
	typedef size_t writeret_t;
	typedef unsigned char bufchar_t;
	#define __get_cookie(f) ((f)->cookie)
	#define __deallocate(f)
	#define __get_off(off) (off)
	#define __return_off(off, _off) do { return off; } while (0)
#endif

struct cookie {
	wchar_t **bufp;
	size_t *sizep;
	size_t pos;
	wchar_t *buf;
	size_t len;
	size_t space;
	mbstate_t mbs;
};

struct wms_FILE {
#if !GMUSL_gcompat__glibc_cstdio
	FILE f;
#endif
	struct cookie c;
	unsigned char buf[1];
};

static seekret_t wms_seek(cbenv_t *f, cookieoffs_t _off, int whence)
{
	off_t off = __get_off(_off);
	ssize_t base;
	struct cookie *c = __get_cookie(f);
	if (whence>2U) {
fail:
		errno = EINVAL;
		return -1;
	}
	base = (size_t [3]){0, c->pos, c->len}[whence];
	if (off < -base || off > SSIZE_MAX/4-base) goto fail;
	memset(&c->mbs, 0, sizeof c->mbs);
	off = c->pos = base+off;
	__return_off(off, _off);
}

static writeret_t wms_write(cbenv_t *f, const bufchar_t *buf, size_t len)
{
	struct cookie *c = __get_cookie(f);
	wchar_t *newbuf;
	size_t len2;
#if !GMUSL_gcompat__glibc_cstdio
	len2 = f->wpos - f->wbase;
	if (len2) {
		f->wpos = f->wbase;
		if (wms_write(f, f->wbase, len2) < len2) return 0;
	}
#endif
	if (len + c->pos >= c->space) {
		len2 = 2*c->space+1 | c->pos+len+1;
		if (len2 > SSIZE_MAX/4) return 0;
		newbuf = realloc(c->buf, len2*4);
		if (!newbuf) return 0;
		*c->bufp = c->buf = newbuf;
		memset(c->buf + c->space, 0, 4*(len2 - c->space));
		c->space = len2;
	}

	len2 = mbsnrtowcs(c->buf+c->pos, (void *)&buf, len, c->space-c->pos, &c->mbs);
	if (len2 == -1) return 0;
	c->pos += len2;
	if (c->pos >= c->len) c->len = c->pos;
	*c->sizep = c->pos;
	return len;
}

static int wms_close(cbenv_t *f)
{
	__deallocate(f);
	return 0;
}

FILE *open_wmemstream(wchar_t **bufp, size_t *sizep)
{
	struct wms_FILE *f;
	wchar_t *buf;

	if (!(f=malloc(sizeof *f))) return 0;
	if (!(buf=malloc(sizeof *buf))) {
		free(f);
		return 0;
	}
#if !GMUSL_gcompat__glibc_cstdio
	memset(&f->f, 0, sizeof f->f);
	f->f.cookie = &f->c;
#endif
	memset(&f->c, 0, sizeof f->c);

	f->c.bufp = bufp;
	f->c.sizep = sizep;
	f->c.pos = f->c.len = f->c.space = *sizep = 0;
	f->c.buf = *bufp = buf;
	*buf = 0;

#if !GMUSL_gcompat__glibc_cstdio
	f->f.flags = F_NORD;
	f->f.fd = -1;
	f->f.buf = f->buf;
	f->f.buf_size = 0;
	f->f.lbf = EOF;
	f->f.write = wms_write;
	f->f.seek = wms_seek;
	f->f.close = wms_close;

	if (!libc.threaded) f->f.lock = -1;

	fwide(&f->f, 1);

	return __ofl_add(&f->f);
#else
	cookie_io_functions_t iofuncs = {
		.read = 0,
		.seek = &wms_seek,
		.write = &wms_write,
		.close = &wms_close,
	};
	FILE *ret = fopencookie(f, "wb", iofuncs);
	if (ret == 0) {
		free(f);
	}
	fwide(ret, 1);
	return ret;
#endif
}
