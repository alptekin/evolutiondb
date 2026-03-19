/*
 * Index.c — Secondary index management for EvoSQL
 *
 * Secondary indexes are stored as B+ trees in the unified storage file.
 * Each secondary index is a bt2 tree where:
 *   Key = "indexed_value\x1fPK_value" (composite for uniqueness)
 *   RowID = heap row location (direct access, no PK lookup needed)
 *
 * Index metadata is stored in the system catalog (CAT_SYS_INDEXES).
 *
 * The \x1F separator between indexed value and PK ensures:
 *   - Unique keys (each row has unique PK)
 *   - Prefix scan on "indexed_value\x1F" finds all matching rows
 *   - Correct sort order (\x1F < any printable character)
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "database.h"
#include "expression.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "hash_idx.h"
#include "tuple_format.h"

/* Separator between indexed value and PK in secondary index keys.
 * Using \x1F (Unit Separator) — sorts before printable chars, won't appear in data */
#define SEC_IDX_SEP '\x1f'

/* ── Secondary index helper: build composite key ── */
static void sec_idx_make_key(const char *indexed_val, const char *pk,
                              char *out, int outSize)
{
    snprintf(out, outSize, "%s%c%s", indexed_val, SEC_IDX_SEP, pk);
}

/* ── Secondary index search: prefix scan returning PK strings ── */
int sec_idx_search(uint32_t root_page, const char *indexed_val,
                   char results[][256], int max_results)
{
    BTree2 tree = { .root_page = root_page };
    char prefix[BT2_MAX_KEY_LEN + 1];
    snprintf(prefix, sizeof(prefix), "%s%c", indexed_val, SEC_IDX_SEP);
    int prefix_len = (int)strlen(prefix);

    BTree2Cursor cur;
    if (bt2_cursor_seek(&tree, prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max_results && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, prefix_len) != 0)
            break;
        /* Extract PK from key (after separator) */
        const char *pk = key + prefix_len;
        strncpy(results[count], pk, 255);
        results[count][255] = '\0';
        count++;
    }
    return count;
}

/* ── Secondary index search returning RowIDs directly ── */
int sec_idx_search_rids(uint32_t root_page, const char *indexed_val,
                        RowID *rids, int max_results)
{
    BTree2 tree = { .root_page = root_page };
    char prefix[BT2_MAX_KEY_LEN + 1];
    snprintf(prefix, sizeof(prefix), "%s%c", indexed_val, SEC_IDX_SEP);
    int prefix_len = (int)strlen(prefix);

    BTree2Cursor cur;
    if (bt2_cursor_seek(&tree, prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max_results && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, prefix_len) != 0)
            break;
        rids[count] = rid;
        count++;
    }
    return count;
}

/* ── Secondary index insert ── */
int sec_idx_insert(uint32_t *root_page, const char *indexed_val,
                   const char *pk, RowID heap_rid)
{
    BTree2 tree = { .root_page = *root_page };
    char key[BT2_MAX_KEY_LEN + 1];
    sec_idx_make_key(indexed_val, pk, key, sizeof(key));
    int rc = bt2_insert(&tree, key, heap_rid);
    *root_page = tree.root_page;
    return rc;
}

/* ── Secondary index delete ── */
int sec_idx_delete(uint32_t *root_page, const char *indexed_val,
                   const char *pk)
{
    BTree2 tree = { .root_page = *root_page };
    char key[BT2_MAX_KEY_LEN + 1];
    sec_idx_make_key(indexed_val, pk, key, sizeof(key));
    int rc = bt2_delete(&tree, key);
    *root_page = tree.root_page;
    return rc;
}

/* ── Load indexes for a table from catalog ──
 * Returns count of secondary indexes found.
 * Fills IndexDesc array for the caller. */
int idx_load_for_table(const char *tableName, IndexDesc *out, int max)
{
    TableDesc td;
    if (tapi_resolve(tableName, &td, NULL, NULL) < 0)
        return 0;
    return cat_list_indexes(td.table_id, out, max);
}

/* ── Check if an index exists on a given column ──
 * Returns 1 if found (fills root_page_out), 0 otherwise. */
int idx_exists_on_col(const char *tableName, const char *colName,
                      uint32_t *root_page_out)
{
    IndexDesc indexes[16];
    int n = idx_load_for_table(tableName, indexes, 16);
    for (int i = 0; i < n; i++) {
        if (indexes[i].index_type == 'P') continue; /* skip PK */
        if (strcasecmp(indexes[i].col_list, colName) == 0) {
            if (root_page_out)
                *root_page_out = indexes[i].root_page;
            return 1;
        }
    }
    return 0;
}

