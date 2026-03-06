#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"
#include "expression.h"

static void ResizeAllRecords(const char *tblName, int newPadSize)
{
    DBHANDLE db;
    char keyBuf[1024];
    char *data;
    int i, count = 0;

    /* Safety cap */
    if (newPadSize >= RECORD_BUF_SIZE)
        newPadSize = RECORD_BUF_SIZE - 1;

    /* Phase 1: Read all records into memory */
    static char keys[200][256];
    static char records[200][RECORD_BUF_SIZE];

    if ((db = db_open(tblName, O_RDWR, FILE_MODE)) == NULL)
        return;

    db_rewind(db);
    while ((data = db_nextrec(db, keyBuf)) != NULL && count < 200) {
        strcpy(keys[count], keyBuf);
        strcpy(records[count], data);
        count++;
    }
    db_close(db);

    /* Phase 2: Re-store all records with new padding */
    if ((db = db_open(tblName, O_RDWR, FILE_MODE)) == NULL)
        return;

    for (i = 0; i < count; i++) {
        int curLen = (int)strlen(records[i]);
        if (curLen < newPadSize) {
            memset(records[i] + curLen, ';', newPadSize - curLen);
            records[i][newPadSize] = '\0';
        }
        db_store(db, keys[i], records[i], DB_REPLACE);
    }

    db_close(db);

    /* Update .meta with new pad size */
    WritePadSize(tblName, newPadSize);
}

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

/* Read column names from .meta file line 1 into arrays.
 * Returns the number of columns. */
static int UpdateReadColumnNames(const char *tableName,
                                 char colNames[][128], int maxCols)
{
    char mf[SAFE_PATH_MAX], ln[2048];
    int cnt = 0;
    char *t;

    snprintf(mf, sizeof(mf), "%s.meta", tableName);
    FILE *f = fopen(mf, "r");
    if (!f) return 0;

    if (fgets(ln, sizeof(ln), f)) {
        ln[strcspn(ln, "\n")] = '\0';
        t = strtok(ln, ";");
        while (t && cnt < maxCols) {
            strncpy(colNames[cnt], t, 127);
            colNames[cnt][127] = '\0';
            cnt++;
            t = strtok(NULL, ";");
        }
    }
    fclose(f);
    return cnt;
}

/* Apply a single-row update: fetch record by key, apply SET columns, store back.
 * Returns 0 on success, -1 on failure. Sets *needResize and *newPadSize if resize needed. */
static int ApplyUpdateToRow(DBHANDLE db, const char *key,
                            const char setCols[][256], const char setVals[][256],
                            int numSetCols, int numSetVals,
                            const char metaCols[][256], int numMetaCols,
                            int padSize, int *needResize, int *newPadSize,
                            const char *tblName)
{
    char *existingData;
    char temp[RECORD_BUF_SIZE];
    char *tok;
    int s, c, i;

    existingData = (char *)db_fetch(db, key);
    if (existingData == NULL)
        return -1;

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
        int numChecks = ReadCheckConstraints(tblName, checkConstraints, MAX_CHECK_CONSTRAINTS);
        if (numChecks > 0) {
            /* Read column names in [128] format for expr_evaluate */
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
                             "new row violates check constraint");
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_CHECK_VIOLATION);
                    return -1;
                }
            }
        }
    }

    /* Build updated record string */
    {
        char newRecord[RECORD_BUF_SIZE] = "";
        int newLen;
        int curPad = padSize;

        for (i = 0; i < numFields; i++) {
            strcat(newRecord, fields[i]);
            strcat(newRecord, ";");
        }

        newLen = (int)strlen(newRecord);

        /* If new record exceeds current pad size, need resize */
        if (newLen >= curPad) {
            while (curPad <= newLen)
                curPad *= 2;
            if (curPad >= RECORD_BUF_SIZE)
                curPad = RECORD_BUF_SIZE - 1;
            *needResize = 1;
            if (curPad > *newPadSize)
                *newPadSize = curPad;
        }

        /* Pad record to target pad size */
        if (newLen < curPad) {
            memset(newRecord + newLen, ';', curPad - newLen);
            newRecord[curPad] = '\0';
        }

        if (db_store(db, key, newRecord, DB_REPLACE) != 0)
            return -1;
    }

    return 0;
}

