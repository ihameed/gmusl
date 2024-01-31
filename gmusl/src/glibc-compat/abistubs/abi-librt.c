#if defined(__amd64__) && !defined(__ILP32__) // (
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void clock_getcpuclockid_() { }
    __attribute__((visibility("default"))) void clock_getres_() { }
    __attribute__((visibility("default"))) void clock_gettime_() { }
    __attribute__((visibility("default"))) void clock_nanosleep_() { }
    __attribute__((visibility("default"))) void clock_settime_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.2.5");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.2.5");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.2.5");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.2.5");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.2.5");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.2.5");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.2.5");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.2.5");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.2.5");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.2.5");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.2.5");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.2.5");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.2.5");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.2.5");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.2.5");
    __asm__(".symver clock_getcpuclockid_, clock_getcpuclockid@@@GLIBC_2.2.5");
    __asm__(".symver clock_getres_, clock_getres@@@GLIBC_2.2.5");
    __asm__(".symver clock_gettime_, clock_gettime@@@GLIBC_2.2.5");
    __asm__(".symver clock_nanosleep_, clock_nanosleep@@@GLIBC_2.2.5");
    __asm__(".symver clock_settime_, clock_settime@@@GLIBC_2.2.5");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.2.5");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.2.5");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.3.4");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.3.4");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.3.4");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.3.4");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.3.4");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.3.4");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.3.4");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.3.4");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.3.4");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.3.4");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.2.5");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.2.5");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.3.3");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.3.3");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.3.3");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.3.3");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.3.3");
#elif defined(__i386__) // ) (
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void clock_getcpuclockid_() { }
    __attribute__((visibility("default"))) void clock_getres_() { }
    __attribute__((visibility("default"))) void clock_gettime_() { }
    __attribute__((visibility("default"))) void clock_nanosleep_() { }
    __attribute__((visibility("default"))) void clock_settime_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.1");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.1");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.1");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.1");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.1");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.1");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.1");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.1");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.1");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.1");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.1");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.1");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.1");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.1");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.1");
    __asm__(".symver clock_getcpuclockid_, clock_getcpuclockid@@@GLIBC_2.2");
    __asm__(".symver clock_getres_, clock_getres@@@GLIBC_2.2");
    __asm__(".symver clock_gettime_, clock_gettime@@@GLIBC_2.2");
    __asm__(".symver clock_nanosleep_, clock_nanosleep@@@GLIBC_2.2");
    __asm__(".symver clock_settime_, clock_settime@@@GLIBC_2.2");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.1");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.1");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.3.4");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.3.4");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.3.4");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.3.4");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.3.4");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.3.4");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.3.4");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.3.4");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.3.4");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.3.4");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.2");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.2");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.2");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.2");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.2");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.2");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.2");
#elif defined(__aarch64__) // ) (
    __attribute__((visibility("default"))) void __mq_open_2_() { }
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver __mq_open_2_, __mq_open_2@@@GLIBC_2.17");
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.17");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.17");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.17");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.17");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.17");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.17");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.17");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.17");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.17");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.17");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.17");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.17");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.17");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.17");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.17");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.17");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.17");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.17");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.17");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.17");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.17");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.17");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.17");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.17");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.17");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.17");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.17");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.17");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.17");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.17");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.17");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.17");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.17");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.17");
#elif defined(__arm__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void clock_getcpuclockid_() { }
    __attribute__((visibility("default"))) void clock_getres_() { }
    __attribute__((visibility("default"))) void clock_gettime_() { }
    __attribute__((visibility("default"))) void clock_nanosleep_() { }
    __attribute__((visibility("default"))) void clock_settime_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.4");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.4");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.4");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.4");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.4");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.4");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.4");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.4");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.4");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.4");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.4");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.4");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.4");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.4");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.4");
    __asm__(".symver clock_getcpuclockid_, clock_getcpuclockid@@@GLIBC_2.4");
    __asm__(".symver clock_getres_, clock_getres@@@GLIBC_2.4");
    __asm__(".symver clock_gettime_, clock_gettime@@@GLIBC_2.4");
    __asm__(".symver clock_nanosleep_, clock_nanosleep@@@GLIBC_2.4");
    __asm__(".symver clock_settime_, clock_settime@@@GLIBC_2.4");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.4");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.4");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.4");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.4");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.4");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.4");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.4");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.4");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.4");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.4");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.4");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.4");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.4");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.4");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.4");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.4");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.4");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.4");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.4");
