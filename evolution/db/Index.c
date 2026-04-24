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
#ifdef __linux__
#include <sched.h>          /* sched_yield */
#endif
#include "database.h"
#include "expression.h"
#include "FullText.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "hash_idx.h"
#include "tuple_format.h"
#include "hnsw.h"

#define CONC_BATCH_SIZE 100  /* rows per batch for CONCURRENTLY populate */
#define CONC_MOD_LOG_INIT_CAP 256

/* Separator between indexed value and PK in secondary index keys.
 * Using \x1F (Unit Separator) — sorts before printable chars, won't appear in data */
#define SEC_IDX_SEP '\x1f'

/* Mutex callback struct — used by Phase2/Phase3 to lock/unlock without
 * including platform.h.  Single definition, also matched in query_executor.c. */
typedef struct { void (*lock)(void*); void (*unlock)(void*); void *mtx; } MutexOps;

/* Reset all g_idx flags to default after index create completes or fails. */
static void idx_reset_flags(void)
{
    g_idx.concurrent = 0;
    g_idx.unique = 0;
    g_idx.ifNotExists = 0;
    g_idx.exprDef[0] = '\0';
    g_idx.usingHash = 0;
    g_idx.fulltext = 0;
}

/* ── Concurrent index build modification log ── */

static void conc_mod_log_init(uint32_t table_id,
                               const char *col_name, const char *expr_def)
{
    g_conc_mod_log.table_id = table_id;
    g_conc_mod_log.count = 0;
    g_conc_mod_log.capacity = CONC_MOD_LOG_INIT_CAP;
    strncpy(g_conc_mod_log.col_name, col_name, sizeof(g_conc_mod_log.col_name) - 1);
    g_conc_mod_log.col_name[sizeof(g_conc_mod_log.col_name) - 1] = '\0';
    g_conc_mod_log.expr_def[0] = '\0';
    if (expr_def && expr_def[0])
        strncpy(g_conc_mod_log.expr_def, expr_def,
                sizeof(g_conc_mod_log.expr_def) - 1);
    g_conc_mod_log.pks = malloc(sizeof(char *) * CONC_MOD_LOG_INIT_CAP);
    g_conc_mod_log.old_keys = malloc(sizeof(char *) * CONC_MOD_LOG_INIT_CAP);
    if (!g_conc_mod_log.pks || !g_conc_mod_log.old_keys) {
        free(g_conc_mod_log.pks);
        free(g_conc_mod_log.old_keys);
        g_conc_mod_log.pks = NULL;
        g_conc_mod_log.old_keys = NULL;
        g_conc_mod_log.capacity = 0;
        g_conc_mod_log.active = 0;
        return;
    }
    g_conc_mod_log.active = 1;
}

/* Grow both parallel arrays. Returns 0 on success, -1 on OOM. */
static int conc_mod_log_grow(void)
{
    int new_cap = g_conc_mod_log.capacity * 2;
    char **tmp_pk = realloc(g_conc_mod_log.pks, sizeof(char *) * new_cap);
    if (!tmp_pk) return -1;
    g_conc_mod_log.pks = tmp_pk;
    char **tmp_ok = realloc(g_conc_mod_log.old_keys, sizeof(char *) * new_cap);
    if (!tmp_ok) return -1;
    g_conc_mod_log.old_keys = tmp_ok;
    g_conc_mod_log.capacity = new_cap;
    return 0;
}

/* Append for INSERT — no old value. */
void conc_mod_log_append(uint32_t table_id, const char *pk_key)
{
    if (!g_conc_mod_log.active) return;
    if (table_id != g_conc_mod_log.table_id) return;
    if (!pk_key || !pk_key[0]) return;

    if (g_conc_mod_log.count >= g_conc_mod_log.capacity)
        if (conc_mod_log_grow() < 0) return;
    char *dup = strdup(pk_key);
    if (!dup) return;
    int idx = g_conc_mod_log.count++;
    g_conc_mod_log.pks[idx] = dup;
    g_conc_mod_log.old_keys[idx] = NULL;  /* INSERT — no old value */
}

