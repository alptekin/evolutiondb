#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "expression.h"
#include "catalog_internal.h"
#include "table_api.h"

/* Row separator used between multiple value groups in g_insert. */
#define ROW_SEP '\x02'

int GetInsertions(char *name)
{
    strcat(g_insert, name);
    strcat(g_insert, ";");

    return 1;
}

int InsertRowSeparator(void)
{
    int len = (int)strlen(g_insert);
    if (len > 0 && g_insert[len - 1] == ';') {
        g_insert[len - 1] = ROW_SEP;
    } else {
        g_insert[len] = ROW_SEP;
        g_insert[len + 1] = '\0';
    }
    return 1;
}

int TruncateInsert(void)
{
    memset(g_insert, '\0', RECORD_BUF_SIZE);
    memset(g_tblInsertionName, '\0', 1024);

    return 1;
}

/* ---------- helpers -------------------------------------------------- */

static int split_row_values(char *row, char **vals, int maxVals)
{
    int n = 0;
    char *t = strtok(row, ";");
    while (t && n < maxVals) {
        vals[n++] = t;
        t = strtok(NULL, ";");
    }
    return n;
}

/* Read column names from catalog.
 * Returns number of columns found. */
static int InsertReadColumnNames(const char *tblName,
                                 char colNames[][128], int maxCols)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0)
        return 0;

    int count = ncols < maxCols ? ncols : maxCols;
    for (int i = 0; i < count; i++) {
        strncpy(colNames[i], cols[i].col_name, 127);
        colNames[i][127] = '\0';
    }
    return count;
}

/* Reorder a single row's values from user-specified column order to
 * table schema order. */
static int reorder_row_for_column_map(const char *tblName, char *rowData)
{
    char tableColNames[64][128];
    int numTableCols;
    char *userVals[64];
    int numUserVals, i, j;
    char buf[RECORD_BUF_SIZE];
    char valBuf[RECORD_BUF_SIZE];

    if (g_insertColumnCount <= 0) return 0;

    numTableCols = InsertReadColumnNames(tblName, tableColNames, 64);
    if (numTableCols <= 0) return 0;

    strncpy(valBuf, rowData, sizeof(valBuf) - 1);
    valBuf[sizeof(valBuf) - 1] = '\0';
    numUserVals = split_row_values(valBuf, userVals, 64);

    if (numUserVals != g_insertColumnCount) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "INSERT has %d value(s) but %d column(s) specified",
                 numUserVals, g_insertColumnCount);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DATA_EXCEPTION);
        return -1;
    }

    for (i = 0; i < g_insertColumnCount; i++) {
        int found = 0;
        for (j = 0; j < numTableCols; j++) {
            if (strcasecmp(g_insertColumns[i], tableColNames[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "column \"%s\" does not exist in table", g_insertColumns[i]);
            g_gui_error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_COLUMN);
            return -1;
        }
    }

    char defaultVals[64][256];
    int numDefaults = ReadDefaults(tblName, defaultVals, 64);

    buf[0] = '\0';
    for (i = 0; i < numTableCols; i++) {
        int userIdx = -1;
        for (j = 0; j < g_insertColumnCount; j++) {
            if (strcasecmp(tableColNames[i], g_insertColumns[j]) == 0) {
                userIdx = j;
                break;
            }
        }
        if (i > 0) strcat(buf, ";");
        if (userIdx >= 0) {
            strcat(buf, userVals[userIdx]);
        } else if (i < numDefaults && strcmp(defaultVals[i], "\x01NONE\x01") != 0) {
            /* Evaluate function-based defaults */
            if (strcasecmp(defaultVals[i], "gen_random_uuid()") == 0) {
                char uuid[64];
                ExprNode *e = expr_make_gen_random_uuid();
                expr_evaluate(e, NULL, NULL, 0, uuid, sizeof(uuid));
                strcat(buf, uuid);
            } else if (strcasecmp(defaultVals[i], "gen_random_uuid_v7()") == 0) {
                char uuid[64];
                ExprNode *e = expr_make_gen_random_uuid_v7();
                expr_evaluate(e, NULL, NULL, 0, uuid, sizeof(uuid));
                strcat(buf, uuid);
            } else if (strcasecmp(defaultVals[i], "snowflake_id()") == 0) {
                char sfid[64];
                ExprNode *e = expr_make_snowflake_id();
                expr_evaluate(e, NULL, NULL, 0, sfid, sizeof(sfid));
                strcat(buf, sfid);
            } else if (strcasecmp(defaultVals[i], "CURRENT_TIMESTAMP") == 0) {
                char ts[64];
                ExprNode *e = expr_make_current_timestamp();
                expr_evaluate(e, NULL, NULL, 0, ts, sizeof(ts));
                strcat(buf, ts);
            } else {
                strcat(buf, defaultVals[i]);
            }
        } else {
            strcat(buf, "\x01NULL\x01");
        }
    }
    strcat(buf, ";");

    strncpy(rowData, buf, RECORD_BUF_SIZE - 1);
    rowData[RECORD_BUF_SIZE - 1] = '\0';
    return 0;
}

