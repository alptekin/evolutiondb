#ifndef QUERY_EXECUTOR_H
#define QUERY_EXECUTOR_H

#include "result.h"

/*
 * Execute a SQL query through EvoSQL engine.
 * Fills ResultSet with structured results.
 *
 * For SELECT: reads .meta for columns, db_nextrec for rows
 * For DDL/DML: captures stdout message
 * For catalog queries: delegates to catalog.c
 */
void query_execute(const char *sql, ResultSet *rs);

/* Initialize the EvoSQL engine for adaptor use */
void query_engine_init(void);

#endif /* QUERY_EXECUTOR_H */
