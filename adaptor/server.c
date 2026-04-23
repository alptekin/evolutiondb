/*
 * server.c — Generic multi-threaded TCP server for EvoSQL Adaptor
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platform.h"
#include "net.h"
#include "server.h"
#include "query_executor.h"
#include "pool.h"
#include "../evolution/db/database.h"
#include "../evolution/db/buffer_pool.h"
#include "../evolution/db/query_context.h"
#include "../evolution/db/mvcc.h"
#include "../evolution/db/page_mgr.h"
#include "../evolution/db/vmap.h"

/* ================================================================
 *  Shared state — used by all protocol servers
 * ================================================================ */

/* Parser rwlock — serializes yyparse() (Flex/Bison not reentrant).
 * DML: write-lock during yyparse (which includes execution).
 * SELECT: write-lock for yyparse, then read-lock for collect_select_results.
 * Multiple readers (SELECT collect) can run concurrently. */
rwlock_t g_parse_lock;

/* DML serialization mutex — serializes DML execution but does NOT block readers.
 * SELECT uses rdlock(g_parse_lock) which coexists with this mutex.
 * DML acquires this mutex instead of wrlock(g_parse_lock). */
mutex_t g_dml_mutex;

/* Connection limits */
static int     g_max_connections    = 100;
static int     g_active_connections = 0;
static mutex_t g_conn_lock;

/* ---- Public accessors (used by catalog.c, etc.) ---- */
int  get_max_connections(void)      { return g_max_connections; }
void set_max_connections(int n)     { if (n > 0) g_max_connections = n; }
int  get_active_connections(void)   { return g_active_connections; }

/* ================================================================
 *  Session registry — global array of active sessions
 * ================================================================ */
static ActiveSession  g_sessions[MAX_SESSIONS];
static mutex_t        g_session_lock;
static int            g_next_session_id = 1;

int session_register(SessionCtx *ctx, volatile int *cancel_flag)
{
    mutex_lock(&g_session_lock);
    int sid = g_next_session_id++;
    for (int i = 0; i < MAX_SESSIONS; i++) {
        if (!g_sessions[i].active) {
            g_sessions[i].session_id     = sid;
            g_sessions[i].ctx            = ctx;
            g_sessions[i].connect_time_ms = platform_now_ms();
            g_sessions[i].query_start_ms = 0;
            g_sessions[i].current_query[0] = '\0';
            g_sessions[i].active         = 1;
            g_sessions[i].cancel_flag    = cancel_flag;
            mutex_unlock(&g_session_lock);
            return sid;
        }
    }
    mutex_unlock(&g_session_lock);
    return sid;  /* all slots full — still return a valid ID */
}

void session_unregister(int session_id)
{
    mutex_lock(&g_session_lock);
    for (int i = 0; i < MAX_SESSIONS; i++) {
        if (g_sessions[i].active && g_sessions[i].session_id == session_id) {
            g_sessions[i].active = 0;
            g_sessions[i].ctx = NULL;
            g_sessions[i].cancel_flag = NULL;
            break;
        }
    }
    mutex_unlock(&g_session_lock);
}

void session_set_query(int session_id, const char *sql)
{
    mutex_lock(&g_session_lock);
    for (int i = 0; i < MAX_SESSIONS; i++) {
        if (g_sessions[i].active && g_sessions[i].session_id == session_id) {
            g_sessions[i].query_start_ms = platform_now_ms();
            strncpy(g_sessions[i].current_query, sql, 255);
            g_sessions[i].current_query[255] = '\0';
            break;
        }
    }
    mutex_unlock(&g_session_lock);
}

void session_clear_query(int session_id)
{
    mutex_lock(&g_session_lock);
    for (int i = 0; i < MAX_SESSIONS; i++) {
        if (g_sessions[i].active && g_sessions[i].session_id == session_id) {
            g_sessions[i].query_start_ms = 0;
            g_sessions[i].current_query[0] = '\0';
            break;
        }
    }
    mutex_unlock(&g_session_lock);
}

int session_cancel(int session_id)
{
    mutex_lock(&g_session_lock);
    for (int i = 0; i < MAX_SESSIONS; i++) {
        if (g_sessions[i].active && g_sessions[i].session_id == session_id) {
            if (g_sessions[i].ctx)
                g_sessions[i].ctx->cancel_requested = 1;
            if (g_sessions[i].cancel_flag)
                *(g_sessions[i].cancel_flag) = 1;
            mutex_unlock(&g_session_lock);
            return 1;
        }
    }
    mutex_unlock(&g_session_lock);
    return 0;
}

