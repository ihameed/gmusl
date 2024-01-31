#ifndef _STDIO_H
#define _STDIO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <features.h>

#define __NEED_FILE
#define __NEED___isoc_va_list
#define __NEED_size_t

#if __STDC_VERSION__ < 201112L
#define __NEED_struct__IO_FILE
#endif

#if defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE) \
 || defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) \
 || defined(_BSD_SOURCE)
#define __NEED_ssize_t
#define __NEED_off_t
#define __NEED_va_list
#endif

#include <bits/alltypes.h>

#if __cplusplus >= 201103L
#define NULL nullptr
#elif defined(__cplusplus)
#define NULL 0L
#else
#define NULL ((void*)0)
#endif

#undef EOF
#define EOF (-1)

#undef SEEK_SET
#undef SEEK_CUR
#undef SEEK_END
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2

#define BUFSIZ 1024
#define FILENAME_MAX 4096
#define FOPEN_MAX 1000
#define TMP_MAX 10000
#define L_tmpnam 20

typedef union _G_fpos64_t {
	char __opaque[16];
	long long __lldata;
	double __align;
} fpos_t;

extern FILE *const stdin;
extern FILE *const stdout;
extern FILE *const stderr;

#define stdin  (stdin)
#define stdout (stdout)
#define stderr (stderr)

#if __SIZEOF_LONG__ == 4
    #define __musl_glibc_redirect_to_64(symname) __asm__ (symname);
    #define __musl_glibc_redirect_to_plain(symname);
#elif __SIZEOF_LONG__ == 8
    #define __musl_glibc_redirect_to_64(symname);
    #define __musl_glibc_redirect_to_plain(symname) __asm__ (symname);
#else
    #error "Unexpected non-4/8 __SIZEOF_LONG__"
#endif

#if !defined(__musl_glibc_redirect_to_isoc99)
    #define __musl_glibc_redirect_to_isoc99(symname) __asm__ (symname);
#endif

FILE *fopen(const char *__restrict, const char *__restrict) __musl_glibc_redirect_to_64("fopen64");
FILE *freopen(const char *__restrict, const char *__restrict, FILE *__restrict) __musl_glibc_redirect_to_64("freopen64");
int fclose(FILE *);

int remove(const char *);
int rename(const char *, const char *);

int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
void clearerr(FILE *);

int fseek(FILE *, long, int);
long ftell(FILE *);
void rewind(FILE *);

int fgetpos(FILE *__restrict, fpos_t *__restrict) __musl_glibc_redirect_to_64("fgetpos64");
int fsetpos(FILE *, const fpos_t *) __musl_glibc_redirect_to_64("fsetpos64");

size_t fread(void *__restrict, size_t, size_t, FILE *__restrict);
size_t fwrite(const void *__restrict, size_t, size_t, FILE *__restrict);

int fgetc(FILE *);
int getc(FILE *);
int getchar(void);
int ungetc(int, FILE *);

int fputc(int, FILE *);
int putc(int, FILE *);
int putchar(int);

char *fgets(char *__restrict, int, FILE *__restrict);
#if __STDC_VERSION__ < 201112L
char *gets(char *);
#endif

int fputs(const char *__restrict, FILE *__restrict);
int puts(const char *);

int printf(const char *__restrict, ...);
int fprintf(FILE *__restrict, const char *__restrict, ...);
int sprintf(char *__restrict, const char *__restrict, ...);
int snprintf(char *__restrict, size_t, const char *__restrict, ...);

int vprintf(const char *__restrict, __isoc_va_list);
int vfprintf(FILE *__restrict, const char *__restrict, __isoc_va_list);
int vsprintf(char *__restrict, const char *__restrict, __isoc_va_list);
int vsnprintf(char *__restrict, size_t, const char *__restrict, __isoc_va_list);

int scanf(const char *__restrict, ...) __musl_glibc_redirect_to_isoc99("__isoc99_scanf");
int fscanf(FILE *__restrict, const char *__restrict, ...) __musl_glibc_redirect_to_isoc99("__isoc99_fscanf");
int sscanf(const char *__restrict, const char *__restrict, ...) __musl_glibc_redirect_to_isoc99("__isoc99_sscanf");
int vscanf(const char *__restrict, __isoc_va_list) __musl_glibc_redirect_to_isoc99("__isoc99_vscanf");
int vfscanf(FILE *__restrict, const char *__restrict, __isoc_va_list) __musl_glibc_redirect_to_isoc99("__isoc99_vfscanf");
int vsscanf(const char *__restrict, const char *__restrict, __isoc_va_list) __musl_glibc_redirect_to_isoc99("__isoc99_vsscanf");

