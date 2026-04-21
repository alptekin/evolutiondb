/*
 * tuple_format.c — Binary Tuple Format for EvoSQL
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tuple_format.h"
#include "expression.h"  /* NULL_MARKER */

/* ----------------------------------------------------------------
 *  Type family helper
 * ---------------------------------------------------------------- */
static inline int type_family(int type_code)
{
    return type_code / 10000;
}

/* ----------------------------------------------------------------
 *  UUID helpers: hex string ↔ 16-byte binary
 * ---------------------------------------------------------------- */

static int hex_nibble(char c)
{
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}

/* Parse "xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx" → 16 bytes. Returns 0 ok, -1 err */
static int uuid_parse(const char *str, uint8_t *out)
{
    int bi = 0;
    for (int i = 0; str[i] && bi < 16; i++) {
        if (str[i] == '-') continue;
        int hi = hex_nibble(str[i]);
        int lo = hex_nibble(str[i + 1]);
        if (hi < 0 || lo < 0) return -1;
        out[bi++] = (uint8_t)((hi << 4) | lo);
        i++; /* skip lo char */
    }
    return (bi == 16) ? 0 : -1;
}

/* Format 16 bytes → "xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx" (36 chars + NUL) */
static void uuid_format(const uint8_t *bin, char *out)
{
    /* 4-2-2-2-6 byte groups */
    static const int groups[] = {4, 2, 2, 2, 6};
    int pos = 0, bi = 0;
    for (int g = 0; g < 5; g++) {
        if (g > 0) out[pos++] = '-';
        for (int j = 0; j < groups[g]; j++) {
            snprintf(out + pos, 3, "%02x", bin[bi++]);
            pos += 2;
        }
    }
    out[pos] = '\0';
}

/* ----------------------------------------------------------------
 *  tup_record_len
 * ---------------------------------------------------------------- */
int tup_record_len(const char *bin_rec, int buf_len)
{
    if (buf_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE)
        return -1;
    if ((unsigned char)bin_rec[0] != TUPLE_MAGIC)
        return -1;
    uint16_t body_len;
    memcpy(&body_len, bin_rec + TUPLE_PREFIX_SIZE, 2);
    return TUPLE_PREFIX_SIZE + (int)body_len;
}

/* ----------------------------------------------------------------
 *  MVCC accessors
 * ---------------------------------------------------------------- */

int tup_has_mvcc(const char *tuple_data, int tuple_len)
{
    if (tuple_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE)
        return 0;
    if ((unsigned char)tuple_data[0] != TUPLE_MAGIC)
        return 0;
    uint8_t flags = (uint8_t)tuple_data[TUPLE_PREFIX_SIZE + 3];
    return (flags & TUPLE_FLAG_MVCC) ? 1 : 0;
}

uint32_t tup_get_xmin(const char *tuple_data, int tuple_len)
{
    if (!tup_has_mvcc(tuple_data, tuple_len))
        return 0;
    /* xmin is at offset TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE */
    uint32_t xmin;
    memcpy(&xmin, tuple_data + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE, 4);
    return xmin;
}

uint32_t tup_get_xmax(const char *tuple_data, int tuple_len)
{
    if (!tup_has_mvcc(tuple_data, tuple_len))
        return 0;
    /* xmax is at offset TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE + 4 */
    uint32_t xmax;
    memcpy(&xmax, tuple_data + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE + 4, 4);
    return xmax;
}

int tup_set_xmax(char *tuple_data, int tuple_len, uint32_t xmax)
{
    if (!tup_has_mvcc(tuple_data, tuple_len))
        return -1;
    memcpy(tuple_data + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE + 4, &xmax, 4);
    return 0;
}

int tup_freeze_xmin(char *tuple_data, int tuple_len)
{
    if (!tup_has_mvcc(tuple_data, tuple_len))
        return -1;
    /* Replace xmin with XID_FROZEN (1) */
    uint32_t frozen = 1;  /* XID_FROZEN */
    memcpy(tuple_data + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE, &frozen, 4);
    /* Set XMIN_COMMITTED hint bit so future reads skip CLOG entirely */
    tuple_data[TUPLE_PREFIX_SIZE + 3] |= TUPLE_FLAG_XMIN_COMMITTED;
    return 0;
}

/* ----------------------------------------------------------------
 *  HOT (Heap-Only Tuple) flag accessors
 * ---------------------------------------------------------------- */

int tup_set_hot_updated(char *tuple_data, int tuple_len)
{
    if (tuple_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE) return -1;
    tuple_data[TUPLE_PREFIX_SIZE + 3] |= TUPLE_FLAG_HOT_UPDATED;
    return 0;
}

