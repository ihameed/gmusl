#if defined(__amd64__) && !defined(__ILP32__) // (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __fork_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fork_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void longjmp_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_atfork_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_self_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void siglongjmp_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void system_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.2.5");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.2.5");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.2.5");
    __asm__(".symver __close_, __close@@@GLIBC_2.2.5");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.2.5");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.2.5");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.2.5");
    __asm__(".symver __fork_, __fork@@@GLIBC_2.2.5");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.2.5");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.2.5");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.2.5");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.2.5");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.2.5");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.2.6");
    __asm__(".symver __open_, __open@@@GLIBC_2.2.5");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.2.5");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.2.5");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.3.3");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.2.5");
    __asm__(".symver __read_, __read@@@GLIBC_2.2.5");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.2.5");
    __asm__(".symver __send_, __send@@@GLIBC_2.2.5");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.2.5");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.2.5");
    __asm__(".symver __write_, __write@@@GLIBC_2.2.5");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.2.5");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.2.5");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.2.5");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.2.5");
    __asm__(".symver accept_, accept@@@GLIBC_2.2.5");
    __asm__(".symver close_, close@@@GLIBC_2.2.5");
    __asm__(".symver connect_, connect@@@GLIBC_2.2.5");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.2.5");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.2.5");
    __asm__(".symver fork_, fork@@@GLIBC_2.2.5");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.2.5");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.2.5");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.2.5");
    __asm__(".symver longjmp_, longjmp@@@GLIBC_2.2.5");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.2.5");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.2.5");
    __asm__(".symver msync_, msync@@@GLIBC_2.2.5");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.2.5");
    __asm__(".symver open_, open@@@GLIBC_2.2.5");
    __asm__(".symver open64_, open64@@@GLIBC_2.2.5");
    __asm__(".symver pause_, pause@@@GLIBC_2.2.5");
    __asm__(".symver pread_, pread@@@GLIBC_2.2.5");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.2.5");
    __asm__(".symver pthread_atfork_, pthread_atfork@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.2.5");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.2.5");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.2.5");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.3.3");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.2.5");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.2.5");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.3.2");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.3.3");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.2.5");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.3.3");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.2.5");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.2.5");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.2.5");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.2.5");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.2.5");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.2.5");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.2.5");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.2.5");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.2.5");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.2.5");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.2.5");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.2.5");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.2.5");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.2.5");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.2.5");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.2.5");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.2.5");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.2.5");
    __asm__(".symver pthread_self_, pthread_self@@@GLIBC_2.2.5");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.2.5");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.2.5");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.2.5");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.2.5");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.3.4");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.2.5");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.2.5");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.2.5");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.2.5");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.2.5");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.2.5");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.3.3");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.3.3");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.2.5");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.2.5");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.2.5");
    __asm__(".symver raise_, raise@@@GLIBC_2.2.5");
    __asm__(".symver read_, read@@@GLIBC_2.2.5");
    __asm__(".symver recv_, recv@@@GLIBC_2.2.5");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.2.5");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.2.5");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.2.5");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.2.5");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.2.5");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.2.5");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.2.5");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.2.5");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.2.5");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.2.5");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.2.5");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.2.5");
    __asm__(".symver send_, send@@@GLIBC_2.2.5");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.2.5");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.2.5");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.2.5");
    __asm__(".symver siglongjmp_, siglongjmp@@@GLIBC_2.2.5");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.2.5");
    __asm__(".symver system_, system@@@GLIBC_2.2.5");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.2.5");
    __asm__(".symver wait_, wait@@@GLIBC_2.2.5");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.2.5");
    __asm__(".symver write_, write@@@GLIBC_2.2.5");
#elif defined(__i386__) // ) (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __fork_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __libpthread_version_placeholder_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fork_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void longjmp_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_atfork_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_self_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void siglongjmp_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void system_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.0");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.0");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.0");
    __asm__(".symver __close_, __close@@@GLIBC_2.0");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.0");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.0");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.0");
    __asm__(".symver __fork_, __fork@@@GLIBC_2.0");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.0");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.1");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.1");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.1");
    __asm__(".symver __libpthread_version_placeholder_, __libpthread_version_placeholder@@@GLIBC_2.1.2");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.0");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.2.6");
    __asm__(".symver __open_, __open@@@GLIBC_2.0");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.2");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.2");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.0");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.0");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.0");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.0");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.3.3");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.2");
    __asm__(".symver __read_, __read@@@GLIBC_2.0");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.2");
    __asm__(".symver __send_, __send@@@GLIBC_2.0");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.0");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.0");
    __asm__(".symver __write_, __write@@@GLIBC_2.0");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.0");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.0");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.0");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.0");
    __asm__(".symver accept_, accept@@@GLIBC_2.0");
    __asm__(".symver close_, close@@@GLIBC_2.0");
    __asm__(".symver connect_, connect@@@GLIBC_2.0");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.0");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.0");
    __asm__(".symver fork_, fork@@@GLIBC_2.0");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.0");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.0");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.0");
    __asm__(".symver longjmp_, longjmp@@@GLIBC_2.0");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.0");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.2");
    __asm__(".symver msync_, msync@@@GLIBC_2.0");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.0");
    __asm__(".symver open_, open@@@GLIBC_2.0");
    __asm__(".symver open64_, open64@@@GLIBC_2.2");
    __asm__(".symver pause_, pause@@@GLIBC_2.0");
    __asm__(".symver pread_, pread@@@GLIBC_2.2");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.2");
    __asm__(".symver pthread_atfork_, pthread_atfork@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.2");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.2");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.1");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.2");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.2");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.2");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.2");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.3.3");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.2");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.0");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.3.2");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.0");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.3.3");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.0");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.3.3");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.1");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.0");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.0");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.0");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.2.3");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.1");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.2");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.0");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.0");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.0");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.0");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.0");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.0");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.2");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.1");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.1");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.0");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.2");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.2");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.1");
    __asm__(".symver pthread_self_, pthread_self@@@GLIBC_2.0");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.0");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.0");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.1");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.0");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.3.4");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.0");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.0");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.2");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.2");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.2");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.2");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.2");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.0");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.3.3");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.3.3");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.2");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.2");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.2");
    __asm__(".symver raise_, raise@@@GLIBC_2.0");
    __asm__(".symver read_, read@@@GLIBC_2.0");
    __asm__(".symver recv_, recv@@@GLIBC_2.0");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.0");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.0");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.1.1");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.1");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.1");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.1");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.1.1");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.1");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.2");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.1");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.1.1");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.1");
    __asm__(".symver send_, send@@@GLIBC_2.0");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.0");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.0");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.0");
    __asm__(".symver siglongjmp_, siglongjmp@@@GLIBC_2.0");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.0");
    __asm__(".symver system_, system@@@GLIBC_2.0");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.0");
    __asm__(".symver wait_, wait@@@GLIBC_2.0");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.0");
    __asm__(".symver write_, write@@@GLIBC_2.0");
