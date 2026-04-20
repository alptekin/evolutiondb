/*
 * join.c — Iterator/Pipeline JOIN Engine for EvoSQL
 *
 * Uses Volcano-style pipelining: no full table materialization.
 * Each table is accessed one row at a time via scan or PK lookup.
 * Memory usage: O(num_tables) not O(table_size).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "join.h"
#include "distributed.h"
#include "query_executor.h"  /* query_execute for lateral subquery re-exec */
#include "../evolution/db/table_api.h"
#include "../evolution/db/tuple_format.h"
#include "../evolution/db/mvcc.h"
#include "../evolution/db/database.h"
#include "../evolution/db/btree2.h"
#include "../evolution/db/query_context.h"
#include "../evolution/db/expression.h"

/* ================================================================
 *  Per-table info resolved before pipeline starts
 * ================================================================ */
typedef struct {
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char alias[128];
    char name[256];
    int join_type;

    /* For tables[1..n]: join key mapping */
    int left_key_idx;         /* merged-row column index for left key (-1=none) */
    int right_key_col_idx;    /* column index in this table for right key */
    int right_key_is_pk;      /* 1 if right key is PK → use bt2_search */

    /* For tables[0]: WHERE push-down */
    int where_push_col_idx;   /* column index for WHERE literal (-1=full scan) */
    int where_push_is_pk;     /* 1 if WHERE column is PK */
    char where_push_val[256]; /* literal value from WHERE */

    /* LATERAL slot (Task 89 — Feature #59) */
    int         is_lateral;       /* 1 = re-execute lateral_sql per outer row */
    const char *lateral_sql;      /* not owned; points to SelectOpts buffer */
    int         lat_col_oid[CAT_MAX_COLUMNS]; /* PG OID per lateral column */
} PipeTable;

/* ================================================================
 *  Predicate analysis helpers
 * ================================================================ */
static int extract_eq_literal(const ExprNode *expr,
                               char *alias, char *col, char *value)
{
    if (!expr || expr->type != EXPR_CMP_EQ) return 0;
    for (int swap = 0; swap < 2; swap++) {
        const ExprNode *c = swap ? expr->right : expr->left;
        const ExprNode *v = swap ? expr->left : expr->right;
        if (c->type == EXPR_COLUMN) {
            const char *dot = strchr(c->val.col_name, '.');
            if (dot) {
                int n = (int)(dot - c->val.col_name);
                memcpy(alias, c->val.col_name, n); alias[n] = '\0';
                strncpy(col, dot + 1, 127); col[127] = '\0';
            } else {
                alias[0] = '\0';
                strncpy(col, c->val.col_name, 127); col[127] = '\0';
            }
            if (v->type == EXPR_LITERAL_INT) {
                snprintf(value, 256, "%d", v->val.intval); return 1;
            } else if (v->type == EXPR_LITERAL_STR) {
                strncpy(value, v->val.strval, 255); value[255] = '\0'; return 1;
            }
        }
    }
    return 0;
}

/* Walk AND tree to find alias.col = literal */
static int extract_eq_for_alias(const ExprNode *expr, const char *target_alias,
                                 const char *target_name,
                                 char *col, char *value)
{
    if (!expr) return 0;
    if (expr->type == EXPR_AND) {
        if (extract_eq_for_alias(expr->left, target_alias, target_name, col, value)) return 1;
        return extract_eq_for_alias(expr->right, target_alias, target_name, col, value);
    }
    char a[128], c[128], v[256];
    if (extract_eq_literal(expr, a, c, v)) {
        if (a[0] == '\0' || strcasecmp(a, target_alias) == 0 ||
            strcasecmp(a, target_name) == 0) {
            strncpy(col, c, 127); col[127] = '\0';
            strncpy(value, v, 255); value[255] = '\0';
            return 1;
        }
    }
    return 0;
}

static int extract_eq_columns(const ExprNode *expr,
                                char *la, char *lc, char *ra, char *rc)
{
    if (!expr || expr->type != EXPR_CMP_EQ) return 0;
    if (!expr->left || expr->left->type != EXPR_COLUMN) return 0;
    if (!expr->right || expr->right->type != EXPR_COLUMN) return 0;
    const char *l = expr->left->val.col_name;
    const char *r = expr->right->val.col_name;
    const char *ld = strchr(l, '.'), *rd = strchr(r, '.');
    if (ld) { int n=(int)(ld-l); memcpy(la,l,n); la[n]='\0'; strncpy(lc,ld+1,127); lc[127]='\0'; }
    else { la[0]='\0'; strncpy(lc,l,127); lc[127]='\0'; }
    if (rd) { int n=(int)(rd-r); memcpy(ra,r,n); ra[n]='\0'; strncpy(rc,rd+1,127); rc[127]='\0'; }
    else { ra[0]='\0'; strncpy(rc,r,127); rc[127]='\0'; }
    return 1;
}