int session_cancel_by_key(int session_id, int cancel_key)
{
    mutex_lock(&g_session_lock);
    for (int i = 0; i < MAX_SESSIONS; i++) {
        if (g_sessions[i].active && g_sessions[i].session_id == session_id &&
            g_sessions[i].ctx && g_sessions[i].ctx->cancel_key == cancel_key) {
            g_sessions[i].ctx->cancel_requested = 1;
            if (g_sessions[i].cancel_flag)
                *(g_sessions[i].cancel_flag) = 1;
            mutex_unlock(&g_session_lock);
            return 1;
        }
    }
    mutex_unlock(&g_session_lock);
    return 0;
}

int session_list(ActiveSession *out, int max)
{
    int count = 0;
    mutex_lock(&g_session_lock);
    for (int i = 0; i < MAX_SESSIONS && count < max; i++) {
        if (g_sessions[i].active) {
            out[count] = g_sessions[i];
            count++;
        }
    }
    mutex_unlock(&g_session_lock);
    return count;
}

/* From transaction.c — thread-local per-connection undo log */
#if defined(_WIN32)
extern __declspec(thread) UndoLog *g_current_undo_log;
#else
extern __thread UndoLog *g_current_undo_log;
#endif

/* ---- Thread-safe query execution ---- */
/* ── Statement timeout watchdog ── */
typedef struct {
    volatile int *cancel_flag;
    volatile int *done_flag;
    int timeout_ms;
} WatchdogArg;

static THREAD_RETURN watchdog_fn(THREAD_PARAM param)
{
    WatchdogArg *arg = (WatchdogArg *)param;
    int elapsed = 0;
    while (elapsed < arg->timeout_ms) {
        platform_sleep_ms(10);
        elapsed += 10;
        if (*(arg->done_flag)) break;
    }
    if (!*(arg->done_flag))
        *(arg->cancel_flag) = 1;
    free(arg);
    return 0;
}

void safe_query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    /* Allocate per-query context (thread-local) */
    QueryContext *qctx = qctx_alloc();
    if (!qctx) {
        result_init(rs);
        result_set_error(rs, "53000", "out of memory for query context");
        return;
    }
    g_qctx = qctx;

    /* MVCC: propagate XID for explicit transactions.
     * Auto-commit DML gets a lazy XID via mvcc_ensure_xid() in DML code.
     * Read-only queries (SELECT) never need an XID — zero overhead. */
    if (ctx && ctx->tx_xid > 0)
        qctx->mvcc_xid = ctx->tx_xid;

    /* Install undo-log callback while in a transaction */
    if (ctx && ctx->in_transaction && ctx->undo_log) {
        g_current_undo_log = ctx->undo_log;
        g_tx_undo_callback = tx_undo_callback;
    } else {
        g_current_undo_log = NULL;
        g_tx_undo_callback = NULL;
    }

    /* Check if cancel was requested between queries (e.g., KILL QUERY) */
    if (ctx && ctx->cancel_requested) {
        ctx->cancel_requested = 0;
        result_init(rs);
        result_set_error(rs, "57014", "canceling statement due to user request");
        qctx_free(qctx);
        g_qctx = NULL;
        return;
    }

    /* Propagate per-session lock timeout to thread-local */
    {
        extern __thread int g_lock_timeout_ms;
        g_lock_timeout_ms = (ctx) ? ctx->evo_lock_timeout_ms : 0;
    }

    /* Statement timeout: start watchdog thread if configured */
    extern __thread volatile int g_query_cancelled;
    g_query_cancelled = 0;
    volatile int query_done = 0;

    if (ctx && ctx->statement_timeout_ms > 0) {
        WatchdogArg *warg = (WatchdogArg *)malloc(sizeof(WatchdogArg));
        if (warg) {
            warg->cancel_flag = &g_query_cancelled;
            warg->done_flag = &query_done;
            warg->timeout_ms = ctx->statement_timeout_ms;
            thread_create(watchdog_fn, warg);
        }
    }

    query_execute(sql, rs, ctx);

    /* Signal watchdog to stop */
    query_done = 1;

    /* Check if query was cancelled by timeout */
    if (g_query_cancelled && !rs->has_error) {
        result_set_error(rs, "57014", "canceling statement due to statement timeout");
    }
    g_query_cancelled = 0;

    /* If error occurred within a transaction, mark it as aborted */
    if (ctx && ctx->in_transaction && rs->has_error)
        ctx->tx_aborted = 1;

    /* MVCC: auto-commit — if DML assigned a lazy XID, commit/abort it now */
    if (ctx && !ctx->in_transaction && qctx->mvcc_xid > 0) {
        if (rs->has_error) {
            clog_set_aborted(qctx->mvcc_xid);
        } else {
            /* WAL: flush all dirty pages to WAL before commit.
             * This guarantees durability — if the server crashes after
             * commit returns, the WAL has the page images for recovery. */
            {
                extern void bp_wal_flush_dirty(int fd);
                extern int pgm_get_fd(void);
                bp_wal_flush_dirty(pgm_get_fd());
            }
            uint32_t csn = pgm_next_csn();
            clog_set_committed_csn(qctx->mvcc_xid, csn);
        }
        /* Release all row locks held by this auto-committed transaction */
        {
            extern void lock_release_all(uint32_t xid);
            extern void lock_gap_release_all(uint32_t xid);
            lock_release_all(qctx->mvcc_xid);
            lock_gap_release_all(qctx->mvcc_xid);
        }
        mvcc_unregister_tx(qctx->mvcc_xid);
    }

    /* Clear callback after query (next query will re-set if needed) */
    g_tx_undo_callback = NULL;
    g_current_undo_log = NULL;

    /* Free per-query context */
    qctx_free(qctx);
    g_qctx = NULL;
}

