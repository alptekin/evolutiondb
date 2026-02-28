#ifndef QUERY_EXECUTOR_H
#define QUERY_EXECUTOR_H

#include "result.h"

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
} SessionCtx;

/*
 * Execute a SQL query through EvoSQL engine.
 * Fills ResultSet with structured results.
 * ctx is the per-connection session context; it is read before
 * execution and written back after (to capture USE / SET SCHEMA).
 *
 * For SELECT: reads .meta for columns, db_nextrec for rows
 * For DDL/DML: captures stdout message
 * For catalog queries: delegates to catalog.c
 */
void query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx);

/* Initialize the EvoSQL engine for adaptor use */
void query_engine_init(void);

#endif /* QUERY_EXECUTOR_H */