static int find_col_idx(const ColumnDesc cols[], int n, const char *name)
{
    for (int i = 0; i < n; i++)
        if (strcasecmp(cols[i].col_name, name) == 0) return i;
    return -1;
}

/* Forward declaration so pipeline_recurse can dispatch to the lateral branch. */
static void pipeline_recurse_lateral(
    PipeTable *tables, int num_tables, int depth,
    char (*merged_fields)[256], int *merged_null, int merged_ncols,
    char (*col_names)[128], int *col_oids, int total_cols,
    ExprNode *where_expr, ResultSet *rs, const Snapshot *snap,
    SessionCtx *ctx);

/* ================================================================
 *  LATERAL snapshot (Task 89 — Feature #59)
 *
 *  Save/restore of the outer query's parser-populated state around any
 *  inner query_execute call (schema probe or per-row re-exec). Needed
 *  because inner execute_via_parser aggressively resets g_expr/g_sel and
 *  overwrites the ExprNode pool — post-join projection in query_executor.c
 *  still reads those fields and walks outer-query ExprNodes.
 * ================================================================ */
typedef struct {
    int  selectExprCount;
    int  inListCount;
    int  caseWhenCount;
    int  groupByCount;
    int  windowSpecCount;
    int  nodePoolUsed;
    ExprNode *whereExpr;
    ExprNode *limitExpr;
    ExprNode *offsetExpr;
    ExprNode *havingExpr;
    ExprNode *selectExprs[MAX_SELECT_EXPRS];
    ExprNode *groupByExprs[MAX_GROUP_BY];
    ExprNode *inListExprs[MAX_IN_LIST];
    ExprNode *caseWhenExprs[MAX_CASE_WHENS];
    ExprNode *caseThenExprs[MAX_CASE_WHENS];
    ExprNode *pool_copy;   /* malloc'd; NULL when empty */
    int  joinTableCount;
    int  columnCount;
    int  distinct;
    int  orderByCount;
    int  forUpdate;
    char lastTable[1024];
    char columns[64][128];
    char orderByColumns[8][256];
    int  orderByDescs[8];
} LateralSnapshot;

static void lateral_snapshot_save(LateralSnapshot *s) {
    s->selectExprCount = g_expr.selectExprCount;
    s->inListCount     = g_expr.inListCount;
    s->caseWhenCount   = g_expr.caseWhenCount;
    s->groupByCount    = g_expr.groupByCount;
    s->windowSpecCount = g_expr.windowSpecCount;
    s->nodePoolUsed    = g_expr.nodePoolUsed;
    s->whereExpr       = g_expr.whereExpr;
    s->limitExpr       = g_expr.limitExpr;
    s->offsetExpr      = g_expr.offsetExpr;
    s->havingExpr      = g_expr.havingExpr;
    memcpy(s->selectExprs,   g_expr.selectExprs,   sizeof(s->selectExprs));
    memcpy(s->groupByExprs,  g_expr.groupByExprs,  sizeof(s->groupByExprs));
    memcpy(s->inListExprs,   g_expr.inListExprs,   sizeof(s->inListExprs));
    memcpy(s->caseWhenExprs, g_expr.caseWhenExprs, sizeof(s->caseWhenExprs));
    memcpy(s->caseThenExprs, g_expr.caseThenExprs, sizeof(s->caseThenExprs));
    s->pool_copy = NULL;
    if (s->nodePoolUsed > 0) {
        s->pool_copy = (ExprNode *)malloc(s->nodePoolUsed * sizeof(ExprNode));
        if (s->pool_copy)
            memcpy(s->pool_copy, g_expr.nodePool,
                   s->nodePoolUsed * sizeof(ExprNode));
    }
    s->joinTableCount = g_sel.joinTableCount;
    s->columnCount    = g_sel.columnCount;
    s->distinct       = g_sel.distinct;
    s->orderByCount   = g_sel.orderByCount;
    s->forUpdate      = g_sel.forUpdate;
    strncpy(s->lastTable, g_sel.lastTable, sizeof(s->lastTable));
    memcpy(s->columns,        g_sel.columns,        sizeof(s->columns));
    memcpy(s->orderByColumns, g_sel.orderByColumns, sizeof(s->orderByColumns));
    memcpy(s->orderByDescs,   g_sel.orderByDescs,   sizeof(s->orderByDescs));
}

