#pragma once

#if defined(__aarch64__)
    #ifdef __ILP32__
        #define __GMUSL_sz_sem_t 16
    #else
        #define __GMUSL_sz_sem_t 32
    #endif
    #define __GMUSL_al_sem_t __attribute__((aligned(8)))
#else
    #include "wordsize.h"
    #if __GMUSL_wordsize == 64
        #define __GMUSL_sz_sem_t 32
        #define __GMUSL_al_sem_t __attribute__((aligned(8)))
    #else
        #define __GMUSL_sz_sem_t 16
        #define __GMUSL_al_sem_t __attribute__((aligned(4)))
    #endif
#endif

#define SEM_FAILED ((sem_t *) 0)

typedef union { char __size[__GMUSL_sz_sem_t] __GMUSL_al_sem_t; } sem_t;