int tup_set_heap_only(char *tuple_data, int tuple_len)
{
    if (tuple_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE) return -1;
    tuple_data[TUPLE_PREFIX_SIZE + 3] |= TUPLE_FLAG_HEAP_ONLY;
    return 0;
}

int tup_is_hot_updated(const char *tuple_data, int tuple_len)
{
    if (tuple_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE) return 0;
    return (tuple_data[TUPLE_PREFIX_SIZE + 3] & TUPLE_FLAG_HOT_UPDATED) ? 1 : 0;
}

int tup_is_heap_only(const char *tuple_data, int tuple_len)
{
    if (tuple_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE) return 0;
    return (tuple_data[TUPLE_PREFIX_SIZE + 3] & TUPLE_FLAG_HEAP_ONLY) ? 1 : 0;
}

/* ----------------------------------------------------------------
 *  tup_build — string values → binary tuple
 * ---------------------------------------------------------------- */
int tup_build(const char **vals, const int *is_null, int nvals,
              uint32_t table_id,
              const ColumnDesc *cols, int ncols,
              char *out, int buf_size,
              uint32_t xmin)
{
    int num = ncols < nvals ? ncols : nvals;
    if (num > TUPLE_MAX_COLS) num = TUPLE_MAX_COLS;
    if (buf_size < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE + 1)
        return -1;

    /* MVCC header size (0 or 8 bytes) */
    int mvcc_size = (xmin > 0) ? TUPLE_MVCC_SIZE : 0;

    /* Null bitmap size */
    int bm_bytes = (num + 7) / 8;

    /* Start writing after prefix + header + mvcc + bitmap */
    int data_off = TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE + mvcc_size + bm_bytes;
    int pos = data_off;

    /* Clear bitmap area */
    uint8_t *bm = (uint8_t *)(out + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE + mvcc_size);
    memset(bm, 0, bm_bytes);

    uint8_t flags = 0;
    if (xmin > 0) flags |= TUPLE_FLAG_MVCC;

    for (int i = 0; i < num; i++) {
        if (is_null[i] || vals[i] == NULL ||
            strcmp(vals[i], NULL_MARKER) == 0) {
            /* Set null bit */
            bm[i / 8] |= (1 << (i % 8));
            flags |= TUPLE_FLAG_HAS_NULLS;
            continue;
        }

        const char *v = vals[i];
        int fam = type_family(cols[i].type_code);

        switch (fam) {
        case 1: case 2: case 3: case 4: case 5: {
            /* INT variants → int32 LE */
            if (pos + 4 > buf_size) return -1;
            int32_t ival = (int32_t)atoi(v);
            memcpy(out + pos, &ival, 4);
            pos += 4;
            break;
        }
        case 6: {
            /* BIGINT → int64 LE */
            if (pos + 8 > buf_size) return -1;
            int64_t bval = strtoll(v, NULL, 10);
            memcpy(out + pos, &bval, 8);
            pos += 8;
            break;
        }
        case 7: case 8: {
            /* REAL/DOUBLE → double LE */
            if (pos + 8 > buf_size) return -1;
            double dval = strtod(v, NULL);
            memcpy(out + pos, &dval, 8);
            pos += 8;
            break;
        }
        case 9: {
            /* FLOAT → float LE */
            if (pos + 4 > buf_size) return -1;
            float fval = (float)strtod(v, NULL);
            memcpy(out + pos, &fval, 4);
            pos += 4;
            break;
        }
        case 18: {
            /* UUID → 16 bytes binary */
            if (pos + 16 > buf_size) return -1;
            uint8_t uuid[16];
            if (uuid_parse(v, uuid) < 0)
                memset(uuid, 0, 16);
            memcpy(out + pos, uuid, 16);
            pos += 16;
            break;
        }
        case 22: {
            /* BOOLEAN → 1 byte */
            if (pos + 1 > buf_size) return -1;
            uint8_t bv = 0;
            if (strcasecmp(v, "true") == 0 || strcmp(v, "1") == 0 ||
                strcmp(v, "t") == 0)
                bv = 1;
            out[pos++] = (char)bv;
            break;
        }
        case 25: {
            /* ARRAY → uint16 len + binary blob (caller must pass blob with
             * valid header; arr_blob_len walks to find total size). */
            int bl = arr_blob_len(v, buf_size - pos - 2);
            if (bl < 0 || bl > ARRAY_MAX_BLOB) return -1;
            uint16_t slen = (uint16_t)bl;
            if (pos + 2 + bl > buf_size) return -1;
            memcpy(out + pos, &slen, 2);
            pos += 2;
            memcpy(out + pos, v, bl);
            pos += bl;
            break;
        }
        default: {
            /* String types (DATE/TIME/DECIMAL/CHAR/VARCHAR/TEXT/...) → len-prefixed */
            uint16_t slen = (uint16_t)strlen(v);
            if (pos + 2 + slen > buf_size) return -1;
            memcpy(out + pos, &slen, 2);
            pos += 2;
            memcpy(out + pos, v, slen);
            pos += slen;
            break;
        }
        }
    }

    /* Write prefix */
    out[0] = (char)TUPLE_MAGIC;
    memcpy(out + 1, &table_id, 4);

    /* Write header (body = header + bitmap + data) */
    uint16_t body_len = (uint16_t)(pos - TUPLE_PREFIX_SIZE);
    memcpy(out + TUPLE_PREFIX_SIZE, &body_len, 2);
    out[TUPLE_PREFIX_SIZE + 2] = (uint8_t)num;
    out[TUPLE_PREFIX_SIZE + 3] = flags;

    /* Write MVCC xmin/xmax if enabled */
    if (xmin > 0) {
        uint32_t xmax = 0;
        memcpy(out + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE, &xmin, 4);
        memcpy(out + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE + 4, &xmax, 4);
    }

    return pos;
}

