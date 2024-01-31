#pragma once

#if defined(GMUSL_use_glibc_compat)
    #define __GMUSL_gcompat__use_glibc_compat 1
#endif

#if !defined(__GMUSL_gcompat__use_glibc_compat)
    #define __GMUSL_gcompat__use_glibc_compat 1
#endif
