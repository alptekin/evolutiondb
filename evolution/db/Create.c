#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include "database.h"
#include "expression.h"   /* NULL_MARKER */
#include "catalog_internal.h"
#include "table_api.h"
#include "tuple_format.h"

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
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "expected integer value, got '%s'", value);
            g_err.error = 1;
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
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "expected numeric value, got '%s'", value);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE);
            return -1;
        }
        break;

    case 12: /* CHAR */
    case 13: /* VARCHAR */
        if (size > 0 && (int)strlen(value) > size) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "value '%.100s' exceeds %s(%d) length limit",
                     value, typeFamily == 12 ? "CHAR" : "VARCHAR", size);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_STRING_DATA_RIGHT_TRUNCATION);
            return -1;
        }
        break;

    case 18: /* UUID */
        if (strlen(value) != 36 ||
            value[8] != '-' || value[13] != '-' ||
            value[18] != '-' || value[23] != '-') {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "invalid UUID format: '%s'", value);
            g_err.error = 1;
            return -1;
        }
        for (int k = 0; k < 36; k++) {
            if (k == 8 || k == 13 || k == 18 || k == 23) continue;
            char ch = value[k];
            if (!((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F'))) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "invalid UUID: non-hex character at position %d", k);
                g_err.error = 1;
                return -1;
            }
        }
        break;

    case 22: /* BOOLEAN */
        if (strcmp(value, "true") != 0 && strcmp(value, "false") != 0 &&
            strcmp(value, "TRUE") != 0 && strcmp(value, "FALSE") != 0 &&
            strcmp(value, "0") != 0 && strcmp(value, "1") != 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "expected BOOLEAN (true/false/0/1), got '%s'", value);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE);
            return -1;
        }
        break;

    case 23: /* JSON */
        if (evo_json_validate(value) != 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "invalid JSON: '%.200s'", value);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DATA_EXCEPTION);
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
    g_create.currentColNotNull = 1;
}

void SetColumnPrimaryKey(void)
{
    g_create.currentColPrimaryKey = 1;
}

void SetColumnUnique(void)
{
    g_create.currentColUnique = 1;
}

void SetColumnDefault(const char *value)
{
    size_t len;
    if (!value) { g_create.currentColDefault[0] = '\0'; return; }
    len = strlen(value);
    /* Strip surrounding quotes if present (e.g. 'active' -> active) */
    if (len >= 2 && ((value[0] == '\'' && value[len-1] == '\'') ||
                     (value[0] == '"'  && value[len-1] == '"'))) {
        len -= 2;
        if (len >= sizeof(g_create.currentColDefault))
            len = sizeof(g_create.currentColDefault) - 1;
        memcpy(g_create.currentColDefault, value + 1, len);
        g_create.currentColDefault[len] = '\0';
    } else {
        strncpy(g_create.currentColDefault, value, sizeof(g_create.currentColDefault) - 1);
        g_create.currentColDefault[sizeof(g_create.currentColDefault) - 1] = '\0';
    }
}

void SetColumnAutoIncrement(int start, int step)
{
    g_create.currentColAutoIncrement = 1;
    g_create.autoIncStart = (start > 0) ? start : 1;
    g_create.autoIncStep  = (step  > 0) ? step  : 1;
}

void SetColumnGenerated(int mode, ExprNode *expr)
{
    g_create.currentColGeneratedMode = mode;
    if (expr)
        expr_serialize(expr, g_create.currentColGeneratedExpr, sizeof(g_create.currentColGeneratedExpr));
    else
        g_create.currentColGeneratedExpr[0] = '\0';
}

void SetTableAutoIncrement(int startVal)
{
    if (startVal > 0)
        g_create.autoIncStart = startVal;
}

void AddPrimaryKeyColumn(const char *colName)
{
    if (g_create.pkColumnCount < 16) {
        strncpy(g_create.pkColumnNames[g_create.pkColumnCount], colName, 127);
        g_create.pkColumnNames[g_create.pkColumnCount][127] = '\0';
        g_create.pkColumnCount++;
    }
}

/* ----------------------------------------------------------------
 *  Table-level UNIQUE parser helpers
 * ---------------------------------------------------------------- */

void AddUniqueColumn(const char *colName)
{
    if (!colName) return;
    if (g_constr.uniqueCurCols[0] != '\0')
        strcat(g_constr.uniqueCurCols, ",");
    strcat(g_constr.uniqueCurCols, colName);
}

void AddUniqueComplete(void)
{
    if (g_constr.uniqueCount >= 8) return;

    strncpy(g_constr.uniqueLocalCols[g_constr.uniqueCount], g_constr.uniqueCurCols, 255);
    g_constr.uniqueLocalCols[g_constr.uniqueCount][255] = '\0';
    /* Copy pending constraint name if set */
    strncpy(g_constr.uniqueNames[g_constr.uniqueCount], g_constr.pendingConstraintName, 127);
    g_constr.uniqueNames[g_constr.uniqueCount][127] = '\0';
    g_constr.pendingConstraintName[0] = '\0';

    g_constr.uniqueCount++;
    g_constr.uniqueCurCols[0] = '\0';
}

/* ----------------------------------------------------------------
 *  FOREIGN KEY parser helpers
 * ---------------------------------------------------------------- */

void AddForeignKeyColumn(const char *colName)
{
    if (!colName) return;
    if (g_constr.fkCurLocalCols[0] != '\0')
        strcat(g_constr.fkCurLocalCols, ",");
    strcat(g_constr.fkCurLocalCols, colName);
}

void AddForeignKeyRefColumn(const char *colName)
{
    if (!colName) return;
    if (g_constr.fkCurRefCols[0] != '\0')
        strcat(g_constr.fkCurRefCols, ",");
    strcat(g_constr.fkCurRefCols, colName);
}

void AddForeignKeyRefTable(const char *tableName)
{
    if (!tableName || g_constr.fkCount >= 8) return;

    strncpy(g_constr.fkLocalCols[g_constr.fkCount], g_constr.fkCurLocalCols, 255);
    g_constr.fkLocalCols[g_constr.fkCount][255] = '\0';
    strncpy(g_constr.fkRefTable[g_constr.fkCount], tableName, 127);
    g_constr.fkRefTable[g_constr.fkCount][127] = '\0';
    strncpy(g_constr.fkRefCols[g_constr.fkCount], g_constr.fkCurRefCols, 255);
    g_constr.fkRefCols[g_constr.fkCount][255] = '\0';
    /* Copy pending constraint name if set */
    strncpy(g_constr.fkNames[g_constr.fkCount], g_constr.pendingConstraintName, 127);
    g_constr.fkNames[g_constr.fkCount][127] = '\0';
    g_constr.pendingConstraintName[0] = '\0';
    /* on_delete/on_update already set by SetForeignKey* or default 0 */

    g_constr.fkCount++;

    /* Reset current accumulators for next FK */
    g_constr.fkCurLocalCols[0] = '\0';
    g_constr.fkCurRefCols[0] = '\0';
}

void SetForeignKeyOnDelete(int action)
{
    /* Set on the current FK being built (g_constr.fkCount is the index) */
    g_constr.fkOnDelete[g_constr.fkCount] = action;
}

void SetForeignKeyOnUpdate(int action)
{
    g_constr.fkOnUpdate[g_constr.fkCount] = action;
}

void SetForeignKeyMatchType(int matchType)
{
    g_constr.fkMatchType[g_constr.fkCount] = matchType;
}

void SetForeignKeyDeferrable(int mode)
{
    g_constr.fkDeferrable[g_constr.fkCount] = mode;
}

void AddForeignKeyRefTableSchema(const char *schemaName, const char *tableName)
{
    if (!tableName || !schemaName || g_constr.fkCount >= 8) return;

    strncpy(g_constr.fkLocalCols[g_constr.fkCount], g_constr.fkCurLocalCols, 255);
    g_constr.fkLocalCols[g_constr.fkCount][255] = '\0';
    strncpy(g_constr.fkRefTable[g_constr.fkCount], tableName, 127);
    g_constr.fkRefTable[g_constr.fkCount][127] = '\0';
    strncpy(g_constr.fkRefCols[g_constr.fkCount], g_constr.fkCurRefCols, 255);
    g_constr.fkRefCols[g_constr.fkCount][255] = '\0';
    strncpy(g_constr.fkRefSchema[g_constr.fkCount], schemaName, 127);
    g_constr.fkRefSchema[g_constr.fkCount][127] = '\0';
    /* Copy pending constraint name if set */
    strncpy(g_constr.fkNames[g_constr.fkCount], g_constr.pendingConstraintName, 127);
    g_constr.fkNames[g_constr.fkCount][127] = '\0';
    g_constr.pendingConstraintName[0] = '\0';

    g_constr.fkCount++;

    g_constr.fkCurLocalCols[0] = '\0';
    g_constr.fkCurRefCols[0] = '\0';
}

