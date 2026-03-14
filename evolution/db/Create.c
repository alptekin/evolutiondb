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
    return ReadCheckConstraintsWithNames(tblName, constraints, NULL, maxConstraints);
}

int ReadCheckConstraintsWithNames(const char *tblName, char constraints[][1024],
                                   char names[][128], int maxConstraints)
{
    TableDesc td;
    if (tapi_resolve(tblName, &td, NULL, NULL) < 0)
        return 0;

    ConstraintDesc descs[32];
    int total = cat_list_constraints(td.table_id, descs, 32);
    if (total <= 0) return 0;

    int count = 0;
    for (int i = 0; i < total && count < maxConstraints; i++) {
        if (descs[i].constraint_type == 'C' && descs[i].is_enabled) {
            strncpy(constraints[count], descs[i].definition, 1023);
            constraints[count][1023] = '\0';
            if (names) {
                strncpy(names[count], descs[i].constraint_name, 127);
                names[count][127] = '\0';
            }
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

void SetTableAutoIncrement(int startVal)
{
    if (startVal > 0)
        g_autoIncStart = startVal;
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
 *  Table-level UNIQUE parser helpers
 * ---------------------------------------------------------------- */

void AddUniqueColumn(const char *colName)
{
    if (!colName) return;
    if (g_uniqueCurCols[0] != '\0')
        strcat(g_uniqueCurCols, ",");
    strcat(g_uniqueCurCols, colName);
}

void AddUniqueComplete(void)
{
    if (g_uniqueCount >= 8) return;

    strncpy(g_uniqueLocalCols[g_uniqueCount], g_uniqueCurCols, 255);
    g_uniqueLocalCols[g_uniqueCount][255] = '\0';
    /* Copy pending constraint name if set */
    strncpy(g_uniqueNames[g_uniqueCount], g_pendingConstraintName, 127);
    g_uniqueNames[g_uniqueCount][127] = '\0';
    g_pendingConstraintName[0] = '\0';

    g_uniqueCount++;
    g_uniqueCurCols[0] = '\0';
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
    /* Copy pending constraint name if set */
    strncpy(g_fkNames[g_fkCount], g_pendingConstraintName, 127);
    g_fkNames[g_fkCount][127] = '\0';
    g_pendingConstraintName[0] = '\0';
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

void SetForeignKeyMatchType(int matchType)
{
    g_fkMatchType[g_fkCount] = matchType;
}

void SetForeignKeyDeferrable(int mode)
{
    g_fkDeferrable[g_fkCount] = mode;
}

void AddForeignKeyRefTableSchema(const char *schemaName, const char *tableName)
{
    if (!tableName || !schemaName || g_fkCount >= 8) return;

    strncpy(g_fkLocalCols[g_fkCount], g_fkCurLocalCols, 255);
    g_fkLocalCols[g_fkCount][255] = '\0';
    strncpy(g_fkRefTable[g_fkCount], tableName, 127);
    g_fkRefTable[g_fkCount][127] = '\0';
    strncpy(g_fkRefCols[g_fkCount], g_fkCurRefCols, 255);
    g_fkRefCols[g_fkCount][255] = '\0';
    strncpy(g_fkRefSchema[g_fkCount], schemaName, 127);
    g_fkRefSchema[g_fkCount][127] = '\0';
    /* Copy pending constraint name if set */
    strncpy(g_fkNames[g_fkCount], g_pendingConstraintName, 127);
    g_fkNames[g_fkCount][127] = '\0';
    g_pendingConstraintName[0] = '\0';

    g_fkCount++;

    g_fkCurLocalCols[0] = '\0';
    g_fkCurRefCols[0] = '\0';
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
                /* Auto-generate name if not specified */
                char cname[128];
                if (g_checkNames[ci][0] != '\0') {
                    strncpy(cname, g_checkNames[ci], sizeof(cname) - 1);
                } else {
                    snprintf(cname, sizeof(cname), "%s_check_%d", tableName, ci + 1);
                }
                cat_add_constraint(td.table_id, 'C', cname,
                                   g_checkSerialized[ci], 0, "");
            }
        }
    }

    /* Store FOREIGN KEY constraints in catalog */
    if (g_fkCount > 0) {
        TableDesc td;
        if (cat_find_table(schDesc.schema_id, tableName, &td) == 0) {
            for (int fi = 0; fi < g_fkCount; fi++) {
                /* Resolve referenced table (cross-schema if specified) */
                TableDesc refTd;
                char refPath[1024];
                if (g_fkRefSchema[fi][0] != '\0') {
                    snprintf(refPath, sizeof(refPath), "root/%s/%s/%s",
                             g_currentDatabase, g_fkRefSchema[fi], g_fkRefTable[fi]);
                } else {
                    db_table_path(g_fkRefTable[fi], refPath, sizeof(refPath));
                }
                if (tapi_resolve(refPath, &refTd, NULL, NULL) < 0) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "referenced table \"%s\" does not exist",
                             g_fkRefTable[fi]);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE("42P01");
                    TruncateCreate();
                    return -1;
                }

                /* Build definition: "local_cols|on_delete|on_update|match_type|deferrable" */
                char definition[1024];
                snprintf(definition, sizeof(definition), "%s|%d|%d|%d|%d",
                         g_fkLocalCols[fi],
                         g_fkOnDelete[fi],
                         g_fkOnUpdate[fi],
                         g_fkMatchType[fi],
                         g_fkDeferrable[fi]);

                /* Auto-generate name if not specified */
                char cname[128];
                if (g_fkNames[fi][0] != '\0') {
                    strncpy(cname, g_fkNames[fi], sizeof(cname) - 1);
                } else {
                    snprintf(cname, sizeof(cname), "%s_%s_fkey",
                             tableName, g_fkLocalCols[fi]);
                }
                cat_add_constraint(td.table_id, 'F', cname, definition,
                                   refTd.table_id, g_fkRefCols[fi]);
            }
        }
    }

    /* Store table-level UNIQUE constraints in catalog */
    if (g_uniqueCount > 0) {
        TableDesc td;
        if (cat_find_table(schDesc.schema_id, tableName, &td) == 0) {
            for (int ui = 0; ui < g_uniqueCount; ui++) {
                /* Auto-generate name if not specified */
                char cname[128];
                if (g_uniqueNames[ui][0] != '\0') {
                    strncpy(cname, g_uniqueNames[ui], sizeof(cname) - 1);
                } else {
                    snprintf(cname, sizeof(cname), "%s_%s_key",
                             tableName, g_uniqueLocalCols[ui]);
                }
                cat_add_constraint(td.table_id, 'U', cname,
                                   g_uniqueLocalCols[ui], 0, "");
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
    memset(g_fkMatchType, 0, sizeof(g_fkMatchType));
    memset(g_fkDeferrable, 0, sizeof(g_fkDeferrable));
    memset(g_fkRefSchema, 0, sizeof(g_fkRefSchema));
    memset(g_fkNames, 0, sizeof(g_fkNames));
    g_fkCurLocalCols[0] = '\0';
    g_fkCurRefCols[0] = '\0';

    /* Reset UNIQUE state */
    g_uniqueCount = 0;
    memset(g_uniqueLocalCols, 0, sizeof(g_uniqueLocalCols));
    memset(g_uniqueNames, 0, sizeof(g_uniqueNames));
    g_uniqueCurCols[0] = '\0';
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

/* ----------------------------------------------------------------
 *  ALTER TABLE — ADD / DROP CONSTRAINT
 * ---------------------------------------------------------------- */

static int resolve_table_for_alter(const char *tableName, TableDesc *td)
{
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));
    if (tapi_resolve(tblPath, td, NULL, NULL) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table \"%s\" does not exist", tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }
    return 0;
}

int AlterTableAddCheckConstraint(const char *tableName, const char *constraintName,
                                  ExprNode *expr)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));
    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table \"%s\" does not exist", tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Check for duplicate constraint name */
    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &existing) == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" already exists", constraintName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    /* Validate existing rows against the new CHECK constraint */
    {
        char colNames[64][128];
        for (int c = 0; c < ncols && c < 64; c++)
            strncpy(colNames[c], cols[c].col_name, 127);

        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            int rowNum = 0;
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                rowNum++;
                /* Parse record into column values */
                char colValues[64][256];
                memset(colValues, 0, sizeof(colValues));
                char recCopy[RECORD_BUF_SIZE];
                strncpy(recCopy, scanRec, sizeof(recCopy) - 1);
                char *field = strtok(recCopy, ";");
                int idx = 0;
                while (field && idx < 64) {
                    strncpy(colValues[idx], field, 255);
                    idx++;
                    field = strtok(NULL, ";");
                }

                char result[512];
                int ok = expr_evaluate(expr,
                                       (const char (*)[128])colNames,
                                       (const char (*)[256])colValues,
                                       ncols, result, sizeof(result));
                int pass = 0;
                if (ok) {
                    if (strcmp(result, "t") == 0 || strcasecmp(result, "true") == 0 ||
                        strcmp(result, "1") == 0)
                        pass = 1;
                    else {
                        double v = strtod(result, NULL);
                        if (v != 0.0) pass = 1;
                    }
                }
                if (!pass) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "check constraint \"%s\" is violated by existing row %d",
                             constraintName, rowNum);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_CHECK_VIOLATION);
                    return -1;
                }
            }
        }
    }

    /* Serialize the CHECK expression */
    char serialized[1024];
    expr_serialize(expr, serialized, sizeof(serialized));

    cat_add_constraint(td.table_id, 'C', constraintName, serialized, 0, "");
    printf("command(s) completed successfully!..\n");
    return 0;
}