#elif defined(__arm__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void clock_getcpuclockid_() { }
    __attribute__((visibility("default"))) void clock_getres_() { }
    __attribute__((visibility("default"))) void clock_gettime_() { }
    __attribute__((visibility("default"))) void clock_nanosleep_() { }
    __attribute__((visibility("default"))) void clock_settime_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.4");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.4");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.4");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.4");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.4");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.4");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.4");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.4");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.4");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.4");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.4");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.4");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.4");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.4");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.4");
    __asm__(".symver clock_getcpuclockid_, clock_getcpuclockid@@@GLIBC_2.4");
    __asm__(".symver clock_getres_, clock_getres@@@GLIBC_2.4");
    __asm__(".symver clock_gettime_, clock_gettime@@@GLIBC_2.4");
    __asm__(".symver clock_nanosleep_, clock_nanosleep@@@GLIBC_2.4");
    __asm__(".symver clock_settime_, clock_settime@@@GLIBC_2.4");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.4");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.4");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.4");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.4");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.4");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.4");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.4");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.4");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.4");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.4");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.4");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.4");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.4");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.4");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.4");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.4");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.4");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.4");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.4");
#elif defined(__riscv) && __riscv_xlen == 64 // ) (
    __attribute__((visibility("default"))) void __mq_open_2_() { }
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver __mq_open_2_, __mq_open_2@@@GLIBC_2.27");
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.27");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.27");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.27");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.27");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.27");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.27");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.27");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.27");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.27");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.27");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.27");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.27");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.27");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.27");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.27");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.27");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.27");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.27");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.27");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.27");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.27");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.27");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.27");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.27");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.27");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.27");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.27");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.27");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.27");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.27");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.27");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.27");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.27");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.27");
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void __mq_open_2_() { }
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver __mq_open_2_, __mq_open_2@@@GLIBC_2.17");
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.17");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.17");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.17");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.17");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.17");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.17");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.17");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.17");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.17");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.17");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.17");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.17");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.17");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.17");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.17");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.17");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.17");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.17");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.17");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.17");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.17");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.17");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.17");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.17");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.17");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.17");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.17");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.17");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.17");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.17");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.17");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.17");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.17");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.17");
#elif defined(__powerpc64__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ // ) (
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void clock_getcpuclockid_() { }
    __attribute__((visibility("default"))) void clock_getres_() { }
    __attribute__((visibility("default"))) void clock_gettime_() { }
    __attribute__((visibility("default"))) void clock_nanosleep_() { }
    __attribute__((visibility("default"))) void clock_settime_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.3");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.3");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.3");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.3");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.3");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.3");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.3");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.3");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.3");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.3");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.3");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.3");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.3");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.3");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.3");
    __asm__(".symver clock_getcpuclockid_, clock_getcpuclockid@@@GLIBC_2.3");
    __asm__(".symver clock_getres_, clock_getres@@@GLIBC_2.3");
    __asm__(".symver clock_gettime_, clock_gettime@@@GLIBC_2.3");
    __asm__(".symver clock_nanosleep_, clock_nanosleep@@@GLIBC_2.3");
    __asm__(".symver clock_settime_, clock_settime@@@GLIBC_2.3");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.3");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.3");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.3.4");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.3.4");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.3.4");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.3.4");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.3.4");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.3.4");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.3.4");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.3.4");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.3.4");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.3.4");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.3");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.3");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.3.3");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.3.3");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.3.3");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.3.3");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.3.3");
