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

/* Row separator used between multiple value groups in g_ins.data. */
#define ROW_SEP '\x02'

/* Capture first auto-generated value for LAST_INSERT_ID() */
static void capture_generated_id(const char *val)
{
    if (g_last_insert_id[0] == '\0') {
        strncpy(g_last_insert_id, val, sizeof(g_last_insert_id) - 1);
        g_last_insert_id[sizeof(g_last_insert_id) - 1] = '\0';
    }
}

int GetInsertions(char *name)
{
    strcat(g_ins.data, name);
    strcat(g_ins.data, ";");

    return 1;
}

int InsertRowSeparator(void)
{
    int len = (int)strlen(g_ins.data);
    if (len > 0 && g_ins.data[len - 1] == ';') {
        g_ins.data[len - 1] = ROW_SEP;
    } else {
        g_ins.data[len] = ROW_SEP;
        g_ins.data[len + 1] = '\0';
    }
    return 1;
}

int TruncateInsert(void)
{
    memset(g_ins.data, '\0', RECORD_BUF_SIZE);
    memset(g_ins.tblName, '\0', 1024);

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

    if (g_ins.columnCount <= 0) return 0;

    numTableCols = InsertReadColumnNames(tblName, tableColNames, 64);
    if (numTableCols <= 0) return 0;

    strncpy(valBuf, rowData, sizeof(valBuf) - 1);
    valBuf[sizeof(valBuf) - 1] = '\0';
    numUserVals = split_row_values(valBuf, userVals, 64);

    if (numUserVals != g_ins.columnCount) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "INSERT has %d value(s) but %d column(s) specified",
                 numUserVals, g_ins.columnCount);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DATA_EXCEPTION);
        return -1;
    }

    /* Load column metadata for generated column checks */
    TableDesc reorderTd;
    ColumnDesc reorderCols[CAT_MAX_COLUMNS];
    int reorderNcols;
    tapi_resolve(tblName, &reorderTd, reorderCols, &reorderNcols);

    for (i = 0; i < g_ins.columnCount; i++) {
        int found = 0;
        for (j = 0; j < numTableCols; j++) {
            if (strcasecmp(g_ins.columns[i], tableColNames[j]) == 0) {
                found = 1;
                /* Block writes to generated columns */
                if (j < reorderNcols && reorderCols[j].generated_mode != GENMODE_NONE) {
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "cannot insert a non-DEFAULT value into column \"%s\" "
                             "because it is a generated column", g_ins.columns[i]);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DATA_EXCEPTION);
                    return -1;
                }
                break;
            }
        }
        if (!found) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "column \"%s\" does not exist in table", g_ins.columns[i]);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_COLUMN);
            return -1;
        }
    }

    char defaultVals[64][256];
    int numDefaults = ReadDefaults(tblName, defaultVals, 64);

    /* Expression default tracking for pass 2 */
    int exprDefCols[64];
    char exprDefStrs[64][512];
    int numExprDefs = 0;

    /* Pass 1: fill user values, literal defaults, function defaults.
     * Expression defaults get a NULL placeholder — resolved in pass 2. */
    buf[0] = '\0';
    for (i = 0; i < numTableCols; i++) {
        int userIdx = -1;
        for (j = 0; j < g_ins.columnCount; j++) {
            if (strcasecmp(tableColNames[i], g_ins.columns[j]) == 0) {
                userIdx = j;
                break;
            }
        }
        if (i > 0) strcat(buf, ";");
        if (userIdx >= 0) {
            strcat(buf, userVals[userIdx]);
        } else if (i < numDefaults && strcmp(defaultVals[i], "\x01NONE\x01") != 0) {
            /* Expression-based default — defer to pass 2 */
            if (strncmp(defaultVals[i], "EXPR:", 5) == 0 && numExprDefs < 64) {
                strcat(buf, "\x01NULL\x01");
                exprDefCols[numExprDefs] = i;
                strncpy(exprDefStrs[numExprDefs], defaultVals[i] + 5, 511);
                exprDefStrs[numExprDefs][511] = '\0';
                numExprDefs++;
            }
            /* Evaluate function-based defaults */
            else if (strcasecmp(defaultVals[i], "gen_random_uuid()") == 0) {
                char uuid[64];
                ExprNode *e = expr_make_gen_random_uuid();
                expr_evaluate(e, NULL, NULL, 0, uuid, sizeof(uuid));
                strcat(buf, uuid);
                capture_generated_id(uuid);
            } else if (strcasecmp(defaultVals[i], "gen_random_uuid_v7()") == 0) {
                char uuid[64];
                ExprNode *e = expr_make_gen_random_uuid_v7();
                expr_evaluate(e, NULL, NULL, 0, uuid, sizeof(uuid));
                strcat(buf, uuid);
                capture_generated_id(uuid);
            } else if (strcasecmp(defaultVals[i], "snowflake_id()") == 0) {
                char sfid[64];
                ExprNode *e = expr_make_snowflake_id();
                expr_evaluate(e, NULL, NULL, 0, sfid, sizeof(sfid));
                strcat(buf, sfid);
                capture_generated_id(sfid);
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

    /* Pass 2: evaluate expression defaults with row context */
    if (numExprDefs > 0) {
        /* Parse buf into column values */
        char colValues[64][256];
        char tmpBuf[RECORD_BUF_SIZE];
        strncpy(tmpBuf, buf, sizeof(tmpBuf) - 1);
        tmpBuf[sizeof(tmpBuf) - 1] = '\0';
        int ci = 0;
        char *tok = strtok(tmpBuf, ";");
        while (tok && ci < 64) {
            strncpy(colValues[ci], tok, 255);
            colValues[ci][255] = '\0';
            ci++;
            tok = strtok(NULL, ";");
        }

        /* Evaluate each expression default */
        for (int ed = 0; ed < numExprDefs; ed++) {
            ExprNode *defExpr = expr_deserialize(exprDefStrs[ed]);
            if (!defExpr) continue;
            char result[256];
            if (expr_evaluate(defExpr,
                              (const char (*)[128])tableColNames,
                              (const char (*)[256])colValues,
                              numTableCols,
                              result, sizeof(result))) {
                strncpy(colValues[exprDefCols[ed]], result, 255);
                colValues[exprDefCols[ed]][255] = '\0';
            }
        }

        /* Rebuild buf from colValues */
        buf[0] = '\0';
        for (i = 0; i < numTableCols; i++) {
            if (i > 0) strcat(buf, ";");
            strcat(buf, colValues[i]);
        }
        strcat(buf, ";");
    }

    /* Pass 3: evaluate STORED generated columns, set VIRTUAL to NULL */
    {
        int hasGenerated = 0;
        for (i = 0; i < reorderNcols && i < numTableCols; i++) {
            if (reorderCols[i].generated_mode != GENMODE_NONE) { hasGenerated = 1; break; }
        }
        if (hasGenerated) {
            char colValues[64][256];
            char tmpBuf[RECORD_BUF_SIZE];
            strncpy(tmpBuf, buf, sizeof(tmpBuf) - 1);
            tmpBuf[sizeof(tmpBuf) - 1] = '\0';
            int ci = 0;
            char *tok = strtok(tmpBuf, ";");
            while (tok && ci < 64) {
                strncpy(colValues[ci], tok, 255);
                colValues[ci][255] = '\0';
                ci++;
                tok = strtok(NULL, ";");
            }

            for (i = 0; i < reorderNcols && i < numTableCols; i++) {
                if (reorderCols[i].generated_mode == GENMODE_STORED && reorderCols[i].generated_expr[0]) {
                    /* STORED — evaluate and store */
                    ExprNode *genExpr = expr_deserialize(reorderCols[i].generated_expr);
                    if (genExpr) {
                        char result[256];
                        if (expr_evaluate(genExpr,
                                          (const char (*)[128])tableColNames,
                                          (const char (*)[256])colValues,
                                          numTableCols, result, sizeof(result))) {
                            strncpy(colValues[i], result, 255);
                            colValues[i][255] = '\0';
                        }
                    }
                } else if (reorderCols[i].generated_mode == GENMODE_VIRTUAL) {
                    /* VIRTUAL — store NULL placeholder on disk */
                    strcpy(colValues[i], "\x01NULL\x01");
                }
            }

            buf[0] = '\0';
            for (i = 0; i < numTableCols; i++) {
                if (i > 0) strcat(buf, ";");
                strcat(buf, colValues[i]);
            }
            strcat(buf, ";");
        }
    }

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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "INSERT has %d value(s) but table has %d column(s)",
                 numValues, numTypes);
        g_err.error = 1;
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

            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "null value in column \"%s\" violates not-null constraint",
                     (i < nc) ? colNames[i] : "unknown");
            g_err.error = 1;
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

    char colNames[64][128];
    int numColNames = InsertReadColumnNames(tblName, colNames, 64);

    /* Resolve table for scan */
    TableDesc td;
    ColumnDesc colDescs[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tblName, &td, colDescs, &ncols) < 0)
        return 0;

    /* Check single-column UNIQUE flags */
    int hasColumnUnique = 0;
    for (int i = 0; i < numFlags && i < numValues; i++) {
        if (uniqueFlags[i]) { hasColumnUnique = 1; break; }
    }

    /* Load catalog 'U' constraints */
    ConstraintDesc uqDescs[32];
    int numUq = cat_list_constraints(td.table_id, uqDescs, 32);
    int hasCompositeUnique = 0;

    /* Filter to only 'U' type enabled constraints, resolve column indices */
    typedef struct {
        int colIndices[16];
        int numCols;
        char name[128];
    } UqInfo;
    UqInfo uqInfos[16];
    int uqInfoCount = 0;

    for (int ci = 0; ci < numUq; ci++) {
        if (uqDescs[ci].constraint_type != 'U') continue;
        if (!uqDescs[ci].is_enabled) continue;

        UqInfo *info = &uqInfos[uqInfoCount];
        strncpy(info->name, uqDescs[ci].constraint_name, 127);
        info->numCols = 0;

        /* Parse column list from definition */
        char defBuf[1024];
        strncpy(defBuf, uqDescs[ci].definition, sizeof(defBuf) - 1);
        char *saveptr = NULL;
        char *col = strtok_r(defBuf, ",", &saveptr);
        while (col && info->numCols < 16) {
            for (int c = 0; c < ncols; c++) {
                if (strcasecmp(colDescs[c].col_name, col) == 0) {
                    info->colIndices[info->numCols++] = c;
                    break;
                }
            }
            col = strtok_r(NULL, ",", &saveptr);
        }
        if (info->numCols > 0) {
            uqInfoCount++;
            hasCompositeUnique = 1;
        }
    }

    if (!hasColumnUnique && !hasCompositeUnique) return 0;

    /* Scan all existing records */
    TableScanCursor cursor;
    if (tapi_scan_begin(&td, &cursor) < 0)
        return 0; /* empty table */

    char pkBuf[256];
    char recBuf[RECORD_BUF_SIZE];
    while (tapi_scan_next(&cursor, pkBuf, recBuf, sizeof(recBuf)) == 0) {
        char fields[64][256];
        int field_nulls[64];
        int nf;

        int rec_len = tup_record_len(recBuf, sizeof(recBuf));
        if (rec_len <= 0) continue;
        nf = tup_extract_fields(recBuf, rec_len, colDescs, ncols,
                                fields, field_nulls, 64);
        if (nf < 0) continue;

        /* Check single-column UNIQUE flags */
        for (int i = 0; i < numFlags && i < numValues; i++) {
            if (!uniqueFlags[i]) continue;
            if (strcmp(vals[i], "\x01NULL\x01") == 0) continue;
            if (i < nf && strcmp(vals[i], fields[i]) == 0) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "duplicate key value violates unique constraint on column \"%s\" (value=%s)",
                         (i < numColNames) ? colNames[i] : "unknown", vals[i]);
                g_err.error = 1;
                EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                return -1;
            }
        }

        /* Check composite UNIQUE constraints from catalog */
        for (int u = 0; u < uqInfoCount; u++) {
            UqInfo *info = &uqInfos[u];
            /* Build composite value from new row */
            char newComposite[1024] = "";
            char existComposite[1024] = "";
            int allNull = 1;
            for (int c = 0; c < info->numCols; c++) {
                if (c > 0) { strcat(newComposite, "|"); strcat(existComposite, "|"); }
                int ci = info->colIndices[c];
                if (ci < numValues) {
                    strcat(newComposite, vals[ci]);
                    if (strcmp(vals[ci], "\x01NULL\x01") != 0) allNull = 0;
                }
                if (ci < nf) strcat(existComposite, fields[ci]);
            }
            if (allNull) continue; /* NULL composites don't violate UNIQUE */
            if (strcmp(newComposite, existComposite) == 0) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "duplicate key value violates unique constraint \"%s\"",
                         info->name);
                g_err.error = 1;
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
    char constraintNames[MAX_CHECK_CONSTRAINTS][128];
    int numChecks = ReadCheckConstraintsWithNames(tblName, constraints,
                                                   constraintNames, MAX_CHECK_CONSTRAINTS);
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
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "new row violates check constraint \"%s\"",
                     constraintNames[i]);
            g_err.error = 1;
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
        if (!constraints[ci].is_enabled) continue;

        /* Parse definition: "local_cols|on_delete|on_update|match_type|deferrable" */
        char localColsCsv[1024];
        strncpy(localColsCsv, constraints[ci].definition, sizeof(localColsCsv) - 1);
        localColsCsv[sizeof(localColsCsv) - 1] = '\0';
        int matchType = 0; /* 0=SIMPLE, 1=FULL, 2=PARTIAL */
        {
            char *pipe1 = strchr(localColsCsv, '|');
            if (pipe1) {
                *pipe1 = '\0';
                /* Skip on_delete */
                char *pipe2 = strchr(pipe1 + 1, '|');
                if (pipe2) {
                    /* Skip on_update */
                    char *pipe3 = strchr(pipe2 + 1, '|');
                    if (pipe3) {
                        matchType = atoi(pipe3 + 1);
                    }
                }
            }
        }

        /* Parse referenced columns */
        char refColsCsv[256];
        strncpy(refColsCsv, constraints[ci].ref_columns, sizeof(refColsCsv) - 1);
        refColsCsv[sizeof(refColsCsv) - 1] = '\0';

        /* Build FK value from local columns */
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
                int found = 0;
                for (int j = 0; j < numColNames && j < numValues; j++) {
                    if (strcasecmp(colNames[j], colName) == 0) {
                        if (strcmp(vals[j], "\x01NULL\x01") != 0)
                            allNull = 0;
                        else
                            anyNull = 1;
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
                    anyNull = 1;
                    first = 0;
                }
                colName = strtok_r(NULL, ",", &saveptr);
            }
        }

        /* MATCH FULL: all columns must be NULL or all must be non-NULL */
        if (matchType == 1 && anyNull && !allNull) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "insert or update on table violates foreign key constraint \"%s\" "
                     "(MATCH FULL does not allow mixing of null and nonnull values)",
                     constraints[ci].constraint_name);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
            return -1;
        }

        /* MATCH SIMPLE: any NULL skips the check. MATCH FULL: only all-NULL skips. */
        if (allNull) continue;
        if (matchType == 0 && anyNull) continue;  /* SIMPLE: any NULL → skip */

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
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "insert or update on table violates foreign key constraint \"%s\" "
                         "(value \"%s\" not found in referenced table \"%s\")",
                         constraints[ci].constraint_name, fkValue, refTd.table_name);
                g_err.error = 1;
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
                    /* Extract fields from scanned record */
                    char scanFields[64][256];
                    int scanNulls[64];
                    int snf;
                    int sRecLen = tup_record_len(scanRec, sizeof(scanRec));
                    if (sRecLen <= 0) continue;
                    snf = tup_extract_fields(scanRec, sRecLen, refCols, refColCount,
                                             scanFields, scanNulls, 64);
                    if (snf < 0) continue;

                    /* Build composite value from referenced columns */
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
                                if (!first) strcat(refRecValue, "|");
                                if (k < snf)
                                    strcat(refRecValue, scanFields[k]);
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
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "insert or update on table violates foreign key constraint \"%s\" "
                         "(value \"%s\" not found in referenced table \"%s\")",
                         constraints[ci].constraint_name, fkValue, refTd.table_name);
                g_err.error = 1;
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
 * Converts semicolon-delimited rowData to binary tuple before storing.
 * Returns 0 on success, 1 on duplicate key, -1 on error. */