/* ================================================================
 *  Per-connection thread context
 * ================================================================ */
typedef struct {
    socket_t            sock;
    protocol_handler_fn handler;
    char                label[8];
} ClientArg;

static THREAD_RETURN client_thread(THREAD_PARAM param)
{
    /* Legacy per-connection path — used when pool_init() hasn't run
     * (non-POSIX builds or EVOSQL_POOL_SIZE=0). Pool path uses the
     * worker loop in pool.c instead; both converge to the same
     * per-connection teardown shape below. */
    ClientArg *arg = (ClientArg *)param;
    socket_t   sock    = arg->sock;
    char       label[8];
    strncpy(label, arg->label, sizeof(label));

    arg->handler(sock);

    socket_close(sock);
    free(arg);

    mutex_lock(&g_conn_lock);
    g_active_connections--;
    printf("[%s] Client disconnected  (active: %d/%d)\n",
           label, g_active_connections, g_max_connections);
    mutex_unlock(&g_conn_lock);
    fflush(stdout);
    return 0;
}

/* Post-handler disconnect hook called by pool.c workers after the
 * protocol handler returns. Keeps the "Client disconnected" log line
 * identical between pool and per-conn paths. */
void server_client_disconnected(const char *label)
{
    mutex_lock(&g_conn_lock);
    g_active_connections--;
    printf("[%s] Client disconnected  (active: %d/%d)\n",
           label, g_active_connections, g_max_connections);
    mutex_unlock(&g_conn_lock);
    fflush(stdout);
}

/* ================================================================
 *  Public API
 * ================================================================ */
static int g_buffer_pool_pages = 0;  /* actual pages allocated */

void server_init(void) { server_init_ex(0); }

void server_init_ex(int buffer_pool_pages)
{
    socket_init();
    rwlock_init(&g_parse_lock);
    mutex_init(&g_dml_mutex);
    mutex_init(&g_conn_lock);
    mutex_init(&g_session_lock);
    memset(g_sessions, 0, sizeof(g_sessions));
    g_buffer_pool_pages = (buffer_pool_pages > 0) ? buffer_pool_pages : BP_DEFAULT_PAGES;
    bp_init(g_buffer_pool_pages);

    /* Task 96: connection pool — pre-spawn N workers so accepted
     * sockets dispatch without a pthread_create round trip. Sized via
     * EVOSQL_POOL_SIZE (default 20, min 1). Queue capacity stays
     * proportional to max_connections so a connect storm doesn't OOM
     * the userland queue. Setting EVOSQL_POOL_SIZE=0 disables the
     * pool and falls back to the legacy per-connection thread path
     * (handy for valgrind / thread-sanitizer runs). */
    {
        int pool_size = 20;
        const char *ps = getenv("EVOSQL_POOL_SIZE");
        if (ps && *ps) {
            int v = atoi(ps);
            if (v >= 0) pool_size = v;
        }
        if (pool_size > 0) {
            int queue_cap = g_max_connections > 0 ? g_max_connections : 128;
            if (pool_init(pool_size, queue_cap) < 0) {
                fprintf(stderr, "[pool] init failed; falling back to "
                        "per-connection threads\n");
                fflush(stderr);
            }
        }
    }

    {
        int mb = g_buffer_pool_pages * 4 / 1024;
        if (mb > 0)
            fprintf(stderr, "[BufferPool] %d pages (%d MB)\n", g_buffer_pool_pages, mb);
        else
            fprintf(stderr, "[BufferPool] %d pages (%d KB)\n", g_buffer_pool_pages, g_buffer_pool_pages * 4);
    }
    query_engine_init();         /* opens data file, WAL replay, reads catalog */
    snowflake_init();
    mvcc_init();
    vmap_init();
    { extern void lock_mgr_init(void); lock_mgr_init(); }
    { extern void cg_init(void); cg_init(); }
    { extern void table_lock_init(void); table_lock_init(); }
    { extern void xa_init(void); xa_init(); }
    auto_reclaim_start();
}