#elif defined(__powerpc__) && !defined(__powerpc64__) // ) (
    __attribute__((visibility("default"))) void aio_cancel_() { }
    __attribute__((visibility("default"))) void aio_cancel64_() { }
    __attribute__((visibility("default"))) void aio_error_() { }
    __attribute__((visibility("default"))) void aio_error64_() { }
    __attribute__((visibility("default"))) void aio_fsync_() { }
    __attribute__((visibility("default"))) void aio_fsync64_() { }
    __attribute__((visibility("default"))) void aio_init_() { }
    __attribute__((visibility("default"))) void aio_read_() { }
    __attribute__((visibility("default"))) void aio_read64_() { }
    __attribute__((visibility("default"))) void aio_return_() { }
    __attribute__((visibility("default"))) void aio_return64_() { }
    __attribute__((visibility("default"))) void aio_suspend_() { }
    __attribute__((visibility("default"))) void aio_suspend64_() { }
    __attribute__((visibility("default"))) void aio_write_() { }
    __attribute__((visibility("default"))) void aio_write64_() { }
    __attribute__((visibility("default"))) void clock_getcpuclockid_() { }
    __attribute__((visibility("default"))) void clock_getres_() { }
    __attribute__((visibility("default"))) void clock_gettime_() { }
    __attribute__((visibility("default"))) void clock_nanosleep_() { }
    __attribute__((visibility("default"))) void clock_settime_() { }
    __attribute__((visibility("default"))) void lio_listio_() { }
    __attribute__((visibility("default"))) void lio_listio64_() { }
    __attribute__((visibility("default"))) void mq_close_() { }
    __attribute__((visibility("default"))) void mq_getattr_() { }
    __attribute__((visibility("default"))) void mq_notify_() { }
    __attribute__((visibility("default"))) void mq_open_() { }
    __attribute__((visibility("default"))) void mq_receive_() { }
    __attribute__((visibility("default"))) void mq_send_() { }
    __attribute__((visibility("default"))) void mq_setattr_() { }
    __attribute__((visibility("default"))) void mq_timedreceive_() { }
    __attribute__((visibility("default"))) void mq_timedsend_() { }
    __attribute__((visibility("default"))) void mq_unlink_() { }
    __attribute__((visibility("default"))) void shm_open_() { }
    __attribute__((visibility("default"))) void shm_unlink_() { }
    __attribute__((visibility("default"))) void timer_create_() { }
    __attribute__((visibility("default"))) void timer_delete_() { }
    __attribute__((visibility("default"))) void timer_getoverrun_() { }
    __attribute__((visibility("default"))) void timer_gettime_() { }
    __attribute__((visibility("default"))) void timer_settime_() { }
    __asm__(".symver aio_cancel_, aio_cancel@@@GLIBC_2.1");
    __asm__(".symver aio_cancel64_, aio_cancel64@@@GLIBC_2.1");
    __asm__(".symver aio_error_, aio_error@@@GLIBC_2.1");
    __asm__(".symver aio_error64_, aio_error64@@@GLIBC_2.1");
    __asm__(".symver aio_fsync_, aio_fsync@@@GLIBC_2.1");
    __asm__(".symver aio_fsync64_, aio_fsync64@@@GLIBC_2.1");
    __asm__(".symver aio_init_, aio_init@@@GLIBC_2.1");
    __asm__(".symver aio_read_, aio_read@@@GLIBC_2.1");
    __asm__(".symver aio_read64_, aio_read64@@@GLIBC_2.1");
    __asm__(".symver aio_return_, aio_return@@@GLIBC_2.1");
    __asm__(".symver aio_return64_, aio_return64@@@GLIBC_2.1");
    __asm__(".symver aio_suspend_, aio_suspend@@@GLIBC_2.1");
    __asm__(".symver aio_suspend64_, aio_suspend64@@@GLIBC_2.1");
    __asm__(".symver aio_write_, aio_write@@@GLIBC_2.1");
    __asm__(".symver aio_write64_, aio_write64@@@GLIBC_2.1");
    __asm__(".symver clock_getcpuclockid_, clock_getcpuclockid@@@GLIBC_2.2");
    __asm__(".symver clock_getres_, clock_getres@@@GLIBC_2.2");
    __asm__(".symver clock_gettime_, clock_gettime@@@GLIBC_2.2");
    __asm__(".symver clock_nanosleep_, clock_nanosleep@@@GLIBC_2.2");
    __asm__(".symver clock_settime_, clock_settime@@@GLIBC_2.2");
    __asm__(".symver lio_listio_, lio_listio@@@GLIBC_2.1");
    __asm__(".symver lio_listio64_, lio_listio64@@@GLIBC_2.1");
    __asm__(".symver mq_close_, mq_close@@@GLIBC_2.3.4");
    __asm__(".symver mq_getattr_, mq_getattr@@@GLIBC_2.3.4");
    __asm__(".symver mq_notify_, mq_notify@@@GLIBC_2.3.4");
    __asm__(".symver mq_open_, mq_open@@@GLIBC_2.3.4");
    __asm__(".symver mq_receive_, mq_receive@@@GLIBC_2.3.4");
    __asm__(".symver mq_send_, mq_send@@@GLIBC_2.3.4");
    __asm__(".symver mq_setattr_, mq_setattr@@@GLIBC_2.3.4");
    __asm__(".symver mq_timedreceive_, mq_timedreceive@@@GLIBC_2.3.4");
    __asm__(".symver mq_timedsend_, mq_timedsend@@@GLIBC_2.3.4");
    __asm__(".symver mq_unlink_, mq_unlink@@@GLIBC_2.3.4");
    __asm__(".symver shm_open_, shm_open@@@GLIBC_2.2");
    __asm__(".symver shm_unlink_, shm_unlink@@@GLIBC_2.2");
    __asm__(".symver timer_create_, timer_create@@@GLIBC_2.2");
    __asm__(".symver timer_delete_, timer_delete@@@GLIBC_2.2");
    __asm__(".symver timer_getoverrun_, timer_getoverrun@@@GLIBC_2.2");
    __asm__(".symver timer_gettime_, timer_gettime@@@GLIBC_2.2");
    __asm__(".symver timer_settime_, timer_settime@@@GLIBC_2.2");
#endif // )
