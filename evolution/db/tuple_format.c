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
    int nullArr[64];
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
    const char *valPtrs[64];
    int nullFlags[64];
    int n = nfields < 64 ? nfields : 64;
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
