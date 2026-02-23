#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

int UpdateProcess(void)
{

    static char *str = '\0';
    static char *str2 = '\0';
    DBHANDLE	db;
    static char temp[1024];

    strcpy(temp, g_insert);

    str = ParseUpdate(temp);

    str2 = strtok(g_tblSelectionName, ".");

    if ((db = db_open(str2, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");


    if (db_store(db, str, g_insert, DB_REPLACE) != 0)
        err_quit("\nerror:db_store error for %s\nDuplicate primary key field!..\n", str);

    printf("command(s) completed successfully!..\n");
    TruncateUpdate();

    db_close(db);

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

int ParseUpdate(char *arr)
{
    static char *str = '\0';
    static char res[1024];
    int i = 0;

    for (str = strtok(arr, ";"); str != NULL; str = strtok(NULL, ";"))
        strcpy(res, str);
    

    return res;
}