/* Append for DELETE/UPDATE — builds old composite key from field arrays. */
void conc_mod_log_record(uint32_t table_id, const char *pk_key,
                          const char *col_names_buf, int name_stride,
                          const char *col_values_buf, int val_stride,
                          int num_cols)
{
    if (!g_conc_mod_log.active) return;
    if (table_id != g_conc_mod_log.table_id) return;
    if (!pk_key || !pk_key[0]) return;

    /* Build old indexed value using stored column info */
    char old_val[512] = "";
    const char *cn = g_conc_mod_log.col_name;

    if (g_conc_mod_log.expr_def[0]) {
        /* Expression index — build a temp IndexDesc for idx_build_key_ex */
        IndexDesc tmp_idx;
        memset(&tmp_idx, 0, sizeof(tmp_idx));
        strncpy(tmp_idx.col_list, cn, sizeof(tmp_idx.col_list) - 1);
        strncpy(tmp_idx.expr_def, g_conc_mod_log.expr_def,
                sizeof(tmp_idx.expr_def) - 1);
        idx_build_key_ex(&tmp_idx, col_names_buf, name_stride,
                         col_values_buf, val_stride, num_cols,
                         old_val, sizeof(old_val));
    } else if (strchr(cn, ',')) {
        /* Composite index */
        IndexDesc tmp_idx;
        memset(&tmp_idx, 0, sizeof(tmp_idx));
        strncpy(tmp_idx.col_list, cn, sizeof(tmp_idx.col_list) - 1);
        idx_build_key_ex(&tmp_idx, col_names_buf, name_stride,
                         col_values_buf, val_stride, num_cols,
                         old_val, sizeof(old_val));
    } else {
        /* Single column — direct lookup */
        for (int i = 0; i < num_cols; i++) {
            const char *name = col_names_buf + i * name_stride;
            if (strcasecmp(name, cn) == 0) {
                const char *val = col_values_buf + i * val_stride;
                strncpy(old_val, val, sizeof(old_val) - 1);
                break;
            }
        }
    }

    if (g_conc_mod_log.count >= g_conc_mod_log.capacity)
        if (conc_mod_log_grow() < 0) return;
    char *dup_pk = strdup(pk_key);
    if (!dup_pk) return;
    int i = g_conc_mod_log.count++;
    g_conc_mod_log.pks[i] = dup_pk;

    if (old_val[0]) {
        /* Build composite key: "old_val\x1fPK" */
        char composite[BT2_MAX_KEY_LEN + 1];
        snprintf(composite, sizeof(composite), "%s%c%s",
                 old_val, SEC_IDX_SEP, pk_key);
        g_conc_mod_log.old_keys[i] = strdup(composite);
    } else {
        g_conc_mod_log.old_keys[i] = NULL;
    }
}

static void conc_mod_log_clear(void)
{
    for (int i = 0; i < g_conc_mod_log.count; i++) {
        free(g_conc_mod_log.pks[i]);
        free(g_conc_mod_log.old_keys[i]);
    }
    free(g_conc_mod_log.pks);
    free(g_conc_mod_log.old_keys);
    g_conc_mod_log.pks = NULL;
    g_conc_mod_log.old_keys = NULL;
    g_conc_mod_log.count = 0;
    g_conc_mod_log.capacity = 0;
    g_conc_mod_log.active = 0;
    g_conc_mod_log.table_id = 0;
}

/* Deduplicate in-place — keep FIRST old_key per PK. */
static void conc_mod_log_dedup(void)
{
    if (g_conc_mod_log.count <= 1) return;
    int w = 0;
    for (int r = 0; r < g_conc_mod_log.count; r++) {
        int dup = 0;
        for (int j = 0; j < w; j++) {
            if (strcmp(g_conc_mod_log.pks[r], g_conc_mod_log.pks[j]) == 0) {
                dup = 1; break;
            }
        }
        if (dup) {
            free(g_conc_mod_log.pks[r]);
            free(g_conc_mod_log.old_keys[r]);
        } else {
            g_conc_mod_log.pks[w] = g_conc_mod_log.pks[r];
            g_conc_mod_log.old_keys[w] = g_conc_mod_log.old_keys[r];
            w++;
        }
    }
    g_conc_mod_log.count = w;
}

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
        if (all[i].is_ready != IDX_READY) continue;  /* skip CONCURRENTLY building */
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

void SetIndexUsingHnsw(int distance_kind, int m, int ef_construction)
{
    g_idx.usingHnsw = 1;
    g_idx.hnswDistanceKind   = distance_kind;
    g_idx.hnswM              = m > 0 ? m : 16;
    g_idx.hnswEfConstruction = ef_construction > 0 ? ef_construction : 64;
}

void SetIndexFulltext(void)
{
    g_idx.fulltext = 1;
}