static void lateral_snapshot_restore(LateralSnapshot *s) {
    if (s->pool_copy) {
        memcpy(g_expr.nodePool, s->pool_copy,
               s->nodePoolUsed * sizeof(ExprNode));
        free(s->pool_copy);
        s->pool_copy = NULL;
    }
    g_expr.nodePoolUsed    = s->nodePoolUsed;
    g_expr.selectExprCount = s->selectExprCount;
    g_expr.inListCount     = s->inListCount;
    g_expr.caseWhenCount   = s->caseWhenCount;
    g_expr.groupByCount    = s->groupByCount;
    g_expr.windowSpecCount = s->windowSpecCount;
    g_expr.whereExpr       = s->whereExpr;
    g_expr.limitExpr       = s->limitExpr;
    g_expr.offsetExpr      = s->offsetExpr;
    g_expr.havingExpr      = s->havingExpr;
    memcpy(g_expr.selectExprs,   s->selectExprs,   sizeof(s->selectExprs));
    memcpy(g_expr.groupByExprs,  s->groupByExprs,  sizeof(s->groupByExprs));
    memcpy(g_expr.inListExprs,   s->inListExprs,   sizeof(s->inListExprs));
    memcpy(g_expr.caseWhenExprs, s->caseWhenExprs, sizeof(s->caseWhenExprs));
    memcpy(g_expr.caseThenExprs, s->caseThenExprs, sizeof(s->caseThenExprs));
    g_sel.joinTableCount = s->joinTableCount;
    g_sel.columnCount    = s->columnCount;
    g_sel.distinct       = s->distinct;
    g_sel.orderByCount   = s->orderByCount;
    g_sel.forUpdate      = s->forUpdate;
    strncpy(g_sel.lastTable, s->lastTable, sizeof(g_sel.lastTable));
    memcpy(g_sel.columns,        s->columns,        sizeof(s->columns));
    memcpy(g_sel.orderByColumns, s->orderByColumns, sizeof(s->orderByColumns));
    memcpy(g_sel.orderByDescs,   s->orderByDescs,   sizeof(s->orderByDescs));
}

/* ================================================================
 *  Pipeline recursion — heart of the iterator model
 *
 *  merged_fields/merged_null: accumulated columns from tables[0..depth-1]
 *  merged_ncols: count of accumulated columns so far
 *  At depth == num_tables: emit the complete joined row
 * ================================================================ */
