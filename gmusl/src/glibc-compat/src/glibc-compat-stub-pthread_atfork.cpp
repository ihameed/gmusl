extern "C" {

extern void *__dso_handle __attribute__((visibility("hidden")));

extern int
__register_atfork(void (*prepare)(void), void (*parent)(void), void (*child)(void), void *dso);

// XXXih: ?????? ld.bfd will pull this in unconditionally, even with -ffunction-sections
// and --gc-sections, if this definition is placed inside glibc-compat-csu-init.cpp.
// Work around this by adding yet another file.
int __attribute__((visibility("hidden")))
pthread_atfork(void (*prepare)(void), void (*parent)(void), void (*child)(void)) {
    return __register_atfork(prepare, parent, child, __dso_handle);
}

}