/* ----------------------------------------------------------------
 *  CREATE TABLE — now uses system catalog + unified storage
 * ---------------------------------------------------------------- */

int CreateTableProcess(void)
{
    int padSize;

    /* Count columns from g_create.columnDefs (format: "col1;col2;col3") */
    int numCols = 0;
    char colNameArr[CAT_MAX_COLUMNS][128];
    {
        char tmp[1024];
        char *tok;
        if (g_create.columnDefs[0] != '\0') {
            strcpy(tmp, g_create.columnDefs);
            tok = strtok(tmp, FIELD_SEP);
            while (tok && numCols < 64) {
                strncpy(colNameArr[numCols], tok, 127);
                colNameArr[numCols][127] = '\0';
                numCols++;
                tok = strtok(NULL, FIELD_SEP);
            }
        }
    }

    if (numCols == 0) {
        printf("Error: no columns defined\n");
        TruncateCreate();
        return -1;
    }

    /* Compute pad size */
    padSize = g_create.totalColumnSize + numCols;
    if (padSize < RECORD_PAD_SIZE)
        padSize = RECORD_PAD_SIZE;

    /* Parse type encodings from g_create.columnTypeDefs */
    int typeVals[CAT_MAX_COLUMNS];
    int numTypes = 0;
    {
        char tmp[1024];
        char *tok;
        strcpy(tmp, g_create.columnTypeDefs);
        tok = strtok(tmp, FIELD_SEP);
        while (tok && numTypes < 64) {
            typeVals[numTypes++] = atoi(tok);
            tok = strtok(NULL, FIELD_SEP);
        }
    }

    /* Parse NOT NULL flags */
    int nullFlags[CAT_MAX_COLUMNS];
    int numNulls = 0;
    {
        char tmp[1024];
        char *tok;
        strcpy(tmp, g_create.columnNullFlags);
        tok = strtok(tmp, FIELD_SEP);
        while (tok && numNulls < 64) {
            nullFlags[numNulls++] = atoi(tok);
            tok = strtok(NULL, FIELD_SEP);
        }
    }

    /* Parse UNIQUE flags */
    int uniqueFlags[CAT_MAX_COLUMNS];
    int numUniques = 0;
    {
        char tmp[1024];
        char *tok;
        strcpy(tmp, g_create.columnUniqueFlags);
        tok = strtok(tmp, FIELD_SEP);
        while (tok && numUniques < 64) {
            uniqueFlags[numUniques++] = atoi(tok);
            tok = strtok(NULL, FIELD_SEP);
        }
    }

    /* Parse DEFAULT values */
    char defaultVals[CAT_MAX_COLUMNS][256];
    int numDefaults = 0;
    {
        char tmp[4096];
        char *tok;
        strcpy(tmp, g_create.columnDefaults);
        tok = strtok(tmp, FIELD_SEP);
        while (tok && numDefaults < 64) {
            strncpy(defaultVals[numDefaults], tok, 255);
            defaultVals[numDefaults][255] = '\0';
            numDefaults++;
            tok = strtok(NULL, FIELD_SEP);
        }
    }

    /* Resolve PK column indices */
    int pkIndices[16];
    int pkCount = 0;
    if (g_create.pkColumnCount > 0) {
        /* Table-level PRIMARY KEY (col1, col2, ...) */
        for (int p = 0; p < g_create.pkColumnCount; p++) {
            for (int j = 0; j < numCols; j++) {
                if (strcasecmp(g_create.pkColumnNames[p], colNameArr[j]) == 0) {
                    pkIndices[pkCount++] = j;
                    break;
                }
            }
        }
    } else if (g_create.primaryKeyIndex >= 0) {
        /* Single-column PK from column definition */
        pkIndices[0] = g_create.primaryKeyIndex;
        pkCount = 1;
    }

    /* Build ColumnDesc array for catalog */
    ColumnDesc cols[CAT_MAX_COLUMNS];
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
        cols[i].generated_mode = (i < 64) ? g_create.columnGeneratedModes[i] : 0;
        if (i < 64 && g_create.columnGeneratedExprs[i][0]) {
            strncpy(cols[i].generated_expr, g_create.columnGeneratedExprs[i], 511);
            cols[i].generated_expr[511] = '\0';
        } else {
            cols[i].generated_expr[0] = '\0';
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "database \"%s\" not found", g_currentDatabase);
        g_err.error = 1;
        TruncateCreate();
        return -1;
    }
    if (cat_find_schema(dbDesc.db_id, g_currentSchema, &schDesc) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "schema \"%s\" not found", g_currentSchema);
        g_err.error = 1;
        TruncateCreate();
        return -1;
    }

    /* Extract table name from g_create.tblName path */
    char tableName[CAT_MAX_NAME_LEN];
    tapi_basename(g_create.tblName, tableName, sizeof(tableName));

    /* Create table in catalog (also creates PK B+ tree internally) */
    int rc = cat_create_table(schDesc.schema_id, tableName,
                              cols, numCols, padSize,
                              g_create.autoIncColIndex,
                              g_create.autoIncStart - g_create.autoIncStep,
                              g_create.autoIncStep,
                              g_create.isTemporary, g_create.onCommitDelete);
    if (rc >= 0) {
        g_create.lastCreatedTableId = (uint32_t)rc;  /* save for temp table tracking */

        /* Distributed: mark table as remote if ON NODE specified */
        extern __thread uint32_t g_dist_create_node_id;
        if (g_dist_create_node_id > 0) {
            uint32_t node_id = g_dist_create_node_id - 1;
            g_dist_create_node_id = 0;
            cat_update_owner_node((uint32_t)rc, tableName,
                                  schDesc.schema_id, node_id);
            /* Remote table: clear local PK tree and heap (data lives on remote node) */
            cat_update_pk_root((uint32_t)rc, tableName, schDesc.schema_id, 0);
            cat_update_heap_page((uint32_t)rc, tableName, schDesc.schema_id, 0);
        }
    }
    if (rc < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" already exists", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DUPLICATE_TABLE);
        TruncateCreate();
        return -1;
    }

    /* Store CHECK constraints in catalog */
    if (g_constr.checkCount > 0) {
        TableDesc td;
        if (cat_find_table(schDesc.schema_id, tableName, &td) == 0) {
            for (int ci = 0; ci < g_constr.checkCount; ci++) {
                /* Auto-generate name if not specified */
                char cname[128];
                if (g_constr.checkNames[ci][0] != '\0') {
                    strncpy(cname, g_constr.checkNames[ci], sizeof(cname) - 1);
                } else {
                    snprintf(cname, sizeof(cname), "%s_check_%d", tableName, ci + 1);
                }
                cat_add_constraint(td.table_id, 'C', cname,
                                   g_constr.checkSerialized[ci], 0, "");
            }
        }
    }

    /* Store FOREIGN KEY constraints in catalog */
    if (g_constr.fkCount > 0) {
        TableDesc td;
        if (cat_find_table(schDesc.schema_id, tableName, &td) == 0) {
            for (int fi = 0; fi < g_constr.fkCount; fi++) {
                /* Resolve referenced table (cross-schema if specified) */
                TableDesc refTd;
                char refPath[1024];
                if (g_constr.fkRefSchema[fi][0] != '\0') {
                    snprintf(refPath, sizeof(refPath), "root/%s/%s/%s",
                             g_currentDatabase, g_constr.fkRefSchema[fi], g_constr.fkRefTable[fi]);
                } else {
                    db_table_path(g_constr.fkRefTable[fi], refPath, sizeof(refPath));
                }
                if (tapi_resolve(refPath, &refTd, NULL, NULL) < 0) {
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "referenced table \"%s\" does not exist",
                             g_constr.fkRefTable[fi]);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE("42P01");
                    TruncateCreate();
                    return -1;
                }

                /* Build definition: "local_cols|on_delete|on_update|match_type|deferrable" */
                char definition[1024];
                snprintf(definition, sizeof(definition), "%s|%d|%d|%d|%d",
                         g_constr.fkLocalCols[fi],
                         g_constr.fkOnDelete[fi],
                         g_constr.fkOnUpdate[fi],
                         g_constr.fkMatchType[fi],
                         g_constr.fkDeferrable[fi]);

                /* Auto-generate name if not specified */
                char cname[128];
                if (g_constr.fkNames[fi][0] != '\0') {
                    strncpy(cname, g_constr.fkNames[fi], sizeof(cname) - 1);
                } else {
                    snprintf(cname, sizeof(cname), "%s_%s_fkey",
                             tableName, g_constr.fkLocalCols[fi]);
                }
                cat_add_constraint(td.table_id, 'F', cname, definition,
                                   refTd.table_id, g_constr.fkRefCols[fi]);
            }
        }
    }

    /* Store table-level UNIQUE constraints in catalog */
    if (g_constr.uniqueCount > 0) {
        TableDesc td;
        if (cat_find_table(schDesc.schema_id, tableName, &td) == 0) {
            for (int ui = 0; ui < g_constr.uniqueCount; ui++) {
                /* Auto-generate name if not specified */
                char cname[128];
                if (g_constr.uniqueNames[ui][0] != '\0') {
                    strncpy(cname, g_constr.uniqueNames[ui], sizeof(cname) - 1);
                } else {
                    snprintf(cname, sizeof(cname), "%s_%s_key",
                             tableName, g_constr.uniqueLocalCols[ui]);
                }
                cat_add_constraint(td.table_id, 'U', cname,
                                   g_constr.uniqueLocalCols[ui], 0, "");
            }
        }
    }

    /* Store shard metadata if SHARD BY specified */
    if (g_create.shardType != 0) {
        TableDesc td;
        if (cat_find_table(schDesc.schema_id, tableName, &td) == 0) {
            /* Validate shard key column exists */
            ColumnDesc shardCols[CAT_MAX_COLUMNS];
            int snc = cat_find_columns(td.table_id, shardCols, CAT_MAX_COLUMNS);
            int found = 0;
            for (int si = 0; si < snc; si++) {
                if (strcasecmp(shardCols[si].col_name, g_create.shardKey) == 0) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "shard key column \"%s\" not found", g_create.shardKey);
                g_err.error = 1;
                EVOSQL_SET_SQLSTATE("42703");
                TruncateCreate();
                return -1;
            }

            /* Update table's shard info */
            int sirc = cat_update_shard_info(td.table_id, tableName, schDesc.schema_id,
                                  g_create.shardType, g_create.shardKey,
                                  g_create.shardType == 1 ? g_create.shardCount
                                                          : g_create.shardRangeCount);
            (void)sirc;

            if (g_create.shardType == 1) {
                /* HASH: create shard_count entries with round-robin node assignment */
                extern int dist_is_enabled(void);
                extern int dist_get_num_nodes(void);
                int num_nodes = dist_is_enabled() ? dist_get_num_nodes() : 1;
                if (num_nodes < 1) num_nodes = 1;
                for (int si = 0; si < g_create.shardCount; si++) {
                    ShardDesc sd;
                    memset(&sd, 0, sizeof(sd));
                    sd.table_id = td.table_id;
                    sd.shard_ordinal = si;
                    snprintf(sd.shard_name, sizeof(sd.shard_name), "s%d", si);
                    sd.owner_node_id = si % num_nodes;
                    sd.range_bound[0] = '\0';
                    cat_create_shard(&sd);
                }
            } else {
                /* RANGE: create entries from shardRanges */
                for (int si = 0; si < g_create.shardRangeCount; si++) {
                    ShardDesc sd;
                    memset(&sd, 0, sizeof(sd));
                    sd.table_id = td.table_id;
                    sd.shard_ordinal = si;
                    strncpy(sd.shard_name, g_create.shardRanges[si].name,
                            sizeof(sd.shard_name) - 1);
                    sd.owner_node_id = g_create.shardRanges[si].node_id;
                    strncpy(sd.range_bound, g_create.shardRanges[si].bound,
                            sizeof(sd.range_bound) - 1);
                    cat_create_shard(&sd);
                }
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
        g_create.tblName[i] = '\0';
        g_create.columnDefs[i] = '\0';
        g_create.columnTypeDefs[i] = '\0';
        g_create.columnNullFlags[i] = '\0';
        g_create.columnUniqueFlags[i] = '\0';
    }
    memset(g_create.columnDefaults, 0, sizeof(g_create.columnDefaults));
    g_create.currentColDefault[0] = '\0';
    g_create.totalColumnSize = 0;
    g_create.primaryKeyIndex = -1;
    g_create.columnCount = 0;
    g_create.currentColNotNull = 0;
    g_create.currentColPrimaryKey = 0;
    g_create.currentColUnique = 0;
    g_create.currentColAutoIncrement = 0;
    g_create.autoIncColIndex = -1;
    g_create.autoIncStart = 1;
    g_create.autoIncStep = 1;
    g_create.pkColumnCount = 0;
    memset(g_create.pkColumnNames, 0, sizeof(g_create.pkColumnNames));

    /* Reset shard state */
    g_create.shardType = 0;
    g_create.shardKey[0] = '\0';
    g_create.shardCount = 0;
    g_create.shardRangeCount = 0;

    /* Reset FK state */
    g_constr.fkCount = 0;
    memset(g_constr.fkLocalCols, 0, sizeof(g_constr.fkLocalCols));
    memset(g_constr.fkRefTable, 0, sizeof(g_constr.fkRefTable));
    memset(g_constr.fkRefCols, 0, sizeof(g_constr.fkRefCols));
    memset(g_constr.fkOnDelete, 0, sizeof(g_constr.fkOnDelete));
    memset(g_constr.fkOnUpdate, 0, sizeof(g_constr.fkOnUpdate));
    memset(g_constr.fkMatchType, 0, sizeof(g_constr.fkMatchType));
    memset(g_constr.fkDeferrable, 0, sizeof(g_constr.fkDeferrable));
    memset(g_constr.fkRefSchema, 0, sizeof(g_constr.fkRefSchema));
    memset(g_constr.fkNames, 0, sizeof(g_constr.fkNames));
    g_constr.fkCurLocalCols[0] = '\0';
    g_constr.fkCurRefCols[0] = '\0';

    /* Reset UNIQUE state */
    g_constr.uniqueCount = 0;
    memset(g_constr.uniqueLocalCols, 0, sizeof(g_constr.uniqueLocalCols));
    memset(g_constr.uniqueNames, 0, sizeof(g_constr.uniqueNames));
    g_constr.uniqueCurCols[0] = '\0';
}

