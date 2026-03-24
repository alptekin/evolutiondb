/*
 * join.c — JOIN Execution Engine for EvoSQL
 *
 * Multi-table JOIN support: nested-loop and hash join algorithms.
 * Handles INNER, LEFT, RIGHT, CROSS, and NATURAL joins.
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

/* ================================================================
 *  collect_single_table — fetch all rows from one table
 * ================================================================ */

void collect_single_table(const char *name, ResultSet *rs,
                          const void *snap)
{
    rs->is_select = 1;

    TableDesc td;
    ColumnDesc allCols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(name, &td, allCols, &ncols) < 0) {
        result_set_error(rs, "42P01", "relation does not exist");
        return;
    }

    /* Set up column metadata */
    for (int i = 0; i < ncols; i++) {
        int oid = type_encoding_to_pg_oid(allCols[i].type_code);
        result_add_column(rs, allCols[i].col_name, oid);
    }

    /* Full table scan with MVCC visibility */
    TableScanCursor cursor;
    if (tapi_scan_begin(&td, &cursor) != 0) return;

    char pk_key[256];
    char record[RECORD_BUF_SIZE];
    const Snapshot *mvcc_snap = (const Snapshot *)snap;

    while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
        int recLen = tup_record_len(record, sizeof(record));

        /* MVCC visibility check */
        if (mvcc_snap && !mvcc_is_visible(record, recLen, mvcc_snap))
            continue;

        /* Extract fields */
        char fields[64][256];
        int is_null[64];
        int nf = tup_extract_fields(record, recLen, allCols, ncols,
                                     fields, is_null, 64);

        int row = result_add_row(rs);
        if (row < 0) break;
        for (int i = 0; i < nf; i++) {
            if (is_null[i])
                result_set_null(rs, row, i);
            else
                result_set_field(rs, row, i, fields[i]);
        }
    }

    snprintf(rs->command_tag, sizeof(rs->command_tag),
             "SELECT %d", rs->num_rows);
}

/* ================================================================
 *  Nested-loop join
 * ================================================================ */

/* Build merged column names: "alias.col" */
static void build_merged_names(const ResultSet *rs, const char *alias,
                                char out[][128], int *count, int offset)
{
    for (int i = 0; i < rs->num_cols; i++) {
        snprintf(out[offset + i], 128, "%s.%s", alias, rs->columns[i].name);
    }
    *count = offset + rs->num_cols;
}