int AlterTableAddUniqueConstraint(const char *tableName, const char *constraintName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));
    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table \"%s\" does not exist", tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Check for duplicate constraint name */
    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &existing) == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" already exists", constraintName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    /* Resolve column indices for the UNIQUE columns */
    char colListBuf[256];
    strncpy(colListBuf, g_uniqueCurCols, sizeof(colListBuf) - 1);
    colListBuf[sizeof(colListBuf) - 1] = '\0';
    int uqColIndices[16];
    int numUqCols = 0;
    {
        char *saveptr = NULL;
        char *colName = strtok_r(colListBuf, ",", &saveptr);
        while (colName && numUqCols < 16) {
            for (int c = 0; c < ncols; c++) {
                if (strcasecmp(cols[c].col_name, colName) == 0) {
                    uqColIndices[numUqCols++] = c;
                    break;
                }
            }
            colName = strtok_r(NULL, ",", &saveptr);
        }
    }

    /* Validate existing rows for uniqueness using simple O(n^2) scan */
    {
        /* Collect all values */
        char (*allValues)[1024] = NULL;
        int rowCount = 0, rowCap = 64;
        allValues = malloc(rowCap * sizeof(*allValues));
        if (!allValues) { g_uniqueCurCols[0] = '\0'; return -1; }

        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                if (rowCount >= rowCap) {
                    rowCap *= 2;
                    allValues = realloc(allValues, rowCap * sizeof(*allValues));
                    if (!allValues) { g_uniqueCurCols[0] = '\0'; return -1; }
                }
                /* Build composite unique value */
                char composite[1024] = "";
                char recCopy[RECORD_BUF_SIZE];
                strncpy(recCopy, scanRec, sizeof(recCopy) - 1);
                char *fields[64];
                int nf = 0;
                char *f = strtok(recCopy, ";");
                while (f && nf < 64) { fields[nf++] = f; f = strtok(NULL, ";"); }

                for (int u = 0; u < numUqCols; u++) {
                    if (u > 0) strcat(composite, "|");
                    if (uqColIndices[u] < nf)
                        strcat(composite, fields[uqColIndices[u]]);
                }
                strncpy(allValues[rowCount], composite, 1023);
                allValues[rowCount][1023] = '\0';
                rowCount++;
            }
        }

        /* Check for duplicates */
        for (int i = 0; i < rowCount; i++) {
            for (int j = i + 1; j < rowCount; j++) {
                if (strcmp(allValues[i], allValues[j]) == 0) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "could not create unique constraint \"%s\": "
                             "duplicate key value \"%s\"",
                             constraintName, allValues[i]);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                    free(allValues);
                    g_uniqueCurCols[0] = '\0';
                    return -1;
                }
            }
        }
        free(allValues);
    }

    cat_add_constraint(td.table_id, 'U', constraintName, g_uniqueCurCols, 0, "");
    g_uniqueCurCols[0] = '\0';
    printf("command(s) completed successfully!..\n");
    return 0;
}

