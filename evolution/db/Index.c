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
                snprintf(idxPath, idxPathSize, "%u:%s:%u",
                         indexes[i].table_id, indexes[i].index_name,
                         indexes[i].root_page);
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
        snprintf(paths[count], 1023, "%u:%s:%u",
                 indexes[i].table_id, indexes[i].index_name,
                 indexes[i].root_page);
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
        snprintf(paths[count], 1023, "%u:%s:%u",
                 indexes[i].table_id, indexes[i].index_name,
                 indexes[i].root_page);
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

/* ── Parse "table_id:index_name:root_page" from legacy path string ── */
static void parse_idx_path(const char *path,
                           uint32_t *table_id, char *idx_name, int name_size,
                           uint32_t *root_page)
{
    /* Format: "table_id:index_name:root_page" */
    char buf[1024];
    strncpy(buf, path, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';

    char *p1 = strchr(buf, ':');
    if (!p1) {
        /* Fallback: just a root_page number */
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
    *root_page = (uint32_t)strtoul(p2 + 1, NULL, 10);
}

/* ── Legacy wrappers for old btree_* functions ──
 * The "path" argument is "table_id:index_name:root_page". */

int btree_search(const char *path, const char *key,
                 char results[][256], int max_results)
{
    uint32_t table_id, root_page;
    char idx_name[256];
    parse_idx_path(path, &table_id, idx_name, sizeof(idx_name), &root_page);
    return sec_idx_search(root_page, key, results, max_results);
}

int btree_insert(const char *path, const char *key, const char *pk)
{
    uint32_t table_id, root_page;
    char idx_name[256];
    parse_idx_path(path, &table_id, idx_name, sizeof(idx_name), &root_page);

    /* Use non-zero sentinel — {0,0} is the "deleted" marker in bt2 */
    RowID marker = { .page_no = 1, .slot_idx = 0 };
    BTree2 tree = { .root_page = root_page };
    char composite_key[BT2_MAX_KEY_LEN + 1];
    sec_idx_make_key(key, pk, composite_key, sizeof(composite_key));
    int rc = bt2_insert(&tree, composite_key, marker);

    /* Update catalog if root_page changed (due to B+ tree split) */
    if (tree.root_page != root_page && table_id != 0 && idx_name[0]) {
        cat_update_index_root(table_id, idx_name, tree.root_page);
    }
    return rc;
}

int btree_delete(const char *path, const char *key, const char *pk)
{
    uint32_t table_id, root_page;
    char idx_name[256];
    parse_idx_path(path, &table_id, idx_name, sizeof(idx_name), &root_page);

    BTree2 tree = { .root_page = root_page };
    char composite_key[BT2_MAX_KEY_LEN + 1];
    sec_idx_make_key(key, pk, composite_key, sizeof(composite_key));
    int rc = bt2_delete(&tree, composite_key);

    /* Update catalog if root_page changed */
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
    strncpy(g_indexName, idxName, sizeof(g_indexName) - 1);
    g_indexName[sizeof(g_indexName) - 1] = '\0';
    strncpy(g_indexTableName, tblName, sizeof(g_indexTableName) - 1);
    g_indexTableName[sizeof(g_indexTableName) - 1] = '\0';
    if (colName[0] != '\0') {
        strncpy(g_indexColumnName, colName, sizeof(g_indexColumnName) - 1);
        g_indexColumnName[sizeof(g_indexColumnName) - 1] = '\0';
    }
}

void SetIndexAddColumn(const char *colName)
{
    if (g_indexColumnName[0] != '\0')
        strcat(g_indexColumnName, ",");
    strncat(g_indexColumnName, colName, sizeof(g_indexColumnName) - strlen(g_indexColumnName) - 1);
}

void SetIndexUnique(void)
{
    g_indexUnique = 1;
}

void SetIndexIfNotExists(void)
{
    g_indexIfNotExists = 1;
}

void SetIndexExpression(ExprNode *expr)
{
    if (!expr) return;
    expr_serialize(expr, g_indexExprDef, sizeof(g_indexExprDef));
}

void SetDropIndexName(const char *idxName)
{
    strncpy(g_indexName, idxName, sizeof(g_indexName) - 1);
    g_indexName[sizeof(g_indexName) - 1] = '\0';
}

/* ── Build composite index key from multiple column values ── */
static int build_composite_key_from_record(const char *colSpec,
                                            const char colNames[][128], int numCols,
                                            const char *record,
                                            char *keyBuf, int keyBufSize)
{
    char recTmp[RECORD_BUF_SIZE];
    strncpy(recTmp, record, sizeof(recTmp) - 1);
    recTmp[sizeof(recTmp) - 1] = '\0';

    const char *vals[64];
    int nv = 0;
    char *t = strtok(recTmp, ";");
    while (t && nv < 64) { vals[nv++] = t; t = strtok(NULL, ";"); }

    char tmp[256];
    strncpy(tmp, colSpec, sizeof(tmp) - 1);
    tmp[sizeof(tmp) - 1] = '\0';

    keyBuf[0] = '\0';
    char *tok = strtok(tmp, ",");
    int first = 1;
    while (tok) {
        int ci, found = 0;
        for (ci = 0; ci < numCols; ci++) {
            if (strcasecmp(colNames[ci], tok) == 0 && ci < nv) {
                if (!first) strncat(keyBuf, "|", keyBufSize - strlen(keyBuf) - 1);
                strncat(keyBuf, vals[ci], keyBufSize - strlen(keyBuf) - 1);
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
    db_table_path(g_indexTableName, tblPath, sizeof(tblPath));

    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc indexCols[CAT_MAX_COLUMNS];
    int indexNCols;
    if (tapi_resolve(tblPath, &td, indexCols, &indexNCols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table '%s' does not exist", g_indexTableName);
        g_gui_error = 1;
        g_indexUnique = 0; g_indexIfNotExists = 0; g_indexExprDef[0] = '\0';
        return -1;
    }

    /* Verify all columns exist */
    {
        char colCheck[256];
        strncpy(colCheck, g_indexColumnName, sizeof(colCheck) - 1);
        colCheck[sizeof(colCheck) - 1] = '\0';
        char *ct = strtok(colCheck, ",");
        while (ct) {
            int found = 0, i;
            for (i = 0; i < indexNCols; i++) {
                if (strcasecmp(indexCols[i].col_name, ct) == 0) { found = 1; break; }
            }
            if (!found) {
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "column '%s' does not exist in table '%s'",
                         ct, g_indexTableName);
                g_gui_error = 1;
                g_indexUnique = 0; g_indexIfNotExists = 0; g_indexExprDef[0] = '\0';
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
            if (strcasecmp(existing[i].col_list, g_indexColumnName) == 0 &&
                existing[i].index_type != 'P') {
                if (g_indexIfNotExists) {
                    g_indexUnique = 0; g_indexIfNotExists = 0; g_indexExprDef[0] = '\0';
                    return 0;
                }
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "index already exists on column '%s'", g_indexColumnName);
                g_gui_error = 1;
                g_indexUnique = 0; g_indexIfNotExists = 0; g_indexExprDef[0] = '\0';
                return -1;
            }
        }
    }

    /* Create B+ tree for secondary index */
    BTree2 idx_tree;
    if (bt2_create(&idx_tree) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "failed to create index B+ tree");
        g_gui_error = 1;
        g_indexUnique = 0; g_indexIfNotExists = 0; g_indexExprDef[0] = '\0';
        return -1;
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
        int isComposite = (strchr(g_indexColumnName, ',') != NULL);
        int isExprIndex = (g_indexExprDef[0] != '\0');

        /* Deserialize expression for expression indexes */
        ExprNode *idxExpr = NULL;
        if (isExprIndex)
            idxExpr = expr_deserialize(g_indexExprDef);

        TableScanCursor scanCur;
        char pkBuf[256];
        char recBuf[RECORD_BUF_SIZE];

        if (tapi_scan_begin(&td, &scanCur) == 0) {
            while (tapi_scan_next(&scanCur, pkBuf, recBuf, sizeof(recBuf)) == 0) {
                char idxKey[512] = "";

                if (isExprIndex && idxExpr) {
                    /* Evaluate expression against row to get index key */
                    char colValues[64][256];
                    int nv = 0;
                    char recTmp[RECORD_BUF_SIZE];
                    strncpy(recTmp, recBuf, sizeof(recTmp) - 1);
                    recTmp[sizeof(recTmp) - 1] = '\0';
                    char *t = strtok(recTmp, ";");
                    while (t && nv < 64) {
                        strncpy(colValues[nv], t, 255);
                        colValues[nv][255] = '\0';
                        nv++;
                        t = strtok(NULL, ";");
                    }
                    expr_evaluate(idxExpr,
                                  (const char (*)[128])colNames,
                                  (const char (*)[256])colValues,
                                  numCols, idxKey, sizeof(idxKey));
                } else if (isComposite) {
                    build_composite_key_from_record(g_indexColumnName,
                        (const char (*)[128])colNames, numCols, recBuf,
                        idxKey, sizeof(idxKey));
                } else {
                    int colIdx = -1, ci;
                    for (ci = 0; ci < numCols; ci++) {
                        if (strcasecmp(colNames[ci], g_indexColumnName) == 0)
                            { colIdx = ci; break; }
                    }
                    if (colIdx >= 0) {
                        char tmp[RECORD_BUF_SIZE];
                        strncpy(tmp, recBuf, sizeof(tmp) - 1);
                        tmp[sizeof(tmp) - 1] = '\0';
                        char *tok = strtok(tmp, ";");
                        ci = 0;
                        while (tok && ci <= colIdx) {
                            if (ci == colIdx) {
                                strncpy(idxKey, tok, sizeof(idxKey) - 1);
                                break;
                            }
                            ci++;
                            tok = strtok(NULL, ";");
                        }
                    }
                }

                if (idxKey[0]) {
                    if (g_indexUnique) {
                        /* Check for duplicate */
                        char dupCheck[1][256];
                        if (sec_idx_search(idx_tree.root_page, idxKey, dupCheck, 1) > 0) {
                            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                     "could not create unique index: duplicate key '%s'",
                                     idxKey);
                            g_gui_error = 1;
                            bt2_destroy(&idx_tree);
                            g_indexUnique = 0; g_indexIfNotExists = 0; g_indexExprDef[0] = '\0';
                            return -1;
                        }
                    }

                    /* Build composite key: indexed_value + SEP + PK */
                    char compositeKey[BT2_MAX_KEY_LEN + 1];
                    sec_idx_make_key(idxKey, pkBuf, compositeKey, sizeof(compositeKey));

                    /* Get the RowID from PK tree for direct heap access */
                    BTree2 pk_tree = tapi_pk_tree(&td);
                    RowID heap_rid;
                    if (bt2_search(&pk_tree, pkBuf, &heap_rid) == 0) {
                        bt2_insert(&idx_tree, compositeKey, heap_rid);
                    }
                }
            }
        }
    }

    /* Register index in catalog */
    char idx_type = g_indexUnique ? 'U' : 'N';
    cat_create_index_ex(td.table_id, g_indexName, idx_tree.root_page,
                        g_indexColumnName, idx_type,
                        g_indexExprDef[0] ? g_indexExprDef : NULL);

    printf("Index '%s' created on %s(%s)%s%s.\n",
           g_indexName, g_indexTableName, g_indexColumnName,
           g_indexUnique ? " [UNIQUE]" : "",
           g_indexExprDef[0] ? " [EXPRESSION]" : "");
    g_indexUnique = 0;
    g_indexIfNotExists = 0;
    g_indexExprDef[0] = '\0';
    return 0;
}

/* ── DROP INDEX ── */
int DropIndexProcess(void)
{
    /* Find the index by name across all tables */
    IndexDesc idx;
    if (cat_find_index_by_name(g_indexName, &idx) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "index '%s' does not exist", g_indexName);
        g_gui_error = 1;
        return -1;
    }

    /* Prevent dropping PK index */
    if (idx.index_type == 'P') {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "cannot drop primary key index '%s'", g_indexName);
        g_gui_error = 1;
        return -1;
    }

    /* Destroy B+ tree pages */
    BTree2 idx_tree = { .root_page = idx.root_page };
    bt2_destroy(&idx_tree);

    /* Remove from catalog */
    cat_drop_index(idx.table_id, g_indexName);

    printf("Index '%s' dropped.\n", g_indexName);
    return 0;
}
