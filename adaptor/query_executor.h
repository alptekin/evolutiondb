#ifndef QUERY_EXECUTOR_H
#define QUERY_EXECUTOR_H

#include <stdint.h>
#include "result.h"
#include "transaction.h"
#include "../evolution/db/database.h"

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
} SessionCtx;

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

#endif /* QUERY_EXECUTOR_H */