static int nested_loop_join(ResultSet *left, ResultSet *right,
                            int join_type, ExprNode *on_cond,
                            const char *left_alias, const char *right_alias,
                            ResultSet *out)
{
    int lc = left->num_cols;
    int rc = right->num_cols;
    int total_cols = lc + rc;
    if (total_cols > MAX_COLUMNS) total_cols = MAX_COLUMNS;

    /* Build merged column namespace */
    char merged_names[MAX_COLUMNS][128];
    int mn_count = 0;
    build_merged_names(left, left_alias, merged_names, &mn_count, 0);
    build_merged_names(right, right_alias, merged_names, &mn_count, lc);

    /* Set up output columns */
    out->is_select = 1;
    for (int i = 0; i < lc && i < MAX_COLUMNS; i++)
        result_add_column(out, merged_names[i], left->columns[i].pg_type_oid);
    for (int i = 0; i < rc && lc + i < MAX_COLUMNS; i++)
        result_add_column(out, merged_names[lc + i], right->columns[i].pg_type_oid);

    /* LEFT JOIN: 301 or 305 (with OUTER). RIGHT JOIN: 302 or 306 (with OUTER) */
    int is_left = (join_type == 301 || join_type == 305);
    int is_right = (join_type == 302 || join_type == 306);

    /* Track which right rows were matched (for RIGHT JOIN) */
    int *right_matched = NULL;
    if (is_right) {
        right_matched = calloc(right->num_rows > 0 ? right->num_rows : 1, sizeof(int));
    }

    /* Thread-local eval buffers (outside loops to avoid re-declaration) */
    static __thread char col_names[MAX_COLUMNS][128];
    static __thread char col_values[MAX_COLUMNS][256];

    for (int li = 0; li < left->num_rows; li++) {
        int matched = 0;

        /* Prepare left-side column names + values once per left row */
        if (on_cond) {
            for (int c = 0; c < lc && c < MAX_COLUMNS; c++) {
                strncpy(col_names[c], merged_names[c], 127);
                col_names[c][127] = '\0';
                if (left->rows[li].is_null[c])
                    strcpy(col_values[c], "\x01NULL\x01");
                else if (left->rows[li].fields[c])
                    strncpy(col_values[c], left->rows[li].fields[c], 255);
                else
                    col_values[c][0] = '\0';
                col_values[c][255] = '\0';
            }
        }

        for (int ri = 0; ri < right->num_rows; ri++) {
            /* Build merged row for ON condition evaluation */
            if (on_cond) {
                int nc = lc;
                /* Only rebuild right columns per right row */
                for (int c = 0; c < rc && nc < MAX_COLUMNS; c++) {
                    strncpy(col_names[nc], merged_names[lc + c], 127);
                    col_names[nc][127] = '\0';
                    if (right->rows[ri].is_null[c])
                        strcpy(col_values[nc], "\x01NULL\x01");
                    else if (right->rows[ri].fields[c])
                        strncpy(col_values[nc], right->rows[ri].fields[c], 255);
                    else
                        col_values[nc][0] = '\0';
                    col_values[nc][255] = '\0';
                    nc++;
                }

                char result[256];
                int ok = expr_evaluate(on_cond, col_names, col_values, nc,
                                        result, sizeof(result));
                if (!ok || strcmp(result, "0") == 0 ||
                    strcasecmp(result, "false") == 0 ||
                    strcasecmp(result, "f") == 0)
                    continue; /* ON condition not met */
            }

            /* Match — emit row */
            int row = result_add_row(out);
            if (row < 0) goto done;
            for (int c = 0; c < lc; c++) {
                if (left->rows[li].is_null[c])
                    result_set_null(out, row, c);
                else if (left->rows[li].fields[c])
                    result_set_field(out, row, c, left->rows[li].fields[c]);
            }
            for (int c = 0; c < rc; c++) {
                if (right->rows[ri].is_null[c])
                    result_set_null(out, row, lc + c);
                else if (right->rows[ri].fields[c])
                    result_set_field(out, row, lc + c, right->rows[ri].fields[c]);
            }
            matched = 1;
            if (right_matched) right_matched[ri] = 1;
        }

        /* LEFT JOIN: emit left row with NULLs if no match */
        if (!matched && is_left) {
            int row = result_add_row(out);
            if (row < 0) goto done;
            for (int c = 0; c < lc; c++) {
                if (left->rows[li].is_null[c])
                    result_set_null(out, row, c);
                else if (left->rows[li].fields[c])
                    result_set_field(out, row, c, left->rows[li].fields[c]);
            }
            for (int c = 0; c < rc; c++)
                result_set_null(out, row, lc + c);
        }
    }

    /* RIGHT JOIN: emit unmatched right rows with NULL left */
    if (is_right && right_matched) {
        for (int ri = 0; ri < right->num_rows; ri++) {
            if (right_matched[ri]) continue;
            int row = result_add_row(out);
            if (row < 0) break;
            for (int c = 0; c < lc; c++)
                result_set_null(out, row, c);
            for (int c = 0; c < rc; c++) {
                if (right->rows[ri].is_null[c])
                    result_set_null(out, row, lc + c);
                else if (right->rows[ri].fields[c])
                    result_set_field(out, row, lc + c, right->rows[ri].fields[c]);
            }
        }
    }

done:
    if (right_matched) free(right_matched);
    return 0;
}

/* ================================================================
 *  join_execute — main entry point
 * ================================================================ */

