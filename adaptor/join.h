/*
 * join.h — JOIN Execution Engine for EvoSQL
 *
 * Supports INNER, LEFT, RIGHT, CROSS joins via nested-loop.
 * Handles both local and remote tables.
 */
#ifndef JOIN_H
#define JOIN_H

#include "result.h"
#include "query_executor.h"
#include "../evolution/db/expression.h"
#include "../evolution/db/catalog_internal.h"

/* Join type constants (match parser emit values) */
#define JOIN_INNER   100
#define JOIN_LEFT    301
#define JOIN_RIGHT   302
#define JOIN_CROSS   200
#define JOIN_NATURAL 400

/* Join plan — built from parsed multi-table SELECT */
typedef struct {
    struct {
        char     name[256];
        char     alias[128];
        int      owner_node;
        uint32_t table_id;
    } tables[8];
    int      num_tables;
    int      join_types[8];        /* tables[1..n]: join type */
    ExprNode *join_conds[8];       /* tables[1..n]: ON condition */
    ExprNode *where_expr;          /* global WHERE */
    /* LATERAL (Task 89 — Feature #59): when is_lateral[i] != 0, the slot is a
     * correlated subquery re-evaluated per outer row. lateral_sql[i] is the
     * captured SQL text; not owned by the plan. */
    int         is_lateral[8];
    const char *lateral_sql[8];
} JoinPlan;

/* Execute a multi-table JOIN and write results to rs.
 * snap may be NULL (no MVCC filtering). */
int join_execute(JoinPlan *plan, ResultSet *rs, SessionCtx *ctx,
                 const void *snap);

/* Collect a single table's rows into a ResultSet (no WHERE/ORDER BY).
 * Used internally and by scatter-gather. */
void collect_single_table(const char *name, ResultSet *rs,
                          const void *snap);

#endif /* JOIN_H */
