/*
 * join.c — JOIN Execution Engine for EvoSQL
 *
 * Multi-table JOIN with predicate push-down optimization.
 * Instead of materializing entire tables, pushes WHERE/ON conditions
 * down to table scan level for PK lookups and filtered scans.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "join.h"
#include "distributed.h"
#include "../evolution/db/table_api.h"
#include "../evolution/db/tuple_format.h"
#include "../evolution/db/mvcc.h"
#include "../evolution/db/database.h"
#include "../evolution/db/btree2.h"

/* ================================================================
 *  Helper: resolve table metadata
 * ================================================================ */
static int resolve_table(const char *name, TableDesc *td,
                          ColumnDesc cols[], int *ncols)
{
    return tapi_resolve(name, td, cols, ncols);
}

/* ================================================================
 *  Helper: find column index by name in ColumnDesc array
 * ================================================================ */
static int find_col_idx(const ColumnDesc cols[], int ncols, const char *name)
{
    for (int i = 0; i < ncols; i++)
        if (strcasecmp(cols[i].col_name, name) == 0)
            return i;
    return -1;
}

/* ================================================================
 *  Helper: extract a row from record into ResultSet
 * ================================================================ */
static int emit_row(ResultSet *rs, const char fields[][256],
                     const int is_null[], int nf)
{
    int row = result_add_row(rs);
    if (row < 0) return -1;
    for (int i = 0; i < nf; i++) {
        if (is_null[i])
            result_set_null(rs, row, i);
        else
            result_set_field(rs, row, i, fields[i]);
    }
    return row;
}

/* ================================================================
 *  collect_single_table — fetch all rows (fallback: no filter)
 * ================================================================ */
void collect_single_table(const char *name, ResultSet *rs,
                          const void *snap)
{
    rs->is_select = 1;
    TableDesc td;
    ColumnDesc allCols[CAT_MAX_COLUMNS];
    int ncols;
    if (resolve_table(name, &td, allCols, &ncols) < 0) {
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
        if (mvcc_snap && !mvcc_is_visible(record, recLen, mvcc_snap))
            continue;
        char fields[64][256];
        int is_null[64];
        int nf = tup_extract_fields(record, recLen, allCols, ncols,
                                     fields, is_null, 64);
        if (emit_row(rs, fields, is_null, nf) < 0) break;
    }
    snprintf(rs->command_tag, sizeof(rs->command_tag),
             "SELECT %d", rs->num_rows);
}

/* ================================================================
 *  collect_by_pk — fetch single row by PK value
 * ================================================================ */
static void collect_by_pk(const char *name, const char *pk_value,
                           ResultSet *rs, const void *snap)
{
    rs->is_select = 1;
    TableDesc td;
    ColumnDesc allCols[CAT_MAX_COLUMNS];
    int ncols;
    if (resolve_table(name, &td, allCols, &ncols) < 0) {
        result_set_error(rs, "42P01", "relation does not exist");
        return;
    }

    for (int i = 0; i < ncols; i++)
        result_add_column(rs, allCols[i].col_name,
                          type_encoding_to_pg_oid(allCols[i].type_code));

    /* PK B+ tree lookup */
    BTree2 pk = { .root_page = td.pk_root_page };
    RowID rid;
    if (bt2_search(&pk, pk_value, &rid) != 0) return;  /* not found */

    char record[RECORD_BUF_SIZE];
    int recLen = tapi_heap_read(rid, record, sizeof(record));
    if (recLen <= 0) return;

    const Snapshot *mvcc_snap = (const Snapshot *)snap;
    if (mvcc_snap && !mvcc_is_visible(record, recLen, mvcc_snap))
        return;

    char fields[64][256];
    int is_null[64];
    int nf = tup_extract_fields(record, recLen, allCols, ncols,
                                 fields, is_null, 64);
    emit_row(rs, fields, is_null, nf);
    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
}

/* ================================================================
 *  collect_by_column_values — fetch rows matching column = any of values
 *  Uses full scan but filters on a specific column against a set of values.
 * ================================================================ */