static int validate_types(const char *tblName, char **vals, int numValues)
{
    int colTypes[64];
    int numTypes = ReadColumnTypes(tblName, colTypes, 64);
    int i;

    if (numTypes <= 0) return 0;

    if (numValues != numTypes) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "INSERT has %d value(s) but table has %d column(s)",
                 numValues, numTypes);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DATA_EXCEPTION);
        return -1;
    }
    for (i = 0; i < numValues; i++) {
        if (ValidateValue(vals[i], colTypes[i]) != 0)
            return -1;
    }
    return 0;
}

static int validate_not_null(const char *tblName, char **vals, int numValues)
{
    int nullFlags[64];
    int numFlags = ReadNullFlags(tblName, nullFlags, 64);
    int i;

    if (numFlags <= 0) return 0;

    for (i = 0; i < numFlags && i < numValues; i++) {
        if (nullFlags[i] && (vals[i][0] == '\0' ||
            strcmp(vals[i], "\x01NULL\x01") == 0)) {
            /* Read column names for error message */
            char colNames[64][128];
            int nc = InsertReadColumnNames(tblName, colNames, 64);

            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "null value in column \"%s\" violates not-null constraint",
                     (i < nc) ? colNames[i] : "unknown");
            g_gui_error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_NOT_NULL_VIOLATION);
            return -1;
        }
    }
    return 0;
}

/* Validate UNIQUE constraints using B+ tree PK scan. */
static int validate_unique(const char *tblName,
                           char **vals, int numValues)
{
    int uniqueFlags[64];
    int numFlags = ReadUniqueFlags(tblName, uniqueFlags, 64);
    int i;

    if (numFlags <= 0) return 0;

    int hasUnique = 0;
    for (i = 0; i < numFlags && i < numValues; i++) {
        if (uniqueFlags[i]) { hasUnique = 1; break; }
    }
    if (!hasUnique) return 0;

    char colNames[64][128];
    int numColNames = InsertReadColumnNames(tblName, colNames, 64);

    /* Scan all existing records via B+ tree cursor */
    TableDesc td;
    if (tapi_resolve(tblName, &td, NULL, NULL) < 0)
        return 0;

    TableScanCursor cursor;
    if (tapi_scan_begin(&td, &cursor) < 0)
        return 0; /* empty table */

    char pkBuf[256];
    char recBuf[RECORD_BUF_SIZE];
    while (tapi_scan_next(&cursor, pkBuf, recBuf, sizeof(recBuf)) == 0) {
        for (i = 0; i < numFlags && i < numValues; i++) {
            if (!uniqueFlags[i]) continue;
            if (strcmp(vals[i], "\x01NULL\x01") == 0) continue;

            /* Extract field i from existing record */
            char existingVal[256];
            char tmp[RECORD_BUF_SIZE];
            char *tok;
            int idx = 0;

            strncpy(tmp, recBuf, sizeof(tmp) - 1);
            tmp[sizeof(tmp) - 1] = '\0';
            tok = strtok(tmp, ";");
            existingVal[0] = '\0';
            while (tok) {
                if (idx == i) {
                    strncpy(existingVal, tok, sizeof(existingVal) - 1);
                    existingVal[sizeof(existingVal) - 1] = '\0';
                    break;
                }
                idx++;
                tok = strtok(NULL, ";");
            }

            if (strcmp(vals[i], existingVal) == 0) {
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "duplicate key value violates unique constraint on column \"%s\" (value=%s)",
                         (i < numColNames) ? colNames[i] : "unknown", vals[i]);
                g_gui_error = 1;
                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                return -1;
            }
        }
    }

    return 0;
}

