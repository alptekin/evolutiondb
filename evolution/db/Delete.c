#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "expression.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "tuple_format.h"
#include "vmap.h"
#include "mvcc.h"
#include "lock_mgr.h"
#include "table_lock.h"

/* Remove secondary index entries for a deleted record.
 * Takes pre-extracted fields instead of raw record. */
static void delete_secondary_indexes(const char *tblName,
                                     const char colNames[][128], int numCols,
                                     const char colVals[][256],
                                     const char *pkKey)
{
    IndexDesc delIdx[16];
    int nIdx = idx_load_secondary(tblName, delIdx, 16);
    if (nIdx <= 0) return;
    for (int ix = 0; ix < nIdx; ix++) {
        char idxKey[512];
        if (idx_build_key(&delIdx[ix],
                (const char (*)[128])colNames, numCols,
                (const char (*)[256])colVals,
                idxKey, sizeof(idxKey)) && idxKey[0]) {
            char idxPath[1024];
            snprintf(idxPath, sizeof(idxPath), "%u:%s:%u:%c",
                     delIdx[ix].table_id, delIdx[ix].index_name,
                     delIdx[ix].root_page, delIdx[ix].index_type);
            btree_delete(idxPath, idxKey, pkKey);
        }
    }
}

/* ---- Multi-table DELETE parser helpers ---- */
void AddDeleteTarget(const char *name)
{
    if (g_del.deleteTargetCount < MAX_JOIN_TABLES) {
        strncpy(g_del.deleteTargets[g_del.deleteTargetCount], name, 255);
        g_del.deleteTargets[g_del.deleteTargetCount][255] = '\0';
        g_del.deleteTargetCount++;
    }
}

void SetMultiDelete(void)
{
    g_del.multiDelete = 1;
}

/* Find a table by table_id across all schemas in current database.
 * Returns 0 on success, -1 on not found. */
static int resolve_table_by_id(uint32_t table_id, TableDesc *outTd,
                                ColumnDesc *outCols, int *outNCols)
{
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) < 0) return -1;
    SchemaDesc schemas[16];
    int numSchemas = cat_list_schemas(dbDesc.db_id, schemas, 16);
    for (int si = 0; si < numSchemas; si++) {
        TableDesc tables[64];
        int numTables = cat_list_tables(schemas[si].schema_id, tables, CAT_MAX_COLUMNS);
        for (int ti = 0; ti < numTables; ti++) {
            if (tables[ti].table_id == table_id) {
                *outTd = tables[ti];
                if (outCols && outNCols)
                    *outNCols = cat_find_columns(table_id, outCols, CAT_MAX_COLUMNS);
                return 0;
            }
        }
    }
    return -1;
}

/* Enforce referential integrity before deleting a record.
 * Finds all FK constraints that reference this table, then for each:
 * - RESTRICT (0,3): reject if child rows reference this PK value
 * - CASCADE (1): delete child rows
 * - SET NULL (2): set FK columns to NULL in child rows
 * - SET DEFAULT (4): set FK columns to DEFAULT in child rows
 * deletedRecord is raw binary, deletedRecLen is its byte length.
 * Returns 0 on success, -1 on violation. */