#elif defined(__aarch64__) // ) (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __fork_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fork_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void longjmp_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getname_np_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_consistent_() { }
    __attribute__((visibility("default"))) void pthread_mutex_consistent_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getrobust_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setrobust_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_self_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setname_np_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_sigqueue_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void siglongjmp_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void system_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.17");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.17");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.17");
    __asm__(".symver __close_, __close@@@GLIBC_2.17");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.17");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.17");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.17");
    __asm__(".symver __fork_, __fork@@@GLIBC_2.17");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.17");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.17");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.17");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.17");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.17");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.17");
    __asm__(".symver __open_, __open@@@GLIBC_2.17");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.17");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.17");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.17");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.17");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.17");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.17");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.17");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.17");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.17");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.17");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.17");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.17");
    __asm__(".symver __read_, __read@@@GLIBC_2.17");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.17");
    __asm__(".symver __send_, __send@@@GLIBC_2.17");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.17");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.17");
    __asm__(".symver __write_, __write@@@GLIBC_2.17");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.17");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.17");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.17");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.17");
    __asm__(".symver accept_, accept@@@GLIBC_2.17");
    __asm__(".symver close_, close@@@GLIBC_2.17");
    __asm__(".symver connect_, connect@@@GLIBC_2.17");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.17");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.17");
    __asm__(".symver fork_, fork@@@GLIBC_2.17");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.17");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.17");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.17");
    __asm__(".symver longjmp_, longjmp@@@GLIBC_2.17");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.17");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.17");
    __asm__(".symver msync_, msync@@@GLIBC_2.17");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.17");
    __asm__(".symver open_, open@@@GLIBC_2.17");
    __asm__(".symver open64_, open64@@@GLIBC_2.17");
    __asm__(".symver pause_, pause@@@GLIBC_2.17");
    __asm__(".symver pread_, pread@@@GLIBC_2.17");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.17");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.17");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.17");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.17");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.17");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.17");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.17");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.17");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.17");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.17");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.17");
    __asm__(".symver pthread_getname_np_, pthread_getname_np@@@GLIBC_2.17");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.17");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.17");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.17");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.17");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.17");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.17");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_consistent_, pthread_mutex_consistent@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_consistent_np_, pthread_mutex_consistent_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_getprioceiling_, pthread_mutex_getprioceiling@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_setprioceiling_, pthread_mutex_setprioceiling@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getprioceiling_, pthread_mutexattr_getprioceiling@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getprotocol_, pthread_mutexattr_getprotocol@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getrobust_, pthread_mutexattr_getrobust@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getrobust_np_, pthread_mutexattr_getrobust_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setprioceiling_, pthread_mutexattr_setprioceiling@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setprotocol_, pthread_mutexattr_setprotocol@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setrobust_, pthread_mutexattr_setrobust@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setrobust_np_, pthread_mutexattr_setrobust_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.17");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_self_, pthread_self@@@GLIBC_2.17");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.17");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.17");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.17");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.17");
    __asm__(".symver pthread_setname_np_, pthread_setname_np@@@GLIBC_2.17");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.17");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.17");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.17");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.17");
    __asm__(".symver pthread_sigqueue_, pthread_sigqueue@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.17");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.17");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.17");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.17");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.17");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.17");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.17");
    __asm__(".symver raise_, raise@@@GLIBC_2.17");
    __asm__(".symver read_, read@@@GLIBC_2.17");
    __asm__(".symver recv_, recv@@@GLIBC_2.17");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.17");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.17");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.17");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.17");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.17");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.17");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.17");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.17");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.17");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.17");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.17");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.17");
    __asm__(".symver send_, send@@@GLIBC_2.17");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.17");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.17");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.17");
    __asm__(".symver siglongjmp_, siglongjmp@@@GLIBC_2.17");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.17");
    __asm__(".symver system_, system@@@GLIBC_2.17");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.17");
    __asm__(".symver wait_, wait@@@GLIBC_2.17");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.17");
    __asm__(".symver write_, write@@@GLIBC_2.17");
#elif defined(__arm__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __fork_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fork_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void longjmp_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_consistent_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_self_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void siglongjmp_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void system_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.4");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.4");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.4");
    __asm__(".symver __close_, __close@@@GLIBC_2.4");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.4");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.4");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.4");
    __asm__(".symver __fork_, __fork@@@GLIBC_2.4");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.4");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.4");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.4");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.4");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.4");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.4");
    __asm__(".symver __open_, __open@@@GLIBC_2.4");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.4");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.4");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.4");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.4");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.4");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.4");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.4");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.4");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.4");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.4");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.4");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.4");
    __asm__(".symver __read_, __read@@@GLIBC_2.4");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.4");
    __asm__(".symver __send_, __send@@@GLIBC_2.4");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.4");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.4");
    __asm__(".symver __write_, __write@@@GLIBC_2.4");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.4");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.4");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.4");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.4");
    __asm__(".symver accept_, accept@@@GLIBC_2.4");
    __asm__(".symver close_, close@@@GLIBC_2.4");
    __asm__(".symver connect_, connect@@@GLIBC_2.4");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.4");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.4");
    __asm__(".symver fork_, fork@@@GLIBC_2.4");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.4");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.4");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.4");
    __asm__(".symver longjmp_, longjmp@@@GLIBC_2.4");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.4");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.4");
    __asm__(".symver msync_, msync@@@GLIBC_2.4");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.4");
    __asm__(".symver open_, open@@@GLIBC_2.4");
    __asm__(".symver open64_, open64@@@GLIBC_2.4");
    __asm__(".symver pause_, pause@@@GLIBC_2.4");
    __asm__(".symver pread_, pread@@@GLIBC_2.4");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.4");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.4");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.4");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.4");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.4");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.4");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.4");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.4");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.4");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.4");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.4");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.4");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.4");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.4");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.4");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.4");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.4");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_consistent_np_, pthread_mutex_consistent_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_getprioceiling_, pthread_mutex_getprioceiling@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_setprioceiling_, pthread_mutex_setprioceiling@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getprioceiling_, pthread_mutexattr_getprioceiling@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getprotocol_, pthread_mutexattr_getprotocol@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getrobust_np_, pthread_mutexattr_getrobust_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setprioceiling_, pthread_mutexattr_setprioceiling@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setprotocol_, pthread_mutexattr_setprotocol@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setrobust_np_, pthread_mutexattr_setrobust_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.4");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_self_, pthread_self@@@GLIBC_2.4");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.4");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.4");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.4");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.4");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.4");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.4");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.4");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.4");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.4");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.4");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.4");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.4");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.4");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.4");
    __asm__(".symver raise_, raise@@@GLIBC_2.4");
    __asm__(".symver read_, read@@@GLIBC_2.4");
    __asm__(".symver recv_, recv@@@GLIBC_2.4");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.4");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.4");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.4");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.4");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.4");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.4");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.4");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.4");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.4");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.4");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.4");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.4");
    __asm__(".symver send_, send@@@GLIBC_2.4");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.4");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.4");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.4");
    __asm__(".symver siglongjmp_, siglongjmp@@@GLIBC_2.4");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.4");
    __asm__(".symver system_, system@@@GLIBC_2.4");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.4");
    __asm__(".symver wait_, wait@@@GLIBC_2.4");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.4");
    __asm__(".symver write_, write@@@GLIBC_2.4");