static int validate_check(const char *tblName, char **vals, int numValues)
{
    char constraints[MAX_CHECK_CONSTRAINTS][1024];
    int numChecks = ReadCheckConstraints(tblName, constraints, MAX_CHECK_CONSTRAINTS);
    int i;

    if (numChecks <= 0) return 0;

    char colNames[64][128];
    int numCols = InsertReadColumnNames(tblName, colNames, 64);
    if (numCols <= 0) return 0;

    char colValues[64][256];
    int c;
    for (c = 0; c < numCols && c < numValues && c < 64; c++) {
        if (strcmp(vals[c], "\x01NULL\x01") == 0)
            colValues[c][0] = '\0';
        else {
            strncpy(colValues[c], vals[c], 255);
            colValues[c][255] = '\0';
        }
    }

    for (i = 0; i < numChecks; i++) {
        ExprNode *checkExpr = expr_deserialize(constraints[i]);
        if (!checkExpr) continue;

        char result[512];
        int ok = expr_evaluate(checkExpr,
                               (const char (*)[128])colNames,
                               (const char (*)[256])colValues,
                               numCols,
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
                     "new row violates check constraint");
            g_gui_error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_CHECK_VIOLATION);
            return -1;
        }
    }

    return 0;
}

/* Validate FOREIGN KEY constraints: each FK column value must exist
 * in the referenced table's referenced column(s). */
static int validate_foreign_keys(const char *tblName, char **vals, int numValues)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0)
        return 0;

    ConstraintDesc constraints[32];
    int numCon = cat_list_constraints(td.table_id, constraints, 32);
    if (numCon <= 0) return 0;

    char colNames[64][128];
    int numColNames = InsertReadColumnNames(tblName, colNames, 64);

    for (int ci = 0; ci < numCon; ci++) {
        if (constraints[ci].constraint_type != 'F') continue;

        /* Parse definition: "local_col1,col2|on_delete|on_update" */
        char localColsCsv[1024];
        strncpy(localColsCsv, constraints[ci].definition, sizeof(localColsCsv) - 1);
        localColsCsv[sizeof(localColsCsv) - 1] = '\0';
        char *pipe = strchr(localColsCsv, '|');
        if (pipe) *pipe = '\0';

        /* Parse referenced columns */
        char refColsCsv[256];
        strncpy(refColsCsv, constraints[ci].ref_columns, sizeof(refColsCsv) - 1);
        refColsCsv[sizeof(refColsCsv) - 1] = '\0';

        /* Build FK value from local columns */
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
                int found = 0;
                for (int j = 0; j < numColNames && j < numValues; j++) {
                    if (strcasecmp(colNames[j], colName) == 0) {
                        if (strcmp(vals[j], "\x01NULL\x01") != 0)
                            allNull = 0;
                        if (!first) strcat(fkValue, "|");
                        strcat(fkValue, vals[j]);
                        first = 0;
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    if (!first) strcat(fkValue, "|");
                    strcat(fkValue, "\x01NULL\x01");
                    first = 0;
                }
                colName = strtok_r(NULL, ",", &saveptr);
            }
        }

        /* NULL FK values are allowed (no referential check) */
        if (allNull) continue;

        /* Resolve referenced table by ID */
        TableDesc refTd;
        ColumnDesc refCols[CAT_MAX_COLUMNS];
        int refColCount;
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
                    if (tables[ti].table_id == constraints[ci].ref_table_id) {
                        refTd = tables[ti];
                        refColCount = cat_find_columns(refTd.table_id, refCols, CAT_MAX_COLUMNS);
                        foundRef = 1;
                        break;
                    }
                }
                if (foundRef) break;
            }
            if (!foundRef) continue;
        }

        /* Check if referenced columns form the PK — enables direct B+ tree lookup */
        int refIsPK = 1;
        {
            char refColListBuf[256];
            strncpy(refColListBuf, refColsCsv, sizeof(refColListBuf) - 1);
            refColListBuf[sizeof(refColListBuf) - 1] = '\0';
            char *saveptr = NULL;
            char *refColName = strtok_r(refColListBuf, ",", &saveptr);
            while (refColName) {
                int isPk = 0;
                for (int k = 0; k < refColCount; k++) {
                    if (strcasecmp(refCols[k].col_name, refColName) == 0) {
                        if (refCols[k].is_pk) isPk = 1;
                        break;
                    }
                }
                if (!isPk) { refIsPK = 0; break; }
                refColName = strtok_r(NULL, ",", &saveptr);
            }
        }

        if (refIsPK) {
            /* Direct PK lookup in referenced table */
            BTree2 refPkTree = tapi_pk_tree(&refTd);
            RowID rid;
            if (bt2_search(&refPkTree, fkValue, &rid) < 0) {
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "insert or update on table violates foreign key constraint "
                         "(value \"%s\" not found in referenced table \"%s\")",
                         fkValue, refTd.table_name);
                g_gui_error = 1;
                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
                return -1;
            }
        } else {
            /* Table scan for non-PK referenced columns */
            int found = 0;
            TableScanCursor scanCur;
            if (tapi_scan_begin(&refTd, &scanCur) == 0) {
                char scanKey[256], scanRec[RECORD_BUF_SIZE];
                while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                    /* Extract referenced column values and build composite value */
                    char refRecValue[1024] = "";
                    char refColListBuf[256];
                    strncpy(refColListBuf, refColsCsv, sizeof(refColListBuf) - 1);
                    refColListBuf[sizeof(refColListBuf) - 1] = '\0';
                    char *saveptr = NULL;
                    char *refColName = strtok_r(refColListBuf, ",", &saveptr);
                    int first = 1;
                    while (refColName) {
                        for (int k = 0; k < refColCount; k++) {
                            if (strcasecmp(refCols[k].col_name, refColName) == 0) {
                                char fieldVal[256] = "";
                                char recCopy[RECORD_BUF_SIZE];
                                strncpy(recCopy, scanRec, sizeof(recCopy) - 1);
                                recCopy[sizeof(recCopy) - 1] = '\0';
                                char *field = strtok(recCopy, ";");
                                int idx = 0;
                                while (field) {
                                    if (idx == k) {
                                        strncpy(fieldVal, field, sizeof(fieldVal) - 1);
                                        fieldVal[sizeof(fieldVal) - 1] = '\0';
                                        break;
                                    }
                                    idx++;
                                    field = strtok(NULL, ";");
                                }
                                if (!first) strcat(refRecValue, "|");
                                strcat(refRecValue, fieldVal);
                                first = 0;
                                break;
                            }
                        }
                        refColName = strtok_r(NULL, ",", &saveptr);
                    }
                    if (strcmp(fkValue, refRecValue) == 0) {
                        found = 1;
                        break;
                    }
                }
            }
            if (!found) {
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "insert or update on table violates foreign key constraint "
                         "(value \"%s\" not found in referenced table \"%s\")",
                         fkValue, refTd.table_name);
                g_gui_error = 1;
                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
                return -1;
            }
        }
    }
    return 0;
}

