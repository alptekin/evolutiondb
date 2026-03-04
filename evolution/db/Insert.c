#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

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
            char metaFile[1024], metaLine[1024];
            char *colNames[64];
            int nc = 0;
            FILE *fp;

            sprintf(metaFile, "%s.meta", tblName);
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
            return -1;
        }
    }
    return 0;
}

/* Pad a single row to the table's pad size and store it via db_store.
 * Returns 0 on success, 1 on duplicate key, -1 on error. */
static int store_single_row(DBHANDLE db, const char *tblName, char *rowData)
{
    int padSize, curLen;
    char padded[RECORD_BUF_SIZE];
    char keyBuf[RECORD_BUF_SIZE];
    char *key;

    /* Extract key (first semicolon-delimited value) */
    strncpy(keyBuf, rowData, sizeof(keyBuf) - 1);
    keyBuf[sizeof(keyBuf) - 1] = '\0';
    key = strtok(keyBuf, ";");
    if (!key) return -1;

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

    return db_store(db, key, padded, DB_INSERT);
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

    /* Validate all rows BEFORE inserting any (abort semantics) */
    for (i = 0; i < numRows; i++) {
        char valBuf[RECORD_BUF_SIZE];
        char *vals[64];
        int nv;

        strncpy(valBuf, rowPtrs[i], sizeof(valBuf) - 1);
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
    }

    /* Open database file */
    if ((db = db_open(g_tblInsertionName, O_RDWR, FILE_MODE)) == NULL) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "could not open table \"%s\"", tblName);
        g_gui_error = 1;
        TruncateInsert();
        return -1;
    }

    /* Insert each row */
    g_insertCount = 0;
    for (i = 0; i < numRows; i++) {
        int rc = store_single_row(db, tblName, rowPtrs[i]);
        if (rc != 0) {
            /* Duplicate PK or error — abort whole batch */
            char valBuf2[RECORD_BUF_SIZE];
            char *key;
            strncpy(valBuf2, rowPtrs[i], sizeof(valBuf2) - 1);
            valBuf2[sizeof(valBuf2) - 1] = '\0';
            key = strtok(valBuf2, ";");
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "duplicate key value violates unique constraint (key=%s, row %d)",
                     key ? key : "?", i + 1);
            g_gui_error = 1;
            db_close(db);
            TruncateInsert();
            return -1;
        }
        g_insertCount++;
    }

    printf("command(s) completed successfully!..\n");
    db_close(db);
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

