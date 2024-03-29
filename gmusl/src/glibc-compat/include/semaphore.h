#ifndef _SEMAPHORE_H
#define _SEMAPHORE_H
#ifdef __cplusplus
extern "C" {
#endif

#include <features.h>

#define __NEED_time_t
#define __NEED_struct_timespec
#include <bits/alltypes.h>

#include <fcntl.h>

#include <bits/semaphore.h>

int    sem_close(sem_t *);
int    sem_destroy(sem_t *);
int    sem_getvalue(sem_t *__restrict, int *__restrict);
int    sem_init(sem_t *, int, unsigned);
sem_t *sem_open(const char *, int, ...);
int    sem_post(sem_t *);
int    sem_timedwait(sem_t *__restrict, const struct timespec *__restrict);
int    sem_trywait(sem_t *);
int    sem_unlink(const char *);
int    sem_wait(sem_t *);

#ifdef __cplusplus
}
#endif
#endif