/* ── Legacy wrapper: index_exists ──
 * idxPath format: "table_id:index_name:root_page" */
int index_exists(const char *tblPath, const char *colName,
                 char *idxPath, int idxPathSize)
{
    IndexDesc indexes[16];
    int n = idx_load_for_table(tblPath, indexes, 16);
    for (int i = 0; i < n; i++) {
        if (indexes[i].index_type == 'P') continue;
        if (strcasecmp(indexes[i].col_list, colName) == 0) {
            if (idxPath)
                snprintf(idxPath, idxPathSize, "%u:%s:%u:%c",
                         indexes[i].table_id, indexes[i].index_name,
                         indexes[i].root_page, indexes[i].index_type);
            return 1;
        }
    }
    return 0;
}

/* ── Legacy wrapper: index_list_for_table ── */
/* paths[] format: "table_id:index_name:root_page" — parsed by btree_* wrappers */
int index_list_for_table(const char *tblPath, char names[][256],
                         char cols[][256], char paths[][1024], int max)
{
    IndexDesc indexes[16];
    int n = idx_load_for_table(tblPath, indexes, max < 16 ? max : 16);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (indexes[i].index_type == 'P') continue; /* skip PK index */
        strncpy(names[count], indexes[i].index_name, 255);
        names[count][255] = '\0';
        strncpy(cols[count], indexes[i].col_list, 255);
        cols[count][255] = '\0';
        snprintf(paths[count], 1023, "%u:%s:%u:%c",
                 indexes[i].table_id, indexes[i].index_name,
                 indexes[i].root_page, indexes[i].index_type);
        count++;
    }
    return count;
}

/* ── Legacy wrapper: index_list_with_types ── */
/* paths[] format: "table_id:index_name:root_page" — parsed by btree_* wrappers */
int index_list_with_types(const char *tblPath, char names[][256],
                          char cols[][256], char paths[][1024],
                          char types[], int max)
{
    IndexDesc indexes[16];
    int n = idx_load_for_table(tblPath, indexes, max < 16 ? max : 16);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (indexes[i].index_type == 'P') continue; /* skip PK index */
        strncpy(names[count], indexes[i].index_name, 255);
        names[count][255] = '\0';
        strncpy(cols[count], indexes[i].col_list, 255);
        cols[count][255] = '\0';
        snprintf(paths[count], 1023, "%u:%s:%u:%c",
                 indexes[i].table_id, indexes[i].index_name,
                 indexes[i].root_page, indexes[i].index_type);
        types[count] = indexes[i].index_type;
        count++;
    }
    return count;
}

/* ── Load secondary indexes as IndexDesc array ── */
int idx_load_secondary(const char *tblName, IndexDesc *out, int max)
{
    IndexDesc all[16];
    int n = idx_load_for_table(tblName, all, 16);
    int count = 0;
    for (int i = 0; i < n && count < max; i++) {
        if (all[i].index_type == 'P') continue;
        out[count++] = all[i];
    }
    return count;
}