int AlterTableAddForeignKeyConstraint(const char *tableName, const char *refTableName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));
    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table \"%s\" does not exist", tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Use constraint name from g_pendingConstraintName */
    const char *cname = g_pendingConstraintName;

    /* Check for duplicate constraint name */
    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, cname, &existing) == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" already exists", cname);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    /* Resolve referenced table */
    TableDesc refTd;
    char refPath[1024];
    db_table_path(refTableName, refPath, sizeof(refPath));
    if (tapi_resolve(refPath, &refTd, NULL, NULL) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "referenced table \"%s\" does not exist", refTableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Validate existing rows: each FK column value must exist in referenced table */
    {
        /* Resolve FK column indices */
        int fkColIndices[16];
        int numFkCols = 0;
        char colListBuf[256];
        strncpy(colListBuf, g_fkCurLocalCols, sizeof(colListBuf) - 1);
        colListBuf[sizeof(colListBuf) - 1] = '\0';
        char *saveptr = NULL;
        char *colName = strtok_r(colListBuf, ",", &saveptr);
        while (colName && numFkCols < 16) {
            for (int c = 0; c < ncols; c++) {
                if (strcasecmp(cols[c].col_name, colName) == 0) {
                    fkColIndices[numFkCols++] = c;
                    break;
                }
            }
            colName = strtok_r(NULL, ",", &saveptr);
        }

        BTree2 refPkTree = tapi_pk_tree(&refTd);
        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            int rowNum = 0;
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                rowNum++;
                char recCopy[RECORD_BUF_SIZE];
                strncpy(recCopy, scanRec, sizeof(recCopy) - 1);
                char *fields[64];
                int nf = 0;
                char *f = strtok(recCopy, ";");
                while (f && nf < 64) { fields[nf++] = f; f = strtok(NULL, ";"); }

                /* Build composite FK value */
                char fkValue[1024] = "";
                int allNull = 1;
                for (int u = 0; u < numFkCols; u++) {
                    if (u > 0) strcat(fkValue, "|");
                    if (fkColIndices[u] < nf) {
                        strcat(fkValue, fields[fkColIndices[u]]);
                        if (strcmp(fields[fkColIndices[u]], "\x01NULL\x01") != 0)
                            allNull = 0;
                    }
                }
                if (allNull) continue; /* NULL FK values are allowed */

                RowID rid;
                if (bt2_search(&refPkTree, fkValue, &rid) < 0) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "insert or update on table \"%s\" violates foreign key constraint \"%s\" "
                             "(value \"%s\" not found in referenced table \"%s\")",
                             tableName, cname, fkValue, refTd.table_name);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
                    /* Reset FK state */
                    g_fkCount = 0;
                    g_fkCurLocalCols[0] = '\0';
                    g_fkCurRefCols[0] = '\0';
                    g_pendingConstraintName[0] = '\0';
                    return -1;
                }
            }
        }
    }

    /* Build definition from accumulated FK state */
    char definition[1024];
    snprintf(definition, sizeof(definition), "%s|%d|%d",
             g_fkCurLocalCols, g_fkOnDelete[0], g_fkOnUpdate[0]);

    cat_add_constraint(td.table_id, 'F', cname, definition,
                       refTd.table_id, g_fkCurRefCols);

    /* Reset FK state */
    g_fkCount = 0;
    g_fkCurLocalCols[0] = '\0';
    g_fkCurRefCols[0] = '\0';
    memset(g_fkOnDelete, 0, sizeof(g_fkOnDelete));
    memset(g_fkOnUpdate, 0, sizeof(g_fkOnUpdate));
    g_pendingConstraintName[0] = '\0';

    printf("command(s) completed successfully!..\n");
    return 0;
}

