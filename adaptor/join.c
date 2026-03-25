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
#include "../evolution/db/table_api.h"
#include "../evolution/db/tuple_format.h"
#include "../evolution/db/mvcc.h"
#include "../evolution/db/database.h"
#include "../evolution/db/btree2.h"

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
    ExprNode *where_expr, ResultSet *rs, const Snapshot *snap)
{
    /* ── End of pipeline: evaluate WHERE and emit ── */
    if (depth >= num_tables) {
        if (where_expr) {
            static __thread char en[MAX_COLUMNS][128];
            static __thread char ev[MAX_COLUMNS][256];
            for (int c = 0; c < merged_ncols && c < MAX_COLUMNS; c++) {
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
        char _f[64][256]; int _n[64]; \
        int _nf = tup_extract_fields(record, recLen, ti->cols, ti->ncols, _f, _n, 64); \
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
                                     where_expr, rs, snap);
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
                    char fields[64][256]; int is_n[64];
                    int nf = tup_extract_fields(record, recLen, ti->cols, ti->ncols, fields, is_n, 64);
                    if (ti->where_push_col_idx < nf &&
                        !is_n[ti->where_push_col_idx] &&
                        strcmp(fields[ti->where_push_col_idx], ti->where_push_val) != 0)
                        continue;
                }

                APPEND_FIELDS(record, recLen);
                pipeline_recurse(tables, num_tables, 1,
                                 merged_fields, merged_null, base + ti->ncols,
                                 col_names, col_oids, total_cols,
                                 where_expr, rs, snap);
            }
        }
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
                                     where_expr, rs, snap);
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
                    char fields[64][256]; int is_n[64];
                    int nf = tup_extract_fields(record, recLen, ti->cols, ti->ncols, fields, is_n, 64);
                    if (ti->right_key_col_idx >= nf) continue;
                    if (is_n[ti->right_key_col_idx]) continue;
                    if (strcmp(fields[ti->right_key_col_idx], key_val) != 0) continue;

                    APPEND_FIELDS(record, recLen);
                    pipeline_recurse(tables, num_tables, depth + 1,
                                     merged_fields, merged_null, base + ti->ncols,
                                     col_names, col_oids, total_cols,
                                     where_expr, rs, snap);
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
                                     where_expr, rs, snap);
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
                             where_expr, rs, snap);
        }
    }

    #undef APPEND_FIELDS
    #undef APPEND_NULLS
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
        char fields[64][256]; int is_null[64];
        int nf = tup_extract_fields(record, recLen, allCols, ncols, fields, is_null, 64);
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

    /* ── Phase 1: Resolve all tables and analyze predicates ── */
    PipeTable *tables = (PipeTable *)calloc(plan->num_tables, sizeof(PipeTable));
    if (!tables) { result_set_error(rs, "53000", "out of memory"); return -1; }

    int total_cols = 0;

    for (int i = 0; i < plan->num_tables; i++) {
        PipeTable *pt = &tables[i];
        strncpy(pt->name, plan->tables[i].name, 255);
        strncpy(pt->alias, plan->tables[i].alias, 127);
        pt->join_type = plan->join_types[i];
        pt->left_key_idx = -1;
        pt->right_key_col_idx = -1;
        pt->where_push_col_idx = -1;

        if (tapi_resolve(pt->name, &pt->td, pt->cols, &pt->ncols) < 0) {
            result_set_error(rs, "42P01", "relation does not exist");
            free(tables);
            return -1;
        }
        total_cols += pt->ncols;
    }

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
                    /* Find left_col in merged columns (search all preceding tables) */
                    int merged_off = 0;
                    for (int j = 0; j < i; j++) {
                        /* Check bare name and qualified name */
                        for (int k = 0; k < tables[j].ncols; k++) {
                            if (strcasecmp(tables[j].cols[k].col_name, left_col) == 0) {
                                tables[i].left_key_idx = merged_off + k;
                                goto found_left;
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
            col_oids[ci] = type_encoding_to_pg_oid(tables[t].cols[c].type_code);
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
                     (const Snapshot *)snap);

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);

    /* Cleanup */
    free(tables);
    free(col_names);
    free(col_oids);
    free(merged_fields);
    free(merged_null);
    return 0;
}
