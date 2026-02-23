
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

void SelectAll()
{
     FILE *db;
     int ch;

     int i;

     if ((db = fopen(g_tblSelectionName,"r")) == NULL)
         err_sys("db_open error");

     while ((ch = fgetc(db)) != EOF)
         putchar(ch);

     TruncateSelect();
     fclose(db);
}

int GetSelTableName(char *pname)
{
    strcat(g_tblSelectionName, pname);
    strcat(g_tblSelectionName, ".dat");

    return 0;
}

int GetSelection(char *pname)
{
    strcat(g_whereSel, pname);
    return 0;
}

int SelectProcess(void)
{
    DBHANDLE db;
    static char *str = '\0';
    static char *str2 = '\0';

    str = strtok(g_tblSelectionName, ".");
    str2 = strtok(g_insert, ";");

    if ((db = db_open(str, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");

    if ((str = db_fetch(db, str2)) == NULL)
        ;

    printf("%s\n\n\n", str);

    TruncateSelect();

    return 0;
}

int TruncateSelect(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_insert[i] = '\0';
        g_tblSelectionName[i] = '\0';
    }

    return 0;
}