static void collect_by_column_values(const char *name, const char *col_name,
                                      const char **values, int nvalues,
                                      ResultSet *rs, const void *snap)
{
    rs->is_select = 1;
    TableDesc td;
    ColumnDesc allCols[CAT_MAX_COLUMNS];
    int ncols;
    if (resolve_table(name, &td, allCols, &ncols) < 0) {
        result_set_error(rs, "42P01", "relation does not exist");
        return;
    }

    int filter_col = find_col_idx(allCols, ncols, col_name);
    if (filter_col < 0) {
        /* Column not found — fall back to unfiltered */
        collect_single_table(name, rs, snap);
        return;
    }

    /* Check if filter column is PK — use index scan */
    int is_pk = allCols[filter_col].is_pk;

    for (int i = 0; i < ncols; i++)
        result_add_column(rs, allCols[i].col_name,
                          type_encoding_to_pg_oid(allCols[i].type_code));

    const Snapshot *mvcc_snap = (const Snapshot *)snap;

    if (is_pk) {
        /* PK index lookup for each value — O(k * log n) */
        BTree2 pk = { .root_page = td.pk_root_page };
        for (int v = 0; v < nvalues; v++) {
            RowID rid;
            if (bt2_search(&pk, values[v], &rid) != 0) continue;
            char record[RECORD_BUF_SIZE];
            int recLen = tapi_heap_read(rid, record, sizeof(record));
            if (recLen <= 0) continue;
            if (mvcc_snap && !mvcc_is_visible(record, recLen, mvcc_snap))
                continue;
            char fields[64][256];
            int is_null[64];
            int nf = tup_extract_fields(record, recLen, allCols, ncols,
                                         fields, is_null, 64);
            emit_row(rs, fields, is_null, nf);
        }
    } else {
        /* Full scan with filter — O(n) but skips non-matching rows */
        TableScanCursor cursor;
        if (tapi_scan_begin(&td, &cursor) != 0) return;
        char pk_key[256], record[RECORD_BUF_SIZE];

        while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
            int recLen = tup_record_len(record, sizeof(record));
            if (mvcc_snap && !mvcc_is_visible(record, recLen, mvcc_snap))
                continue;
            char fields[64][256];
            int is_null[64];
            int nf = tup_extract_fields(record, recLen, allCols, ncols,
                                         fields, is_null, 64);
            if (filter_col >= nf) continue;

            /* Check if value matches any in the set */
            int match = 0;
            for (int v = 0; v < nvalues; v++) {
                if (strcmp(fields[filter_col], values[v]) == 0) {
                    match = 1;
                    break;
                }
            }
            if (match) emit_row(rs, fields, is_null, nf);
        }
    }
    snprintf(rs->command_tag, sizeof(rs->command_tag),
             "SELECT %d", rs->num_rows);
}

/* ================================================================
 *  Predicate analysis — extract useful info from WHERE/ON exprs
 * ================================================================ */

/* Extract "alias.col = literal" from a simple equality expression.
 * Returns 1 if found, fills alias/col/value. */
static int extract_eq_literal(const ExprNode *expr,
                               char *alias, char *col, char *value)
{
    if (!expr || expr->type != EXPR_CMP_EQ) return 0;
    const ExprNode *lhs = expr->left;
    const ExprNode *rhs = expr->right;

    /* Try both directions: col=lit or lit=col */
    for (int swap = 0; swap < 2; swap++) {
        const ExprNode *c = swap ? rhs : lhs;
        const ExprNode *v = swap ? lhs : rhs;

        if (c->type == EXPR_COLUMN) {
            const char *dot = strchr(c->val.col_name, '.');
            if (dot) {
                int alen = (int)(dot - c->val.col_name);
                memcpy(alias, c->val.col_name, alen);
                alias[alen] = '\0';
                strncpy(col, dot + 1, 127); col[127] = '\0';
            } else {
                alias[0] = '\0';
                strncpy(col, c->val.col_name, 127); col[127] = '\0';
            }

            if (v->type == EXPR_LITERAL_INT) {
                snprintf(value, 256, "%d", v->val.intval);
                return 1;
            } else if (v->type == EXPR_LITERAL_STR) {
                strncpy(value, v->val.strval, 255); value[255] = '\0';
                return 1;
            }
        }
    }
    return 0;
}

