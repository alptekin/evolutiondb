#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "apue.h"
#include "apue_db.h"
#include "database.h"

int CreateTableProcess(void)
{
    DBHANDLE db;
    char metaFile[1024];

    if ((db = db_open(g_tblName, O_RDWR | O_CREAT | O_TRUNC, FILE_MODE)) == NULL)
        err_sys("db_open error");

    /* Save column names to .meta file */
    if (g_columnDefs[0] != '\0') {
        sprintf(metaFile, "%s.meta", g_tblName);
        FILE *fp = fopen(metaFile, "w");
        if (fp) {
            fputs(g_columnDefs, fp);
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