int GetTableName(char *name)
{
    db_table_path(name, g_create.tblName, sizeof(g_create.tblName));

    return 0;
}

int GetColumnNames(char *name)
{
    if (g_create.columnDefs[0] != '\0')
        strcat(g_create.columnDefs, FIELD_SEP);
    strcat(g_create.columnDefs, name);

    /* Accumulate NOT NULL flags (e.g. "1;0;1") */
    {
        char buf[4];
        if (g_create.columnNullFlags[0] != '\0')
            strcat(g_create.columnNullFlags, FIELD_SEP);
        snprintf(buf, sizeof(buf), "%d", g_create.currentColNotNull ? 1 : 0);
        strcat(g_create.columnNullFlags, buf);
    }

    /* Accumulate UNIQUE flags (e.g. "0;1;0") */
    {
        char buf[4];
        if (g_create.columnUniqueFlags[0] != '\0')
            strcat(g_create.columnUniqueFlags, FIELD_SEP);
        snprintf(buf, sizeof(buf), "%d", g_create.currentColUnique ? 1 : 0);
        strcat(g_create.columnUniqueFlags, buf);
    }

    /* Accumulate DEFAULT values */
    {
        if (g_create.columnDefaults[0] != '\0')
            strcat(g_create.columnDefaults, FIELD_SEP);
        if (g_create.currentColDefault[0] != '\0')
            strcat(g_create.columnDefaults, g_create.currentColDefault);
        else
            strcat(g_create.columnDefaults, "\x01NONE\x01");
    }

    /* Record PRIMARY KEY column index */
    if (g_create.currentColPrimaryKey)
        g_create.primaryKeyIndex = g_create.columnCount;

    /* Record AUTO_INCREMENT column index */
    if (g_create.currentColAutoIncrement)
        g_create.autoIncColIndex = g_create.columnCount;

    /* Accumulate generated column info */
    if (g_create.columnCount < 64) {
        g_create.columnGeneratedModes[g_create.columnCount] = g_create.currentColGeneratedMode;
        if (g_create.currentColGeneratedExpr[0])
            strncpy(g_create.columnGeneratedExprs[g_create.columnCount], g_create.currentColGeneratedExpr, 511);
        else
            g_create.columnGeneratedExprs[g_create.columnCount][0] = '\0';
    }

    g_create.columnCount++;

    /* Reset per-column flags for next column */
    g_create.currentColNotNull = 0;
    g_create.currentColPrimaryKey = 0;
    g_create.currentColUnique = 0;
    g_create.currentColDefault[0] = '\0';
    g_create.currentColAutoIncrement = 0;
    g_create.currentColGeneratedMode = 0;
    g_create.currentColGeneratedExpr[0] = '\0';

    return 0;
}