static int enforce_fk_on_delete_depth(const TableDesc *parentTd,
                                const ColumnDesc *parentCols, int parentNCols,
                                const char *deletedRecord, int deletedRecLen,
                                const char *deletedKey,
                                int depth)
{
    if (depth > 32) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "foreign key cascade depth exceeded (possible circular reference)");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
        return -1;
    }

    ConstraintDesc refConstraints[32];
    int numRefs = cat_list_referencing_fks(parentTd->table_id, refConstraints, 32);
    if (numRefs <= 0) return 0;

    /* Extract parent record fields once */
    char parentFields[CAT_MAX_COLUMNS][256];
    int parentIsNull[CAT_MAX_COLUMNS];
    int parentExtracted = tup_extract_fields(deletedRecord, deletedRecLen,
                                              parentCols, parentNCols,
                                              parentFields, parentIsNull, CAT_MAX_COLUMNS);
    if (parentExtracted < 0) return -1;

    for (int ri = 0; ri < numRefs; ri++) {
        if (!refConstraints[ri].is_enabled) continue;
        /* Parse on_delete action from definition: "local_cols|on_delete|on_update" */
        char localColsCsv[1024];
        strncpy(localColsCsv, refConstraints[ri].definition, sizeof(localColsCsv) - 1);
        localColsCsv[sizeof(localColsCsv) - 1] = '\0';
        int onDeleteAction = 0; /* default RESTRICT */
        {
            char *pipe1 = strchr(localColsCsv, '|');
            if (pipe1) {
                *pipe1 = '\0';
                char *actionStr = pipe1 + 1;
                onDeleteAction = atoi(actionStr);
            }
        }

        /* Get referenced column values from the deleted record
         * (these are the PK values being removed from parent) */
        char refColsCsv[256];
        strncpy(refColsCsv, refConstraints[ri].ref_columns, sizeof(refColsCsv) - 1);
        refColsCsv[sizeof(refColsCsv) - 1] = '\0';

        char parentValue[1024] = "";
        {
            char refColBuf[256];
            strncpy(refColBuf, refColsCsv, sizeof(refColBuf) - 1);
            refColBuf[sizeof(refColBuf) - 1] = '\0';
            char *saveptr = NULL;
            char *refColName = strtok_r(refColBuf, ",", &saveptr);
            int first = 1;
            while (refColName) {
                for (int k = 0; k < parentNCols; k++) {
                    if (strcasecmp(parentCols[k].col_name, refColName) == 0) {
                        if (!first) strcat(parentValue, "|");
                        strcat(parentValue, parentFields[k]);
                        first = 0;
                        break;
                    }
                }
                refColName = strtok_r(NULL, ",", &saveptr);
            }
        }

        if (parentValue[0] == '\0') continue;

        /* Resolve child table */
        TableDesc childTd;
        ColumnDesc childCols[CAT_MAX_COLUMNS];
        int childNCols;
        if (resolve_table_by_id(refConstraints[ri].table_id,
                                &childTd, childCols, &childNCols) < 0)
            continue;

        /* Find child column indices for the FK local columns */
        int fkColIndices[16];
        int fkColCount = 0;
        {
            char colBuf[256];
            strncpy(colBuf, localColsCsv, sizeof(colBuf) - 1);
            colBuf[sizeof(colBuf) - 1] = '\0';
            char *saveptr = NULL;
            char *colName = strtok_r(colBuf, ",", &saveptr);
            while (colName && fkColCount < 16) {
                fkColIndices[fkColCount] = -1;
                for (int k = 0; k < childNCols; k++) {
                    if (strcasecmp(childCols[k].col_name, colName) == 0) {
                        fkColIndices[fkColCount] = k;
                        break;
                    }
                }
                fkColCount++;
                colName = strtok_r(NULL, ",", &saveptr);
            }
        }

        /* Scan child table for matching rows */
        TableScanCursor childCursor;
        if (tapi_scan_begin(&childTd, &childCursor) < 0)
            continue; /* empty table, no conflict */

        /* Collect matching child PKs */
        char **matchingChildKeys = NULL;
        int matchCount = 0;
        int matchCapacity = 0;
        {
            char childPk[256], childRec[RECORD_BUF_SIZE];
            while (tapi_scan_next(&childCursor, childPk, childRec, sizeof(childRec)) == 0) {
                /* Extract fields from binary child record */
                int childRecLen = tup_record_len(childRec, sizeof(childRec));
                if (childRecLen < 0) continue;
                char childFields[CAT_MAX_COLUMNS][256];
                int childIsNull[CAT_MAX_COLUMNS];
                int nf = tup_extract_fields(childRec, childRecLen,
                                            childCols, childNCols,
                                            childFields, childIsNull, CAT_MAX_COLUMNS);
                if (nf < 0) continue;

                /* Build child FK value from extracted fields */
                char childFkValue[1024] = "";
                int first = 1;
                for (int fc = 0; fc < fkColCount; fc++) {
                    if (fkColIndices[fc] >= 0) {
                        if (!first) strcat(childFkValue, "|");
                        strcat(childFkValue, childFields[fkColIndices[fc]]);
                        first = 0;
                    }
                }

                if (strcmp(childFkValue, parentValue) == 0) {
                    if (matchCount >= matchCapacity) {
                        matchCapacity = matchCapacity == 0 ? 16 : matchCapacity * 2;
                        char **newBuf = (char **)realloc(matchingChildKeys,
                                                          matchCapacity * sizeof(char *));
                        if (!newBuf) break;
                        matchingChildKeys = newBuf;
                    }
                    matchingChildKeys[matchCount++] = strdup(childPk);
                }
            }
        }

        if (matchCount == 0) {
            free(matchingChildKeys);
            continue;
        }

        if (onDeleteAction == 0 || onDeleteAction == 3 || onDeleteAction == 5) {
            /* RESTRICT / NO ACTION — reject delete */
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "update or delete on table \"%s\" violates foreign key constraint \"%s\" "
                     "on table \"%s\"",
                     parentTd->table_name, refConstraints[ri].constraint_name,
                     childTd.table_name);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
            for (int m = 0; m < matchCount; m++) free(matchingChildKeys[m]);
            free(matchingChildKeys);
            return -1;
        }

        BTree2 childPkTree = tapi_pk_tree(&childTd);

        if (onDeleteAction == 1) {
            /* CASCADE — delete matching child rows (recurse first) */
            for (int m = 0; m < matchCount; m++) {
                RowID childRid;
                if (bt2_search(&childPkTree, matchingChildKeys[m], &childRid) == 0) {
                    /* Read child record for recursive cascade */
                    char childRecBuf[RECORD_BUF_SIZE];
                    int childRecLen = tapi_heap_read(childRid, childRecBuf, sizeof(childRecBuf));
                    if (childRecLen > 0) {
                        /* Recurse: cascade delete grandchildren before deleting child */
                        if (enforce_fk_on_delete_depth(&childTd, childCols, childNCols,
                                                       childRecBuf, childRecLen,
                                                       matchingChildKeys[m],
                                                       depth + 1) < 0) {
                            for (int mm = m; mm < matchCount; mm++) free(matchingChildKeys[mm]);
                            free(matchingChildKeys);
                            return -1;
                        }
                    }
                    /* Re-search in case tree changed during recursion */
                    if (bt2_search(&childPkTree, matchingChildKeys[m], &childRid) == 0) {
                        tapi_heap_delete(childRid);
                        bt2_delete(&childPkTree, matchingChildKeys[m]);
                        childTd.pk_root_page = childPkTree.root_page;
                    }
                }
                free(matchingChildKeys[m]);
            }
        } else if (onDeleteAction == 2 || onDeleteAction == 4) {
            /* SET NULL (2) or SET DEFAULT (4) — update FK columns in matching child rows */
            /* Read defaults for SET DEFAULT */
            char childDefaults[CAT_MAX_COLUMNS][256];
            int numDefaults = 0;
            if (onDeleteAction == 4) {
                char childPath[1024];
                snprintf(childPath, sizeof(childPath), "root/%s/%s/%s",
                         g_currentDatabase, g_currentSchema, childTd.table_name);
                numDefaults = ReadDefaults(childPath, childDefaults, CAT_MAX_COLUMNS);
            }

            for (int m = 0; m < matchCount; m++) {
                RowID childRid;
                if (bt2_search(&childPkTree, matchingChildKeys[m], &childRid) == 0) {
                    char childRec[RECORD_BUF_SIZE];
                    int childRecLen = tapi_heap_read(childRid, childRec, sizeof(childRec));
                    if (childRecLen > 0) {
                        char fields[CAT_MAX_COLUMNS][256];
                        int isNull[CAT_MAX_COLUMNS];
                        int numFields = tup_extract_fields(childRec, childRecLen,
                                                           childCols, childNCols,
                                                           fields, isNull, CAT_MAX_COLUMNS);
                        if (numFields < 0) {
                            free(matchingChildKeys[m]);
                            continue;
                        }

                        for (int fc = 0; fc < fkColCount; fc++) {
                            if (fkColIndices[fc] >= 0 && fkColIndices[fc] < numFields) {
                                if (onDeleteAction == 4 && fkColIndices[fc] < numDefaults &&
                                    strcmp(childDefaults[fkColIndices[fc]], "\x01NONE\x01") != 0) {
                                    strcpy(fields[fkColIndices[fc]], childDefaults[fkColIndices[fc]]);
                                    isNull[fkColIndices[fc]] = 0;
                                } else {
                                    strcpy(fields[fkColIndices[fc]], NULL_MARKER);
                                    isNull[fkColIndices[fc]] = 1;
                                }
                            }
                        }

                        /* Build new binary tuple from modified fields */
                        char newRec[RECORD_BUF_SIZE];
                        int newLen = tup_build_from_fields(
                                        (const char (*)[256])fields, numFields,
                                        childTd.table_id,
                                        childCols, childNCols,
                                        newRec, sizeof(newRec));
                        if (newLen < 0) {
                            free(matchingChildKeys[m]);
                            continue;
                        }

                        RowID newRid = tapi_heap_update(&childTd, childRid,
                                                        newRec, (uint16_t)newLen);
                        if (newRid.page_no != childRid.page_no ||
                            newRid.slot_idx != childRid.slot_idx) {
                            bt2_update(&childPkTree, matchingChildKeys[m], newRid);
                            childTd.pk_root_page = childPkTree.root_page;
                        }
                    }
                }
                free(matchingChildKeys[m]);
            }
        }

        free(matchingChildKeys);
    }

    return 0;
}

