#define __musl_glibc_redirect_to_isoc99(s)
#include <stdio.h>
#include <stdarg.h>

int sscanf(const char *restrict s, const char *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vsscanf(s, fmt, ap);
	va_end(ap);
	return ret;
}

GMUSL__cstdio_alias(sscanf,__isoc99_sscanf);