int GetColumnSize(int typeVal)
{
    char buf[32];
    int size = typeVal % 10000;
    if (size == 0)
        size = 12; /* default for INT, INTEGER, etc. */
    g_create.totalColumnSize += size;

    /* Accumulate type encoding in g_create.columnTypeDefs (e.g. "40000;130050") */
    if (g_create.columnTypeDefs[0] != '\0')
        strcat(g_create.columnTypeDefs, FIELD_SEP);
    snprintf(buf, sizeof(buf), "%d", typeVal);
    strcat(g_create.columnTypeDefs, buf);

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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Check for duplicate constraint name */
    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &existing) == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" already exists", constraintName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    /* Validate existing rows against the new CHECK constraint */
    {
        char colNames[CAT_MAX_COLUMNS][128];
        for (int c = 0; c < ncols && c < 64; c++)
            strncpy(colNames[c], cols[c].col_name, 127);

        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            int rowNum = 0;
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                rowNum++;
                /* Parse record into column values */
                char colValues[CAT_MAX_COLUMNS][256];
                int recLen = tup_record_len(scanRec, sizeof(scanRec));
                tup_extract_fields_nm(scanRec, recLen, cols, ncols,
                                      colValues, NULL, CAT_MAX_COLUMNS);

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
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "check constraint \"%s\" is violated by existing row %d",
                             constraintName, rowNum);
                    g_err.error = 1;
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Check for duplicate constraint name */
    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &existing) == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" already exists", constraintName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    /* Resolve column indices for the UNIQUE columns */
    char colListBuf[256];
    strncpy(colListBuf, g_constr.uniqueCurCols, sizeof(colListBuf) - 1);
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
        if (!allValues) { g_constr.uniqueCurCols[0] = '\0'; return -1; }

        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                if (rowCount >= rowCap) {
                    rowCap *= 2;
                    allValues = realloc(allValues, rowCap * sizeof(*allValues));
                    if (!allValues) { g_constr.uniqueCurCols[0] = '\0'; return -1; }
                }
                /* Build composite unique value */
                char composite[1024] = "";
                char fieldArr[CAT_MAX_COLUMNS][256];
                int nullArr[CAT_MAX_COLUMNS];
                int recLen = tup_record_len(scanRec, sizeof(scanRec));
                int nf = tup_extract_fields(scanRec, recLen, cols, ncols,
                                            fieldArr, nullArr, CAT_MAX_COLUMNS);

                for (int u = 0; u < numUqCols; u++) {
                    if (u > 0) strcat(composite, "|");
                    if (uqColIndices[u] < nf)
                        strcat(composite, fieldArr[uqColIndices[u]]);
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
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "could not create unique constraint \"%s\": "
                             "duplicate key value \"%s\"",
                             constraintName, allValues[i]);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                    free(allValues);
                    g_constr.uniqueCurCols[0] = '\0';
                    return -1;
                }
            }
        }
        free(allValues);
    }

    cat_add_constraint(td.table_id, 'U', constraintName, g_constr.uniqueCurCols, 0, "");
    g_constr.uniqueCurCols[0] = '\0';
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Use constraint name from g_constr.pendingConstraintName */
    const char *cname = g_constr.pendingConstraintName;

    /* Check for duplicate constraint name */
    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, cname, &existing) == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" already exists", cname);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    /* Resolve referenced table */
    TableDesc refTd;
    char refPath[1024];
    db_table_path(refTableName, refPath, sizeof(refPath));
    if (tapi_resolve(refPath, &refTd, NULL, NULL) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "referenced table \"%s\" does not exist", refTableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Validate existing rows: each FK column value must exist in referenced table */
    {
        /* Resolve FK column indices */
        int fkColIndices[16];
        int numFkCols = 0;
        char colListBuf[256];
        strncpy(colListBuf, g_constr.fkCurLocalCols, sizeof(colListBuf) - 1);
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
                char fieldArr[CAT_MAX_COLUMNS][256];
                int recLen = tup_record_len(scanRec, sizeof(scanRec));
                int nf = tup_extract_fields_nm(scanRec, recLen, cols, ncols,
                                               fieldArr, NULL, CAT_MAX_COLUMNS);

                /* Build composite FK value */
                char fkValue[1024] = "";
                int allNull = 1;
                for (int u = 0; u < numFkCols; u++) {
                    if (u > 0) strcat(fkValue, "|");
                    if (fkColIndices[u] < nf) {
                        strcat(fkValue, fieldArr[fkColIndices[u]]);
                        if (strcmp(fieldArr[fkColIndices[u]], NULL_MARKER) != 0)
                            allNull = 0;
                    }
                }
                if (allNull) continue; /* NULL FK values are allowed */

                RowID rid;
                if (bt2_search(&refPkTree, fkValue, &rid) < 0) {
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "insert or update on table \"%s\" violates foreign key constraint \"%s\" "
                             "(value \"%s\" not found in referenced table \"%s\")",
                             tableName, cname, fkValue, refTd.table_name);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION);
                    /* Reset FK state */
                    g_constr.fkCount = 0;
                    g_constr.fkCurLocalCols[0] = '\0';
                    g_constr.fkCurRefCols[0] = '\0';
                    g_constr.pendingConstraintName[0] = '\0';
                    return -1;
                }
            }
        }
    }

    /* Build definition from accumulated FK state */
    char definition[1024];
    snprintf(definition, sizeof(definition), "%s|%d|%d",
             g_constr.fkCurLocalCols, g_constr.fkOnDelete[0], g_constr.fkOnUpdate[0]);

    cat_add_constraint(td.table_id, 'F', cname, definition,
                       refTd.table_id, g_constr.fkCurRefCols);

    /* Reset FK state */
    g_constr.fkCount = 0;
    g_constr.fkCurLocalCols[0] = '\0';
    g_constr.fkCurRefCols[0] = '\0';
    memset(g_constr.fkOnDelete, 0, sizeof(g_constr.fkOnDelete));
    memset(g_constr.fkOnUpdate, 0, sizeof(g_constr.fkOnUpdate));
    g_constr.pendingConstraintName[0] = '\0';

    printf("command(s) completed successfully!..\n");
    return 0;
}