int server_get_buffer_pool_pages(void) { return g_buffer_pool_pages; }

void server_cleanup(void)
{
    /* Task 96: drain and join worker pool before we start tearing
     * down globals — a worker mid-handler can still be touching the
     * catalog and buffer pool. pool_shutdown is idempotent. */
    pool_shutdown();

    auto_reclaim_stop();
    /* WAL checkpoint before pgm_shutdown flushes buffer pool */
    {
        extern void wal_shutdown(void);
        wal_shutdown();
    }
    pgm_shutdown();   /* flushes FileHeader + buffer pool + closes fd */
    bp_destroy();
    rwlock_destroy(&g_parse_lock);
    mutex_destroy(&g_conn_lock);
    socket_cleanup();
}

void server_listen(int port, const char *label, protocol_handler_fn handler)
{
    socket_t server_sock = net_create_server();
    if (server_sock == SOCKET_INVALID) {
        fprintf(stderr, "[%s] socket() failed\n", label);
        return;
    }

    if (net_bind_listen(server_sock, port, 5) < 0) {
        fprintf(stderr, "[%s] bind/listen failed on port %d\n", label, port);
        socket_close(server_sock);
        return;
    }

    printf("[%s] Listening on port %d\n", label, port);
    fflush(stdout);

    while (1) {
        struct sockaddr_in client_addr;
        socket_t client_sock = net_accept(server_sock, &client_addr);
        if (client_sock == SOCKET_INVALID) {
            fprintf(stderr, "[%s] accept() failed\n", label);
            continue;
        }

        /* ---- Connection limit enforcement ---- */
        mutex_lock(&g_conn_lock);
        if (g_active_connections >= g_max_connections) {
            mutex_unlock(&g_conn_lock);
            fprintf(stderr, "[%s] Connection rejected: limit %d reached\n",
                    label, g_max_connections);
            fflush(stderr);
            /* Best-effort error — just close the socket.
             * Protocol-specific rejection is up to the handler if needed. */
            socket_close(client_sock);
            continue;
        }
        g_active_connections++;
        printf("[%s] Connection from %s:%d  (active: %d/%d)\n",
               label,
               inet_ntoa(client_addr.sin_addr),
               ntohs(client_addr.sin_port),
               g_active_connections, g_max_connections);
        mutex_unlock(&g_conn_lock);
        fflush(stdout);

        /* ---- Dispatch ----
         * Try pool_submit first. pool_submit returns 0 on success,
         * -1 when the pool isn't initialized or shutdown is in
         * flight. On fallback we spin up a per-connection thread,
         * matching the pre-Task-96 behavior. */
        {
            PoolTask *task = (PoolTask *)malloc(sizeof(PoolTask));
            if (task) {
                task->sock    = client_sock;
                task->handler = handler;
                strncpy(task->label, label, sizeof(task->label) - 1);
                task->label[sizeof(task->label) - 1] = '\0';
                if (pool_submit(task) == 0) continue;
                free(task);
            }
        }

        /* Fallback: legacy per-connection thread. */
        ClientArg *arg = (ClientArg *)malloc(sizeof(ClientArg));
        if (!arg) {
            fprintf(stderr, "[%s] Out of memory for client arg\n", label);
            socket_close(client_sock);
            continue;
        }
        arg->sock    = client_sock;
        arg->handler = handler;
        strncpy(arg->label, label, sizeof(arg->label) - 1);
        arg->label[sizeof(arg->label) - 1] = '\0';

        thread_create(client_thread, (THREAD_PARAM)arg);
    }

    socket_close(server_sock);
}