#elif defined(__arm__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __fork_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fork_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void longjmp_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_consistent_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_self_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void siglongjmp_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void system_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.4");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.4");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.4");
    __asm__(".symver __close_, __close@@@GLIBC_2.4");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.4");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.4");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.4");
    __asm__(".symver __fork_, __fork@@@GLIBC_2.4");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.4");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.4");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.4");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.4");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.4");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.4");
    __asm__(".symver __open_, __open@@@GLIBC_2.4");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.4");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.4");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.4");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.4");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.4");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.4");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.4");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.4");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.4");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.4");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.4");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.4");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.4");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.4");
    __asm__(".symver __read_, __read@@@GLIBC_2.4");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.4");
    __asm__(".symver __send_, __send@@@GLIBC_2.4");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.4");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.4");
    __asm__(".symver __write_, __write@@@GLIBC_2.4");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.4");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.4");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.4");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.4");
    __asm__(".symver accept_, accept@@@GLIBC_2.4");
    __asm__(".symver close_, close@@@GLIBC_2.4");
    __asm__(".symver connect_, connect@@@GLIBC_2.4");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.4");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.4");
    __asm__(".symver fork_, fork@@@GLIBC_2.4");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.4");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.4");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.4");
    __asm__(".symver longjmp_, longjmp@@@GLIBC_2.4");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.4");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.4");
    __asm__(".symver msync_, msync@@@GLIBC_2.4");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.4");
    __asm__(".symver open_, open@@@GLIBC_2.4");
    __asm__(".symver open64_, open64@@@GLIBC_2.4");
    __asm__(".symver pause_, pause@@@GLIBC_2.4");
    __asm__(".symver pread_, pread@@@GLIBC_2.4");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.4");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.4");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.4");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.4");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.4");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.4");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.4");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.4");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.4");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.4");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.4");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.4");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.4");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.4");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.4");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.4");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.4");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.4");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.4");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.4");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_consistent_np_, pthread_mutex_consistent_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_getprioceiling_, pthread_mutex_getprioceiling@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_setprioceiling_, pthread_mutex_setprioceiling@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.4");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getprioceiling_, pthread_mutexattr_getprioceiling@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getprotocol_, pthread_mutexattr_getprotocol@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_getrobust_np_, pthread_mutexattr_getrobust_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setprioceiling_, pthread_mutexattr_setprioceiling@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setprotocol_, pthread_mutexattr_setprotocol@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_setrobust_np_, pthread_mutexattr_setrobust_np@@@GLIBC_2.4");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.4");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.4");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.4");
    __asm__(".symver pthread_self_, pthread_self@@@GLIBC_2.4");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.4");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.4");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.4");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.4");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.4");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.4");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.4");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.4");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.4");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.4");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.4");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.4");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.4");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.4");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.4");
    __asm__(".symver raise_, raise@@@GLIBC_2.4");
    __asm__(".symver read_, read@@@GLIBC_2.4");
    __asm__(".symver recv_, recv@@@GLIBC_2.4");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.4");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.4");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.4");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.4");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.4");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.4");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.4");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.4");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.4");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.4");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.4");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.4");
    __asm__(".symver send_, send@@@GLIBC_2.4");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.4");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.4");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.4");
    __asm__(".symver siglongjmp_, siglongjmp@@@GLIBC_2.4");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.4");
    __asm__(".symver system_, system@@@GLIBC_2.4");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.4");
    __asm__(".symver wait_, wait@@@GLIBC_2.4");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.4");
    __asm__(".symver write_, write@@@GLIBC_2.4");
