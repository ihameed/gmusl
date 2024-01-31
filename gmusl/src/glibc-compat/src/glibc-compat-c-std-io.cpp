#include "../../src/include/features.h"

#include "glibc-compat-c-std-io.h"
#include "glibc-compat-common.hpp"

#define _forceinline __attribute__((always_inline)) inline
#define _noinline __attribute__((noinline))

extern "C" {

union _G_fpos64_t;
using fpos_t = _G_fpos64_t;

extern FILE *
fopen64(char const * __restrict, char const * __restrict);

extern FILE *
freopen64(const char * __restrict, const char * __restrict, FILE * __restrict);

extern int
fgetpos64(FILE * __restrict, fpos_t * __restrict);

extern int
fsetpos64(FILE * __restrict, fpos_t const * __restrict);

extern int
__uflow(FILE *f);

#if __SIZEOF_LONG__ == 4
    FILE *
    fopen(const char * __restrict x, const char * __restrict y) { return fopen64(x, y); }

    FILE *
    freopen(const char * __restrict x, const char * __restrict y, FILE * __restrict z) { return freopen64(x, y, z); }

    int
    fgetpos(FILE *__restrict f, fpos_t *__restrict p) { return fgetpos64(f, p); }

    int
    fsetpos(FILE * f, const fpos_t * p) { return fsetpos64(f, p); }
#elif __SIZEOF_LONG__ == 8
    // Do nothing. glibc will always use "large file" 64-bit offsets and will
    // not need to explicitly open the underlying fd with O_LARGEFILE.
#else
    #error "Unexpected non-4/8 __SIZEOF_LONG__"
#endif

}
