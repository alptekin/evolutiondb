/*
 * tuple_format.h — Binary Tuple Format for EvoSQL
 *
 * Layout on disk: [0xE7][table_id:4B][Header:4B][NullBitmap][ColData...]
 *
 * Type family (type_code / 10000) → binary encoding:
 *   1-5  INT variants   → int32 LE (4B)
 *   6    BIGINT          → int64 LE (8B)
 *   7,8  REAL/DOUBLE     → double LE (8B)
 *   9    FLOAT           → float LE (4B)
 *   10   DATE/TIME/TS    → uint16 len + string
 *   11   DECIMAL         → uint16 len + string
 *   12-17 CHAR/VARCHAR/… → uint16 len + string
 *   18   UUID            → 16B raw binary
 *   22   BOOLEAN         → 1B
 *   23   JSON            → uint16 len + string
 *   25   ARRAY (1-D)     → uint16 len + [ndim:1][flags:1][elem_tc:4][count:2][nullbitmap?][elements]
 */
#ifndef TUPLE_FORMAT_H
#define TUPLE_FORMAT_H

#include <stdint.h>
#include <string.h>
#include "catalog_internal.h"

#define TUPLE_MAGIC          0xE7
#define TUPLE_PREFIX_SIZE    5     /* magic(1) + table_id(4) */
#define TUPLE_HEADER_SIZE    4     /* total_len(2) + num_cols(1) + flags(1) */
#define TUPLE_FLAG_HAS_NULLS    0x01
#define TUPLE_FLAG_MVCC         0x02   /* tuple carries xmin/xmax MVCC fields */
#define TUPLE_FLAG_HOT_UPDATED  0x04   /* this tuple has a newer version on same page */
#define TUPLE_FLAG_HEAP_ONLY    0x08   /* reachable only via HOT chain, not indexed */
#define TUPLE_FLAG_XMIN_COMMITTED 0x10 /* hint: xmin is known committed (skip CLOG) */
#define TUPLE_FLAG_XMIN_ABORTED   0x20 /* hint: xmin is known aborted (skip CLOG) */
#define TUPLE_MVCC_SIZE         8      /* xmin(4) + xmax(4) bytes */
#define TUPLE_MAX_COLS       255

/* ----------------------------------------------------------------
 *  ARRAY type family (Task 90 — Feature #60)
 *
 *  1-D arrays with NULL-element support, stored as a binary blob
 *  wrapped in the same uint16 len + bytes envelope used by VARCHAR.
 *
 *  type_code encoding: 250000 + base_family
 *    TINYINT[]   = 250001  (stored as int32)
 *    SMALLINT[]  = 250002  (stored as int32)
 *    MEDIUMINT[] = 250003  (stored as int32)
 *    INT[]       = 250004
 *    INTEGER[]   = 250005  (alias of INT[])
 *    BIGINT[]    = 250006  (also covers snowflake_id() values)
 *    REAL[]      = 250007  (stored as double)
 *    DOUBLE[]    = 250008
 *    FLOAT[]     = 250009  (stored as float)
 *    TIMESTAMP[] = 250010  (covers DATE/TIME/TIMESTAMP — string-encoded)
 *    DECIMAL[]   = 250011  (NUMERIC[], string-encoded)
 *    CHAR[]      = 250012
 *    VARCHAR[]   = 250013  (default VARCHAR(255))
 *    BINARY[]    = 250014
 *    VARBINARY[] = 250015
 *    TEXT[]      = 250017
 *    UUID[]      = 250018  (16B fixed-width elements)
 *    BOOLEAN[]   = 250022
 *    JSON[]      = 250023
 *
 *  Blob layout (payload after the outer uint16 length):
 *    [ndim:1B]       1 in v1
 *    [flags:1B]      bit0 = HAS_NULLS
 *    [elem_tc:4B LE] element type_code (scalar, e.g. 40000 for INT)
 *    [count:2B LE]   number of elements
 *    [null bitmap]   (count+7)/8 bytes if HAS_NULLS
 *    [elements ...]  per-element scalar encoding:
 *                      fixed-width: raw bytes (INT=4B LE, BIGINT=8B LE, BOOL=1B)
 *                      var-width  : uint16 len + bytes (TEXT/VARCHAR)
 * ---------------------------------------------------------------- */
#define TYPE_FAMILY_ARRAY    25
#define ARRAY_TYPE_BASE      250000
#define ARRAY_FLAG_HAS_NULLS 0x01
#define ARRAY_HEADER_SIZE    8   /* ndim(1) + flags(1) + elem_tc(4) + count(2) */
#define ARRAY_MAX_BLOB       65535

/* ----------------------------------------------------------------
 *  VECTOR type family (Task 200 — Feature #200)
 *
 *  Fixed-dimension dense float4 vectors. Payload = N × 4 bytes float4 LE
 *  directly after the column offset — no length prefix because the
 *  dimension is embedded in the type_code (type_code % 10000 = N).
 *
 *  type_code encoding: 260000 + N (N = dimension, 1..VECTOR_MAX_DIM)
 *    VECTOR(3)    = 260003
 *    VECTOR(128)  = 260128
 *    VECTOR(1536) = 261536
 *
 *  Text IO format: "[0.1,0.2,0.3]" (no spaces on output, lenient on input)
 * ---------------------------------------------------------------- */
