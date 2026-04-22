#ifndef QUERY_EXECUTOR_H
#define QUERY_EXECUTOR_H

#include <stdint.h>
#include "result.h"
#include "transaction.h"
#include "../evolution/db/database.h"
#include "../evolution/db/mvcc.h"

struct PendingNotify;

/* Required constants for SessionCtx field sizing without pulling notify.h */
#ifndef NOTIFY_CHANNEL_NAME_MAX
#define NOTIFY_CHANNEL_NAME_MAX 64
#endif
#ifndef NOTIFY_PAYLOAD_MAX
#define NOTIFY_PAYLOAD_MAX      8000
#endif
#ifndef NOTIFY_MAX_LISTEN
#define NOTIFY_MAX_LISTEN       32
#endif

/* ----------------------------------------------------------------
 *  Per-connection session context
 *  Each client connection owns one of these.  The active database
 *  and schema are loaded into the engine globals (g_currentDatabase,
 *  g_currentSchema) while a query runs under the mutex, then written
 *  back so that USE / SET SCHEMA changes are captured for the
 *  connection that issued them — without leaking to other sessions.
 * ---------------------------------------------------------------- */
typedef struct {
    char database[256];   /* active database  (default: "evosql")  */
    char schema[256];     /* active schema    (default: "default") */
    char username[256];   /* authenticated user                    */
    int       in_transaction;  /* 1 if BEGIN was issued */
    int       tx_aborted;     /* 1 if error occurred in transaction */
    int       isolation_level; /* 0=READ UNCOMMITTED, 1=READ COMMITTED (default),
                                  2=REPEATABLE READ, 3=SERIALIZABLE */
    int       serializable_locked; /* 1 if holding parse lock for SERIALIZABLE */
    UndoLog  *undo_log;       /* undo entries for rollback */
    SavePointStack savepoints; /* savepoint stack for SAVEPOINT/ROLLBACK TO */

    /* Temporary table tracking — auto-dropped on disconnect */
    uint32_t  temp_table_ids[64];
    int       temp_table_count;

    /* Global Temporary Table — per-session storage overrides */
    GttOverride gtt_data[MAX_GTT_PER_SESSION];
    int       gtt_count;

    /* LAST_INSERT_ID — last auto-generated value (per-session) */
    char      last_insert_id[64];

    /* MVCC — transaction ID and snapshot */
    uint32_t  tx_xid;            /* current transaction XID (0 = read-only/none) */
    Snapshot  snapshot;           /* active snapshot for SELECT visibility */
    int       snapshot_valid;     /* 1 if snapshot has been taken */

    /* XA Distributed Transaction state */
    int       xa_state;           /* XA_STATE_* (0 = not in XA) */
    char      xa_xid[128];       /* XA transaction identifier */

    /* Query timeout & cancellation */
    int       statement_timeout_ms; /* 0 = no timeout (default) */
    volatile int cancel_requested;  /* 1 = cancel current query */
    int64_t   query_start_ms;       /* timestamp when current query started */
    int       cancel_key;           /* random secret for PG CancelRequest */

    /* Lock timeout — per-session override for row-lock wait (ms, 0 = default 5s) */
    int       evo_lock_timeout_ms;

    /* Idle timeout — disconnect after N ms of inactivity (0 = disabled) */
    int       evo_idle_timeout_ms;

    /* Session registry ID (used as PG "pid" in BackendKeyData) */
    int       session_id;

    /* Prepared statements cache (SQL-level PREPARE/EXECUTE) */
    struct {
        char  name[64];
        char *query;        /* heap-allocated SQL */
        int   param_count;
    } prepared_stmts[32];
    int prepared_stmt_count;

    /* User variables — SET @var = value */
    char      user_var_names[64][128];
    char      user_var_values[64][256];
    int       user_var_count;

    /* Standalone cursors — session-level, persist across queries */
    struct {
        char      name[64];
        char      query[4096];
        ResultSet rs;
        int       pos;       /* current FETCH position, -1 = not opened */
        int       is_open;
    } cursors[16];
    int cursor_count;

    /* LISTEN/NOTIFY (Task 91 — Feature #62) ---------------------------------
     *   listening[]        — channels this session is subscribed to; mirrored
     *                         in the global registry, kept here for disconnect
     *                         cleanup and pg_listening_channels().
     *   pending_notifies_*  — singly-linked queue of NOTIFYs issued this TX;
     *                         flushed at COMMIT post-CLOG and discarded on
     *                         ROLLBACK. Entries stamp savepoint_depth so
     *                         ROLLBACK TO SAVEPOINT can drop just the ones
     *                         that were enqueued after the savepoint mark.
     *   savepoint_depth    — bumped on SAVEPOINT, decremented on RELEASE;
     *                         pending entries carry the depth they were
     *                         enqueued at. -------------------------------- */
    struct {
        char channel[NOTIFY_CHANNEL_NAME_MAX];
        int  self_flag;
    } listening[NOTIFY_MAX_LISTEN];
    int listening_count;

    struct PendingNotify *pending_notifies_head;
    struct PendingNotify *pending_notifies_tail;
    int pending_notify_count;
    int savepoint_depth;

    /* The conn_t that owns this session — used when registering in the
     * notify registry so async senders know where to deliver. Set at
     * handler startup; never follows a closed socket. Stored as void*
     * to avoid pulling tls.h/openssl here. */
    void *conn;
} SessionCtx;

