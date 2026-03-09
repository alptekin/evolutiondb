#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"
#include "expression.h"

/* Row separator used between multiple value groups in g_insert.
 * E.g. INSERT INTO t VALUES (1,'a'), (2,'b') produces:
 *   g_insert = "1;a;\x022;b;"
 */
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
    /* Remove trailing semicolon before separator if present */
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

/* Split a semicolon-delimited row string into an array of value pointers.
 * Returns the number of values parsed.  Modifies `row` in-place. */
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

/* Read column names from table .meta file (line 1).
 * Returns number of columns found. */
static int InsertReadColumnNames(const char *tblName,
                                 char colNames[][128], int maxCols)
{
    char metaFile[SAFE_PATH_MAX], line[2048];
    int count = 0;
    char *tok;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
    FILE *fp = fopen(metaFile, "r");
    if (!fp) return 0;

    if (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n")] = '\0';
        tok = strtok(line, ";");
        while (tok && count < maxCols) {
            strncpy(colNames[count], tok, 127);
            colNames[count][127] = '\0';
            count++;
            tok = strtok(NULL, ";");
        }
    }
    fclose(fp);
    return count;
}

/* Reorder a single row's values from user-specified column order to
 * table schema order.  When g_insertColumnCount > 0, the user wrote
 *   INSERT INTO t (colB, colA) VALUES (valB, valA)
 * and we need to produce the record in schema order (colA, colB).
 * Missing columns are filled with the NULL marker.
 *
 * `rowData` is modified in-place (semicolon-delimited, up to RECORD_BUF_SIZE).
 * Returns 0 on success, -1 on error. */
static int reorder_row_for_column_map(const char *tblName, char *rowData)
{
    char tableColNames[64][128];
    int numTableCols;
    char *userVals[64];
    int numUserVals, i, j;
    char buf[RECORD_BUF_SIZE];
    char valBuf[RECORD_BUF_SIZE];

    if (g_insertColumnCount <= 0) return 0; /* no column list → no reorder */

    numTableCols = InsertReadColumnNames(tblName, tableColNames, 64);
    if (numTableCols <= 0) return 0;

    /* Parse the user-supplied values */
    strncpy(valBuf, rowData, sizeof(valBuf) - 1);
    valBuf[sizeof(valBuf) - 1] = '\0';
    numUserVals = split_row_values(valBuf, userVals, 64);

    /* Validate: column count in INSERT list must match value count */
    if (numUserVals != g_insertColumnCount) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "INSERT has %d value(s) but %d column(s) specified",
                 numUserVals, g_insertColumnCount);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DATA_EXCEPTION);
        return -1;
    }

    /* Validate: all column names in INSERT list must exist in table */
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

    /* Read DEFAULT values for the table */
    char defaultVals[64][256];
    int numDefaults = ReadDefaults(tblName, defaultVals, 64);

    /* Build reordered row: for each table column, find in user's list */
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
            /* Column not in INSERT list but has a DEFAULT value → use it */
            strcat(buf, defaultVals[i]);
        } else {
            /* Column not in INSERT list, no DEFAULT → NULL marker */
            strcat(buf, "\x01NULL\x01");
        }
    }
    strcat(buf, ";");

    strncpy(rowData, buf, RECORD_BUF_SIZE - 1);
    rowData[RECORD_BUF_SIZE - 1] = '\0';
    return 0;
}

/* Validate column types for a single row.
 * Returns 0 on success, -1 on error (sets g_gui_error/g_gui_error_msg). */