static void pipeline_recurse(
    PipeTable *tables, int num_tables, int depth,
    char (*merged_fields)[256], int *merged_null, int merged_ncols,
    /* Column name metadata (read-only, set up before pipeline) */
    char (*col_names)[128], int *col_oids, int total_cols,
    ExprNode *where_expr, ResultSet *rs, const Snapshot *snap,
    SessionCtx *ctx)
{
    /* ── End of pipeline: evaluate WHERE and emit ── */
    if (depth >= num_tables) {
        if (where_expr) {
            static __thread char en[CAT_MAX_COLUMNS][128];
            static __thread char ev[CAT_MAX_COLUMNS][256];
            for (int c = 0; c < merged_ncols && c < CAT_MAX_COLUMNS; c++) {
                strncpy(en[c], col_names[c], 127); en[c][127] = '\0';
                if (merged_null[c]) strcpy(ev[c], "\x01NULL\x01");
                else { strncpy(ev[c], merged_fields[c], 255); ev[c][255] = '\0'; }
            }
            char result[256];
            int ok = expr_evaluate(where_expr, en, ev, merged_ncols, result, sizeof(result));
            if (!ok || strcmp(result,"0")==0 || strcasecmp(result,"false")==0 || strcasecmp(result,"f")==0)
                return;
        }
        int row = result_add_row(rs);
        if (row < 0) return;
        for (int c = 0; c < merged_ncols; c++) {
            if (merged_null[c]) result_set_null(rs, row, c);
            else result_set_field(rs, row, c, merged_fields[c]);
        }
        return;
    }

    PipeTable *ti = &tables[depth];
    int base = merged_ncols;

    /* Helper: extract record fields and append to merged row */
    #define APPEND_FIELDS(record, recLen) do { \
        char _f[CAT_MAX_COLUMNS][256]; int _n[CAT_MAX_COLUMNS]; \
        int _nf = tup_extract_fields(record, recLen, ti->cols, ti->ncols, _f, _n, CAT_MAX_COLUMNS); \
        for (int _c = 0; _c < _nf && (base+_c) < total_cols; _c++) { \
            if (_n[_c]) { merged_fields[base+_c][0]='\0'; merged_null[base+_c]=1; } \
            else { strncpy(merged_fields[base+_c], _f[_c], 255); \
                   merged_fields[base+_c][255]='\0'; merged_null[base+_c]=0; } \
        } \
    } while(0)

    #define APPEND_NULLS() do { \
        for (int _c = 0; _c < ti->ncols && (base+_c) < total_cols; _c++) { \
            merged_fields[base+_c][0]='\0'; merged_null[base+_c]=1; } \
    } while(0)

    int is_left = (ti->join_type == 301 || ti->join_type == 305);

    if (depth == 0) {
        /* ── First table: WHERE push-down or full scan ── */
        if (ti->where_push_col_idx >= 0 && ti->where_push_is_pk) {
            /* PK lookup */
            BTree2 pk = { .root_page = ti->td.pk_root_page };
            RowID rid;
            if (bt2_search(&pk, ti->where_push_val, &rid) == 0) {
                char record[RECORD_BUF_SIZE];
                int recLen = tapi_heap_read(rid, record, sizeof(record));
                if (recLen > 0 && (!snap || mvcc_is_visible(record, recLen, snap))) {
                    APPEND_FIELDS(record, recLen);
                    pipeline_recurse(tables, num_tables, 1,
                                     merged_fields, merged_null, base + ti->ncols,
                                     col_names, col_oids, total_cols,
                                     where_expr, rs, snap, ctx);
                }
            }
        } else {
            /* Full scan (with optional column filter for non-PK WHERE) */
            TableScanCursor cursor;
            if (tapi_scan_begin(&ti->td, &cursor) != 0) return;
            char pk_key[256], record[RECORD_BUF_SIZE];
            while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
                int recLen = tup_record_len(record, sizeof(record));
                if (snap && !mvcc_is_visible(record, recLen, snap)) continue;

                /* Non-PK WHERE push-down filter */
                if (ti->where_push_col_idx >= 0) {
                    char fields[CAT_MAX_COLUMNS][256]; int is_n[CAT_MAX_COLUMNS];
                    int nf = tup_extract_fields(record, recLen, ti->cols, ti->ncols, fields, is_n, CAT_MAX_COLUMNS);
                    if (ti->where_push_col_idx < nf &&
                        !is_n[ti->where_push_col_idx] &&
                        strcmp(fields[ti->where_push_col_idx], ti->where_push_val) != 0)
                        continue;
                }

                APPEND_FIELDS(record, recLen);
                pipeline_recurse(tables, num_tables, 1,
                                 merged_fields, merged_null, base + ti->ncols,
                                 col_names, col_oids, total_cols,
                                 where_expr, rs, snap, ctx);
            }
        }
    } else if (ti->is_lateral) {
        /* ── Subsequent tables, LATERAL subquery ── */
        pipeline_recurse_lateral(tables, num_tables, depth,
                                 merged_fields, merged_null, merged_ncols,
                                 col_names, col_oids, total_cols,
                                 where_expr, rs, snap, ctx);
    } else {
        /* ── Subsequent tables: join by key ── */
        const char *key_val = (ti->left_key_idx >= 0 && ti->left_key_idx < base)
                              ? merged_fields[ti->left_key_idx] : NULL;
        int matched = 0;

        if (key_val && ti->right_key_is_pk) {
            /* PK index lookup — O(log n) */
            BTree2 pk = { .root_page = ti->td.pk_root_page };
            RowID rid;
            if (bt2_search(&pk, key_val, &rid) == 0) {
                char record[RECORD_BUF_SIZE];
                int recLen = tapi_heap_read(rid, record, sizeof(record));
                if (recLen > 0 && (!snap || mvcc_is_visible(record, recLen, snap))) {
                    APPEND_FIELDS(record, recLen);
                    pipeline_recurse(tables, num_tables, depth + 1,
                                     merged_fields, merged_null, base + ti->ncols,
                                     col_names, col_oids, total_cols,
                                     where_expr, rs, snap, ctx);
                    matched = 1;
                }
            }
        } else if (key_val && ti->right_key_col_idx >= 0) {
            /* Non-PK: full scan with column equality filter */
            TableScanCursor cursor;
            if (tapi_scan_begin(&ti->td, &cursor) == 0) {
                char pk_key[256], record[RECORD_BUF_SIZE];
                while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
                    int recLen = tup_record_len(record, sizeof(record));
                    if (snap && !mvcc_is_visible(record, recLen, snap)) continue;
                    char fields[CAT_MAX_COLUMNS][256]; int is_n[CAT_MAX_COLUMNS];
                    int nf = tup_extract_fields(record, recLen, ti->cols, ti->ncols, fields, is_n, CAT_MAX_COLUMNS);
                    if (ti->right_key_col_idx >= nf) continue;
                    if (is_n[ti->right_key_col_idx]) continue;
                    if (strcmp(fields[ti->right_key_col_idx], key_val) != 0) continue;

                    APPEND_FIELDS(record, recLen);
                    pipeline_recurse(tables, num_tables, depth + 1,
                                     merged_fields, merged_null, base + ti->ncols,
                                     col_names, col_oids, total_cols,
                                     where_expr, rs, snap, ctx);
                    matched = 1;
                }
            }
        } else {
            /* CROSS JOIN or no key: full scan, no filter */
            TableScanCursor cursor;
            if (tapi_scan_begin(&ti->td, &cursor) == 0) {
                char pk_key[256], record[RECORD_BUF_SIZE];
                while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
                    int recLen = tup_record_len(record, sizeof(record));
                    if (snap && !mvcc_is_visible(record, recLen, snap)) continue;
                    APPEND_FIELDS(record, recLen);
                    pipeline_recurse(tables, num_tables, depth + 1,
                                     merged_fields, merged_null, base + ti->ncols,
                                     col_names, col_oids, total_cols,
                                     where_expr, rs, snap, ctx);
                    matched = 1;
                }
            }
        }

        /* LEFT JOIN: emit NULLs if no match */
        if (!matched && is_left) {
            APPEND_NULLS();
            pipeline_recurse(tables, num_tables, depth + 1,
                             merged_fields, merged_null, base + ti->ncols,
                             col_names, col_oids, total_cols,
                             where_expr, rs, snap, ctx);
        }
    }

    #undef APPEND_FIELDS
    #undef APPEND_NULLS
}