int AlterTableDropConstraint(const char *tableName, const char *constraintName)
{
    TableDesc td;
    if (resolve_table_for_alter(tableName, &td) < 0) return -1;

    ConstraintDesc cd;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &cd) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 constraintName, tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    cat_drop_constraint(td.table_id, cd.ordinal);
    printf("command(s) completed successfully!..\n");
    return 0;
}

/* ---- Feature 1: RENAME CONSTRAINT ---- */

int AlterTableRenameConstraint(const char *tableName, const char *oldName, const char *newName)
{
    TableDesc td;
    if (resolve_table_for_alter(tableName, &td) < 0) return -1;

    ConstraintDesc cd;
    if (cat_find_constraint_by_name(td.table_id, oldName, &cd) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 oldName, tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    /* Check new name not already in use */
    ConstraintDesc dup;
    if (cat_find_constraint_by_name(td.table_id, newName, &dup) == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" already exists", newName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    strncpy(cd.constraint_name, newName, CAT_MAX_NAME_LEN - 1);
    cd.constraint_name[CAT_MAX_NAME_LEN - 1] = '\0';
    cat_update_constraint(td.table_id, cd.ordinal, &cd);
    printf("command(s) completed successfully!..\n");
    return 0;
}

/* ---- Feature 2: ON DELETE/UPDATE SET DEFAULT (action=4) ----
 * Implementation is in Delete.c — see enforce_fk_on_delete */

/* ---- Feature 3: ENABLE / DISABLE CONSTRAINT ---- */

int AlterTableEnableConstraint(const char *tableName, const char *constraintName)
{
    TableDesc td;
    if (resolve_table_for_alter(tableName, &td) < 0) return -1;

    ConstraintDesc cd;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &cd) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 constraintName, tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    cd.is_enabled = 1;
    cat_update_constraint(td.table_id, cd.ordinal, &cd);
    printf("command(s) completed successfully!..\n");
    return 0;
}

int AlterTableDisableConstraint(const char *tableName, const char *constraintName)
{
    TableDesc td;
    if (resolve_table_for_alter(tableName, &td) < 0) return -1;

    ConstraintDesc cd;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &cd) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 constraintName, tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    cd.is_enabled = 0;
    cat_update_constraint(td.table_id, cd.ordinal, &cd);
    printf("command(s) completed successfully!..\n");
    return 0;
}

