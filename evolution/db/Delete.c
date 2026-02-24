#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

int DeleteProcess(void)
{
    DBHANDLE db;
    char *str = NULL;

    str = strtok(g_insert, ";");

    if ((db = db_open(g_tblDelName, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");

    if (db_delete(db, str) != 0)
        printf("Record not found: %s\n", str);
    else
        printf("Record deleted successfully.\n");

    TruncateDelete();

    db_close(db);

    return 0;
}

int TruncateDelete(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_insert[i] = '\0';
        g_tblDelName[i] = '\0';
    }

    return 0;
}

int GetDelTableName(char *pname)
{
    strcat(g_tblDelName, pname);

    return 0;
}
