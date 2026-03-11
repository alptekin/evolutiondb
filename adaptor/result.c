#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "result.h"

void result_init(ResultSet *rs)
{
    /* Free existing row strings if re-initializing */
    if (rs->rows && rs->num_rows > 0) {
        int i;
        for (i = 0; i < rs->num_rows; i++)
            row_clear(&rs->rows[i]);
    }
    Row *saved_rows = rs->rows;
    int  saved_cap  = rs->row_capacity;
    void *saved_stream_conn = rs->stream_conn;
    memset(rs, 0, sizeof(ResultSet));
    rs->stream_conn = saved_stream_conn;
    strcpy(rs->error_sqlstate, "00000");
    if (saved_rows && saved_cap > 0) {
        rs->rows = saved_rows;
        rs->row_capacity = saved_cap;
        memset(rs->rows, 0, (size_t)saved_cap * sizeof(Row));
    } else {
        rs->rows = (Row *)calloc(MAX_ROWS_INIT, sizeof(Row));
        rs->row_capacity = rs->rows ? MAX_ROWS_INIT : 0;
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
}

void result_add_column(ResultSet *rs, const char *name, int pg_oid)
{
    if (rs->num_cols >= MAX_COLUMNS) return;
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
    rs->rows[rs->num_rows].num_fields = rs->num_cols;
    return rs->num_rows++;
}

void result_set_field(ResultSet *rs, int row, int col, const char *value)
{
    if (row < 0 || row >= rs->num_rows) return;
    if (col < 0 || col >= MAX_COLUMNS) return;
    row_set(&rs->rows[row], col, value);
}

void result_set_null(ResultSet *rs, int row, int col)
{
    if (row < 0 || row >= rs->num_rows) return;
    if (col < 0 || col >= MAX_COLUMNS) return;
    row_set_null(&rs->rows[row], col);
}

void result_set_error(ResultSet *rs, const char *sqlstate, const char *msg)
{
    rs->has_error = 1;
    strncpy(rs->error_sqlstate, sqlstate, 5);
    rs->error_sqlstate[5] = '\0';
    strncpy(rs->error_message, msg, sizeof(rs->error_message) - 1);
}