static int store_single_row(TableDesc *td, const ColumnDesc *cols, int ncols,
                            const char *tblName, char *rowData)
{
    char pkKey[1024];

    /* Parse semicolon-delimited rowData into fields */
    char tmpRow[RECORD_BUF_SIZE];
    strncpy(tmpRow, rowData, sizeof(tmpRow) - 1);
    tmpRow[sizeof(tmpRow) - 1] = '\0';
    char *vals[64];
    int nv = split_row_values(tmpRow, vals, 64);

    /* Build is_null array from NULL_MARKER */
    int is_null[64];
    const char *vals_ptrs[64];
    for (int i = 0; i < nv; i++) {
        is_null[i] = (strcmp(vals[i], "\x01NULL\x01") == 0) ? 1 : 0;
        vals_ptrs[i] = vals[i];
    }

    /* Build PK key from parsed fields */
    char fields[64][256];
    for (int i = 0; i < nv && i < 64; i++) {
        strncpy(fields[i], vals[i], 255);
        fields[i][255] = '\0';
    }
    if (tapi_build_pk_key_from_fields(cols, ncols,
                                       (const char (*)[256])fields, nv,
                                       pkKey, sizeof(pkKey)) < 0)
        return -1;

    if (pkKey[0] == '\0') return -1;

    /* Check for duplicate PK */
    BTree2 pk_tree = tapi_pk_tree(td);
    RowID existing;
    if (bt2_search(&pk_tree, pkKey, &existing) == 0)
        return 1; /* duplicate */

    /* Log undo entry before modifying data */
    if (g_tx_undo_callback)
        g_tx_undo_callback(1 /*TX_OP_INSERT*/, tblName, pkKey, NULL, 0);

    /* Build binary tuple from string values */
    char bin_buf[RECORD_BUF_SIZE];
    int bin_len = tup_build(vals_ptrs, is_null, nv, td->table_id,
                            cols, ncols, bin_buf, sizeof(bin_buf));
    if (bin_len < 0) return -1;

    /* Insert binary tuple into heap page */
    uint16_t rec_len = (uint16_t)bin_len;
    RowID rid = tapi_heap_insert(td, bin_buf, rec_len);
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
    strcpy(tblName, g_ins.tblName);
    {
        char *dot = strstr(tblName, ".dat");
        if (dot) *dot = '\0';
    }

    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tblName, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not open table \"%s\"", tblName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        TruncateInsert();
        return -1;
    }

    /* GTT: ensure session-private PK tree exists */
    if (td.is_temporary == TEMP_GLOBAL && gtt_ensure_storage(&td) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not allocate storage for global temporary table");
        g_err.error = 1;
        TruncateInsert();
        return -1;
    }

    /* Split g_ins.data into rows using ROW_SEP */
    strncpy(allRows, g_ins.data, sizeof(allRows) - 1);
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "out of memory for INSERT batch");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INTERNAL_ERROR);
        TruncateInsert();
        return -1;
    }

    /* Read AUTO_INCREMENT info once */
    int autoIncCol = td.auto_inc_col;
    int autoIncCounter = td.auto_inc_counter;
    int autoIncStep = td.auto_inc_step;

    /* Reset capture flag — first generated value in this INSERT will be captured */
    char saved_last_id[64];
    strncpy(saved_last_id, g_last_insert_id, sizeof(saved_last_id) - 1);
    saved_last_id[sizeof(saved_last_id) - 1] = '\0';
    g_last_insert_id[0] = '\0';

    for (i = 0; i < numRows; i++) {
        char valBuf[RECORD_BUF_SIZE];
        char *vals[64];
        int nv;

        strncpy(reorderedRows[i], rowPtrs[i], RECORD_BUF_SIZE - 1);
        reorderedRows[i][RECORD_BUF_SIZE - 1] = '\0';

        if (g_ins.columnCount > 0) {
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
            int generated = apply_auto_increment(tblName, vals, nv, autoIncCol,
                                     &autoIncCounter, autoIncStep,
                                     genBuf, sizeof(genBuf));
            if (generated >= 0) {
                int k;
                reorderedRows[i][0] = '\0';
                for (k = 0; k < nv; k++) {
                    if (k > 0) strcat(reorderedRows[i], ";");
                    strcat(reorderedRows[i], vals[k]);
                }
                strcat(reorderedRows[i], ";");
                /* Capture first auto-generated value for LAST_INSERT_ID() */
                if (generated == 1)
                    capture_generated_id(genBuf);
            }
        }

        /* Evaluate generated columns (for full INSERT without column list) */
        {
            int hasGen = 0;
            for (int gc = 0; gc < ncols; gc++) {
                if (cols[gc].generated_mode != GENMODE_NONE) { hasGen = 1; break; }
            }
            if (hasGen) {
                char colNames[64][128];
                int numCN = InsertReadColumnNames(tblName, colNames, 64);
                char colVals[64][256];
                char tmpRow[RECORD_BUF_SIZE];
                strncpy(tmpRow, reorderedRows[i], sizeof(tmpRow) - 1);
                tmpRow[sizeof(tmpRow) - 1] = '\0';
                int ci = 0;
                char *tp = strtok(tmpRow, ";");
                while (tp && ci < 64) {
                    strncpy(colVals[ci], tp, 255);
                    colVals[ci][255] = '\0';
                    ci++;
                    tp = strtok(NULL, ";");
                }
                for (int gc = 0; gc < ncols && gc < ci; gc++) {
                    if (cols[gc].generated_mode == GENMODE_STORED && cols[gc].generated_expr[0]) {
                        ExprNode *genExpr = expr_deserialize(cols[gc].generated_expr);
                        if (genExpr) {
                            char result[256];
                            if (expr_evaluate(genExpr,
                                              (const char (*)[128])colNames,
                                              (const char (*)[256])colVals,
                                              numCN, result, sizeof(result))) {
                                strncpy(colVals[gc], result, 255);
                                colVals[gc][255] = '\0';
                            }
                        }
                    } else if (cols[gc].generated_mode == GENMODE_VIRTUAL) {
                        strcpy(colVals[gc], "\x01NULL\x01");
                    }
                }
                reorderedRows[i][0] = '\0';
                for (int gc = 0; gc < ci; gc++) {
                    if (gc > 0) strcat(reorderedRows[i], ";");
                    strcat(reorderedRows[i], colVals[gc]);
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
    IndexDesc secIdx[16];
    int nIdx = idx_load_secondary(tblName, secIdx, 16);
    char colNames2[64][128];
    int numCols2 = 0;
    if (nIdx > 0)
        numCols2 = InsertReadColumnNames(tblName, colNames2, 64);

    /* Insert each row */
    g_ins.rowCount = 0;
    for (i = 0; i < numRows; i++) {
        /* Pre-insert: check unique index constraints BEFORE storing */
        char preIdxKeys[16][512];
        char prePkBuf[256] = "";
        char preIdxPaths[16][1024];
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

            /* Build field array for index key building */
            char preFields[64][256];
            for (int fi = 0; fi < nvPre && fi < 64; fi++) {
                strncpy(preFields[fi], valsPre[fi], 255);
                preFields[fi][255] = '\0';
            }

            int ix;
            for (ix = 0; ix < nIdx; ix++) {
                preIdxKeys[ix][0] = '\0';
                snprintf(preIdxPaths[ix], sizeof(preIdxPaths[ix]), "%u:%s:%u:%c",
                         secIdx[ix].table_id, secIdx[ix].index_name,
                         secIdx[ix].root_page, secIdx[ix].index_type);

                /* Build index key using common helper */
                {
                    idx_build_key(&secIdx[ix],
                                  (const char (*)[128])colNames2, numCols2,
                                  (const char (*)[256])preFields,
                                  preIdxKeys[ix], sizeof(preIdxKeys[ix]));
                }

                if (preIdxKeys[ix][0] && (secIdx[ix].index_type == 'U' || secIdx[ix].index_type == 'V')) {
                    char dupCheck[1][256];
                    if (btree_search(preIdxPaths[ix], preIdxKeys[ix], dupCheck, 1) > 0) {
                        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                                 "duplicate key value violates unique index \"%s\" (key=%s)",
                                 secIdx[ix].index_name, preIdxKeys[ix]);
                        g_err.error = 1;
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
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "duplicate key value violates unique constraint (key=%s, row %d)",
                     key ? key : "?", i + 1);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
            TruncateInsert();
            retval = -1; goto cleanup;
        }
        g_ins.rowCount++;

        /* Post-insert: update secondary B-tree indexes */
        if (nIdx > 0) {
            int ix;
            for (ix = 0; ix < nIdx; ix++) {
                if (preIdxKeys[ix][0])
                    btree_insert(preIdxPaths[ix], preIdxKeys[ix], prePkBuf);
            }
        }
    }

    printf("command(s) completed successfully!..\n");

    if (g_ins.rowCount > 0)
        cat_increment_dml_counter(td.table_id);

    /* Persist AUTO_INCREMENT counter */
    if (autoIncCol >= 0) {
        if (td.is_temporary == TEMP_GLOBAL) {
            /* GTT: update session override, not catalog */
            gtt_update_override(td.table_id, td.pk_root_page,
                                td.heap_page, autoIncCounter);
        } else {
            cat_update_auto_inc(td.table_id, td.table_name,
                                td.schema_id, autoIncCounter);
        }
    }

    TruncateInsert();

cleanup:
    /* If no value was captured in this INSERT, restore previous session value */
    if (g_last_insert_id[0] == '\0')
        strncpy(g_last_insert_id, saved_last_id, sizeof(g_last_insert_id) - 1);
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
    db_table_path(name, g_ins.tblName, sizeof(g_ins.tblName));

    return 0;
}
