/*
 * wal_checkpointer.c — Background WAL checkpointer for EvoSQL
 *
 * Until now the WAL was only ever truncated at process shutdown
 * (wal_shutdown -> wal_checkpoint), so a long-running server's WAL grew
 * without bound and a crash forced a replay of the entire history.
 *
 * This thread runs a periodic checkpoint while the server is up. Each tick it
 * takes FULL write exclusion (so no writer is mid-operation and no reader sees
 * a half-flushed state), flushes all dirty buffer-pool pages to the data file,
 * fsyncs the data file, and only THEN truncates the WAL. That ordering —
 * data durable BEFORE the WAL is discarded — is the whole correctness point:
 * truncating first would lose committed-but-unflushed pages on a crash.
 *
 * It deliberately mirrors auto_reclaim.c (same lock discipline, same start/stop
 * shape) because that pattern is already proven safe in this engine:
 *   lock order is g_dml_mutex THEN g_parse_lock — never the reverse (ABBA).
 * wal_checkpoint() takes g_wal_lock internally, so we must not hold it here.
 */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include "database.h"
#include "page_mgr.h"
#include "wal.h"
#include "../../adaptor/platform.h"

/* Default checkpoint interval. PostgreSQL's checkpoint_timeout default is 5min;
 * we match that as a conservative starting point. EVOSQL_CHECKPOINT_INTERVAL_SEC
 * overrides it; a value <= 0 disables the thread entirely (back-compat: an
 * un-configured deployment that wants the legacy shutdown-only behavior can set
 * it to 0, and the short-lived test suite never reaches the first tick). */
#define WAL_CHECKPOINT_INTERVAL_SEC_DEFAULT 300

static int          g_ckpt_interval_sec = WAL_CHECKPOINT_INTERVAL_SEC_DEFAULT;
static pthread_t    g_ckpt_thread;
static volatile int g_ckpt_running = 0;

/* One checkpoint pass under full write exclusion. */
static void wal_checkpointer_tick(void)
{
    /* These are the adaptor's two engine-wide locks (see server.c). DML/DDL
     * serialize on g_dml_mutex; SELECT readers hold rdlock(g_parse_lock).
     * Taking both (mutex first) makes the buffer pool quiescent so a
     * multi-page logical update (e.g. a B+ tree split) cannot be persisted
     * half-done. */
    extern rwlock_t g_parse_lock;
    extern mutex_t  g_dml_mutex;

    long long before = wal_size();

    mutex_lock(&g_dml_mutex);
    rwlock_wrlock(&g_parse_lock);

    /* pgm_flush() flushes BOTH the FileHeader (page 0: free list, page count,
     * catalog roots) AND all dirty pages. bp_flush_all() alone is NOT enough:
     * it leaves the FileHeader stale, so pages allocated for freshly committed
     * rows are unreachable after a crash and those rows silently vanish. This
     * is the same full flush pgm_shutdown() does before a clean exit. */
    pgm_flush();
    {
        int fd = pgm_get_fd();
        if (fd >= 0) fsync(fd);           /* make it all durable BEFORE truncating WAL */
    }
    wal_checkpoint();                     /* archive + truncate active WAL */

    rwlock_wrunlock(&g_parse_lock);
    mutex_unlock(&g_dml_mutex);

    if (before > 0) {
        fprintf(stderr, "[WAL-CKPT] checkpoint: WAL %lld -> %lld bytes\n",
                before, wal_size());
    }
}

static void *wal_checkpointer_worker(void *arg)
{
    (void)arg;
    while (g_ckpt_running) {
        /* Sleep in 1s increments so stop() is prompt. */
        for (int s = 0; s < g_ckpt_interval_sec && g_ckpt_running; s++)
            sleep(1);
        if (!g_ckpt_running) break;
        wal_checkpointer_tick();
    }
    return NULL;
}

void wal_checkpointer_start(void)
{
    if (g_ckpt_running) return;

    const char *env = getenv("EVOSQL_CHECKPOINT_INTERVAL_SEC");
    if (env && env[0])
        g_ckpt_interval_sec = atoi(env);

    if (g_ckpt_interval_sec <= 0) {
        fprintf(stderr, "[WAL-CKPT] disabled (EVOSQL_CHECKPOINT_INTERVAL_SEC<=0); "
                        "WAL is checkpointed only at shutdown\n");
        return;
    }

    g_ckpt_running = 1;
    if (pthread_create(&g_ckpt_thread, NULL, wal_checkpointer_worker, NULL) != 0) {
        fprintf(stderr, "[WAL-CKPT] pthread_create failed — checkpointer disabled\n");
        g_ckpt_running = 0;
        return;
    }
    fprintf(stderr, "[WAL-CKPT] background checkpointer started (interval=%ds)\n",
            g_ckpt_interval_sec);
}

void wal_checkpointer_stop(void)
{
    if (!g_ckpt_running) return;
    g_ckpt_running = 0;
    pthread_join(g_ckpt_thread, NULL);
    fprintf(stderr, "[WAL-CKPT] background checkpointer stopped\n");
}
