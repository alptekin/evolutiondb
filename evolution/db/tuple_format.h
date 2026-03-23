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
