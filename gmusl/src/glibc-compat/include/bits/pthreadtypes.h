#pragma once

#include "wordsize.h"

#if defined(__amd64__) || defined(__i386__) /* { */
    #if defined(__x86_64__)
        #if __GMUSL_wordsize == 64
            #define __GMUSL_sz_pthread_mutex_t   40
            #define __GMUSL_sz_pthread_attr_t    56
            #define __GMUSL_sz_pthread_rwlock_t  56
            #define __GMUSL_sz_pthread_barrier_t 32
        #elif __GMUSL_wordsize == 32
            #define __GMUSL_sz_pthread_mutex_t   32
            #define __GMUSL_sz_pthread_attr_t    32
            #define __GMUSL_sz_pthread_rwlock_t  44
            #define __GMUSL_sz_pthread_barrier_t 20
        #else
            #error "Unexpected __GMUSL_wordsize for amd64"
        #endif
    #elif defined(__i386__)
        #define __GMUSL_sz_pthread_mutex_t   24
        #define __GMUSL_sz_pthread_attr_t    36
        #define __GMUSL_sz_pthread_rwlock_t  32
        #define __GMUSL_sz_pthread_barrier_t 20
    #endif
    #define __GMUSL_sz_pthread_mutexattr_t   4
    #define __GMUSL_sz_pthread_cond_t        48
    #define __GMUSL_sz_pthread_condattr_t    4
    #define __GMUSL_sz_pthread_rwlockattr_t  8
    #define __GMUSL_sz_pthread_barrierattr_t 4
#elif defined(__aarch64__) /* } { */
    #if __GMUSL_wordsize == 64
        #define __GMUSL_sz_pthread_attr_t        64
        #define __GMUSL_sz_pthread_mutex_t       48
        #define __GMUSL_sz_pthread_mutexattr_t   8
        #define __GMUSL_sz_pthread_condattr_t    8
        #define __GMUSL_sz_pthread_rwlock_t      56
        #define __GMUSL_sz_pthread_barrier_t     32
        #define __GMUSL_sz_pthread_barrierattr_t 8
    #elif __GMUSL_wordsize == 32
        #define __GMUSL_sz_pthread_attr_t        32
        #define __GMUSL_sz_pthread_mutex_t       32
        #define __GMUSL_sz_pthread_mutexattr_t   4
        #define __GMUSL_sz_pthread_condattr_t    4
        #define __GMUSL_sz_pthread_rwlock_t      48
        #define __GMUSL_sz_pthread_barrier_t     20
        #define __GMUSL_sz_pthread_barrierattr_t 4
    #else
        #error "Unexpected __GMUSL_wordsize for arm64"
    #endif
    #define __GMUSL_sz_pthread_cond_t       48
    #define __GMUSL_sz_pthread_rwlockattr_t 8
#elif defined(__riscv) /* } { */
    #define __GMUSL_sz_pthread_mutexattr_t   4
    #define __GMUSL_sz_pthread_cond_t        48
    #define __GMUSL_sz_pthread_condattr_t    4
    #define __GMUSL_sz_pthread_rwlockattr_t  8
    #define __GMUSL_sz_pthread_barrierattr_t 4

    #if __GMUSL_wordsize == 64
        #define __GMUSL_sz_pthread_attr_t    56
        #define __GMUSL_sz_pthread_mutex_t   40
        #define __GMUSL_sz_pthread_rwlock_t  56
        #define __GMUSL_sz_pthread_barrier_t 32
    #elif __GMUSL_wordsize == 32
        #define __GMUSL_sz_pthread_attr_t    32
        #define __GMUSL_sz_pthread_mutex_t   32
        #define __GMUSL_sz_pthread_rwlock_t  48
        #define __GMUSL_sz_pthread_barrier_t 20
    #else
        #error "Unexpected __GMUSL_wordsize for riscv"
    #endif
#elif defined(__powerpc64__) || defined(__powerpc__) /* } { */
    #if __GMUSL_wordsize == 64
        #define __GMUSL_sz_pthread_attr_t    56
        #define __GMUSL_sz_pthread_mutex_t   40
        #define __GMUSL_sz_pthread_rwlock_t  56
        #define __GMUSL_sz_pthread_barrier_t 32
    #elif __GMUSL_wordsize == 32
        #define __GMUSL_sz_pthread_attr_t    36
        #define __GMUSL_sz_pthread_mutex_t   24
        #define __GMUSL_sz_pthread_rwlock_t  32
        #define __GMUSL_sz_pthread_barrier_t 20
    #else
        #error "Unexpected __GMUSL_wordsize for ppc64/ppc32"
    #endif
    #define __GMUSL_sz_pthread_mutexattr_t   4
    #define __GMUSL_sz_pthread_rwlockattr_t  8
    #define __GMUSL_sz_pthread_barrierattr_t 4
    #define __GMUSL_sz_pthread_cond_t        48
    #define __GMUSL_sz_pthread_condattr_t    4
#else
    #error "Unknown target architecture/data model"
#endif /* } */

#define __GMUSL_pth_align_4 __attribute__((aligned(4)))
#if defined(__i386__)
    #define __GMUSL_pth_align_8_or_4 __GMUSL_pth_align_4
#else
    #define __GMUSL_pth_align_8_or_4 __attribute__((aligned(8)))
#endif
#if __GMUSL_wordsize == 64
    #define __GMUSL_pth_align_wordsize __attribute__((aligned(8)))
#else
    #define __GMUSL_pth_align_wordsize __attribute__((aligned(4)))
#endif