/* Extract "left_alias.col = right_alias.col" from ON condition.
 * Returns 1 if found. */
static int extract_eq_columns(const ExprNode *expr,
                                char *left_alias, char *left_col,
                                char *right_alias, char *right_col)
{
    if (!expr || expr->type != EXPR_CMP_EQ) return 0;
    if (!expr->left || expr->left->type != EXPR_COLUMN) return 0;
    if (!expr->right || expr->right->type != EXPR_COLUMN) return 0;

    const char *l = expr->left->val.col_name;
    const char *r = expr->right->val.col_name;

    const char *ldot = strchr(l, '.');
    const char *rdot = strchr(r, '.');

    if (ldot) {
        int n = (int)(ldot - l); memcpy(left_alias, l, n); left_alias[n] = '\0';
        strncpy(left_col, ldot + 1, 127); left_col[127] = '\0';
    } else { left_alias[0] = '\0'; strncpy(left_col, l, 127); left_col[127] = '\0'; }

    if (rdot) {
        int n = (int)(rdot - r); memcpy(right_alias, r, n); right_alias[n] = '\0';
        strncpy(right_col, rdot + 1, 127); right_col[127] = '\0';
    } else { right_alias[0] = '\0'; strncpy(right_col, r, 127); right_col[127] = '\0'; }

    return 1;
}

/* ================================================================
 *  Build merged column names: "alias.col"
 * ================================================================ */
static void build_merged_names(const ResultSet *rs, const char *alias,
                                char out[][128], int *count, int offset)
{
    for (int i = 0; i < rs->num_cols; i++) {
        if (alias && alias[0])
            snprintf(out[offset + i], 128, "%s.%s", alias, rs->columns[i].name);
        else
            strncpy(out[offset + i], rs->columns[i].name, 127);
        out[offset + i][127] = '\0';
    }
    *count = offset + rs->num_cols;
}

/* ================================================================
 *  Index Nested-Loop Join — for each left row, lookup right table
 *  using the join key value, avoiding full materialization.
 * ================================================================ */
