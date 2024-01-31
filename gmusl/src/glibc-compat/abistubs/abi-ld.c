#if defined(__amd64__) && !defined(__ILP32__) // (
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.2.5");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.3");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.2.5");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.2.5");
#elif defined(__i386__) // ) (
    __attribute__((visibility("default"))) void ___tls_get_addr_() { }
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver ___tls_get_addr_, ___tls_get_addr@@@GLIBC_2.3");
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.1");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.3");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.1");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.0");
#elif defined(__aarch64__) // ) (
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) char __stack_chk_guard_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.17");
    __asm__(".symver __stack_chk_guard_, __stack_chk_guard@@@GLIBC_2.17");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.17");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.17");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.17");
#elif defined(__arm__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ // ) (
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) char __stack_chk_guard_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.4");
    __asm__(".symver __stack_chk_guard_, __stack_chk_guard@@@GLIBC_2.4");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.4");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.4");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.4");
#elif defined(__arm__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ // ) (
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) char __stack_chk_guard_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.4");
    __asm__(".symver __stack_chk_guard_, __stack_chk_guard@@@GLIBC_2.4");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.4");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.4");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.4");
#elif defined(__riscv) && __riscv_xlen == 64 // ) (
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) char __stack_chk_guard_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.27");
    __asm__(".symver __stack_chk_guard_, __stack_chk_guard@@@GLIBC_2.27");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.27");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.27");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.27");
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ // ) (
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.17");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.17");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.17");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.17");
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ // ) (
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.3");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.3");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.3");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.3");
#elif defined(__powerpc__) && !defined(__powerpc64__) // ) (
    __attribute__((visibility("default"))) char __libc_stack_end_;
    __attribute__((visibility("default"))) void __tls_get_addr_() { }
    __attribute__((visibility("default"))) void _dl_mcount_() { }
    __attribute__((visibility("default"))) char _r_debug_;
    __asm__(".symver __libc_stack_end_, __libc_stack_end@@@GLIBC_2.1");
    __asm__(".symver __tls_get_addr_, __tls_get_addr@@@GLIBC_2.3");
    __asm__(".symver _dl_mcount_, _dl_mcount@@@GLIBC_2.1");
    __asm__(".symver _r_debug_, _r_debug@@@GLIBC_2.0");
#endif // )