void perror(const char *);

int setvbuf(FILE *__restrict, char *__restrict, int, size_t);
void setbuf(FILE *__restrict, char *__restrict);

char *tmpnam(char *);
FILE *tmpfile(void) __musl_glibc_redirect_to_64("tmpfile64");

#if defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE) \
 || defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) \
 || defined(_BSD_SOURCE)
FILE *fmemopen(void *__restrict, size_t, const char *__restrict);
FILE *open_memstream(char **, size_t *);
FILE *fdopen(int, const char *);
FILE *popen(const char *, const char *);
int pclose(FILE *);
int fileno(FILE *);
int fseeko(FILE *, off_t, int) __musl_glibc_redirect_to_64("fseeko64");
off_t ftello(FILE *) __musl_glibc_redirect_to_64("ftello64");
int dprintf(int, const char *__restrict, ...);
int vdprintf(int, const char *__restrict, __isoc_va_list);
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);
ssize_t getdelim(char **__restrict, size_t *__restrict, int, FILE *__restrict);
ssize_t getline(char **__restrict, size_t *__restrict, FILE *__restrict);
int renameat(int, const char *, int, const char *);
char *ctermid(char *);
#define L_ctermid 20
#endif


#if defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) \
 || defined(_BSD_SOURCE)
#define P_tmpdir "/tmp"
char *tempnam(const char *, const char *);
#endif

#if defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define L_cuserid 20
char *cuserid(char *);
void setlinebuf(FILE *);
void setbuffer(FILE *, char *, size_t);
int fgetc_unlocked(FILE *);
int fputc_unlocked(int, FILE *);
int fflush_unlocked(FILE *);
size_t fread_unlocked(void *, size_t, size_t, FILE *);
size_t fwrite_unlocked(const void *, size_t, size_t, FILE *);
void clearerr_unlocked(FILE *);
int feof_unlocked(FILE *);
int ferror_unlocked(FILE *);
int fileno_unlocked(FILE *);
int getw(FILE *);
int putw(int, FILE *);
char *fgetln(FILE *, size_t *);
int asprintf(char **, const char *, ...);
int vasprintf(char **, const char *, __isoc_va_list);
#endif

#ifdef _GNU_SOURCE
char *fgets_unlocked(char *, int, FILE *);
int fputs_unlocked(const char *, FILE *);

typedef ssize_t (cookie_read_function_t)(void *, char *, size_t);
typedef ssize_t (cookie_write_function_t)(void *, const char *, size_t);
typedef int (cookie_seek_function_t)(void *, off_t *, int);
typedef int (cookie_close_function_t)(void *);

typedef struct _IO_cookie_io_functions_t {
	cookie_read_function_t *read;
	cookie_write_function_t *write;
	cookie_seek_function_t *seek;
	cookie_close_function_t *close;
} cookie_io_functions_t;

FILE *fopencookie(void *, const char *, cookie_io_functions_t);
#endif

#if defined(_LARGEFILE64_SOURCE)
typedef fpos_t fpos64_t;
typedef off_t off64_t;
FILE *tmpfile64(void) __musl_glibc_redirect_to_plain("tmpfile");
FILE *fopen64(const char *__restrict, const char *__restrict) __musl_glibc_redirect_to_plain("fopen");
FILE *freopen64(const char *__restrict, const char *__restrict, FILE *__restrict) __musl_glibc_redirect_to_plain("freopen");
int fseeko64(FILE *, off64_t, int) __musl_glibc_redirect_to_plain("fseeko");
off_t ftello64(FILE *) __musl_glibc_redirect_to_plain("ftello");
int fgetpos64(FILE *__restrict, fpos64_t *__restrict) __musl_glibc_redirect_to_plain("fgetpos");
int fsetpos64(FILE *, const fpos64_t *) __musl_glibc_redirect_to_plain("fsetpos");
#endif

#ifdef __cplusplus
}
#endif

#endif