static int index_nested_loop_join(ResultSet *left,
                                   const char *right_table,
                                   const char *right_join_col,
                                   int left_key_col_idx,
                                   int join_type,
                                   const char *left_alias,
                                   const char *right_alias,
                                   ResultSet *out,
                                   const void *snap)
{
    /* Resolve right table metadata */
    TableDesc rtd;
    ColumnDesc rcols[CAT_MAX_COLUMNS];
    int rncols;
    if (resolve_table(right_table, &rtd, rcols, &rncols) < 0)
        return -1;

    int right_col_idx = find_col_idx(rcols, rncols, right_join_col);
    if (right_col_idx < 0) return -1;
    int right_is_pk = rcols[right_col_idx].is_pk;

    int lc = left->num_cols;
    int rc = rncols;

    /* Set up output columns */
    char merged_names[MAX_COLUMNS][128];
    int mn_count = 0;
    build_merged_names(left, left_alias, merged_names, &mn_count, 0);

    out->is_select = 1;
    for (int i = 0; i < lc && i < MAX_COLUMNS; i++)
        result_add_column(out, merged_names[i], left->columns[i].pg_type_oid);
    for (int i = 0; i < rc && lc + i < MAX_COLUMNS; i++) {
        char cname[128];
        snprintf(cname, sizeof(cname), "%s.%s", right_alias, rcols[i].col_name);
        result_add_column(out, cname,
                          type_encoding_to_pg_oid(rcols[i].type_code));
    }

    int is_left = (join_type == 301 || join_type == 305);
    BTree2 pk = { .root_page = rtd.pk_root_page };
    const Snapshot *mvcc_snap = (const Snapshot *)snap;

    for (int li = 0; li < left->num_rows; li++) {
        /* Get the join key value from left row */
        if (left_key_col_idx >= left->num_cols) continue;
        if (left->rows[li].is_null[left_key_col_idx]) {
            if (is_left) {
                int row = result_add_row(out);
                if (row < 0) break;
                for (int c = 0; c < lc; c++) {
                    if (left->rows[li].is_null[c]) result_set_null(out, row, c);
                    else if (left->rows[li].fields[c])
                        result_set_field(out, row, c, left->rows[li].fields[c]);
                }
                for (int c = 0; c < rc; c++) result_set_null(out, row, lc + c);
            }
            continue;
        }
        const char *key_val = left->rows[li].fields[left_key_col_idx];
        if (!key_val) continue;

        int matched = 0;

        if (right_is_pk) {
            /* PK lookup on right table — O(log n) */
            RowID rid;
            if (bt2_search(&pk, key_val, &rid) == 0) {
                char record[RECORD_BUF_SIZE];
                int recLen = tapi_heap_read(rid, record, sizeof(record));
                if (recLen > 0 && (!mvcc_snap || mvcc_is_visible(record, recLen, mvcc_snap))) {
                    char rfields[64][256];
                    int rnull[64];
                    int rnf = tup_extract_fields(record, recLen, rcols, rncols,
                                                  rfields, rnull, 64);

                    int row = result_add_row(out);
                    if (row < 0) break;
                    for (int c = 0; c < lc; c++) {
                        if (left->rows[li].is_null[c]) result_set_null(out, row, c);
                        else if (left->rows[li].fields[c])
                            result_set_field(out, row, c, left->rows[li].fields[c]);
                    }
                    for (int c = 0; c < rnf && c < rc; c++) {
                        if (rnull[c]) result_set_null(out, row, lc + c);
                        else result_set_field(out, row, lc + c, rfields[c]);
                    }
                    matched = 1;
                }
            }
        } else {
            /* Non-PK: scan right table, filter by column value */
            TableScanCursor cursor;
            if (tapi_scan_begin(&rtd, &cursor) == 0) {
                char rpk[256], record[RECORD_BUF_SIZE];
                while (tapi_scan_next(&cursor, rpk, record, sizeof(record)) == 0) {
                    int recLen = tup_record_len(record, sizeof(record));
                    if (mvcc_snap && !mvcc_is_visible(record, recLen, mvcc_snap))
                        continue;
                    char rfields[64][256];
                    int rnull[64];
                    int rnf = tup_extract_fields(record, recLen, rcols, rncols,
                                                  rfields, rnull, 64);
                    if (right_col_idx >= rnf) continue;
                    if (rnull[right_col_idx] || strcmp(rfields[right_col_idx], key_val) != 0)
                        continue;

                    int row = result_add_row(out);
                    if (row < 0) goto inl_done;
                    for (int c = 0; c < lc; c++) {
                        if (left->rows[li].is_null[c]) result_set_null(out, row, c);
                        else if (left->rows[li].fields[c])
                            result_set_field(out, row, c, left->rows[li].fields[c]);
                    }
                    for (int c = 0; c < rnf && c < rc; c++) {
                        if (rnull[c]) result_set_null(out, row, lc + c);
                        else result_set_field(out, row, lc + c, rfields[c]);
                    }
                    matched = 1;
                }
            }
        }

        if (!matched && is_left) {
            int row = result_add_row(out);
            if (row < 0) break;
            for (int c = 0; c < lc; c++) {
                if (left->rows[li].is_null[c]) result_set_null(out, row, c);
                else if (left->rows[li].fields[c])
                    result_set_field(out, row, c, left->rows[li].fields[c]);
            }
            for (int c = 0; c < rc; c++) result_set_null(out, row, lc + c);
        }
    }

inl_done:
    snprintf(out->command_tag, sizeof(out->command_tag),
             "SELECT %d", out->num_rows);
    return 0;
}

/* ================================================================
 *  Original nested-loop join (fallback for CROSS JOIN or complex ON)
 * ================================================================ */
