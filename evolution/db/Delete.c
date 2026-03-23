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
        int numTables = cat_list_tables(schemas[si].schema_id, tables, 64);
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
    char parentFields[64][256];
    int parentIsNull[64];
    int parentExtracted = tup_extract_fields(deletedRecord, deletedRecLen,
                                              parentCols, parentNCols,
                                              parentFields, parentIsNull, 64);
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
                char childFields[64][256];
                int childIsNull[64];
                int nf = tup_extract_fields(childRec, childRecLen,
                                            childCols, childNCols,
                                            childFields, childIsNull, 64);
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
            char childDefaults[64][256];
            int numDefaults = 0;
            if (onDeleteAction == 4) {
                char childPath[1024];
                snprintf(childPath, sizeof(childPath), "root/%s/%s/%s",
                         g_currentDatabase, g_currentSchema, childTd.table_name);
                numDefaults = ReadDefaults(childPath, childDefaults, 64);
            }

            for (int m = 0; m < matchCount; m++) {
                RowID childRid;
                if (bt2_search(&childPkTree, matchingChildKeys[m], &childRid) == 0) {
                    char childRec[RECORD_BUF_SIZE];
                    int childRecLen = tapi_heap_read(childRid, childRec, sizeof(childRec));
                    if (childRecLen > 0) {
                        char fields[64][256];
                        int isNull[64];
                        int numFields = tup_extract_fields(childRec, childRecLen,
                                                           childCols, childNCols,
                                                           fields, isNull, 64);
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
    char colNames[64][128];
    int numCols = 0;
    for (int i = 0; i < ncols && i < 64; i++) {
        strncpy(colNames[i], cols[i].col_name, 127);
        colNames[i][127] = '\0';
        numCols++;
    }

    BTree2 pk_tree = tapi_pk_tree(&td);

    if (g_expr.whereExpr != NULL) {
        /* ---------- Expression-based WHERE delete ---------- */

        /* Phase 1: iterate all records, evaluate WHERE, collect matching keys */
        int capacity = 64;
        int matchCount = 0;
        char **matchKeys = (char **)malloc(capacity * sizeof(char *));
        if (!matchKeys) {
            g_del.rowCount = 0;
            TruncateDelete();
            return -1;
        }

        TableScanCursor cursor;
        char keyBuf[256];
        char recBuf[RECORD_BUF_SIZE];

        if (tapi_scan_begin(&td, &cursor) == 0) {
            while (tapi_scan_next(&cursor, keyBuf, recBuf, sizeof(recBuf)) == 0) {
                /* Extract fields from binary record */
                int recLen = tup_record_len(recBuf, sizeof(recBuf));
                if (recLen < 0) continue;
                char colValues[64][256];
                int isNull[64];
                tup_extract_fields(recBuf, recLen, cols, ncols,
                                   colValues, isNull, 64);

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

                        /* Log undo entry with raw binary data + length */
                        if (g_tx_undo_callback) {
                            RowID zero_rid = {0, 0};
                            g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                               g_del.tblName, matchKeys[i],
                                               rec, rec_len, zero_rid);
                        }

                        /* Extract fields for secondary index cleanup */
                        char delFields[64][256];
                        int delIsNull[64];
                        tup_extract_fields(rec, rec_len, cols, ncols,
                                           delFields, delIsNull, 64);

                        /* Remove from secondary B-tree indexes */
                        delete_secondary_indexes(g_del.tblName, colNames, numCols,
                                                 (const char (*)[256])delFields,
                                                 matchKeys[i]);

                        /* Log for concurrent index build (Phase 3) */
                        conc_mod_log_record(td.table_id, matchKeys[i],
                                            (const char *)colNames, 128,
                                            (const char *)delFields, 256, numCols);
                    }

                    /* MVCC soft-delete: set xmax instead of physical removal.
                     * The PK tree entry stays so concurrent readers can find
                     * the record and check visibility. RECLAIM will physically
                     * remove tuples whose xmax is committed + expired. */
                    mvcc_ensure_xid(&g_qctx->mvcc_xid);
                    vmap_clear(rid.page_no);
                    if (tapi_heap_set_xmax(rid, g_qctx->mvcc_xid) < 0) {
                        /* Pre-MVCC tuple — fall back to physical delete */
                        tapi_heap_delete(rid);
                        bt2_delete(&pk_tree, matchKeys[i]);
                        td.pk_root_page = pk_tree.root_page;
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
        char *str = strtok(g_ins.data, ";");
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
                char delFields[64][256];
                int delIsNull[64];
                tup_extract_fields(rec, rec_len, cols, ncols,
                                   delFields, delIsNull, 64);

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