int UpdateProcess(void)
{
    DBHANDLE db;
    char temp[RECORD_BUF_SIZE];
    char tblName[1024];
    char metaFile[SAFE_PATH_MAX];
    char metaLine[1024];
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

    /* Determine how many tokens are SET values:
     * When g_whereExpr is set, we know exactly numSetCols SET values.
     * When no expression, last token is the legacy WHERE key. */
    int numSetVals;
    if (g_whereExpr != NULL) {
        numSetVals = numSetCols; /* first numSetCols tokens are SET values */
    } else {
        if (numTokens < 2) {
            printf("Error: UPDATE requires at least a SET value and a WHERE key\n");
            g_updateCount = 0;
            TruncateUpdate();
            return -1;
        }
        numSetVals = numTokens - 1; /* last token is the WHERE key */
    }

    /* Get table name (remove .dat extension) */
    strcpy(tblName, g_tblSelectionName);
    {
        char *dot = strstr(tblName, ".dat");
        if (dot) *dot = '\0';
    }

    /* Read column definitions from .meta file */
    char metaCols[64][256];
    int numMetaCols = 0;
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (fp) {
        if (fgets(metaLine, sizeof(metaLine), fp)) {
            metaLine[strcspn(metaLine, "\n")] = '\0';
            tok = strtok(metaLine, ";");
            while (tok && numMetaCols < 64) {
                strcpy(metaCols[numMetaCols], tok);
                numMetaCols++;
                tok = strtok(NULL, ";");
            }
        }
        fclose(fp);
    }

    /* Validate SET values against column types */
    {
        int colTypes[64];
        int numTypes = ReadColumnTypes(tblName, colTypes, 64);
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
        int nullFlags[64];
        int numFlags = ReadNullFlags(tblName, nullFlags, 64);
        if (numFlags > 0) {
            int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
            for (s = 0; s < minSet; s++) {
                for (c = 0; c < numMetaCols; c++) {
                    if (strcmp(metaCols[c], setCols[s]) == 0) {
                        if (c < numFlags && nullFlags[c] && allTokens[s][0] == '\0') {
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
    }

    /* Validate UNIQUE constraints for SET columns */
    {
        int uniqueFlags[64];
        int numUFlags = ReadUniqueFlags(tblName, uniqueFlags, 64);
        if (numUFlags > 0) {
            int minSet = numSetVals < numSetCols ? numSetVals : numSetCols;
            for (s = 0; s < minSet; s++) {
                for (c = 0; c < numMetaCols; c++) {
                    if (strcmp(metaCols[c], setCols[s]) == 0) {
                        if (c < numUFlags && uniqueFlags[c]) {
                            /* Skip NULL values — NULLs don't violate UNIQUE */
                            if (allTokens[s][0] == '\0' ||
                                strcmp(allTokens[s], "\x01NULL\x01") == 0)
                                break;

                            /* Scan all existing records for duplicate */
                            DBHANDLE udb = db_open(tblName, O_RDONLY, FILE_MODE);
                            if (udb) {
                                char uKeyBuf[1024];
                                char *uData;
                                db_rewind(udb);
                                while ((uData = db_nextrec(udb, uKeyBuf)) != NULL) {
                                    char existVal[256];
                                    UpdateGetFieldValue(uData, c, existVal, sizeof(existVal));
                                    if (strcmp(allTokens[s], existVal) == 0) {
                                        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                                 "duplicate key value violates unique constraint on column \"%s\" (value=%s)",
                                                 setCols[s], allTokens[s]);
                                        g_gui_error = 1;
                                        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                                        db_close(udb);
                                        g_updateCount = 0;
                                        TruncateUpdate();
                                        return -1;
                                    }
                                }
                                db_close(udb);
                            }
                        }
                        break;
                    }
                }
            }
        }
    }

    /* Read per-table pad size */
    int padSize = ReadPadSize(tblName);

    /* Open database */
    if ((db = db_open(tblName, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");

    if (g_whereExpr != NULL) {
        /* ---------- Expression-based WHERE update ---------- */
        char colNames[64][128];
        int numCols;

        numCols = UpdateReadColumnNames(tblName, colNames, 64);

        /* Phase 1: iterate all records, evaluate WHERE, collect matching keys */
        int capacity = 64;
        int matchCount = 0;
        char **matchKeys = (char **)malloc(capacity * sizeof(char *));
        if (!matchKeys) {
            db_close(db);
            g_updateCount = 0;
            TruncateUpdate();
            return -1;
        }

        char keyBuf[1024];
        char *str;
        db_rewind(db);
        while ((str = db_nextrec(db, keyBuf)) != NULL) {
            /* Build column values array from record */
            char colValues[64][256];
            int cv;
            for (cv = 0; cv < numCols && cv < 64; cv++) {
                UpdateGetFieldValue(str, cv, colValues[cv], 256);
            }

            /* Evaluate WHERE expression */
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
                    char **tmp = (char **)realloc(matchKeys,
                                                  capacity * sizeof(char *));
                    if (!tmp) break;
                    matchKeys = tmp;
                }
                matchKeys[matchCount] = strdup(keyBuf);
                matchCount++;
            }
        }

        /* Phase 2: apply update to all matched records */
        int updated = 0;
        int needResize = 0;
        int newPadSize = padSize;
        int i;
        for (i = 0; i < matchCount; i++) {
            if (matchKeys[i]) {
                if (ApplyUpdateToRow(db, matchKeys[i],
                                     (const char (*)[256])setCols,
                                     (const char (*)[256])allTokens,
                                     numSetCols, numSetVals,
                                     (const char (*)[256])metaCols, numMetaCols,
                                     padSize, &needResize, &newPadSize,
                                     tblName) == 0)
                    updated++;
                free(matchKeys[i]);
            }
        }
        free(matchKeys);

        db_close(db);

        /* If padding was expanded, resize ALL records in the table */
        if (needResize) {
            ResizeAllRecords(tblName, newPadSize);
        }

        g_updateCount = updated;
        printf("%d record(s) updated.\n", updated);
    } else {
        /* ---------- Legacy PK-based update ---------- */
        char key[256];
        strcpy(key, allTokens[numTokens - 1]);

        int needResize = 0;
        int newPadSize = padSize;

        if (ApplyUpdateToRow(db, key,
                             (const char (*)[256])setCols,
                             (const char (*)[256])allTokens,
                             numSetCols, numSetVals,
                             (const char (*)[256])metaCols, numMetaCols,
                             padSize, &needResize, &newPadSize,
                             tblName) == 0) {
            g_updateCount = 1;
        } else {
            printf("Record not found for key: %s\n", key);
            g_updateCount = 0;
        }

        db_close(db);

        if (needResize) {
            ResizeAllRecords(tblName, newPadSize);
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
    static char res[1024];

    for (str = strtok(arr, ";"); str != NULL; str = strtok(NULL, ";"))
        strcpy(res, str);

    return res;
}