/* ----------------------------------------------------------------
 *  tup_extract_fields — binary tuple → string values + is_null
 * ---------------------------------------------------------------- */
int tup_extract_fields(const char *bin_rec, int bin_len,
                       const ColumnDesc *cols, int ncols,
                       char fields[][256], int *is_null, int max_fields)
{
    if (bin_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE)
        return -1;
    if ((unsigned char)bin_rec[0] != TUPLE_MAGIC)
        return -1;

    /* Read header */
    const char *body = bin_rec + TUPLE_PREFIX_SIZE;
    uint8_t num_cols = (uint8_t)body[2];
    uint8_t flags = (uint8_t)body[3];

    int num = num_cols;
    if (num > ncols) num = ncols;
    if (num > max_fields) num = max_fields;

    /* Skip MVCC header (xmin + xmax) if present */
    int mvcc_size = (flags & TUPLE_FLAG_MVCC) ? TUPLE_MVCC_SIZE : 0;

    int bm_bytes = (num_cols + 7) / 8;
    const uint8_t *bm = (const uint8_t *)(body + TUPLE_HEADER_SIZE + mvcc_size);
    int data_off = TUPLE_HEADER_SIZE + mvcc_size + bm_bytes;
    int pos = data_off;
    int body_len = bin_len - TUPLE_PREFIX_SIZE;

    for (int i = 0; i < num; i++) {
        /* Check null bitmap */
        if ((flags & TUPLE_FLAG_HAS_NULLS) && (bm[i / 8] & (1 << (i % 8)))) {
            is_null[i] = 1;
            strcpy(fields[i], NULL_MARKER);
            continue;
        }
        is_null[i] = 0;

        int fam = type_family(cols[i].type_code);

        switch (fam) {
        case 1: case 2: case 3: case 4: case 5: {
            if (pos + 4 > body_len) return -1;
            int32_t ival;
            memcpy(&ival, body + pos, 4);
            snprintf(fields[i], 256, "%d", ival);
            pos += 4;
            break;
        }
        case 6: {
            if (pos + 8 > body_len) return -1;
            int64_t bval;
            memcpy(&bval, body + pos, 8);
            snprintf(fields[i], 256, "%lld", (long long)bval);
            pos += 8;
            break;
        }
        case 7: case 8: {
            if (pos + 8 > body_len) return -1;
            double dval;
            memcpy(&dval, body + pos, 8);
            snprintf(fields[i], 256, "%.15g", dval);
            pos += 8;
            break;
        }
        case 9: {
            if (pos + 4 > body_len) return -1;
            float fval;
            memcpy(&fval, body + pos, 4);
            snprintf(fields[i], 256, "%.7g", fval);
            pos += 4;
            break;
        }
        case 18: {
            if (pos + 16 > body_len) return -1;
            uuid_format((const uint8_t *)(body + pos), fields[i]);
            pos += 16;
            break;
        }
        case 22: {
            if (pos + 1 > body_len) return -1;
            uint8_t bv = (uint8_t)body[pos++];
            strcpy(fields[i], bv ? "true" : "false");
            break;
        }
        case 25: {
            /* ARRAY → read uint16 len + blob, format as PG text "{e1,e2,...}".
             * Limited by 256-byte fields[i] buffer — very long arrays may
             * truncate in v1. */
            if (pos + 2 > body_len) return -1;
            uint16_t slen;
            memcpy(&slen, body + pos, 2);
            pos += 2;
            if (pos + slen > body_len) return -1;
            int w = arr_format_text(body + pos, slen, fields[i], 256);
            if (w < 0) {
                /* Malformed blob or overflow: emit empty array */
                strcpy(fields[i], "{}");
            }
            pos += slen;
            break;
        }
        default: {
            /* String types → len-prefixed */
            if (pos + 2 > body_len) return -1;
            uint16_t slen;
            memcpy(&slen, body + pos, 2);
            pos += 2;
            if (pos + slen > body_len) return -1;
            int copy = slen < 255 ? slen : 255;
            memcpy(fields[i], body + pos, copy);
            fields[i][copy] = '\0';
            pos += slen;
            break;
        }
        }
    }

    return num;
}