static int apply_auto_increment(const char *tblName, char **vals, int numValues,
                                int autoIncCol, int *counterInOut, int step,
                                char *generatedVal, int genBufSize)
{
    if (autoIncCol < 0 || autoIncCol >= numValues) return -1;

    if (strcmp(vals[autoIncCol], "\x01NULL\x01") == 0 ||
        strcmp(vals[autoIncCol], "0") == 0 ||
        vals[autoIncCol][0] == '\0') {
        *counterInOut += step;
        snprintf(generatedVal, genBufSize, "%d", *counterInOut);
        vals[autoIncCol] = generatedVal;
        return 1;
    } else {
        long explicitVal = strtol(vals[autoIncCol], NULL, 10);
        if (explicitVal > *counterInOut)
            *counterInOut = (int)explicitVal;
        return 0;
    }
}

/* Store a single row into heap + PK B+ tree.
 * Returns 0 on success, 1 on duplicate key, -1 on error. */
static int store_single_row(TableDesc *td, const ColumnDesc *cols, int ncols,
                            const char *tblName, char *rowData)
{
    char pkKey[1024];

    /* Build PK key from record values */
    if (tapi_build_pk_key(cols, ncols, rowData, pkKey, sizeof(pkKey)) < 0)
        return -1;

    if (pkKey[0] == '\0') return -1;

    /* Check for duplicate PK */
    BTree2 pk_tree = tapi_pk_tree(td);
    RowID existing;
    if (bt2_search(&pk_tree, pkKey, &existing) == 0)
        return 1; /* duplicate */

    /* Log undo entry before modifying data */
    if (g_tx_undo_callback)
        g_tx_undo_callback(1 /*TX_OP_INSERT*/, tblName, pkKey, NULL);

    /* Insert record into heap page */
    uint16_t rec_len = (uint16_t)(strlen(rowData) + 1);
    RowID rid = tapi_heap_insert(td, rowData, rec_len);
    if (rid.page_no == 0) return -1;

    /* Insert into PK B+ tree */
    if (bt2_insert(&pk_tree, pkKey, rid) != 0) {
        /* Shouldn't happen since we checked, but clean up */
        tapi_heap_delete(rid);
        return 1;
    }

    /* Update pk_root_page if it changed (bt2_insert may split root) */
    td->pk_root_page = pk_tree.root_page;

    return 0;
}

