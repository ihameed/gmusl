#include <features.h>

#if !GMUSL_gcompat__glibc_cstdio
#include "stdio_impl.h"
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
	#include <bits/alltypes.h>
	#include <errno.h>
	#include <limits.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
#endif

#if GMUSL_gcompat__glibc_cstdio
	typedef void cbenv_t;
	typedef off_t *cookieoffs_t;
	typedef int seekret_t;
	typedef ssize_t writeret_t;
	typedef char bufchar_t;
	#define __get_cookie(f) (&((struct ms_FILE *)(f))->c)
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
	char **bufp;
	size_t *sizep;
	size_t pos;
	char *buf;
	size_t len;
	size_t space;
};

struct ms_FILE {
#if !GMUSL_gcompat__glibc_cstdio
	FILE f;
#endif
	struct cookie c;
	unsigned char buf[BUFSIZ];
};

static seekret_t ms_seek(cbenv_t *f, cookieoffs_t _off, int whence)
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
	if (off < -base || off > SSIZE_MAX-base) goto fail;
	off = c->pos = base+off;
	__return_off(off, _off);
}

static writeret_t ms_write(cbenv_t *f, const bufchar_t *buf, size_t len)
{
	struct cookie *c = __get_cookie(f);
	size_t len2;
	char *newbuf;
#if !GMUSL_gcompat__glibc_cstdio
	len2 = f->wpos - f->wbase;
	if (len2) {
		if (ms_write(f, f->wbase, len2) < len2) return 0;
	}
#endif
	if (len + c->pos >= c->space) {
		len2 = 2*c->space+1 | c->pos+len+1;
		newbuf = realloc(c->buf, len2);
		if (!newbuf) return 0;
		*c->bufp = c->buf = newbuf;
		memset(c->buf + c->space, 0, len2 - c->space);
		c->space = len2;
	}
	memcpy(c->buf+c->pos, buf, len);
	c->pos += len;
	if (c->pos >= c->len) c->len = c->pos;
	*c->sizep = c->pos;
	return len;
}

static int ms_close(cbenv_t *f)
{
	__deallocate(f);
	return 0;
}

FILE *open_memstream(char **bufp, size_t *sizep)
{
	struct ms_FILE *f;
	char *buf;

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
	f->f.buf_size = sizeof f->buf;
	f->f.lbf = EOF;
	f->f.write = ms_write;
	f->f.seek = ms_seek;
	f->f.close = ms_close;
	f->f.mode = -1;

	if (!libc.threaded) f->f.lock = -1;

	return __ofl_add(&f->f);
#else
	cookie_io_functions_t iofuncs = {
		.read = 0,
		.seek = &ms_seek,
		.write = &ms_write,
		.close = &ms_close,
	};
	FILE *ret = fopencookie(f, "wb", iofuncs);
	if (ret == 0) {
		free(f);
	}
	return ret;
#endif
}
