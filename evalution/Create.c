#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "apue.h"
#include "apue_db.h"
#include "database.h"

int CreateTableProcess(void)
{
    DBHANDLE db;

    if ((db = db_open(g_tblName, O_RDWR | O_CREAT | O_TRUNC, FILE_MODE)) == NULL)
        err_sys("db_open error");

    printf("command(s) completed successfully!..\n");
    TruncateCreate();

    db_close(db);

    return 0;
}

void TruncateCreate(void)
{
    int i;
    
    for (i = 0; i < 1024; ++i)
        g_tblName[i] = '\0';
}

int GetTableName(char *name)
{
    strcat(g_tblName, name);

    return 0;
}


