#define TYPE_FAMILY_VECTOR   26
#define VECTOR_TYPE_BASE     260000
#define VECTOR_MAX_DIM       16384

static inline int tup_is_vector(int type_code)
{
    return (type_code / 10000) == TYPE_FAMILY_VECTOR;
}

static inline int tup_vector_dim(int type_code)
{
    return tup_is_vector(type_code) ? (type_code - VECTOR_TYPE_BASE) : -1;
}

/* Parse "[f1,f2,...]" or "{f1,f2,...}" text literal into a dense float4
 * buffer of expected_dim * 4 bytes. Accepts optional whitespace and
 * trailing commas. Returns 0 on success, -1 on dim mismatch / parse
 * error / non-finite (NaN/Inf) element. */
int vec_parse_text(const char *text, int expected_dim,
                   char *out, int out_size);

/* Format dim × float4 binary payload as "[f1,f2,...]" into out_buf.
 * Returns bytes written (including NUL), -1 on overflow. */
int vec_format_text(const char *payload, int dim,
                    char *out_buf, int out_size);

static inline int tup_is_array(int type_code)
{
    return (type_code / 10000) == TYPE_FAMILY_ARRAY;
}

static inline int tup_array_base_family(int type_code)
{
    return tup_is_array(type_code) ? (type_code - ARRAY_TYPE_BASE) : -1;
}

/* Reconstruct the scalar element type_code for a given array base family.
 * Returns -1 for unsupported base families (ENUM, SET, BLOB, etc.). */
static inline int tup_array_base_type_code(int base_family)
{
    switch (base_family) {
    case 1:  return 10000;    /* TINYINT / BIT */
    case 2:  return 20000;    /* SMALLINT */
    case 3:  return 30000;    /* MEDIUMINT */
    case 4:  return 40000;    /* INT */
    case 5:  return 50000;    /* INTEGER (alias of INT) */
    case 6:  return 60000;    /* BIGINT (covers snowflake_id) */
    case 7:  return 70000;    /* REAL */
    case 8:  return 80000;    /* DOUBLE */
    case 9:  return 90000;    /* FLOAT */
    case 10: return 100004;   /* TIMESTAMP (default for DATE/TIME/TIMESTAMP family) */
    case 11: return 110000;   /* DECIMAL / NUMERIC */
    case 12: return 120255;   /* CHAR(255) */
    case 13: return 130255;   /* VARCHAR(255) */
    case 14: return 140255;   /* BINARY(255) */
    case 15: return 150255;   /* VARBINARY(255) */
    case 17: return 170000;   /* TEXT */
    case 18: return 180036;   /* UUID (36-char string form) */
    case 22: return 220001;   /* BOOLEAN */
    case 23: return 230000;   /* JSON */
    default: return -1;       /* unsupported array element type */
    }
}

/* ----------------------------------------------------------------
 *  Array binary codec — build and format 1-D arrays
 *
 *  NULL_MARKER in elems[i] (or is_null[i]=1) encodes a NULL element.
 *  Returns bytes written into out (including 8-byte header), or -1
 *  on overflow / unsupported base family / invalid element.
 * ---------------------------------------------------------------- */
int arr_build_blob(const char *elems[], const int *is_null, int count,
                   int elem_type_code,
                   char *out, int out_size);

/* Parse a PG-style text literal "{a,b,NULL,c}" (outer braces required)
 * into a binary blob for base_family. NULL and empty strings inside
 * are recognized as NULL elements.
 * Returns bytes written, or -1 on parse error / size overflow. */
int arr_parse_text(const char *text, int base_family,
                   char *out, int out_size);

/* Render a binary blob as PG text "{e1,e2,NULL,...}" with NULL elements
 * shown as literal NULL (unquoted). TEXT/VARCHAR elements are passed
 * verbatim — callers must ensure elements don't contain delimiters
 * that would confuse round-trip (enforced at INSERT time).
 * Returns bytes written (including terminating NUL), or -1. */
int arr_format_text(const char *blob, int blob_len, char *out, int out_size);

/* Blob accessors (all bounds-check the blob header and NULL bitmap) */
int arr_element_count(const char *blob, int blob_len);
int arr_elem_type_code(const char *blob, int blob_len);
int arr_is_null_at(const char *blob, int blob_len, int idx);

/* Walk header + all elements, returning total blob size in bytes.
 * Used by tup_build to find blob boundaries without a separate length
 * parameter. max_walk caps the walk; pass a sufficiently large value
 * (e.g. ARRAY_MAX_BLOB). Returns -1 on malformed blob. */
int arr_blob_len(const char *blob, int max_walk);

/* Copy element idx (1-based per PG semantics) into out as a string.
 * Writes NULL_MARKER if element is NULL or idx out of range.
 * Returns 1 on success, 0 on OOB (NULL_MARKER written), -1 on error. */
int arr_get_element(const char *blob, int blob_len, int idx_1based,
                    char *out, int out_size);