/* ----------------------------------------------------------------
 *  Convenience: extract + NULL_MARKER patch
 * ---------------------------------------------------------------- */
int tup_extract_fields_nm(const char *bin_rec, int bin_len,
                          const ColumnDesc *cols, int ncols,
                          char fields[][256], int *is_null_out, int max_fields)
{
    int nullArr[CAT_MAX_COLUMNS];
    int nf = tup_extract_fields(bin_rec, bin_len, cols, ncols,
                                fields, nullArr, max_fields);
    if (nf < 0) return nf;
    for (int i = 0; i < nf; i++) {
        if (nullArr[i])
            strcpy(fields[i], NULL_MARKER);
        if (is_null_out)
            is_null_out[i] = nullArr[i];
    }
    return nf;
}

/* ----------------------------------------------------------------
 *  Convenience: build from fields[][256]
 * ---------------------------------------------------------------- */
int tup_build_from_fields(const char fields[][256], int nfields,
                          uint32_t table_id,
                          const ColumnDesc *cols, int ncols,
                          char *out, int buf_size)
{
    const char *valPtrs[CAT_MAX_COLUMNS];
    int nullFlags[CAT_MAX_COLUMNS];
    int n = nfields < CAT_MAX_COLUMNS ? nfields : CAT_MAX_COLUMNS;
    for (int i = 0; i < n; i++) {
        if (strcmp(fields[i], NULL_MARKER) == 0) {
            valPtrs[i] = NULL;
            nullFlags[i] = 1;
        } else {
            valPtrs[i] = fields[i];
            nullFlags[i] = 0;
        }
    }
    return tup_build(valPtrs, nullFlags, n, table_id,
                     cols, ncols, out, buf_size, 0);
}

/* ----------------------------------------------------------------
 *  Column cache
 * ---------------------------------------------------------------- */
static __thread struct {
    uint32_t   table_id;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int        ncols;
} g_col_cache[COL_CACHE_SIZE];
static __thread int g_col_cache_init = 0;

int cached_find_columns(uint32_t table_id, ColumnDesc *cols)
{
    if (!g_col_cache_init) {
        memset(g_col_cache, 0, sizeof(g_col_cache));
        g_col_cache_init = 1;
    }

    /* Search cache */
    for (int i = 0; i < COL_CACHE_SIZE; i++) {
        if (g_col_cache[i].table_id == table_id && g_col_cache[i].ncols > 0) {
            memcpy(cols, g_col_cache[i].cols,
                   g_col_cache[i].ncols * sizeof(ColumnDesc));
            return g_col_cache[i].ncols;
        }
    }

    /* Cache miss — lookup from catalog */
    int ncols = cat_find_columns(table_id, cols, CAT_MAX_COLUMNS);
    if (ncols <= 0) return ncols;

    /* Evict oldest (simple: slot 0 is always evicted, shift others down) */
    for (int i = 0; i < COL_CACHE_SIZE - 1; i++)
        g_col_cache[i] = g_col_cache[i + 1];

    int slot = COL_CACHE_SIZE - 1;
    g_col_cache[slot].table_id = table_id;
    g_col_cache[slot].ncols = ncols;
    memcpy(g_col_cache[slot].cols, cols, ncols * sizeof(ColumnDesc));

    return ncols;
}

void col_cache_invalidate(uint32_t table_id)
{
    for (int i = 0; i < COL_CACHE_SIZE; i++) {
        if (g_col_cache[i].table_id == table_id) {
            g_col_cache[i].table_id = 0;
            g_col_cache[i].ncols = 0;
        }
    }
}

