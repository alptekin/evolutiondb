#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "apue.h"
#include "apue_db.h"
#include "database.h"

int ReadPadSize(const char *tblName)
{
    char metaFile[SAFE_PATH_MAX], line[256];
    int padSize = RECORD_PAD_SIZE;
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
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
    char metaFile[SAFE_PATH_MAX], colLine[1024], typeLine[1024], pkLine[256], nullLine[1024], uniqueLine[1024], defaultLine[4096], autoIncLine[64];
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);

    /* Read existing lines from .meta */
    colLine[0] = '\0';
    typeLine[0] = '\0';
    pkLine[0] = '\0';
    nullLine[0] = '\0';
    uniqueLine[0] = '\0';
    defaultLine[0] = '\0';
    autoIncLine[0] = '\0';
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
                        if (fgets(nullLine, sizeof(nullLine), fp)) {
                            nullLine[strcspn(nullLine, "\n")] = '\0';
                            /* Line 6: UNIQUE flags */
                            if (fgets(uniqueLine, sizeof(uniqueLine), fp)) {
                                uniqueLine[strcspn(uniqueLine, "\n")] = '\0';
                                /* Line 7: DEFAULT values */
                                if (fgets(defaultLine, sizeof(defaultLine), fp)) {
                                    defaultLine[strcspn(defaultLine, "\n")] = '\0';
                                    /* Line 8: AUTO_INCREMENT */
                                    if (fgets(autoIncLine, sizeof(autoIncLine), fp))
                                        autoIncLine[strcspn(autoIncLine, "\n")] = '\0';
                                }
                            }
                        }
                    }
                }
            }
        }
        fclose(fp);
    }

    /* Rewrite .meta preserving all lines */
    fp = fopen(metaFile, "w");
    if (fp) {
        if (autoIncLine[0] != '\0')
            fprintf(fp, "%s\n%d\n%s\n%s\n%s\n%s\n%s\n%s\n", colLine, padSize, typeLine, pkLine, nullLine, uniqueLine, defaultLine, autoIncLine);
        else if (defaultLine[0] != '\0')
            fprintf(fp, "%s\n%d\n%s\n%s\n%s\n%s\n%s\n", colLine, padSize, typeLine, pkLine, nullLine, uniqueLine, defaultLine);
        else if (uniqueLine[0] != '\0')
            fprintf(fp, "%s\n%d\n%s\n%s\n%s\n%s\n", colLine, padSize, typeLine, pkLine, nullLine, uniqueLine);
        else if (nullLine[0] != '\0')
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
        /* Resolve composite PK — table-level PRIMARY KEY (col1, col2, ...) */
        char pkIndicesStr[256];
        if (g_pkColumnCount > 0) {
            /* Resolve column names to indices */
            char tmpDefs[1024];
            char *colArr[64];
            int numCols = 0, p;
            strncpy(tmpDefs, g_columnDefs, sizeof(tmpDefs) - 1);
            tmpDefs[sizeof(tmpDefs) - 1] = '\0';
            char *t = strtok(tmpDefs, ";");
            while (t && numCols < 64) {
                colArr[numCols++] = t;
                t = strtok(NULL, ";");
            }
            pkIndicesStr[0] = '\0';
            for (p = 0; p < g_pkColumnCount; p++) {
                int j, found = -1;
                for (j = 0; j < numCols; j++) {
                    if (strcasecmp(g_pkColumnNames[p], colArr[j]) == 0) {
                        found = j;
                        break;
                    }
                }
                if (found >= 0) {
                    char idxBuf[16];
                    if (pkIndicesStr[0] != '\0') strcat(pkIndicesStr, ",");
                    snprintf(idxBuf, sizeof(idxBuf), "%d", found);
                    strcat(pkIndicesStr, idxBuf);
                }
            }
        } else {
            /* Single-column PK from column_atts rule */
            snprintf(pkIndicesStr, sizeof(pkIndicesStr), "%d", g_primaryKeyIndex);
        }

        snprintf(metaFile, sizeof(metaFile), "%s.meta", g_tblName);
        FILE *fp = fopen(metaFile, "w");
        if (fp) {
            /* Line 4 is now comma-separated PK indices (e.g. "0" or "0,2") */
            fprintf(fp, "%s\n%d\n%s\n%s\n%s\n%s\n%s\n%d:%d:%d\n",
                    g_columnDefs, padSize, g_columnTypeDefs, pkIndicesStr,
                    g_columnNullFlags, g_columnUniqueFlags, g_columnDefaults,
                    g_autoIncColIndex, g_autoIncStart - g_autoIncStep, g_autoIncStep);
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
        g_columnUniqueFlags[i] = '\0';
    }
    memset(g_columnDefaults, 0, sizeof(g_columnDefaults));
    g_currentColDefault[0] = '\0';
    g_totalColumnSize = 0;
    g_primaryKeyIndex = -1;
    g_columnCount = 0;
    g_currentColNotNull = 0;
    g_currentColPrimaryKey = 0;
    g_currentColUnique = 0;
    g_currentColAutoIncrement = 0;
    g_autoIncColIndex = -1;
    g_autoIncStart = 1;
    g_autoIncStep = 1;
    g_pkColumnCount = 0;
    memset(g_pkColumnNames, 0, sizeof(g_pkColumnNames));
}