static int enforce_fk_on_delete(const TableDesc *parentTd,
                                const ColumnDesc *parentCols, int parentNCols,
                                const char *deletedRecord, int deletedRecLen,
                                const char *deletedKey)
{
    return enforce_fk_on_delete_depth(parentTd, parentCols, parentNCols,
                                      deletedRecord, deletedRecLen,
                                      deletedKey, 0);
}

int DeleteProcess(void)
{
    /* Per-table lock */

    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(g_del.tblName, &td, cols, &ncols) < 0) {
        printf("Error: table not found\n");
        g_del.rowCount = 0;
        TruncateDelete();
        return -1;
    }

    /* Get column names for WHERE evaluation */
    char colNames[CAT_MAX_COLUMNS][128];
    int numCols = 0;
    for (int i = 0; i < ncols && i < 64; i++) {
        strncpy(colNames[i], cols[i].col_name, 127);
        colNames[i][127] = '\0';
        numCols++;
    }

    BTree2 pk_tree = tapi_pk_tree(&td);

    if (g_expr.whereExpr != NULL) {
        /* ---------- Expression-based WHERE delete ---------- */

        /* Phase 1: iterate records, evaluate WHERE, collect matching keys */
        int capacity = 64;
        int matchCount = 0;
        char **matchKeys = (char **)malloc(capacity * sizeof(char *));
        if (!matchKeys) {
            g_del.rowCount = 0;
            TruncateDelete();
            return -1;
        }

        /* Fast path: simple PK range pattern (e.g. WHERE id <= 5000)
         * Uses B+ tree cursor to walk only matching keys, skipping the
         * full heap scan + per-row WHERE evaluation. */
        int fast_path_used = 0;
        {
            const char *pk_col = NULL;
            int pk_count = 0;
            for (int ci = 0; ci < ncols; ci++) {
                if (cols[ci].is_pk) {
                    pk_count++;
                    if (!pk_col) pk_col = cols[ci].col_name;
                }
            }
            PkRangePattern pat;
            if (pk_count == 1 && pk_col &&
                expr_is_simple_pk_range(g_expr.whereExpr, pk_col, &pat)) {
                BTree2Cursor cursor;
                char keyBuf[BT2_MAX_KEY_LEN + 2];
                RowID rid;
                /* Visibility helper: skip soft-deleted tuples so the fast
                 * path doesn't waste work on dead rows after a previous
                 * DELETE (matches tapi_scan_next's filter). */
                #define FP_VISIBLE(rid_var) ({ \
                    char _fprec[RECORD_BUF_SIZE]; \
                    int  _fplen = tapi_heap_read((rid_var), _fprec, sizeof(_fprec)); \
                    int  _fpok = 1; \
                    if (_fplen < 0) _fpok = 0; \
                    else if (tup_has_mvcc(_fprec, _fplen)) { \
                        uint32_t _xmax = tup_get_xmax(_fprec, _fplen); \
                        if (_xmax != 0 && clog_is_committed(_xmax)) _fpok = 0; \
                    } \
                    _fpok; \
                })

                if (pat.op == EXPR_CMP_EQ) {
                    /* Single key lookup */
                    if (bt2_search(&pk_tree, pat.value, &rid) == 0 &&
                        FP_VISIBLE(rid)) {
                        matchKeys[matchCount++] = strdup(pat.value);
                    }
                } else if (pat.op == EXPR_CMP_GT || pat.op == EXPR_CMP_GE) {
                    /* Seek to first key >= pat.value, then walk forward */
                    if (bt2_cursor_seek(&pk_tree, pat.value, &cursor) == 0) {
                        while (bt2_cursor_next(&cursor, keyBuf, &rid) == 0) {
                            /* For GT, skip keys equal to limit */
                            if (pat.op == EXPR_CMP_GT) {
                                long long ka = strtoll(keyBuf, NULL, 10);
                                long long kb = strtoll(pat.value, NULL, 10);
                                if (ka == kb && strcmp(keyBuf, pat.value) == 0)
                                    continue;
                            }
                            if (!FP_VISIBLE(rid)) continue;
                            if (matchCount >= capacity) {
                                capacity *= 2;
                                char **tmp = (char **)realloc(matchKeys,
                                                              capacity * sizeof(char *));
                                if (!tmp) break;
                                matchKeys = tmp;
                            }
                            matchKeys[matchCount++] = strdup(keyBuf);
                        }
                    }
                } else { /* EXPR_CMP_LT or EXPR_CMP_LE */
                    /* Walk from the smallest key, stop when limit exceeded */
                    if (bt2_cursor_first(&pk_tree, &cursor) == 0) {
                        while (bt2_cursor_next(&cursor, keyBuf, &rid) == 0) {
                            long long ka = strtoll(keyBuf, NULL, 10);
                            long long kb = strtoll(pat.value, NULL, 10);
                            int cmp;
                            if (ka < kb) cmp = -1;
                            else if (ka > kb) cmp = 1;
                            else cmp = strcmp(keyBuf, pat.value);

                            if (pat.op == EXPR_CMP_LT && cmp >= 0) break;
                            if (pat.op == EXPR_CMP_LE && cmp >  0) break;

                            if (!FP_VISIBLE(rid)) continue;
                            if (matchCount >= capacity) {
                                capacity *= 2;
                                char **tmp = (char **)realloc(matchKeys,
                                                              capacity * sizeof(char *));
                                if (!tmp) break;
                                matchKeys = tmp;
                            }
                            matchKeys[matchCount++] = strdup(keyBuf);
                        }
                    }
                }
                #undef FP_VISIBLE
                fast_path_used = 1;
            }
        }

        TableScanCursor cursor;
        char keyBuf[256];
        char recBuf[RECORD_BUF_SIZE];

        if (!fast_path_used && tapi_scan_begin(&td, &cursor) == 0) {
            while (tapi_scan_next(&cursor, keyBuf, recBuf, sizeof(recBuf)) == 0) {
                /* Extract fields from binary record */
                int recLen = tup_record_len(recBuf, sizeof(recBuf));
                if (recLen < 0) continue;
                char colValues[CAT_MAX_COLUMNS][256];
                int isNull[CAT_MAX_COLUMNS];
                tup_extract_fields(recBuf, recLen, cols, ncols,
                                   colValues, isNull, CAT_MAX_COLUMNS);

                char result[512];
                int ok = expr_evaluate(g_expr.whereExpr,
                                       (const char (*)[128])colNames,
                                       (const char (*)[256])colValues,
                                       numCols,
                                       result, sizeof(result));
                int keep = 0;
                if (ok) {
                    if (strcmp(result, "t") == 0 ||
                        strcasecmp(result, "true") == 0 ||
                        strcmp(result, "1") == 0)
                        keep = 1;
                    else {
                        double v = strtod(result, NULL);
                        if (v != 0.0) keep = 1;
                    }
                }

                if (keep) {
                    if (matchCount >= capacity) {
                        capacity *= 2;
                        char **tmp = (char **)realloc(matchKeys,
                                                      capacity * sizeof(char *));
                        if (!tmp) break;
                        matchKeys = tmp;
                    }
                    matchKeys[matchCount] = strdup(keyBuf);
                    matchCount++;
                }
            }
        }

        /* Apply LIMIT/OFFSET if specified */
        int effectiveStart = 0;
        int effectiveEnd = matchCount;
        if (expr_eval_limit_range(matchCount, &effectiveStart, &effectiveEnd)) {
            for (int si = 0; si < effectiveStart; si++)
                free(matchKeys[si]);
            for (int si = effectiveEnd; si < matchCount; si++)
                free(matchKeys[si]);
        }

        /* Phase 2: delete matched records (within limit) */
        int deleted = 0;
        int i;
        for (i = effectiveStart; i < effectiveEnd; i++) {
            if (matchKeys[i]) {
                RowID rid;
                char delFields[CAT_MAX_COLUMNS][256];
                int delIsNull[CAT_MAX_COLUMNS];
                memset(delFields, 0, sizeof(delFields));
                if (bt2_search(&pk_tree, matchKeys[i], &rid) == 0) {
                    /* Read binary record for undo log and index cleanup */
                    char rec[RECORD_BUF_SIZE];
                    int rec_len = tapi_heap_read(rid, rec, sizeof(rec));
                    if (rec_len > 0) {
                        /* Enforce FK referential integrity before delete */
                        if (enforce_fk_on_delete(&td, cols, ncols,
                                                 rec, rec_len, matchKeys[i]) < 0) {
                            /* RESTRICT: abort entire delete */
                            for (int mi = i; mi < matchCount; mi++)
                                free(matchKeys[mi]);
                            free(matchKeys);
                            g_del.rowCount = deleted;
                            TruncateDelete();
                            return -1;
                        }

                        /* Extract fields for trigger + secondary index cleanup */
                        tup_extract_fields(rec, rec_len, cols, ncols,
                                           delFields, delIsNull, CAT_MAX_COLUMNS);

                        /* BEFORE DELETE trigger */
                        {
                            const char *tcols[CAT_MAX_COLUMNS];
                            const char *tvals[CAT_MAX_COLUMNS];
                            for (int tc = 0; tc < ncols && tc < 64; tc++) {
                                tcols[tc] = colNames[tc];
                                tvals[tc] = delFields[tc];
                            }
                            if (evo_fire_triggers(g_del.tblName, 'B', 'D',
                                                  tcols, tvals, NULL, ncols) < 0) {
                                TruncateDelete();
                                return -1;
                            }
                        }

                        /* Log undo entry with raw binary data + length */
                        if (g_tx_undo_callback) {
                            RowID zero_rid = {0, 0};
                            g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                               g_del.tblName, matchKeys[i],
                                               rec, rec_len, zero_rid);
                        }

                        /* Remove from secondary B-tree indexes */
                        delete_secondary_indexes(g_del.tblName, colNames, numCols,
                                                 (const char (*)[256])delFields,
                                                 matchKeys[i]);

                        /* Log for concurrent index build (Phase 3) */
                        conc_mod_log_record(td.table_id, matchKeys[i],
                                            (const char *)colNames, 128,
                                            (const char *)delFields, 256, numCols);
                    }

                    /* Acquire exclusive row lock for this DELETE */
                    mvcc_ensure_xid(&g_qctx->mvcc_xid);
                    /* Conflict Guard: notify write */
                    { extern void cg_check_write(uint32_t, uint32_t, const char *);
                      cg_check_write(g_qctx->mvcc_xid, td.table_id, matchKeys[i]); }
                    {
                        int lr = lock_row_acquire(td.table_id, matchKeys[i],
                                                  g_qctx->mvcc_xid,
                                                  LOCK_EXCLUSIVE);
                        if (lr == LOCK_DEADLOCK) {
                            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                                     "deadlock detected while waiting for lock on row (key=%s)",
                                     matchKeys[i]);
                            g_err.error = 1;
                            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DEADLOCK_DETECTED);
                        } else if (lr != LOCK_OK) {
                            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                                     "could not obtain lock on row (key=%s)",
                                     matchKeys[i]);
                            g_err.error = 1;
                            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_LOCK_NOT_AVAILABLE);
                        }
                    }
                    if (g_err.error) {
                        for (int mi = i; mi < matchCount; mi++)
                            free(matchKeys[mi]);
                        free(matchKeys);
                        g_del.rowCount = deleted;
                        TruncateDelete();
                        return -1;
                    }

                    /* MVCC soft-delete: set xmax instead of physical removal.
                     * The PK tree entry stays so concurrent readers can find
                     * the record and check visibility. RECLAIM will physically
                     * remove tuples whose xmax is committed + expired. */
                    vmap_clear(rid.page_no);
                    if (tapi_heap_set_xmax(rid, g_qctx->mvcc_xid) < 0) {
                        /* Pre-MVCC tuple — fall back to physical delete */
                        tapi_heap_delete(rid);
                        bt2_delete(&pk_tree, matchKeys[i]);
                        td.pk_root_page = pk_tree.root_page;
                    }
                    /* AFTER DELETE trigger */
                    {
                        const char *tcols[CAT_MAX_COLUMNS];
                        const char *tvals[CAT_MAX_COLUMNS];
                        for (int tc = 0; tc < ncols && tc < 64; tc++) {
                            tcols[tc] = colNames[tc];
                            tvals[tc] = delFields[tc];
                        }
                        evo_fire_triggers(g_del.tblName, 'A', 'D',
                                          tcols, tvals, NULL, ncols);
                    }
                    /* RETURNING capture — returns deleted row values */
                    if (g_returning.active && g_returning_row_count < 256) {
                        const char *ret_vals[CAT_MAX_COLUMNS];
                        int ret_null[CAT_MAX_COLUMNS];
                        for (int c = 0; c < ncols && c < 64; c++) {
                            ret_vals[c] = delFields[c];
                            ret_null[c] = delIsNull[c];
                        }
                        extern void returning_capture_row(const ColumnDesc *, int, const char *[], const int[], int);
                        returning_capture_row(cols, ncols, ret_vals, ret_null, ncols);
                    }
                    deleted++;
                }
                free(matchKeys[i]);
            }
        }
        free(matchKeys);

        g_del.rowCount = deleted;
        if (deleted > 0) {
            cat_increment_dml_counter(td.table_id);
            cat_increment_dead_tuples(td.table_id, deleted);
        }
        printf("%d record(s) deleted.\n", deleted);
    } else {
        /* ---------- Legacy PK-based delete ---------- */
        char *str = strtok(g_ins.data, FIELD_SEP);
        if (!str) {
            g_del.rowCount = 0;
            TruncateDelete();
            return -1;
        }

        RowID rid;
        if (bt2_search(&pk_tree, str, &rid) == 0) {
            char rec[RECORD_BUF_SIZE];
            int rec_len = tapi_heap_read(rid, rec, sizeof(rec));
            if (rec_len > 0) {
                /* Enforce FK referential integrity */
                if (enforce_fk_on_delete(&td, cols, ncols,
                                         rec, rec_len, str) < 0) {
                    g_del.rowCount = 0;
                    TruncateDelete();
                    return -1;
                }

                /* Log undo entry with raw binary data + length */
                if (g_tx_undo_callback) {
                    RowID zero_rid = {0, 0};
                    g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                       g_del.tblName, str, rec, rec_len,
                                       zero_rid);
                }

                /* Extract fields for secondary index cleanup */
                char delFields[CAT_MAX_COLUMNS][256];
                int delIsNull[CAT_MAX_COLUMNS];
                tup_extract_fields(rec, rec_len, cols, ncols,
                                   delFields, delIsNull, CAT_MAX_COLUMNS);

                /* Remove from secondary B-tree indexes */
                delete_secondary_indexes(g_del.tblName, colNames, numCols,
                                         (const char (*)[256])delFields, str);

                /* Log for concurrent index build (Phase 3) */
                conc_mod_log_record(td.table_id, str,
                                    (const char *)colNames, 128,
                                    (const char *)delFields, 256, numCols);
            }

            /* MVCC soft-delete: set xmax, keep PK entry for visibility */
            mvcc_ensure_xid(&g_qctx->mvcc_xid);
            vmap_clear(rid.page_no);
            if (tapi_heap_set_xmax(rid, g_qctx->mvcc_xid) < 0) {
                /* Pre-MVCC tuple — fall back to physical delete */
                tapi_heap_delete(rid);
                bt2_delete(&pk_tree, str);
                td.pk_root_page = pk_tree.root_page;
            }
            printf("Record deleted successfully.\n");
            g_del.rowCount = 1;
            cat_increment_dml_counter(td.table_id);
            cat_increment_dead_tuples(td.table_id, 1);
        } else {
            printf("Record not found: %s\n", str);
            g_del.rowCount = 0;
        }
    }

    TruncateDelete();
    return 0;
}

