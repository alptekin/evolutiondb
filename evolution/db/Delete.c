#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "expression.h"
#include "catalog_internal.h"
#include "table_api.h"

static void GetFieldValue(const char *data, int colIndex,
                          char *buf, int bufSize);

/* Remove secondary index entries for a deleted record */
static void delete_secondary_indexes(const char *tblName,
                                     const char colNames[][128], int numCols,
                                     const char *rec, const char *pkKey)
{
    IndexDesc delIdx[16];
    int nIdx = idx_load_secondary(tblName, delIdx, 16);
    if (nIdx <= 0) return;
    char colVals[64][256];
    for (int ci = 0; ci < numCols && ci < 64; ci++)
        GetFieldValue(rec, ci, colVals[ci], sizeof(colVals[ci]));
    for (int ix = 0; ix < nIdx; ix++) {
        char idxKey[512];
        if (idx_build_key(&delIdx[ix],
                (const char (*)[128])colNames, numCols,
                (const char (*)[256])colVals,
                idxKey, sizeof(idxKey)) && idxKey[0]) {
            char idxPath[1024];
            snprintf(idxPath, sizeof(idxPath), "%u:%s:%u",
                     delIdx[ix].table_id, delIdx[ix].index_name,
                     delIdx[ix].root_page);
            btree_delete(idxPath, idxKey, pkKey);
        }
    }
}

/* Extract field at colIndex from semicolon-separated record */
static void GetFieldValue(const char *data, int colIndex,
                          char *buf, int bufSize)
{
    char temp[2048];
    char *tok;
    int i = 0;

    strncpy(temp, data, sizeof(temp) - 1);
    temp[sizeof(temp) - 1] = '\0';
    tok = strtok(temp, ";");
    while (tok) {
        if (i == colIndex) {
            strncpy(buf, tok, bufSize - 1);
            buf[bufSize - 1] = '\0';
            return;
        }
        i++;
        tok = strtok(NULL, ";");
    }
    buf[0] = '\0';
}

