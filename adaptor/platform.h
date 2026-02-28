/*
 * platform.h — Cross-platform abstraction for EvoSQL Adaptor
 *
 * Maps Windows-specific APIs (Winsock, CRITICAL_SECTION, CreateThread,
 * FindFirstFile, etc.) to POSIX equivalents so the adaptor can compile
 * on both Windows (MinGW/MSYS2) and Linux (GCC).
 */
#ifndef PLATFORM_H
#define PLATFORM_H

#ifdef _WIN32
/* ================================================================
 *  Windows
 * ================================================================ */
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#include <io.h>
#include <process.h>

typedef SOCKET socket_t;
#ifndef __MINGW32__
typedef int socklen_t;
#endif
#define SOCKET_INVALID  INVALID_SOCKET
#define SOCKET_ERR      SOCKET_ERROR
#define socket_close(s) closesocket(s)

#define socket_init() \
    do { WSADATA _wsa; WSAStartup(MAKEWORD(2,2), &_wsa); } while(0)
#define socket_cleanup()  WSACleanup()
#define socket_error()    WSAGetLastError()
#define socket_error_fmt  "%d"

/* String / POSIX compat — these map POSIX names to MSVC underscore variants.
   Some may already be defined by other headers (e.g. apue.h), so guard them. */
#ifndef strncasecmp
#define strncasecmp  _strnicmp
#endif
#ifndef strdup
#define strdup       _strdup
#endif
#ifndef dup
#define dup          _dup
#endif
#ifndef dup2
#define dup2         _dup2
#endif
#ifndef fileno
#define fileno       _fileno
#endif
#ifndef close
#define close        _close
#endif

#define NULL_DEVICE  "NUL"

/* Mutex (CRITICAL_SECTION) */
typedef CRITICAL_SECTION  mutex_t;
#define mutex_init(m)     InitializeCriticalSection(m)
#define mutex_lock(m)     EnterCriticalSection(m)
#define mutex_unlock(m)   LeaveCriticalSection(m)
#define mutex_destroy(m)  DeleteCriticalSection(m)

/* Threading */
#define THREAD_RETURN  DWORD WINAPI
#define THREAD_PARAM   LPVOID

#define thread_create(fn, arg)                                        \
    do {                                                              \
        HANDLE _h = CreateThread(NULL, 0, fn, arg, 0, NULL);         \
        if (_h) CloseHandle(_h);                                      \
        else fprintf(stderr, "CreateThread failed: %lu\n",            \
                     GetLastError());                                  \
    } while(0)

/* Process ID */
#define platform_getpid()  ((int)GetCurrentProcessId())

/* Directory listing (for catalog.c *.meta scanning) */
typedef struct {
    WIN32_FIND_DATAA fd;
    HANDLE           hFind;
    int              first;   /* 1 = first call to meta_iter_next */
    char             current_name[256];
    int              valid;
} MetaIterator;

static inline void meta_iter_open(MetaIterator *it, const char *dir) {
    char pattern[1024];
    if (dir && dir[0]) {
        snprintf(pattern, sizeof(pattern), "%s\\*.meta", dir);
    } else {
        snprintf(pattern, sizeof(pattern), "*.meta");
    }
    it->hFind = FindFirstFileA(pattern, &it->fd);
    it->valid = (it->hFind != INVALID_HANDLE_VALUE);
    it->first = 1;
}

static inline int meta_iter_next(MetaIterator *it) {
    if (!it->valid) return 0;
    if (it->first) {
        it->first = 0;
    } else {
        if (!FindNextFileA(it->hFind, &it->fd)) {
            it->valid = 0;
            return 0;
        }
    }
    /* Skip directories */
    while (it->fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
        if (!FindNextFileA(it->hFind, &it->fd)) {
            it->valid = 0;
            return 0;
        }
    }
    strncpy(it->current_name, it->fd.cFileName, sizeof(it->current_name) - 1);
    it->current_name[sizeof(it->current_name) - 1] = '\0';
    return 1;
}

static inline void meta_iter_close(MetaIterator *it) {
    if (it->hFind != INVALID_HANDLE_VALUE)
        FindClose(it->hFind);
    it->hFind = INVALID_HANDLE_VALUE;
    it->valid = 0;
}

#else
/* ================================================================
 *  Linux / POSIX
 * ================================================================ */
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include <strings.h>
#include <errno.h>
#include <sys/types.h>
#include <signal.h>
#include <glob.h>
#include <fcntl.h>

typedef int socket_t;
#define SOCKET_INVALID  (-1)
#define SOCKET_ERR      (-1)
#define socket_close(s) close(s)

#define socket_init()
#define socket_cleanup()
#define socket_error()     errno
#define socket_error_fmt   "%d (%s)", errno, strerror(errno)

#define NULL_DEVICE  "/dev/null"

/* Mutex (pthread) */
typedef pthread_mutex_t  mutex_t;
#define mutex_init(m)    pthread_mutex_init(m, NULL)
#define mutex_lock(m)    pthread_mutex_lock(m)
#define mutex_unlock(m)  pthread_mutex_unlock(m)
#define mutex_destroy(m) pthread_mutex_destroy(m)

/* Threading */
#define THREAD_RETURN  void*
#define THREAD_PARAM   void*

#define thread_create(fn, arg)                                         \
    do {                                                               \
        pthread_t _tid;                                                \
        pthread_attr_t _attr;                                          \
        pthread_attr_init(&_attr);                                     \
        pthread_attr_setdetachstate(&_attr, PTHREAD_CREATE_DETACHED);  \
        if (pthread_create(&_tid, &_attr, fn, arg) != 0)               \
            fprintf(stderr, "pthread_create failed: %s\n",             \
                    strerror(errno));                                  \
        pthread_attr_destroy(&_attr);                                  \
    } while(0)

/* Process ID */
#define platform_getpid()  ((int)getpid())

/* Directory listing (glob-based *.meta scanning) */
typedef struct {
    glob_t  globbuf;
    size_t  idx;
    char    current_name[256];
    int     valid;
} MetaIterator;

static inline void meta_iter_open(MetaIterator *it, const char *dir) {
    char pattern[1024];
    if (dir && dir[0]) {
        snprintf(pattern, sizeof(pattern), "%s/*.meta", dir);
    } else {
        snprintf(pattern, sizeof(pattern), "*.meta");
    }
    int ret = glob(pattern, 0, NULL, &it->globbuf);
    it->valid = (ret == 0 && it->globbuf.gl_pathc > 0);
    it->idx = 0;
}

static inline int meta_iter_next(MetaIterator *it) {
    if (!it->valid || it->idx >= it->globbuf.gl_pathc)
        return 0;
    /* glob returns full match (e.g. "Students.meta"), extract basename */
    const char *path = it->globbuf.gl_pathv[it->idx];
    const char *base = strrchr(path, '/');
    base = base ? base + 1 : path;
    strncpy(it->current_name, base, sizeof(it->current_name) - 1);
    it->current_name[sizeof(it->current_name) - 1] = '\0';
    it->idx++;
    return 1;
}

static inline void meta_iter_close(MetaIterator *it) {
    if (it->valid)
        globfree(&it->globbuf);
    it->valid = 0;
}

#endif /* _WIN32 */
#endif /* PLATFORM_H */
