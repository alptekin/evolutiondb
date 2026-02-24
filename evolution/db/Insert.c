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
    int i;

    for (i = 0; i < 1024; ++i) {
        g_insert[i] = '\0';
        g_tblInsertionName[i] = '\0';
    }

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
    static char temp[1024];

    strcpy(temp, g_insert);

    str = ParseInsertion(temp);


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

