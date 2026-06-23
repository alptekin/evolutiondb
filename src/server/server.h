/*
 * server.h — Generic multi-threaded TCP server for EvoSQL Adaptor
 *
 * Provides a reusable accept-loop that spawns a thread per connection.
 * The actual protocol handling is delegated to a callback function,
 * allowing the same server infrastructure to serve PG and EVO protocols.
 */
#ifndef SERVER_H
#define SERVER_H

#include "platform.h"
#include "query_executor.h"
#include "result.h"

/* ----------------------------------------------------------------
 *  Protocol handler callback
 *
 *  Called once per accepted connection, in its own thread.
 *  `sock` is the client socket (already TCP_NODELAY'd).
 *  The handler owns the socket and must NOT close it — the server
 *  infrastructure closes it after the handler returns.
 * ---------------------------------------------------------------- */
typedef void (*protocol_handler_fn)(socket_t sock);

/* ----------------------------------------------------------------
 *  Thread-safe query execution (shared by all protocol handlers)
 * ---------------------------------------------------------------- */
void safe_query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx);

/* ----------------------------------------------------------------
 *  Connection-limit accessors (shared state)
 * ---------------------------------------------------------------- */
int  get_max_connections(void);
void set_max_connections(int n);
int  get_active_connections(void);

/* ----------------------------------------------------------------
 *  Server lifecycle
 * ---------------------------------------------------------------- */

/* Initialise the engine and shared locks.  Call once from main(). */
void server_init(void);
void server_init_ex(int buffer_pool_pages);  /* 0 = default (128MB) */

/* Get current buffer pool size in pages. */
int server_get_buffer_pool_pages(void);

/* Start an accept loop on `port` using `handler` for each connection.
 * `label` is used in log messages (e.g. "PG", "EVO").
 * This function blocks forever (runs the accept loop).
 * Returns only on fatal error. */
void server_listen(int port, const char *label, protocol_handler_fn handler);

/* Cleanup (called after all servers stop — usually never). */
void server_cleanup(void);

/* Post-handler disconnect hook — called from pool workers to log
 * the "Client disconnected" line and decrement the active counter.
 * Exported so adaptor/pool.c can share the same logic the legacy
 * per-connection thread uses. */
void server_client_disconnected(const char *label);

/* ----------------------------------------------------------------
 *  Session registry — tracks active connections for
 *  SHOW EVO_SESSIONS / SHOW EVO_PROCESSES / KILL QUERY / CancelRequest
 * ---------------------------------------------------------------- */
#define MAX_SESSIONS 256

typedef struct {
    int          session_id;         /* unique ID (sent as PG "pid") */
    SessionCtx  *ctx;                /* pointer to session context */
    int64_t      connect_time_ms;    /* epoch ms when connected */
    int64_t      query_start_ms;     /* epoch ms when current query started (0=idle) */
    char         current_query[256]; /* truncated SQL of running query */
    int          active;             /* 1 = slot in use */
    volatile int *cancel_flag;       /* points to thread's g_query_cancelled */
} ActiveSession;

/* Register a new session. Returns a unique session_id (>= 1). */
int  session_register(SessionCtx *ctx, volatile int *cancel_flag);

/* Unregister session on disconnect. */
void session_unregister(int session_id);

/* Record that a query has started / finished. */
void session_set_query(int session_id, const char *sql);
void session_clear_query(int session_id);

/* Cancel a session's running query by session_id. Returns 1 if found. */
int  session_cancel(int session_id);

/* Cancel a session by (session_id, cancel_key) — for PG CancelRequest. */
int  session_cancel_by_key(int session_id, int cancel_key);

/* Copy active sessions into caller-provided buffer. Returns count. */
int  session_list(ActiveSession *out, int max);

#endif /* SERVER_H */
