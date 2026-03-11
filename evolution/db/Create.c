#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "expression.h"
#include "catalog_internal.h"
#include "table_api.h"

/* ----------------------------------------------------------------
 *  Metadata readers — now backed by system catalog
 *
 *  These functions accept a table name or full path
 *  (e.g. "root/evosql/default/employees") and resolve via catalog.
 * ---------------------------------------------------------------- */



int ReadColumnTypes(const char *tblName, int *types, int maxCols)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0)
        return 0;

    int count = ncols < maxCols ? ncols : maxCols;
    for (int i = 0; i < count; i++)
        types[i] = cols[i].type_code;

    return count;
}

int ReadNullFlags(const char *tblName, int *flags, int maxCols)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0)
        return 0;

    int count = ncols < maxCols ? ncols : maxCols;
    for (int i = 0; i < count; i++)
        flags[i] = cols[i].is_not_null;

    return count;
}

int ReadUniqueFlags(const char *tblName, int *flags, int maxCols)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0)
        return 0;

    int count = ncols < maxCols ? ncols : maxCols;
    for (int i = 0; i < count; i++)
        flags[i] = cols[i].is_unique;

    return count;
}

int ReadDefaults(const char *tblName, char defaults[][256], int maxCols)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0)
        return 0;

    int count = ncols < maxCols ? ncols : maxCols;
    for (int i = 0; i < count; i++) {
        strncpy(defaults[i], cols[i].default_val, 255);
        defaults[i][255] = '\0';
    }

    return count;
}

int ReadPrimaryKey(const char *tblName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0)
        return -1;

    for (int i = 0; i < ncols; i++) {
        if (cols[i].is_pk)
            return i;
    }
    return -1;
}

int ReadPrimaryKeys(const char *tblName, int *indices, int maxCols)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0)
        return 0;

    return tapi_get_pk_indices(cols, ncols, indices, maxCols);
}