/* Helper: extract field at colIndex from semicolon-separated record into fieldBuf */
static void DeleteGetField(const char *rec, int colIndex, char *fieldBuf, int bufSize)
{
    char tmp[RECORD_BUF_SIZE];
    strncpy(tmp, rec, sizeof(tmp) - 1);
    tmp[sizeof(tmp) - 1] = '\0';
    char *tok = strtok(tmp, ";");
    int idx = 0;
    fieldBuf[0] = '\0';
    while (tok) {
        if (idx == colIndex) {
            strncpy(fieldBuf, tok, bufSize - 1);
            fieldBuf[bufSize - 1] = '\0';
            return;
        }
        idx++;
        tok = strtok(NULL, ";");
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
 * Returns 0 on success, -1 on violation. */
static int enforce_fk_on_delete_depth(const TableDesc *parentTd,
                                const ColumnDesc *parentCols, int parentNCols,
                                const char *deletedRecord, const char *deletedKey,
                                int depth)
{
    if (depth > 32) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "foreign key cascade depth exceeded (possible circular reference)");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
        return -1;
    }

    ConstraintDesc refConstraints[32];
    int numRefs = cat_list_referencing_fks(parentTd->table_id, refConstraints, 32);
    if (numRefs <= 0) return 0;

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
                        char fieldVal[256];
                        DeleteGetField(deletedRecord, k, fieldVal, sizeof(fieldVal));
                        if (!first) strcat(parentValue, "|");
                        strcat(parentValue, fieldVal);
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
                /* Build child FK value from record */
                char childFkValue[1024] = "";
                int first = 1;
                for (int fc = 0; fc < fkColCount; fc++) {
                    if (fkColIndices[fc] >= 0) {
                        char fieldVal[256];
                        DeleteGetField(childRec, fkColIndices[fc], fieldVal, sizeof(fieldVal));
                        if (!first) strcat(childFkValue, "|");
                        strcat(childFkValue, fieldVal);
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
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "update or delete on table \"%s\" violates foreign key constraint \"%s\" "
                     "on table \"%s\"",
                     parentTd->table_name, refConstraints[ri].constraint_name,
                     childTd.table_name);
            g_gui_error = 1;
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
                    if (tapi_heap_read(childRid, childRecBuf, sizeof(childRecBuf)) > 0) {
                        /* Recurse: cascade delete grandchildren before deleting child */
                        if (enforce_fk_on_delete_depth(&childTd, childCols, childNCols,
                                                       childRecBuf, matchingChildKeys[m],
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
                    if (tapi_heap_read(childRid, childRec, sizeof(childRec)) > 0) {
                        char fields[64][256];
                        int numFields = 0;
                        char tmpRec[RECORD_BUF_SIZE];
                        strncpy(tmpRec, childRec, sizeof(tmpRec) - 1);
                        tmpRec[sizeof(tmpRec) - 1] = '\0';
                        char *tok = strtok(tmpRec, ";");
                        while (tok && numFields < 64) {
                            strncpy(fields[numFields], tok, 255);
                            fields[numFields][255] = '\0';
                            numFields++;
                            tok = strtok(NULL, ";");
                        }

                        for (int fc = 0; fc < fkColCount; fc++) {
                            if (fkColIndices[fc] >= 0 && fkColIndices[fc] < numFields) {
                                if (onDeleteAction == 4 && fkColIndices[fc] < numDefaults &&
                                    strcmp(childDefaults[fkColIndices[fc]], "\x01NONE\x01") != 0) {
                                    strcpy(fields[fkColIndices[fc]], childDefaults[fkColIndices[fc]]);
                                } else {
                                    strcpy(fields[fkColIndices[fc]], "\x01NULL\x01");
                                }
                            }
                        }

                        char newRec[RECORD_BUF_SIZE] = "";
                        for (int f = 0; f < numFields; f++) {
                            strcat(newRec, fields[f]);
                            strcat(newRec, ";");
                        }

                        uint16_t newLen = (uint16_t)(strlen(newRec) + 1);
                        RowID newRid = tapi_heap_update(&childTd, childRid, newRec, newLen);
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
                                const char *deletedRecord, const char *deletedKey)
{
    return enforce_fk_on_delete_depth(parentTd, parentCols, parentNCols,
                                      deletedRecord, deletedKey, 0);
}

int DeleteProcess(void)
{
    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(g_tblDelName, &td, cols, &ncols) < 0) {
        printf("Error: table not found\n");
        g_deleteCount = 0;
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

    if (g_whereExpr != NULL) {
        /* ---------- Expression-based WHERE delete ---------- */

        /* Phase 1: iterate all records, evaluate WHERE, collect matching keys */
        int capacity = 64;
        int matchCount = 0;
        char **matchKeys = (char **)malloc(capacity * sizeof(char *));
        if (!matchKeys) {
            g_deleteCount = 0;
            TruncateDelete();
            return -1;
        }

        TableScanCursor cursor;
        char keyBuf[256];
        char recBuf[RECORD_BUF_SIZE];

        if (tapi_scan_begin(&td, &cursor) == 0) {
            while (tapi_scan_next(&cursor, keyBuf, recBuf, sizeof(recBuf)) == 0) {
                char colValues[64][256];
                int c;
                for (c = 0; c < numCols && c < 64; c++) {
                    GetFieldValue(recBuf, c, colValues[c], 256);
                }

                char result[512];
                int ok = expr_evaluate(g_whereExpr,
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

        /* Phase 2: delete all matched records */
        int deleted = 0;
        int i;
        for (i = 0; i < matchCount; i++) {
            if (matchKeys[i]) {
                RowID rid;
                if (bt2_search(&pk_tree, matchKeys[i], &rid) == 0) {
                    /* Read record for undo log and index cleanup */
                    char rec[RECORD_BUF_SIZE];
                    if (tapi_heap_read(rid, rec, sizeof(rec)) > 0) {
                        /* Enforce FK referential integrity before delete */
                        if (enforce_fk_on_delete(&td, cols, ncols, rec, matchKeys[i]) < 0) {
                            /* RESTRICT: abort entire delete */
                            for (int mi = i; mi < matchCount; mi++)
                                free(matchKeys[mi]);
                            free(matchKeys);
                            g_deleteCount = deleted;
                            TruncateDelete();
                            return -1;
                        }

                        /* Log undo entry */
                        if (g_tx_undo_callback)
                            g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                               g_tblDelName, matchKeys[i], rec);

                        /* Remove from secondary B-tree indexes */
                        delete_secondary_indexes(g_tblDelName, colNames, numCols, rec, matchKeys[i]);
                    }

                    /* Delete from heap and PK B+ tree */
                    tapi_heap_delete(rid);
                    bt2_delete(&pk_tree, matchKeys[i]);
                    td.pk_root_page = pk_tree.root_page;
                    deleted++;
                }
                free(matchKeys[i]);
            }
        }
        free(matchKeys);

        g_deleteCount = deleted;
        printf("%d record(s) deleted.\n", deleted);
    } else {
        /* ---------- Legacy PK-based delete ---------- */
        char *str = strtok(g_insert, ";");
        if (!str) {
            g_deleteCount = 0;
            TruncateDelete();
            return -1;
        }

        RowID rid;
        if (bt2_search(&pk_tree, str, &rid) == 0) {
            char rec[RECORD_BUF_SIZE];
            if (tapi_heap_read(rid, rec, sizeof(rec)) > 0) {
                /* Enforce FK referential integrity */
                if (enforce_fk_on_delete(&td, cols, ncols, rec, str) < 0) {
                    g_deleteCount = 0;
                    TruncateDelete();
                    return -1;
                }

                /* Log undo entry */
                if (g_tx_undo_callback)
                    g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                       g_tblDelName, str, rec);

                /* Remove from secondary B-tree indexes */
                delete_secondary_indexes(g_tblDelName, colNames, numCols, rec, str);
            }

            tapi_heap_delete(rid);
            bt2_delete(&pk_tree, str);
            td.pk_root_page = pk_tree.root_page;
            printf("Record deleted successfully.\n");
            g_deleteCount = 1;
        } else {
            printf("Record not found: %s\n", str);
            g_deleteCount = 0;
        }
    }

    TruncateDelete();
    return 0;
}

int TruncateDelete(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_insert[i] = '\0';
        g_tblDelName[i] = '\0';
    }

    return 0;
}

int GetDelTableName(char *pname)
{
    db_table_path(pname, g_tblDelName, sizeof(g_tblDelName));

    return 0;
}