/* ---- Feature 4: NOT VALID + VALIDATE CONSTRAINT ---- */

int AlterTableAddCheckConstraintNotValid(const char *tableName, const char *constraintName,
                                          ExprNode *expr)
{
    TableDesc td;
    if (resolve_table_for_alter(tableName, &td) < 0) return -1;

    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &existing) == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" already exists", constraintName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    char serialized[1024];
    expr_serialize(expr, serialized, sizeof(serialized));

    /* NOT VALID: skip existing data validation, mark as not validated */
    cat_add_constraint_ex(td.table_id, 'C', constraintName, serialized,
                          0, "", 1, 0);
    printf("command(s) completed successfully!..\n");
    return 0;
}

int AlterTableAddForeignKeyConstraintNotValid(const char *tableName, const char *refTableName)
{
    TableDesc td;
    if (resolve_table_for_alter(tableName, &td) < 0) return -1;

    const char *cname = g_pendingConstraintName;

    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, cname, &existing) == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" already exists", cname);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    TableDesc refTd;
    char refPath[1024];
    db_table_path(refTableName, refPath, sizeof(refPath));
    if (tapi_resolve(refPath, &refTd, NULL, NULL) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "referenced table \"%s\" does not exist", refTableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    char definition[1024];
    snprintf(definition, sizeof(definition), "%s|%d|%d",
             g_fkCurLocalCols, g_fkOnDelete[0], g_fkOnUpdate[0]);

    /* NOT VALID: skip existing data validation */
    cat_add_constraint_ex(td.table_id, 'F', cname, definition,
                          refTd.table_id, g_fkCurRefCols, 1, 0);

    g_fkCount = 0;
    g_fkCurLocalCols[0] = '\0';
    g_fkCurRefCols[0] = '\0';
    memset(g_fkOnDelete, 0, sizeof(g_fkOnDelete));
    memset(g_fkOnUpdate, 0, sizeof(g_fkOnUpdate));
    g_pendingConstraintName[0] = '\0';

    printf("command(s) completed successfully!..\n");
    return 0;
}

