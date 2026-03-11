#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "expression.h"
#include "catalog_internal.h"
#include "table_api.h"

/* Extract field at colIndex from semicolon-separated record */
static void UpdateGetFieldValue(const char *data, int colIndex,
                                char *buf, int bufSize)
{
    char tmp[2048];
    char *t;
    int idx = 0;

    strncpy(tmp, data, sizeof(tmp) - 1);
    tmp[sizeof(tmp) - 1] = '\0';
    t = strtok(tmp, ";");
    while (t) {
        if (idx == colIndex) {
            strncpy(buf, t, bufSize - 1);
            buf[bufSize - 1] = '\0';
            return;
        }
        idx++;
        t = strtok(NULL, ";");
    }
    buf[0] = '\0';
}

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
    char temp[RECORD_BUF_SIZE];
    char *tok;
    int s, c, i;

    /* Fetch record by PK from B+ tree + heap */
    BTree2 pk_tree = tapi_pk_tree(td);
    RowID rid;
    if (bt2_search(&pk_tree, pkKey, &rid) < 0)
        return -1;
    if (tapi_heap_read(rid, existingData, sizeof(existingData)) < 0)
        return -1;

    /* Log undo entry before modifying data */
    if (g_tx_undo_callback)
        g_tx_undo_callback(2 /*TX_OP_UPDATE*/, tblName,
                           pkKey, existingData);

    /* Parse existing record into fields */
    char fields[64][256];
    int numFields = 0;

    strncpy(temp, existingData, sizeof(temp) - 1);
    temp[sizeof(temp) - 1] = '\0';
    tok = strtok(temp, ";");
    while (tok && numFields < 64) {
        strcpy(fields[numFields], tok);
        numFields++;
        tok = strtok(NULL, ";");
    }

    /* Replace only the SET columns with new values */
    {
        int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
        for (s = 0; s < minSet; s++) {
            for (c = 0; c < numMetaCols; c++) {
                if (strcmp(metaCols[c], setCols[s]) == 0) {
                    if (c < numFields) {
                        strcpy(fields[c], setVals[s]);
                    }
                    break;
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

            /* Parse local columns from definition */
            char localColsCsv[1024];
            strncpy(localColsCsv, fkConstraints[fi].definition, sizeof(localColsCsv) - 1);
            localColsCsv[sizeof(localColsCsv) - 1] = '\0';
            char *pipe = strchr(localColsCsv, '|');
            if (pipe) *pipe = '\0';

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
                            if (!first) strcat(fkValue, "|");
                            strcat(fkValue, fields[mc]);
                            first = 0;
                            break;
                        }
                    }
                    colName = strtok_r(NULL, ",", &saveptr);
                }
            }
            if (allNull) continue;

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
                    char uqTmp[RECORD_BUF_SIZE];
                    strncpy(uqTmp, uqRecBuf, sizeof(uqTmp) - 1);
                    char *uqFields[64];
                    int uqNf = 0;
                    char *uf = strtok(uqTmp, ";");
                    while (uf && uqNf < 64) { uqFields[uqNf++] = uf; uf = strtok(NULL, ";"); }

                    char existComposite[1024] = "";
                    for (int uc = 0; uc < numUqCols; uc++) {
                        if (uc > 0) strcat(existComposite, "|");
                        if (uqColIndices[uc] < uqNf)
                            strcat(existComposite, uqFields[uqColIndices[uc]]);
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

    /* Build updated record string */
    {
        char newRecord[RECORD_BUF_SIZE] = "";

        for (i = 0; i < numFields; i++) {
            strcat(newRecord, fields[i]);
            strcat(newRecord, ";");
        }

        /* Save old field values for index update */
        char oldFields[64][256];
        {
            char oldTemp[RECORD_BUF_SIZE];
            char *otok;
            int oCount = 0;
            strncpy(oldTemp, existingData, sizeof(oldTemp) - 1);
            oldTemp[sizeof(oldTemp) - 1] = '\0';
            otok = strtok(oldTemp, ";");
            while (otok && oCount < 64) {
                strncpy(oldFields[oCount], otok, 255);
                oldFields[oCount][255] = '\0';
                oCount++;
                otok = strtok(NULL, ";");
            }
        }

        /* Pre-store: check unique index constraints */
        if (tblName && tblName[0]) {
            char idxN[16][256], idxC[16][256], idxP[16][1024];
            char idxT[16];
            int nIdx = index_list_with_types(tblName, idxN, idxC, idxP, idxT, 16);
            if (nIdx > 0) {
                int ix;
                for (ix = 0; ix < nIdx; ix++) {
                    if (idxT[ix] != 'U') continue;
                    int minSet2 = numSetVals < numSetCols ? numSetVals : numSetCols;
                    int isComposite = (strchr(idxC[ix], ',') != NULL);

                    int wasSet = 0;
                    if (isComposite) {
                        char colSpec[256];
                        strncpy(colSpec, idxC[ix], sizeof(colSpec) - 1);
                        colSpec[sizeof(colSpec) - 1] = '\0';
                        char *ct = strtok(colSpec, ",");
                        while (ct) {
                            int si;
                            for (si = 0; si < minSet2; si++) {
                                if (strcasecmp(setCols[si], ct) == 0) { wasSet = 1; break; }
                            }
                            if (wasSet) break;
                            ct = strtok(NULL, ",");
                        }
                    } else {
                        int si;
                        for (si = 0; si < minSet2; si++) {
                            if (strcasecmp(setCols[si], idxC[ix]) == 0) { wasSet = 1; break; }
                        }
                    }
                    if (!wasSet) continue;

                    if (isComposite) {
                        char oldKey[512] = "", newKey[512] = "";
                        char colSpec2[256];
                        int si, first;
                        strncpy(colSpec2, idxC[ix], sizeof(colSpec2) - 1);
                        colSpec2[sizeof(colSpec2) - 1] = '\0';
                        char *ct = strtok(colSpec2, ",");
                        first = 1;
                        while (ct) {
                            for (si = 0; si < numMetaCols; si++) {
                                if (strcasecmp(metaCols[si], ct) == 0 && si < numFields) {
                                    if (!first) { strcat(oldKey, "|"); strcat(newKey, "|"); }
                                    strcat(oldKey, oldFields[si]);
                                    strcat(newKey, fields[si]);
                                    first = 0;
                                    break;
                                }
                            }
                            ct = strtok(NULL, ",");
                        }
                        if (newKey[0] && strcmp(oldKey, newKey) != 0) {
                            char dupCheck[1][256];
                            if (btree_search(idxP[ix], newKey, dupCheck, 1) > 0) {
                                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                         "duplicate key value violates unique index \"%s\"",
                                         idxN[ix]);
                                g_gui_error = 1;
                                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                                return -1;
                            }
                        }
                    } else {
                        int colIdx = -1, si;
                        for (si = 0; si < numMetaCols; si++) {
                            if (strcasecmp(metaCols[si], idxC[ix]) == 0) { colIdx = si; break; }
                        }
                        if (colIdx >= 0 && colIdx < numFields &&
                            fields[colIdx][0] && strcmp(oldFields[colIdx], fields[colIdx]) != 0) {
                            char dupCheck[1][256];
                            if (btree_search(idxP[ix], fields[colIdx], dupCheck, 1) > 0) {
                                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                         "duplicate key value violates unique index \"%s\" (key=%s)",
                                         idxN[ix], fields[colIdx]);
                                g_gui_error = 1;
                                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                                return -1;
                            }
                        }
                    }
                }
            }
        }

        /* Update record in heap (may move to new page) */
        uint16_t newLen = (uint16_t)(strlen(newRecord) + 1);
        RowID newRid = tapi_heap_update(td, rid, newRecord, newLen);
        if (newRid.page_no == 0)
            return -1;

        /* If record moved, update PK B+ tree */
        if (newRid.page_no != rid.page_no || newRid.slot_idx != rid.slot_idx) {
            bt2_update(&pk_tree, pkKey, newRid);
            td->pk_root_page = pk_tree.root_page;
        }

        /* Post-store: update secondary B-tree indexes for changed columns */
        if (tblName && tblName[0]) {
            char idxN[16][256], idxC[16][256], idxP[16][1024];
            char idxT[16];
            int nIdx = index_list_with_types(tblName, idxN, idxC, idxP, idxT, 16);
            if (nIdx > 0) {
                int ix;
                for (ix = 0; ix < nIdx; ix++) {
                    int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
                    int isComposite = (strchr(idxC[ix], ',') != NULL);

                    int wasSet = 0;
                    if (isComposite) {
                        char colSpec[256];
                        strncpy(colSpec, idxC[ix], sizeof(colSpec) - 1);
                        colSpec[sizeof(colSpec) - 1] = '\0';
                        char *ct = strtok(colSpec, ",");
                        while (ct) {
                            int si;
                            for (si = 0; si < minSet; si++) {
                                if (strcasecmp(setCols[si], ct) == 0) { wasSet = 1; break; }
                            }
                            if (wasSet) break;
                            ct = strtok(NULL, ",");
                        }
                    } else {
                        int si;
                        for (si = 0; si < minSet; si++) {
                            if (strcasecmp(setCols[si], idxC[ix]) == 0) { wasSet = 1; break; }
                        }
                    }
                    if (!wasSet) continue;

                    if (isComposite) {
                        char oldKey[512] = "", newKey[512] = "";
                        char colSpec2[256];
                        int si, first;

                        strncpy(colSpec2, idxC[ix], sizeof(colSpec2) - 1);
                        colSpec2[sizeof(colSpec2) - 1] = '\0';
                        char *ct = strtok(colSpec2, ",");
                        first = 1;
                        while (ct) {
                            for (si = 0; si < numMetaCols; si++) {
                                if (strcasecmp(metaCols[si], ct) == 0 && si < numFields) {
                                    if (!first) { strcat(oldKey, "|"); strcat(newKey, "|"); }
                                    strcat(oldKey, oldFields[si]);
                                    strcat(newKey, fields[si]);
                                    first = 0;
                                    break;
                                }
                            }
                            ct = strtok(NULL, ",");
                        }
                        if (oldKey[0]) btree_delete(idxP[ix], oldKey, pkKey);
                        if (newKey[0]) btree_insert(idxP[ix], newKey, pkKey);
                    } else {
                        int colIdx = -1, si;
                        for (si = 0; si < numMetaCols; si++) {
                            if (strcasecmp(metaCols[si], idxC[ix]) == 0) { colIdx = si; break; }
                        }
                        if (colIdx < 0 || colIdx >= numFields) continue;
                        if (oldFields[colIdx][0])
                            btree_delete(idxP[ix], oldFields[colIdx], pkKey);
                        if (fields[colIdx][0])
                            btree_insert(idxP[ix], fields[colIdx], pkKey);
                    }
                }
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
                                char existVal[256];
                                UpdateGetFieldValue(uRec, c, existVal, sizeof(existVal));
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
                char colValues[64][256];
                int cv;
                for (cv = 0; cv < numCols && cv < 64; cv++) {
                    UpdateGetFieldValue(recBuf, cv, colValues[cv], 256);
                }

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

        /* Phase 2: apply update to all matched records */
        int updated = 0;
        int i;
        for (i = 0; i < matchCount; i++) {
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
