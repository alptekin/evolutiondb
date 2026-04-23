/*
 * pool.c — Bounded-queue worker pool for the accept loop.
 *
 * Design choices:
 *   - Workers never exit until pool_shutdown; no thread create/destroy
 *     cost per connection.
 *   - Queue is a fixed-size ring, guarded by a single mutex and two
 *     condvars. Producer blocks on "not full", consumers block on
 *     "not empty". Keeps the dependency surface tiny (no lock-free
 *     data structures) without sacrificing the latency win.
 *   - Workers are POSIX-threads only. On Windows the stub is compiled
 *     out; server.c falls back to the pre-pool per-connection
 *     thread_create path (see PATCH in server.c). The production
 *     deployment target is Linux/macOS so this covers the path CI
 *     actually exercises.
 *   - A shutdown flag plus broadcast on the "not empty" condvar is
 *     how workers wake to exit cleanly.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pool.h"   /* includes platform.h, which defines socket_close() */

#ifdef _WIN32
/* Windows build: pool_* are no-ops; server.c's legacy path stays in
 * charge. Keeping this file compilable on win32 avoids Makefile
 * platform gymnastics. */
int  pool_init(int size, int queue_cap)   { (void)size; (void)queue_cap; return -1; }
int  pool_submit(PoolTask *task)          { (void)task; return -1; }
void pool_shutdown(void)                  { }
int  pool_active_workers(void)            { return 0; }
int  pool_queue_depth(void)               { return 0; }
#else
#include <pthread.h>
#include <unistd.h>

/* ---- state ---- */

static pthread_t       *g_workers     = NULL;
static int              g_worker_count = 0;

static PoolTask       **g_queue       = NULL;   /* ring of owned task pointers */
static int              g_queue_cap   = 0;
static int              g_queue_head  = 0;
static int              g_queue_tail  = 0;
static int              g_queue_size  = 0;

static pthread_mutex_t  g_lock        = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t   g_cv_not_full = PTHREAD_COND_INITIALIZER;
static pthread_cond_t   g_cv_not_empty = PTHREAD_COND_INITIALIZER;
static volatile int     g_shutdown    = 0;
static volatile int     g_active_workers = 0;  /* how many are currently inside handler() */

/* ---- worker loop ---- */

static void *worker_main(void *arg)
{
    (void)arg;
    for (;;) {
        PoolTask *task = NULL;

        pthread_mutex_lock(&g_lock);
        while (!g_shutdown && g_queue_size == 0)
            pthread_cond_wait(&g_cv_not_empty, &g_lock);

        if (g_shutdown && g_queue_size == 0) {
            pthread_mutex_unlock(&g_lock);
            return NULL;
        }

        task = g_queue[g_queue_head];
        g_queue[g_queue_head] = NULL;
        g_queue_head = (g_queue_head + 1) % g_queue_cap;
        g_queue_size--;
        pthread_cond_signal(&g_cv_not_full);

        g_active_workers++;
        pthread_mutex_unlock(&g_lock);

        /* Run the protocol handler outside the lock — it's long-lived. */
        if (task) {
            task->handler(task->sock);
            socket_close(task->sock);
            /* Match the log line the legacy per-connection path emits
             * so ops diffs stay quiet. server_client_disconnected also
             * decrements g_active_connections. */
            extern void server_client_disconnected(const char *);
            server_client_disconnected(task->label);
            free(task);
        }

        pthread_mutex_lock(&g_lock);
        g_active_workers--;
        pthread_mutex_unlock(&g_lock);
    }
}

/* ---- public API ---- */

int pool_init(int size, int queue_cap)
{
    if (size <= 0 || queue_cap <= 0) return -1;
    if (g_workers != NULL) return -1;  /* already inited */

    g_queue = (PoolTask **)calloc((size_t)queue_cap, sizeof(PoolTask *));
    if (!g_queue) return -1;
    g_queue_cap = queue_cap;
    g_queue_head = g_queue_tail = g_queue_size = 0;
    g_shutdown = 0;

    g_workers = (pthread_t *)calloc((size_t)size, sizeof(pthread_t));
    if (!g_workers) { free(g_queue); g_queue = NULL; return -1; }

    for (int i = 0; i < size; i++) {
        if (pthread_create(&g_workers[i], NULL, worker_main, NULL) != 0) {
            /* Partial init — tear down what we started. */
            g_worker_count = i;
            pool_shutdown();
            return -1;
        }
    }
    g_worker_count = size;

    fprintf(stderr, "[pool] initialized: %d workers, queue cap %d\n",
            size, queue_cap);
    fflush(stderr);
    return 0;
}

int pool_submit(PoolTask *task)
{
    if (!task) return -1;
    if (!g_workers) return -1;

    pthread_mutex_lock(&g_lock);
    while (!g_shutdown && g_queue_size == g_queue_cap)
        pthread_cond_wait(&g_cv_not_full, &g_lock);

    if (g_shutdown) {
        pthread_mutex_unlock(&g_lock);
        return -1;
    }

    g_queue[g_queue_tail] = task;
    g_queue_tail = (g_queue_tail + 1) % g_queue_cap;
    g_queue_size++;
    pthread_cond_signal(&g_cv_not_empty);
    pthread_mutex_unlock(&g_lock);
    return 0;
}

void pool_shutdown(void)
{
    if (!g_workers) return;

    pthread_mutex_lock(&g_lock);
    g_shutdown = 1;
    pthread_cond_broadcast(&g_cv_not_empty);
    pthread_cond_broadcast(&g_cv_not_full);
    pthread_mutex_unlock(&g_lock);

    for (int i = 0; i < g_worker_count; i++) {
        pthread_join(g_workers[i], NULL);
    }
    free(g_workers);  g_workers = NULL;  g_worker_count = 0;

    /* Drain any in-flight task pointers — sockets were already going
     * to be closed when the client disconnected, so we just free the
     * PoolTask structs. */
    for (int i = 0; i < g_queue_cap; i++) {
        if (g_queue[i]) {
            socket_close(g_queue[i]->sock);
            free(g_queue[i]);
            g_queue[i] = NULL;
        }
    }
    free(g_queue); g_queue = NULL;
    g_queue_cap = 0;
    g_queue_head = g_queue_tail = g_queue_size = 0;
    g_shutdown = 0;
}

int pool_active_workers(void)
{
    int n;
    pthread_mutex_lock(&g_lock);
    n = g_active_workers;
    pthread_mutex_unlock(&g_lock);
    return n;
}

int pool_queue_depth(void)
{
    int n;
    pthread_mutex_lock(&g_lock);
    n = g_queue_size;
    pthread_mutex_unlock(&g_lock);
    return n;
}

#endif /* _WIN32 */