int AlterTableValidateConstraint(const char *tableName, const char *constraintName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));
    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table \"%s\" does not exist", tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    ConstraintDesc cd;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &cd) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 constraintName, tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    if (cd.is_validated) {
        /* Already validated, nothing to do */
        printf("command(s) completed successfully!..\n");
        return 0;
    }

    if (cd.constraint_type == 'C') {
        /* Validate CHECK against all existing rows */
        ExprNode *expr = expr_deserialize(cd.definition);
        if (!expr) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "cannot deserialize check constraint \"%s\"", constraintName);
            g_gui_error = 1;
            return -1;
        }

        char colNames[64][128];
        for (int c = 0; c < ncols && c < 64; c++)
            strncpy(colNames[c], cols[c].col_name, 127);

        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            int rowNum = 0;
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                rowNum++;
                char colValues[64][256];
                memset(colValues, 0, sizeof(colValues));
                char recCopy[RECORD_BUF_SIZE];
                strncpy(recCopy, scanRec, sizeof(recCopy) - 1);
                char *field = strtok(recCopy, ";");
                int idx = 0;
                while (field && idx < 64) {
                    strncpy(colValues[idx], field, 255);
                    idx++;
                    field = strtok(NULL, ";");
                }
                char result[512];
                int ok = expr_evaluate(expr, (const char (*)[128])colNames,
                                       (const char (*)[256])colValues,
                                       ncols, result, sizeof(result));
                int pass = 0;
                if (ok) {
                    if (strcmp(result, "t") == 0 || strcasecmp(result, "true") == 0 ||
                        strcmp(result, "1") == 0)
                        pass = 1;
                    else {
                        double v = strtod(result, NULL);
                        if (v != 0.0) pass = 1;
                    }
                }
                if (!pass) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "check constraint \"%s\" is violated by existing row %d",
                             constraintName, rowNum);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_CHECK_VIOLATION);
                    return -1;
                }
            }
        }
    } else if (cd.constraint_type == 'F') {
        /* Validate FK against all existing rows */
        TableDesc refTd;
        if (cat_find_table_by_id(cd.ref_table_id, &refTd) < 0) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "referenced table not found for constraint \"%s\"", constraintName);
            g_gui_error = 1;
            return -1;
        }

        /* Parse local columns from definition */
        char localColsCsv[1024];
        strncpy(localColsCsv, cd.definition, sizeof(localColsCsv) - 1);
        char *pipe = strchr(localColsCsv, '|');
        if (pipe) *pipe = '\0';

        int fkColIndices[16];
        int numFkCols = 0;
        {
            char buf[256];
            strncpy(buf, localColsCsv, sizeof(buf) - 1);
            char *saveptr = NULL;
            char *colName = strtok_r(buf, ",", &saveptr);
            while (colName && numFkCols < 16) {
                for (int c = 0; c < ncols; c++) {
                    if (strcasecmp(cols[c].col_name, colName) == 0) {
                        fkColIndices[numFkCols++] = c;
                        break;
                    }
                }
                colName = strtok_r(NULL, ",", &saveptr);
            }
        }

        BTree2 refPkTree = tapi_pk_tree(&refTd);
        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                char recCopy[RECORD_BUF_SIZE];
                strncpy(recCopy, scanRec, sizeof(recCopy) - 1);
                char *fields[64];
                int nf = 0;
                char *f = strtok(recCopy, ";");
                while (f && nf < 64) { fields[nf++] = f; f = strtok(NULL, ";"); }

                char fkValue[1024] = "";
                int allNull = 1;
                for (int u = 0; u < numFkCols; u++) {
                    if (u > 0) strcat(fkValue, "|");
                    if (fkColIndices[u] < nf) {
                        strcat(fkValue, fields[fkColIndices[u]]);
                        if (strcmp(fields[fkColIndices[u]], "\x01NULL\x01") != 0)
                            allNull = 0;
                    }
                }
                if (allNull) continue;

                RowID rid;
                if (bt2_search(&refPkTree, fkValue, &rid) < 0) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "constraint \"%s\" is violated by existing data "
                             "(value \"%s\" not found in referenced table \"%s\")",
                             constraintName, fkValue, refTd.table_name);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
                    return -1;
                }
            }
        }
    }

    /* Mark as validated */
    cd.is_validated = 1;
    cat_update_constraint(td.table_id, cd.ordinal, &cd);
    printf("command(s) completed successfully!..\n");
    return 0;
}

/* ---- Feature 5: ALTER TABLE ADD PRIMARY KEY ---- */

