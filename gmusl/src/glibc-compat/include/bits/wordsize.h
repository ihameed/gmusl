#pragma once

#if defined(__amd64__) /* { */
    #if defined(__ILP32__)
        #define __GMUSL_wordsize 32
        #error "The x32 ABI is not supported."
    #else
        #define __GMUSL_wordsize 64
    #endif
#elif defined(__i386__) /* } { */
    #define __GMUSL_wordsize 32
#elif defined(__aarch64__) /* } { */
    #if defined(__ILP32__)
        #define __GMUSL_wordsize 32
        #error "The aarch64 ilp32 ABI is not supported. (Did you use -mabi=ilp32 with a gnu-style compiler?)"
    #else
        #define __GMUSL_wordsize 64
    #endif
#elif defined(__arm__) /* } { */
    #define __GMUSL_wordsize 32
#elif defined(__riscv) /* } { */
    #if __riscv_xlen == 64
        #define __GMUSL_wordsize 64
    #elif __riscv_xlen == 32
        #define __GMUSL_wordsize 32
        #error "32-bit risc-v is not yet supported by musl."
    #elif __riscv_xlen == 128
        #error "128-bit risc-v is not yet supported by musl."
    #else
        #error "Unsupported risc-v ABI (see riscv-c-api-doc/riscv-c-api.md)"
    #endif
#elif defined(__powerpc64__) /* } { */
    #define __GMUSL_wordsize 64
#elif defined(__powerpc__) /* } { */
    #define __GMUSL_wordsize 32
#else /* } { */
    #error "Unknown target architecture; missing definition for __GMUSL_wordsize"
#endif /* } */

#define __WORDSIZE __GMUSL_wordsize
