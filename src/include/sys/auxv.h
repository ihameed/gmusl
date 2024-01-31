#ifndef SYS_AUXV_H
#define SYS_AUXV_H

#include "../../../include/sys/auxv.h"

#include <features.h>

#if defined(__aarch64__) \
	|| (defined(__powerpc__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__) \
	|| (defined(__riscv))
	// The earliest version of glibc that supports arm64 and ppc64le is
	// 2.17 and the earliest version of glibc that supports 64-bit riscv is
        // 2.27; these includes support for getauxval, so just defer to glibc.
	#define __GMUSL_needs_getauxval_shim 0
#else
	#define __GMUSL_needs_getauxval_shim 1
#endif

#if __GMUSL_needs_getauxval_shim
hidden unsigned long __getauxval(unsigned long);
#else
unsigned long __getauxval(unsigned long) __asm__("getauxval");
#endif

#endif
