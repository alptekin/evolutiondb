#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "apue.h"
#include "apue_db.h"
#include "database.h"

int ReadPadSize(const char *tblName)
{
    char metaFile[1024], line[256];
    int padSize = RECORD_PAD_SIZE;
    FILE *fp;

    sprintf(metaFile, "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (fp) {
        /* Line 1: column names (skip) */
        if (fgets(line, sizeof(line), fp)) {
            /* Line 2: pad size */
            if (fgets(line, sizeof(line), fp)) {
                int val = atoi(line);
                if (val > 0)
                    padSize = val;
            }
        }
        fclose(fp);
    }
    return padSize;
}

void WritePadSize(const char *tblName, int padSize)
{
    char metaFile[1024], colLine[1024];
    FILE *fp;

    sprintf(metaFile, "%s.meta", tblName);

    /* Read existing column names (line 1) */
    colLine[0] = '\0';
    fp = fopen(metaFile, "r");
    if (fp) {
        if (fgets(colLine, sizeof(colLine), fp))
            colLine[strcspn(colLine, "\n")] = '\0';
        fclose(fp);
    }

    /* Rewrite .meta with column names + new pad size */
    fp = fopen(metaFile, "w");
    if (fp) {
        fprintf(fp, "%s\n%d\n", colLine, padSize);
        fclose(fp);
    }
}

int CreateTableProcess(void)
{
    DBHANDLE db;
    char metaFile[1024];
    int padSize;

    if ((db = db_open(g_tblName, O_RDWR | O_CREAT | O_TRUNC, FILE_MODE)) == NULL)
        err_sys("db_open error");

    /* Compute initial pad size from column definitions */
    {
        /* Count columns from g_columnDefs (format: "col1;col2;col3") */
        int numCols = 0;
        char tmp[1024];
        char *tok;

        if (g_columnDefs[0] != '\0') {
            strcpy(tmp, g_columnDefs);
            tok = strtok(tmp, ";");
            while (tok) {
                numCols++;
                tok = strtok(NULL, ";");
            }
        }

        /* g_totalColumnSize has the sum of all column sizes from parser */
        padSize = g_totalColumnSize + numCols; /* fields + separators */
        if (padSize < RECORD_PAD_SIZE)
            padSize = RECORD_PAD_SIZE;
    }

    /* Save column names and pad size to .meta file */
    if (g_columnDefs[0] != '\0') {
        sprintf(metaFile, "%s.meta", g_tblName);
        FILE *fp = fopen(metaFile, "w");
        if (fp) {
            fprintf(fp, "%s\n%d\n", g_columnDefs, padSize);
            fclose(fp);
        }
    }

    printf("command(s) completed successfully!..\n");
    TruncateCreate();

    db_close(db);

    return 0;
}

void TruncateCreate(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_tblName[i] = '\0';
        g_columnDefs[i] = '\0';
    }
    g_totalColumnSize = 0;
}

int GetTableName(char *name)
{
    strcat(g_tblName, name);

    return 0;
}

int GetColumnNames(char *name)
{
    if (g_columnDefs[0] != '\0')
        strcat(g_columnDefs, ";");
    strcat(g_columnDefs, name);

    return 0;
}

int GetColumnSize(int typeVal)
{
    int size = typeVal % 10000;
    if (size == 0)
        size = 12; /* default for INT, INTEGER, etc. */
    g_totalColumnSize += size;
    return size;
}