/* ── Parse "table_id:index_name:root_page[:type]" from legacy path string ── */
static void parse_idx_path(const char *path,
                           uint32_t *table_id, char *idx_name, int name_size,
                           uint32_t *root_page, char *idx_type)
{
    /* Format: "table_id:index_name:root_page[:type]" */
    *idx_type = 'N';  /* default: B+ tree */
    char buf[1024];
    strncpy(buf, path, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';

    char *p1 = strchr(buf, ':');
    if (!p1) {
        *table_id = 0;
        idx_name[0] = '\0';
        *root_page = (uint32_t)strtoul(path, NULL, 10);
        return;
    }
    *p1 = '\0';
    *table_id = (uint32_t)strtoul(buf, NULL, 10);

    char *p2 = strchr(p1 + 1, ':');
    if (!p2) {
        idx_name[0] = '\0';
        *root_page = (uint32_t)strtoul(p1 + 1, NULL, 10);
        return;
    }
    *p2 = '\0';
    strncpy(idx_name, p1 + 1, name_size - 1);
    idx_name[name_size - 1] = '\0';

    /* Check for optional 4th field: type char */
    char *p3 = strchr(p2 + 1, ':');
    if (p3) {
        *p3 = '\0';
        *root_page = (uint32_t)strtoul(p2 + 1, NULL, 10);
        *idx_type = *(p3 + 1);
    } else {
        *root_page = (uint32_t)strtoul(p2 + 1, NULL, 10);
    }
}

/* ── Helper: is this a hash index type? ── */
static int is_hash_type(char t) { return t == 'H' || t == 'V'; }

/* ── Legacy wrappers for btree_* functions ──
 * The "path" argument is "table_id:index_name:root_page[:type]". */

int btree_search(const char *path, const char *key,
                 char results[][256], int max_results)
{
    uint32_t table_id, root_page;
    char idx_name[256], idx_type;
    parse_idx_path(path, &table_id, idx_name, sizeof(idx_name), &root_page, &idx_type);

    if (is_hash_type(idx_type)) {
        HashIndex hi = { .dir_page = root_page };
        return hash_idx_search(&hi, key, results, max_results);
    }
    return sec_idx_search(root_page, key, results, max_results);
}

int btree_insert(const char *path, const char *key, const char *pk)
{
    uint32_t table_id, root_page;
    char idx_name[256], idx_type;
    parse_idx_path(path, &table_id, idx_name, sizeof(idx_name), &root_page, &idx_type);

    char composite_key[BT2_MAX_KEY_LEN + 1];
    sec_idx_make_key(key, pk, composite_key, sizeof(composite_key));

    if (is_hash_type(idx_type)) {
        HashIndex hi = { .dir_page = root_page };
        RowID marker = { .page_no = 1, .slot_idx = 0 };
        return hash_idx_insert(&hi, composite_key, marker);
    }

    RowID marker = { .page_no = 1, .slot_idx = 0 };
    BTree2 tree = { .root_page = root_page };
    int rc = bt2_insert(&tree, composite_key, marker);

    if (tree.root_page != root_page && table_id != 0 && idx_name[0]) {
        cat_update_index_root(table_id, idx_name, tree.root_page);
    }
    return rc;
}

int btree_delete(const char *path, const char *key, const char *pk)
{
    uint32_t table_id, root_page;
    char idx_name[256], idx_type;
    parse_idx_path(path, &table_id, idx_name, sizeof(idx_name), &root_page, &idx_type);

    char composite_key[BT2_MAX_KEY_LEN + 1];
    sec_idx_make_key(key, pk, composite_key, sizeof(composite_key));

    if (is_hash_type(idx_type)) {
        HashIndex hi = { .dir_page = root_page };
        return hash_idx_delete(&hi, composite_key) == 0 ? 1 : 0;
    }

    BTree2 tree = { .root_page = root_page };
    int rc = bt2_delete(&tree, composite_key);

    if (tree.root_page != root_page && table_id != 0 && idx_name[0]) {
        cat_update_index_root(table_id, idx_name, tree.root_page);
    }
    return rc == 0 ? 1 : 0;
}

int btree_create(const char *path)
{
    (void)path;
    return 0;
}

int btree_drop(const char *path)
{
    (void)path;
    return 0;
}

int btree_range(const char *path, const char *lo, const char *hi,
                int lo_inclusive, int hi_inclusive,
                char results[][256], int max_results)
{
    (void)path; (void)lo; (void)hi;
    (void)lo_inclusive; (void)hi_inclusive;
    (void)results; (void)max_results;
    return 0;
}

/* ── Setter functions (parser interface — unchanged) ── */

void SetIndexInfo(const char *idxName, const char *tblName, const char *colName)
{
    strncpy(g_idx.name, idxName, sizeof(g_idx.name) - 1);
    g_idx.name[sizeof(g_idx.name) - 1] = '\0';
    strncpy(g_idx.tableName, tblName, sizeof(g_idx.tableName) - 1);
    g_idx.tableName[sizeof(g_idx.tableName) - 1] = '\0';
    if (colName[0] != '\0') {
        strncpy(g_idx.columnName, colName, sizeof(g_idx.columnName) - 1);
        g_idx.columnName[sizeof(g_idx.columnName) - 1] = '\0';
    }
}

void SetIndexAddColumn(const char *colName)
{
    if (g_idx.columnName[0] != '\0')
        strcat(g_idx.columnName, ",");
    strncat(g_idx.columnName, colName, sizeof(g_idx.columnName) - strlen(g_idx.columnName) - 1);
}

void SetIndexUnique(void)
{
    g_idx.unique = 1;
}

void SetIndexIfNotExists(void)
{
    g_idx.ifNotExists = 1;
}

void SetIndexExpression(ExprNode *expr)
{
    if (!expr) return;
    expr_serialize(expr, g_idx.exprDef, sizeof(g_idx.exprDef));
}

void SetIndexUsingHash(void)
{
    g_idx.usingHash = 1;
}

void SetDropIndexName(const char *idxName)
{
    strncpy(g_idx.name, idxName, sizeof(g_idx.name) - 1);
    g_idx.name[sizeof(g_idx.name) - 1] = '\0';
}

/* ── Build composite index key from multiple column values ── */
static int build_composite_key_from_record(const char *colSpec,
                                            const char colNames[][128], int numCols,
                                            const ColumnDesc *cols, int ncols,
                                            const char *record, int recLen,
                                            char *keyBuf, int keyBufSize)
{
    char fields[64][256];
    int is_null[64];
    int nf = tup_extract_fields(record, recLen, cols, ncols, fields, is_null, 64);
    if (nf <= 0) return 0;

    /* Parse colSpec with strtok(",") — column name list, not record data */
    char tmp[256];
    strncpy(tmp, colSpec, sizeof(tmp) - 1);
    tmp[sizeof(tmp) - 1] = '\0';

    keyBuf[0] = '\0';
    char *tok = strtok(tmp, ",");
    int first = 1;
    while (tok) {
        int ci, found = 0;
        for (ci = 0; ci < numCols; ci++) {
            if (strcasecmp(colNames[ci], tok) == 0 && ci < nf) {
                if (!first) strncat(keyBuf, "|", keyBufSize - strlen(keyBuf) - 1);
                strncat(keyBuf, fields[ci], keyBufSize - strlen(keyBuf) - 1);
                found = 1;
                first = 0;
                break;
            }
        }
        if (!found) return 0;
        tok = strtok(NULL, ",");
    }
    return keyBuf[0] != '\0';
}

/* ── Build index key for a given IndexDesc from row data ──
 * Returns 1 if key was built, 0 if failed.
 * For expression indexes: evaluates the stored RPN expression.
 * For composite indexes: joins column values with '|'.
 * For single-column indexes: copies the column value. */
int idx_build_key_ex(const IndexDesc *idx,
                     const char *colNamesBuf, int nameStride,
                     const char *colValuesBuf, int valueStride,
                     int numCols,
                     char *keyBuf, int keyBufSize)
{
    keyBuf[0] = '\0';

    /* Helper macros for accessing strided arrays */
    #define COLNAME(i)  (colNamesBuf  + (i) * nameStride)
    #define COLVALUE(i) (colValuesBuf + (i) * valueStride)

    if (idx->expr_def[0]) {
        /* Expression index: need 128/256 arrays for expr_evaluate */
        char cn[64][128], cv[64][256];
        int n = numCols < 64 ? numCols : 64;
        for (int i = 0; i < n; i++) {
            strncpy(cn[i], COLNAME(i), 127); cn[i][127] = '\0';
            strncpy(cv[i], COLVALUE(i), 255); cv[i][255] = '\0';
        }
        ExprNode *idxExpr = expr_deserialize(idx->expr_def);
        if (!idxExpr) { return 0; }
        int rc = expr_evaluate(idxExpr, (const char (*)[128])cn,
                               (const char (*)[256])cv, n,
                               keyBuf, keyBufSize);
        return rc;
    }

    if (strchr(idx->col_list, ',')) {
        /* Composite index */
        char colSpec[256];
        strncpy(colSpec, idx->col_list, sizeof(colSpec) - 1);
        colSpec[sizeof(colSpec) - 1] = '\0';
        char *tok = strtok(colSpec, ",");
        int first = 1;
        while (tok) {
            for (int ci = 0; ci < numCols; ci++) {
                if (strcasecmp(COLNAME(ci), tok) == 0) {
                    if (!first) strncat(keyBuf, "|", keyBufSize - strlen(keyBuf) - 1);
                    strncat(keyBuf, COLVALUE(ci), keyBufSize - strlen(keyBuf) - 1);
                    first = 0;
                    break;
                }
            }
            tok = strtok(NULL, ",");
        }
        return keyBuf[0] != '\0';
    }

    /* Single column */
    for (int ci = 0; ci < numCols; ci++) {
        if (strcasecmp(COLNAME(ci), idx->col_list) == 0) {
            strncpy(keyBuf, COLVALUE(ci), keyBufSize - 1);
            keyBuf[keyBufSize - 1] = '\0';
            return 1;
        }
    }

    #undef COLNAME
    #undef COLVALUE
    return 0;
}

/* Convenience wrapper for [128]/[256] arrays */
int idx_build_key(const IndexDesc *idx,
                  const char colNames[][128], int numCols,
                  const char colValues[][256],
                  char *keyBuf, int keyBufSize)
{
    return idx_build_key_ex(idx, (const char *)colNames, 128,
                            (const char *)colValues, 256,
                            numCols, keyBuf, keyBufSize);
}

/* ── CREATE INDEX ── */
int CreateIndexProcess(void)
{
    char tblPath[1024];
    db_table_path(g_idx.tableName, tblPath, sizeof(tblPath));

    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc indexCols[CAT_MAX_COLUMNS];
    int indexNCols;
    if (tapi_resolve(tblPath, &td, indexCols, &indexNCols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table '%s' does not exist", g_idx.tableName);
        g_err.error = 1;
        g_idx.unique = 0; g_idx.ifNotExists = 0; g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0;
        return -1;
    }

    /* Verify all columns exist */
    {
        char colCheck[256];
        strncpy(colCheck, g_idx.columnName, sizeof(colCheck) - 1);
        colCheck[sizeof(colCheck) - 1] = '\0';
        char *ct = strtok(colCheck, ",");
        while (ct) {
            int found = 0, i;
            for (i = 0; i < indexNCols; i++) {
                if (strcasecmp(indexCols[i].col_name, ct) == 0) { found = 1; break; }
            }
            if (!found) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "column '%s' does not exist in table '%s'",
                         ct, g_idx.tableName);
                g_err.error = 1;
                g_idx.unique = 0; g_idx.ifNotExists = 0; g_idx.exprDef[0] = '\0';
                return -1;
            }
            ct = strtok(NULL, ",");
        }
    }

    /* Check if index already exists on these columns */
    {
        IndexDesc existing[16];
        int n = cat_list_indexes(td.table_id, existing, 16);
        for (int i = 0; i < n; i++) {
            if (strcasecmp(existing[i].col_list, g_idx.columnName) == 0 &&
                existing[i].index_type != 'P') {
                if (g_idx.ifNotExists) {
                    g_idx.unique = 0; g_idx.ifNotExists = 0; g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0;
                    return 0;
                }
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "index already exists on column '%s'", g_idx.columnName);
                g_err.error = 1;
                g_idx.unique = 0; g_idx.ifNotExists = 0; g_idx.exprDef[0] = '\0';
                return -1;
            }
        }
    }

    /* Create index structure (B+ tree or hash) */
    int useHash = g_idx.usingHash;
    BTree2 idx_tree = { .root_page = 0 };
    HashIndex hash_idx = { .dir_page = 0 };
    uint32_t idx_root = 0;

    if (useHash) {
        if (hash_idx_create(&hash_idx, HASH_DEFAULT_BUCKETS) < 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "failed to create hash index");
            g_err.error = 1;
            g_idx.unique = 0; g_idx.ifNotExists = 0;
            g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0;
            return -1;
        }
        idx_root = hash_idx.dir_page;
    } else {
        if (bt2_create(&idx_tree) < 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "failed to create index B+ tree");
            g_err.error = 1;
            g_idx.unique = 0; g_idx.ifNotExists = 0;
            g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0;
            return -1;
        }
        idx_root = idx_tree.root_page;
    }

    /* Populate index from existing rows */
    {
        char colNames[64][128];
        int numCols = 0;
        for (int ci = 0; ci < indexNCols && ci < 64; ci++) {
            strncpy(colNames[ci], indexCols[ci].col_name, 127);
            colNames[ci][127] = '\0';
            numCols++;
        }
        int isComposite = (strchr(g_idx.columnName, ',') != NULL);
        int isExprIndex = (g_idx.exprDef[0] != '\0');

        /* Deserialize expression for expression indexes */
        ExprNode *idxExpr = NULL;
        if (isExprIndex)
            idxExpr = expr_deserialize(g_idx.exprDef);

        TableScanCursor scanCur;
        char pkBuf[256];
        char recBuf[RECORD_BUF_SIZE];

        if (tapi_scan_begin(&td, &scanCur) == 0) {
            while (tapi_scan_next(&scanCur, pkBuf, recBuf, sizeof(recBuf)) == 0) {
                char idxKey[512] = "";

                int recLen = tup_record_len(recBuf, sizeof(recBuf));
                char colValues[64][256];
                int nullArr[64];
                int nv = tup_extract_fields(recBuf, recLen, indexCols, indexNCols,
                                             colValues, nullArr, 64);

                if (isExprIndex && idxExpr) {
                    expr_evaluate(idxExpr,
                                  (const char (*)[128])colNames,
                                  (const char (*)[256])colValues,
                                  numCols, idxKey, sizeof(idxKey));
                } else if (isComposite) {
                    build_composite_key_from_record(g_idx.columnName,
                        (const char (*)[128])colNames, numCols,
                        indexCols, indexNCols, recBuf, recLen,
                        idxKey, sizeof(idxKey));
                } else {
                    int colIdx = -1;
                    for (int ci = 0; ci < numCols; ci++) {
                        if (strcasecmp(colNames[ci], g_idx.columnName) == 0)
                            { colIdx = ci; break; }
                    }
                    if (colIdx >= 0 && colIdx < nv && !nullArr[colIdx])
                        strncpy(idxKey, colValues[colIdx], sizeof(idxKey) - 1);
                }

                if (idxKey[0]) {
                    if (g_idx.unique) {
                        /* Check for duplicate */
                        char dupCheck[1][256];
                        int dupCount = useHash
                            ? hash_idx_search(&hash_idx, idxKey, dupCheck, 1)
                            : sec_idx_search(idx_tree.root_page, idxKey, dupCheck, 1);
                        if (dupCount > 0) {
                            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                                     "could not create unique index: duplicate key '%s'",
                                     idxKey);
                            g_err.error = 1;
                            if (useHash) hash_idx_destroy(&hash_idx);
                            else bt2_destroy(&idx_tree);
                            g_idx.unique = 0; g_idx.ifNotExists = 0;
                            g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0;
                            return -1;
                        }
                    }

                    /* Build composite key: indexed_value + SEP + PK */
                    char compositeKey[BT2_MAX_KEY_LEN + 1];
                    sec_idx_make_key(idxKey, pkBuf, compositeKey, sizeof(compositeKey));

                    BTree2 pk_tree = tapi_pk_tree(&td);
                    RowID heap_rid;
                    if (bt2_search(&pk_tree, pkBuf, &heap_rid) == 0) {
                        if (useHash)
                            hash_idx_insert(&hash_idx, compositeKey, heap_rid);
                        else
                            bt2_insert(&idx_tree, compositeKey, heap_rid);
                    }
                }
            }
        }
    }

    /* Get final root page (may have changed due to splits) */
    idx_root = useHash ? hash_idx.dir_page : idx_tree.root_page;

    /* Register index in catalog */
    char idx_type;
    if (useHash)
        idx_type = g_idx.unique ? 'V' : 'H';
    else
        idx_type = g_idx.unique ? 'U' : 'N';
    cat_create_index_ex(td.table_id, g_idx.name, idx_root,
                        g_idx.columnName, idx_type,
                        g_idx.exprDef[0] ? g_idx.exprDef : NULL);

    printf("Index '%s' created on %s(%s)%s%s%s.\n",
           g_idx.name, g_idx.tableName, g_idx.columnName,
           g_idx.unique ? " [UNIQUE]" : "",
           useHash ? " [HASH]" : "",
           g_idx.exprDef[0] ? " [EXPRESSION]" : "");
    g_idx.unique = 0;
    g_idx.ifNotExists = 0;
    g_idx.exprDef[0] = '\0';
    g_idx.usingHash = 0;
    return 0;
}

/* ── DROP INDEX ── */
int DropIndexProcess(void)
{
    /* Find the index by name across all tables */
    IndexDesc idx;
    if (cat_find_index_by_name(g_idx.name, &idx) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "index '%s' does not exist", g_idx.name);
        g_err.error = 1;
        return -1;
    }

    /* Prevent dropping PK index */
    if (idx.index_type == 'P') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "cannot drop primary key index '%s'", g_idx.name);
        g_err.error = 1;
        return -1;
    }

    /* Destroy index pages (hash or B+ tree) */
    if (idx.index_type == 'H' || idx.index_type == 'V') {
        HashIndex hi = { .dir_page = idx.root_page };
        hash_idx_destroy(&hi);
    } else {
        BTree2 idx_tree = { .root_page = idx.root_page };
        bt2_destroy(&idx_tree);
    }

    /* Remove from catalog */
    cat_drop_index(idx.table_id, g_idx.name);

    printf("Index '%s' dropped.\n", g_idx.name);
    return 0;
}