struct __gmusl_pmtx_64 {
    __UINT32_TYPE__ __opaque0[4];
    __UINT32_TYPE__ __kind;
    __UINT32_TYPE__ __opaque1[1];
    __UINT64_TYPE__ __opaque2[2];
};
struct __gmusl_pmtx_amd64_x32 {
    __UINT32_TYPE__ __opaque0[4];
    __UINT32_TYPE__ __kind;
    __UINT32_TYPE__ __opaque1[1];
    __UINT32_TYPE__ __opaque2[2];
};
struct __gmusl_pmtx_32 {
    __UINT32_TYPE__ __opaque0[3];
    __UINT32_TYPE__ __kind;
    __UINT32_TYPE__ __opaque1[1];
    __UINT32_TYPE__ __opaque2[1];
};

struct __gmusl_pcnd {
    __UINT64_TYPE__ __opaque0[2];
    __UINT32_TYPE__ __opaque1[2]; /* XXXih: hppa requires alignas(16); m68k requires alignas(4) */
    __UINT32_TYPE__ __opaque2[6];
};

struct __gmusl_prwmtx_amd64_riscv64_arm64_ppc64 {
    __UINT32_TYPE__ __opaque0[8];
    __UINT64_TYPE__ __opaque1[2];
    __UINT32_TYPE__ __flags;
};
struct __gmusl_prwmtx_amd64_x32 {
    __UINT32_TYPE__ __opaque0[8];
    __UINT32_TYPE__ __opaque1[2];
    __UINT32_TYPE__ __flags;
};
struct __gmusl_prwmtx_genericle_i386_riscv32le {
    __UINT32_TYPE__ __opaque0[5];
    __UINT32_TYPE__ __opaque0_[1];
    __UINT8_TYPE__ __flags;
    __UINT8_TYPE__ __opaque1[3];
    __UINT32_TYPE__ __opaque2[1];
};
struct __gmusl_prwmtx_genericbe_ppc32 {
    __UINT32_TYPE__ __opaque0[6];
    __UINT8_TYPE__ __opaque1[3];
    __UINT8_TYPE__ __flags;
    __UINT32_TYPE__ __opaque2[1];
};

#define __PTHREAD_MUTEX_INITIALIZER(kind) { 0 }, kind, { 0 }, { 0 }
#define __GMUSL_pcnd_init() { { 0 }, { 0 }, { 0 } }
#define __PTHREAD_RWLOCK_INITIALIZER(kind) { 0 }, { 0 }, kind

#if defined(__amd64__) || __GMUSL_wordsize == 64
    #if defined(__amd64__) && __GMUSL_wordsize == 32
        typedef struct __gmusl_pmtx_amd64_x32 __gmusl_pmtx_layout_t;
    #else
        typedef struct __gmusl_pmtx_64 __gmusl_pmtx_layout_t;
    #endif
#elif __GMUSL_wordsize == 32
    typedef struct __gmusl_pmtx_32 __gmusl_pmtx_layout_t;
#else
    #error "Unexpected __GMUSL_wordsize."
#endif

#if (defined(__amd64__) && __GMUSL_wordsize == 64) \
    || (defined(__riscv) && __riscv_xlen == 64) \
    || defined(__powerpc64__) \
    || defined(__aarch64__)
    typedef struct __gmusl_prwmtx_amd64_riscv64_arm64_ppc64 __gmusl_prwmtx_layout_t;
#elif (defined(__amd64__) && __GMUSL_wordsize == 32)
    typedef struct __gmusl_prwmtx_amd64_x32 __gmusl_prwmtx_layout_t;
#elif defined(__i386__) \
    || defined(__arm__) \
    || (defined(__riscv) && __riscv_xlen == 32 && __BYTE_ORDER == 1234)
    typedef struct __gmusl_prwmtx_genericle_i386_riscv32le __gmusl_prwmtx_layout_t;
#elif defined(__powerpc__)
    typedef struct __gmusl_prwmtx_genericbe_ppc32 __gmusl_prwmtx_layout_t;
#endif

typedef union { __gmusl_pmtx_layout_t __data; char __size[__GMUSL_sz_pthread_mutex_t] __GMUSL_pth_align_wordsize; } pthread_mutex_t;
typedef union { struct __gmusl_pcnd __data; char __size[__GMUSL_sz_pthread_cond_t] __GMUSL_pth_align_8_or_4; } pthread_cond_t;
typedef union { __gmusl_prwmtx_layout_t __data; char __size[__GMUSL_sz_pthread_rwlock_t] __GMUSL_pth_align_wordsize; } pthread_rwlock_t;
typedef union { char __size[__GMUSL_sz_pthread_barrier_t] __GMUSL_pth_align_wordsize; } pthread_barrier_t;

typedef union { char __size[__GMUSL_sz_pthread_attr_t] __GMUSL_pth_align_wordsize; } pthread_attr_t;
typedef union { char __size[__GMUSL_sz_pthread_mutexattr_t] __GMUSL_pth_align_4; } pthread_mutexattr_t;
typedef union { char __size[__GMUSL_sz_pthread_condattr_t] __GMUSL_pth_align_4; } pthread_condattr_t;
typedef union { char __size[__GMUSL_sz_pthread_rwlockattr_t] __GMUSL_pth_align_wordsize; } pthread_rwlockattr_t;
typedef union { char __size[__GMUSL_sz_pthread_barrierattr_t] __GMUSL_pth_align_4; } pthread_barrierattr_t;

#undef __GMUSL_pth_align_4
#undef __GMUSL_pth_align_8_or_4
#undef __GMUSL_pth_align_wordsize