int GetTableName(char *name)
{
    db_table_path(name, g_tblName, sizeof(g_tblName));

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
        snprintf(buf, sizeof(buf), "%d", g_currentColNotNull ? 1 : 0);
        strcat(g_columnNullFlags, buf);
    }

    /* Accumulate UNIQUE flags (e.g. "0;1;0") */
    {
        char buf[4];
        if (g_columnUniqueFlags[0] != '\0')
            strcat(g_columnUniqueFlags, ";");
        snprintf(buf, sizeof(buf), "%d", g_currentColUnique ? 1 : 0);
        strcat(g_columnUniqueFlags, buf);
    }

    /* Accumulate DEFAULT values (e.g. "\x01NONE\x01;42;\x01NONE\x01;hello") */
    {
        if (g_columnDefaults[0] != '\0')
            strcat(g_columnDefaults, ";");
        if (g_currentColDefault[0] != '\0')
            strcat(g_columnDefaults, g_currentColDefault);
        else
            strcat(g_columnDefaults, "\x01NONE\x01");
    }

    /* Record PRIMARY KEY column index */
    if (g_currentColPrimaryKey)
        g_primaryKeyIndex = g_columnCount;

    /* Record AUTO_INCREMENT column index */
    if (g_currentColAutoIncrement)
        g_autoIncColIndex = g_columnCount;

    g_columnCount++;

    /* Reset per-column flags for next column */
    g_currentColNotNull = 0;
    g_currentColPrimaryKey = 0;
    g_currentColUnique = 0;
    g_currentColDefault[0] = '\0';
    g_currentColAutoIncrement = 0;

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
    snprintf(buf, sizeof(buf), "%d", typeVal);
    strcat(g_columnTypeDefs, buf);

    return size;
}

int ReadColumnTypes(const char *tblName, int *types, int maxCols)
{
    char metaFile[SAFE_PATH_MAX], line[1024];
    char *tok;
    int count = 0;
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
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

    /* NULL values bypass type validation */
    if (strcmp(value, "\x01NULL\x01") == 0)
        return 0;

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
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE);
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
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE);
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
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_STRING_DATA_RIGHT_TRUNCATION);
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
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE);
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

void SetColumnUnique(void)
{
    g_currentColUnique = 1;
}

int ReadUniqueFlags(const char *tblName, int *flags, int maxCols)
{
    char metaFile[SAFE_PATH_MAX], line[1024];
    char *tok;
    int count = 0;
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return 0;

    /* Skip lines 1-5 */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    /* Line 6: UNIQUE flags */
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

void SetColumnDefault(const char *value)
{
    size_t len;
    if (!value) { g_currentColDefault[0] = '\0'; return; }
    len = strlen(value);
    /* Strip surrounding quotes if present (e.g. 'active' → active) */
    if (len >= 2 && ((value[0] == '\'' && value[len-1] == '\'') ||
                     (value[0] == '"'  && value[len-1] == '"'))) {
        len -= 2;
        if (len >= sizeof(g_currentColDefault))
            len = sizeof(g_currentColDefault) - 1;
        memcpy(g_currentColDefault, value + 1, len);
        g_currentColDefault[len] = '\0';
    } else {
        strncpy(g_currentColDefault, value, sizeof(g_currentColDefault) - 1);
        g_currentColDefault[sizeof(g_currentColDefault) - 1] = '\0';
    }
}

int ReadDefaults(const char *tblName, char defaults[][256], int maxCols)
{
    char metaFile[SAFE_PATH_MAX], line[4096];
    int count = 0;
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return 0;

    /* Skip lines 1-6 */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    /* Line 7: DEFAULT values */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }

    fclose(fp);
    line[strcspn(line, "\n")] = '\0';
    if (line[0] == '\0') return 0;

    /* Parse semicolon-separated defaults */
    {
        char *tok = strtok(line, ";");
        while (tok && count < maxCols) {
            strncpy(defaults[count], tok, 255);
            defaults[count][255] = '\0';
            count++;
            tok = strtok(NULL, ";");
        }
    }

    return count;
}

