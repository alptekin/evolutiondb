#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

static void ResizeAllRecords(const char *tblName, int newPadSize)
{
    DBHANDLE db;
    char keyBuf[1024];
    char *data;
    int i, count = 0;

    /* Phase 1: Read all records into memory */
    static char keys[200][256];
    static char records[200][1024];

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

int UpdateProcess(void)
{
    DBHANDLE db;
    char temp[1024];
    char tblName[1024];
    char metaFile[1024];
    char metaLine[1024];
    char *existingData = NULL;
    char *tok;
    int i, s, c;

    /* Parse g_insert tokens: SET values followed by WHERE key (last token) */
    char allTokens[64][256];
    int numTokens = 0;

    strcpy(temp, g_insert);
    tok = strtok(temp, ";");
    while (tok && numTokens < 64) {
        strcpy(allTokens[numTokens], tok);
        numTokens++;
        tok = strtok(NULL, ";");
    }

    if (numTokens < 2) {
        printf("Error: UPDATE requires at least a SET value and a WHERE key\n");
        TruncateUpdate();
        return -1;
    }

    /* Last token is the WHERE key, the rest are SET values */
    char key[256];
    strcpy(key, allTokens[numTokens - 1]);
    int numSetVals = numTokens - 1;

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

    sprintf(metaFile, "%s.meta", tblName);
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

    /* Read per-table pad size */
    int padSize = ReadPadSize(tblName);

    /* Open database */
    if ((db = db_open(tblName, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");

    /* Fetch existing record */
    existingData = (char *)db_fetch(db, key);
    if (existingData == NULL) {
        printf("Record not found for key: %s\n", key);
        TruncateUpdate();
        db_close(db);
        return -1;
    }

    /* Parse existing record into fields */
    char fields[64][256];
    int numFields = 0;

    strcpy(temp, existingData);
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
                        strcpy(fields[c], allTokens[s]);
                    }
                    break;
                }
            }
        }
    }

    /* Build updated record string */
    {
        char newRecord[1024] = "";
        int newLen, needResize = 0;

        for (i = 0; i < numFields; i++) {
            strcat(newRecord, fields[i]);
            strcat(newRecord, ";");
        }

        newLen = (int)strlen(newRecord);

        /* If new record exceeds current pad size, double padding */
        if (newLen >= padSize) {
            while (padSize <= newLen)
                padSize *= 2;
            needResize = 1;
        }

        /* Pad record to target pad size */
        if (newLen < padSize) {
            memset(newRecord + newLen, ';', padSize - newLen);
            newRecord[padSize] = '\0';
        }

        if (db_store(db, key, newRecord, DB_REPLACE) != 0)
            err_quit("\nerror: UPDATE failed for key %s\n", key);

        db_close(db);

        /* If padding was doubled, resize ALL records in the table */
        if (needResize) {
            ResizeAllRecords(tblName, padSize);
        }
    }

    printf("command(s) completed successfully!..\n");
    TruncateUpdate();

    return 0;
}

int GetUpdateTableName(char *pname)
{
    strcat(g_tblUpdateTableName, pname);
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
    int i;

    for (i = 0; i < 1024; ++i) {
        g_columnNames[i] = '\0';
        g_insert[i] = '\0';
        g_tblSelectionName[i] = '\0';
    }

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