static int validate_types(const char *tblName, char **vals, int numValues)
{
    int colTypes[64];
    int numTypes = ReadColumnTypes(tblName, colTypes, 64);
    int i;

    if (numTypes <= 0) return 0; /* no type info → skip */

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

/* Validate NOT NULL constraints for a single row.
 * Returns 0 on success, -1 on error (sets g_gui_error/g_gui_error_msg). */
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
            char metaFile[SAFE_PATH_MAX], metaLine[1024];
            char *colNames[64];
            int nc = 0;
            FILE *fp;

            snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
            fp = fopen(metaFile, "r");
            if (fp) {
                if (fgets(metaLine, sizeof(metaLine), fp)) {
                    char *c;
                    metaLine[strcspn(metaLine, "\n")] = '\0';
                    c = strtok(metaLine, ";");
                    while (c && nc < 64) {
                        colNames[nc++] = c;
                        c = strtok(NULL, ";");
                    }
                }
                fclose(fp);
            }

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

/* Validate UNIQUE constraints for a single row against existing data.
 * Opens the table, iterates all records, checks UNIQUE columns.
 * Returns 0 on success, -1 on violation (sets g_gui_error/g_gui_error_msg). */
static int validate_unique(const char *tblName, const char *datName,
                           char **vals, int numValues)
{
    int uniqueFlags[64];
    int numFlags = ReadUniqueFlags(tblName, uniqueFlags, 64);
    int i;
    DBHANDLE db;
    char keyBuf[1024];
    char *data;

    if (numFlags <= 0) return 0; /* no UNIQUE info or old table → skip */

    /* Check if any column is marked UNIQUE */
    {
        int hasUnique = 0;
        for (i = 0; i < numFlags && i < numValues; i++) {
            if (uniqueFlags[i]) { hasUnique = 1; break; }
        }
        if (!hasUnique) return 0;
    }

    /* Read column names for error messages */
    char colNames[64][128];
    int numColNames = InsertReadColumnNames(tblName, colNames, 64);

    /* Open table and scan all existing records */
    db = db_open(datName, O_RDONLY, FILE_MODE);
    if (!db) return 0; /* table doesn't exist yet → no duplicates */

    db_rewind(db);
    while ((data = db_nextrec(db, keyBuf)) != NULL) {
        for (i = 0; i < numFlags && i < numValues; i++) {
            if (!uniqueFlags[i]) continue;
            /* Skip NULL values — NULLs are allowed to be duplicate in UNIQUE columns */
            if (strcmp(vals[i], "\x01NULL\x01") == 0) continue;

            /* Extract field i from existing record */
            char existingVal[256];
            char tmp[RECORD_BUF_SIZE];
            char *tok;
            int idx = 0;

            strncpy(tmp, data, sizeof(tmp) - 1);
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
                db_close(db);
                return -1;
            }
        }
    }

    db_close(db);
    return 0;
}

/* Validate CHECK constraints for a single row.
 * Deserializes stored CHECK expressions, evaluates them against row values.
 * Returns 0 on success, -1 on violation (sets g_gui_error/g_gui_error_msg). */