void SetColumnAutoIncrement(int start, int step)
{
    g_currentColAutoIncrement = 1;
    g_autoIncStart = (start > 0) ? start : 1;
    g_autoIncStep  = (step  > 0) ? step  : 1;
}

int ReadAutoIncrement(const char *tblName, int *colIndex, int *counter, int *step)
{
    char metaFile[SAFE_PATH_MAX], line[256];
    FILE *fp;

    *colIndex = -1;
    *counter = 0;
    *step = 1;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return -1;

    /* Skip lines 1-7 */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    /* Line 8: auto-increment (col_index:counter[:step]) */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }

    fclose(fp);
    line[strcspn(line, "\n")] = '\0';

    /* Parse "col_index:counter" or "col_index:counter:step" */
    {
        char *c1 = strchr(line, ':');
        if (c1) {
            *c1 = '\0';
            *colIndex = atoi(line);
            char *c2 = strchr(c1 + 1, ':');
            if (c2) {
                *c2 = '\0';
                *counter = atoi(c1 + 1);
                int s = atoi(c2 + 1);
                *step = (s > 0) ? s : 1;
            } else {
                *counter = atoi(c1 + 1);
                /* Old format without step — default to 1 */
                *step = 1;
            }
        } else {
            *colIndex = atoi(line);
        }
    }

    return 0;
}

int WriteAutoIncrement(const char *tblName, int colIndex, int counter, int step)
{
    char metaFile[SAFE_PATH_MAX];
    char lines[8][4096];
    FILE *fp;
    int i;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);

    /* Read all 8 lines */
    for (i = 0; i < 8; i++) lines[i][0] = '\0';
    fp = fopen(metaFile, "r");
    if (!fp) return -1;
    for (i = 0; i < 8; i++) {
        if (!fgets(lines[i], sizeof(lines[i]), fp)) break;
        lines[i][strcspn(lines[i], "\n")] = '\0';
    }
    fclose(fp);

    /* Rewrite with updated line 8, preserving step */
    fp = fopen(metaFile, "w");
    if (!fp) return -1;
    for (i = 0; i < 7; i++)
        fprintf(fp, "%s\n", lines[i]);
    fprintf(fp, "%d:%d:%d\n", colIndex, counter, step);
    fclose(fp);

    return 0;
}

int ReadPrimaryKey(const char *tblName)
{
    char metaFile[SAFE_PATH_MAX], line[256];
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return -1;

    /* Skip lines 1-3 */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }
    /* Line 4: primary key indices (comma-separated or single int) */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return -1; }

    fclose(fp);
    line[strcspn(line, "\n")] = '\0';
    /* For backward compat, return first PK index */
    return atoi(line);
}

void AddPrimaryKeyColumn(const char *colName)
{
    if (g_pkColumnCount < 16) {
        strncpy(g_pkColumnNames[g_pkColumnCount], colName, 127);
        g_pkColumnNames[g_pkColumnCount][127] = '\0';
        g_pkColumnCount++;
    }
}

int ReadPrimaryKeys(const char *tblName, int *indices, int maxCols)
{
    char metaFile[SAFE_PATH_MAX], line[256];
    char *tok;
    int count = 0;
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return 0;

    /* Skip lines 1-3 */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    /* Line 4: primary key indices (comma-separated) */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }

    fclose(fp);
    line[strcspn(line, "\n")] = '\0';
    if (line[0] == '\0') return 0;

    tok = strtok(line, ",");
    while (tok && count < maxCols) {
        indices[count++] = atoi(tok);
        tok = strtok(NULL, ",");
    }
    return count;
}

int ReadNullFlags(const char *tblName, int *flags, int maxCols)
{
    char metaFile[SAFE_PATH_MAX], line[1024];
    char *tok;
    int count = 0;
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
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