/* Pending NOTIFY entry — heap-allocated per enqueue, freed by flush/discard. */
typedef struct PendingNotify {
    char  channel[NOTIFY_CHANNEL_NAME_MAX];
    char  payload[NOTIFY_PAYLOAD_MAX + 1];
    int   sender_session_id;
    int   savepoint_depth;
    struct PendingNotify *next;
} PendingNotify;

/* Pending list management (Task 91) ----------------------------------------
 *   *_enqueue_pending   — called from NOTIFY statement / evo_notify()
 *                         evaluator; returns 0 on success, -1 on invalid
 *                         input (channel too long, payload over cap).
 *   *_flush_commit      — called from COMMIT handler post-CLOG. Walks pending
 *                         list; for each entry snapshots the registry and
 *                         sends to each listener. Frees the list.
 *   *_discard_pending   — called from ROLLBACK and savepoint rollback.
 *                         Drops pending entries whose savepoint_depth is
 *                         strictly greater than below_depth. Pass 0 for
 *                         full rollback; pass the saved depth for
 *                         ROLLBACK TO SAVEPOINT. Frees the dropped nodes.
 *   *_discard_session_pending — convenience: drop everything regardless of
 *                         depth (used on connection disconnect).
 * --------------------------------------------------------------------------*/
int  notify_enqueue_pending(SessionCtx *ctx, const char *channel,
                            const char *payload);
void notify_flush_commit(SessionCtx *ctx);
void notify_discard_pending(SessionCtx *ctx, int below_depth);
void notify_discard_session_pending(SessionCtx *ctx);

/* listening[] bookkeeping helpers */
int  notify_session_add_listen(SessionCtx *ctx, const char *channel, int self_flag);
int  notify_session_remove_listen(SessionCtx *ctx, const char *channel);
void notify_session_clear_listens(SessionCtx *ctx);

/*
 * Execute a SQL query through EvoSQL engine.
 * Fills ResultSet with structured results.
 * ctx is the per-connection session context; it is read before
 * execution and written back after (to capture USE / SET SCHEMA).
 *
 * For SELECT: reads columns from catalog, scans rows via table API
 * For DDL/DML: captures stdout message
 * For catalog queries: delegates to catalog.c
 */
void query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx);

/* Initialize the EvoSQL engine for adaptor use */
void query_engine_init(void);

/* Drop all temporary tables tracked in session context */
void session_drop_temp_tables(SessionCtx *ctx);

/* Clean up GTT session-private data on disconnect */
void session_cleanup_gtt(SessionCtx *ctx);

/* Map EvoSQL type encoding to PostgreSQL type OID */
int type_encoding_to_pg_oid(int typeEncoding);

#endif /* QUERY_EXECUTOR_H */