static int validate_check(const char *tblName, char **vals, int numValues)
{
    char constraints[MAX_CHECK_CONSTRAINTS][1024];
    int numChecks = ReadCheckConstraints(tblName, constraints, MAX_CHECK_CONSTRAINTS);
    int i;

    if (numChecks <= 0) return 0;

    /* Read column names for evaluation */
    char colNames[64][128];
    int numCols = InsertReadColumnNames(tblName, colNames, 64);
    if (numCols <= 0) return 0;

    /* Build column values in the format expr_evaluate expects */
    char colValues[64][256];
    int c;
    for (c = 0; c < numCols && c < numValues && c < 64; c++) {
        /* Convert NULL marker to empty for evaluation */
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

/* Apply AUTO_INCREMENT to a single row's values.
 * If the auto-inc column value is NULL marker, "0", or empty, replace it with
 * the next counter value. If user provides an explicit non-zero value, track
 * the maximum for counter advancement.
 * `vals` array is modified in-place (pointers into valBuf remain valid).
 * `generatedVal` receives the generated string value (static buffer).
 * Returns: 1 if a value was generated, 0 if user provided explicit value,
 *         -1 if no auto-inc column. */
static int apply_auto_increment(const char *tblName, char **vals, int numValues,
                                int autoIncCol, int *counterInOut, int step,
                                char *generatedVal, int genBufSize)
{
    if (autoIncCol < 0 || autoIncCol >= numValues) return -1;

    /* Check if value needs auto-generation */
    if (strcmp(vals[autoIncCol], "\x01NULL\x01") == 0 ||
        strcmp(vals[autoIncCol], "0") == 0 ||
        vals[autoIncCol][0] == '\0') {
        /* Generate next value: counter += step */
        *counterInOut += step;
        snprintf(generatedVal, genBufSize, "%d", *counterInOut);
        vals[autoIncCol] = generatedVal;
        return 1;
    } else {
        /* User provided explicit value — track for counter advancement */
        long explicitVal = strtol(vals[autoIncCol], NULL, 10);
        if (explicitVal > *counterInOut)
            *counterInOut = (int)explicitVal;
        return 0;
    }
}

/* Pad a single row to the table's pad size and store it via db_store.
 * Returns 0 on success, 1 on duplicate key, -1 on error. */
static int store_single_row(DBHANDLE db, const char *tblName, char *rowData)
{
    int padSize, curLen;
    char padded[RECORD_BUF_SIZE];
    char keyBuf[RECORD_BUF_SIZE];
    char compositeKey[1024];
    int pkIndices[16];
    int numPKs;

    /* Read primary key column indices */
    numPKs = ReadPrimaryKeys(tblName, pkIndices, 16);
    if (numPKs <= 0) {
        /* Fallback: use first column */
        pkIndices[0] = 0;
        numPKs = 1;
    }

    /* Parse row values to extract PK column(s) */
    {
        char tmpRow[RECORD_BUF_SIZE];
        char *vals[64];
        int nv = 0, p;
        char *t;

        strncpy(tmpRow, rowData, sizeof(tmpRow) - 1);
        tmpRow[sizeof(tmpRow) - 1] = '\0';
        t = strtok(tmpRow, ";");
        while (t && nv < 64) {
            vals[nv++] = t;
            t = strtok(NULL, ";");
        }

        /* Build composite key: val1|val2|... for multi-column PK, or just val for single */
        compositeKey[0] = '\0';
        for (p = 0; p < numPKs; p++) {
            if (p > 0) strcat(compositeKey, "|");
            if (pkIndices[p] < nv)
                strcat(compositeKey, vals[pkIndices[p]]);
        }
    }

    if (compositeKey[0] == '\0') return -1;

    /* Prepare padded row data */
    strncpy(padded, rowData, sizeof(padded) - 1);
    padded[sizeof(padded) - 1] = '\0';

    padSize = ReadPadSize(tblName);
    if (padSize >= RECORD_BUF_SIZE)
        padSize = RECORD_BUF_SIZE - 1;

    curLen = (int)strlen(padded);
    if (curLen < padSize) {
        memset(padded + curLen, ';', padSize - curLen);
        padded[padSize] = '\0';
    }

    /* Log undo entry before modifying data (for transaction rollback).
     * Use tblName (without .dat) — db_open appends .idx/.dat itself. */
    if (g_tx_undo_callback)
        g_tx_undo_callback(1 /*TX_OP_INSERT*/, tblName,
                           compositeKey, NULL);

    return db_store(db, compositeKey, padded, DB_INSERT);
}

/* -------------------------------------------------------------------- */

int InsertProcess(void)
{
    DBHANDLE db;
    char tblName[1024];
    char allRows[RECORD_BUF_SIZE];
    char *rowPtrs[256];  /* max 256 rows in one batch */
    int numRows, i;

    /* Extract base table name (without .dat) */
    strcpy(tblName, g_tblInsertionName);
    {
        char *dot = strstr(tblName, ".dat");
        if (dot) *dot = '\0';
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

    /* Apply column mapping (if INSERT has column list) and validate
     * all rows BEFORE inserting any (abort semantics).
     * We use reorderedRows[] to hold the mapped data because
     * reorder_row_for_column_map() rewrites the row string. */
    static char reorderedRows[256][RECORD_BUF_SIZE];

    /* Read AUTO_INCREMENT info once for the table */
    int autoIncCol = -1, autoIncCounter = 0, autoIncStep = 1;
    ReadAutoIncrement(tblName, &autoIncCol, &autoIncCounter, &autoIncStep);

    for (i = 0; i < numRows; i++) {
        char valBuf[RECORD_BUF_SIZE];
        char *vals[64];
        int nv;

        /* Copy row into reordered buffer */
        strncpy(reorderedRows[i], rowPtrs[i], RECORD_BUF_SIZE - 1);
        reorderedRows[i][RECORD_BUF_SIZE - 1] = '\0';

        /* Apply column mapping if column list was specified */
        if (g_insertColumnCount > 0) {
            if (reorder_row_for_column_map(tblName, reorderedRows[i]) != 0) {
                TruncateInsert();
                return -1;
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
                /* Reconstruct reorderedRows[i] from vals[] */
                int k;
                reorderedRows[i][0] = '\0';
                for (k = 0; k < nv; k++) {
                    if (k > 0) strcat(reorderedRows[i], ";");
                    strcat(reorderedRows[i], vals[k]);
                }
                strcat(reorderedRows[i], ";");
            }
        }

        /* Validate types and NOT NULL on the (possibly reordered) row */
        strncpy(valBuf, reorderedRows[i], sizeof(valBuf) - 1);
        valBuf[sizeof(valBuf) - 1] = '\0';

        nv = split_row_values(valBuf, vals, 64);

        if (validate_types(tblName, vals, nv) != 0) {
            TruncateInsert();
            return -1;
        }
        if (validate_not_null(tblName, vals, nv) != 0) {
            TruncateInsert();
            return -1;
        }
        if (validate_unique(tblName, g_tblInsertionName, vals, nv) != 0) {
            TruncateInsert();
            return -1;
        }
        if (validate_check(tblName, vals, nv) != 0) {
            TruncateInsert();
            return -1;
        }
    }

    /* Open database file */
    if ((db = db_open(g_tblInsertionName, O_RDWR, FILE_MODE)) == NULL) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "could not open table \"%s\"", tblName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        TruncateInsert();
        return -1;
    }

    /* Read index metadata once (used for pre-insert unique check and post-insert B-tree update) */
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

            /* Extract PK */
            {
                int pkIdx2[16], nPKs2, p2;
                nPKs2 = ReadPrimaryKeys(tblName, pkIdx2, 16);
                if (nPKs2 <= 0) { nPKs2 = 1; pkIdx2[0] = 0; }
                for (p2 = 0; p2 < nPKs2; p2++) {
                    if (p2 > 0) strcat(prePkBuf, "|");
                    if (pkIdx2[p2] < nvPre) strcat(prePkBuf, valsPre[pkIdx2[p2]]);
                }
            }

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

                /* Unique enforcement BEFORE store */
                if (preIdxKeys[ix][0] && idxTypes[ix] == 'U') {
                    char dupCheck[1][256];
                    if (btree_search(idxPaths[ix], preIdxKeys[ix], dupCheck, 1) > 0) {
                        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                 "duplicate key value violates unique index \"%s\" (key=%s)",
                                 idxNames[ix], preIdxKeys[ix]);
                        g_gui_error = 1;
                        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                        db_close(db);
                        TruncateInsert();
                        return -1;
                    }
                }
            }
        }

        int rc = store_single_row(db, tblName, reorderedRows[i]);
        if (rc != 0) {
            /* Duplicate PK or error — abort whole batch */
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
            db_close(db);
            TruncateInsert();
            return -1;
        }
        g_insertCount++;

        /* Post-insert: update B-tree indexes */
        if (nIdx > 0) {
            int ix;
            for (ix = 0; ix < nIdx; ix++) {
                if (preIdxKeys[ix][0])
                    btree_insert(idxPaths[ix], preIdxKeys[ix], prePkBuf);
            }
        }
    }

    printf("command(s) completed successfully!..\n");
    db_close(db);

    /* Persist AUTO_INCREMENT counter if it was used */
    if (autoIncCol >= 0) {
        WriteAutoIncrement(tblName, autoIncCol, autoIncCounter, autoIncStep);
    }

    TruncateInsert();

    return 0;
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

