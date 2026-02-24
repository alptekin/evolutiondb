#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

static void PrintColumnHeaders(const char *tableName)
{
    char metaFile[1024];
    char line[1024];
    char *col;

    sprintf(metaFile, "%s.meta", tableName);
    FILE *fp = fopen(metaFile, "r");
    if (!fp)
        return;

    if (fgets(line, sizeof(line), fp)) {
        char temp[1024];

        line[strcspn(line, "\n")] = '\0';

        /* Print column names */
        strcpy(temp, line);
        col = strtok(temp, ";");
        while (col) {
            printf("%-20s", col);
            col = strtok(NULL, ";");
        }
        printf("\n");

        /* Print separator line */
        strcpy(temp, line);
        col = strtok(temp, ";");
        while (col) {
            printf("--------------------");
            col = strtok(NULL, ";");
        }
        printf("\n");
    }

    fclose(fp);
}

static void PrintRecord(const char *data)
{
    char temp[1024];
    char *val;

    strcpy(temp, data);
    val = strtok(temp, ";");
    while (val) {
        printf("%-20s", val);
        val = strtok(NULL, ";");
    }
    printf("\n");
}

void SelectAll(void)
{
    DBHANDLE db;
    char *str = NULL;
    char tblName[1024];
    char keyBuf[1024];

    /* Extract table name without .dat extension */
    strcpy(tblName, g_tblSelectionName);
    char *dot = strstr(tblName, ".dat");
    if (dot)
        *dot = '\0';

    /* In GUI mode, save table name for GridView and skip text output */
    if (g_gui_mode) {
        strcpy(g_lastSelectTable, tblName);
        TruncateSelect();
        return;
    }

    if ((db = db_open(tblName, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");

    PrintColumnHeaders(tblName);

    db_rewind(db);
    while ((str = db_nextrec(db, keyBuf)) != NULL) {
        PrintRecord(str);
    }

    TruncateSelect();
    db_close(db);
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
    char *str = NULL;
    char *str2 = NULL;
    char tblName[1024];

    /* Extract table name without .dat extension */
    strcpy(tblName, g_tblSelectionName);
    char *dot = strstr(tblName, ".dat");
    if (dot)
        *dot = '\0';

    /* In GUI mode, save table name for GridView and skip text output */
    if (g_gui_mode) {
        strcpy(g_lastSelectTable, tblName);
        TruncateSelect();
        return 0;
    }

    str2 = strtok(g_insert, ";");

    if ((db = db_open(tblName, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");

    if ((str = db_fetch(db, str2)) == NULL) {
        printf("Record not found: %s\n", str2 ? str2 : "(null)");
    } else {
        PrintColumnHeaders(tblName);
        PrintRecord(str);
    }

    TruncateSelect();
    db_close(db);

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