int ReadCheckConstraints(const char *tblName, char constraints[][1024], int maxConstraints)
{
    TableDesc td;
    if (tapi_resolve(tblName, &td, NULL, NULL) < 0)
        return 0;

    ConstraintDesc descs[32];
    int total = cat_list_constraints(td.table_id, descs, 32);
    if (total <= 0) return 0;

    int count = 0;
    for (int i = 0; i < total && count < maxConstraints; i++) {
        if (descs[i].constraint_type == 'C') {
            strncpy(constraints[count], descs[i].definition, 1023);
            constraints[count][1023] = '\0';
            count++;
        }
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Type validation (unchanged — operates on values, not storage)
 * ---------------------------------------------------------------- */

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

    case 18: /* UUID */
        if (strlen(value) != 36 ||
            value[8] != '-' || value[13] != '-' ||
            value[18] != '-' || value[23] != '-') {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "invalid UUID format: '%s'", value);
            g_gui_error = 1;
            return -1;
        }
        for (int k = 0; k < 36; k++) {
            if (k == 8 || k == 13 || k == 18 || k == 23) continue;
            char ch = value[k];
            if (!((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F'))) {
                snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                         "invalid UUID: non-hex character at position %d", k);
                g_gui_error = 1;
                return -1;
            }
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

/* ----------------------------------------------------------------
 *  Column attribute setters (unchanged — parser interface)
 * ---------------------------------------------------------------- */

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

void SetColumnDefault(const char *value)
{
    size_t len;
    if (!value) { g_currentColDefault[0] = '\0'; return; }
    len = strlen(value);
    /* Strip surrounding quotes if present (e.g. 'active' -> active) */
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

void SetColumnAutoIncrement(int start, int step)
{
    g_currentColAutoIncrement = 1;
    g_autoIncStart = (start > 0) ? start : 1;
    g_autoIncStep  = (step  > 0) ? step  : 1;
}

void AddPrimaryKeyColumn(const char *colName)
{
    if (g_pkColumnCount < 16) {
        strncpy(g_pkColumnNames[g_pkColumnCount], colName, 127);
        g_pkColumnNames[g_pkColumnCount][127] = '\0';
        g_pkColumnCount++;
    }
}

/* ----------------------------------------------------------------
 *  FOREIGN KEY parser helpers
 * ---------------------------------------------------------------- */

void AddForeignKeyColumn(const char *colName)
{
    if (!colName) return;
    if (g_fkCurLocalCols[0] != '\0')
        strcat(g_fkCurLocalCols, ",");
    strcat(g_fkCurLocalCols, colName);
}

void AddForeignKeyRefColumn(const char *colName)
{
    if (!colName) return;
    if (g_fkCurRefCols[0] != '\0')
        strcat(g_fkCurRefCols, ",");
    strcat(g_fkCurRefCols, colName);
}

void AddForeignKeyRefTable(const char *tableName)
{
    if (!tableName || g_fkCount >= 8) return;

    strncpy(g_fkLocalCols[g_fkCount], g_fkCurLocalCols, 255);
    g_fkLocalCols[g_fkCount][255] = '\0';
    strncpy(g_fkRefTable[g_fkCount], tableName, 127);
    g_fkRefTable[g_fkCount][127] = '\0';
    strncpy(g_fkRefCols[g_fkCount], g_fkCurRefCols, 255);
    g_fkRefCols[g_fkCount][255] = '\0';
    /* on_delete/on_update already set by SetForeignKey* or default 0 */

    g_fkCount++;

    /* Reset current accumulators for next FK */
    g_fkCurLocalCols[0] = '\0';
    g_fkCurRefCols[0] = '\0';
}

void SetForeignKeyOnDelete(int action)
{
    /* Set on the current FK being built (g_fkCount is the index) */
    g_fkOnDelete[g_fkCount] = action;
}

void SetForeignKeyOnUpdate(int action)
{
    g_fkOnUpdate[g_fkCount] = action;
}

/* ----------------------------------------------------------------
 *  CREATE TABLE — now uses system catalog + unified storage
 * ---------------------------------------------------------------- */

int CreateTableProcess(void)
{
    int padSize;

    /* Count columns from g_columnDefs (format: "col1;col2;col3") */
    int numCols = 0;
    char colNameArr[64][128];
    {
        char tmp[1024];
        char *tok;
        if (g_columnDefs[0] != '\0') {
            strcpy(tmp, g_columnDefs);
            tok = strtok(tmp, ";");
            while (tok && numCols < 64) {
                strncpy(colNameArr[numCols], tok, 127);
                colNameArr[numCols][127] = '\0';
                numCols++;
                tok = strtok(NULL, ";");
            }
        }
    }

    if (numCols == 0) {
        printf("Error: no columns defined\n");
        TruncateCreate();
        return -1;
    }

    /* Compute pad size */
    padSize = g_totalColumnSize + numCols;
    if (padSize < RECORD_PAD_SIZE)
        padSize = RECORD_PAD_SIZE;

    /* Parse type encodings from g_columnTypeDefs */
    int typeVals[64];
    int numTypes = 0;
    {
        char tmp[1024];
        char *tok;
        strcpy(tmp, g_columnTypeDefs);
        tok = strtok(tmp, ";");
        while (tok && numTypes < 64) {
            typeVals[numTypes++] = atoi(tok);
            tok = strtok(NULL, ";");
        }
    }

    /* Parse NOT NULL flags */
    int nullFlags[64];
    int numNulls = 0;
    {
        char tmp[1024];
        char *tok;
        strcpy(tmp, g_columnNullFlags);
        tok = strtok(tmp, ";");
        while (tok && numNulls < 64) {
            nullFlags[numNulls++] = atoi(tok);
            tok = strtok(NULL, ";");
        }
    }

    /* Parse UNIQUE flags */
    int uniqueFlags[64];
    int numUniques = 0;
    {
        char tmp[1024];
        char *tok;
        strcpy(tmp, g_columnUniqueFlags);
        tok = strtok(tmp, ";");
        while (tok && numUniques < 64) {
            uniqueFlags[numUniques++] = atoi(tok);
            tok = strtok(NULL, ";");
        }
    }

    /* Parse DEFAULT values */
    char defaultVals[64][256];
    int numDefaults = 0;
    {
        char tmp[4096];
        char *tok;
        strcpy(tmp, g_columnDefaults);
        tok = strtok(tmp, ";");
        while (tok && numDefaults < 64) {
            strncpy(defaultVals[numDefaults], tok, 255);
            defaultVals[numDefaults][255] = '\0';
            numDefaults++;
            tok = strtok(NULL, ";");
        }
    }

    /* Resolve PK column indices */
    int pkIndices[16];
    int pkCount = 0;
    if (g_pkColumnCount > 0) {
        /* Table-level PRIMARY KEY (col1, col2, ...) */
        for (int p = 0; p < g_pkColumnCount; p++) {
            for (int j = 0; j < numCols; j++) {
                if (strcasecmp(g_pkColumnNames[p], colNameArr[j]) == 0) {
                    pkIndices[pkCount++] = j;
                    break;
                }
            }
        }
    } else if (g_primaryKeyIndex >= 0) {
        /* Single-column PK from column definition */
        pkIndices[0] = g_primaryKeyIndex;
        pkCount = 1;
    }

    /* Build ColumnDesc array for catalog */
    ColumnDesc cols[64];
    for (int i = 0; i < numCols; i++) {
        memset(&cols[i], 0, sizeof(ColumnDesc));
        strncpy(cols[i].col_name, colNameArr[i], CAT_MAX_NAME_LEN - 1);
        cols[i].type_code = (i < numTypes) ? typeVals[i] : 0;
        cols[i].is_not_null = (i < numNulls) ? nullFlags[i] : 0;
        cols[i].is_unique = (i < numUniques) ? uniqueFlags[i] : 0;
        cols[i].is_pk = 0;
        if (i < numDefaults) {
            strncpy(cols[i].default_val, defaultVals[i], CAT_MAX_DEFAULT_LEN - 1);
        } else {
            strcpy(cols[i].default_val, "\x01NONE\x01");
        }
    }

    /* Mark PK columns */
    for (int p = 0; p < pkCount; p++) {
        if (pkIndices[p] < numCols)
            cols[pkIndices[p]].is_pk = 1;
    }

    /* Resolve current schema */
    DatabaseDesc dbDesc;
    SchemaDesc schDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "database \"%s\" not found", g_currentDatabase);
        g_gui_error = 1;
        TruncateCreate();
        return -1;
    }
    if (cat_find_schema(dbDesc.db_id, g_currentSchema, &schDesc) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "schema \"%s\" not found", g_currentSchema);
        g_gui_error = 1;
        TruncateCreate();
        return -1;
    }

    /* Extract table name from g_tblName path */
    char tableName[CAT_MAX_NAME_LEN];
    tapi_basename(g_tblName, tableName, sizeof(tableName));

    /* Create table in catalog (also creates PK B+ tree internally) */
    int rc = cat_create_table(schDesc.schema_id, tableName,
                              cols, numCols, padSize,
                              g_autoIncColIndex,
                              g_autoIncStart - g_autoIncStep,
                              g_autoIncStep,
                              g_isTemporary);
    if (rc >= 0) {
        g_lastCreatedTableId = (uint32_t)rc;  /* save for temp table tracking */
    }
    if (rc < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table \"%s\" already exists", tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DUPLICATE_TABLE);
        TruncateCreate();
        return -1;
    }

    /* Store CHECK constraints in catalog */
    if (g_checkCount > 0) {
        TableDesc td;
        if (cat_find_table(schDesc.schema_id, tableName, &td) == 0) {
            for (int ci = 0; ci < g_checkCount; ci++) {
                cat_add_constraint(td.table_id, 'C',
                                   g_checkSerialized[ci], 0, "");
            }
        }
    }

    /* Store FOREIGN KEY constraints in catalog */
    if (g_fkCount > 0) {
        TableDesc td;
        if (cat_find_table(schDesc.schema_id, tableName, &td) == 0) {
            for (int fi = 0; fi < g_fkCount; fi++) {
                /* Resolve referenced table */
                TableDesc refTd;
                char refPath[1024];
                db_table_path(g_fkRefTable[fi], refPath, sizeof(refPath));
                if (tapi_resolve(refPath, &refTd, NULL, NULL) < 0) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "referenced table \"%s\" does not exist",
                             g_fkRefTable[fi]);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE("42P01");
                    TruncateCreate();
                    return -1;
                }

                /* Build definition: "local_cols|on_delete|on_update" */
                char definition[1024];
                snprintf(definition, sizeof(definition), "%s|%d|%d",
                         g_fkLocalCols[fi],
                         g_fkOnDelete[fi],
                         g_fkOnUpdate[fi]);

                cat_add_constraint(td.table_id, 'F', definition,
                                   refTd.table_id, g_fkRefCols[fi]);
            }
        }
    }

    printf("command(s) completed successfully!..\n");
    TruncateCreate();

    return 0;
}

/* ----------------------------------------------------------------
 *  Parser support functions (unchanged)
 * ---------------------------------------------------------------- */

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

    /* Reset FK state */
    g_fkCount = 0;
    memset(g_fkLocalCols, 0, sizeof(g_fkLocalCols));
    memset(g_fkRefTable, 0, sizeof(g_fkRefTable));
    memset(g_fkRefCols, 0, sizeof(g_fkRefCols));
    memset(g_fkOnDelete, 0, sizeof(g_fkOnDelete));
    memset(g_fkOnUpdate, 0, sizeof(g_fkOnUpdate));
    g_fkCurLocalCols[0] = '\0';
    g_fkCurRefCols[0] = '\0';
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

    /* Accumulate DEFAULT values */
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