static int nested_loop_join(ResultSet *left, ResultSet *right,
                            int join_type, ExprNode *on_cond,
                            const char *left_alias, const char *right_alias,
                            ResultSet *out)
{
    int lc = left->num_cols;
    int rc = right->num_cols;

    char merged_names[MAX_COLUMNS][128];
    int mn_count = 0;
    build_merged_names(left, left_alias, merged_names, &mn_count, 0);
    build_merged_names(right, right_alias, merged_names, &mn_count, lc);

    out->is_select = 1;
    for (int i = 0; i < lc && i < MAX_COLUMNS; i++)
        result_add_column(out, merged_names[i], left->columns[i].pg_type_oid);
    for (int i = 0; i < rc && lc + i < MAX_COLUMNS; i++)
        result_add_column(out, merged_names[lc + i], right->columns[i].pg_type_oid);

    int is_left = (join_type == 301 || join_type == 305);
    int is_right = (join_type == 302 || join_type == 306);
    int *right_matched = NULL;
    if (is_right)
        right_matched = calloc(right->num_rows > 0 ? right->num_rows : 1, sizeof(int));

    static __thread char col_names[MAX_COLUMNS][128];
    static __thread char col_values[MAX_COLUMNS][256];

    for (int li = 0; li < left->num_rows; li++) {
        int matched = 0;
        if (on_cond) {
            for (int c = 0; c < lc && c < MAX_COLUMNS; c++) {
                strncpy(col_names[c], merged_names[c], 127); col_names[c][127] = '\0';
                if (left->rows[li].is_null[c]) strcpy(col_values[c], "\x01NULL\x01");
                else if (left->rows[li].fields[c]) { strncpy(col_values[c], left->rows[li].fields[c], 255); col_values[c][255] = '\0'; }
                else col_values[c][0] = '\0';
            }
        }

        for (int ri = 0; ri < right->num_rows; ri++) {
            if (on_cond) {
                int nc = lc;
                for (int c = 0; c < rc && nc < MAX_COLUMNS; c++) {
                    strncpy(col_names[nc], merged_names[lc + c], 127); col_names[nc][127] = '\0';
                    if (right->rows[ri].is_null[c]) strcpy(col_values[nc], "\x01NULL\x01");
                    else if (right->rows[ri].fields[c]) { strncpy(col_values[nc], right->rows[ri].fields[c], 255); col_values[nc][255] = '\0'; }
                    else col_values[nc][0] = '\0';
                    nc++;
                }
                char result[256];
                int ok = expr_evaluate(on_cond, col_names, col_values, nc, result, sizeof(result));
                if (!ok || strcmp(result, "0") == 0 || strcasecmp(result, "false") == 0 || strcasecmp(result, "f") == 0)
                    continue;
            }
            int row = result_add_row(out);
            if (row < 0) goto done;
            for (int c = 0; c < lc; c++) {
                if (left->rows[li].is_null[c]) result_set_null(out, row, c);
                else if (left->rows[li].fields[c]) result_set_field(out, row, c, left->rows[li].fields[c]);
            }
            for (int c = 0; c < rc; c++) {
                if (right->rows[ri].is_null[c]) result_set_null(out, row, lc + c);
                else if (right->rows[ri].fields[c]) result_set_field(out, row, lc + c, right->rows[ri].fields[c]);
            }
            matched = 1;
            if (right_matched) right_matched[ri] = 1;
        }
        if (!matched && is_left) {
            int row = result_add_row(out);
            if (row < 0) goto done;
            for (int c = 0; c < lc; c++) {
                if (left->rows[li].is_null[c]) result_set_null(out, row, c);
                else if (left->rows[li].fields[c]) result_set_field(out, row, c, left->rows[li].fields[c]);
            }
            for (int c = 0; c < rc; c++) result_set_null(out, row, lc + c);
        }
    }
    if (is_right && right_matched) {
        for (int ri = 0; ri < right->num_rows; ri++) {
            if (right_matched[ri]) continue;
            int row = result_add_row(out);
            if (row < 0) break;
            for (int c = 0; c < lc; c++) result_set_null(out, row, c);
            for (int c = 0; c < rc; c++) {
                if (right->rows[ri].is_null[c]) result_set_null(out, row, lc + c);
                else if (right->rows[ri].fields[c]) result_set_field(out, row, lc + c, right->rows[ri].fields[c]);
            }
        }
    }
done:
    if (right_matched) free(right_matched);
    return 0;
}

/* ================================================================
 *  join_execute — main entry point with predicate push-down
 * ================================================================ */
