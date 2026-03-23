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

/* From transaction.c — thread-local per-connection undo log */
#if defined(_WIN32)
extern __declspec(thread) UndoLog *g_current_undo_log;
#else
extern __thread UndoLog *g_current_undo_log;
#endif

/* ---- Thread-safe query execution ---- */
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

    query_execute(sql, rs, ctx);

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
    ClientArg *arg = (ClientArg *)param;
    socket_t   sock    = arg->sock;
    char       label[8];
    strncpy(label, arg->label, sizeof(label));

    /* Run the protocol handler — it owns the conversation */
    arg->handler(sock);

    /* Done — close socket and update counters */
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
    g_buffer_pool_pages = (buffer_pool_pages > 0) ? buffer_pool_pages : BP_DEFAULT_PAGES;
    bp_init(g_buffer_pool_pages);

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
    auto_reclaim_start();
}

int server_get_buffer_pool_pages(void) { return g_buffer_pool_pages; }

void server_cleanup(void)
{
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

        /* ---- Spawn thread ---- */
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
