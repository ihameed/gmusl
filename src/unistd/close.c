#include <unistd.h>
#include <errno.h>
#include "aio_impl.h"
#include "syscall.h"

#if GMUSL_gcompat__musl_global_state
static int dummy(int fd)
{
	return fd;
}

weak_alias(dummy, __aio_close);
#endif

int close(int fd)
{
#if GMUSL_gcompat__musl_global_state
	fd = __aio_close(fd);
#endif
	int r = __syscall_cp(SYS_close, fd);
	if (r == -EINTR) r = 0;
	return __syscall_ret(r);
}