/* Delete a single row by PK key.
 * Caller must ensure mvcc_xid is valid (call mvcc_ensure_xid beforehand).
 * Returns 0 on success, -1 on error (g_err populated). */
int evo_delete_row(const char *tableName,
                   const char *pkKey, uint32_t mvcc_xid)
{
    if (!g_qctx) return -1;

    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tableName, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" not found", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        return -1;
    }

    char colNames[CAT_MAX_COLUMNS][128];
    int numCols = 0;
    for (int i = 0; i < ncols && i < 64; i++) {
        strncpy(colNames[i], cols[i].col_name, 127);
        colNames[i][127] = '\0';
        numCols++;
    }

    BTree2 pk_tree = tapi_pk_tree(&td);
    RowID rid;
    if (bt2_search(&pk_tree, pkKey, &rid) != 0)
        return 0; /* row already gone (concurrent delete) */

    char rec[RECORD_BUF_SIZE];
    int rec_len = tapi_heap_read(rid, rec, sizeof(rec));
    if (rec_len > 0) {
        if (enforce_fk_on_delete(&td, cols, ncols,
                                 rec, rec_len, pkKey) < 0)
            return -1;

        if (g_tx_undo_callback) {
            RowID zero_rid = {0, 0};
            g_tx_undo_callback(3 /*TX_OP_DELETE*/, tableName, pkKey,
                               rec, rec_len, zero_rid);
        }

        char delFields[CAT_MAX_COLUMNS][256];
        int delIsNull[CAT_MAX_COLUMNS];
        tup_extract_fields(rec, rec_len, cols, ncols,
                           delFields, delIsNull, CAT_MAX_COLUMNS);
        delete_secondary_indexes(tableName, colNames, numCols,
                                 (const char (*)[256])delFields, pkKey);

        conc_mod_log_record(td.table_id, pkKey,
                            (const char *)colNames, 128,
                            (const char *)delFields, 256, numCols);
    } else {
        /* Heap read failed — record corrupt or already gone */
        return 0;
    }

    { extern void cg_check_write(uint32_t, uint32_t, const char *);
      cg_check_write(mvcc_xid, td.table_id, pkKey); }

    int lr = lock_row_acquire(td.table_id, pkKey,
                              mvcc_xid, LOCK_EXCLUSIVE);
    if (lr == LOCK_DEADLOCK) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "deadlock detected while waiting for lock on row (key=%s)",
                 pkKey);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DEADLOCK_DETECTED);
        return -1;
    } else if (lr != LOCK_OK) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not obtain lock on row (key=%s)", pkKey);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_LOCK_NOT_AVAILABLE);
        return -1;
    }

    vmap_clear(rid.page_no);
    if (tapi_heap_set_xmax(rid, mvcc_xid) < 0) {
        tapi_heap_delete(rid);
        bt2_delete(&pk_tree, pkKey);
    }

    cat_increment_dml_counter(td.table_id);
    cat_increment_dead_tuples(td.table_id, 1);
    return 0;
}

int TruncateDelete(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_ins.data[i] = '\0';
        g_del.tblName[i] = '\0';
    }

    return 0;
}

int GetDelTableName(char *pname)
{
    db_table_path(pname, g_del.tblName, sizeof(g_del.tblName));

    return 0;
}