int join_execute(JoinPlan *plan, ResultSet *rs, SessionCtx *ctx,
                 const void *snap)
{
    if (plan->num_tables < 2) return -1;

    extern int dist_is_enabled(void);
    extern int dist_get_my_id(void);

    /* ── Phase 0: Analyze WHERE for push-down predicates ──
     * Look for "alias.col = literal" to filter the first table load. */
    char where_alias[128] = "", where_col[128] = "", where_val[256] = "";
    int has_where_literal = 0;
    if (plan->where_expr)
        has_where_literal = extract_eq_literal(plan->where_expr,
                                                where_alias, where_col, where_val);

    /* ── Phase 1: Materialize first table (with push-down) ── */
    ResultSet table_rs_0;
    result_init(&table_rs_0);

    const char *t0_name = plan->tables[0].name;
    const char *t0_alias = plan->tables[0].alias;

    if (has_where_literal &&
        (strcasecmp(where_alias, t0_alias) == 0 ||
         strcasecmp(where_alias, t0_name) == 0 ||
         where_alias[0] == '\0')) {
        /* Push-down: PK or filtered lookup on first table */
        TableDesc td0;
        ColumnDesc cols0[CAT_MAX_COLUMNS];
        int nc0;
        if (resolve_table(t0_name, &td0, cols0, &nc0) == 0) {
            int cidx = find_col_idx(cols0, nc0, where_col);
            if (cidx >= 0 && cols0[cidx].is_pk) {
                collect_by_pk(t0_name, where_val, &table_rs_0, snap);
            } else {
                const char *vals[1] = { where_val };
                collect_by_column_values(t0_name, where_col, vals, 1,
                                          &table_rs_0, snap);
            }
        } else {
            collect_single_table(t0_name, &table_rs_0, snap);
        }
    } else {
        collect_single_table(t0_name, &table_rs_0, snap);
    }

    if (table_rs_0.has_error) {
        result_set_error(rs, table_rs_0.error_sqlstate, table_rs_0.error_message);
        result_free(&table_rs_0);
        return -1;
    }

    /* ── Phase 2: Join tables left-to-right with push-down ── */
    ResultSet *current = &table_rs_0;
    ResultSet *intermediate = NULL;

    for (int i = 1; i < plan->num_tables; i++) {
        ResultSet *new_result = (ResultSet *)malloc(sizeof(ResultSet));
        if (!new_result) {
            result_set_error(rs, "53000", "out of memory for join");
            result_free(&table_rs_0);
            if (intermediate) { result_free(intermediate); free(intermediate); }
            return -1;
        }
        result_init(new_result);

        int jt = plan->join_types[i];
        ExprNode *cond = plan->join_conds[i];
        const char *left_alias = (i == 1) ? t0_alias : "";
        const char *right_alias = plan->tables[i].alias;
        const char *right_name = plan->tables[i].name;

        /* Analyze ON condition: ON left.col = right.col */
        char la[128], lc_name[128], ra[128], rc_name[128];
        int on_is_eq = cond ? extract_eq_columns(cond, la, lc_name, ra, rc_name) : 0;

        /* Determine which side references which table */
        int use_index_join = 0;
        char join_left_col[128] = "", join_right_col[128] = "";

        if (on_is_eq) {
            /* Check: la.lc = ra.rc — which side is current (left), which is new (right)? */
            if (strcasecmp(ra, right_alias) == 0 || strcasecmp(ra, right_name) == 0) {
                /* ra = right table, la = left (current result) */
                strncpy(join_right_col, rc_name, 127);
                /* Find lc_name in current result columns */
                char full_name[256];
                snprintf(full_name, sizeof(full_name), "%s.%s", la, lc_name);
                for (int ci = 0; ci < current->num_cols; ci++) {
                    if (strcasecmp(current->columns[ci].name, full_name) == 0 ||
                        strcasecmp(current->columns[ci].name, lc_name) == 0) {
                        strncpy(join_left_col, current->columns[ci].name, 127);
                        use_index_join = 1;
                        break;
                    }
                }
            } else if (strcasecmp(la, right_alias) == 0 || strcasecmp(la, right_name) == 0) {
                /* la = right table, ra = left (current result) — swapped */
                strncpy(join_right_col, lc_name, 127);
                char full_name[256];
                snprintf(full_name, sizeof(full_name), "%s.%s", ra, rc_name);
                for (int ci = 0; ci < current->num_cols; ci++) {
                    if (strcasecmp(current->columns[ci].name, full_name) == 0 ||
                        strcasecmp(current->columns[ci].name, rc_name) == 0) {
                        strncpy(join_left_col, current->columns[ci].name, 127);
                        use_index_join = 1;
                        break;
                    }
                }
            }
        }

        if (use_index_join && jt != JOIN_CROSS) {
            /* Find the column index in current result */
            int left_key_idx = -1;
            for (int ci = 0; ci < current->num_cols; ci++) {
                if (strcasecmp(current->columns[ci].name, join_left_col) == 0) {
                    left_key_idx = ci;
                    break;
                }
            }
            if (left_key_idx >= 0) {
                index_nested_loop_join(current, right_name, join_right_col,
                                        left_key_idx, jt,
                                        left_alias, right_alias,
                                        new_result, snap);
            } else {
                /* Fallback: materialize right table + nested loop */
                ResultSet right_rs;
                result_init(&right_rs);
                collect_single_table(right_name, &right_rs, snap);
                nested_loop_join(current, &right_rs, jt, cond,
                                  left_alias, right_alias, new_result);
                result_free(&right_rs);
            }
        } else {
            /* No index optimization — materialize right table */
            ResultSet right_rs;
            result_init(&right_rs);

            int is_remote = 0;
            if (dist_is_enabled() && plan->tables[i].owner_node != 0 &&
                plan->tables[i].owner_node != dist_get_my_id())
                is_remote = 1;

            if (is_remote) {
                char sql[512];
                snprintf(sql, sizeof(sql), "SELECT * FROM %s", right_name);
                dist_forward_query(plan->tables[i].owner_node, sql, &right_rs);
            } else {
                collect_single_table(right_name, &right_rs, snap);
            }

            nested_loop_join(current, &right_rs, jt, cond,
                              left_alias, right_alias, new_result);
            result_free(&right_rs);
        }

        if (intermediate) { result_free(intermediate); free(intermediate); }
        intermediate = new_result;
        current = intermediate;
    }

    /* ── Phase 3: Apply remaining WHERE filter ── */
    if (plan->where_expr && current->num_rows > 0) {
        static __thread char w_col_names[MAX_COLUMNS][128];
        static __thread char w_col_values[MAX_COLUMNS][256];
        for (int ri = current->num_rows - 1; ri >= 0; ri--) {
            for (int c = 0; c < current->num_cols; c++) {
                strncpy(w_col_names[c], current->columns[c].name, 127); w_col_names[c][127] = '\0';
                if (current->rows[ri].is_null[c]) strcpy(w_col_values[c], "\x01NULL\x01");
                else if (current->rows[ri].fields[c]) { strncpy(w_col_values[c], current->rows[ri].fields[c], 255); w_col_values[c][255] = '\0'; }
                else w_col_values[c][0] = '\0';
            }
            char result[256];
            int ok = expr_evaluate(plan->where_expr, w_col_names, w_col_values,
                                    current->num_cols, result, sizeof(result));
            if (!ok || strcmp(result, "0") == 0 || strcasecmp(result, "false") == 0 || strcasecmp(result, "f") == 0) {
                row_clear(&current->rows[ri]);
                for (int j = ri; j < current->num_rows - 1; j++)
                    row_move(&current->rows[j], &current->rows[j+1]);
                current->num_rows--;
            }
        }
    }

    /* ── Phase 4: Copy to output ── */
    rs->is_select = 1;
    for (int c = 0; c < current->num_cols; c++)
        result_add_column(rs, current->columns[c].name, current->columns[c].pg_type_oid);
    for (int r = 0; r < current->num_rows; r++) {
        int row = result_add_row(rs);
        if (row < 0) break;
        for (int c = 0; c < current->num_cols; c++) {
            if (current->rows[r].is_null[c]) result_set_null(rs, row, c);
            else if (current->rows[r].fields[c]) result_set_field(rs, row, c, current->rows[r].fields[c]);
        }
    }
    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);

    /* Cleanup */
    result_free(&table_rs_0);
    if (intermediate) { result_free(intermediate); free(intermediate); }
    return 0;
}