int AlterTableDropConstraint(const char *tableName, const char *constraintName)
{
    TableDesc td;
    if (resolve_table_for_alter(tableName, &td) < 0) return -1;

    ConstraintDesc cd;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &cd) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 constraintName, tableName);
        g_err.error = 1;
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 oldName, tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    /* Check new name not already in use */
    ConstraintDesc dup;
    if (cat_find_constraint_by_name(td.table_id, newName, &dup) == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" already exists", newName);
        g_err.error = 1;
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 constraintName, tableName);
        g_err.error = 1;
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 constraintName, tableName);
        g_err.error = 1;
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" already exists", constraintName);
        g_err.error = 1;
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

    const char *cname = g_constr.pendingConstraintName;

    ConstraintDesc existing;
    if (cat_find_constraint_by_name(td.table_id, cname, &existing) == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" already exists", cname);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    TableDesc refTd;
    char refPath[1024];
    db_table_path(refTableName, refPath, sizeof(refPath));
    if (tapi_resolve(refPath, &refTd, NULL, NULL) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "referenced table \"%s\" does not exist", refTableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    char definition[1024];
    snprintf(definition, sizeof(definition), "%s|%d|%d",
             g_constr.fkCurLocalCols, g_constr.fkOnDelete[0], g_constr.fkOnUpdate[0]);

    /* NOT VALID: skip existing data validation */
    cat_add_constraint_ex(td.table_id, 'F', cname, definition,
                          refTd.table_id, g_constr.fkCurRefCols, 1, 0);

    g_constr.fkCount = 0;
    g_constr.fkCurLocalCols[0] = '\0';
    g_constr.fkCurRefCols[0] = '\0';
    memset(g_constr.fkOnDelete, 0, sizeof(g_constr.fkOnDelete));
    memset(g_constr.fkOnUpdate, 0, sizeof(g_constr.fkOnUpdate));
    g_constr.pendingConstraintName[0] = '\0';

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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    ConstraintDesc cd;
    if (cat_find_constraint_by_name(td.table_id, constraintName, &cd) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "constraint \"%s\" does not exist on table \"%s\"",
                 constraintName, tableName);
        g_err.error = 1;
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
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "cannot deserialize check constraint \"%s\"", constraintName);
            g_err.error = 1;
            return -1;
        }

        char colNames[CAT_MAX_COLUMNS][128];
        for (int c = 0; c < ncols && c < 64; c++)
            strncpy(colNames[c], cols[c].col_name, 127);

        TableScanCursor scanCur;
        if (tapi_scan_begin(&td, &scanCur) == 0) {
            char scanKey[256], scanRec[RECORD_BUF_SIZE];
            int rowNum = 0;
            while (tapi_scan_next(&scanCur, scanKey, scanRec, sizeof(scanRec)) == 0) {
                rowNum++;
                char colValues[CAT_MAX_COLUMNS][256];
                int recLen = tup_record_len(scanRec, sizeof(scanRec));
                tup_extract_fields_nm(scanRec, recLen, cols, ncols,
                                      colValues, NULL, CAT_MAX_COLUMNS);
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
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "check constraint \"%s\" is violated by existing row %d",
                             constraintName, rowNum);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_CHECK_VIOLATION);
                    return -1;
                }
            }
        }
    } else if (cd.constraint_type == 'F') {
        /* Validate FK against all existing rows */
        TableDesc refTd;
        if (cat_find_table_by_id(cd.ref_table_id, &refTd) < 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "referenced table not found for constraint \"%s\"", constraintName);
            g_err.error = 1;
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
                char fieldArr[CAT_MAX_COLUMNS][256];
                int recLen = tup_record_len(scanRec, sizeof(scanRec));
                int nf = tup_extract_fields_nm(scanRec, recLen, cols, ncols,
                                               fieldArr, NULL, CAT_MAX_COLUMNS);

                char fkValue[1024] = "";
                int allNull = 1;
                for (int u = 0; u < numFkCols; u++) {
                    if (u > 0) strcat(fkValue, "|");
                    if (fkColIndices[u] < nf) {
                        strcat(fkValue, fieldArr[fkColIndices[u]]);
                        if (strcmp(fieldArr[fkColIndices[u]], NULL_MARKER) != 0)
                            allNull = 0;
                    }
                }
                if (allNull) continue;

                RowID rid;
                if (bt2_search(&refPkTree, fkValue, &rid) < 0) {
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "constraint \"%s\" is violated by existing data "
                             "(value \"%s\" not found in referenced table \"%s\")",
                             constraintName, fkValue, refTd.table_name);
                    g_err.error = 1;
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Check table doesn't already have a PK */
    for (int c = 0; c < ncols; c++) {
        if (cols[c].is_pk) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "table \"%s\" already has a primary key", tableName);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("42710");
            return -1;
        }
    }

    /* Resolve PK column indices from pkColumnNames accumulated by parser */
    int pkColIndices[16];
    int numPkCols = g_create.pkColumnCount;
    for (int p = 0; p < numPkCols; p++) {
        pkColIndices[p] = -1;
        for (int c = 0; c < ncols; c++) {
            if (strcasecmp(cols[c].col_name, g_create.pkColumnNames[p]) == 0) {
                pkColIndices[p] = c;
                break;
            }
        }
        if (pkColIndices[p] < 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "column \"%s\" does not exist", g_create.pkColumnNames[p]);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("42703");
            g_create.pkColumnCount = 0;
            return -1;
        }
    }

    /* Validate: PK columns must be NOT NULL and unique across all rows */
    {
        char (*allKeys)[1024] = NULL;
        int rowCount = 0, rowCap = 64;
        allKeys = malloc(rowCap * sizeof(*allKeys));
        if (!allKeys) { g_create.pkColumnCount = 0; return -1; }

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
                char fieldArr[CAT_MAX_COLUMNS][256];
                int recLen = tup_record_len(scanRec, sizeof(scanRec));
                int nf = tup_extract_fields_nm(scanRec, recLen, cols, ncols,
                                               fieldArr, NULL, CAT_MAX_COLUMNS);

                char composite[1024] = "";
                for (int p = 0; p < numPkCols; p++) {
                    if (p > 0) strcat(composite, "|");
                    if (pkColIndices[p] < nf) {
                        if (strcmp(fieldArr[pkColIndices[p]], NULL_MARKER) == 0) {
                            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                                     "column \"%s\" contains null values (row %d)",
                                     g_create.pkColumnNames[p], rowNum);
                            g_err.error = 1;
                            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_NOT_NULL_VIOLATION);
                            free(allKeys);
                            g_create.pkColumnCount = 0;
                            return -1;
                        }
                        strcat(composite, fieldArr[pkColIndices[p]]);
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
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "could not create primary key constraint: "
                             "duplicate key value \"%s\"", allKeys[i]);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNIQUE_VIOLATION);
                    free(allKeys);
                    g_create.pkColumnCount = 0;
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
        strcat(pkDef, g_create.pkColumnNames[p]);
    }

    cat_add_constraint(td.table_id, 'P', constraintName, pkDef, 0, "");
    g_create.pkColumnCount = 0;
    printf("command(s) completed successfully!..\n");
    return 0;
}

/* ---- ALTER TABLE ADD COLUMN ---- */

int AlterTableAddColumn(const char *tableName, const char *colName, int typeCode)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));

    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Check duplicate column name */
    for (int i = 0; i < ncols; i++) {
        if (strcasecmp(cols[i].col_name, colName) == 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "column \"%s\" of relation \"%s\" already exists",
                     colName, tableName);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("42701");
            return -1;
        }
    }

    /* Column count limit */
    if (ncols >= CAT_MAX_COLUMNS) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "tables can have at most %d columns", CAT_MAX_COLUMNS);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("54011");
        return -1;
    }

    /* NOT NULL without DEFAULT: reject if table has existing rows
     * (they would have NULL for the new column) */
    if (g_create.currentColNotNull &&
        (g_create.currentColDefault[0] == '\0' ||
         strcmp(g_create.currentColDefault, "\x01NONE\x01") == 0)) {
        if (td.heap_page != 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "column \"%s\" of relation \"%s\" contains null values",
                     colName, tableName);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("23502");
            return -1;
        }
    }

    /* Build new ColumnDesc */
    ColumnDesc newCol;
    memset(&newCol, 0, sizeof(newCol));
    newCol.table_id = td.table_id;
    newCol.col_ordinal = ncols;
    strncpy(newCol.col_name, colName, CAT_MAX_NAME_LEN - 1);
    newCol.type_code = typeCode;
    newCol.is_not_null = g_create.currentColNotNull;
    newCol.is_unique = g_create.currentColUnique;
    newCol.is_pk = 0;  /* Cannot add PK column via ADD COLUMN */

    if (g_create.currentColDefault[0] != '\0')
        strncpy(newCol.default_val, g_create.currentColDefault,
                CAT_MAX_DEFAULT_LEN - 1);
    else
        strcpy(newCol.default_val, "\x01NONE\x01");

    newCol.generated_mode = g_create.currentColGeneratedMode;
    if (g_create.currentColGeneratedExpr[0])
        strncpy(newCol.generated_expr, g_create.currentColGeneratedExpr, 511);

    /* Insert column into catalog */
    if (cat_add_column(td.table_id, &newCol) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not add column \"%s\" to table \"%s\"",
                 colName, tableName);
        g_err.error = 1;
        return -1;
    }

    /* Update table num_columns */
    cat_update_num_columns(td.table_id, td.table_name,
                           td.schema_id, ncols + 1);

    /* Handle FIRST/AFTER position for newly added column */
    if (g_upd.colPosition == 1 || (g_upd.colPosition == 2 && g_upd.colPositionAfter[0])) {
        int new_col_ordinal = ncols; /* just added at end */
        int target_ord = 0;
        if (g_upd.colPosition == 2) {
            for (int i = 0; i < ncols; i++) {
                if (!cols[i].is_dropped &&
                    strcasecmp(cols[i].col_name, g_upd.colPositionAfter) == 0) {
                    target_ord = cols[i].col_ordinal + 1;
                    break;
                }
            }
        }
        cat_reorder_column(td.table_id, new_col_ordinal, target_ord);

        /* Rewrite existing tuples: old tuples don't have the new column,
         * but cat_reorder_column changed ordinals. We need to rebuild tuples
         * with NULL at the new column's physical position. */
        ColumnDesc newCols[CAT_MAX_COLUMNS];
        int newNcols = cat_find_columns(td.table_id, newCols, CAT_MAX_COLUMNS);

        BTree2 pk = tapi_pk_tree(&td);
        TableScanCursor cur;
        if (tapi_scan_begin(&td, &cur) == 0) {
            char pkBuf[256], recBuf[RECORD_BUF_SIZE];
            while (tapi_scan_next(&cur, pkBuf, recBuf, sizeof(recBuf)) == 0) {
                int rlen = tup_record_len(recBuf, sizeof(recBuf));
                if (rlen <= 0) continue;

                /* Extract with OLD layout (ncols columns, before add) */
                char oldFields[CAT_MAX_COLUMNS][256];
                int oldNull[CAT_MAX_COLUMNS];
                int nf = tup_extract_fields(recBuf, rlen, cols, ncols,
                                            oldFields, oldNull, CAT_MAX_COLUMNS);
                if (nf <= 0) continue;

                /* Build new tuple with reordered columns */
                const char *newVals[CAT_MAX_COLUMNS];
                int newNull2[CAT_MAX_COLUMNS];
                for (int ni = 0; ni < newNcols && ni < 64; ni++) {
                    /* Find this column in old layout by name */
                    int found = 0;
                    for (int oi = 0; oi < nf; oi++) {
                        if (strcasecmp(newCols[ni].col_name, cols[oi].col_name) == 0) {
                            newVals[ni] = oldNull[oi] ? NULL : oldFields[oi];
                            newNull2[ni] = oldNull[oi];
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        newVals[ni] = NULL; /* new column = NULL */
                        newNull2[ni] = 1;
                    }
                }

                uint32_t xmin = 0;
                if (tup_has_mvcc(recBuf, rlen))
                    xmin = tup_get_xmin(recBuf, rlen);
                char newRec[RECORD_BUF_SIZE];
                int newLen = tup_build(newVals, newNull2, newNcols,
                                       td.table_id, newCols, newNcols,
                                       newRec, sizeof(newRec), xmin);
                if (newLen <= 0) continue;

                RowID rid;
                if (bt2_search(&pk, pkBuf, &rid) != 0) continue;
                RowID new_rid = tapi_heap_update(&td, rid, newRec, (uint16_t)newLen);
                if (new_rid.page_no != rid.page_no || new_rid.slot_idx != rid.slot_idx)
                    bt2_update(&pk, pkBuf, new_rid);
            }
        }
        { extern void col_cache_invalidate(uint32_t);
          col_cache_invalidate(td.table_id); }
    }
    g_upd.colPosition = 0;
    g_upd.colPositionAfter[0] = '\0';

    printf("ALTER TABLE\n");
    return 0;
}