void SetIndexConcurrent(void)
{
    g_idx.concurrent = 1;
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
    char fields[CAT_MAX_COLUMNS][256];
    int is_null[CAT_MAX_COLUMNS];
    int nf = tup_extract_fields(record, recLen, cols, ncols, fields, is_null, CAT_MAX_COLUMNS);
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
        char cn[CAT_MAX_COLUMNS][128], cv[CAT_MAX_COLUMNS][256];
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

    /* Verify all columns exist; reject ARRAY columns in v1 (Task 90) */
    {
        char colCheck[256];
        strncpy(colCheck, g_idx.columnName, sizeof(colCheck) - 1);
        colCheck[sizeof(colCheck) - 1] = '\0';
        char *ct = strtok(colCheck, ",");
        while (ct) {
            int found = 0, i, found_idx = -1;
            for (i = 0; i < indexNCols; i++) {
                if (strcasecmp(indexCols[i].col_name, ct) == 0) { found = 1; found_idx = i; break; }
            }
            if (!found) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "column '%s' does not exist in table '%s'",
                         ct, g_idx.tableName);
                g_err.error = 1;
                g_idx.unique = 0; g_idx.ifNotExists = 0; g_idx.exprDef[0] = '\0';
                return -1;
            }
            if (tup_is_array(indexCols[found_idx].type_code)) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "cannot create index on array column '%s' (not supported in v1)",
                         ct);
                g_err.error = 1;
                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FEATURE_NOT_SUPPORTED);
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

    /* HNSW ANN (Task 202 — Feature #202) — no on-disk btree, graph lives
     * in memory; build via scan. Catalog entry records params so a v1.1
     * boot-time rebuild can replay. */
    if (g_idx.usingHnsw) {
        char colName[256];
        strncpy(colName, g_idx.columnName, sizeof(colName) - 1);
        colName[sizeof(colName) - 1] = '\0';
        /* Single-column only in v1 */
        if (strchr(colName, ',') != NULL) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "HNSW index supports a single vector column in v1");
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FEATURE_NOT_SUPPORTED);
            g_idx.unique = 0; g_idx.ifNotExists = 0;
            g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0; g_idx.usingHnsw = 0;
            return -1;
        }
        int found_idx = -1;
        for (int i = 0; i < indexNCols; i++) {
            if (strcasecmp(indexCols[i].col_name, colName) == 0) {
                found_idx = i; break;
            }
        }
        if (found_idx < 0 || !tup_is_vector(indexCols[found_idx].type_code)) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "HNSW index requires a VECTOR column, got '%s'", colName);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE);
            g_idx.unique = 0; g_idx.ifNotExists = 0;
            g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0; g_idx.usingHnsw = 0;
            return -1;
        }

        /* Register the index in the catalog with type 'A'. root_page is 0
         * (no on-disk tree); params packed into expr_def slot for future
         * auto-rebuild. */
        char paramBuf[128];
        snprintf(paramBuf, sizeof(paramBuf), "HNSW:d=%d,m=%d,ef=%d",
                 g_idx.hnswDistanceKind, g_idx.hnswM, g_idx.hnswEfConstruction);
        cat_create_index_ex(td.table_id, g_idx.name, 0,
                            g_idx.columnName, 'A', paramBuf);
        cat_update_index_ready(td.table_id, g_idx.name, IDX_READY);

        if (hnsw_build(td.table_id, g_idx.name, colName,
                       g_idx.hnswDistanceKind,
                       g_idx.hnswM, g_idx.hnswEfConstruction) != 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "hnsw_build failed for index '%s'", g_idx.name);
            g_err.error = 1;
            g_idx.unique = 0; g_idx.ifNotExists = 0;
            g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0; g_idx.usingHnsw = 0;
            return -1;
        }

        g_idx.unique = 0; g_idx.ifNotExists = 0;
        g_idx.exprDef[0] = '\0'; g_idx.usingHash = 0; g_idx.usingHnsw = 0;
        return 0;
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

    /* Determine index type */
    char idx_type;
    if (g_idx.fulltext)
        idx_type = 'F';          /* Task 86: full-text inverted index */
    else if (useHash)
        idx_type = g_idx.unique ? 'V' : 'H';
    else
        idx_type = g_idx.unique ? 'U' : 'N';

    /* CONCURRENTLY: register as IDX_BUILDING, save state, skip population.
     * Phase2 will populate with batch-unlock pattern post-parse. */
    if (g_idx.concurrent) {
        cat_create_index_ex(td.table_id, g_idx.name, idx_root,
                            g_idx.columnName, idx_type,
                            g_idx.exprDef[0] ? g_idx.exprDef : NULL);
        cat_update_index_ready(td.table_id, g_idx.name, IDX_BUILDING);
        g_idx.concTableId = td.table_id;
        g_idx.concRootPage = idx_root;
        /* Don't reset flags — Phase2 needs them */
        return 0;
    }

    /* Fulltext population path: tokenize text column, insert one (word, pk)
     * pair per token into the B+ tree. Bypasses the generic key-builder since
     * FT is a one-column-text-only index. */
    if (g_idx.fulltext) {
        int colIdx = -1;
        for (int ci = 0; ci < indexNCols; ci++) {
            if (strcasecmp(indexCols[ci].col_name, g_idx.columnName) == 0) {
                colIdx = ci; break;
            }
        }
        if (colIdx < 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "FULLTEXT: column '%s' not found", g_idx.columnName);
            g_err.error = 1;
            bt2_destroy(&idx_tree);
            idx_reset_flags();
            return -1;
        }

        /* CREATE INDEX runs under the DML mutex, so the table is quiesced:
         * no MVCC filtering is needed here. Use bt2_cursor directly so
         * each row's heap RowID comes back with the PK key — avoids a
         * second bt2_search(&pk_tree, ...) per row. */
        BTree2 pk_tree = tapi_pk_tree(&td);
        BTree2Cursor cur;
        if (bt2_cursor_first(&pk_tree, &cur) == 0) {
            char pkBuf[BT2_MAX_KEY_LEN + 1];
            RowID heap_rid;
            char recBuf[RECORD_BUF_SIZE];
            while (bt2_cursor_next(&cur, pkBuf, &heap_rid) == 0) {
                int rec_len = tapi_heap_read(heap_rid, recBuf, sizeof(recBuf));
                if (rec_len < 0) continue;

                char colValues[CAT_MAX_COLUMNS][256];
                int  nullArr[CAT_MAX_COLUMNS];
                int  nv = tup_extract_fields(recBuf, rec_len,
                                             indexCols, indexNCols,
                                             colValues, nullArr, 64);
                if (colIdx >= nv || nullArr[colIdx]) continue;

                char tokens[FT_MAX_TOKENS][FT_MAX_TOKEN_LEN];
                int n_tok = ft_tokenize(colValues[colIdx], tokens, FT_MAX_TOKENS);

                for (int t = 0; t < n_tok; t++) {
                    char key[BT2_MAX_KEY_LEN + 1];
                    if (ft_build_key(tokens[t], pkBuf, key, sizeof(key)) < 0)
                        continue;
                    bt2_insert(&idx_tree, key, heap_rid);
                }
            }
        }

        idx_root = idx_tree.root_page;
        cat_create_index_ex(td.table_id, g_idx.name, idx_root,
                            g_idx.columnName, idx_type,
                            NULL);
        /* FIXME(Task 86 v2): incremental INSERT/UPDATE/DELETE maintenance
         * for 'F'-type indexes is not implemented. The MATCH evaluator
         * currently scans the heap + tokenizes per row rather than using
         * the index, so results remain correct as long as no caller
         * starts issuing index-backed lookups. Rebuild the index with
         * CREATE FULLTEXT INDEX after bulk DML. */
        printf("Index '%s' created on %s(%s) [FULLTEXT — NOTE: index is "
               "not auto-maintained on INSERT/UPDATE/DELETE; rebuild "
               "after bulk DML].\n",
               g_idx.name, g_idx.tableName, g_idx.columnName);
        idx_reset_flags();
        return 0;
    }

    /* Populate index from existing rows */
    {
        char colNames[CAT_MAX_COLUMNS][128];
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
                char colValues[CAT_MAX_COLUMNS][256];
                int nullArr[CAT_MAX_COLUMNS];
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
    cat_create_index_ex(td.table_id, g_idx.name, idx_root,
                        g_idx.columnName, idx_type,
                        g_idx.exprDef[0] ? g_idx.exprDef : NULL);

    printf("Index '%s' created on %s(%s)%s%s%s.\n",
           g_idx.name, g_idx.tableName, g_idx.columnName,
           g_idx.unique ? " [UNIQUE]" : "",
           useHash ? " [HASH]" : "",
           g_idx.exprDef[0] ? " [EXPRESSION]" : "");
    idx_reset_flags();
    return 0;
}