#elif defined(__riscv) && __riscv_xlen == 64 // ) (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_default_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getname_np_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_consistent_() { }
    __attribute__((visibility("default"))) void pthread_mutex_consistent_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getrobust_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setrobust_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setattr_default_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setname_np_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_sigqueue_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.27");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.27");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.27");
    __asm__(".symver __close_, __close@@@GLIBC_2.27");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.27");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.27");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.27");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.27");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.27");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.27");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.27");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.27");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.27");
    __asm__(".symver __open_, __open@@@GLIBC_2.27");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.27");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.27");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.27");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.27");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.27");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.27");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.27");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.27");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.27");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.27");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.27");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.27");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.27");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.27");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.27");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.27");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.27");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.27");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.27");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.27");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.27");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.27");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.27");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.27");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.27");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.27");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.27");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.27");
    __asm__(".symver __read_, __read@@@GLIBC_2.27");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.27");
    __asm__(".symver __send_, __send@@@GLIBC_2.27");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.27");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.27");
    __asm__(".symver __write_, __write@@@GLIBC_2.27");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.27");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.27");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.27");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.27");
    __asm__(".symver accept_, accept@@@GLIBC_2.27");
    __asm__(".symver close_, close@@@GLIBC_2.27");
    __asm__(".symver connect_, connect@@@GLIBC_2.27");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.27");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.27");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.27");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.27");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.27");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.27");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.27");
    __asm__(".symver msync_, msync@@@GLIBC_2.27");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.27");
    __asm__(".symver open_, open@@@GLIBC_2.27");
    __asm__(".symver open64_, open64@@@GLIBC_2.27");
    __asm__(".symver pause_, pause@@@GLIBC_2.27");
    __asm__(".symver pread_, pread@@@GLIBC_2.27");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.27");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.27");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.27");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.27");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.27");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.27");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.27");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.27");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.27");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.27");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.27");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.27");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.27");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.27");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.27");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.27");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.27");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.27");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.27");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.27");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.27");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.27");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.27");
    __asm__(".symver pthread_getattr_default_np_, pthread_getattr_default_np@@@GLIBC_2.27");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.27");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.27");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.27");
    __asm__(".symver pthread_getname_np_, pthread_getname_np@@@GLIBC_2.27");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.27");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.27");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.27");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.27");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.27");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.27");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_consistent_, pthread_mutex_consistent@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_consistent_np_, pthread_mutex_consistent_np@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_getprioceiling_, pthread_mutex_getprioceiling@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_setprioceiling_, pthread_mutex_setprioceiling@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.27");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_getprioceiling_, pthread_mutexattr_getprioceiling@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_getprotocol_, pthread_mutexattr_getprotocol@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_getrobust_, pthread_mutexattr_getrobust@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_getrobust_np_, pthread_mutexattr_getrobust_np@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_setprioceiling_, pthread_mutexattr_setprioceiling@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_setprotocol_, pthread_mutexattr_setprotocol@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_setrobust_, pthread_mutexattr_setrobust@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_setrobust_np_, pthread_mutexattr_setrobust_np@@@GLIBC_2.27");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.27");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.27");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.27");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.27");
    __asm__(".symver pthread_setattr_default_np_, pthread_setattr_default_np@@@GLIBC_2.27");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.27");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.27");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.27");
    __asm__(".symver pthread_setname_np_, pthread_setname_np@@@GLIBC_2.27");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.27");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.27");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.27");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.27");
    __asm__(".symver pthread_sigqueue_, pthread_sigqueue@@@GLIBC_2.27");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.27");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.27");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.27");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.27");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.27");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.27");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.27");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.27");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.27");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.27");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.27");
    __asm__(".symver raise_, raise@@@GLIBC_2.27");
    __asm__(".symver read_, read@@@GLIBC_2.27");
    __asm__(".symver recv_, recv@@@GLIBC_2.27");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.27");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.27");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.27");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.27");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.27");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.27");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.27");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.27");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.27");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.27");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.27");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.27");
    __asm__(".symver send_, send@@@GLIBC_2.27");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.27");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.27");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.27");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.27");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.27");
    __asm__(".symver wait_, wait@@@GLIBC_2.27");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.27");
    __asm__(".symver write_, write@@@GLIBC_2.27");
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __fork_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fork_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void longjmp_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getname_np_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_consistent_() { }
    __attribute__((visibility("default"))) void pthread_mutex_consistent_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getrobust_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprioceiling_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setprotocol_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setrobust_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setrobust_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_self_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setname_np_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_sigqueue_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void siglongjmp_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void system_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.17");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.17");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.17");
    __asm__(".symver __close_, __close@@@GLIBC_2.17");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.17");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.17");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.17");
    __asm__(".symver __fork_, __fork@@@GLIBC_2.17");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.17");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.17");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.17");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.17");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.17");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.17");
    __asm__(".symver __open_, __open@@@GLIBC_2.17");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.17");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.17");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.17");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.17");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.17");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.17");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.17");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.17");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.17");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.17");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.17");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.17");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.17");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.17");
    __asm__(".symver __read_, __read@@@GLIBC_2.17");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.17");
    __asm__(".symver __send_, __send@@@GLIBC_2.17");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.17");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.17");
    __asm__(".symver __write_, __write@@@GLIBC_2.17");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.17");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.17");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.17");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.17");
    __asm__(".symver accept_, accept@@@GLIBC_2.17");
    __asm__(".symver close_, close@@@GLIBC_2.17");
    __asm__(".symver connect_, connect@@@GLIBC_2.17");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.17");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.17");
    __asm__(".symver fork_, fork@@@GLIBC_2.17");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.17");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.17");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.17");
    __asm__(".symver longjmp_, longjmp@@@GLIBC_2.17");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.17");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.17");
    __asm__(".symver msync_, msync@@@GLIBC_2.17");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.17");
    __asm__(".symver open_, open@@@GLIBC_2.17");
    __asm__(".symver open64_, open64@@@GLIBC_2.17");
    __asm__(".symver pause_, pause@@@GLIBC_2.17");
    __asm__(".symver pread_, pread@@@GLIBC_2.17");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.17");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.17");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.17");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.17");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.17");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.17");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.17");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.17");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.17");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.17");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.17");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.17");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.17");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.17");
    __asm__(".symver pthread_getname_np_, pthread_getname_np@@@GLIBC_2.17");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.17");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.17");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.17");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.17");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.17");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.17");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_consistent_, pthread_mutex_consistent@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_consistent_np_, pthread_mutex_consistent_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_getprioceiling_, pthread_mutex_getprioceiling@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_setprioceiling_, pthread_mutex_setprioceiling@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.17");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getprioceiling_, pthread_mutexattr_getprioceiling@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getprotocol_, pthread_mutexattr_getprotocol@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getrobust_, pthread_mutexattr_getrobust@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_getrobust_np_, pthread_mutexattr_getrobust_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setprioceiling_, pthread_mutexattr_setprioceiling@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setprotocol_, pthread_mutexattr_setprotocol@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setrobust_, pthread_mutexattr_setrobust@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_setrobust_np_, pthread_mutexattr_setrobust_np@@@GLIBC_2.17");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.17");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.17");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.17");
    __asm__(".symver pthread_self_, pthread_self@@@GLIBC_2.17");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.17");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.17");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.17");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.17");
    __asm__(".symver pthread_setname_np_, pthread_setname_np@@@GLIBC_2.17");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.17");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.17");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.17");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.17");
    __asm__(".symver pthread_sigqueue_, pthread_sigqueue@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.17");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.17");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.17");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.17");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.17");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.17");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.17");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.17");
    __asm__(".symver raise_, raise@@@GLIBC_2.17");
    __asm__(".symver read_, read@@@GLIBC_2.17");
    __asm__(".symver recv_, recv@@@GLIBC_2.17");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.17");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.17");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.17");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.17");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.17");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.17");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.17");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.17");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.17");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.17");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.17");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.17");
    __asm__(".symver send_, send@@@GLIBC_2.17");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.17");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.17");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.17");
    __asm__(".symver siglongjmp_, siglongjmp@@@GLIBC_2.17");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.17");
    __asm__(".symver system_, system@@@GLIBC_2.17");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.17");
    __asm__(".symver wait_, wait@@@GLIBC_2.17");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.17");
    __asm__(".symver write_, write@@@GLIBC_2.17");
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __fork_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fork_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void longjmp_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_self_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void siglongjmp_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void system_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.3");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.3");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.3");
    __asm__(".symver __close_, __close@@@GLIBC_2.3");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.3");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.3");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.3");
    __asm__(".symver __fork_, __fork@@@GLIBC_2.3");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.3");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.3");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.3");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.3");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.3");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.3");
    __asm__(".symver __open_, __open@@@GLIBC_2.3");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.3");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.3");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.3");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.3");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.3");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.3");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.3");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.3");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.3");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.3");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.3");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.3");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.3");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.3");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.3");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.3");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.3");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.3");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.3");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.3");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.3");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.3.3");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.3");
    __asm__(".symver __read_, __read@@@GLIBC_2.3");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.3");
    __asm__(".symver __send_, __send@@@GLIBC_2.3");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.3");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.3");
    __asm__(".symver __write_, __write@@@GLIBC_2.3");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.3");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.3");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.3");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.3");
    __asm__(".symver accept_, accept@@@GLIBC_2.3");
    __asm__(".symver close_, close@@@GLIBC_2.3");
    __asm__(".symver connect_, connect@@@GLIBC_2.3");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.3");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.3");
    __asm__(".symver fork_, fork@@@GLIBC_2.3");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.3");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.3");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.3");
    __asm__(".symver longjmp_, longjmp@@@GLIBC_2.3.4");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.3");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.3");
    __asm__(".symver msync_, msync@@@GLIBC_2.3");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.3");
    __asm__(".symver open_, open@@@GLIBC_2.3");
    __asm__(".symver open64_, open64@@@GLIBC_2.3");
    __asm__(".symver pause_, pause@@@GLIBC_2.3");
    __asm__(".symver pread_, pread@@@GLIBC_2.3");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.3");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.3");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.3");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.3");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.3.3");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.3");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.3");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.3");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.3.2");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.3.3");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.3");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.3");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.3.3");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.3");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.3");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.3");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.3");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.3");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.3");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.3");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.3");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.3");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.3");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.3");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.3");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.3");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.3");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.3");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.3");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.3");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.3");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.3");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.3");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.3");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.3");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.3");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.3");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.3");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.3");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.3");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.3");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.3");
    __asm__(".symver pthread_self_, pthread_self@@@GLIBC_2.3");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.3");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.3");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.3");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.3");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.3.4");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.3");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.3");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.3");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.3");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.3");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.3");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.3");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.3");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.3.3");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.3.3");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.3");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.3");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.3");
    __asm__(".symver raise_, raise@@@GLIBC_2.3");
    __asm__(".symver read_, read@@@GLIBC_2.3");
    __asm__(".symver recv_, recv@@@GLIBC_2.3");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.3");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.3");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.3");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.3");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.3");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.3");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.3");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.3");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.3");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.3");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.3");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.3");
    __asm__(".symver send_, send@@@GLIBC_2.3");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.3");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.3");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.3");
    __asm__(".symver siglongjmp_, siglongjmp@@@GLIBC_2.3.4");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.3");
    __asm__(".symver system_, system@@@GLIBC_2.3");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.3");
    __asm__(".symver wait_, wait@@@GLIBC_2.3");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.3");
    __asm__(".symver write_, write@@@GLIBC_2.3");