/* ================================================================
 *  pipeline_recurse_lateral — LATERAL subquery evaluation branch.
 *
 *  Strategy: publish the outer merged row into QueryContext so
 *  expr_evaluate resolves correlated column references from there,
 *  snapshot the outer's ExprOpts + pool memory + SelectOpts fields
 *  that the inner parse would otherwise clobber, run query_execute
 *  on the captured SQL, then restore. Saving the raw pool bytes is
 *  necessary because the outer plan's ExprNode pointers alias those
 *  bytes and post-join processing (projection, WHERE re-eval) still
 *  walks them.
 * ================================================================ */
static void pipeline_recurse_lateral(
    PipeTable *tables, int num_tables, int depth,
    char (*merged_fields)[256], int *merged_null, int merged_ncols,
    char (*col_names)[128], int *col_oids, int total_cols,
    ExprNode *where_expr, ResultSet *rs, const Snapshot *snap,
    SessionCtx *ctx)
{
    PipeTable *ti = &tables[depth];
    int base = merged_ncols;
    int is_left = (ti->join_type == 301 || ti->join_type == 305);

    QueryContext *qctx = g_qctx;
    const char (*saved_names)[128]  = qctx ? qctx->outer_col_names  : NULL;
    const char (*saved_values)[256] = qctx ? qctx->outer_col_values : NULL;
    const int   *saved_null         = qctx ? qctx->outer_col_null   : NULL;
    int          saved_count        = qctx ? qctx->outer_col_count  : 0;

    if (qctx) {
        qctx->outer_col_names  = (const char (*)[128])col_names;
        qctx->outer_col_values = (const char (*)[256])merged_fields;
        qctx->outer_col_null   = merged_null;
        qctx->outer_col_count  = base;
    }

    LateralSnapshot snap_inner;
    lateral_snapshot_save(&snap_inner);

    ResultSet lat;
    memset(&lat, 0, sizeof(lat));
    result_init(&lat);
    g_expr_pool_nested++;
    query_execute(ti->lateral_sql, &lat, ctx);
    g_expr_pool_nested--;

    lateral_snapshot_restore(&snap_inner);

    if (qctx) {
        qctx->outer_col_names  = saved_names;
        qctx->outer_col_values = saved_values;
        qctx->outer_col_null   = saved_null;
        qctx->outer_col_count  = saved_count;
    }

    int matched = 0;
    for (int r = 0; r < lat.num_rows; r++) {
        for (int c = 0; c < ti->ncols && (base + c) < total_cols; c++) {
            if (c < lat.num_cols && !lat.rows[r].is_null[c] &&
                lat.rows[r].fields[c]) {
                strncpy(merged_fields[base + c], lat.rows[r].fields[c], 255);
                merged_fields[base + c][255] = '\0';
                merged_null[base + c] = 0;
            } else {
                merged_fields[base + c][0] = '\0';
                merged_null[base + c] = 1;
            }
        }
        matched++;
        pipeline_recurse(tables, num_tables, depth + 1,
                         merged_fields, merged_null, base + ti->ncols,
                         col_names, col_oids, total_cols,
                         where_expr, rs, snap, ctx);
    }

    if (!matched && is_left) {
        for (int c = 0; c < ti->ncols && (base + c) < total_cols; c++) {
            merged_fields[base + c][0] = '\0';
            merged_null[base + c] = 1;
        }
        pipeline_recurse(tables, num_tables, depth + 1,
                         merged_fields, merged_null, base + ti->ncols,
                         col_names, col_oids, total_cols,
                         where_expr, rs, snap, ctx);
    }

    result_free(&lat);
}