void col_cache_clear(void)
{
    memset(g_col_cache, 0, sizeof(g_col_cache));
}

/* ================================================================
 *  Array binary codec (Task 90 — Feature #60)
 *
 *  1-D array blob layout (matches tuple_format.h):
 *    [ndim:1B=1][flags:1B][elem_tc:4B LE][count:2B LE]
 *    [null bitmap: ceil(count/8) bytes if flags & HAS_NULLS]
 *    [elements: per-element scalar encoding]
 * ================================================================ */

/* Write one element using the scalar family encoding. Returns bytes
 * written or -1 on overflow / invalid input. */
static int arr_write_element(char *out, int out_size, int pos,
                              int elem_type_code, const char *v)
{
    int fam = elem_type_code / 10000;
    switch (fam) {
    case 1: case 2: case 3: case 4: case 5: {
        if (pos + 4 > out_size) return -1;
        int32_t iv = (int32_t)strtol(v ? v : "0", NULL, 10);
        memcpy(out + pos, &iv, 4);
        return pos + 4;
    }
    case 6: {
        if (pos + 8 > out_size) return -1;
        int64_t bv = strtoll(v ? v : "0", NULL, 10);
        memcpy(out + pos, &bv, 8);
        return pos + 8;
    }
    case 7: case 8: {
        if (pos + 8 > out_size) return -1;
        double dv = strtod(v ? v : "0", NULL);
        memcpy(out + pos, &dv, 8);
        return pos + 8;
    }
    case 9: {
        if (pos + 4 > out_size) return -1;
        float fv = (float)strtod(v ? v : "0", NULL);
        memcpy(out + pos, &fv, 4);
        return pos + 4;
    }
    case 18: {
        if (pos + 16 > out_size) return -1;
        uint8_t uuid[16];
        if (!v || uuid_parse(v, uuid) < 0)
            memset(uuid, 0, 16);
        memcpy(out + pos, uuid, 16);
        return pos + 16;
    }
    case 22: {
        if (pos + 1 > out_size) return -1;
        uint8_t bv = 0;
        if (v && (strcasecmp(v, "true") == 0 || strcmp(v, "1") == 0 ||
                  strcmp(v, "t") == 0))
            bv = 1;
        out[pos++] = (char)bv;
        return pos;
    }
    default: {
        /* String-like: uint16 len + bytes (families 10-17, 23) */
        const char *s = v ? v : "";
        size_t n = strlen(s);
        if (n > 65535) return -1;
        uint16_t slen = (uint16_t)n;
        if (pos + 2 + (int)slen > out_size) return -1;
        memcpy(out + pos, &slen, 2);
        memcpy(out + pos + 2, s, slen);
        return pos + 2 + slen;
    }
    }
}

/* Read one element from blob at pos. Writes text representation into
 * out_buf (NUL-terminated). Returns new pos or -1 on bounds error. */
static int arr_read_element(const char *blob, int blob_len, int pos,
                             int elem_type_code, char *out_buf, int out_size)
{
    int fam = elem_type_code / 10000;
    switch (fam) {
    case 1: case 2: case 3: case 4: case 5: {
        if (pos + 4 > blob_len) return -1;
        int32_t iv;
        memcpy(&iv, blob + pos, 4);
        snprintf(out_buf, out_size, "%d", iv);
        return pos + 4;
    }
    case 6: {
        if (pos + 8 > blob_len) return -1;
        int64_t bv;
        memcpy(&bv, blob + pos, 8);
        snprintf(out_buf, out_size, "%lld", (long long)bv);
        return pos + 8;
    }
    case 7: case 8: {
        if (pos + 8 > blob_len) return -1;
        double dv;
        memcpy(&dv, blob + pos, 8);
        snprintf(out_buf, out_size, "%.15g", dv);
        return pos + 8;
    }
    case 9: {
        if (pos + 4 > blob_len) return -1;
        float fv;
        memcpy(&fv, blob + pos, 4);
        snprintf(out_buf, out_size, "%.7g", fv);
        return pos + 4;
    }
    case 18: {
        if (pos + 16 > blob_len) return -1;
        char tmp[40];
        uuid_format((const uint8_t *)(blob + pos), tmp);
        snprintf(out_buf, out_size, "%s", tmp);
        return pos + 16;
    }
    case 22: {
        if (pos + 1 > blob_len) return -1;
        uint8_t bv = (uint8_t)blob[pos++];
        snprintf(out_buf, out_size, "%s", bv ? "true" : "false");
        return pos;
    }
    default: {
        /* String-like: uint16 len + bytes */
        if (pos + 2 > blob_len) return -1;
        uint16_t slen;
        memcpy(&slen, blob + pos, 2);
        pos += 2;
        if (pos + slen > blob_len) return -1;
        int copy = (slen < out_size - 1) ? slen : out_size - 1;
        memcpy(out_buf, blob + pos, copy);
        out_buf[copy] = '\0';
        return pos + slen;
    }
    }
}

