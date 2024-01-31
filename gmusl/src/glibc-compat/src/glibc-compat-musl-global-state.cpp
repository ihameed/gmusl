#include "glibc-compat-musl-global-state.h"

#include "../../../../include/elf.h"
#include "../../../../include/fcntl.h"
#include "../../../../include/poll.h"
#include "../../../../include/signal.h"
#include "../../../../include/locale.h"

#include "../../../../include/dlfcn.h"
#include "../../../../include/unistd.h"

extern "C" {
    locale_t __musl_glibc_dummy_locale;
    struct __musl_global_state __musl_global_state;

    unsigned long getauxval(unsigned long item);
}

size_t __attribute__((visibility("hidden"), noinline))
__musl_glibc_lazy_init_page_size() {
    using sysconf_t = long (*) (int name);
    auto psz = __musl_global_state.__glibc_compat_page_size__;
    if (psz != 0) return psz;
    auto const ret = getauxval(AT_PAGESZ);
    if (ret == 0) {
        auto const sc_ptr = reinterpret_cast<sysconf_t>(dlsym(RTLD_NEXT, "sysconf"));
        if (sc_ptr == nullptr) goto fail;
        psz = sc_ptr(_SC_PAGESIZE);
        if (psz == 0) goto fail;
    }
    __musl_global_state.__glibc_compat_page_size__ = psz;
    return psz;
    fail:
    __builtin_trap();
}
