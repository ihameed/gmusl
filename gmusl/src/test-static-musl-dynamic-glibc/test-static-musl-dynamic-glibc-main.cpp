#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <stdint.h>

static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static pthread_rwlock_t rwmtx = PTHREAD_RWLOCK_INITIALIZER;
static bool stop = false;

void *
thread_proc(void *) {
    printf("hello from thread\n");
    pthread_cond_t pcond;
    pthread_cond_init(&pcond, nullptr);
    pthread_cond_destroy(&pcond);
    return nullptr;
}

struct dynamic_loader_global_data_t {
        int debug_mask;
        char const *platform;
        size_t platform_len;
        size_t page_size;
        size_t min_sig_stack_size;
        int inhibit_cache;
        int clock_tick;
        int verbose;
        int debug_fd;
        int lazy;
        int bind_not;
        int dynamic_weak;
        int fpu_control;
        uint64_t hwcap;
        uint64_t hwcap_mask;
        uintptr_t *auxv;
};

extern "C"
int
main(int argc, char **argv) {
    auto const ptr = static_cast<dynamic_loader_global_data_t const *>(dlsym(RTLD_DEFAULT, "_rtld_global_ro"));
    printf("got ptr = %p\n", ptr);
    printf("got auxv = %p\n", ptr->auxv);
    auto const dll = dlopen("libc.so.6", RTLD_LOCAL | RTLD_NOW);
    auto const raw_glibc_printf = dlsym(dll, "printf");
    auto const glibc_printf = reinterpret_cast<int (*) (char const *, ...)>(raw_glibc_printf);
    glibc_printf("glibc hober\n");
    printf("hober!\n");
    printf("glibc_printf = %p; musl printf = %p\n", glibc_printf, &printf);

    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    int val;
    int read = sscanf("15", "%d", &val);
    printf("scanf read = %d; val = %d\n", read, val);

    pthread_t pth { };
    pthread_create(&pth, nullptr, &thread_proc, nullptr);
    auto const horb = faccessat(5, "ass", 6, 6);
    printf("horb = %d\n", horb);

    void *thr_ret = nullptr;
    pthread_join(pth, &thr_ret);
    return 0;
}