/* ================================================================
 *  collect_single_table — public API (used by scatter-gather etc.)
 * ================================================================ */
void collect_single_table(const char *name, ResultSet *rs, const void *snap)
{
    rs->is_select = 1;
    TableDesc td;
    ColumnDesc allCols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(name, &td, allCols, &ncols) < 0) {
        result_set_error(rs, "42P01", "relation does not exist");
        return;
    }
    for (int i = 0; i < ncols; i++)
        result_add_column(rs, allCols[i].col_name,
                          type_encoding_to_pg_oid(allCols[i].type_code));

    TableScanCursor cursor;
    if (tapi_scan_begin(&td, &cursor) != 0) return;
    char pk_key[256], record[RECORD_BUF_SIZE];
    const Snapshot *mvcc_snap = (const Snapshot *)snap;
    while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
        int recLen = tup_record_len(record, sizeof(record));
        if (mvcc_snap && !mvcc_is_visible(record, recLen, mvcc_snap)) continue;
        char fields[CAT_MAX_COLUMNS][256]; int is_null[CAT_MAX_COLUMNS];
        int nf = tup_extract_fields(record, recLen, allCols, ncols, fields, is_null, CAT_MAX_COLUMNS);
        int row = result_add_row(rs);
        if (row < 0) break;
        for (int i = 0; i < nf; i++) {
            if (is_null[i]) result_set_null(rs, row, i);
            else result_set_field(rs, row, i, fields[i]);
        }
    }
    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);
}

/* ================================================================
 *  join_execute — main entry point (pipeline model)
 * ================================================================ */
