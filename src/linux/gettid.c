#define _GNU_SOURCE
#include <unistd.h>
#include "pthread_impl.h"

pid_t gettid(void)
{
#if GMUSL_gcompat__musl_global_state
	return __pthread_self()->tid;
#else
	int ret = syscall(SYS_gettid);
	return ret;
#endif
}