/* Check if raw data starts with binary tuple magic byte */
static inline int tup_is_binary(const char *data, int len)
{
    return len >= TUPLE_PREFIX_SIZE && (unsigned char)data[0] == TUPLE_MAGIC;
}

/* Extract table_id from prefix */
static inline uint32_t tup_get_table_id(const char *bin_rec)
{
    uint32_t tid;
    memcpy(&tid, bin_rec + 1, 4);
    return tid;
}

/* Total record length from header (prefix + body). -1 if invalid. */
int tup_record_len(const char *bin_rec, int buf_len);

/* ----------------------------------------------------------------
 *  MVCC accessors — read/write xmin/xmax from tuple header
 *
 *  When TUPLE_FLAG_MVCC is set in flags byte, 8 bytes follow the
 *  flags byte: [xmin:4B LE][xmax:4B LE], before the null bitmap.
 * ---------------------------------------------------------------- */

/* Returns 1 if the tuple carries MVCC fields, 0 otherwise */
int      tup_has_mvcc(const char *tuple_data, int tuple_len);

/* Read xmin/xmax from MVCC tuple. Returns 0 if no MVCC flag. */
uint32_t tup_get_xmin(const char *tuple_data, int tuple_len);
uint32_t tup_get_xmax(const char *tuple_data, int tuple_len);

/* Set xmax on an existing MVCC tuple (for DELETE/UPDATE marking).
 * The tuple must already have TUPLE_FLAG_MVCC set.
 * Writes directly into the buffer (caller must persist the page).
 * Returns 0 on success, -1 if not an MVCC tuple. */
int      tup_set_xmax(char *tuple_data, int tuple_len, uint32_t xmax);

/* Freeze an MVCC tuple: replace xmin with XID_FROZEN (1) and set
 * XMIN_COMMITTED hint bit. After freezing, the tuple is always visible
 * without CLOG lookup, and the original XID can be recycled.
 * Returns 0 on success, -1 if not an MVCC tuple. */
int      tup_freeze_xmin(char *tuple_data, int tuple_len);

/* HOT (Heap-Only Tuple) chain: set/check flags on tuples.
 * HOT_UPDATED on old version means a newer version exists on the same page.
 * HEAP_ONLY on new version means it is not referenced by any index. */
int  tup_set_hot_updated(char *tuple_data, int tuple_len);
int  tup_set_heap_only(char *tuple_data, int tuple_len);
int  tup_is_hot_updated(const char *tuple_data, int tuple_len);
int  tup_is_heap_only(const char *tuple_data, int tuple_len);

/* ----------------------------------------------------------------
 *  Build binary tuple from string values
 *
 *  vals[i]    = string value for column i, or NULL
 *  is_null[i] = 1 if column i is NULL (vals[i] ignored)
 *  xmin       = inserting transaction ID (0 = no MVCC header)
 *  Writes full record [magic][table_id][header][mvcc?][bitmap][data] into out.
 *  Returns total bytes written, or -1 on error.
 * ---------------------------------------------------------------- */
int tup_build(const char **vals, const int *is_null, int nvals,
              uint32_t table_id,
              const ColumnDesc *cols, int ncols,
              char *out, int buf_size,
              uint32_t xmin);

/* ----------------------------------------------------------------
 *  Extract fields from binary tuple
 *
 *  Reads [magic][table_id][header][bitmap][data].
 *  Fills fields[i] with string representation; is_null[i] = 1 for NULLs.
 *  Returns number of columns extracted, or -1 on error.
 * ---------------------------------------------------------------- */
int tup_extract_fields(const char *bin_rec, int bin_len,
                       const ColumnDesc *cols, int ncols,
                       char fields[][256], int *is_null, int max_fields);

/* ----------------------------------------------------------------
 *  Convenience: extract fields with NULL_MARKER strings
 *
 *  Like tup_extract_fields, but writes "\x01NULL\x01" into fields[i]
 *  for NULL columns (compatible with expr_evaluate).
 *  is_null_out may be NULL if caller doesn't need it.
 *  Returns number of columns extracted, or -1 on error.
 * ---------------------------------------------------------------- */
int tup_extract_fields_nm(const char *bin_rec, int bin_len,
                          const ColumnDesc *cols, int ncols,
                          char fields[][256], int *is_null_out, int max_fields);

/* ----------------------------------------------------------------
 *  Convenience: build binary tuple from char[][256] fields
 *
 *  Wraps tup_build — builds vals[]/is_null[] from fields array
 *  (detects NULL_MARKER strings). Returns bytes written, or -1.
 * ---------------------------------------------------------------- */
int tup_build_from_fields(const char fields[][256], int nfields,
                          uint32_t table_id,
                          const ColumnDesc *cols, int ncols,
                          char *out, int buf_size);

/* ----------------------------------------------------------------
 *  Column cache — avoids repeated cat_find_columns lookups
 * ---------------------------------------------------------------- */
#define COL_CACHE_SIZE 4

int  cached_find_columns(uint32_t table_id, ColumnDesc *cols);
void col_cache_invalidate(uint32_t table_id);
void col_cache_clear(void);

#endif /* TUPLE_FORMAT_H */