/* -------------------------------------------------------------------- */

int InsertProcess(void)
{
    char tblName[1024];
    char allRows[RECORD_BUF_SIZE];
    char *rowPtrs[256];
    int numRows, i;
    int retval = 0;
    char (*reorderedRows)[RECORD_BUF_SIZE] = NULL;

    /* Extract base table name */
    strcpy(tblName, g_tblInsertionName);
    {
        char *dot = strstr(tblName, ".dat");
        if (dot) *dot = '\0';
    }

    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tblName, &td, cols, &ncols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "could not open table \"%s\"", tblName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        TruncateInsert();
        return -1;
    }

    /* Split g_insert into rows using ROW_SEP */
    strncpy(allRows, g_insert, sizeof(allRows) - 1);
    allRows[sizeof(allRows) - 1] = '\0';

    numRows = 0;
    {
        char *p = allRows;
        rowPtrs[numRows++] = p;
        while (*p) {
            if (*p == ROW_SEP) {
                *p = '\0';
                p++;
                if (*p) rowPtrs[numRows++] = p;
                if (numRows >= 256) break;
            } else {
                p++;
            }
        }
    }

    reorderedRows =
        (char (*)[RECORD_BUF_SIZE])malloc(256 * RECORD_BUF_SIZE);
    if (!reorderedRows) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "out of memory for INSERT batch");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INTERNAL_ERROR);
        TruncateInsert();
        return -1;
    }

    /* Read AUTO_INCREMENT info once */
    int autoIncCol = td.auto_inc_col;
    int autoIncCounter = td.auto_inc_counter;
    int autoIncStep = td.auto_inc_step;

    for (i = 0; i < numRows; i++) {
        char valBuf[RECORD_BUF_SIZE];
        char *vals[64];
        int nv;

        strncpy(reorderedRows[i], rowPtrs[i], RECORD_BUF_SIZE - 1);
        reorderedRows[i][RECORD_BUF_SIZE - 1] = '\0';

        if (g_insertColumnCount > 0) {
            if (reorder_row_for_column_map(tblName, reorderedRows[i]) != 0) {
                TruncateInsert();
                retval = -1; goto cleanup;
            }
        }

        /* Apply AUTO_INCREMENT before validation */
        if (autoIncCol >= 0) {
            char genBuf[32];
            strncpy(valBuf, reorderedRows[i], sizeof(valBuf) - 1);
            valBuf[sizeof(valBuf) - 1] = '\0';
            nv = split_row_values(valBuf, vals, 64);
            if (apply_auto_increment(tblName, vals, nv, autoIncCol,
                                     &autoIncCounter, autoIncStep,
                                     genBuf, sizeof(genBuf)) >= 0) {
                int k;
                reorderedRows[i][0] = '\0';
                for (k = 0; k < nv; k++) {
                    if (k > 0) strcat(reorderedRows[i], ";");
                    strcat(reorderedRows[i], vals[k]);
                }
                strcat(reorderedRows[i], ";");
            }
        }

        /* Validate */
        strncpy(valBuf, reorderedRows[i], sizeof(valBuf) - 1);
        valBuf[sizeof(valBuf) - 1] = '\0';
        nv = split_row_values(valBuf, vals, 64);

        if (validate_types(tblName, vals, nv) != 0) {
            TruncateInsert();
            retval = -1; goto cleanup;
        }
        if (validate_not_null(tblName, vals, nv) != 0) {
            TruncateInsert();
            retval = -1; goto cleanup;
        }
        if (validate_unique(tblName, vals, nv) != 0) {
            TruncateInsert();
            retval = -1; goto cleanup;
        }
        if (validate_check(tblName, vals, nv) != 0) {
            TruncateInsert();
            retval = -1; goto cleanup;
        }
        if (validate_foreign_keys(tblName, vals, nv) != 0) {
            TruncateInsert();
            retval = -1; goto cleanup;
        }
    }

    /* Read index metadata for secondary indexes */
    char idxNames[16][256], idxCols[16][256], idxPaths[16][1024];
    char idxTypes[16];
    int nIdx = index_list_with_types(tblName, idxNames, idxCols, idxPaths, idxTypes, 16);
    char colNames2[64][128];
    int numCols2 = 0;
    if (nIdx > 0)
        numCols2 = InsertReadColumnNames(tblName, colNames2, 64);

    /* Insert each row */
    g_insertCount = 0;
    for (i = 0; i < numRows; i++) {
        /* Pre-insert: check unique index constraints BEFORE storing */
        char preIdxKeys[16][512];
        char prePkBuf[256] = "";
        if (nIdx > 0) {
            char tmpPre[RECORD_BUF_SIZE];
            char *valsPre[64];
            int nvPre = 0;
            strncpy(tmpPre, reorderedRows[i], sizeof(tmpPre) - 1);
            tmpPre[sizeof(tmpPre) - 1] = '\0';
            char *tp = strtok(tmpPre, ";");
            while (tp && nvPre < 64) { valsPre[nvPre++] = tp; tp = strtok(NULL, ";"); }

            /* Extract PK for secondary index values */
            tapi_build_pk_key_from_vals(cols, ncols, valsPre, nvPre,
                                        prePkBuf, sizeof(prePkBuf));

            int ix;
            for (ix = 0; ix < nIdx; ix++) {
                int isComposite = (strchr(idxCols[ix], ',') != NULL);
                preIdxKeys[ix][0] = '\0';

                if (isComposite) {
                    char colSpec[256];
                    strncpy(colSpec, idxCols[ix], sizeof(colSpec) - 1);
                    colSpec[sizeof(colSpec) - 1] = '\0';
                    char *ctok = strtok(colSpec, ",");
                    int first = 1;
                    while (ctok) {
                        int ci;
                        for (ci = 0; ci < numCols2; ci++) {
                            if (strcasecmp(colNames2[ci], ctok) == 0 && ci < nvPre) {
                                if (!first) strcat(preIdxKeys[ix], "|");
                                strcat(preIdxKeys[ix], valsPre[ci]);
                                first = 0;
                                break;
                            }
                        }
                        ctok = strtok(NULL, ",");
                    }
                } else {
                    int ci;
                    for (ci = 0; ci < numCols2; ci++) {
                        if (strcasecmp(colNames2[ci], idxCols[ix]) == 0 && ci < nvPre) {
                            strncpy(preIdxKeys[ix], valsPre[ci], sizeof(preIdxKeys[ix]) - 1);
                            break;
                        }
                    }
                }

                if (preIdxKeys[ix][0] && idxTypes[ix] == 'U') {
                    char dupCheck[1][256];
                    if (btree_search(idxPaths[ix], preIdxKeys[ix], dupCheck, 1) > 0) {
                        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                 "duplicate key value violates unique index \"%s\" (key=%s)",
                                 idxNames[ix], preIdxKeys[ix]);
                        g_gui_error = 1;
                        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                        TruncateInsert();
                        retval = -1; goto cleanup;
                    }
                }
            }
        }

        int rc = store_single_row(&td, cols, ncols, tblName, reorderedRows[i]);
        if (rc != 0) {
            char valBuf2[RECORD_BUF_SIZE];
            char *key;
            strncpy(valBuf2, reorderedRows[i], sizeof(valBuf2) - 1);
            valBuf2[sizeof(valBuf2) - 1] = '\0';
            key = strtok(valBuf2, ";");
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "duplicate key value violates unique constraint (key=%s, row %d)",
                     key ? key : "?", i + 1);
            g_gui_error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
            TruncateInsert();
            retval = -1; goto cleanup;
        }
        g_insertCount++;

        /* Post-insert: update secondary B-tree indexes */
        if (nIdx > 0) {
            int ix;
            for (ix = 0; ix < nIdx; ix++) {
                if (preIdxKeys[ix][0])
                    btree_insert(idxPaths[ix], preIdxKeys[ix], prePkBuf);
            }
        }
    }

    printf("command(s) completed successfully!..\n");

    /* Persist AUTO_INCREMENT counter */
    if (autoIncCol >= 0) {
        cat_update_auto_inc(td.table_id, td.table_name,
                            td.schema_id, autoIncCounter);
    }

    TruncateInsert();

cleanup:
    free(reorderedRows);
    return retval;
}

char *ParseInsertion(char *arr)
{
    static char *str;

    str = strtok(arr, ";");

    return str;
}

int GetInsertionTableName(char *name)
{
    db_table_path(name, g_tblInsertionName, sizeof(g_tblInsertionName));

    return 0;
}
