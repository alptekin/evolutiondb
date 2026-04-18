#ifndef RESULT_H
#define RESULT_H

#include <stdlib.h>
#include <string.h>

#define MAX_COLUMNS        1024  /* sanity ceiling for dynamic growth */
#define DEFAULT_COL_CAPACITY 32  /* initial allocation for columns */
#define MAX_ROWS_INIT      256   /* initial capacity, grows dynamically */
#define MAX_FIELD_LEN      256   /* max length for temp buffers (not storage) */
#define MAX_COL_NAME       128

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
#define PG_OID_UUID    2950
#define PG_OID_JSON    114

typedef struct {
    char   name[MAX_COL_NAME];
    int    pg_type_oid;
    int    type_len;       /* -1 for variable length */
    int    table_oid;      /* OID of the source table (0 = computed) */
    int    attnum;         /* column attribute number, 1-based (0 = computed) */
    int    type_modifier;  /* type modifier, e.g. varchar(50) → 54 (-1 = none) */
} ColumnInfo;

typedef struct {
    char **fields;         /* heap-allocated array of string pointers */
    int   *is_null;        /* heap-allocated null marker array */
    int    num_fields;
    int    field_capacity;  /* allocated slots in fields/is_null */
} Row;

/* Allocate row internals with given capacity */
static inline void row_init(Row *r, int capacity) {
    if (capacity <= 0) capacity = 1;
    r->fields = (char **)calloc((size_t)capacity, sizeof(char *));
    r->is_null = (int *)calloc((size_t)capacity, sizeof(int));
    r->num_fields = capacity;
    r->field_capacity = (r->fields && r->is_null) ? capacity : 0;
}

/* Grow capacity if needed */
static inline void row_ensure_capacity(Row *r, int needed) {
    if (needed <= r->field_capacity) return;
    int new_cap = r->field_capacity ? r->field_capacity : 16;
    while (new_cap < needed) new_cap *= 2;
    char **nf = (char **)realloc(r->fields, (size_t)new_cap * sizeof(char *));
    if (!nf) return;
    r->fields = nf;
    int *nn = (int *)realloc(r->is_null, (size_t)new_cap * sizeof(int));
    if (!nn) return;
    r->is_null = nn;
    memset(r->fields + r->field_capacity, 0,
           (size_t)(new_cap - r->field_capacity) * sizeof(char *));
    memset(r->is_null + r->field_capacity, 0,
           (size_t)(new_cap - r->field_capacity) * sizeof(int));
    r->field_capacity = new_cap;
}

/* Free all heap strings in a row AND the arrays themselves */
static inline void row_clear(Row *r) {
    if (r->fields) {
        int i;
        for (i = 0; i < r->field_capacity; i++) {
            if (r->fields[i]) { free(r->fields[i]); r->fields[i] = NULL; }
        }
        free(r->fields);
        r->fields = NULL;
    }
    if (r->is_null) {
        free(r->is_null);
        r->is_null = NULL;
    }
    r->num_fields = 0;
    r->field_capacity = 0;
}

/* Set a field value (frees old, strdup's new). Auto-grows if needed. */
static inline void row_set(Row *r, int col, const char *val) {
    if (col < 0) return;
    if (col >= r->field_capacity) row_ensure_capacity(r, col + 1);
    if (col >= r->field_capacity) return; /* grow failed */
    if (r->fields[col]) { free(r->fields[col]); r->fields[col] = NULL; }
    r->fields[col] = val ? strdup(val) : NULL;
    r->is_null[col] = 0;
}

/* Set a field to NULL. Auto-grows if needed. */
static inline void row_set_null(Row *r, int col) {
    if (col < 0) return;
    if (col >= r->field_capacity) row_ensure_capacity(r, col + 1);
    if (col >= r->field_capacity) return; /* grow failed */
    if (r->fields[col]) { free(r->fields[col]); r->fields[col] = NULL; }
    r->is_null[col] = 1;
}

/* Move src row into dst (transfers pointer ownership, zeroes src) */
static inline void row_move(Row *dst, Row *src) {
    *dst = *src;
    memset(src, 0, sizeof(Row));
}

typedef struct {
    ColumnInfo *columns;         /* heap-allocated column metadata */
    int         num_cols;
    int         col_capacity;    /* allocated ColumnInfo slots */

    Row        *rows;            /* heap-allocated, grows dynamically */
    int         num_rows;
    int         row_capacity;    /* current allocated row capacity */

    char        command_tag[64]; /* "SELECT 5", "INSERT 0 1", etc. */
    int         is_select;       /* 1 = has rows to return */

    int         has_error;
    char        error_message[1024];
    char        error_sqlstate[6]; /* e.g. "42P01" */

    /* Streaming mode: rows sent directly to wire during scan */
    void       *stream_conn;      /* conn_t*, NULL = buffered mode */
    int         streamed_rows;    /* rows sent so far (streaming only) */

    /* COPY ... STDIN/STDOUT pending signal.
     *   0 = no COPY stream, 1 = COPY FROM STDIN pending, 2 = COPY TO STDOUT pending.
     * Set by the query executor when it recognizes a COPY that needs the
     * PG wire COPY subprotocol; consumed by pg_handler to drive the
     * CopyInResponse/CopyOutResponse state machine. */
    int         copy_stream_mode;
    /* Parameters needed to drive the stream machine — filled by query_executor
     * before query context is freed. */
    char        copy_table[256];
    int         copy_format;          /* 0=TEXT, 1=CSV */
    char        copy_delimiter;
    char        copy_quote;
    char        copy_null_str[32];
    int         copy_header;
    int         copy_column_count;    /* 0 = all columns (default) */
    char        copy_columns[64][128];
} ResultSet;

void result_init(ResultSet *rs);
void result_free(ResultSet *rs);   /* free dynamic rows array + strings */
void result_add_column(ResultSet *rs, const char *name, int pg_oid);
int  result_add_row(ResultSet *rs);
void result_set_field(ResultSet *rs, int row, int col, const char *value);
void result_set_null(ResultSet *rs, int row, int col);
void result_set_error(ResultSet *rs, const char *sqlstate, const char *msg);

#endif /* RESULT_H */