/* ── CREATE INDEX CONCURRENTLY — Phase 2 (batch-unlock populate) ──
 * Called AFTER yyparse with mutex RELEASED.
 * mutex_ptr points to a MutexOps struct (defined at file scope above). */
int CreateIndexConcurrentlyPhase2(void *mutex_ptr)
{
    MutexOps *ops = (MutexOps *)mutex_ptr;

    char tblPath[1024];
    db_table_path(g_idx.tableName, tblPath, sizeof(tblPath));

    /* Re-resolve table (under lock for first batch) */
    ops->lock(ops->mtx);

    TableDesc td;
    ColumnDesc indexCols[CAT_MAX_COLUMNS];
    int indexNCols;
    if (tapi_resolve(tblPath, &td, indexCols, &indexNCols) < 0) {
        /* Table disappeared between Phase1 and Phase2 */
        cat_drop_index(g_idx.concTableId, g_idx.name);
        ops->unlock(ops->mtx);
        idx_reset_flags();
        return -1;
    }

    /* Activate modification log — DML on this table during Phase 2
     * will append affected PKs so Phase 3 can reconcile. */
    conc_mod_log_init(td.table_id, g_idx.columnName,
                      g_idx.exprDef[0] ? g_idx.exprDef : NULL);

    BTree2 idx_tree = { .root_page = g_idx.concRootPage };
    int isUnique = g_idx.unique;

    char colNames[CAT_MAX_COLUMNS][128];
    int numCols = 0;
    for (int ci = 0; ci < indexNCols && ci < 64; ci++) {
        strncpy(colNames[ci], indexCols[ci].col_name, 127);
        colNames[ci][127] = '\0';
        numCols++;
    }
    int isComposite = (strchr(g_idx.columnName, ',') != NULL);
    int isExprIndex = (g_idx.exprDef[0] != '\0');
    ExprNode *idxExpr = NULL;
    if (isExprIndex)
        idxExpr = expr_deserialize(g_idx.exprDef);

    TableScanCursor scanCur;
    char pkBuf[256];
    char recBuf[RECORD_BUF_SIZE];
    int batch_count = 0;

    if (tapi_scan_begin(&td, &scanCur) == 0) {
        while (tapi_scan_next(&scanCur, pkBuf, recBuf, sizeof(recBuf)) == 0) {
            char idxKey[512] = "";

            int recLen = tup_record_len(recBuf, sizeof(recBuf));
            char colValues[CAT_MAX_COLUMNS][256];
            int nullArr[CAT_MAX_COLUMNS];
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
                if (isUnique) {
                    char dupCheck[1][256];
                    int dupCount = sec_idx_search(idx_tree.root_page, idxKey,
                                                   dupCheck, 1);
                    if (dupCount > 0) {
                        /* Unique violation — drop the partial index */
                        bt2_destroy(&idx_tree);
                        cat_drop_index(g_idx.concTableId, g_idx.name);
                        conc_mod_log_clear();
                        ops->unlock(ops->mtx);
                        idx_reset_flags();
                        return -1;
                    }
                }

                char compositeKey[BT2_MAX_KEY_LEN + 1];
                sec_idx_make_key(idxKey, pkBuf, compositeKey, sizeof(compositeKey));

                BTree2 pk_tree = tapi_pk_tree(&td);
                RowID heap_rid;
                if (bt2_search(&pk_tree, pkBuf, &heap_rid) == 0) {
                    bt2_insert(&idx_tree, compositeKey, heap_rid);
                }
            }

            batch_count++;
            if (batch_count >= CONC_BATCH_SIZE) {
                batch_count = 0;
                /* Batch-unlock: release mutex to let other queries proceed.
                 * Cursor page/slot positions remain valid because:
                 * 1. B+ tree splits only move entries to RIGHT siblings
                 *    (cursor is at current page, entries before it stay put)
                 * 2. Deletes use lazy marking (RowID {0,0}), don't move entries
                 * 3. Phase 3 reconciles any missed/duplicate entries from
                 *    concurrent DML during gaps */
                ops->unlock(ops->mtx);
#ifdef __linux__
                sched_yield();
#endif
                ops->lock(ops->mtx);
            }
        }
    }

    /* Update root page (may have changed due to splits).
     * Do NOT mark IDX_READY yet — Phase 3 will reconcile first. */
    cat_update_index_root(g_idx.concTableId, g_idx.name, idx_tree.root_page);
    g_idx.concRootPage = idx_tree.root_page;

    /* Deactivate log — no more entries accepted */
    g_conc_mod_log.active = 0;

    ops->unlock(ops->mtx);

    /* Don't reset flags — Phase 3 needs them */
    return 0;
}