/* Skip one element without decoding — used for indexed lookup. */
static int arr_skip_element(const char *blob, int blob_len, int pos,
                             int elem_type_code)
{
    int fam = elem_type_code / 10000;
    switch (fam) {
    case 1: case 2: case 3: case 4: case 5: case 9:
        return (pos + 4 > blob_len) ? -1 : pos + 4;
    case 6: case 7: case 8:
        return (pos + 8 > blob_len) ? -1 : pos + 8;
    case 18:
        return (pos + 16 > blob_len) ? -1 : pos + 16;
    case 22:
        return (pos + 1 > blob_len) ? -1 : pos + 1;
    default: {
        if (pos + 2 > blob_len) return -1;
        uint16_t slen;
        memcpy(&slen, blob + pos, 2);
        pos += 2;
        return (pos + slen > blob_len) ? -1 : pos + slen;
    }
    }
}

int arr_build_blob(const char *elems[], const int *is_null, int count,
                   int elem_type_code,
                   char *out, int out_size)
{
    if (count < 0 || count > 65535) return -1;
    if (out_size < ARRAY_HEADER_SIZE) return -1;
    int base_fam = elem_type_code / 10000;
    if (tup_array_base_type_code(base_fam) == -1) return -1;

    /* Detect NULLs from is_null[] or NULL_MARKER in elems[] */
    int has_nulls = 0;
    for (int i = 0; i < count; i++) {
        int n = (is_null && is_null[i]) ||
                (elems && elems[i] && strcmp(elems[i], NULL_MARKER) == 0);
        if (n) { has_nulls = 1; break; }
    }

    int bm_bytes = has_nulls ? (count + 7) / 8 : 0;
    int pos = 0;

    /* Header: ndim(1) + flags(1) + elem_tc(4) + count(2) */
    if (pos + ARRAY_HEADER_SIZE > out_size) return -1;
    out[pos++] = 1;
    out[pos++] = (char)(has_nulls ? ARRAY_FLAG_HAS_NULLS : 0);
    int32_t etc = elem_type_code;
    memcpy(out + pos, &etc, 4); pos += 4;
    uint16_t cnt = (uint16_t)count;
    memcpy(out + pos, &cnt, 2); pos += 2;

    /* Null bitmap */
    if (has_nulls) {
        if (pos + bm_bytes > out_size) return -1;
        memset(out + pos, 0, bm_bytes);
        for (int i = 0; i < count; i++) {
            int n = (is_null && is_null[i]) ||
                    (elems && elems[i] && strcmp(elems[i], NULL_MARKER) == 0);
            if (n)
                out[pos + i/8] |= (char)(1u << (i % 8));
        }
        pos += bm_bytes;
    }

    /* Elements (skip NULLs — they take no bytes in payload) */
    for (int i = 0; i < count; i++) {
        int n = (is_null && is_null[i]) ||
                (elems && elems[i] && strcmp(elems[i], NULL_MARKER) == 0);
        if (n) continue;
        const char *v = elems ? elems[i] : NULL;
        pos = arr_write_element(out, out_size, pos, elem_type_code, v);
        if (pos < 0) return -1;
    }
    return pos;
}

int arr_blob_len(const char *blob, int max_walk)
{
    if (!blob || max_walk < ARRAY_HEADER_SIZE) return -1;
    int cnt = arr_element_count(blob, max_walk);
    int etc = arr_elem_type_code(blob, max_walk);
    if (cnt < 0 || etc < 0) return -1;
    uint8_t flags = (uint8_t)blob[1];
    int bm_bytes = (flags & ARRAY_FLAG_HAS_NULLS) ? (cnt + 7) / 8 : 0;
    int pos = ARRAY_HEADER_SIZE + bm_bytes;
    if (pos > max_walk) return -1;

    for (int i = 0; i < cnt; i++) {
        int is_n = 0;
        if (flags & ARRAY_FLAG_HAS_NULLS)
            is_n = ((uint8_t)blob[ARRAY_HEADER_SIZE + i / 8] >> (i % 8)) & 1;
        if (is_n) continue;
        pos = arr_skip_element(blob, max_walk, pos, etc);
        if (pos < 0) return -1;
    }
    return pos;
}

