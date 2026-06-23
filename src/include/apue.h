/* Cross-platform header for EvoSQL database project */
/* Modernized from APUE (Advanced Programming in the UNIX Environment) */

#ifndef _APUE_H
#define _APUE_H

#define _CRT_SECURE_NO_WARNINGS

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>

#ifdef _WIN32
    /* Windows-specific includes and definitions */
    #include <io.h>
    #include <process.h>
    #include <windows.h>

    /* Map POSIX names to Windows equivalents */
    #ifndef open
        #define open    _open
    #endif
    #ifndef close
        #define close   _close
    #endif
    #ifndef read
        #define read    _read
    #endif
    #ifndef write
        #define write   _write
    #endif
    #ifndef lseek
        #define lseek   _lseek
    #endif
    #ifndef fstat
        #define fstat   _fstat
    #endif
    #ifndef stat
        #define stat    _stat
    #endif

    #ifndef _OFF_T_DEFINED
        typedef long off_t;
        #define _OFF_T_DEFINED
    #endif
    #ifndef _SSIZE_T_DEFINED
        typedef int ssize_t;
        #define _SSIZE_T_DEFINED
    #endif
    #ifndef _PID_T_
        typedef int pid_t;
        #define _PID_T_
    #endif
    #ifndef _UID_T_
        typedef unsigned int uid_t;
        #define _UID_T_
    #endif

    /* File permission macros (Windows doesn't use these but we define them) */
    #ifndef S_IRUSR
        #define S_IRUSR _S_IREAD
    #endif
    #ifndef S_IWUSR
        #define S_IWUSR _S_IWRITE
    #endif
    #ifndef S_IRGRP
        #define S_IRGRP 0
    #endif
    #ifndef S_IROTH
        #define S_IROTH 0
    #endif
    #ifndef S_IXUSR
        #define S_IXUSR 0
    #endif
    #ifndef S_IXGRP
        #define S_IXGRP 0
    #endif
    #ifndef S_IXOTH
        #define S_IXOTH 0
    #endif

    #ifndef O_CREAT
        #define O_CREAT _O_CREAT
    #endif
    #ifndef O_RDWR
        #define O_RDWR  _O_RDWR
    #endif
    #ifndef O_TRUNC
        #define O_TRUNC _O_TRUNC
    #endif

    #ifndef SEEK_SET
        #define SEEK_SET 0
    #endif
    #ifndef SEEK_CUR
        #define SEEK_CUR 1
    #endif
    #ifndef SEEK_END
        #define SEEK_END 2
    #endif

#else
    /* POSIX (Linux/macOS) includes */
    #include <unistd.h>
    #include <signal.h>
#endif

#define MAXLINE 4096

/*
 * Default file access permissions for new files.
 */
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

/*
 * Default permissions for new directories.
 */
#define DIR_MODE (FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)

#ifndef min
    #define min(a,b) ((a) < (b) ? (a) : (b))
#endif
#ifndef max
    #define max(a,b) ((a) > (b) ? (a) : (b))
#endif

/*
 * Error handling functions.
 */
void err_dump(const char *, ...);
void err_msg(const char *, ...);
void err_quit(const char *, ...);
void err_exit(int, const char *, ...);
void err_ret(const char *, ...);
void err_sys(const char *, ...);

#endif /* _APUE_H */
