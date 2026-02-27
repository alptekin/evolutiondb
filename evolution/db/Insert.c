#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

int GetInsertions(char *name)
{
    strcat(g_insert, name);
    strcat(g_insert, ";");

    return 1;
}

int TruncateInsert(void)
{
    memset(g_insert, '\0', RECORD_BUF_SIZE);
    memset(g_tblInsertionName, '\0', 1024);

    return 1;
}

char *ParseInsertion(char *arr)
{
    static char *str;

    str = strtok(arr, ";");

    return str;
    
 }
int InsertProcess(void)
{
    static char *str;
    DBHANDLE	db;
    static char temp[RECORD_BUF_SIZE];

    strcpy(temp, g_insert);

    str = ParseInsertion(temp);

    /* Validate column types before inserting */
    {
        char tblName[1024];
        int colTypes[64];
        int numTypes, numValues, i;

        strcpy(tblName, g_tblInsertionName);
        {
            char *dot = strstr(tblName, ".dat");
            if (dot) *dot = '\0';
        }

        numTypes = ReadColumnTypes(tblName, colTypes, 64);
        if (numTypes > 0) {
            /* Count values in g_insert (semicolon-separated) */
            char valBuf[RECORD_BUF_SIZE];
            char *vals[64];
            char *t;

            strcpy(valBuf, g_insert);
            numValues = 0;
            t = strtok(valBuf, ";");
            while (t && numValues < 64) {
                vals[numValues++] = t;
                t = strtok(NULL, ";");
            }

            /* Check column count matches */
            if (numValues != numTypes) {
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "INSERT has %d value(s) but table has %d column(s)",
                         numValues, numTypes);
                g_gui_error = 1;
                TruncateInsert();
                return -1;
            }

            /* Validate each value against its column type */
            for (i = 0; i < numValues; i++) {
                if (ValidateValue(vals[i], colTypes[i]) != 0) {
                    TruncateInsert();
                    return -1;
                }
            }
        }
    }

    /* Validate NOT NULL constraints */
    {
        char tblName2[1024];
        int nullFlags[64];
        int numFlags, i;

        strcpy(tblName2, g_tblInsertionName);
        {
            char *dot = strstr(tblName2, ".dat");
            if (dot) *dot = '\0';
        }

        numFlags = ReadNullFlags(tblName2, nullFlags, 64);
        if (numFlags > 0) {
            /* Re-parse values from g_insert */
            char valBuf2[RECORD_BUF_SIZE];
            char *vals2[64];
            char *t2;
            int numVals2 = 0;

            strcpy(valBuf2, g_insert);
            t2 = strtok(valBuf2, ";");
            while (t2 && numVals2 < 64) {
                vals2[numVals2++] = t2;
                t2 = strtok(NULL, ";");
            }

            for (i = 0; i < numFlags && i < numVals2; i++) {
                if (nullFlags[i] && (vals2[i][0] == '\0' ||
                    strcmp(vals2[i], "\x01NULL\x01") == 0)) {
                    /* Read column name for error message */
                    char metaFile2[1024], metaLine2[1024];
                    char *colNames2[64];
                    int nc2 = 0;
                    FILE *fp2;

                    sprintf(metaFile2, "%s.meta", tblName2);
                    fp2 = fopen(metaFile2, "r");
                    if (fp2) {
                        if (fgets(metaLine2, sizeof(metaLine2), fp2)) {
                            char *c2;
                            metaLine2[strcspn(metaLine2, "\n")] = '\0';
                            c2 = strtok(metaLine2, ";");
                            while (c2 && nc2 < 64) {
                                colNames2[nc2++] = c2;
                                c2 = strtok(NULL, ";");
                            }
                        }
                        fclose(fp2);
                    }

                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "null value in column \"%s\" violates not-null constraint",
                             (i < nc2) ? colNames2[i] : "unknown");
                    g_gui_error = 1;
                    TruncateInsert();
                    return -1;
                }
            }
        }
    }

    if ((db = db_open(g_tblInsertionName, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");

    /* Read per-table pad size from .meta file */
    {
        char tblName[1024];
        int padSize;
        int curLen;

        strcpy(tblName, g_tblInsertionName);
        {
            char *dot = strstr(tblName, ".dat");
            if (dot) *dot = '\0';
        }
        padSize = ReadPadSize(tblName);

        /* Safety cap: never exceed buffer size */
        if (padSize >= RECORD_BUF_SIZE)
            padSize = RECORD_BUF_SIZE - 1;

        curLen = (int)strlen(g_insert);
        if (curLen < padSize) {
            memset(g_insert + curLen, ';', padSize - curLen);
            g_insert[padSize] = '\0';
        }
    }

    if (db_store(db, str, g_insert, DB_INSERT) != 0)
        err_quit("\nerror:db_store error for %s\nDuplicate primary key field!..\n", str);

    printf("command(s) completed successfully!..\n");
    TruncateInsert();

    db_close(db);
    
    return 0;
}
int GetInsertionTableName(char *name)
{
    strcat(g_tblInsertionName, name);

    return 0;
}

