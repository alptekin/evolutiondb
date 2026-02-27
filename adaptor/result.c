#include <string.h>
#include <stdio.h>
#include "result.h"

void result_init(ResultSet *rs)
{
    memset(rs, 0, sizeof(ResultSet));
    strcpy(rs->error_sqlstate, "00000");
}

void result_add_column(ResultSet *rs, const char *name, int pg_oid)
{
    if (rs->num_cols >= MAX_COLUMNS) return;
    strncpy(rs->columns[rs->num_cols].name, name, MAX_COL_NAME - 1);
    rs->columns[rs->num_cols].pg_type_oid = pg_oid;

    /* Set type length: fixed for ints, -1 for variable */
    /* Set type length: fixed for ints, -1 for variable */
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
    if (rs->num_rows >= MAX_ROWS) return -1;
    memset(&rs->rows[rs->num_rows], 0, sizeof(Row));
    rs->rows[rs->num_rows].num_fields = rs->num_cols;
    return rs->num_rows++;
}

void result_set_field(ResultSet *rs, int row, int col, const char *value)
{
    if (row < 0 || row >= rs->num_rows) return;
    if (col < 0 || col >= MAX_COLUMNS) return;
    strncpy(rs->rows[row].fields[col], value, MAX_FIELD_LEN - 1);
    rs->rows[row].is_null[col] = 0;
}

void result_set_null(ResultSet *rs, int row, int col)
{
    if (row < 0 || row >= rs->num_rows) return;
    if (col < 0 || col >= MAX_COLUMNS) return;
    rs->rows[row].fields[col][0] = '\0';
    rs->rows[row].is_null[col] = 1;
}

void result_set_error(ResultSet *rs, const char *sqlstate, const char *msg)
{
    rs->has_error = 1;
    strncpy(rs->error_sqlstate, sqlstate, 5);
    rs->error_sqlstate[5] = '\0';
    strncpy(rs->error_message, msg, sizeof(rs->error_message) - 1);
}
