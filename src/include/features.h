#ifndef FEATURES_H
#define FEATURES_H

#include <__gmusl-cfg.h>

#if defined(__GMUSL_gcompat__use_glibc_compat) && __GMUSL_gcompat__use_glibc_compat
    #if !defined(GMUSL_use_glibc_compat)
        #define GMUSL_use_glibc_compat
    #endif
#endif

#if !defined(GMUSL_use_glibc_compat)
    #define __GMUSL_gcompat__use_glibc_compat 0
    #define GMUSL_gcompat__musl_global_state 1
    #define GMUSL_gcompat__posix_cancellation_points 1
#else
    #define __GMUSL_gcompat__use_glibc_compat 1
    #define GMUSL_gcompat__musl_global_state 0
    #if !defined(GMUSL_no_posix_cancellation_points)
        #define GMUSL_gcompat__posix_cancellation_points 1
    #else
        #define GMUSL_gcompat__posix_cancellation_points 0
    #endif
#endif

#include "../../include/features.h"

#define weak __attribute__((__weak__))
#define hidden __attribute__((__visibility__("hidden")))
#define weak_alias(old, new) \
	extern __typeof(old) new __attribute__((__weak__, __alias__(#old)))

// XXXih: HACK: force hidden symbol visibility for symbols defined in assembly files
#include "../gmusl/src/glibc-compat/include/__glibc-compat-internal/musl-asm-symbol-hidden-visibility.h"

#endif
