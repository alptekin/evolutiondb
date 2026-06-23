#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "result.h"

void result_init(ResultSet *rs)
{
    /* Safely initialize a ResultSet, tolerant of BOTH fresh stack memory
     * (uninitialized garbage) and in-place re-init of a live ResultSet.
     *
     * Previous implementations tried to reclaim an already-allocated rows[]
     * buffer without verifying the struct was ever initialized — on stack-
     * allocated locals that caller forgot to memset, the garbage values in
     * rs->rows / rs->num_rows / rs->row_capacity made the "reuse" branch
     * look legitimate, so row_clear() dereferenced random pointers and
     * aborted with `free(): invalid pointer`. This was the root cause of
     * the recursive CTE second-iteration crash (post-join projection path
     * allocates `ResultSet projected;` on stack, then calls result_init).
     *
     * Now we demand an explicit memset-to-zero or a matching magic cookie
     * (set by a previous successful result_init) before we trust any of
     * the buffer pointers. Otherwise we treat the struct as fresh and
     * calloc new buffers, potentially leaking whatever was there — but
     * the caller was already broken if they handed us uninitialized
     * memory claiming to contain a live ResultSet. */
    const unsigned RESULT_INIT_COOKIE = 0xEDE17A91u;

    Row        *saved_rows     = NULL;
    int         saved_row_cap  = 0;
    ColumnInfo *saved_cols     = NULL;
    int         saved_col_cap  = 0;
    void       *saved_stream   = NULL;

    if (rs->result_init_cookie == RESULT_INIT_COOKIE) {
        /* Known-initialized: safely clean up row strings before reuse. */
        if (rs->rows && rs->num_rows > 0) {
            int i;
            for (i = 0; i < rs->num_rows; i++)
                row_clear(&rs->rows[i]);
        }
        saved_rows     = rs->rows;
        saved_row_cap  = rs->row_capacity;
        saved_cols     = rs->columns;
        saved_col_cap  = rs->col_capacity;
        saved_stream   = rs->stream_conn;
    }
    /* else: stack garbage — do NOT dereference rs->rows. */

    memset(rs, 0, sizeof(ResultSet));
    rs->result_init_cookie = RESULT_INIT_COOKIE;
    rs->stream_conn = saved_stream;
    strcpy(rs->error_sqlstate, "00000");

    /* Restore or allocate rows buffer */
    if (saved_rows && saved_row_cap > 0) {
        rs->rows = saved_rows;
        rs->row_capacity = saved_row_cap;
        memset(rs->rows, 0, (size_t)saved_row_cap * sizeof(Row));
    } else {
        rs->rows = (Row *)calloc(MAX_ROWS_INIT, sizeof(Row));
        rs->row_capacity = rs->rows ? MAX_ROWS_INIT : 0;
    }

    /* Restore or allocate columns buffer */
    if (saved_cols && saved_col_cap > 0) {
        rs->columns = saved_cols;
        rs->col_capacity = saved_col_cap;
        memset(rs->columns, 0, (size_t)saved_col_cap * sizeof(ColumnInfo));
    } else {
        rs->columns = (ColumnInfo *)calloc(DEFAULT_COL_CAPACITY, sizeof(ColumnInfo));
        rs->col_capacity = rs->columns ? DEFAULT_COL_CAPACITY : 0;
    }
}

void result_free(ResultSet *rs)
{
    if (rs->rows) {
        int i;
        for (i = 0; i < rs->num_rows; i++)
            row_clear(&rs->rows[i]);
        free(rs->rows);
        rs->rows = NULL;
    }
    rs->num_rows = 0;
    rs->row_capacity = 0;

    if (rs->columns) {
        free(rs->columns);
        rs->columns = NULL;
    }
    rs->num_cols = 0;
    rs->col_capacity = 0;
}

void result_add_column(ResultSet *rs, const char *name, int pg_oid)
{
    /* Grow columns array if needed */
    if (rs->num_cols >= rs->col_capacity) {
        int new_cap = rs->col_capacity ? rs->col_capacity * 2 : DEFAULT_COL_CAPACITY;
        if (new_cap > MAX_COLUMNS) new_cap = MAX_COLUMNS;
        if (rs->num_cols >= new_cap) return; /* at ceiling */
        ColumnInfo *nc = (ColumnInfo *)realloc(rs->columns,
                                               (size_t)new_cap * sizeof(ColumnInfo));
        if (!nc) return;
        memset(nc + rs->col_capacity, 0,
               (size_t)(new_cap - rs->col_capacity) * sizeof(ColumnInfo));
        rs->columns = nc;
        rs->col_capacity = new_cap;
    }

    strncpy(rs->columns[rs->num_cols].name, name, MAX_COL_NAME - 1);
    rs->columns[rs->num_cols].pg_type_oid = pg_oid;

    switch (pg_oid) {
    case PG_OID_INT2:   rs->columns[rs->num_cols].type_len = 2; break;
    case PG_OID_INT4:   rs->columns[rs->num_cols].type_len = 4; break;
    case PG_OID_INT8:   rs->columns[rs->num_cols].type_len = 8; break;
    case PG_OID_FLOAT4: rs->columns[rs->num_cols].type_len = 4; break;
    case PG_OID_FLOAT8: rs->columns[rs->num_cols].type_len = 8; break;
    case PG_OID_BOOL:   rs->columns[rs->num_cols].type_len = 1; break;
    default:            rs->columns[rs->num_cols].type_len = -1; break;
    }

    rs->columns[rs->num_cols].table_oid = 0;
    rs->columns[rs->num_cols].attnum = 0;
    rs->columns[rs->num_cols].type_modifier = -1;

    rs->num_cols++;
}

int result_add_row(ResultSet *rs)
{
    if (rs->num_rows >= rs->row_capacity) {
        int new_cap = rs->row_capacity ? rs->row_capacity * 2 : MAX_ROWS_INIT;
        Row *new_rows = (Row *)realloc(rs->rows, (size_t)new_cap * sizeof(Row));
        if (!new_rows) return -1;
        memset(new_rows + rs->row_capacity, 0,
               (size_t)(new_cap - rs->row_capacity) * sizeof(Row));
        rs->rows = new_rows;
        rs->row_capacity = new_cap;
    }
    memset(&rs->rows[rs->num_rows], 0, sizeof(Row));
    row_init(&rs->rows[rs->num_rows], rs->num_cols > 0 ? rs->num_cols : 1);
    rs->rows[rs->num_rows].num_fields = rs->num_cols;
    return rs->num_rows++;
}

void result_set_field(ResultSet *rs, int row, int col, const char *value)
{
    if (row < 0 || row >= rs->num_rows) return;
    if (col < 0) return;
    row_set(&rs->rows[row], col, value);
}

void result_set_null(ResultSet *rs, int row, int col)
{
    if (row < 0 || row >= rs->num_rows) return;
    if (col < 0) return;
    row_set_null(&rs->rows[row], col);
}

void result_set_error(ResultSet *rs, const char *sqlstate, const char *msg)
{
    rs->has_error = 1;
    strncpy(rs->error_sqlstate, sqlstate, 5);
    rs->error_sqlstate[5] = '\0';
    strncpy(rs->error_message, msg, sizeof(rs->error_message) - 1);
}