#elif defined(__powerpc__) && !defined(__powerpc64__) // ) (
    __attribute__((visibility("default"))) void _IO_flockfile_() { }
    __attribute__((visibility("default"))) void _IO_ftrylockfile_() { }
    __attribute__((visibility("default"))) void _IO_funlockfile_() { }
    __attribute__((visibility("default"))) void __close_() { }
    __attribute__((visibility("default"))) void __connect_() { }
    __attribute__((visibility("default"))) void __errno_location_() { }
    __attribute__((visibility("default"))) void __fcntl_() { }
    __attribute__((visibility("default"))) void __fork_() { }
    __attribute__((visibility("default"))) void __h_errno_location_() { }
    __attribute__((visibility("default"))) void __libc_allocate_rtsig_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmax_() { }
    __attribute__((visibility("default"))) void __libc_current_sigrtmin_() { }
    __attribute__((visibility("default"))) void __libpthread_version_placeholder_() { }
    __attribute__((visibility("default"))) void __lseek_() { }
    __attribute__((visibility("default"))) void __nanosleep_() { }
    __attribute__((visibility("default"))) void __open_() { }
    __attribute__((visibility("default"))) void __open64_() { }
    __attribute__((visibility("default"))) void __pread64_() { }
    __attribute__((visibility("default"))) void __pthread_cleanup_routine_() { }
    __attribute__((visibility("default"))) void __pthread_getspecific_() { }
    __attribute__((visibility("default"))) void __pthread_key_create_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void __pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void __pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void __pthread_once_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_register_cancel_defer_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void __pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void __pthread_setspecific_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_() { }
    __attribute__((visibility("default"))) void __pthread_unregister_cancel_restore_() { }
    __attribute__((visibility("default"))) void __pthread_unwind_next_() { }
    __attribute__((visibility("default"))) void __pwrite64_() { }
    __attribute__((visibility("default"))) void __read_() { }
    __attribute__((visibility("default"))) void __res_state_() { }
    __attribute__((visibility("default"))) void __send_() { }
    __attribute__((visibility("default"))) void __sigaction_() { }
    __attribute__((visibility("default"))) void __wait_() { }
    __attribute__((visibility("default"))) void __write_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_pop_restore_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_() { }
    __attribute__((visibility("default"))) void _pthread_cleanup_push_defer_() { }
    __attribute__((visibility("default"))) void accept_() { }
    __attribute__((visibility("default"))) void close_() { }
    __attribute__((visibility("default"))) void connect_() { }
    __attribute__((visibility("default"))) void fcntl_() { }
    __attribute__((visibility("default"))) void flockfile_() { }
    __attribute__((visibility("default"))) void fork_() { }
    __attribute__((visibility("default"))) void fsync_() { }
    __attribute__((visibility("default"))) void ftrylockfile_() { }
    __attribute__((visibility("default"))) void funlockfile_() { }
    __attribute__((visibility("default"))) void longjmp_() { }
    __attribute__((visibility("default"))) void lseek_() { }
    __attribute__((visibility("default"))) void lseek64_() { }
    __attribute__((visibility("default"))) void msync_() { }
    __attribute__((visibility("default"))) void nanosleep_() { }
    __attribute__((visibility("default"))) void open_() { }
    __attribute__((visibility("default"))) void open64_() { }
    __attribute__((visibility("default"))) void pause_() { }
    __attribute__((visibility("default"))) void pread_() { }
    __attribute__((visibility("default"))) void pread64_() { }
    __attribute__((visibility("default"))) void pthread_atfork_() { }
    __attribute__((visibility("default"))) void pthread_attr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_getdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_getguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_getinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_getschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_getscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_getstacksize_() { }
    __attribute__((visibility("default"))) void pthread_attr_init_() { }
    __attribute__((visibility("default"))) void pthread_attr_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_attr_setdetachstate_() { }
    __attribute__((visibility("default"))) void pthread_attr_setguardsize_() { }
    __attribute__((visibility("default"))) void pthread_attr_setinheritsched_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_attr_setschedpolicy_() { }
    __attribute__((visibility("default"))) void pthread_attr_setscope_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstack_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstackaddr_() { }
    __attribute__((visibility("default"))) void pthread_attr_setstacksize_() { }
    __attribute__((visibility("default"))) void pthread_barrier_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrier_init_() { }
    __attribute__((visibility("default"))) void pthread_barrier_wait_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_init_() { }
    __attribute__((visibility("default"))) void pthread_barrierattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_cancel_() { }
    __attribute__((visibility("default"))) void pthread_cond_broadcast_() { }
    __attribute__((visibility("default"))) void pthread_cond_destroy_() { }
    __attribute__((visibility("default"))) void pthread_cond_init_() { }
    __attribute__((visibility("default"))) void pthread_cond_signal_() { }
    __attribute__((visibility("default"))) void pthread_cond_timedwait_() { }
    __attribute__((visibility("default"))) void pthread_cond_wait_() { }
    __attribute__((visibility("default"))) void pthread_condattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_condattr_init_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setclock_() { }
    __attribute__((visibility("default"))) void pthread_condattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_create_() { }
    __attribute__((visibility("default"))) void pthread_detach_() { }
    __attribute__((visibility("default"))) void pthread_equal_() { }
    __attribute__((visibility("default"))) void pthread_exit_() { }
    __attribute__((visibility("default"))) void pthread_getaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_getattr_np_() { }
    __attribute__((visibility("default"))) void pthread_getconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_getcpuclockid_() { }
    __attribute__((visibility("default"))) void pthread_getschedparam_() { }
    __attribute__((visibility("default"))) void pthread_getspecific_() { }
    __attribute__((visibility("default"))) void pthread_join_() { }
    __attribute__((visibility("default"))) void pthread_key_create_() { }
    __attribute__((visibility("default"))) void pthread_key_delete_() { }
    __attribute__((visibility("default"))) void pthread_kill_() { }
    __attribute__((visibility("default"))) void pthread_kill_other_threads_np_() { }
    __attribute__((visibility("default"))) void pthread_mutex_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutex_init_() { }
    __attribute__((visibility("default"))) void pthread_mutex_lock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_timedlock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_trylock_() { }
    __attribute__((visibility("default"))) void pthread_mutex_unlock_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_gettype_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_init_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_mutexattr_settype_() { }
    __attribute__((visibility("default"))) void pthread_once_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_rdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_timedwrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_tryrdlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_trywrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_unlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlock_wrlock_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_destroy_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_getpshared_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_init_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setkind_np_() { }
    __attribute__((visibility("default"))) void pthread_rwlockattr_setpshared_() { }
    __attribute__((visibility("default"))) void pthread_self_() { }
    __attribute__((visibility("default"))) void pthread_setaffinity_np_() { }
    __attribute__((visibility("default"))) void pthread_setcancelstate_() { }
    __attribute__((visibility("default"))) void pthread_setcanceltype_() { }
    __attribute__((visibility("default"))) void pthread_setconcurrency_() { }
    __attribute__((visibility("default"))) void pthread_setschedparam_() { }
    __attribute__((visibility("default"))) void pthread_setschedprio_() { }
    __attribute__((visibility("default"))) void pthread_setspecific_() { }
    __attribute__((visibility("default"))) void pthread_sigmask_() { }
    __attribute__((visibility("default"))) void pthread_spin_destroy_() { }
    __attribute__((visibility("default"))) void pthread_spin_init_() { }
    __attribute__((visibility("default"))) void pthread_spin_lock_() { }
    __attribute__((visibility("default"))) void pthread_spin_trylock_() { }
    __attribute__((visibility("default"))) void pthread_spin_unlock_() { }
    __attribute__((visibility("default"))) void pthread_testcancel_() { }
    __attribute__((visibility("default"))) void pthread_timedjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_tryjoin_np_() { }
    __attribute__((visibility("default"))) void pthread_yield_() { }
    __attribute__((visibility("default"))) void pwrite_() { }
    __attribute__((visibility("default"))) void pwrite64_() { }
    __attribute__((visibility("default"))) void raise_() { }
    __attribute__((visibility("default"))) void read_() { }
    __attribute__((visibility("default"))) void recv_() { }
    __attribute__((visibility("default"))) void recvfrom_() { }
    __attribute__((visibility("default"))) void recvmsg_() { }
    __attribute__((visibility("default"))) void sem_close_() { }
    __attribute__((visibility("default"))) void sem_destroy_() { }
    __attribute__((visibility("default"))) void sem_getvalue_() { }
    __attribute__((visibility("default"))) void sem_init_() { }
    __attribute__((visibility("default"))) void sem_open_() { }
    __attribute__((visibility("default"))) void sem_post_() { }
    __attribute__((visibility("default"))) void sem_timedwait_() { }
    __attribute__((visibility("default"))) void sem_trywait_() { }
    __attribute__((visibility("default"))) void sem_unlink_() { }
    __attribute__((visibility("default"))) void sem_wait_() { }
    __attribute__((visibility("default"))) void send_() { }
    __attribute__((visibility("default"))) void sendmsg_() { }
    __attribute__((visibility("default"))) void sendto_() { }
    __attribute__((visibility("default"))) void sigaction_() { }
    __attribute__((visibility("default"))) void siglongjmp_() { }
    __attribute__((visibility("default"))) void sigwait_() { }
    __attribute__((visibility("default"))) void system_() { }
    __attribute__((visibility("default"))) void tcdrain_() { }
    __attribute__((visibility("default"))) void wait_() { }
    __attribute__((visibility("default"))) void waitpid_() { }
    __attribute__((visibility("default"))) void write_() { }
    __asm__(".symver _IO_flockfile_, _IO_flockfile@@@GLIBC_2.0");
    __asm__(".symver _IO_ftrylockfile_, _IO_ftrylockfile@@@GLIBC_2.0");
    __asm__(".symver _IO_funlockfile_, _IO_funlockfile@@@GLIBC_2.0");
    __asm__(".symver __close_, __close@@@GLIBC_2.0");
    __asm__(".symver __connect_, __connect@@@GLIBC_2.0");
    __asm__(".symver __errno_location_, __errno_location@@@GLIBC_2.0");
    __asm__(".symver __fcntl_, __fcntl@@@GLIBC_2.0");
    __asm__(".symver __fork_, __fork@@@GLIBC_2.0");
    __asm__(".symver __h_errno_location_, __h_errno_location@@@GLIBC_2.0");
    __asm__(".symver __libc_allocate_rtsig_, __libc_allocate_rtsig@@@GLIBC_2.1");
    __asm__(".symver __libc_current_sigrtmax_, __libc_current_sigrtmax@@@GLIBC_2.1");
    __asm__(".symver __libc_current_sigrtmin_, __libc_current_sigrtmin@@@GLIBC_2.1");
    __asm__(".symver __libpthread_version_placeholder_, __libpthread_version_placeholder@@@GLIBC_2.1.2");
    __asm__(".symver __lseek_, __lseek@@@GLIBC_2.0");
    __asm__(".symver __nanosleep_, __nanosleep@@@GLIBC_2.2.6");
    __asm__(".symver __open_, __open@@@GLIBC_2.0");
    __asm__(".symver __open64_, __open64@@@GLIBC_2.2");
    __asm__(".symver __pread64_, __pread64@@@GLIBC_2.2");
    __asm__(".symver __pthread_cleanup_routine_, __pthread_cleanup_routine@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_getspecific_, __pthread_getspecific@@@GLIBC_2.0");
    __asm__(".symver __pthread_key_create_, __pthread_key_create@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_destroy_, __pthread_mutex_destroy@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_init_, __pthread_mutex_init@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_lock_, __pthread_mutex_lock@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_trylock_, __pthread_mutex_trylock@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutex_unlock_, __pthread_mutex_unlock@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutexattr_destroy_, __pthread_mutexattr_destroy@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutexattr_init_, __pthread_mutexattr_init@@@GLIBC_2.0");
    __asm__(".symver __pthread_mutexattr_settype_, __pthread_mutexattr_settype@@@GLIBC_2.0");
    __asm__(".symver __pthread_once_, __pthread_once@@@GLIBC_2.0");
    __asm__(".symver __pthread_register_cancel_, __pthread_register_cancel@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_register_cancel_defer_, __pthread_register_cancel_defer@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_rwlock_destroy_, __pthread_rwlock_destroy@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_init_, __pthread_rwlock_init@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_rdlock_, __pthread_rwlock_rdlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_tryrdlock_, __pthread_rwlock_tryrdlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_trywrlock_, __pthread_rwlock_trywrlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_unlock_, __pthread_rwlock_unlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_rwlock_wrlock_, __pthread_rwlock_wrlock@@@GLIBC_2.2");
    __asm__(".symver __pthread_setspecific_, __pthread_setspecific@@@GLIBC_2.0");
    __asm__(".symver __pthread_unregister_cancel_, __pthread_unregister_cancel@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_unregister_cancel_restore_, __pthread_unregister_cancel_restore@@@GLIBC_2.3.3");
    __asm__(".symver __pthread_unwind_next_, __pthread_unwind_next@@@GLIBC_2.3.3");
    __asm__(".symver __pwrite64_, __pwrite64@@@GLIBC_2.2");
    __asm__(".symver __read_, __read@@@GLIBC_2.0");
    __asm__(".symver __res_state_, __res_state@@@GLIBC_2.2");
    __asm__(".symver __send_, __send@@@GLIBC_2.0");
    __asm__(".symver __sigaction_, __sigaction@@@GLIBC_2.0");
    __asm__(".symver __wait_, __wait@@@GLIBC_2.0");
    __asm__(".symver __write_, __write@@@GLIBC_2.0");
    __asm__(".symver _pthread_cleanup_pop_, _pthread_cleanup_pop@@@GLIBC_2.0");
    __asm__(".symver _pthread_cleanup_pop_restore_, _pthread_cleanup_pop_restore@@@GLIBC_2.0");
    __asm__(".symver _pthread_cleanup_push_, _pthread_cleanup_push@@@GLIBC_2.0");
    __asm__(".symver _pthread_cleanup_push_defer_, _pthread_cleanup_push_defer@@@GLIBC_2.0");
    __asm__(".symver accept_, accept@@@GLIBC_2.0");
    __asm__(".symver close_, close@@@GLIBC_2.0");
    __asm__(".symver connect_, connect@@@GLIBC_2.0");
    __asm__(".symver fcntl_, fcntl@@@GLIBC_2.0");
    __asm__(".symver flockfile_, flockfile@@@GLIBC_2.0");
    __asm__(".symver fork_, fork@@@GLIBC_2.0");
    __asm__(".symver fsync_, fsync@@@GLIBC_2.0");
    __asm__(".symver ftrylockfile_, ftrylockfile@@@GLIBC_2.0");
    __asm__(".symver funlockfile_, funlockfile@@@GLIBC_2.0");
    __asm__(".symver longjmp_, longjmp@@@GLIBC_2.3.4");
    __asm__(".symver lseek_, lseek@@@GLIBC_2.0");
    __asm__(".symver lseek64_, lseek64@@@GLIBC_2.2");
    __asm__(".symver msync_, msync@@@GLIBC_2.0");
    __asm__(".symver nanosleep_, nanosleep@@@GLIBC_2.0");
    __asm__(".symver open_, open@@@GLIBC_2.0");
    __asm__(".symver open64_, open64@@@GLIBC_2.2");
    __asm__(".symver pause_, pause@@@GLIBC_2.0");
    __asm__(".symver pread_, pread@@@GLIBC_2.2");
    __asm__(".symver pread64_, pread64@@@GLIBC_2.2");
    __asm__(".symver pthread_atfork_, pthread_atfork@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_destroy_, pthread_attr_destroy@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getaffinity_np_, pthread_attr_getaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_attr_getdetachstate_, pthread_attr_getdetachstate@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getguardsize_, pthread_attr_getguardsize@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_getinheritsched_, pthread_attr_getinheritsched@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getschedparam_, pthread_attr_getschedparam@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getschedpolicy_, pthread_attr_getschedpolicy@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getscope_, pthread_attr_getscope@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_getstack_, pthread_attr_getstack@@@GLIBC_2.2");
    __asm__(".symver pthread_attr_getstackaddr_, pthread_attr_getstackaddr@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_getstacksize_, pthread_attr_getstacksize@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_init_, pthread_attr_init@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_setaffinity_np_, pthread_attr_setaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_attr_setdetachstate_, pthread_attr_setdetachstate@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setguardsize_, pthread_attr_setguardsize@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_setinheritsched_, pthread_attr_setinheritsched@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setschedparam_, pthread_attr_setschedparam@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setschedpolicy_, pthread_attr_setschedpolicy@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setscope_, pthread_attr_setscope@@@GLIBC_2.0");
    __asm__(".symver pthread_attr_setstack_, pthread_attr_setstack@@@GLIBC_2.2");
    __asm__(".symver pthread_attr_setstackaddr_, pthread_attr_setstackaddr@@@GLIBC_2.1");
    __asm__(".symver pthread_attr_setstacksize_, pthread_attr_setstacksize@@@GLIBC_2.1");
    __asm__(".symver pthread_barrier_destroy_, pthread_barrier_destroy@@@GLIBC_2.2");
    __asm__(".symver pthread_barrier_init_, pthread_barrier_init@@@GLIBC_2.2");
    __asm__(".symver pthread_barrier_wait_, pthread_barrier_wait@@@GLIBC_2.2");
    __asm__(".symver pthread_barrierattr_destroy_, pthread_barrierattr_destroy@@@GLIBC_2.2");
    __asm__(".symver pthread_barrierattr_getpshared_, pthread_barrierattr_getpshared@@@GLIBC_2.3.3");
    __asm__(".symver pthread_barrierattr_init_, pthread_barrierattr_init@@@GLIBC_2.2");
    __asm__(".symver pthread_barrierattr_setpshared_, pthread_barrierattr_setpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_cancel_, pthread_cancel@@@GLIBC_2.0");
    __asm__(".symver pthread_cond_broadcast_, pthread_cond_broadcast@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_destroy_, pthread_cond_destroy@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_init_, pthread_cond_init@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_signal_, pthread_cond_signal@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_timedwait_, pthread_cond_timedwait@@@GLIBC_2.3.2");
    __asm__(".symver pthread_cond_wait_, pthread_cond_wait@@@GLIBC_2.3.2");
    __asm__(".symver pthread_condattr_destroy_, pthread_condattr_destroy@@@GLIBC_2.0");
    __asm__(".symver pthread_condattr_getclock_, pthread_condattr_getclock@@@GLIBC_2.3.3");
    __asm__(".symver pthread_condattr_getpshared_, pthread_condattr_getpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_condattr_init_, pthread_condattr_init@@@GLIBC_2.0");
    __asm__(".symver pthread_condattr_setclock_, pthread_condattr_setclock@@@GLIBC_2.3.3");
    __asm__(".symver pthread_condattr_setpshared_, pthread_condattr_setpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_create_, pthread_create@@@GLIBC_2.1");
    __asm__(".symver pthread_detach_, pthread_detach@@@GLIBC_2.0");
    __asm__(".symver pthread_equal_, pthread_equal@@@GLIBC_2.0");
    __asm__(".symver pthread_exit_, pthread_exit@@@GLIBC_2.0");
    __asm__(".symver pthread_getaffinity_np_, pthread_getaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_getattr_np_, pthread_getattr_np@@@GLIBC_2.2.3");
    __asm__(".symver pthread_getconcurrency_, pthread_getconcurrency@@@GLIBC_2.1");
    __asm__(".symver pthread_getcpuclockid_, pthread_getcpuclockid@@@GLIBC_2.2");
    __asm__(".symver pthread_getschedparam_, pthread_getschedparam@@@GLIBC_2.0");
    __asm__(".symver pthread_getspecific_, pthread_getspecific@@@GLIBC_2.0");
    __asm__(".symver pthread_join_, pthread_join@@@GLIBC_2.0");
    __asm__(".symver pthread_key_create_, pthread_key_create@@@GLIBC_2.0");
    __asm__(".symver pthread_key_delete_, pthread_key_delete@@@GLIBC_2.0");
    __asm__(".symver pthread_kill_, pthread_kill@@@GLIBC_2.0");
    __asm__(".symver pthread_kill_other_threads_np_, pthread_kill_other_threads_np@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_destroy_, pthread_mutex_destroy@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_init_, pthread_mutex_init@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_lock_, pthread_mutex_lock@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_timedlock_, pthread_mutex_timedlock@@@GLIBC_2.2");
    __asm__(".symver pthread_mutex_trylock_, pthread_mutex_trylock@@@GLIBC_2.0");
    __asm__(".symver pthread_mutex_unlock_, pthread_mutex_unlock@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_destroy_, pthread_mutexattr_destroy@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_getkind_np_, pthread_mutexattr_getkind_np@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_getpshared_, pthread_mutexattr_getpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_mutexattr_gettype_, pthread_mutexattr_gettype@@@GLIBC_2.1");
    __asm__(".symver pthread_mutexattr_init_, pthread_mutexattr_init@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_setkind_np_, pthread_mutexattr_setkind_np@@@GLIBC_2.0");
    __asm__(".symver pthread_mutexattr_setpshared_, pthread_mutexattr_setpshared@@@GLIBC_2.2");
    __asm__(".symver pthread_mutexattr_settype_, pthread_mutexattr_settype@@@GLIBC_2.1");
    __asm__(".symver pthread_once_, pthread_once@@@GLIBC_2.0");
    __asm__(".symver pthread_rwlock_destroy_, pthread_rwlock_destroy@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_init_, pthread_rwlock_init@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_rdlock_, pthread_rwlock_rdlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_timedrdlock_, pthread_rwlock_timedrdlock@@@GLIBC_2.2");
    __asm__(".symver pthread_rwlock_timedwrlock_, pthread_rwlock_timedwrlock@@@GLIBC_2.2");
    __asm__(".symver pthread_rwlock_tryrdlock_, pthread_rwlock_tryrdlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_trywrlock_, pthread_rwlock_trywrlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_unlock_, pthread_rwlock_unlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlock_wrlock_, pthread_rwlock_wrlock@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_destroy_, pthread_rwlockattr_destroy@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_getkind_np_, pthread_rwlockattr_getkind_np@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_getpshared_, pthread_rwlockattr_getpshared@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_init_, pthread_rwlockattr_init@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_setkind_np_, pthread_rwlockattr_setkind_np@@@GLIBC_2.1");
    __asm__(".symver pthread_rwlockattr_setpshared_, pthread_rwlockattr_setpshared@@@GLIBC_2.1");
    __asm__(".symver pthread_self_, pthread_self@@@GLIBC_2.0");
    __asm__(".symver pthread_setaffinity_np_, pthread_setaffinity_np@@@GLIBC_2.3.4");
    __asm__(".symver pthread_setcancelstate_, pthread_setcancelstate@@@GLIBC_2.0");
    __asm__(".symver pthread_setcanceltype_, pthread_setcanceltype@@@GLIBC_2.0");
    __asm__(".symver pthread_setconcurrency_, pthread_setconcurrency@@@GLIBC_2.1");
    __asm__(".symver pthread_setschedparam_, pthread_setschedparam@@@GLIBC_2.0");
    __asm__(".symver pthread_setschedprio_, pthread_setschedprio@@@GLIBC_2.3.4");
    __asm__(".symver pthread_setspecific_, pthread_setspecific@@@GLIBC_2.0");
    __asm__(".symver pthread_sigmask_, pthread_sigmask@@@GLIBC_2.0");
    __asm__(".symver pthread_spin_destroy_, pthread_spin_destroy@@@GLIBC_2.2");
    __asm__(".symver pthread_spin_init_, pthread_spin_init@@@GLIBC_2.2");
    __asm__(".symver pthread_spin_lock_, pthread_spin_lock@@@GLIBC_2.2");
    __asm__(".symver pthread_spin_trylock_, pthread_spin_trylock@@@GLIBC_2.2");
    __asm__(".symver pthread_spin_unlock_, pthread_spin_unlock@@@GLIBC_2.2");
    __asm__(".symver pthread_testcancel_, pthread_testcancel@@@GLIBC_2.0");
    __asm__(".symver pthread_timedjoin_np_, pthread_timedjoin_np@@@GLIBC_2.3.3");
    __asm__(".symver pthread_tryjoin_np_, pthread_tryjoin_np@@@GLIBC_2.3.3");
    __asm__(".symver pthread_yield_, pthread_yield@@@GLIBC_2.2");
    __asm__(".symver pwrite_, pwrite@@@GLIBC_2.2");
    __asm__(".symver pwrite64_, pwrite64@@@GLIBC_2.2");
    __asm__(".symver raise_, raise@@@GLIBC_2.0");
    __asm__(".symver read_, read@@@GLIBC_2.0");
    __asm__(".symver recv_, recv@@@GLIBC_2.0");
    __asm__(".symver recvfrom_, recvfrom@@@GLIBC_2.0");
    __asm__(".symver recvmsg_, recvmsg@@@GLIBC_2.0");
    __asm__(".symver sem_close_, sem_close@@@GLIBC_2.1.1");
    __asm__(".symver sem_destroy_, sem_destroy@@@GLIBC_2.1");
    __asm__(".symver sem_getvalue_, sem_getvalue@@@GLIBC_2.1");
    __asm__(".symver sem_init_, sem_init@@@GLIBC_2.1");
    __asm__(".symver sem_open_, sem_open@@@GLIBC_2.1.1");
    __asm__(".symver sem_post_, sem_post@@@GLIBC_2.1");
    __asm__(".symver sem_timedwait_, sem_timedwait@@@GLIBC_2.2");
    __asm__(".symver sem_trywait_, sem_trywait@@@GLIBC_2.1");
    __asm__(".symver sem_unlink_, sem_unlink@@@GLIBC_2.1.1");
    __asm__(".symver sem_wait_, sem_wait@@@GLIBC_2.1");
    __asm__(".symver send_, send@@@GLIBC_2.0");
    __asm__(".symver sendmsg_, sendmsg@@@GLIBC_2.0");
    __asm__(".symver sendto_, sendto@@@GLIBC_2.0");
    __asm__(".symver sigaction_, sigaction@@@GLIBC_2.0");
    __asm__(".symver siglongjmp_, siglongjmp@@@GLIBC_2.3.4");
    __asm__(".symver sigwait_, sigwait@@@GLIBC_2.0");
    __asm__(".symver system_, system@@@GLIBC_2.0");
    __asm__(".symver tcdrain_, tcdrain@@@GLIBC_2.0");
    __asm__(".symver wait_, wait@@@GLIBC_2.0");
    __asm__(".symver waitpid_, waitpid@@@GLIBC_2.0");
    __asm__(".symver write_, write@@@GLIBC_2.0");
#endif // )