int join_execute(JoinPlan *plan, ResultSet *rs, SessionCtx *ctx,
                 const void *snap)
{
    if (plan->num_tables < 2) return -1;

    /* Snapshot outer parser-produced state in case any slot is LATERAL —
     * the probe + per-row re-exec would otherwise wipe g_sel / g_expr. */
    int has_lateral = 0;
    for (int _i = 0; _i < plan->num_tables; _i++)
        if (plan->is_lateral[_i]) { has_lateral = 1; break; }
    LateralSnapshot snap_outer;
    if (has_lateral) lateral_snapshot_save(&snap_outer);

    /* ── Phase 1: Resolve all tables and analyze predicates ── */
    PipeTable *tables = (PipeTable *)calloc(plan->num_tables, sizeof(PipeTable));
    if (!tables) {
        if (has_lateral) lateral_snapshot_restore(&snap_outer);
        result_set_error(rs, "53000", "out of memory");
        return -1;
    }

    int total_cols = 0;

    for (int i = 0; i < plan->num_tables; i++) {
        PipeTable *pt = &tables[i];
        strncpy(pt->name, plan->tables[i].name, 255);
        strncpy(pt->alias, plan->tables[i].alias, 127);
        pt->join_type = plan->join_types[i];
        pt->left_key_idx = -1;
        pt->right_key_col_idx = -1;
        pt->where_push_col_idx = -1;

        if (plan->is_lateral[i]) {
            /* LATERAL slot: probe schema by running the subquery once. The
             * SELECT list is fixed across invocations, so any single probe
             * (even with unresolved outer refs) yields the column headers.
             *
             * Publish a sentinel outer scope so normalize_sql Pass 3 skips
             * qualifier stripping (otherwise a lateral body like
             * "SELECT t2.x FROM t2 WHERE t2.id = t1.id" becomes
             * "SELECT x FROM t2 WHERE id = id" and the probe yields a wrong
             * schema or errors). Sentinel values are never actually looked
             * up during schema discovery. */
            pt->is_lateral = 1;
            pt->lateral_sql = plan->lateral_sql[i];

            static __thread char probe_names[1][128] = { "<probe>" };
            static __thread char probe_values[1][256] = { "" };
            static __thread int  probe_nulls[1] = { 1 };
            const char (*saved_names)[128]  = g_qctx ? g_qctx->outer_col_names  : NULL;
            const char (*saved_values)[256] = g_qctx ? g_qctx->outer_col_values : NULL;
            const int   *saved_null         = g_qctx ? g_qctx->outer_col_null   : NULL;
            int          saved_count        = g_qctx ? g_qctx->outer_col_count  : 0;
            if (g_qctx) {
                g_qctx->outer_col_names  = (const char (*)[128])probe_names;
                g_qctx->outer_col_values = (const char (*)[256])probe_values;
                g_qctx->outer_col_null   = probe_nulls;
                g_qctx->outer_col_count  = 1;
            }

            ResultSet probe;
            memset(&probe, 0, sizeof(probe));
            result_init(&probe);
            g_expr_pool_nested++;
            query_execute(pt->lateral_sql, &probe, ctx);
            g_expr_pool_nested--;

            if (g_qctx) {
                g_qctx->outer_col_names  = saved_names;
                g_qctx->outer_col_values = saved_values;
                g_qctx->outer_col_null   = saved_null;
                g_qctx->outer_col_count  = saved_count;
            }

            pt->ncols = probe.num_cols;
            if (pt->ncols > CAT_MAX_COLUMNS) pt->ncols = CAT_MAX_COLUMNS;
            for (int c = 0; c < pt->ncols; c++) {
                strncpy(pt->cols[c].col_name, probe.columns[c].name,
                        sizeof(pt->cols[c].col_name) - 1);
                pt->cols[c].col_name[sizeof(pt->cols[c].col_name) - 1] = '\0';
                pt->cols[c].is_pk = 0;
                pt->cols[c].is_not_null = 0;
                pt->lat_col_oid[c] = probe.columns[c].pg_type_oid;
            }
            result_free(&probe);
        } else if (tapi_resolve(pt->name, &pt->td, pt->cols, &pt->ncols) < 0) {
            if (has_lateral) lateral_snapshot_restore(&snap_outer);
            result_set_error(rs, "42P01", "relation does not exist");
            free(tables);
            return -1;
        }
        total_cols += pt->ncols;
    }

    /* Restore outer ExprNode pool contents + SelectOpts/ExprOpts now that
     * all probes are done. Phase 2/3/5 walk plan->where_expr and
     * plan->join_conds[] pointers that alias nodePool indices the probe's
     * inner parse just overwrote. Without this, outer predicate analysis
     * runs on corrupt ExprNodes. The per-row re-exec inside
     * pipeline_recurse_lateral takes its own snapshot, so leaving the
     * outer pool clean here is sufficient for the remainder of
     * join_execute. */
    if (has_lateral) lateral_snapshot_restore(&snap_outer);

    if (total_cols > MAX_COLUMNS) total_cols = MAX_COLUMNS;

    /* ── Phase 2: Analyze WHERE for first-table push-down ── */
    if (plan->where_expr) {
        char col[128], val[256];
        if (extract_eq_for_alias(plan->where_expr,
                                  tables[0].alias, tables[0].name, col, val)) {
            int cidx = find_col_idx(tables[0].cols, tables[0].ncols, col);
            if (cidx >= 0) {
                tables[0].where_push_col_idx = cidx;
                tables[0].where_push_is_pk = tables[0].cols[cidx].is_pk;
                strncpy(tables[0].where_push_val, val, 255);
            }
        }
    }

    /* ── Phase 3: Analyze ON conditions for join key mapping ── */
    int col_offset = tables[0].ncols;  /* merged column offset for table[1] */
    for (int i = 1; i < plan->num_tables; i++) {
        ExprNode *cond = plan->join_conds[i];
        if (cond) {
            char la[128], lc[128], ra[128], rc[128];
            if (extract_eq_columns(cond, la, lc, ra, rc)) {
                /* Determine which side is left (merged) and which is right (new table) */
                const char *r_alias = tables[i].alias;
                const char *r_name = tables[i].name;
                char *left_col = NULL, *right_col = NULL;

                if (strcasecmp(ra, r_alias) == 0 || strcasecmp(ra, r_name) == 0) {
                    left_col = lc; right_col = rc;  /* la.lc = ra.rc */
                } else if (strcasecmp(la, r_alias) == 0 || strcasecmp(la, r_name) == 0) {
                    left_col = rc; right_col = lc;  /* swapped */
                    char tmp[128]; strcpy(tmp, la); strcpy(la, ra); strcpy(ra, tmp);
                }

                if (left_col && right_col) {
                    /* Find left_col in merged columns.
                     * Prefer the table matching la (left alias) if available. */
                    int merged_off = 0;
                    for (int j = 0; j < i; j++) {
                        int alias_match = (la[0] && (strcasecmp(tables[j].alias, la) == 0 ||
                                                      strcasecmp(tables[j].name, la) == 0));
                        if (la[0] == '\0' || alias_match) {
                            for (int k = 0; k < tables[j].ncols; k++) {
                                if (strcasecmp(tables[j].cols[k].col_name, left_col) == 0) {
                                    tables[i].left_key_idx = merged_off + k;
                                    goto found_left;
                                }
                            }
                        }
                        merged_off += tables[j].ncols;
                    }
                    found_left:

                    /* Find right_col in this table */
                    int ridx = find_col_idx(tables[i].cols, tables[i].ncols, right_col);
                    if (ridx >= 0) {
                        tables[i].right_key_col_idx = ridx;
                        tables[i].right_key_is_pk = tables[i].cols[ridx].is_pk;
                    }
                }
            }
        }
        col_offset += tables[i].ncols;
    }

    /* ── Phase 4: Build output column headers ── */
    rs->is_select = 1;
    char (*col_names)[128] = (char (*)[128])calloc(total_cols, 128);
    int *col_oids = (int *)calloc(total_cols, sizeof(int));
    if (!col_names || !col_oids) {
        free(tables); free(col_names); free(col_oids);
        result_set_error(rs, "53000", "out of memory");
        return -1;
    }

    int ci = 0;
    for (int t = 0; t < plan->num_tables; t++) {
        for (int c = 0; c < tables[t].ncols && ci < total_cols; c++) {
            if (tables[t].alias[0])
                snprintf(col_names[ci], 128, "%s.%s",
                         tables[t].alias, tables[t].cols[c].col_name);
            else
                strncpy(col_names[ci], tables[t].cols[c].col_name, 127);
            col_oids[ci] = tables[t].is_lateral
                ? tables[t].lat_col_oid[c]
                : type_encoding_to_pg_oid(tables[t].cols[c].type_code);
            result_add_column(rs, col_names[ci], col_oids[ci]);
            ci++;
        }
    }

    /* ── Phase 5: Execute pipeline ── */
    char (*merged_fields)[256] = (char (*)[256])calloc(total_cols, 256);
    int *merged_null = (int *)calloc(total_cols, sizeof(int));
    if (!merged_fields || !merged_null) {
        free(tables); free(col_names); free(col_oids);
        free(merged_fields); free(merged_null);
        result_set_error(rs, "53000", "out of memory");
        return -1;
    }

    pipeline_recurse(tables, plan->num_tables, 0,
                     merged_fields, merged_null, 0,
                     col_names, col_oids, total_cols,
                     plan->where_expr, rs,
                     (const Snapshot *)snap, ctx);

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);

    /* Cleanup (snap_outer was already restored + pool_copy freed right
     * after Phase 1; per-row re-exec manages its own snap_inner). */
    free(tables);
    free(col_names);
    free(col_oids);
    free(merged_fields);
    free(merged_null);
    return 0;
}