int join_execute(JoinPlan *plan, ResultSet *rs, SessionCtx *ctx,
                 const void *snap)
{
    if (plan->num_tables < 2) return -1;

    extern int dist_is_enabled(void);
    extern int dist_get_my_id(void);

    /* Step 1: Materialize each table */
    ResultSet table_rs[8];
    for (int i = 0; i < plan->num_tables; i++) {
        result_init(&table_rs[i]);

        int is_remote = 0;
        if (dist_is_enabled() && plan->tables[i].owner_node != 0 &&
            plan->tables[i].owner_node != dist_get_my_id()) {
            is_remote = 1;
        }

        if (is_remote) {
            char select_sql[512];
            snprintf(select_sql, sizeof(select_sql),
                     "SELECT * FROM %s", plan->tables[i].name);
            dist_forward_query(plan->tables[i].owner_node, select_sql,
                               &table_rs[i]);
        } else {
            collect_single_table(plan->tables[i].name, &table_rs[i], snap);
        }

        if (table_rs[i].has_error) {
            result_set_error(rs, table_rs[i].error_sqlstate,
                             table_rs[i].error_message);
            for (int j = 0; j <= i; j++) result_free(&table_rs[j]);
            return -1;
        }
    }

    /* Step 2: Join tables left to right */
    ResultSet *current = &table_rs[0];
    ResultSet *intermediate = NULL;  /* heap-allocated intermediate result */

    for (int i = 1; i < plan->num_tables; i++) {
        ResultSet *new_result = (ResultSet *)malloc(sizeof(ResultSet));
        if (!new_result) {
            result_set_error(rs, "53000", "out of memory for join");
            for (int j = 0; j < plan->num_tables; j++) result_free(&table_rs[j]);
            if (intermediate) { result_free(intermediate); free(intermediate); }
            return -1;
        }
        result_init(new_result);

        int jt = plan->join_types[i];
        ExprNode *cond = plan->join_conds[i];

        /* For multi-table chains, use the merged alias from first join */
        const char *left_alias = (i == 1) ? plan->tables[0].alias : "";
        const char *right_alias = plan->tables[i].alias;

        nested_loop_join(current, &table_rs[i], jt, cond,
                         left_alias, right_alias, new_result);

        /* Free previous intermediate */
        if (intermediate) {
            result_free(intermediate);
            free(intermediate);
        }

        intermediate = new_result;
        current = intermediate;
    }

    /* Step 3: Apply WHERE filter on joined result */
    if (plan->where_expr && current->num_rows > 0) {
        static __thread char w_col_names[MAX_COLUMNS][128];
        static __thread char w_col_values[MAX_COLUMNS][256];
        for (int ri = current->num_rows - 1; ri >= 0; ri--) {

            for (int c = 0; c < current->num_cols; c++) {
                strncpy(w_col_names[c], current->columns[c].name, 127);
                w_col_names[c][127] = '\0';
                if (current->rows[ri].is_null[c])
                    strcpy(w_col_values[c], "\x01NULL\x01");
                else if (current->rows[ri].fields[c])
                    strncpy(w_col_values[c], current->rows[ri].fields[c], 255);
                else
                    w_col_values[c][0] = '\0';
                w_col_values[c][255] = '\0';
            }

            char result[256];
            int ok = expr_evaluate(plan->where_expr, w_col_names, w_col_values,
                                    current->num_cols, result, sizeof(result));
            if (!ok || strcmp(result, "0") == 0 ||
                strcasecmp(result, "false") == 0 || strcasecmp(result, "f") == 0) {
                /* Remove this row */
                row_clear(&current->rows[ri]);
                /* Shift remaining rows down */
                for (int j = ri; j < current->num_rows - 1; j++)
                    row_move(&current->rows[j], &current->rows[j+1]);
                current->num_rows--;
            }
        }
    }

    /* Step 4: Copy result to output rs */
    rs->is_select = 1;
    for (int c = 0; c < current->num_cols; c++)
        result_add_column(rs, current->columns[c].name,
                          current->columns[c].pg_type_oid);

    for (int r = 0; r < current->num_rows; r++) {
        int row = result_add_row(rs);
        if (row < 0) break;
        for (int c = 0; c < current->num_cols; c++) {
            if (current->rows[r].is_null[c])
                result_set_null(rs, row, c);
            else if (current->rows[r].fields[c])
                result_set_field(rs, row, c, current->rows[r].fields[c]);
        }
    }

    snprintf(rs->command_tag, sizeof(rs->command_tag),
             "SELECT %d", rs->num_rows);

    /* Cleanup */
    for (int i = 0; i < plan->num_tables; i++)
        result_free(&table_rs[i]);
    if (intermediate) {
        result_free(intermediate);
        free(intermediate);
    }

    return 0;
}