/* ── CREATE INDEX CONCURRENTLY — Phase 3 (reconcile modifications) ──
 * Runs under mutex. Deduplicates and processes the mod log built during
 * Phase 2.  For each modified PK: reads current row state, ensures the
 * index entry is correct.  Then marks index as IDX_READY. */
int CreateIndexConcurrentlyPhase3(void *mutex_ptr)
{
    MutexOps *ops = (MutexOps *)mutex_ptr;

    ops->lock(ops->mtx);

    /* Deduplicate log before processing */
    conc_mod_log_dedup();

    int logCount = g_conc_mod_log.count;
    if (logCount == 0) {
        /* No modifications during Phase 2 — just mark ready */
        cat_update_index_ready(g_idx.concTableId, g_idx.name, IDX_READY);
        conc_mod_log_clear();
        ops->unlock(ops->mtx);
        idx_reset_flags();
        return 0;
    }

    /* Re-resolve table */
    char tblPath[1024];
    db_table_path(g_idx.tableName, tblPath, sizeof(tblPath));
    TableDesc td;
    ColumnDesc indexCols[CAT_MAX_COLUMNS];
    int indexNCols;
    if (tapi_resolve(tblPath, &td, indexCols, &indexNCols) < 0) {
        conc_mod_log_clear();
        ops->unlock(ops->mtx);
        idx_reset_flags();
        return -1;
    }

    BTree2 idx_tree = { .root_page = g_idx.concRootPage };
    BTree2 pk_tree = tapi_pk_tree(&td);

    char colNames[CAT_MAX_COLUMNS][128];
    int numCols = 0;
    for (int ci = 0; ci < indexNCols && ci < 64; ci++) {
        strncpy(colNames[ci], indexCols[ci].col_name, 127);
        colNames[ci][127] = '\0';
        numCols++;
    }
    int isComposite = (strchr(g_idx.columnName, ',') != NULL);
    int isExprIndex = (g_idx.exprDef[0] != '\0');
    ExprNode *idxExpr = NULL;
    if (isExprIndex)
        idxExpr = expr_deserialize(g_idx.exprDef);

    /* Process each modified PK */
    for (int i = 0; i < logCount; i++) {
        const char *pk = g_conc_mod_log.pks[i];
        const char *old_key = g_conc_mod_log.old_keys[i];

        /* Step 1: Remove old index entry if we have old_key (O(log N)).
         * old_key is the composite "old_val\x1fPK" captured at DML time.
         * bt2_delete returns -1 if not found — safe to ignore. */
        if (old_key && old_key[0])
            bt2_delete(&idx_tree, old_key);

        /* Step 2: If row still exists, insert current value */
        RowID heap_rid;
        if (bt2_search(&pk_tree, pk, &heap_rid) == 0) {
            char recBuf[RECORD_BUF_SIZE];
            if (tapi_heap_read(heap_rid, recBuf, sizeof(recBuf)) < 0)
                continue;

            int recLen = tup_record_len(recBuf, sizeof(recBuf));
            char colValues[CAT_MAX_COLUMNS][256];
            int nullArr[CAT_MAX_COLUMNS];
            int nv = tup_extract_fields(recBuf, recLen, indexCols, indexNCols,
                                         colValues, nullArr, 64);

            char idxKey[512] = "";
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
                char compositeKey[BT2_MAX_KEY_LEN + 1];
                sec_idx_make_key(idxKey, pk, compositeKey, sizeof(compositeKey));
                bt2_insert(&idx_tree, compositeKey, heap_rid);
            }
        }
    }

    /* Update final root page and mark ready */
    cat_update_index_root(g_idx.concTableId, g_idx.name, idx_tree.root_page);
    cat_update_index_ready(g_idx.concTableId, g_idx.name, IDX_READY);

    conc_mod_log_clear();
    ops->unlock(ops->mtx);

    idx_reset_flags();
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

    /* Destroy index pages (hash, B+ tree, or HNSW in-memory graph) */
    if (idx.index_type == 'A') {
        /* HNSW — in-memory only, free the graph */
        hnsw_drop(idx.table_id, g_idx.name);
    } else if (idx.index_type == 'H' || idx.index_type == 'V') {
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