int AlterTableAddPrimaryKey(const char *tableName, const char *constraintName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));
    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table \"%s\" does not exist", tableName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Check table doesn't already have a PK */
    for (int c = 0; c < ncols; c++) {
        if (cols[c].is_pk) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "table \"%s\" already has a primary key", tableName);
            g_gui_error = 1;
            EVOSQL_SET_SQLSTATE("42710");
            return -1;
        }
    }

    /* Resolve PK column indices from pkColumnNames accumulated by parser */
    int pkColIndices[16];
    int numPkCols = g_pkColumnCount;
    for (int p = 0; p < numPkCols; p++) {
        pkColIndices[p] = -1;
        for (int c = 0; c < ncols; c++) {
            if (strcasecmp(cols[c].col_name, g_pkColumnNames[p]) == 0) {
                pkColIndices[p] = c;
                break;
            }
        }
        if (pkColIndices[p] < 0) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "column \"%s\" does not exist", g_pkColumnNames[p]);
            g_gui_error = 1;
            EVOSQL_SET_SQLSTATE("42703");
            g_pkColumnCount = 0;
            return -1;
        }
    }

    /* Validate: PK columns must be NOT NULL and unique across all rows */
    {
        char (*allKeys)[1024] = NULL;
        int rowCount = 0, rowCap = 64;
        allKeys = malloc(rowCap * sizeof(*allKeys));
        if (!allKeys) { g_pkColumnCount = 0; return -1; }

        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            int rowNum = 0;
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                rowNum++;
                if (rowCount >= rowCap) {
                    rowCap *= 2;
                    allKeys = realloc(allKeys, rowCap * sizeof(*allKeys));
                }
                char recCopy[RECORD_BUF_SIZE];
                strncpy(recCopy, scanRec, sizeof(recCopy) - 1);
                char *fields[64];
                int nf = 0;
                char *f = strtok(recCopy, ";");
                while (f && nf < 64) { fields[nf++] = f; f = strtok(NULL, ";"); }

                char composite[1024] = "";
                for (int p = 0; p < numPkCols; p++) {
                    if (p > 0) strcat(composite, "|");
                    if (pkColIndices[p] < nf) {
                        if (strcmp(fields[pkColIndices[p]], "\x01NULL\x01") == 0) {
                            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                                     "column \"%s\" contains null values (row %d)",
                                     g_pkColumnNames[p], rowNum);
                            g_gui_error = 1;
                            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_NOT_NULL_VIOLATION);
                            free(allKeys);
                            g_pkColumnCount = 0;
                            return -1;
                        }
                        strcat(composite, fields[pkColIndices[p]]);
                    }
                }
                strncpy(allKeys[rowCount], composite, 1023);
                allKeys[rowCount][1023] = '\0';
                rowCount++;
            }
        }

        /* Check uniqueness */
        for (int i = 0; i < rowCount; i++) {
            for (int j = i + 1; j < rowCount; j++) {
                if (strcmp(allKeys[i], allKeys[j]) == 0) {
                    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                             "could not create primary key constraint: "
                             "duplicate key value \"%s\"", allKeys[i]);
                    g_gui_error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                    free(allKeys);
                    g_pkColumnCount = 0;
                    return -1;
                }
            }
        }
        free(allKeys);
    }

    /* Build PK indices definition string */
    char pkDef[256] = "";
    for (int p = 0; p < numPkCols; p++) {
        if (p > 0) strcat(pkDef, ",");
        strcat(pkDef, g_pkColumnNames[p]);
    }

    cat_add_constraint(td.table_id, 'P', constraintName, pkDef, 0, "");
    g_pkColumnCount = 0;
    printf("command(s) completed successfully!..\n");
    return 0;
}

/* ---- Feature 6: CREATE DOMAIN ---- */

int CreateDomainProcess(const char *name, int typeVal, ExprNode *checkExpr,
                        int notNull, int hasCheck)
{
    /* Store domain in catalog as a special constraint-like entry.
     * We use the constraints B+ tree with table_id=0 (system namespace)
     * and constraint_type='D' for domain. */
    char definition[1024];
    char checkSerialized[1024] = "";

    if (hasCheck && checkExpr) {
        expr_serialize(checkExpr, checkSerialized, sizeof(checkSerialized));
    }

    /* Pack: "type_val|not_null|check_serialized" */
    snprintf(definition, sizeof(definition), "%d|%d|%s",
             typeVal, notNull, checkSerialized);

    /* Check if domain already exists — search with table_id=0 */
    ConstraintDesc existing;
    if (cat_find_constraint_by_name(0, name, &existing) == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "domain \"%s\" already exists", name);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    cat_add_constraint(0, 'D', name, definition, 0, "");
    printf("command(s) completed successfully!..\n");
    return 0;
}