int arr_element_count(const char *blob, int blob_len)
{
    if (!blob || blob_len < ARRAY_HEADER_SIZE) return -1;
    if ((uint8_t)blob[0] != 1) return -1;
    uint16_t cnt;
    memcpy(&cnt, blob + 6, 2);
    return (int)cnt;
}

int arr_elem_type_code(const char *blob, int blob_len)
{
    if (!blob || blob_len < ARRAY_HEADER_SIZE) return -1;
    int32_t etc;
    memcpy(&etc, blob + 2, 4);
    return (int)etc;
}

int arr_is_null_at(const char *blob, int blob_len, int idx)
{
    if (!blob || blob_len < ARRAY_HEADER_SIZE) return -1;
    int cnt = arr_element_count(blob, blob_len);
    if (idx < 0 || idx >= cnt) return -1;
    uint8_t flags = (uint8_t)blob[1];
    if (!(flags & ARRAY_FLAG_HAS_NULLS)) return 0;
    int bm_off = ARRAY_HEADER_SIZE;
    if (bm_off + (idx / 8) >= blob_len) return -1;
    return (((uint8_t)blob[bm_off + idx / 8]) >> (idx % 8)) & 1;
}

int arr_get_element(const char *blob, int blob_len, int idx_1based,
                    char *out, int out_size)
{
    if (!blob || blob_len < ARRAY_HEADER_SIZE || !out || out_size < 2)
        return -1;
    int cnt = arr_element_count(blob, blob_len);
    int etc = arr_elem_type_code(blob, blob_len);
    if (cnt < 0 || etc < 0) return -1;

    int idx0 = idx_1based - 1;
    if (idx0 < 0 || idx0 >= cnt) {
        snprintf(out, out_size, "%s", NULL_MARKER);
        return 0;
    }

    uint8_t flags = (uint8_t)blob[1];
    int bm_bytes = (flags & ARRAY_FLAG_HAS_NULLS) ? (cnt + 7) / 8 : 0;

    if (flags & ARRAY_FLAG_HAS_NULLS) {
        if (((uint8_t)blob[ARRAY_HEADER_SIZE + idx0 / 8] >> (idx0 % 8)) & 1) {
            snprintf(out, out_size, "%s", NULL_MARKER);
            return 1;
        }
    }

    /* Walk elements up to idx0, skipping stored (non-NULL) ones */
    int pos = ARRAY_HEADER_SIZE + bm_bytes;
    for (int i = 0; i < idx0; i++) {
        int is_n = 0;
        if (flags & ARRAY_FLAG_HAS_NULLS)
            is_n = ((uint8_t)blob[ARRAY_HEADER_SIZE + i / 8] >> (i % 8)) & 1;
        if (!is_n) {
            pos = arr_skip_element(blob, blob_len, pos, etc);
            if (pos < 0) return -1;
        }
    }

    int new_pos = arr_read_element(blob, blob_len, pos, etc, out, out_size);
    return (new_pos > 0) ? 1 : -1;
}

/* Text parser: "{a,b,NULL,c}" or "{}"
 * Quoted strings "..." with \" and \\ escapes supported.
 * Unquoted NULL (case-insensitive) = NULL element. */
