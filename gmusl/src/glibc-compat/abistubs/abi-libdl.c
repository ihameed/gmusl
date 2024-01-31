#if defined(__amd64__) && !defined(__ILP32__) // (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.2.5");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.3.3");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.2.5");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.2.5");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.3.3");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.3.4");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.2.5");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.2.5");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.2.5");
#elif defined(__i386__) // ) (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.0");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.3.3");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.0");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.0");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.3.3");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.3.4");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.1");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.0");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.1");
#elif defined(__aarch64__) // ) (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.17");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.17");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.17");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.17");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.17");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.17");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.17");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.17");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.17");
#elif defined(__arm__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.4");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.4");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.4");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.4");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.4");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.4");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.4");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.4");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.4");
#elif defined(__arm__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.4");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.4");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.4");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.4");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.4");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.4");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.4");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.4");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.4");
#elif defined(__riscv) && __riscv_xlen == 64 // ) (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.27");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.27");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.27");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.27");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.27");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.27");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.27");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.27");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.27");
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.17");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.17");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.17");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.17");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.17");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.17");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.17");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.17");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.17");
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.3");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.3.3");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.3");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.3");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.3.3");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.3.4");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.3");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.3");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.3");
#elif defined(__powerpc__) && !defined(__powerpc64__) // ) (
    __attribute__((visibility("default"))) void dladdr_() { }
    __attribute__((visibility("default"))) void dladdr1_() { }
    __attribute__((visibility("default"))) void dlclose_() { }
    __attribute__((visibility("default"))) void dlerror_() { }
    __attribute__((visibility("default"))) void dlinfo_() { }
    __attribute__((visibility("default"))) void dlmopen_() { }
    __attribute__((visibility("default"))) void dlopen_() { }
    __attribute__((visibility("default"))) void dlsym_() { }
    __attribute__((visibility("default"))) void dlvsym_() { }
    __asm__(".symver dladdr_, dladdr@@@GLIBC_2.0");
    __asm__(".symver dladdr1_, dladdr1@@@GLIBC_2.3.3");
    __asm__(".symver dlclose_, dlclose@@@GLIBC_2.0");
    __asm__(".symver dlerror_, dlerror@@@GLIBC_2.0");
    __asm__(".symver dlinfo_, dlinfo@@@GLIBC_2.3.3");
    __asm__(".symver dlmopen_, dlmopen@@@GLIBC_2.3.4");
    __asm__(".symver dlopen_, dlopen@@@GLIBC_2.1");
    __asm__(".symver dlsym_, dlsym@@@GLIBC_2.0");
    __asm__(".symver dlvsym_, dlvsym@@@GLIBC_2.1");
#endif // )
