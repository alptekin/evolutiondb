#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

/* Find column index by name from .meta file. Returns -1 if not found. */
static int FindColumnIndex(const char *tableName, const char *colName)
{
    char metaFile[1024];
    char line[1024];
    int idx = 0;

    sprintf(metaFile, "%s.meta", tableName);
    FILE *fp = fopen(metaFile, "r");
    if (!fp)
        return -1;

    if (fgets(line, sizeof(line), fp)) {
        char *col;
        line[strcspn(line, "\n")] = '\0';
        col = strtok(line, ";");
        while (col) {
            if (strcmp(col, colName) == 0) {
                fclose(fp);
                return idx;
            }
            idx++;
            col = strtok(NULL, ";");
        }
    }

    fclose(fp);
    return -1;
}

/* Extract the value at column index from a semicolon-separated record */
static void GetFieldValue(const char *data, int colIndex, char *buf, int bufSize)
{
    char temp[1024];
    char *val;
    int i = 0;

    strcpy(temp, data);
    val = strtok(temp, ";");
    while (val) {
        if (i == colIndex) {
            strncpy(buf, val, bufSize - 1);
            buf[bufSize - 1] = '\0';
            return;
        }
        i++;
        val = strtok(NULL, ";");
    }
    buf[0] = '\0';
}

/* Sorting context for qsort */
static int g_sortColIndex = -1;
static int g_sortDesc = 0;

typedef struct {
    char data[1024];
} RecordEntry;

static int CompareRecords(const void *a, const void *b)
{
    const RecordEntry *ra = (const RecordEntry *)a;
    const RecordEntry *rb = (const RecordEntry *)b;
    char valA[256], valB[256];
    int result;
    double numA, numB;
    char *endA, *endB;

    GetFieldValue(ra->data, g_sortColIndex, valA, sizeof(valA));
    GetFieldValue(rb->data, g_sortColIndex, valB, sizeof(valB));

    /* Try numeric comparison first */
    numA = strtod(valA, &endA);
    numB = strtod(valB, &endB);
    if (*endA == '\0' && *endB == '\0' && valA[0] != '\0' && valB[0] != '\0') {
        if (numA < numB) result = -1;
        else if (numA > numB) result = 1;
        else result = 0;
    } else {
        result = strcmp(valA, valB);
    }

    return g_sortDesc ? -result : result;
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

    /* Check if ORDER BY is requested */
    if (g_orderByColumn[0] != '\0') {
        int colIdx = FindColumnIndex(tblName, g_orderByColumn);
        if (colIdx < 0) {
            printf("Error: column '%s' not found\n", g_orderByColumn);
            db_rewind(db);
            while ((str = db_nextrec(db, keyBuf)) != NULL)
                PrintRecord(str);
        } else {
            RecordEntry records[500];
            int count = 0;
            int i;

            db_rewind(db);
            while ((str = db_nextrec(db, keyBuf)) != NULL && count < 500) {
                strncpy(records[count].data, str, sizeof(records[count].data) - 1);
                records[count].data[sizeof(records[count].data) - 1] = '\0';
                count++;
            }

            g_sortColIndex = colIdx;
            g_sortDesc = g_orderByDesc;
            qsort(records, count, sizeof(RecordEntry), CompareRecords);

            for (i = 0; i < count; i++)
                PrintRecord(records[i].data);
        }
    } else {
        db_rewind(db);
        while ((str = db_nextrec(db, keyBuf)) != NULL)
            PrintRecord(str);
    }

    TruncateSelect();
    g_orderByColumn[0] = '\0';
    g_orderByDesc = 0;
    db_close(db);
}

int GetSelTableName(char *pname)
{
    db_table_path(pname, g_tblSelectionName, sizeof(g_tblSelectionName));
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

int GetOrderByColumn(char *name)
{
    strcpy(g_orderByColumn, name);
    return 0;
}

void SetOrderByDirection(int desc)
{
    g_orderByDesc = desc;
}

void AddOrderByColumn(const char *name, int desc)
{
    if (g_orderByCount >= 8) return;
    strncpy(g_orderByColumns[g_orderByCount], name, 255);
    g_orderByColumns[g_orderByCount][255] = '\0';
    g_orderByDescs[g_orderByCount] = desc;
    g_orderByCount++;
    /* Also set legacy single-column globals for backward compat */
    if (g_orderByCount == 1) {
        strcpy(g_orderByColumn, name);
        g_orderByDesc = desc;
    }
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