int AlterTableDropColumn(const char *tableName, const char *colName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));

    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Find the column */
    int target = -1;
    for (int i = 0; i < ncols; i++) {
        if (!cols[i].is_dropped && strcasecmp(cols[i].col_name, colName) == 0) {
            target = i;
            break;
        }
    }
    if (target < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "column \"%s\" of relation \"%s\" does not exist",
                 colName, tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42703");
        return -1;
    }

    /* Reject PK column */
    if (cols[target].is_pk) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "cannot drop column \"%s\" because it is part of the primary key",
                 colName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("2BP01");
        return -1;
    }

    /* Reject last active column */
    int active_count = 0;
    for (int i = 0; i < ncols; i++) {
        if (!cols[i].is_dropped) active_count++;
    }
    if (active_count <= 1) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "cannot drop the only column of table \"%s\"", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("2BP01");
        return -1;
    }

    /* Reject if column has secondary index */
    IndexDesc indexes[16];
    int nidx = cat_list_indexes(td.table_id, indexes, 16);
    for (int i = 0; i < nidx; i++) {
        if (indexes[i].index_type == 'P') continue; /* skip PK index */
        /* Check if dropped column appears in index col_list */
        char colList[256];
        strncpy(colList, indexes[i].col_list, 255);
        colList[255] = '\0';
        char *saveptr = NULL;
        char *tok = strtok_r(colList, ",", &saveptr);
        while (tok) {
            if (strcasecmp(tok, colName) == 0) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "cannot drop column \"%s\" because index \"%s\" depends on it",
                         colName, indexes[i].index_name);
                g_err.error = 1;
                EVOSQL_SET_SQLSTATE("2BP01");
                return -1;
            }
            tok = strtok_r(NULL, ",", &saveptr);
        }
    }

    /* Reject if FK references this column */
    ConstraintDesc constraints[32];
    int ncon = cat_list_constraints(td.table_id, constraints, 32);
    for (int i = 0; i < ncon; i++) {
        if (constraints[i].constraint_type == 'F') {
            /* Check local cols in definition */
            char def[1024];
            strncpy(def, constraints[i].definition, sizeof(def) - 1);
            def[sizeof(def) - 1] = '\0';
            char *pipe = strchr(def, '|');
            if (pipe) *pipe = '\0';
            char *saveptr = NULL;
            char *tok = strtok_r(def, ",", &saveptr);
            while (tok) {
                if (strcasecmp(tok, colName) == 0) {
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "cannot drop column \"%s\" because foreign key \"%s\" depends on it",
                             colName, constraints[i].constraint_name);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE("2BP01");
                    return -1;
                }
                tok = strtok_r(NULL, ",", &saveptr);
            }
        }
        if (constraints[i].constraint_type == 'U') {
            /* Check UNIQUE constraint columns */
            char def[1024];
            strncpy(def, constraints[i].definition, sizeof(def) - 1);
            def[sizeof(def) - 1] = '\0';
            char *saveptr = NULL;
            char *tok = strtok_r(def, ",", &saveptr);
            while (tok) {
                if (strcasecmp(tok, colName) == 0) {
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "cannot drop column \"%s\" because unique constraint \"%s\" depends on it",
                             colName, constraints[i].constraint_name);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE("2BP01");
                    return -1;
                }
                tok = strtok_r(NULL, ",", &saveptr);
            }
        }
    }

    /* Mark column as dropped */
    if (cat_drop_column(td.table_id, cols[target].col_ordinal) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not drop column \"%s\" from table \"%s\"",
                 colName, tableName);
        g_err.error = 1;
        return -1;
    }

    /* Invalidate column cache */
    { extern void col_cache_invalidate(uint32_t);
      col_cache_invalidate(td.table_id); }

    printf("ALTER TABLE\n");
    return 0;
}

/* ---- RENAME COLUMN ---- */
int AlterTableRenameColumn(const char *tableName, const char *oldName, const char *newName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));

    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Find column by old name */
    int target = -1;
    for (int i = 0; i < ncols; i++) {
        if (!cols[i].is_dropped && strcasecmp(cols[i].col_name, oldName) == 0) {
            target = i; break;
        }
    }
    if (target < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "column \"%s\" of relation \"%s\" does not exist", oldName, tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42703");
        return -1;
    }

    /* Check new name not already in use */
    for (int i = 0; i < ncols; i++) {
        if (!cols[i].is_dropped && i != target &&
            strcasecmp(cols[i].col_name, newName) == 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "column \"%s\" of relation \"%s\" already exists", newName, tableName);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("42701");
            return -1;
        }
    }

    /* Update column name in catalog */
    strncpy(cols[target].col_name, newName, CAT_MAX_NAME_LEN - 1);
    cols[target].col_name[CAT_MAX_NAME_LEN - 1] = '\0';
    cat_update_column(td.table_id, cols[target].col_ordinal, &cols[target]);

    /* Update secondary index col_list references */
    IndexDesc indexes[16];
    int nidx = cat_list_indexes(td.table_id, indexes, 16);
    for (int i = 0; i < nidx; i++) {
        char colList[256];
        strncpy(colList, indexes[i].col_list, 255);
        colList[255] = '\0';
        int changed = 0;
        char newList[256] = "";
        char *saveptr = NULL;
        char *tok = strtok_r(colList, ",", &saveptr);
        while (tok) {
            if (newList[0]) strncat(newList, ",", sizeof(newList) - strlen(newList) - 1);
            if (strcasecmp(tok, oldName) == 0) {
                strncat(newList, newName, sizeof(newList) - strlen(newList) - 1);
                changed = 1;
            } else {
                strncat(newList, tok, sizeof(newList) - strlen(newList) - 1);
            }
            tok = strtok_r(NULL, ",", &saveptr);
        }
        if (changed) {
            strncpy(indexes[i].col_list, newList, CAT_MAX_NAME_LEN - 1);
            indexes[i].col_list[CAT_MAX_NAME_LEN - 1] = '\0';
            cat_update_index_col_list(td.table_id, indexes[i].index_name,
                                      indexes[i].col_list);
        }
    }

    /* Invalidate column cache */
    { extern void col_cache_invalidate(uint32_t);
      col_cache_invalidate(td.table_id); }

    printf("ALTER TABLE\n");
    return 0;
}

/* ---- MODIFY COLUMN ---- */

static int evo_type_is_compatible(int old_type, int new_type)
{
    if (old_type == new_type) return 1;
    int old_fam = old_type / 10000;
    int new_fam = new_type / 10000;
    int old_size = old_type % 10000;
    int new_size = new_type % 10000;

    /* Same family required */
    if (old_fam != new_fam) return 0;

    /* String families (CHAR=12, VARCHAR=13): widening only */
    if (old_fam == 12 || old_fam == 13) {
        return new_size >= old_size;
    }

    /* Fixed-width families: same family = same encoding */
    return 1;
}

