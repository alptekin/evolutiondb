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
    char metaFile[1024], colLine[1024], typeLine[1024], pkLine[256], nullLine[1024];
    FILE *fp;

    sprintf(metaFile, "%s.meta", tblName);

    /* Read existing lines from .meta */
    colLine[0] = '\0';
    typeLine[0] = '\0';
    pkLine[0] = '\0';
    nullLine[0] = '\0';
    fp = fopen(metaFile, "r");
    if (fp) {
        if (fgets(colLine, sizeof(colLine), fp)) {
            colLine[strcspn(colLine, "\n")] = '\0';
            /* Skip line 2 (old pad size) */
            char skipBuf[256];
            if (fgets(skipBuf, sizeof(skipBuf), fp)) {
                /* Line 3: type encodings */
                if (fgets(typeLine, sizeof(typeLine), fp)) {
                    typeLine[strcspn(typeLine, "\n")] = '\0';
                    /* Line 4: primary key index */
                    if (fgets(pkLine, sizeof(pkLine), fp)) {
                        pkLine[strcspn(pkLine, "\n")] = '\0';
                        /* Line 5: NOT NULL flags */
                        if (fgets(nullLine, sizeof(nullLine), fp))
                            nullLine[strcspn(nullLine, "\n")] = '\0';
                    }
                }
            }
        }
        fclose(fp);
    }

    /* Rewrite .meta preserving all lines */
    fp = fopen(metaFile, "w");
    if (fp) {
        if (nullLine[0] != '\0')
            fprintf(fp, "%s\n%d\n%s\n%s\n%s\n", colLine, padSize, typeLine, pkLine, nullLine);
        else if (pkLine[0] != '\0')
            fprintf(fp, "%s\n%d\n%s\n%s\n", colLine, padSize, typeLine, pkLine);
        else if (typeLine[0] != '\0')
            fprintf(fp, "%s\n%d\n%s\n", colLine, padSize, typeLine);
        else
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
            fprintf(fp, "%s\n%d\n%s\n%d\n%s\n", g_columnDefs, padSize, g_columnTypeDefs, g_primaryKeyIndex, g_columnNullFlags);
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
        g_columnTypeDefs[i] = '\0';
        g_columnNullFlags[i] = '\0';
    }
    g_totalColumnSize = 0;
    g_primaryKeyIndex = -1;
    g_columnCount = 0;
    g_currentColNotNull = 0;
    g_currentColPrimaryKey = 0;
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

    /* Accumulate NOT NULL flags (e.g. "1;0;1") */
    {
        char buf[4];
        if (g_columnNullFlags[0] != '\0')
            strcat(g_columnNullFlags, ";");
        sprintf(buf, "%d", g_currentColNotNull ? 1 : 0);
        strcat(g_columnNullFlags, buf);
    }

    /* Record PRIMARY KEY column index */
    if (g_currentColPrimaryKey)
        g_primaryKeyIndex = g_columnCount;

    g_columnCount++;

    /* Reset per-column flags for next column */
    g_currentColNotNull = 0;
    g_currentColPrimaryKey = 0;

    return 0;
}

int GetColumnSize(int typeVal)
{
    char buf[32];
    int size = typeVal % 10000;
    if (size == 0)
        size = 12; /* default for INT, INTEGER, etc. */
    g_totalColumnSize += size;

    /* Accumulate type encoding in g_columnTypeDefs (e.g. "40000;130050") */
    if (g_columnTypeDefs[0] != '\0')
        strcat(g_columnTypeDefs, ";");
    sprintf(buf, "%d", typeVal);
    strcat(g_columnTypeDefs, buf);

    return size;
}

int ReadColumnTypes(const char *tblName, int *types, int maxCols)
{
    char metaFile[1024], line[1024];
    char *tok;
    int count = 0;
    FILE *fp;

    sprintf(metaFile, "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return 0;

    /* Skip line 1 (column names) */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    /* Skip line 2 (pad size) */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    /* Line 3: type encodings */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }

    fclose(fp);
    line[strcspn(line, "\n")] = '\0';
    if (line[0] == '\0') return 0;

    tok = strtok(line, ";");
    while (tok && count < maxCols) {
        types[count++] = atoi(tok);
        tok = strtok(NULL, ";");
    }

    return count;
}

int ValidateValue(const char *value, int typeEncoding)
{
    int typeFamily = typeEncoding / 10000;
    int size = typeEncoding % 10000;
    char *endptr;

    switch (typeFamily) {
    case 1: /* BIT, TINYINT */
    case 2: /* SMALLINT */
    case 3: /* MEDIUMINT */
    case 4: /* INT */
    case 5: /* INTEGER */
    case 6: /* BIGINT */
        strtol(value, &endptr, 10);
        if (*endptr != '\0') {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "expected integer value, got '%s'", value);
            g_gui_error = 1;
            return -1;
        }
        break;

    case 7:  /* REAL */
    case 8:  /* DOUBLE */
    case 9:  /* FLOAT */
    case 11: /* DECIMAL */
        strtod(value, &endptr);
        if (*endptr != '\0') {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "expected numeric value, got '%s'", value);
            g_gui_error = 1;
            return -1;
        }
        break;

    case 12: /* CHAR */
    case 13: /* VARCHAR */
        if (size > 0 && (int)strlen(value) > size) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "value '%.100s' exceeds %s(%d) length limit",
                     value, typeFamily == 12 ? "CHAR" : "VARCHAR", size);
            g_gui_error = 1;
            return -1;
        }
        break;

    case 22: /* BOOLEAN */
        if (strcmp(value, "true") != 0 && strcmp(value, "false") != 0 &&
            strcmp(value, "TRUE") != 0 && strcmp(value, "FALSE") != 0 &&
            strcmp(value, "0") != 0 && strcmp(value, "1") != 0) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "expected BOOLEAN (true/false/0/1), got '%s'", value);
            g_gui_error = 1;
            return -1;
        }
        break;

    default:
        break; /* DATE/TIME, BINARY, BLOB, TEXT, ENUM, SET — no validation */
    }

    return 0;
}

void SetColumnNotNull(void)
{
    g_currentColNotNull = 1;
}

void SetColumnPrimaryKey(void)
{
    g_currentColPrimaryKey = 1;
}

int ReadPrimaryKey(const char *tblName)
{
    char metaFile[1024], line[256];
    FILE *fp;

    sprintf(metaFile, "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return -1;

    /* Skip lines 1-3 */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    /* Line 4: primary key index */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }

    fclose(fp);
    line[strcspn(line, "\n")] = '\0';
    return atoi(line);
}

int ReadNullFlags(const char *tblName, int *flags, int maxCols)
{
    char metaFile[1024], line[1024];
    char *tok;
    int count = 0;
    FILE *fp;

    sprintf(metaFile, "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return 0;

    /* Skip lines 1-4 */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    /* Line 5: NOT NULL flags */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }

    fclose(fp);
    line[strcspn(line, "\n")] = '\0';
    if (line[0] == '\0') return 0;

    tok = strtok(line, ";");
    while (tok && count < maxCols) {
        flags[count++] = atoi(tok);
        tok = strtok(NULL, ";");
    }

    return count;
}
