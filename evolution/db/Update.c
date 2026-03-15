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

/* Thin wrappers around shared tuple_format functions */
#define UpdateExtractAllFields(data, dataLen, table_id, cols, ncols, fields, is_null_out, maxFields) \
    tup_extract_fields_nm((data), (dataLen), (cols), (ncols), (fields), (is_null_out), (maxFields))

#define UpdateBuildBinaryRecord(fields, numFields, table_id, cols, ncols, out, outSize) \
    tup_build_from_fields((fields), (numFields), (table_id), (cols), (ncols), (out), (outSize))

/* Read column names from catalog */
static int UpdateReadColumnNames(const char *tableName,
                                 char colNames[][128], int maxCols)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tableName, &td, cols, &ncols) < 0)
        return 0;

    int count = ncols < maxCols ? ncols : maxCols;
    for (int i = 0; i < count; i++) {
        strncpy(colNames[i], cols[i].col_name, 127);
        colNames[i][127] = '\0';
    }
    return count;
}

/* Helper: resolve table by ID across schemas in current database */
static int update_resolve_table_by_id(uint32_t table_id, TableDesc *outTd,
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

/* Enforce referential integrity when a parent row's PK is updated.
 * For each FK that references this table:
 * - RESTRICT/NO ACTION (0,3,5): reject if child rows reference old PK
 * - CASCADE (1): update child FK columns from old PK to new PK
 * - SET NULL (2): set child FK columns to NULL
 * - SET DEFAULT (4): set child FK columns to their defaults */
static int enforce_fk_on_update(const TableDesc *parentTd,
                                const ColumnDesc *parentCols, int parentNCols,
                                const char *oldPkValue, const char *newPkValue)
{
    ConstraintDesc refConstraints[32];
    int numRefs = cat_list_referencing_fks(parentTd->table_id, refConstraints, 32);
    if (numRefs <= 0) return 0;

    for (int ri = 0; ri < numRefs; ri++) {
        if (!refConstraints[ri].is_enabled) continue;

        /* Parse on_update action from definition: "local_cols|on_delete|on_update[|match|defer]" */
        char localColsCsv[1024];
        strncpy(localColsCsv, refConstraints[ri].definition, sizeof(localColsCsv) - 1);
        localColsCsv[sizeof(localColsCsv) - 1] = '\0';
        int onUpdateAction = 0; /* default RESTRICT */
        {
            char *pipe1 = strchr(localColsCsv, '|');
            if (pipe1) {
                *pipe1 = '\0';
                /* pipe1+1 = on_delete */
                char *pipe2 = strchr(pipe1 + 1, '|');
                if (pipe2) {
                    onUpdateAction = atoi(pipe2 + 1);
                }
            }
        }

        /* Get referenced (parent PK) column values from old record */
        char refColsCsv[256];
        strncpy(refColsCsv, refConstraints[ri].ref_columns, sizeof(refColsCsv) - 1);
        refColsCsv[sizeof(refColsCsv) - 1] = '\0';

        /* Resolve child table */
        TableDesc childTd;
        ColumnDesc childCols[CAT_MAX_COLUMNS];
        int childNCols;
        if (update_resolve_table_by_id(refConstraints[ri].table_id,
                                       &childTd, childCols, &childNCols) < 0)
            continue;

        /* Find child column indices for FK local columns */
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

        /* Scan child table for rows referencing oldPkValue */
        TableScanCursor childCursor;
        if (tapi_scan_begin(&childTd, &childCursor) < 0)
            continue;

        char **matchingChildKeys = NULL;
        int matchCount = 0, matchCapacity = 0;
        {
            char childPk[256], childRec[RECORD_BUF_SIZE];
            while (tapi_scan_next(&childCursor, childPk, childRec, sizeof(childRec)) == 0) {
                int childRecLen = tup_record_len(childRec, sizeof(childRec));
                char scanFields[64][256];
                int scanNf = UpdateExtractAllFields(childRec, childRecLen,
                                                     childTd.table_id,
                                                     childCols, childNCols,
                                                     scanFields, NULL, 64);
                char childFkValue[1024] = "";
                int first = 1;
                for (int fc = 0; fc < fkColCount; fc++) {
                    if (fkColIndices[fc] >= 0 && fkColIndices[fc] < scanNf) {
                        if (!first) strcat(childFkValue, "|");
                        strcat(childFkValue, scanFields[fkColIndices[fc]]);
                        first = 0;
                    }
                }
                if (strcmp(childFkValue, oldPkValue) == 0) {
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

        if (onUpdateAction == 0 || onUpdateAction == 3 || onUpdateAction == 5) {
            /* RESTRICT / NO ACTION — reject update */
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

        /* Read defaults for SET DEFAULT */
        char childDefaults[64][256];
        int numDefaults = 0;
        if (onUpdateAction == 4) {
            char childPath[1024];
            snprintf(childPath, sizeof(childPath), "root/%s/%s/%s",
                     g_currentDatabase, g_currentSchema, childTd.table_name);
            numDefaults = ReadDefaults(childPath, childDefaults, 64);
        }

        /* Parse new PK value components for CASCADE */
        char newPkParts[16][256];
        int numNewPkParts = 0;
        if (onUpdateAction == 1) {
            char tmpPk[1024];
            strncpy(tmpPk, newPkValue, sizeof(tmpPk) - 1);
            tmpPk[sizeof(tmpPk) - 1] = '\0';
            char *saveptr = NULL;
            char *part = strtok_r(tmpPk, "|", &saveptr);
            while (part && numNewPkParts < 16) {
                strncpy(newPkParts[numNewPkParts], part, 255);
                newPkParts[numNewPkParts][255] = '\0';
                numNewPkParts++;
                part = strtok_r(NULL, "|", &saveptr);
            }
        }

        for (int m = 0; m < matchCount; m++) {
            RowID childRid;
            if (bt2_search(&childPkTree, matchingChildKeys[m], &childRid) == 0) {
                char childRec[RECORD_BUF_SIZE];
                int childRecLen = tapi_heap_read(childRid, childRec, sizeof(childRec));
                if (childRecLen > 0) {
                    char fields[64][256];
                    int numFields = UpdateExtractAllFields(childRec, childRecLen,
                                                           childTd.table_id,
                                                           childCols, childNCols,
                                                           fields, NULL, 64);

                    for (int fc = 0; fc < fkColCount; fc++) {
                        if (fkColIndices[fc] >= 0 && fkColIndices[fc] < numFields) {
                            if (onUpdateAction == 1) {
                                /* CASCADE — copy new PK value */
                                if (fc < numNewPkParts)
                                    strcpy(fields[fkColIndices[fc]], newPkParts[fc]);
                            } else if (onUpdateAction == 2) {
                                /* SET NULL */
                                strcpy(fields[fkColIndices[fc]], "\x01NULL\x01");
                            } else if (onUpdateAction == 4) {
                                /* SET DEFAULT */
                                if (fkColIndices[fc] < numDefaults &&
                                    strcmp(childDefaults[fkColIndices[fc]], "\x01NONE\x01") != 0) {
                                    strcpy(fields[fkColIndices[fc]],
                                           childDefaults[fkColIndices[fc]]);
                                } else {
                                    strcpy(fields[fkColIndices[fc]], "\x01NULL\x01");
                                }
                            }
                        }
                    }

                    char newRec[RECORD_BUF_SIZE];
                    int newLen = UpdateBuildBinaryRecord(
                        (const char (*)[256])fields, numFields,
                        childTd.table_id, childCols, childNCols,
                        newRec, sizeof(newRec));
                    if (newLen < 0) newLen = 0;
                    RowID newRid = tapi_heap_update(&childTd, childRid, newRec, (uint16_t)newLen);
                    if (newRid.page_no != childRid.page_no ||
                        newRid.slot_idx != childRid.slot_idx) {
                        bt2_update(&childPkTree, matchingChildKeys[m], newRid);
                        childTd.pk_root_page = childPkTree.root_page;
                    }
                }
            }
            free(matchingChildKeys[m]);
        }
        free(matchingChildKeys);
    }

    return 0;
}

/* Apply a single-row update: fetch record by PK, apply SET columns,
 * store back into heap.
 * Returns 0 on success, -1 on failure. */
static int ApplyUpdateToRow(TableDesc *td, const ColumnDesc *allCols, int allNCols,
                            const char *pkKey,
                            const char setCols[][256], const char setVals[][256],
                            int numSetCols, int numSetVals,
                            const char metaCols[][256], int numMetaCols,
                            const char *tblName)
{
    char existingData[RECORD_BUF_SIZE];
    int s, c, i;

    /* Fetch record by PK from B+ tree + heap */
    BTree2 pk_tree = tapi_pk_tree(td);
    RowID rid;
    if (bt2_search(&pk_tree, pkKey, &rid) < 0)
        return -1;
    int existingDataLen = tapi_heap_read(rid, existingData, sizeof(existingData));
    if (existingDataLen < 0)
        return -1;

    /* Log undo entry before modifying data */
    if (g_tx_undo_callback)
        g_tx_undo_callback(2 /*TX_OP_UPDATE*/, tblName,
                           pkKey, existingData, existingDataLen);

    /* Parse existing record into fields */
    char fields[64][256];
    char oldFields[64][256]; /* saved copy before SET modification */
    int is_null_arr[64];
    int numFields = UpdateExtractAllFields(existingData, existingDataLen,
                                            td->table_id, allCols, allNCols,
                                            fields, is_null_arr, 64);
    memcpy(oldFields, fields, sizeof(oldFields));

    /* Replace only the SET columns with new values */
    {
        int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
        for (s = 0; s < minSet; s++) {
            for (c = 0; c < numMetaCols; c++) {
                if (strcmp(metaCols[c], setCols[s]) == 0) {
                    /* Block SET on generated columns */
                    if (c < allNCols && allCols[c].generated_mode != GENMODE_NONE) {
                        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                 "column \"%s\" can only be updated to DEFAULT "
                                 "because it is a generated column", setCols[s]);
                        g_gui_error = 1;
                        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DATA_EXCEPTION);
                        return -1;
                    }
                    if (c < numFields) {
                        strcpy(fields[c], setVals[s]);
                    }
                    break;
                }
            }
        }
    }

    /* Re-evaluate STORED generated columns after SET */
    {
        int hasGen = 0;
        for (i = 0; i < allNCols; i++) {
            if (allCols[i].generated_mode == GENMODE_STORED && allCols[i].generated_expr[0]) {
                hasGen = 1; break;
            }
        }
        if (hasGen) {
            char genColNames[64][128];
            int numGCN = UpdateReadColumnNames(tblName, genColNames, 64);
            for (i = 0; i < allNCols && i < numFields; i++) {
                if (allCols[i].generated_mode == GENMODE_STORED && allCols[i].generated_expr[0]) {
                    ExprNode *genExpr = expr_deserialize(allCols[i].generated_expr);
                    if (genExpr) {
                        char result[256];
                        if (expr_evaluate(genExpr,
                                          (const char (*)[128])genColNames,
                                          (const char (*)[256])fields,
                                          numGCN < numFields ? numGCN : numFields,
                                          result, sizeof(result))) {
                            strncpy(fields[i], result, 255);
                            fields[i][255] = '\0';
                        }
                    }
                }
            }
        }
    }

    /* Validate CHECK constraints against updated row */
    if (tblName && tblName[0]) {
        char checkConstraints[MAX_CHECK_CONSTRAINTS][1024];
        char checkNames[MAX_CHECK_CONSTRAINTS][128];
        int numChecks = ReadCheckConstraintsWithNames(tblName, checkConstraints,
                                                       checkNames, MAX_CHECK_CONSTRAINTS);
        if (numChecks > 0) {
            char chkColNames[64][128];
            int numChkCols = UpdateReadColumnNames(tblName, chkColNames, 64);
            char colValues[64][256];
            int cv;
            for (cv = 0; cv < numFields && cv < 64; cv++) {
                strncpy(colValues[cv], fields[cv], 255);
                colValues[cv][255] = '\0';
            }
            int evalCols = numChkCols < numFields ? numChkCols : numFields;
            int ci;
            for (ci = 0; ci < numChecks; ci++) {
                ExprNode *checkExpr = expr_deserialize(checkConstraints[ci]);
                if (!checkExpr) continue;
                char result[512];
                int ok = expr_evaluate(checkExpr,
                                       (const char (*)[128])chkColNames,
                                       (const char (*)[256])colValues,
                                       evalCols,
                                       result, sizeof(result));
                int pass = 0;
                if (ok) {
                    if (strcmp(result, "t") == 0 ||
                        strcasecmp(result, "true") == 0 ||
                        strcmp(result, "1") == 0)
                        pass = 1;
                    else {
                        double v = strtod(result, NULL);
                        if (v != 0.0) pass = 1;
                    }
                }
                if (!pass) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "new row violates check constraint \"%s\"",
                             checkNames[ci]);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_CHECK_VIOLATION);
                    return -1;
                }
            }
        }
    }

    /* Validate FOREIGN KEY constraints against updated row */
    if (tblName && tblName[0]) {
        ConstraintDesc fkConstraints[32];
        int numFkCon = cat_list_constraints(td->table_id, fkConstraints, 32);
        for (int fi = 0; fi < numFkCon; fi++) {
            if (fkConstraints[fi].constraint_type != 'F') continue;
            if (!fkConstraints[fi].is_enabled) continue;

            /* Parse local columns and match_type from definition:
             * "local_cols|on_delete|on_update|match_type|deferrable" */
            char localColsCsv[1024];
            strncpy(localColsCsv, fkConstraints[fi].definition, sizeof(localColsCsv) - 1);
            localColsCsv[sizeof(localColsCsv) - 1] = '\0';
            int fkMatchType = 0;
            {
                char *pipe1 = strchr(localColsCsv, '|');
                if (pipe1) {
                    *pipe1 = '\0';
                    char *pipe2 = strchr(pipe1 + 1, '|');
                    if (pipe2) {
                        char *pipe3 = strchr(pipe2 + 1, '|');
                        if (pipe3) fkMatchType = atoi(pipe3 + 1);
                    }
                }
            }

            /* Check if any SET column overlaps with FK local columns */
            int fkAffected = 0;
            {
                char colListBuf[256];
                strncpy(colListBuf, localColsCsv, sizeof(colListBuf) - 1);
                colListBuf[sizeof(colListBuf) - 1] = '\0';
                char *saveptr = NULL;
                char *colName = strtok_r(colListBuf, ",", &saveptr);
                while (colName) {
                    int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
                    for (int si = 0; si < minSet; si++) {
                        if (strcasecmp(setCols[si], colName) == 0) {
                            fkAffected = 1;
                            break;
                        }
                    }
                    if (fkAffected) break;
                    colName = strtok_r(NULL, ",", &saveptr);
                }
            }
            if (!fkAffected) continue;

            /* Build FK value from updated fields */
            char fkValue[1024] = "";
            int allNull = 1;
            int anyNull = 0;
            {
                char colListBuf[256];
                strncpy(colListBuf, localColsCsv, sizeof(colListBuf) - 1);
                colListBuf[sizeof(colListBuf) - 1] = '\0';
                char *saveptr = NULL;
                char *colName = strtok_r(colListBuf, ",", &saveptr);
                int first = 1;
                while (colName) {
                    for (int mc = 0; mc < numMetaCols; mc++) {
                        if (strcasecmp(metaCols[mc], colName) == 0 && mc < numFields) {
                            if (strcmp(fields[mc], "\x01NULL\x01") != 0)
                                allNull = 0;
                            else
                                anyNull = 1;
                            if (!first) strcat(fkValue, "|");
                            strcat(fkValue, fields[mc]);
                            first = 0;
                            break;
                        }
                    }
                    colName = strtok_r(NULL, ",", &saveptr);
                }
            }

            /* MATCH FULL: reject mixed NULL/non-NULL */
            if (fkMatchType == 1 && anyNull && !allNull) {
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "insert or update on table violates foreign key constraint \"%s\" "
                         "(MATCH FULL does not allow mixing of null and nonnull values)",
                         fkConstraints[fi].constraint_name);
                g_gui_error = 1;
                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
                return -1;
            }
            if (allNull) continue;
            if (fkMatchType == 0 && anyNull) continue;  /* SIMPLE: any NULL → skip */

            /* Resolve referenced table by ID */
            TableDesc refTd;
            {
                DatabaseDesc dbDesc;
                if (cat_find_database(g_currentDatabase, &dbDesc) < 0) continue;
                SchemaDesc schemas[16];
                int numSchemas = cat_list_schemas(dbDesc.db_id, schemas, 16);
                int foundRef = 0;
                for (int si = 0; si < numSchemas; si++) {
                    TableDesc tables[64];
                    int numTables = cat_list_tables(schemas[si].schema_id, tables, 64);
                    for (int ti = 0; ti < numTables; ti++) {
                        if (tables[ti].table_id == fkConstraints[fi].ref_table_id) {
                            refTd = tables[ti];
                            foundRef = 1;
                            break;
                        }
                    }
                    if (foundRef) break;
                }
                if (!foundRef) continue;
            }

            /* Check value exists in referenced table PK */
            BTree2 refPkTree = tapi_pk_tree(&refTd);
            RowID refRid;
            if (bt2_search(&refPkTree, fkValue, &refRid) < 0) {
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "insert or update on table violates foreign key constraint \"%s\" "
                         "(value \"%s\" not found in referenced table \"%s\")",
                         fkConstraints[fi].constraint_name, fkValue, refTd.table_name);
                g_gui_error = 1;
                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
                return -1;
            }
        }
    }

    /* Validate UNIQUE constraints (catalog 'U' type) against updated row */
    if (tblName && tblName[0]) {
        ConstraintDesc uqCons[32];
        int numUqCon = cat_list_constraints(td->table_id, uqCons, 32);
        for (int ui = 0; ui < numUqCon; ui++) {
            if (uqCons[ui].constraint_type != 'U') continue;
            if (!uqCons[ui].is_enabled) continue;

            /* Parse UNIQUE column list from definition */
            char uqColsBuf[1024];
            strncpy(uqColsBuf, uqCons[ui].definition, sizeof(uqColsBuf) - 1);
            uqColsBuf[sizeof(uqColsBuf) - 1] = '\0';
            int uqColIndices[16];
            int numUqCols = 0;
            {
                char *saveptr = NULL;
                char *col = strtok_r(uqColsBuf, ",", &saveptr);
                while (col && numUqCols < 16) {
                    for (int mc = 0; mc < numMetaCols; mc++) {
                        if (strcasecmp(metaCols[mc], col) == 0) {
                            uqColIndices[numUqCols++] = mc;
                            break;
                        }
                    }
                    col = strtok_r(NULL, ",", &saveptr);
                }
            }
            if (numUqCols == 0) continue;

            /* Check if any SET column overlaps with UNIQUE columns */
            int uqAffected = 0;
            {
                int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
                for (int si = 0; si < minSet; si++) {
                    for (int uc = 0; uc < numUqCols; uc++) {
                        if (uqColIndices[uc] < numMetaCols &&
                            strcasecmp(setCols[si], metaCols[uqColIndices[uc]]) == 0) {
                            uqAffected = 1;
                            break;
                        }
                    }
                    if (uqAffected) break;
                }
            }
            if (!uqAffected) continue;

            /* Build composite value from updated fields */
            char newComposite[1024] = "";
            int allNull = 1;
            for (int uc = 0; uc < numUqCols; uc++) {
                if (uc > 0) strcat(newComposite, "|");
                if (uqColIndices[uc] < numFields) {
                    strcat(newComposite, fields[uqColIndices[uc]]);
                    if (strcmp(fields[uqColIndices[uc]], "\x01NULL\x01") != 0)
                        allNull = 0;
                }
            }
            if (allNull) continue;

            /* Scan all rows to check for duplicate */
            TableScanCursor uqCursor;
            if (tapi_scan_begin(td, &uqCursor) == 0) {
                char uqPkBuf[256], uqRecBuf[RECORD_BUF_SIZE];
                while (tapi_scan_next(&uqCursor, uqPkBuf, uqRecBuf, sizeof(uqRecBuf)) == 0) {
                    if (strcmp(uqPkBuf, pkKey) == 0) continue; /* skip self */
                    int uqRecLen = tup_record_len(uqRecBuf, sizeof(uqRecBuf));
                    char uqFieldsArr[64][256];
                    int uqNf = UpdateExtractAllFields(uqRecBuf, uqRecLen,
                                                       td->table_id, allCols, allNCols,
                                                       uqFieldsArr, NULL, 64);

                    char existComposite[1024] = "";
                    for (int uc = 0; uc < numUqCols; uc++) {
                        if (uc > 0) strcat(existComposite, "|");
                        if (uqColIndices[uc] < uqNf)
                            strcat(existComposite, uqFieldsArr[uqColIndices[uc]]);
                    }
                    if (strcmp(newComposite, existComposite) == 0) {
                        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                 "duplicate key value violates unique constraint \"%s\"",
                                 uqCons[ui].constraint_name);
                        g_gui_error = 1;
                        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                        return -1;
                    }
                }
            }
        }
    }

    /* Enforce ON UPDATE referential actions when PK columns are modified */
    if (tblName && tblName[0]) {
        /* Check if any PK column is being SET */
        int pkModified = 0;
        int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
        for (int si = 0; si < minSet; si++) {
            for (int ci = 0; ci < allNCols; ci++) {
                if (allCols[ci].is_pk && strcasecmp(setCols[si], allCols[ci].col_name) == 0) {
                    pkModified = 1;
                    break;
                }
            }
            if (pkModified) break;
        }
        if (pkModified) {
            /* Build new PK value from updated fields */
            char newPkValue[1024] = "";
            int first = 1;
            for (int ci = 0; ci < allNCols; ci++) {
                if (allCols[ci].is_pk) {
                    if (!first) strcat(newPkValue, "|");
                    strcat(newPkValue, fields[ci]);
                    first = 0;
                }
            }
            /* Only enforce if PK actually changed */
            if (strcmp(pkKey, newPkValue) != 0) {
                if (enforce_fk_on_update(td, allCols, allNCols, pkKey, newPkValue) < 0)
                    return -1;
            }
        }
    }

    /* Build updated binary record */
    {
        char newRecord[RECORD_BUF_SIZE];
        int newLen = UpdateBuildBinaryRecord((const char (*)[256])fields, numFields,
                                             td->table_id, allCols, allNCols,
                                             newRecord, sizeof(newRecord));
        if (newLen < 0) return -1;

        /* Load secondary indexes once for both pre-store and post-store */
        IndexDesc updIdx[16];
        int nIdx = (tblName && tblName[0]) ? idx_load_secondary(tblName, updIdx, 16) : 0;

        /* Pre-store: check unique index constraints */
        if (nIdx > 0) {
                int ix;
                for (ix = 0; ix < nIdx; ix++) {
                    if (updIdx[ix].index_type != 'U' && updIdx[ix].index_type != 'V') continue;

                    /* Check if any SET column touches this index */
                    int minSet2 = numSetVals < numSetCols ? numSetVals : numSetCols;
                    int wasSet = 0;
                    if (updIdx[ix].expr_def[0]) {
                        /* Expression index: always check if any referenced column was SET */
                        wasSet = 1; /* conservative: always recheck */
                    } else {
                        char colSpec[256];
                        strncpy(colSpec, updIdx[ix].col_list, sizeof(colSpec) - 1);
                        colSpec[sizeof(colSpec) - 1] = '\0';
                        char *ct = strtok(colSpec, ",");
                        while (ct) {
                            for (int si = 0; si < minSet2; si++) {
                                if (strcasecmp(setCols[si], ct) == 0) { wasSet = 1; break; }
                            }
                            if (wasSet) break;
                            ct = strtok(NULL, ",");
                        }
                    }
                    if (!wasSet) continue;

                    char oldKey[512], newKey[512];
                    idx_build_key_ex(&updIdx[ix],
                                     (const char *)metaCols, 256,
                                     (const char *)oldFields, 256,
                                     numMetaCols, oldKey, sizeof(oldKey));
                    idx_build_key_ex(&updIdx[ix],
                                     (const char *)metaCols, 256,
                                     (const char *)fields, 256,
                                     numMetaCols, newKey, sizeof(newKey));

                    if (newKey[0] && strcmp(oldKey, newKey) != 0) {
                        char idxPath[1024];
                        snprintf(idxPath, sizeof(idxPath), "%u:%s:%u:%c",
                                 updIdx[ix].table_id, updIdx[ix].index_name,
                                 updIdx[ix].root_page, updIdx[ix].index_type);
                        char dupCheck[1][256];
                        if (btree_search(idxPath, newKey, dupCheck, 1) > 0) {
                            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                     "duplicate key value violates unique index \"%s\" (key=%s)",
                                     updIdx[ix].index_name, newKey);
                            g_gui_error = 1;
                            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                            return -1;
                        }
                    }
                }
        }

        /* Update record in heap (may move to new page) */
        RowID newRid = tapi_heap_update(td, rid, newRecord, (uint16_t)newLen);
        if (newRid.page_no == 0)
            return -1;

        /* If record moved, update PK B+ tree */
        if (newRid.page_no != rid.page_no || newRid.slot_idx != rid.slot_idx) {
            bt2_update(&pk_tree, pkKey, newRid);
            td->pk_root_page = pk_tree.root_page;
        }

        /* Post-store: update secondary B-tree indexes for changed columns */
        if (nIdx > 0) {
                int ix;
                for (ix = 0; ix < nIdx; ix++) {
                    int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;

                    /* Check if any SET column touches this index */
                    int wasSet = 0;
                    if (updIdx[ix].expr_def[0]) {
                        wasSet = 1; /* expression index: conservative check */
                    } else {
                        char colSpec[256];
                        strncpy(colSpec, updIdx[ix].col_list, sizeof(colSpec) - 1);
                        colSpec[sizeof(colSpec) - 1] = '\0';
                        char *ct = strtok(colSpec, ",");
                        while (ct) {
                            for (int si = 0; si < minSet; si++) {
                                if (strcasecmp(setCols[si], ct) == 0) { wasSet = 1; break; }
                            }
                            if (wasSet) break;
                            ct = strtok(NULL, ",");
                        }
                    }
                    if (!wasSet) continue;

                    char oldKey[512], newKey[512];
                    idx_build_key_ex(&updIdx[ix],
                                     (const char *)metaCols, 256,
                                     (const char *)oldFields, 256,
                                     numMetaCols, oldKey, sizeof(oldKey));
                    idx_build_key_ex(&updIdx[ix],
                                     (const char *)metaCols, 256,
                                     (const char *)fields, 256,
                                     numMetaCols, newKey, sizeof(newKey));

                    char idxPath[1024];
                    snprintf(idxPath, sizeof(idxPath), "%u:%s:%u:%c",
                             updIdx[ix].table_id, updIdx[ix].index_name,
                             updIdx[ix].root_page, updIdx[ix].index_type);
                    if (oldKey[0]) btree_delete(idxPath, oldKey, pkKey);
                    if (newKey[0]) btree_insert(idxPath, newKey, pkKey);
                }
        }
    }

    return 0;
}