int AlterTableModifyColumn(const char *tableName, const char *colName, int newTypeCode)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));

    if (tapi_resolve(tblPath, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Find column */
    int target = -1;
    for (int i = 0; i < ncols; i++) {
        if (!cols[i].is_dropped && strcasecmp(cols[i].col_name, colName) == 0) {
            target = i; break;
        }
    }
    if (target < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "column \"%s\" of relation \"%s\" does not exist", colName, tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42703");
        return -1;
    }

    /* Reject PK type change */
    if (cols[target].is_pk && cols[target].type_code != newTypeCode) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "cannot change type of column \"%s\" because it is part of the primary key",
                 colName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("2BP01");
        return -1;
    }

    /* Check type compatibility */
    if (!evo_type_is_compatible(cols[target].type_code, newTypeCode)) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "column \"%s\" cannot be cast automatically to type %d",
                 colName, newTypeCode);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42804");
        return -1;
    }

    /* NOT NULL check: if adding NOT NULL, scan for existing NULLs */
    if (g_create.currentColNotNull && !cols[target].is_not_null) {
        TableScanCursor cursor;
        if (tapi_scan_begin(&td, &cursor) == 0) {
            char pk[256], rec[RECORD_BUF_SIZE];
            while (tapi_scan_next(&cursor, pk, rec, sizeof(rec)) == 0) {
                int rlen = tup_record_len(rec, sizeof(rec));
                if (rlen <= 0) continue;
                char flds[CAT_MAX_COLUMNS][256];
                int nulls[CAT_MAX_COLUMNS];
                tup_extract_fields(rec, rlen, cols, ncols, flds, nulls, CAT_MAX_COLUMNS);
                if (target < ncols && nulls[target]) {
                    tapi_scan_end(&cursor);
                    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                             "column \"%s\" of relation \"%s\" contains null values",
                             colName, tableName);
                    g_err.error = 1;
                    EVOSQL_SET_SQLSTATE("23502");
                    return -1;
                }
            }
        }
    }

    /* Update catalog */
    cols[target].type_code = newTypeCode;
    cols[target].is_not_null = g_create.currentColNotNull;
    cols[target].is_unique = g_create.currentColUnique;
    if (g_create.currentColDefault[0])
        strncpy(cols[target].default_val, g_create.currentColDefault, 255);

    cat_update_column(td.table_id, cols[target].col_ordinal, &cols[target]);

    /* Handle FIRST/AFTER column position — eager rewrite */
    if (g_upd.colPosition == 1 || (g_upd.colPosition == 2 && g_upd.colPositionAfter[0])) {
        int new_ord = 0;
        if (g_upd.colPosition == 2) {
            int after_ord = -1;
            for (int i = 0; i < ncols; i++) {
                if (!cols[i].is_dropped &&
                    strcasecmp(cols[i].col_name, g_upd.colPositionAfter) == 0) {
                    after_ord = cols[i].col_ordinal;
                    break;
                }
            }
            if (after_ord < 0) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "column \"%s\" does not exist (AFTER)", g_upd.colPositionAfter);
                g_err.error = 1;
                EVOSQL_SET_SQLSTATE("42703");
                return -1;
            }
            new_ord = after_ord + 1;
        }
        /* Save old column order for reading tuples */
        ColumnDesc oldCols[CAT_MAX_COLUMNS];
        memcpy(oldCols, cols, ncols * sizeof(ColumnDesc));

        /* Reorder in catalog */
        cat_reorder_column(td.table_id, cols[target].col_ordinal, new_ord);

        /* Read new column order */
        ColumnDesc newCols[CAT_MAX_COLUMNS];
        int newNcols = cat_find_columns(td.table_id, newCols, CAT_MAX_COLUMNS);

        /* Build mapping: newCols[i].col_name → oldCols position */
        int mapping[CAT_MAX_COLUMNS]; /* mapping[new_idx] = old_idx */
        for (int ni = 0; ni < newNcols; ni++) {
            mapping[ni] = ni; /* default: same position */
            for (int oi = 0; oi < ncols; oi++) {
                if (strcasecmp(newCols[ni].col_name, oldCols[oi].col_name) == 0) {
                    mapping[ni] = oi;
                    break;
                }
            }
        }

        /* Rewrite all tuples with new column order */
        BTree2 pk = tapi_pk_tree(&td);
        TableScanCursor cur;
        if (tapi_scan_begin(&td, &cur) == 0) {
            char pkBuf[256], recBuf[RECORD_BUF_SIZE];
            while (tapi_scan_next(&cur, pkBuf, recBuf, sizeof(recBuf)) == 0) {
                int rlen = tup_record_len(recBuf, sizeof(recBuf));
                if (rlen <= 0) continue;

                /* Extract fields in OLD order */
                char oldFields[CAT_MAX_COLUMNS][256];
                int oldNull[CAT_MAX_COLUMNS];
                int nf = tup_extract_fields(recBuf, rlen, oldCols, ncols,
                                            oldFields, oldNull, CAT_MAX_COLUMNS);
                if (nf <= 0) continue;

                /* Remap to NEW order */
                const char *newVals[CAT_MAX_COLUMNS];
                int newNull2[CAT_MAX_COLUMNS];
                for (int ni = 0; ni < newNcols && ni < 64; ni++) {
                    int oi = mapping[ni];
                    if (oi < nf) {
                        newVals[ni] = oldNull[oi] ? NULL : oldFields[oi];
                        newNull2[ni] = oldNull[oi];
                    } else {
                        newVals[ni] = NULL;
                        newNull2[ni] = 1;
                    }
                }

                /* Build new tuple */
                uint32_t xmin = 0;
                if (tup_has_mvcc(recBuf, rlen))
                    xmin = tup_get_xmin(recBuf, rlen);
                char newRec[RECORD_BUF_SIZE];
                int newLen = tup_build(newVals, newNull2, newNcols,
                                       td.table_id, newCols, newNcols,
                                       newRec, sizeof(newRec), xmin);
                if (newLen <= 0) continue;

                /* Update in-place */
                RowID rid;
                if (bt2_search(&pk, pkBuf, &rid) != 0) continue;
                RowID new_rid = tapi_heap_update(&td, rid, newRec, (uint16_t)newLen);
                if (new_rid.page_no != rid.page_no || new_rid.slot_idx != rid.slot_idx)
                    bt2_update(&pk, pkBuf, new_rid);
            }
        }
    }
    g_upd.colPosition = 0;
    g_upd.colPositionAfter[0] = '\0';

    /* Invalidate column cache */
    { extern void col_cache_invalidate(uint32_t);
      col_cache_invalidate(td.table_id); }

    printf("ALTER TABLE\n");
    return 0;
}

/* ---- CHANGE COLUMN (MySQL: rename + modify + optional reposition) ---- */
int AlterTableChangeColumn(const char *tableName, const char *oldName,
                           const char *newName, int newTypeCode)
{
    /* Save position before rename clears state */
    int savedPos = g_upd.colPosition;
    char savedAfter[128];
    strncpy(savedAfter, g_upd.colPositionAfter, 127);
    savedAfter[127] = '\0';

    /* Step 1: Rename if names differ */
    if (strcasecmp(oldName, newName) != 0) {
        int rc = AlterTableRenameColumn(tableName, oldName, newName);
        if (rc < 0) return rc;
    }

    /* Step 2: Modify type/attributes + position */
    g_upd.colPosition = savedPos;
    strncpy(g_upd.colPositionAfter, savedAfter, 127);
    g_upd.colPositionAfter[127] = '\0';

    return AlterTableModifyColumn(tableName, newName, newTypeCode);
}

