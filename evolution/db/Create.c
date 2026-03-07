#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "apue.h"
#include "apue_db.h"
#include "database.h"
#include "expression.h"

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
    char metaFile[SAFE_PATH_MAX];
    char lines[9][4096];
    FILE *fp;
    int i, numLines = 0;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);

    /* Read all lines from .meta */
    for (i = 0; i < 9; i++) lines[i][0] = '\0';
    fp = fopen(metaFile, "r");
    if (fp) {
        for (i = 0; i < 9; i++) {
            if (!fgets(lines[i], sizeof(lines[i]), fp)) break;
            lines[i][strcspn(lines[i], "\n")] = '\0';
            numLines = i + 1;
        }
        fclose(fp);
    }

    /* Rewrite .meta with updated pad size (line 2) */
    fp = fopen(metaFile, "w");
    if (fp) {
        fprintf(fp, "%s\n%d\n", lines[0], padSize);
        for (i = 2; i < numLines; i++)
            fprintf(fp, "%s\n", lines[i]);
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

        /* Build CHECK constraints line (line 9): serialized exprs separated by \x04 */
        char checkLine[4096];
        checkLine[0] = '\0';
        if (g_checkCount > 0) {
            int ci;
            for (ci = 0; ci < g_checkCount; ci++) {
                if (ci > 0) strcat(checkLine, "\x04");
                strcat(checkLine, g_checkSerialized[ci]);
            }
        }

        snprintf(metaFile, sizeof(metaFile), "%s.meta", g_tblName);
        FILE *fp = fopen(metaFile, "w");
        if (fp) {
            /* Lines 1-8 as before, plus line 9: CHECK constraints */
            fprintf(fp, "%s\n%d\n%s\n%s\n%s\n%s\n%s\n%d:%d:%d\n%s\n",
                    g_columnDefs, padSize, g_columnTypeDefs, pkIndicesStr,
                    g_columnNullFlags, g_columnUniqueFlags, g_columnDefaults,
                    g_autoIncColIndex, g_autoIncStart - g_autoIncStep, g_autoIncStep,
                    checkLine);
            fclose(fp);
        }
    }

    /* Auto-create clustered index on PRIMARY KEY column */
    if (g_primaryKeyIndex >= 0 || g_pkColumnCount > 0) {
        /* Get PK column name */
        char pkColName[128] = "";
        if (g_pkColumnCount > 0) {
            /* Composite PK — index on first PK column */
            strncpy(pkColName, g_pkColumnNames[0], sizeof(pkColName) - 1);
        } else {
            /* Single PK — extract column name from g_columnDefs */
            char tmpDefs[1024];
            strncpy(tmpDefs, g_columnDefs, sizeof(tmpDefs) - 1);
            tmpDefs[sizeof(tmpDefs) - 1] = '\0';
            char *t = strtok(tmpDefs, ";");
            int ci = 0;
            while (t) {
                if (ci == g_primaryKeyIndex) {
                    strncpy(pkColName, t, sizeof(pkColName) - 1);
                    break;
                }
                ci++;
                t = strtok(NULL, ";");
            }
        }
        if (pkColName[0])
            CreateClusteredIndex(g_tblName, pkColName);
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
    char lines[9][4096];
    FILE *fp;
    int i, numLines = 0;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);

    /* Read all lines (up to 9) */
    for (i = 0; i < 9; i++) lines[i][0] = '\0';
    fp = fopen(metaFile, "r");
    if (!fp) return -1;
    for (i = 0; i < 9; i++) {
        if (!fgets(lines[i], sizeof(lines[i]), fp)) break;
        lines[i][strcspn(lines[i], "\n")] = '\0';
        numLines = i + 1;
    }
    fclose(fp);

    /* Rewrite with updated line 8, preserving line 9 (CHECK) */
    fp = fopen(metaFile, "w");
    if (!fp) return -1;
    for (i = 0; i < 7; i++)
        fprintf(fp, "%s\n", lines[i]);
    fprintf(fp, "%d:%d:%d\n", colIndex, counter, step);
    /* Preserve line 9 (CHECK constraints) if present */
    if (numLines >= 9)
        fprintf(fp, "%s\n", lines[8]);
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

int ReadCheckConstraints(const char *tblName, char constraints[][1024], int maxConstraints)
{
    char metaFile[SAFE_PATH_MAX], line[4096];
    int count = 0;
    FILE *fp;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tblName);
    fp = fopen(metaFile, "r");
    if (!fp) return 0;

    /* Skip lines 1-8 */
    int i;
    for (i = 0; i < 8; i++) {
        if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }
    }
    /* Line 9: CHECK constraints (separated by \x04) */
    if (!fgets(line, sizeof(line), fp)) { fclose(fp); return 0; }

    fclose(fp);
    line[strcspn(line, "\n")] = '\0';
    if (line[0] == '\0') return 0;

    /* Split by \x04 */
    {
        char *start = line;
        char *sep;
        while ((sep = strchr(start, '\x04')) != NULL && count < maxConstraints) {
            *sep = '\0';
            if (start[0] != '\0') {
                strncpy(constraints[count], start, 1023);
                constraints[count][1023] = '\0';
                count++;
            }
            start = sep + 1;
        }
        if (start[0] != '\0' && count < maxConstraints) {
            strncpy(constraints[count], start, 1023);
            constraints[count][1023] = '\0';
            count++;
        }
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
