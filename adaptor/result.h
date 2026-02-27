#ifndef RESULT_H
#define RESULT_H

#define MAX_COLUMNS   64
#define MAX_ROWS      200
#define MAX_FIELD_LEN 256
#define MAX_COL_NAME  128

/* PostgreSQL type OIDs */
#define PG_OID_INT4    23
#define PG_OID_INT8    20
#define PG_OID_INT2    21
#define PG_OID_FLOAT4  700
#define PG_OID_FLOAT8  701
#define PG_OID_VARCHAR 1043
#define PG_OID_BPCHAR  1042
#define PG_OID_TEXT    25
#define PG_OID_DATE    1082
#define PG_OID_BOOL    16

typedef struct {
    char   name[MAX_COL_NAME];
    int    pg_type_oid;
    int    type_len;       /* -1 for variable length */
    int    table_oid;      /* OID of the source table (0 = computed) */
    int    attnum;         /* column attribute number, 1-based (0 = computed) */
    int    type_modifier;  /* type modifier, e.g. varchar(50) → 54 (-1 = none) */
} ColumnInfo;

typedef struct {
    char fields[MAX_COLUMNS][MAX_FIELD_LEN];
    int  is_null[MAX_COLUMNS];
    int  num_fields;
} Row;

typedef struct {
    ColumnInfo columns[MAX_COLUMNS];
    int        num_cols;

    Row        rows[MAX_ROWS];
    int        num_rows;

    char       command_tag[64];   /* "SELECT 5", "INSERT 0 1", etc. */
    int        is_select;        /* 1 = has rows to return */

    int        has_error;
    char       error_message[1024];
    char       error_sqlstate[6]; /* e.g. "42P01" */
} ResultSet;

void result_init(ResultSet *rs);
void result_add_column(ResultSet *rs, const char *name, int pg_oid);
int  result_add_row(ResultSet *rs);
void result_set_field(ResultSet *rs, int row, int col, const char *value);
void result_set_null(ResultSet *rs, int row, int col);
void result_set_error(ResultSet *rs, const char *sqlstate, const char *msg);

#endif /* RESULT_H */