/* ---- RENAME TABLE ---- */
int RenameTableProcess(const char *oldName, const char *newName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    char oldPath[1024], newPath[1024];
    db_table_path(oldName, oldPath, sizeof(oldPath));
    db_table_path(newName, newPath, sizeof(newPath));

    if (tapi_resolve(oldPath, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", oldName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* Check new name not already in use */
    {
        TableDesc tmp;
        ColumnDesc tmpC[1];
        int tmpN;
        if (tapi_resolve(newPath, &tmp, tmpC, &tmpN) == 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "table \"%s\" already exists", newName);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("42P07");
            return -1;
        }
    }

    /* Rename in catalog: delete old key, insert with new name */
    cat_rename_table(td.table_id, td.schema_id, td.table_name, newName);

    /* Invalidate column cache */
    { extern void col_cache_invalidate(uint32_t);
      col_cache_invalidate(td.table_id); }

    printf("RENAME TABLE\n");
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
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "domain \"%s\" already exists", name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    cat_add_constraint(0, 'D', name, definition, 0, "");
    printf("command(s) completed successfully!..\n");
    return 0;
}

/* ================================================================
 *  Shard parser helpers
 * ================================================================ */

void SetShardHash(const char *colName, int shardCount)
{
    g_create.shardType = 1; /* SHARD_HASH */
    strncpy(g_create.shardKey, colName, sizeof(g_create.shardKey) - 1);
    g_create.shardKey[sizeof(g_create.shardKey) - 1] = '\0';
    g_create.shardCount = shardCount;
    g_create.shardRangeCount = 0;
}

void SetShardRange(const char *colName)
{
    g_create.shardType = 2; /* SHARD_RANGE */
    strncpy(g_create.shardKey, colName, sizeof(g_create.shardKey) - 1);
    g_create.shardKey[sizeof(g_create.shardKey) - 1] = '\0';
    g_create.shardCount = g_create.shardRangeCount;
}

void SetPartitionByRange(const char *colName)
{
    /* Task 88: reuse shardType field for local partitioning. shardCount=0
     * — individual partitions are added later via CREATE TABLE ... PARTITION OF. */
    g_create.shardType = SHARD_PARTITION;
    strncpy(g_create.shardKey, colName, sizeof(g_create.shardKey) - 1);
    g_create.shardKey[sizeof(g_create.shardKey) - 1] = '\0';
    g_create.shardCount = 0;
}

/* CREATE TABLE child PARTITION OF parent FOR VALUES FROM (lo) TO (hi):
 *   - Resolve parent, verify it is partitioned (shard_type=SHARD_PARTITION).
 *   - Create child table with identical schema by replaying the column set
 *     via cat_create_table().
 *   - Register a ShardDesc with range_bound="lo|hi" so cat_find_partition_by_value
 *     routes rows to the child at INSERT time. */
int CreatePartitionChild(const char *child_name, const char *parent_name,
                         int low, int high)
{
    TableDesc parent;
    ColumnDesc parent_cols[CAT_MAX_COLUMNS];
    int ncols = 0;
    if (tapi_resolve(parent_name, &parent, parent_cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "partition: parent table '%s' not found", parent_name);
        g_err.error = 1;
        return -1;
    }
    if (parent.shard_type != SHARD_PARTITION) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "partition: '%s' is not partitioned (use PARTITION BY RANGE)",
                 parent_name);
        g_err.error = 1;
        return -1;
    }
    if (low >= high) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "partition: FROM (%d) must be less than TO (%d)", low, high);
        g_err.error = 1;
        return -1;
    }

    /* Create child table in the same schema with identical columns. Use
     * cat_create_table directly to avoid re-entering the parser. */
    DatabaseDesc db;
    SchemaDesc   sch;
    if (cat_find_database(g_currentDatabase, &db) < 0 ||
        cat_find_schema(db.db_id, g_currentSchema, &sch) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "partition: current database/schema unresolved");
        g_err.error = 1;
        return -1;
    }

    /* List existing partitions for cap + overlap checks BEFORE creating
     * the child table so we don't have to roll back on detection. Heap-
     * allocate to avoid a ~384 KB stack frame on macOS non-main threads. */
    ShardDesc *existing_shards = malloc(EVO_MAX_PARTITIONS * sizeof(ShardDesc));
    if (!existing_shards) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "partition: out of memory");
        g_err.error = 1;
        return -1;
    }
    int existing_count = cat_list_shards(parent.table_id, existing_shards,
                                         EVO_MAX_PARTITIONS);

    if (existing_count >= EVO_MAX_PARTITIONS) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "partition: '%s' already has the maximum of %d partitions",
                 parent_name, EVO_MAX_PARTITIONS);
        g_err.error = 1;
        free(existing_shards);
        return -1;
    }

    for (int i = 0; i < existing_count; i++) {
        const char *bar = strchr(existing_shards[i].range_bound, '|');
        if (!bar) continue;
        char elow[32], ehigh[32];
        size_t ll = (size_t)(bar - existing_shards[i].range_bound);
        if (ll >= sizeof(elow)) ll = sizeof(elow) - 1;
        memcpy(elow, existing_shards[i].range_bound, ll); elow[ll] = '\0';
        strncpy(ehigh, bar + 1, sizeof(ehigh) - 1);
        ehigh[sizeof(ehigh) - 1] = '\0';
        long long elo = atoll(elow), ehi = atoll(ehigh);
        if (low < ehi && elo < high) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "partition: range [%d, %d) overlaps existing partition "
                     "'%s' [%lld, %lld)",
                     low, high, existing_shards[i].shard_name, elo, ehi);
            g_err.error = 1;
            free(existing_shards);
            return -1;
        }
    }

    /* Create child table with parent's columns. cat_create_table takes
     * the column array + table settings separately. */
    if (cat_create_table(sch.schema_id, child_name, parent_cols, ncols,
                         parent.pad_size, parent.auto_inc_col,
                         /*auto_inc_start*/1, parent.auto_inc_step,
                         /*is_temporary*/0, /*on_commit_delete*/0) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "partition: could not create child table '%s'", child_name);
        g_err.error = 1;
        free(existing_shards);
        return -1;
    }

    ShardDesc p;
    memset(&p, 0, sizeof(p));
    p.table_id = parent.table_id;
    p.shard_ordinal = existing_count;
    p.owner_node_id = 0;
    strncpy(p.shard_name, child_name, CAT_MAX_NAME_LEN - 1);
    snprintf(p.range_bound, sizeof(p.range_bound), "%d|%d", low, high);
    if (cat_create_shard(&p) < 0) {
        /* Rollback: drop the just-created child so the name is reusable.
         * Safe under the global DML mutex — no concurrent CREATE TABLE
         * can have reused the name between cat_create_table and here. */
        TableDesc stranded;
        ColumnDesc sc[CAT_MAX_COLUMNS]; int snc = 0;
        if (tapi_resolve(child_name, &stranded, sc, &snc) == 0) {
            cat_drop_table(stranded.table_id);
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "partition: could not register partition metadata");
        g_err.error = 1;
        free(existing_shards);
        return -1;
    }

    free(existing_shards);

    printf("Partition '%s' created on %s FOR VALUES FROM (%d) TO (%d).\n",
           child_name, parent_name, low, high);
    return 0;
}

void AddShardRangeDef(const char *name, const char *bound, int node_id)
{
    int i = g_create.shardRangeCount;
    if (i >= 7) return;
    strncpy(g_create.shardRanges[i].name, name, 63);
    g_create.shardRanges[i].name[63] = '\0';
    strncpy(g_create.shardRanges[i].bound, bound, 255);
    g_create.shardRanges[i].bound[255] = '\0';
    g_create.shardRanges[i].node_id = node_id;
    g_create.shardRangeCount++;
}

/* ---- CREATE / DROP VIEW ---- */

int CreateViewProcess(const char *viewName)
{
    /* Extract view SQL from the original SQL input.
     * The original SQL is: "CREATE [OR REPLACE] VIEW name AS SELECT ..."
     * We need everything after "AS " */
    extern __thread const char *g_lex_input;
    char viewSql[4096] = "";
    if (g_lex_input) {
        const char *as = strcasestr(g_lex_input, " AS ");
        if (as) {
            const char *sel = as + 4;
            while (*sel && isspace((unsigned char)*sel)) sel++;
            strncpy(viewSql, sel, sizeof(viewSql) - 1);
            viewSql[sizeof(viewSql) - 1] = '\0';
            /* Trim trailing whitespace/semicolons */
            int len = (int)strlen(viewSql);
            while (len > 0 && (viewSql[len-1] == ';' || isspace((unsigned char)viewSql[len-1])))
                viewSql[--len] = '\0';
        }
    }

    if (viewSql[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not extract view SQL for \"%s\"", viewName);
        g_err.error = 1;
        return -1;
    }

    /* Resolve current database and schema */
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current database not found");
        g_err.error = 1;
        return -1;
    }
    SchemaDesc schDesc;
    const char *schema = db_get_current_schema();
    if (cat_find_schema(dbDesc.db_id, schema, &schDesc) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current schema not found");
        g_err.error = 1;
        return -1;
    }

    /* Check for OR REPLACE — if view exists, drop it first */
    ViewDesc existing;
    if (cat_find_view(dbDesc.db_id, schDesc.schema_id, viewName, &existing) == 0) {
        /* Check if OR REPLACE was specified (heuristic: check original SQL) */
        if (g_lex_input && strcasestr(g_lex_input, "OR REPLACE")) {
            cat_drop_view(dbDesc.db_id, schDesc.schema_id, viewName);
        } else {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "view \"%s\" already exists", viewName);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("42P07");
            return -1;
        }
    }

    if (cat_create_view(dbDesc.db_id, schDesc.schema_id, viewName, viewSql) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not create view \"%s\"", viewName);
        g_err.error = 1;
        return -1;
    }

    printf("CREATE VIEW\n");
    return 0;
}

int DropViewProcess(const char *viewName, int ifExists)
{
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) < 0) {
        if (ifExists) { printf("DROP VIEW\n"); return 0; }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current database not found");
        g_err.error = 1;
        return -1;
    }
    SchemaDesc schDesc;
    const char *schema = db_get_current_schema();
    if (cat_find_schema(dbDesc.db_id, schema, &schDesc) < 0) {
        if (ifExists) { printf("DROP VIEW\n"); return 0; }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current schema not found");
        g_err.error = 1;
        return -1;
    }

    ViewDesc vd;
    if (cat_find_view(dbDesc.db_id, schDesc.schema_id, viewName, &vd) < 0) {
        if (ifExists) { printf("DROP VIEW\n"); return 0; }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "view \"%s\" does not exist", viewName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    cat_drop_view(dbDesc.db_id, schDesc.schema_id, viewName);
    printf("DROP VIEW\n");
    return 0;
}
