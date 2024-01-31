#pragma once

#if !defined(__BEGIN_DECLS)
    #if defined(__cplusplus)
        #define __BEGIN_DECLS extern "C" {
    #else
        #define __BEGIN_DECLS
    #endif
#endif

#if !defined(__END_DECLS)
    #if defined(__cplusplus)
        #define __END_DECLS }
    #else
        #define __END_DECLS
    #endif
#endif

#if !defined(__THROW)
    #define __THROW __attribute__ ((__nothrow__, __leaf__))
#endif

#if !defined(__THROWNL)
    #define __THROWNL __attribute__ ((__nothrow__))
#endif

#if !defined(__nonnull)
    #define __nonnull(params) __attribute__ ((__nonnull__ params))
#endif

#if !defined(__attribute_deprecated__)
    #define __attribute_deprecated__ __attribute__ ((__deprecated__))
#endif

#if !defined(__attribute_const__)
    #define __attribute_const__ __attribute__ ((__const__))
#endif

#if !defined(__glibc_unlikely)
    #define __glibc_unlikely(x) __builtin_expect(!!(x), 0)
#endif

#if !defined(__glibc_likely)
    #define __glibc_likely(x) __builtin_expect(!!(x), 1)
#endif

#if !defined(__GLIBC__) && !defined(__GLIBC_MINOR__)
    #define __GLIBC__ 2
    #define __GLIBC_MINOR__ 34
#else
    #error "Unexpected foreign definnition of __GLIBC__ or __GLIBC_MINOR__; did a glibc header get included?"
#endif

#define __GLIBC_PREREQ(maj, min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
