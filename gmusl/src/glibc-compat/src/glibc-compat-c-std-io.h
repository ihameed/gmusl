#pragma once
#include <features.h>

#define __NEED_FILE
#define __NEED_ssize_t
#define __NEED_size_t
#define __NEED_off_t
#define __NEED_wchar_t
#include <bits/alltypes.h>

#if defined(__cplusplus)
    extern "C" {
#endif

#if GMUSL_gcompat__glibc_cstdio // {

typedef ssize_t (cookie_read_function_t) (void *, char *, size_t);
typedef ssize_t (cookie_write_function_t) (void *, const char *, size_t);
typedef int (cookie_seek_function_t) (void *, off_t *, int);
typedef int (cookie_close_function_t) (void *);

enum { _IO_EOF_SEEN = 0x0010 };
enum { _IO_ERR_SEEN = 0x0020 };
enum { EOF = -1 };

#if defined(__x86_64__) && defined(__ILP32__)
    typedef __INT64_TYPE__ __off_t;
#else
    typedef long __off_t;
#endif
typedef __INT64_TYPE__ __off64_t;

struct _IO_codecvt;
struct _IO_marker;
struct _IO_wide_data;
typedef void _IO_lock_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    struct _IO_codecvt * _codecvt;
    struct _IO_wide_data * _wide_data;
    struct _IO_FILE * _freeres_list;
    void * _freeres_buf;
    size_t __pad5;
    int _mode;

    // The expression that glibc's header uses is more complicated than this,
    // but the maximum value it attains on any machine supported by linux is
    // 40; it's 20 on amd64, and on a CHERI system with 128-bit wide pointers
    // and 64-bit wide "size_t", it's... -12.
    char __padding[40];
};

#define __unlocked_ferror(f) ((f)->_flags & _IO_ERR_SEEN)

#endif // }

typedef void (* musl_glibc_cstdio_out_t) (FILE *f, char const *s, size_t l);
typedef void (* musl_glibc_cstdio_outw_t) (FILE *f, wchar_t const *s, size_t l);

#if defined(__cplusplus)
    } // extern "C"
#endif