int arr_parse_text(const char *text, int base_family,
                   char *out, int out_size)
{
    if (!text || !out) return -1;
    int elem_tc = tup_array_base_type_code(base_family);
    if (elem_tc == -1) return -1;

    /* Skip leading whitespace */
    const char *p = text;
    while (*p && isspace((unsigned char)*p)) p++;
    if (*p != '{') return -1;
    p++;

    /* Gather up to 65535 elements; use temporary buffers */
    const int MAX_ELEMS = 4096;
    static __thread char tbuf[128 * 1024];
    static __thread char *tptrs[4096];
    static __thread int  tnulls[4096];
    int count = 0;
    int tpos = 0;

    /* Skip whitespace, check for empty array */
    while (*p && isspace((unsigned char)*p)) p++;
    if (*p == '}') {
        p++;
        return arr_build_blob((const char **)tptrs, tnulls, 0,
                              elem_tc, out, out_size);
    }

    while (*p) {
        while (*p && isspace((unsigned char)*p)) p++;
        if (count >= MAX_ELEMS) return -1;

        int is_null = 0;
        char *dst = tbuf + tpos;
        int dlen = 0;
        int max = (int)sizeof(tbuf) - tpos - 1;
        if (max < 2) return -1;

        if (*p == '"') {
            /* Quoted string — always non-NULL, even "NULL" */
            p++;
            while (*p && *p != '"') {
                if (*p == '\\' && *(p + 1)) {
                    p++;
                    if (dlen >= max) return -1;
                    dst[dlen++] = *p++;
                } else {
                    if (dlen >= max) return -1;
                    dst[dlen++] = *p++;
                }
            }
            if (*p != '"') return -1;
            p++;
        } else {
            /* Unquoted — read until , or } */
            while (*p && *p != ',' && *p != '}') {
                if (dlen >= max) return -1;
                dst[dlen++] = *p++;
            }
            /* Trim trailing whitespace */
            while (dlen > 0 && isspace((unsigned char)dst[dlen - 1])) dlen--;
            /* NULL keyword (case-insensitive)? */
            if (dlen == 4 &&
                (dst[0] | 0x20) == 'n' && (dst[1] | 0x20) == 'u' &&
                (dst[2] | 0x20) == 'l' && (dst[3] | 0x20) == 'l')
                is_null = 1;
        }

        dst[dlen] = '\0';
        tptrs[count] = is_null ? NULL : dst;
        tnulls[count] = is_null;
        tpos += dlen + 1;
        count++;

        while (*p && isspace((unsigned char)*p)) p++;
        if (*p == ',') { p++; continue; }
        if (*p == '}') { p++; break; }
        return -1;
    }

    /* Allow trailing whitespace */
    while (*p && isspace((unsigned char)*p)) p++;
    if (*p != '\0') return -1;

    return arr_build_blob((const char **)tptrs, tnulls, count,
                          elem_tc, out, out_size);
}

/* Quote an element if it needs quoting (contains , { } " \ or is empty) */
static int arr_needs_quote(const char *s)
{
    if (!s || !*s) return 1;
    for (const char *p = s; *p; p++) {
        if (*p == ',' || *p == '{' || *p == '}' || *p == '"' ||
            *p == '\\' || isspace((unsigned char)*p))
            return 1;
    }
    /* Unquoted "NULL" would collide with NULL marker */
    if (strcasecmp(s, "NULL") == 0) return 1;
    return 0;
}

int arr_format_text(const char *blob, int blob_len, char *out, int out_size)
{
    if (!blob || !out || out_size < 3) return -1;
    int cnt = arr_element_count(blob, blob_len);
    int etc = arr_elem_type_code(blob, blob_len);
    if (cnt < 0 || etc < 0) return -1;
    int fam = etc / 10000;
    uint8_t flags = (uint8_t)blob[1];
    int bm_bytes = (flags & ARRAY_FLAG_HAS_NULLS) ? (cnt + 7) / 8 : 0;

    int op = 0;
    if (op + 1 >= out_size) return -1;
    out[op++] = '{';

    int pos = ARRAY_HEADER_SIZE + bm_bytes;
    for (int i = 0; i < cnt; i++) {
        if (i > 0) {
            if (op + 1 >= out_size) return -1;
            out[op++] = ',';
        }

        int is_n = 0;
        if (flags & ARRAY_FLAG_HAS_NULLS)
            is_n = ((uint8_t)blob[ARRAY_HEADER_SIZE + i / 8] >> (i % 8)) & 1;

        if (is_n) {
            if (op + 4 >= out_size) return -1;
            memcpy(out + op, "NULL", 4);
            op += 4;
            continue;
        }

        char tmp[4096];
        int np = arr_read_element(blob, blob_len, pos, etc, tmp, sizeof(tmp));
        if (np < 0) return -1;
        pos = np;

        /* Variable-length families may need quoting */
        int quote = (fam >= 10 && fam <= 17) || fam == 23;
        if (quote && !arr_needs_quote(tmp)) quote = 0;

        if (quote) {
            if (op + 1 >= out_size) return -1;
            out[op++] = '"';
            for (const char *c = tmp; *c; c++) {
                if (*c == '"' || *c == '\\') {
                    if (op + 2 >= out_size) return -1;
                    out[op++] = '\\';
                }
                if (op + 1 >= out_size) return -1;
                out[op++] = *c;
            }
            if (op + 1 >= out_size) return -1;
            out[op++] = '"';
        } else {
            int tl = (int)strlen(tmp);
            if (op + tl >= out_size) return -1;
            memcpy(out + op, tmp, tl);
            op += tl;
        }
    }

    if (op + 2 > out_size) return -1;
    out[op++] = '}';
    out[op] = '\0';
    return op;
}