int UpdateProcess(void)
{
    char temp[RECORD_BUF_SIZE];
    char tblName[1024];
    char *tok;
    int s, c;

    /* Parse g_insert tokens: SET values followed by WHERE data */
    char allTokens[64][256];
    int numTokens = 0;

    strcpy(temp, g_insert);
    tok = strtok(temp, ";");
    while (tok && numTokens < 64) {
        strcpy(allTokens[numTokens], tok);
        numTokens++;
        tok = strtok(NULL, ";");
    }

    /* Parse SET column names from g_columnNames */
    char setCols[64][256];
    int numSetCols = 0;

    strcpy(temp, g_columnNames);
    tok = strtok(temp, ";");
    while (tok && numSetCols < 64) {
        strcpy(setCols[numSetCols], tok);
        numSetCols++;
        tok = strtok(NULL, ";");
    }

    int numSetVals;
    if (g_whereExpr != NULL) {
        numSetVals = numSetCols;
    } else {
        if (numTokens < 2) {
            printf("Error: UPDATE requires at least a SET value and a WHERE key\n");
            g_updateCount = 0;
            TruncateUpdate();
            return -1;
        }
        numSetVals = numTokens - 1;
    }

    /* Get table name (remove .dat extension) */
    strcpy(tblName, g_tblSelectionName);
    {
        char *dot = strstr(tblName, ".dat");
        if (dot) *dot = '\0';
    }

    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc allCols[CAT_MAX_COLUMNS];
    int allNCols;
    if (tapi_resolve(tblName, &td, allCols, &allNCols) < 0) {
        printf("Error: table not found\n");
        g_updateCount = 0;
        TruncateUpdate();
        return -1;
    }

    /* Read column names from catalog */
    char metaCols[64][256];
    int numMetaCols = 0;
    for (int i = 0; i < allNCols && i < 64; i++) {
        strncpy(metaCols[i], allCols[i].col_name, 255);
        metaCols[i][255] = '\0';
        numMetaCols++;
    }

    /* Validate SET values against column types */
    {
        int colTypes[64];
        int numTypes = 0;
        for (int i = 0; i < allNCols && i < 64; i++)
            colTypes[numTypes++] = allCols[i].type_code;

        if (numTypes > 0) {
            int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
            for (s = 0; s < minSet; s++) {
                for (c = 0; c < numMetaCols; c++) {
                    if (strcmp(metaCols[c], setCols[s]) == 0) {
                        if (c < numTypes && ValidateValue(allTokens[s], colTypes[c]) != 0) {
                            g_updateCount = 0;
                            TruncateUpdate();
                            return -1;
                        }
                        break;
                    }
                }
            }
        }
    }

    /* Validate NOT NULL constraints for SET columns */
    {
        int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
        for (s = 0; s < minSet; s++) {
            for (c = 0; c < numMetaCols; c++) {
                if (strcmp(metaCols[c], setCols[s]) == 0) {
                    if (c < allNCols && allCols[c].is_not_null &&
                        allTokens[s][0] == '\0') {
                        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                 "null value in column \"%s\" violates not-null constraint",
                                 setCols[s]);
                        g_gui_error = 1;
                        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_NOT_NULL_VIOLATION);
                        g_updateCount = 0;
                        TruncateUpdate();
                        return -1;
                    }
                    break;
                }
            }
        }
    }

    /* Validate UNIQUE constraints for SET columns */
    {
        int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
        for (s = 0; s < minSet; s++) {
            for (c = 0; c < numMetaCols; c++) {
                if (strcmp(metaCols[c], setCols[s]) == 0) {
                    if (c < allNCols && allCols[c].is_unique) {
                        if (allTokens[s][0] == '\0' ||
                            strcmp(allTokens[s], "\x01NULL\x01") == 0)
                            break;

                        /* Scan existing records for duplicate */
                        TableScanCursor scanCur;
                        if (tapi_scan_begin(&td, &scanCur) == 0) {
                            char uPk[256], uRec[RECORD_BUF_SIZE];
                            while (tapi_scan_next(&scanCur, uPk, uRec, sizeof(uRec)) == 0) {
                                int uRecLen = tup_record_len(uRec, sizeof(uRec));
                                char uFields[64][256];
                                int uNf = UpdateExtractAllFields(uRec, uRecLen,
                                                                  td.table_id, allCols, allNCols,
                                                                  uFields, NULL, 64);
                                char existVal[256];
                                if (c < uNf)
                                    strcpy(existVal, uFields[c]);
                                else
                                    existVal[0] = '\0';
                                if (strcmp(allTokens[s], existVal) == 0) {
                                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                             "duplicate key value violates unique constraint on column \"%s\" (value=%s)",
                                             setCols[s], allTokens[s]);
                                    g_gui_error = 1;
                                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                                    g_updateCount = 0;
                                    TruncateUpdate();
                                    return -1;
                                }
                            }
                        }
                    }
                    break;
                }
            }
        }
    }

    if (g_whereExpr != NULL) {
        /* ---------- Expression-based WHERE update ---------- */
        char colNames[64][128];
        int numCols = numMetaCols;
        for (int i = 0; i < numMetaCols; i++) {
            strncpy(colNames[i], metaCols[i], 127);
            colNames[i][127] = '\0';
        }

        /* Phase 1: iterate all records, evaluate WHERE, collect matching keys */
        int capacity = 64;
        int matchCount = 0;
        char **matchKeys = (char **)malloc(capacity * sizeof(char *));
        if (!matchKeys) {
            g_updateCount = 0;
            TruncateUpdate();
            return -1;
        }

        TableScanCursor cursor;
        char keyBuf[256];
        char recBuf[RECORD_BUF_SIZE];

        if (tapi_scan_begin(&td, &cursor) == 0) {
            while (tapi_scan_next(&cursor, keyBuf, recBuf, sizeof(recBuf)) == 0) {
                int recLen = tup_record_len(recBuf, sizeof(recBuf));
                char colValues[64][256];
                int numExtracted = UpdateExtractAllFields(recBuf, recLen,
                                                          td.table_id, allCols, allNCols,
                                                          colValues, NULL, 64);
                (void)numExtracted;

                char result[512];
                int ok = expr_evaluate(g_whereExpr,
                                       (const char (*)[128])colNames,
                                       (const char (*)[256])colValues,
                                       numCols,
                                       result, sizeof(result));
                int match = 0;
                if (ok) {
                    if (strcmp(result, "t") == 0 ||
                        strcasecmp(result, "true") == 0 ||
                        strcmp(result, "1") == 0)
                        match = 1;
                    else {
                        double v = strtod(result, NULL);
                        if (v != 0.0) match = 1;
                    }
                }

                if (match) {
                    if (matchCount >= capacity) {
                        capacity *= 2;
                        char **tmp2 = (char **)realloc(matchKeys,
                                                       capacity * sizeof(char *));
                        if (!tmp2) break;
                        matchKeys = tmp2;
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

        /* Phase 2: apply update to matched records (within limit) */
        int updated = 0;
        int i;
        for (i = effectiveStart; i < effectiveEnd; i++) {
            if (matchKeys[i]) {
                if (ApplyUpdateToRow(&td, allCols, allNCols, matchKeys[i],
                                     (const char (*)[256])setCols,
                                     (const char (*)[256])allTokens,
                                     numSetCols, numSetVals,
                                     (const char (*)[256])metaCols, numMetaCols,
                                     tblName) == 0)
                    updated++;
                free(matchKeys[i]);
            }
        }
        free(matchKeys);

        g_updateCount = updated;
        printf("%d record(s) updated.\n", updated);
    } else {
        /* ---------- Legacy PK-based update ---------- */
        char key[256];
        strcpy(key, allTokens[numTokens - 1]);

        if (ApplyUpdateToRow(&td, allCols, allNCols, key,
                             (const char (*)[256])setCols,
                             (const char (*)[256])allTokens,
                             numSetCols, numSetVals,
                             (const char (*)[256])metaCols, numMetaCols,
                             tblName) == 0) {
            g_updateCount = 1;
        } else {
            printf("Record not found for key: %s\n", key);
            g_updateCount = 0;
        }
    }

    printf("command(s) completed successfully!..\n");
    TruncateUpdate();

    return 0;
}

int GetUpdateTableName(char *pname)
{
    db_table_path(pname, g_tblUpdateTableName, sizeof(g_tblUpdateTableName));
    return 0;
}

int GetUpdateColumnName(char *pname)
{
    strcat(g_columnNames, pname);
    strcat(g_columnNames, ";");
    return 0;
}

int TruncateUpdate(void)
{
    memset(g_columnNames, '\0', 1024);
    memset(g_insert, '\0', RECORD_BUF_SIZE);
    memset(g_tblSelectionName, '\0', 1024);

    return 0;
}

char *ParseUpdate(char *arr)
{
    char *str = NULL;

    g_temp[0] = '\0';
    for (str = strtok(arr, ";"); str != NULL; str = strtok(NULL, ";"))
        strncpy(g_temp, str, sizeof(g_temp) - 1);

    return g_temp;
}
