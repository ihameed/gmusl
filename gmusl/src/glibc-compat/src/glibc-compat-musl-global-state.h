#pragma once

#if defined(__cplusplus)
    extern "C" {
#endif

#define __NEED_size_t
#include <bits/alltypes.h>
#include <limits.h>

struct __locale_map; // XXXih

struct __locale_struct_XXXih { // XXXih
	char __locale_struct_unused;
};

struct __musl_global_state {
    size_t __glibc_compat_page_size__;
};

size_t __attribute__((visibility("hidden"), noinline))
__musl_glibc_lazy_init_page_size();

#define __gmusl_likely(x) __builtin_expect(x, 1)

#ifndef PAGE_SIZE
#define PAGE_SIZE (__gmusl_likely(__musl_global_state.__glibc_compat_page_size__ != 0) ? __musl_global_state.__glibc_compat_page_size__ : __musl_glibc_lazy_init_page_size())
#endif

extern hidden struct __musl_global_state __musl_global_state;
#define libc __musl_global_state

#if defined(__cplusplus)
    } // extern "C"
#endif
