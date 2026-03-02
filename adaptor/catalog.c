#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "platform.h"
#include "catalog.h"
#include "../evolution/db/database.h"

/* From main.c — connection limit accessors */
extern int  get_max_connections(void);
extern void set_max_connections(int n);
extern int  get_active_connections(void);

/* ----------------------------------------------------------------
 *  Type encoding → PG metadata helpers
 * ---------------------------------------------------------------- */
static int evo_type_to_pg_oid(int typeEncoding)
{
    int family = typeEncoding / 10000;
    switch (family) {
    case 1:  return 23;     /* BIT/TINYINT → int4 */
    case 2:  return 21;     /* SMALLINT → int2 */
    case 3:  return 23;     /* MEDIUMINT → int4 */
    case 4:  return 23;     /* INT → int4 */
    case 5:  return 23;     /* INTEGER → int4 */
    case 6:  return 20;     /* BIGINT → int8 */
    case 7:  return 701;    /* REAL → float8 */
    case 8:  return 701;    /* DOUBLE → float8 */
    case 9:  return 700;    /* FLOAT → float4 */
    case 10: return 1082;   /* DATE/TIME → date */
    case 11: return 1700;   /* DECIMAL → numeric */
    case 12: return 1042;   /* CHAR → bpchar */
    case 13: return 1043;   /* VARCHAR → varchar */
    case 22: return 16;     /* BOOLEAN → bool */
    default: return 25;     /* TEXT, BLOB, etc. */
    }
}

static const char *evo_type_to_name(int typeEncoding)
{
    int family = typeEncoding / 10000;
    switch (family) {
    case 1:  return "integer";
    case 2:  return "smallint";
    case 3:  return "integer";
    case 4:  return "integer";
    case 5:  return "integer";
    case 6:  return "bigint";
    case 7:  return "double precision";
    case 8:  return "double precision";
    case 9:  return "real";
    case 10: return "date";
    case 11: return "numeric";
    case 12: return "character";
    case 13: return "character varying";
    case 22: return "boolean";
    default: return "text";
    }
}

static int evo_type_to_attlen(int typeEncoding)
{
    int family = typeEncoding / 10000;
    switch (family) {
    case 2:  return 2;   /* int2 */
    case 1: case 3: case 4: case 5: return 4; /* int4 */
    case 6:  return 8;   /* int8 */
    case 9:  return 4;   /* float4 */
    case 7: case 8: return 8; /* float8 */
    case 10: return 4;   /* date */
    case 22: return 1;   /* bool */
    default: return -1;  /* varlena (varchar, text, char, numeric) */
    }
}

static int evo_type_to_atttypmod(int typeEncoding)
{
    int family = typeEncoding / 10000;
    int size = typeEncoding % 10000;
    /* PostgreSQL convention: varchar(N)/char(N) → atttypmod = N + 4 */
    if ((family == 12 || family == 13) && size > 0)
        return size + 4;
    return -1;
}

/* ----------------------------------------------------------------
 *  Helper: case-insensitive substring search
 * ---------------------------------------------------------------- */
static int stristr_found(const char *haystack, const char *needle)
{
    const char *h = haystack;
    int nlen = (int)strlen(needle);
    while (*h) {
        if (strncasecmp(h, needle, nlen) == 0)
            return 1;
        h++;
    }
    return 0;
}

/* Case-insensitive substring search — returns pointer (like strstr) */
static const char *strcasestr_local(const char *haystack, const char *needle)
{
    int nlen = (int)strlen(needle);
    while (*haystack) {
        if (strncasecmp(haystack, needle, nlen) == 0)
            return haystack;
        haystack++;
    }
    return NULL;
}

/* Case-insensitive prefix check (skips leading whitespace) */
static int starts_with_i(const char *sql, const char *prefix)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return strncasecmp(sql, prefix, strlen(prefix)) == 0;
}

/* Deterministic OID from table name (djb2 hash) — ensures the same
   table always gets the same OID regardless of file enumeration order */
static unsigned int stable_table_oid(const char *name)
{
    unsigned int h = 5381;
    const char *p = name;
    while (*p) {
        h = ((h << 5) + h) + (unsigned char)*p;
        p++;
    }
    return 16384 + (h % 100000);
}

/* ----------------------------------------------------------------
 *  SET / SHOW / Transaction stubs
 * ---------------------------------------------------------------- */
static int handle_set(const char *sql, ResultSet *rs)
{
    if (!starts_with_i(sql, "SET"))
        return 0;

    /* SET SCHEMA <name> must go to the parser, not be stubbed */
    {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "SCHEMA", 6) == 0 &&
            (isspace((unsigned char)p[6]) || p[6] == '\0'))
            return 0;  /* let parser handle it */
    }

    /* SET max_connections = N */
    {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "max_connections", 15) == 0) {
            p += 15;
            while (*p && (isspace((unsigned char)*p) || *p == '=' || *p == '\'')) p++;
            int val = atoi(p);
            if (val > 0) {
                set_max_connections(val);
                result_init(rs);
                sprintf(rs->command_tag, "SET");
                return 1;
            }
        }
    }

    result_init(rs);
    strcpy(rs->command_tag, "SET");
    return 1;
}

static int handle_show(const char *sql, ResultSet *rs)
{
    if (!starts_with_i(sql, "SHOW"))
        return 0;
    result_init(rs);
    rs->is_select = 1;
    result_add_column(rs, "setting", PG_OID_TEXT);

    int row = result_add_row(rs);
    if (stristr_found(sql, "max_connections")) {
        char buf[32];
        sprintf(buf, "%d", get_max_connections());
        result_set_field(rs, row, 0, buf);
    } else if (stristr_found(sql, "active_connections")) {
        char buf[32];
        sprintf(buf, "%d", get_active_connections());
        result_set_field(rs, row, 0, buf);
    } else if (stristr_found(sql, "transaction_isolation") || stristr_found(sql, "transaction isolation"))
        result_set_field(rs, row, 0, "read committed");
    else if (stristr_found(sql, "server_version"))
        result_set_field(rs, row, 0, "15.0 (EvoSQL)");
    else if (stristr_found(sql, "max_identifier_length"))
        result_set_field(rs, row, 0, "63");
    else if (stristr_found(sql, "standard_conforming_strings"))
        result_set_field(rs, row, 0, "on");
    else if (stristr_found(sql, "search_path"))
        result_set_field(rs, row, 0, "\"$user\", default");
    else
        result_set_field(rs, row, 0, "");

    sprintf(rs->command_tag, "SHOW");
    return 1;
}

static int handle_transaction(const char *sql, ResultSet *rs)
{
    result_init(rs);

    if (starts_with_i(sql, "BEGIN")) {
        strcpy(rs->command_tag, "BEGIN");
        return 1;
    }
    if (starts_with_i(sql, "COMMIT")) {
        strcpy(rs->command_tag, "COMMIT");
        return 1;
    }
    if (starts_with_i(sql, "ROLLBACK")) {
        strcpy(rs->command_tag, "ROLLBACK");
        return 1;
    }
    if (starts_with_i(sql, "DISCARD")) {
        strcpy(rs->command_tag, "DISCARD ALL");
        return 1;
    }
    if (starts_with_i(sql, "DEALLOCATE")) {
        strcpy(rs->command_tag, "DEALLOCATE");
        return 1;
    }
    if (starts_with_i(sql, "CLOSE")) {
        strcpy(rs->command_tag, "CLOSE CURSOR");
        return 1;
    }
    if (starts_with_i(sql, "RESET")) {
        strcpy(rs->command_tag, "RESET");
        return 1;
    }
    if (starts_with_i(sql, "LISTEN")) {
        strcpy(rs->command_tag, "LISTEN");
        return 1;
    }
    if (starts_with_i(sql, "UNLISTEN")) {
        strcpy(rs->command_tag, "UNLISTEN");
        return 1;
    }
    return 0;
}

/* Check if SQL references a pg_catalog system table — used to prevent
   builtin function handlers from intercepting complex pg_catalog queries
   that happen to contain function calls like format_type(), pg_get_expr() */
static int has_pg_table_ref(const char *sql)
{
    return stristr_found(sql, "pg_class") ||
           stristr_found(sql, "pg_type") ||
           stristr_found(sql, "pg_attribute") ||
           stristr_found(sql, "pg_namespace") ||
           stristr_found(sql, "pg_database") ||
           stristr_found(sql, "pg_proc") ||
           stristr_found(sql, "pg_constraint") ||
           stristr_found(sql, "pg_depend");
}

/* ----------------------------------------------------------------
 *  SELECT version(), current_database(), etc.
 * ---------------------------------------------------------------- */
static int handle_builtin_functions(const char *sql, ResultSet *rs)
{
    result_init(rs);
    rs->is_select = 1;

    if (stristr_found(sql, "version()")) {
        result_add_column(rs, "version", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0,
            "PostgreSQL 15.0 (EvoSQL 1.0 - Evolution Database Engine)");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    if (stristr_found(sql, "current_database()")) {
        result_add_column(rs, "current_database", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, db_get_current_database());
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* Combined: current_schema + session_user/current_user */
    if (stristr_found(sql, "current_schema") &&
        (stristr_found(sql, "session_user") || stristr_found(sql, "current_user"))) {
        result_add_column(rs, "current_schema", PG_OID_TEXT);
        result_add_column(rs, "current_user", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, db_get_current_schema());
        result_set_field(rs, row, 1, "evosql");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    if (stristr_found(sql, "current_schema")) {
        result_add_column(rs, "current_schema", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, db_get_current_schema());
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    if (stristr_found(sql, "current_user") || stristr_found(sql, "session_user")) {
        result_add_column(rs, "current_user", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "evosql");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    if (stristr_found(sql, "inet_server_port()")) {
        result_add_column(rs, "inet_server_port", PG_OID_INT4);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "5433");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* current_setting(...) — JDBC driver sends during init */
    if (stristr_found(sql, "current_setting")) {
        result_add_column(rs, "current_setting", PG_OID_TEXT);
        int row = result_add_row(rs);
        if (stristr_found(sql, "server_version_num"))
            result_set_field(rs, row, 0, "150000");
        else if (stristr_found(sql, "server_version"))
            result_set_field(rs, row, 0, "15.0 (EvoSQL)");
        else if (stristr_found(sql, "max_identifier_length"))
            result_set_field(rs, row, 0, "63");
        else if (stristr_found(sql, "transaction_isolation"))
            result_set_field(rs, row, 0, "read committed");
        else
            result_set_field(rs, row, 0, "");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* current_schemas(...) — JDBC driver may query this */
    if (stristr_found(sql, "current_schemas")) {
        result_add_column(rs, "current_schemas", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "{pg_catalog,default}");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* obj_description(...), col_description(...), shobj_description(...) */
    if ((stristr_found(sql, "obj_description") ||
         stristr_found(sql, "col_description") ||
         stristr_found(sql, "shobj_description")) &&
        !has_pg_table_ref(sql)) {
        result_add_column(rs, "description", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_null(rs, row, 0);
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* format_type(...) */
    if (stristr_found(sql, "format_type") && !has_pg_table_ref(sql)) {
        result_add_column(rs, "format_type", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "text");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* pg_get_userbyid(...) */
    if (stristr_found(sql, "pg_get_userbyid") && !has_pg_table_ref(sql)) {
        result_add_column(rs, "pg_get_userbyid", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "evosql");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* pg_encoding_to_char(...) */
    if (stristr_found(sql, "pg_encoding_to_char") && !has_pg_table_ref(sql)) {
        result_add_column(rs, "pg_encoding_to_char", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "UTF8");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* has_table_privilege, has_schema_privilege, has_column_privileges, etc. */
    if ((stristr_found(sql, "has_table_privilege") ||
         stristr_found(sql, "has_schema_privilege") ||
         stristr_found(sql, "has_database_privilege") ||
         stristr_found(sql, "has_column_privilege")) &&
        !has_pg_table_ref(sql)) {
        result_add_column(rs, "privilege", PG_OID_BOOL);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "t");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* pg_get_expr(...) */
    if (stristr_found(sql, "pg_get_expr") && !has_pg_table_ref(sql)) {
        result_add_column(rs, "pg_get_expr", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_null(rs, row, 0);
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* array_to_string, string_to_array — common utility functions */
    if ((stristr_found(sql, "array_to_string") ||
         stristr_found(sql, "string_to_array")) &&
        !has_pg_table_ref(sql)) {
        result_add_column(rs, "result", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "");
        sprintf(rs->command_tag, "SELECT 1");
        return 1;
    }

    /* SELECT 1 — connection test / keepalive */
    {
        const char *p = sql;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "SELECT", 6) == 0) {
            p += 6;
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p == '1') {
                /* Make sure there's nothing meaningful after the '1'
                   (just optional whitespace / semicolon / end-of-string).
                   Otherwise queries like "SELECT 1 << 4" would be caught. */
                const char *q = p + 1;
                while (*q && isspace((unsigned char)*q)) q++;
                if (*q == '\0' || *q == ';') {
                    result_add_column(rs, "?column?", PG_OID_INT4);
                    int row = result_add_row(rs);
                    result_set_field(rs, row, 0, "1");
                    sprintf(rs->command_tag, "SELECT 1");
                    return 1;
                }
            }
        }
    }

    return 0;
}

/* ----------------------------------------------------------------
 *  information_schema.tables
 * ---------------------------------------------------------------- */
int catalog_list_tables(ResultSet *rs)
{
    MetaIterator it;

    result_init(rs);
    rs->is_select = 1;

    result_add_column(rs, "table_catalog", PG_OID_TEXT);
    result_add_column(rs, "table_schema", PG_OID_TEXT);
    result_add_column(rs, "table_name", PG_OID_TEXT);
    result_add_column(rs, "table_type", PG_OID_TEXT);

    char _dbdir[1024];
    snprintf(_dbdir, sizeof(_dbdir), "%s/%s/%s", db_get_root(), db_get_current_database(), db_get_current_schema());
    meta_iter_open(&it, _dbdir);
    int count = 0;
    while (meta_iter_next(&it)) {
        /* Strip .meta extension to get table name */
        char tblName[256];
        strncpy(tblName, it.current_name, sizeof(tblName) - 1);
        tblName[sizeof(tblName) - 1] = '\0';
        char *dot = strstr(tblName, ".meta");
        if (dot) *dot = '\0';

        int row = result_add_row(rs);
        if (row < 0) break;
        result_set_field(rs, row, 0, "evosql");
        result_set_field(rs, row, 1, "default");
        result_set_field(rs, row, 2, tblName);
        result_set_field(rs, row, 3, "BASE TABLE");
        count++;
    }
    meta_iter_close(&it);

    sprintf(rs->command_tag, "SELECT %d", count);
    return 1;
}

/* ----------------------------------------------------------------
 *  information_schema.columns
 * ---------------------------------------------------------------- */
int catalog_list_columns(const char *table_name, ResultSet *rs)
{
    char metaFile[1024], line[1024];
    FILE *fp;
    int ordinal = 0;
    int colTypes[64];
    int numTypes;

    result_init(rs);
    rs->is_select = 1;

    result_add_column(rs, "table_catalog", PG_OID_TEXT);
    result_add_column(rs, "table_schema", PG_OID_TEXT);
    result_add_column(rs, "table_name", PG_OID_TEXT);
    result_add_column(rs, "column_name", PG_OID_TEXT);
    result_add_column(rs, "ordinal_position", PG_OID_INT4);
    result_add_column(rs, "data_type", PG_OID_TEXT);
    result_add_column(rs, "is_nullable", PG_OID_TEXT);

    char _fullPath[1024];
    db_table_path(table_name, _fullPath, sizeof(_fullPath));
    numTypes = ReadColumnTypes(_fullPath, colTypes, 64);

    int nullFlags[64];
    int numNullFlags = ReadNullFlags(_fullPath, nullFlags, 64);

    sprintf(metaFile, "%s.meta", _fullPath);
    fp = fopen(metaFile, "r");
    if (!fp) {
        sprintf(rs->command_tag, "SELECT 0");
        return 1;
    }

    if (fgets(line, sizeof(line), fp)) {
        char *col;
        line[strcspn(line, "\n")] = '\0';
        col = strtok(line, ";");
        while (col) {
            ordinal++;
            int row = result_add_row(rs);
            if (row < 0) break;

            char ordStr[16];
            sprintf(ordStr, "%d", ordinal);

            const char *typeName = (ordinal - 1 < numTypes)
                ? evo_type_to_name(colTypes[ordinal - 1])
                : "text";

            result_set_field(rs, row, 0, "evosql");
            result_set_field(rs, row, 1, "default");
            result_set_field(rs, row, 2, table_name);
            result_set_field(rs, row, 3, col);
            result_set_field(rs, row, 4, ordStr);
            result_set_field(rs, row, 5, typeName);
            result_set_field(rs, row, 6,
                (ordinal - 1 < numNullFlags && nullFlags[ordinal - 1]) ? "NO" : "YES");

            col = strtok(NULL, ";");
        }
    }
    fclose(fp);
    sprintf(rs->command_tag, "SELECT %d", ordinal);
    return 1;
}

/* ----------------------------------------------------------------
 *  All columns across all tables
 * ---------------------------------------------------------------- */
static int catalog_list_all_columns(ResultSet *rs)
{
    MetaIterator it;
    int total = 0;

    result_init(rs);
    rs->is_select = 1;

    result_add_column(rs, "table_catalog", PG_OID_TEXT);
    result_add_column(rs, "table_schema", PG_OID_TEXT);
    result_add_column(rs, "table_name", PG_OID_TEXT);
    result_add_column(rs, "column_name", PG_OID_TEXT);
    result_add_column(rs, "ordinal_position", PG_OID_INT4);
    result_add_column(rs, "data_type", PG_OID_TEXT);
    result_add_column(rs, "is_nullable", PG_OID_TEXT);

    char _dbdir2[1024];
    snprintf(_dbdir2, sizeof(_dbdir2), "%s/%s/%s", db_get_root(), db_get_current_database(), db_get_current_schema());
    meta_iter_open(&it, _dbdir2);
    while (meta_iter_next(&it)) {
        char tblName[256], metaFile[1024], line[1024];
        strncpy(tblName, it.current_name, sizeof(tblName) - 1);
        tblName[sizeof(tblName) - 1] = '\0';
        char *dot = strstr(tblName, ".meta");
        if (dot) *dot = '\0';

        char _fp2[1024];
        db_table_path(tblName, _fp2, sizeof(_fp2));
        sprintf(metaFile, "%s.meta", _fp2);
        FILE *fp = fopen(metaFile, "r");
        if (!fp) continue;

        /* Read type encodings for this table */
        int colTypes[64];
        int numColTypes = ReadColumnTypes(_fp2, colTypes, 64);

        /* Read NOT NULL flags for this table */
        int nullFlags[64];
        int numNullFlags = ReadNullFlags(_fp2, nullFlags, 64);

        if (fgets(line, sizeof(line), fp)) {
            char *col;
            int ordinal = 0;
            line[strcspn(line, "\n")] = '\0';
            col = strtok(line, ";");
            while (col) {
                ordinal++;
                int row = result_add_row(rs);
                if (row < 0) break;

                char ordStr[16];
                sprintf(ordStr, "%d", ordinal);

                const char *typeName = (ordinal - 1 < numColTypes)
                    ? evo_type_to_name(colTypes[ordinal - 1])
                    : "text";

                result_set_field(rs, row, 0, "evosql");
                result_set_field(rs, row, 1, "default");
                result_set_field(rs, row, 2, tblName);
                result_set_field(rs, row, 3, col);
                result_set_field(rs, row, 4, ordStr);
                result_set_field(rs, row, 5, typeName);
                result_set_field(rs, row, 6,
                    (ordinal - 1 < numNullFlags && nullFlags[ordinal - 1]) ? "NO" : "YES");
                total++;

                col = strtok(NULL, ";");
            }
        }
        fclose(fp);
    }
    meta_iter_close(&it);

    sprintf(rs->command_tag, "SELECT %d", total);
    return 1;
}

/* ----------------------------------------------------------------
 *  pg_catalog mock queries
 * ---------------------------------------------------------------- */
static int handle_pg_catalog(const char *sql, ResultSet *rs)
{
    result_init(rs);
    rs->is_select = 1;

    /* pg_database — DBeaver queries this for database list.
     * Read dynamically from root/databases file.
     * DBeaver issues:
     *   SELECT db.oid,db.* FROM pg_catalog.pg_database db WHERE datname=$1
     * The db.* expands to ALL pg_database columns, so we must provide them. */
    if (stristr_found(sql, "pg_database")) {
        /* PostgreSQL pg_database columns */
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "datname", PG_OID_TEXT);
        result_add_column(rs, "datdba", PG_OID_INT4);
        result_add_column(rs, "encoding", PG_OID_INT4);
        result_add_column(rs, "datlocprovider", PG_OID_BPCHAR);
        result_add_column(rs, "datistemplate", PG_OID_BOOL);
        result_add_column(rs, "datallowconn", PG_OID_BOOL);
        result_add_column(rs, "datconnlimit", PG_OID_INT4);
        result_add_column(rs, "datfrozenxid", PG_OID_INT4);
        result_add_column(rs, "datminmxid", PG_OID_INT4);
        result_add_column(rs, "dattablespace", PG_OID_INT4);
        result_add_column(rs, "datcollate", PG_OID_TEXT);
        result_add_column(rs, "datctype", PG_OID_TEXT);
        result_add_column(rs, "daticulocale", PG_OID_TEXT);
        result_add_column(rs, "daticurules", PG_OID_TEXT);
        result_add_column(rs, "datcollversion", PG_OID_TEXT);
        result_add_column(rs, "datacl", PG_OID_TEXT);

        /* Extract optional single-database filter.
         * DBeaver uses two patterns:
         *   1) WHERE datname=$1   (bind → WHERE datname='evosql')  — single db
         *   2) WHERE 1=1 AND datallowconn AND NOT datistemplate
         *      OR db.datname='evosql'                              — all dbs
         * We only filter when pattern is "WHERE datname=" or "WHERE datname =" 
         * i.e. datname is the primary WHERE condition. */
        char datname_filter[256] = {0};
        {
            const char *wpos = strcasestr_local(sql, "WHERE");
            if (wpos) {
                const char *after = wpos + 5;
                while (*after == ' ' || *after == '\t') after++;
                if (strncasecmp(after, "datname", 7) == 0) {
                    /* datname is right after WHERE — single-db filter */
                    const char *q = strchr(after, '\'');
                    if (q) {
                        q++;
                        int i = 0;
                        while (*q && *q != '\'' && i < 255)
                            datname_filter[i++] = *q++;
                        datname_filter[i] = '\0';
                    }
                }
                /* Otherwise (WHERE 1=1 AND datallowconn...) → no filter, show all */
            }
        }

        char dbfile[1024];
        snprintf(dbfile, sizeof(dbfile), "%s/databases", db_get_root());
        FILE *fp = fopen(dbfile, "r");
        int count = 0;
        if (fp) {
            char line[256];
            int oid_counter = 16384;
            while (fgets(line, sizeof(line), fp)) {
                line[strcspn(line, "\n\r")] = '\0';
                if (line[0] == '\0') continue;
                if (datname_filter[0] && strcasecmp(line, datname_filter) != 0) {
                    oid_counter++;
                    continue;
                }
                char oid_str[32];
                snprintf(oid_str, sizeof(oid_str), "%d", oid_counter++);
                int r = result_add_row(rs);
                result_set_field(rs, r, 0, oid_str);    /* oid */
                result_set_field(rs, r, 1, line);         /* datname */
                result_set_field(rs, r, 2, "10");         /* datdba */
                result_set_field(rs, r, 3, "6");          /* encoding (UTF8) */
                result_set_field(rs, r, 4, "c");          /* datlocprovider */
                result_set_field(rs, r, 5, "f");          /* datistemplate */
                result_set_field(rs, r, 6, "t");          /* datallowconn */
                result_set_field(rs, r, 7, "-1");         /* datconnlimit */
                result_set_field(rs, r, 8, "726");        /* datfrozenxid */
                result_set_field(rs, r, 9, "1");          /* datminmxid */
                result_set_field(rs, r, 10, "1663");      /* dattablespace */
                result_set_field(rs, r, 11, "en_US.UTF-8"); /* datcollate */
                result_set_field(rs, r, 12, "en_US.UTF-8"); /* datctype */
                /* daticulocale, daticurules, datcollversion, datacl → NULL */
                count++;
            }
            fclose(fp);
        }
        if (count == 0 && datname_filter[0] == '\0') {
            int r = result_add_row(rs);
            result_set_field(rs, r, 0, "16384");
            result_set_field(rs, r, 1, "evosql");
            result_set_field(rs, r, 2, "10");
            result_set_field(rs, r, 3, "6");
            result_set_field(rs, r, 4, "c");
            result_set_field(rs, r, 5, "f");
            result_set_field(rs, r, 6, "t");
            result_set_field(rs, r, 7, "-1");
            result_set_field(rs, r, 8, "726");
            result_set_field(rs, r, 9, "1");
            result_set_field(rs, r, 10, "1663");
            result_set_field(rs, r, 11, "en_US.UTF-8");
            result_set_field(rs, r, 12, "en_US.UTF-8");
            count = 1;
        }
        sprintf(rs->command_tag, "SELECT %d", count);
        return 1;
    }

    /* pg_namespace — schema list
     * Guard: skip if query's main target is pg_type, pg_class, or pg_attribute
     * (those queries reference pg_namespace in WHERE/subqueries)
     * Read user schemas dynamically from root/schemas file.
     * DBeaver issues:
     *   SELECT n.oid,n.*,d.description FROM pg_catalog.pg_namespace n
     *     LEFT OUTER JOIN pg_catalog.pg_description d ...
     */
    if ((stristr_found(sql, "pg_namespace") || stristr_found(sql, "pg_catalog.pg_namespace")) &&
        !stristr_found(sql, "pg_type") && !stristr_found(sql, "pg_class") &&
        !stristr_found(sql, "pg_attribute")) {
        /* n.oid (extra) + n.* columns + d.description from JOIN */
        result_add_column(rs, "oid", PG_OID_INT4);       /* n.oid */
        result_add_column(rs, "nspname", PG_OID_TEXT);
        result_add_column(rs, "nspowner", PG_OID_INT4);
        result_add_column(rs, "nspacl", PG_OID_TEXT);     /* n.* includes nspacl */
        result_add_column(rs, "description", PG_OID_TEXT); /* d.description */

        int count = 0;

        /* pg_catalog — system schema (required for type resolution) */
        int row0 = result_add_row(rs);
        result_set_field(rs, row0, 0, "11");
        result_set_field(rs, row0, 1, "pg_catalog");
        result_set_field(rs, row0, 2, "10");
        count++;

        /* information_schema — system schema */
        int row1 = result_add_row(rs);
        result_set_field(rs, row1, 0, "13060");
        result_set_field(rs, row1, 1, "information_schema");
        result_set_field(rs, row1, 2, "10");
        count++;

        /* Database schemas from per-database schemas file */
        char schfile[1024];
        snprintf(schfile, sizeof(schfile), "%s/%s/schemas", db_get_root(), db_get_current_database());
        FILE *fp = fopen(schfile, "r");
        if (fp) {
            char line[256];
            int oid_counter = 2200;
            while (fgets(line, sizeof(line), fp)) {
                line[strcspn(line, "\n\r")] = '\0';
                if (line[0] == '\0') continue;
                char oid_str[32];
                snprintf(oid_str, sizeof(oid_str), "%d", oid_counter++);
                int r = result_add_row(rs);
                result_set_field(rs, r, 0, oid_str);
                result_set_field(rs, r, 1, line);
                result_set_field(rs, r, 2, "10");
                count++;
            }
            fclose(fp);
        }

        sprintf(rs->command_tag, "SELECT %d", count);
        return 1;
    }

    /* pg_type — basic PostgreSQL types for DBeaver column type display */
    /* DBeaver queries:
     *   SELECT t.oid,t.*,c.relkind,format_type(nullif(t.typbasetype,0),t.typtypmod) as base_type_name
     *     FROM pg_type t LEFT JOIN pg_class c ...
     *   SELECT t.oid,t.*,format_type(nullif(t.typbasetype,0),t.typtypmod) as base_type_name
     *     FROM pg_catalog.pg_type t ...
     */
    if (stristr_found(sql, "pg_type")) {
        /* t.oid + t.* columns (PostgreSQL pg_type real columns) */
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "typname", PG_OID_TEXT);
        result_add_column(rs, "typnamespace", PG_OID_INT4);
        result_add_column(rs, "typowner", PG_OID_INT4);
        result_add_column(rs, "typlen", PG_OID_INT2);
        result_add_column(rs, "typbyval", PG_OID_BOOL);
        result_add_column(rs, "typtype", PG_OID_BPCHAR);
        result_add_column(rs, "typcategory", PG_OID_BPCHAR);
        result_add_column(rs, "typispreferred", PG_OID_BOOL);
        result_add_column(rs, "typisdefined", PG_OID_BOOL);
        result_add_column(rs, "typdelim", PG_OID_BPCHAR);
        result_add_column(rs, "typrelid", PG_OID_INT4);
        result_add_column(rs, "typelem", PG_OID_INT4);
        result_add_column(rs, "typarray", PG_OID_INT4);
        result_add_column(rs, "typinput", PG_OID_TEXT);
        result_add_column(rs, "typoutput", PG_OID_TEXT);
        result_add_column(rs, "typreceive", PG_OID_TEXT);
        result_add_column(rs, "typsend", PG_OID_TEXT);
        result_add_column(rs, "typmodin", PG_OID_TEXT);
        result_add_column(rs, "typmodout", PG_OID_TEXT);
        result_add_column(rs, "typanalyze", PG_OID_TEXT);
        result_add_column(rs, "typalign", PG_OID_BPCHAR);
        result_add_column(rs, "typstorage", PG_OID_BPCHAR);
        result_add_column(rs, "typnotnull", PG_OID_BOOL);
        result_add_column(rs, "typbasetype", PG_OID_INT4);
        result_add_column(rs, "typtypmod", PG_OID_INT4);
        result_add_column(rs, "typndims", PG_OID_INT4);
        result_add_column(rs, "typcollation", PG_OID_INT4);
        /* Extra columns from JOIN / computed */
        result_add_column(rs, "relkind", PG_OID_BPCHAR);
        result_add_column(rs, "base_type_name", PG_OID_TEXT);

        struct { const char *oid; const char *name; const char *len;
                 const char *typtype; const char *cat; } types[] = {
            {"16",   "bool",      "1",  "b", "B"},
            {"20",   "int8",      "8",  "b", "N"},
            {"21",   "int2",      "2",  "b", "N"},
            {"23",   "int4",      "4",  "b", "N"},
            {"25",   "text",      "-1", "b", "S"},
            {"700",  "float4",    "4",  "b", "N"},
            {"701",  "float8",    "8",  "b", "N"},
            {"1042", "bpchar",    "-1", "b", "S"},
            {"1043", "varchar",   "-1", "b", "S"},
            {"1082", "date",      "4",  "b", "D"},
            {"1114", "timestamp", "8",  "b", "D"},
            {"1700", "numeric",   "-1", "b", "N"},
            {"2950", "uuid",      "16", "b", "U"},
            {NULL, NULL, NULL, NULL, NULL}
        };

        int count = 0, i;
        for (i = 0; types[i].oid != NULL; i++) {
            int row = result_add_row(rs);
            if (row < 0) break;
            result_set_field(rs, row, 0, types[i].oid);    /* oid */
            result_set_field(rs, row, 1, types[i].name);   /* typname */
            result_set_field(rs, row, 2, "11");             /* typnamespace (pg_catalog=11) */
            result_set_field(rs, row, 3, "10");             /* typowner */
            result_set_field(rs, row, 4, types[i].len);     /* typlen */
            result_set_field(rs, row, 5, "t");              /* typbyval */
            result_set_field(rs, row, 6, types[i].typtype); /* typtype */
            result_set_field(rs, row, 7, types[i].cat);     /* typcategory */
            result_set_field(rs, row, 8, "f");              /* typispreferred */
            result_set_field(rs, row, 9, "t");              /* typisdefined */
            result_set_field(rs, row, 10, ",");             /* typdelim */
            result_set_field(rs, row, 11, "0");             /* typrelid */
            result_set_field(rs, row, 12, "0");             /* typelem */
            result_set_field(rs, row, 13, "0");             /* typarray */
            result_set_field(rs, row, 14, "textin");        /* typinput */
            result_set_field(rs, row, 15, "textout");       /* typoutput */
            result_set_field(rs, row, 16, "-");             /* typreceive */
            result_set_field(rs, row, 17, "-");             /* typsend */
            result_set_field(rs, row, 18, "-");             /* typmodin */
            result_set_field(rs, row, 19, "-");             /* typmodout */
            result_set_field(rs, row, 20, "-");             /* typanalyze */
            result_set_field(rs, row, 21, "i");             /* typalign */
            result_set_field(rs, row, 22, "p");             /* typstorage */
            result_set_field(rs, row, 23, "f");             /* typnotnull */
            result_set_field(rs, row, 24, "0");             /* typbasetype */
            result_set_field(rs, row, 25, "-1");            /* typtypmod */
            result_set_field(rs, row, 26, "0");             /* typndims */
            result_set_field(rs, row, 27, "0");             /* typcollation */
            result_set_null(rs, row, 28);                   /* relkind */
            result_set_null(rs, row, 29);                   /* base_type_name (null for base types) */
            count++;
        }

        sprintf(rs->command_tag, "SELECT %d", count);
        return 1;
    }

    /* pg_attribute — column information (DBeaver reads columns from here)
     * Must be checked BEFORE pg_class since pg_attribute queries often JOIN pg_class
     * Guard: skip if query's main target is pg_constraint
     * Columns match PostgreSQL 15 pg_attribute layout for DBeaver compatibility */
    if (stristr_found(sql, "pg_attribute") &&
        !stristr_found(sql, "pg_constraint")) {
        result_add_column(rs, "attrelid", PG_OID_INT4);      /* 0  */
        result_add_column(rs, "attname", PG_OID_TEXT);        /* 1  */
        result_add_column(rs, "atttypid", PG_OID_INT4);      /* 2  */
        result_add_column(rs, "attstattarget", PG_OID_INT2);  /* 3  */
        result_add_column(rs, "attlen", PG_OID_INT2);         /* 4  */
        result_add_column(rs, "attnum", PG_OID_INT2);         /* 5  */
        result_add_column(rs, "attndims", PG_OID_INT4);       /* 6  */
        result_add_column(rs, "attcacheoff", PG_OID_INT4);    /* 7  */
        result_add_column(rs, "atttypmod", PG_OID_INT4);      /* 8  */
        result_add_column(rs, "attbyval", PG_OID_BOOL);       /* 9  */
        result_add_column(rs, "attstorage", PG_OID_BPCHAR);   /* 10 */
        result_add_column(rs, "attalign", PG_OID_BPCHAR);     /* 11 */
        result_add_column(rs, "attnotnull", PG_OID_BOOL);     /* 12 */
        result_add_column(rs, "atthasdef", PG_OID_BOOL);      /* 13 */
        result_add_column(rs, "atthasmissing", PG_OID_BOOL);  /* 14 */
        result_add_column(rs, "attidentity", PG_OID_BPCHAR);  /* 15 */
        result_add_column(rs, "attgenerated", PG_OID_BPCHAR); /* 16 */
        result_add_column(rs, "attisdropped", PG_OID_BOOL);   /* 17 */
        result_add_column(rs, "attislocal", PG_OID_BOOL);     /* 18 */
        result_add_column(rs, "attinhcount", PG_OID_INT4);    /* 19 */
        result_add_column(rs, "attcollation", PG_OID_INT4);   /* 20 */
        /* Extra columns from JOINs in DBeaver query */
        result_add_column(rs, "relname", PG_OID_TEXT);        /* 21 */
        result_add_column(rs, "def_value", PG_OID_TEXT);      /* 22 */
        result_add_column(rs, "description", PG_OID_TEXT);    /* 23 */

        /* Scan .meta files — OID derived from table name for stability */
        MetaIterator mit;
        char _dbdir3[1024];
        snprintf(_dbdir3, sizeof(_dbdir3), "%s/%s/%s", db_get_root(), db_get_current_database(), db_get_current_schema());
        meta_iter_open(&mit, _dbdir3);
        int count = 0;
        while (meta_iter_next(&mit)) {
                char tblName[256];
                strncpy(tblName, mit.current_name, sizeof(tblName) - 1);
                tblName[sizeof(tblName) - 1] = '\0';
                char *dot = strstr(tblName, ".meta");
                if (dot) *dot = '\0';

                char metaPath[1024], line[2048], oidStr[16];
                char _fp3[1024];
                db_table_path(tblName, _fp3, sizeof(_fp3));
                sprintf(metaPath, "%s.meta", _fp3);
                sprintf(oidStr, "%u", stable_table_oid(tblName));

                /* Read type encodings for this table */
                int colTypes[64];
                int numColTypes = ReadColumnTypes(_fp3, colTypes, 64);

                /* Read NOT NULL flags for this table */
                int nullFlags[64];
                int numNullFlags = ReadNullFlags(_fp3, nullFlags, 64);

                FILE *fp = fopen(metaPath, "r");
                if (!fp) continue;

                if (fgets(line, sizeof(line), fp)) {
                    int attnum = 0;
                    line[strcspn(line, "\n")] = '\0';
                    char *col = strtok(line, ";");
                    while (col) {
                        attnum++;
                        int row = result_add_row(rs);
                        if (row < 0) break;
                        char numStr[16], typoidStr[16], attlenStr[16], typmodStr[16];
                        int typoid, attlen, typmod;
                        const char *byval, *storage;

                        sprintf(numStr, "%d", attnum);

                        if (attnum - 1 < numColTypes) {
                            typoid = evo_type_to_pg_oid(colTypes[attnum - 1]);
                            attlen = evo_type_to_attlen(colTypes[attnum - 1]);
                            typmod = evo_type_to_atttypmod(colTypes[attnum - 1]);
                            byval = (attlen > 0 && attlen <= 8) ? "t" : "f";
                            storage = (attlen < 0) ? "x" : "p";
                        } else {
                            typoid = 25;  /* text */
                            attlen = -1;
                            typmod = -1;
                            byval = "f";
                            storage = "x";
                        }
                        sprintf(typoidStr, "%d", typoid);
                        sprintf(attlenStr, "%d", attlen);
                        sprintf(typmodStr, "%d", typmod);

                        result_set_field(rs, row, 0, oidStr);      /* attrelid */
                        result_set_field(rs, row, 1, col);          /* attname */
                        result_set_field(rs, row, 2, typoidStr);    /* atttypid */
                        result_set_field(rs, row, 3, "-1");         /* attstattarget */
                        result_set_field(rs, row, 4, attlenStr);    /* attlen */
                        result_set_field(rs, row, 5, numStr);       /* attnum */
                        result_set_field(rs, row, 6, "0");          /* attndims */
                        result_set_field(rs, row, 7, "-1");         /* attcacheoff */
                        result_set_field(rs, row, 8, typmodStr);    /* atttypmod */
                        result_set_field(rs, row, 9, byval);        /* attbyval */
                        result_set_field(rs, row, 10, storage);     /* attstorage */
                        result_set_field(rs, row, 11, "i");         /* attalign */
                        result_set_field(rs, row, 12,
                            (attnum - 1 < numNullFlags && nullFlags[attnum - 1]) ? "t" : "f");     /* attnotnull */
                        result_set_field(rs, row, 13, "f");     /* atthasdef */
                        result_set_field(rs, row, 14, "f");     /* atthasmissing */
                        result_set_field(rs, row, 15, "");      /* attidentity (none) */
                        result_set_field(rs, row, 16, "");      /* attgenerated (none) */
                        result_set_field(rs, row, 17, "f");     /* attisdropped */
                        result_set_field(rs, row, 18, "t");     /* attislocal */
                        result_set_field(rs, row, 19, "0");     /* attinhcount */
                        result_set_field(rs, row, 20, "0");     /* attcollation */
                        result_set_field(rs, row, 21, tblName); /* relname */
                        result_set_null(rs, row, 22);           /* def_value */
                        result_set_null(rs, row, 23);           /* description */
                        count++;
                        col = strtok(NULL, ";");
                    }
                }
                fclose(fp);
        }
        meta_iter_close(&mit);
        sprintf(rs->command_tag, "SELECT %d", count);
        return 1;
    }

    /* pg_class — table listing (DBeaver reads tables from here)
     * Guard: skip if query's main target is pg_constraint or pg_depend
     * (those queries reference pg_class in JOINs/subqueries) */
    if (stristr_found(sql, "pg_class") &&
        !stristr_found(sql, "pg_constraint") &&
        !stristr_found(sql, "pg_depend")) {
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "relname", PG_OID_TEXT);
        result_add_column(rs, "relnamespace", PG_OID_INT4);
        result_add_column(rs, "reltype", PG_OID_INT4);
        result_add_column(rs, "reloftype", PG_OID_INT4);
        result_add_column(rs, "relowner", PG_OID_INT4);
        result_add_column(rs, "relam", PG_OID_INT4);
        result_add_column(rs, "reltablespace", PG_OID_INT4);
        result_add_column(rs, "relpages", PG_OID_INT4);
        result_add_column(rs, "reltuples", PG_OID_FLOAT4);
        result_add_column(rs, "relallvisible", PG_OID_INT4);
        result_add_column(rs, "reltoastrelid", PG_OID_INT4);
        result_add_column(rs, "relhasindex", PG_OID_BOOL);
        result_add_column(rs, "relisshared", PG_OID_BOOL);
        result_add_column(rs, "relpersistence", PG_OID_BPCHAR);
        result_add_column(rs, "relkind", PG_OID_BPCHAR);
        result_add_column(rs, "relnatts", PG_OID_INT2);
        result_add_column(rs, "relchecks", PG_OID_INT2);
        result_add_column(rs, "relhasrules", PG_OID_BOOL);
        result_add_column(rs, "relhastriggers", PG_OID_BOOL);
        result_add_column(rs, "relhassubclass", PG_OID_BOOL);
        result_add_column(rs, "relrowsecurity", PG_OID_BOOL);
        result_add_column(rs, "relforcerowsecurity", PG_OID_BOOL);
        result_add_column(rs, "relispopulated", PG_OID_BOOL);
        result_add_column(rs, "relreplident", PG_OID_BPCHAR);
        result_add_column(rs, "relispartition", PG_OID_BOOL);
        result_add_column(rs, "relrewrite", PG_OID_INT4);
        result_add_column(rs, "relfrozenxid", PG_OID_INT4);
        result_add_column(rs, "relminmxid", PG_OID_INT4);
        result_add_column(rs, "description", PG_OID_TEXT);
        result_add_column(rs, "partition_expr", PG_OID_TEXT);

        /* Scan .meta files to return actual tables */
        MetaIterator mit2;
        char _dbdir4[1024];
        snprintf(_dbdir4, sizeof(_dbdir4), "%s/%s/%s", db_get_root(), db_get_current_database(), db_get_current_schema());
        meta_iter_open(&mit2, _dbdir4);
        int count = 0;
        while (meta_iter_next(&mit2)) {
                char tblName[256];
                strncpy(tblName, mit2.current_name, sizeof(tblName) - 1);
                tblName[sizeof(tblName) - 1] = '\0';
                char *dot = strstr(tblName, ".meta");
                if (dot) *dot = '\0';

                /* Count columns from .meta file */
                char metaPath[1024], line[2048];
                int natts = 0;
                char _fp4[1024];
                db_table_path(tblName, _fp4, sizeof(_fp4));
                sprintf(metaPath, "%s.meta", _fp4);
                FILE *fp = fopen(metaPath, "r");
                if (fp) {
                    if (fgets(line, sizeof(line), fp)) {
                        char *p = line;
                        natts = 1;
                        while (*p) { if (*p == ';') natts++; p++; }
                    }
                    fclose(fp);
                }

                int row = result_add_row(rs);
                if (row < 0) break;

                char oidStr[16], nattsStr[16];
                unsigned int tableOid = stable_table_oid(tblName);
                sprintf(oidStr, "%u", tableOid);
                sprintf(nattsStr, "%d", natts);

                /* reltype: OID of the composite type for this table.
                 * Use table OID + 1 so DBeaver can resolve it. */
                char reltypeStr[16];
                sprintf(reltypeStr, "%u", tableOid + 1);

                result_set_field(rs, row, 0, oidStr);         /* oid */
                result_set_field(rs, row, 1, tblName);        /* relname */
                result_set_field(rs, row, 2, "2200");         /* relnamespace (public) */
                result_set_field(rs, row, 3, reltypeStr);     /* reltype */
                result_set_field(rs, row, 4, "0");            /* reloftype */
                result_set_field(rs, row, 5, "10");           /* relowner */
                result_set_field(rs, row, 6, "2");            /* relam (heap) */
                result_set_field(rs, row, 7, "0");            /* reltablespace */
                result_set_field(rs, row, 8, "0");            /* relpages */
                result_set_field(rs, row, 9, "-1");           /* reltuples */
                result_set_field(rs, row, 10, "0");           /* relallvisible */
                result_set_field(rs, row, 11, "0");           /* reltoastrelid */
                result_set_field(rs, row, 12, "f");           /* relhasindex */
                result_set_field(rs, row, 13, "f");           /* relisshared */
                result_set_field(rs, row, 14, "p");           /* relpersistence */
                result_set_field(rs, row, 15, "r");           /* relkind = regular table */
                result_set_field(rs, row, 16, nattsStr);      /* relnatts */
                result_set_field(rs, row, 17, "0");           /* relchecks */
                result_set_field(rs, row, 18, "f");           /* relhasrules */
                result_set_field(rs, row, 19, "f");           /* relhastriggers */
                result_set_field(rs, row, 20, "f");           /* relhassubclass */
                result_set_field(rs, row, 21, "f");           /* relrowsecurity */
                result_set_field(rs, row, 22, "f");           /* relforcerowsecurity */
                result_set_field(rs, row, 23, "t");           /* relispopulated */
                result_set_field(rs, row, 24, "d");           /* relreplident */
                result_set_field(rs, row, 25, "f");           /* relispartition */
                result_set_field(rs, row, 26, "0");           /* relrewrite */
                result_set_field(rs, row, 27, "0");           /* relfrozenxid */
                result_set_field(rs, row, 28, "0");           /* relminmxid */
                result_set_null(rs, row, 29);                 /* description */
                result_set_null(rs, row, 30);                 /* partition_expr */
                count++;
        }
        meta_iter_close(&mit2);
        sprintf(rs->command_tag, "SELECT %d", count);
        return 1;
    }

    /* pg_proc — functions */
    if (stristr_found(sql, "pg_proc")) {
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "proname", PG_OID_TEXT);
        sprintf(rs->command_tag, "SELECT 0");
        return 1;
    }

    /* pg_settings */
    if (stristr_found(sql, "pg_settings")) {
        result_add_column(rs, "name", PG_OID_TEXT);
        result_add_column(rs, "setting", PG_OID_TEXT);
        sprintf(rs->command_tag, "SELECT 0");
        return 1;
    }

    /* pg_constraint — DBeaver queries for table constraints */
    if (stristr_found(sql, "pg_constraint")) {
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "conname", PG_OID_TEXT);
        result_add_column(rs, "connamespace", PG_OID_INT4);
        result_add_column(rs, "contype", PG_OID_BPCHAR);
        result_add_column(rs, "condeferrable", PG_OID_BOOL);
        result_add_column(rs, "condeferred", PG_OID_BOOL);
        result_add_column(rs, "convalidated", PG_OID_BOOL);
        result_add_column(rs, "conrelid", PG_OID_INT4);
        result_add_column(rs, "contypid", PG_OID_INT4);
        result_add_column(rs, "conindid", PG_OID_INT4);
        result_add_column(rs, "conparentid", PG_OID_INT4);
        result_add_column(rs, "confrelid", PG_OID_INT4);
        result_add_column(rs, "confupdtype", PG_OID_BPCHAR);
        result_add_column(rs, "confdeltype", PG_OID_BPCHAR);
        result_add_column(rs, "confmatchtype", PG_OID_BPCHAR);
        result_add_column(rs, "conkey", PG_OID_TEXT);
        result_add_column(rs, "confkey", PG_OID_TEXT);
        result_add_column(rs, "description", PG_OID_TEXT);

        /* Scan .meta files for tables with primary keys */
        MetaIterator mit3;
        char _dbdir5[1024];
        snprintf(_dbdir5, sizeof(_dbdir5), "%s/%s/%s", db_get_root(), db_get_current_database(), db_get_current_schema());
        meta_iter_open(&mit3, _dbdir5);
        int count = 0;
        while (meta_iter_next(&mit3)) {
                char tblName[256];
                strncpy(tblName, mit3.current_name, sizeof(tblName) - 1);
                tblName[sizeof(tblName) - 1] = '\0';
                char *dot = strstr(tblName, ".meta");
                if (dot) *dot = '\0';

                char _fp5[1024];
                db_table_path(tblName, _fp5, sizeof(_fp5));
                int pkIndex = ReadPrimaryKey(_fp5);
                if (pkIndex < 0) continue; /* No primary key */

                int row = result_add_row(rs);
                if (row < 0) break;

                unsigned int tableOid = stable_table_oid(tblName);
                char oidStr[16], relidStr[16], conkeyStr[16], conname[256];
                sprintf(oidStr, "%u", tableOid + 10000);
                sprintf(relidStr, "%u", tableOid);
                sprintf(conkeyStr, "{%d}", pkIndex + 1); /* PostgreSQL uses 1-based */
                sprintf(conname, "%s_pkey", tblName);

                result_set_field(rs, row, 0, oidStr);       /* oid */
                result_set_field(rs, row, 1, conname);       /* conname */
                result_set_field(rs, row, 2, "2200");        /* connamespace (public) */
                result_set_field(rs, row, 3, "p");           /* contype = primary key */
                result_set_field(rs, row, 4, "f");           /* condeferrable */
                result_set_field(rs, row, 5, "f");           /* condeferred */
                result_set_field(rs, row, 6, "t");           /* convalidated */
                result_set_field(rs, row, 7, relidStr);      /* conrelid */
                result_set_field(rs, row, 8, "0");           /* contypid */
                result_set_field(rs, row, 9, "0");           /* conindid */
                result_set_field(rs, row, 10, "0");          /* conparentid */
                result_set_field(rs, row, 11, "0");          /* confrelid */
                result_set_field(rs, row, 12, " ");          /* confupdtype */
                result_set_field(rs, row, 13, " ");          /* confdeltype */
                result_set_field(rs, row, 14, " ");          /* confmatchtype */
                result_set_field(rs, row, 15, conkeyStr);    /* conkey */
                result_set_null(rs, row, 16);                /* confkey */
                result_set_null(rs, row, 17);                /* description */
                count++;
        }
        meta_iter_close(&mit3);
        sprintf(rs->command_tag, "SELECT %d", count);
        return 1;
    }

    /* pg_depend — DBeaver queries for object dependencies */
    if (stristr_found(sql, "pg_depend")) {
        result_add_column(rs, "classid", PG_OID_INT4);
        result_add_column(rs, "objid", PG_OID_INT4);
        result_add_column(rs, "objsubid", PG_OID_INT4);
        result_add_column(rs, "refclassid", PG_OID_INT4);
        result_add_column(rs, "refobjid", PG_OID_INT4);
        result_add_column(rs, "refobjsubid", PG_OID_INT4);
        result_add_column(rs, "deptype", PG_OID_BPCHAR);
        sprintf(rs->command_tag, "SELECT 0");
        return 1;
    }

    /* pg_get_keywords — DBeaver queries for reserved word list */
    if (stristr_found(sql, "pg_get_keywords")) {
        if (stristr_found(sql, "string_agg")) {
            result_add_column(rs, "string_agg", PG_OID_TEXT);
            int row = result_add_row(rs);
            result_set_field(rs, row, 0, "");
            sprintf(rs->command_tag, "SELECT 1");
        } else {
            result_add_column(rs, "word", PG_OID_TEXT);
            result_add_column(rs, "catcode", PG_OID_TEXT);
            result_add_column(rs, "catdesc", PG_OID_TEXT);
            sprintf(rs->command_tag, "SELECT 0");
        }
        return 1;
    }

    /* pg_am, pg_roles, etc. — return empty */
    if (stristr_found(sql, "pg_am") || stristr_found(sql, "pg_roles") ||
        stristr_found(sql, "pg_user") || stristr_found(sql, "pg_stat") ||
        stristr_found(sql, "pg_index") ||
        stristr_found(sql, "pg_description") ||
        stristr_found(sql, "pg_extension") || stristr_found(sql, "pg_tablespace") ||
        stristr_found(sql, "pg_shdescription") || stristr_found(sql, "pg_inherits") ||
        stristr_found(sql, "pg_trigger") || stristr_found(sql, "pg_rewrite") ||
        stristr_found(sql, "pg_enum") || stristr_found(sql, "pg_collation") ||
        stristr_found(sql, "pg_available_extensions") ||
        stristr_found(sql, "pg_matviews") || stristr_found(sql, "pg_sequences") ||
        stristr_found(sql, "pg_foreign") || stristr_found(sql, "pg_policy") ||
        stristr_found(sql, "pg_publication") || stristr_found(sql, "pg_subscription") ||
        stristr_found(sql, "pg_event_trigger") || stristr_found(sql, "pg_language") ||
        stristr_found(sql, "pg_conversion") || stristr_found(sql, "pg_opclass") ||
        stristr_found(sql, "pg_operator") || stristr_found(sql, "pg_aggregate") ||
        stristr_found(sql, "pg_cast") || stristr_found(sql, "pg_auth")) {
        result_add_column(rs, "oid", PG_OID_INT4);
        sprintf(rs->command_tag, "SELECT 0");
        return 1;
    }

    /* Before falling through to the catch-all, check if the SQL
     * references a user table via pg_catalog.<tablename> syntax.
     * If so, return 0 to let the query be handled by the EvoSQL parser. */
    {
        const char *pc = sql;
        while ((pc = strcasestr_local(pc, "pg_catalog.")) != NULL) {
            const char *tbl = pc + 11; /* skip "pg_catalog." */
            /* Extract table name */
            char candidate[256];
            int ci = 0;
            while (tbl[ci] && (isalnum((unsigned char)tbl[ci]) || tbl[ci] == '_') && ci < 255) {
                candidate[ci] = tbl[ci];
                ci++;
            }
            candidate[ci] = '\0';
            if (ci > 0) {
                /* Check if this is a user table (has .meta file) */
                char metaPath[1024];
                sprintf(metaPath, "%s.meta", candidate);
                FILE *fp = fopen(metaPath, "r");
                if (fp) {
                    fclose(fp);
                    /* This is a user table, not a system table */
                    return 0;
                }
            }
            pc = tbl; /* advance past this occurrence */
        }
    }

    /* Generic catch-all: any other pg_ query returns empty SELECT */
    result_add_column(rs, "oid", PG_OID_INT4);
    sprintf(rs->command_tag, "SELECT 0");
    return 1;
}

/* ----------------------------------------------------------------
 *  information_schema dispatch
 * ---------------------------------------------------------------- */
static int handle_information_schema(const char *sql, ResultSet *rs)
{
    if (stristr_found(sql, "information_schema.tables") ||
        stristr_found(sql, "information_schema.\"tables\"")) {
        return catalog_list_tables(rs);
    }

    if (stristr_found(sql, "information_schema.columns") ||
        stristr_found(sql, "information_schema.\"columns\"")) {
        return catalog_list_all_columns(rs);
    }

    if (stristr_found(sql, "information_schema.schemata")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "catalog_name", PG_OID_TEXT);
        result_add_column(rs, "schema_name", PG_OID_TEXT);
        result_add_column(rs, "schema_owner", PG_OID_TEXT);

        int row0 = result_add_row(rs);
        result_set_field(rs, row0, 0, "evosql");
        result_set_field(rs, row0, 1, "pg_catalog");
        result_set_field(rs, row0, 2, "evosql");

        int row1 = result_add_row(rs);
        result_set_field(rs, row1, 0, "evosql");
        result_set_field(rs, row1, 1, "default");
        result_set_field(rs, row1, 2, "evosql");

        int row2 = result_add_row(rs);
        result_set_field(rs, row2, 0, "evosql");
        result_set_field(rs, row2, 1, "information_schema");
        result_set_field(rs, row2, 2, "evosql");

        sprintf(rs->command_tag, "SELECT 3");
        return 1;
    }

    /* Other information_schema queries — return empty */
    if (stristr_found(sql, "information_schema.")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "result", PG_OID_TEXT);
        sprintf(rs->command_tag, "SELECT 0");
        return 1;
    }

    return 0;
}

/* ----------------------------------------------------------------
 *  Main dispatch
 * ---------------------------------------------------------------- */
int catalog_try_handle(const char *sql, ResultSet *rs)
{
    /* Empty or whitespace-only query */
    {
        const char *p = sql;
        while (*p && isspace((unsigned char)*p)) p++;
        if (*p == '\0' || *p == ';') {
            result_init(rs);
            strcpy(rs->command_tag, "");
            return 1;
        }
    }

    /* SET */
    if (handle_set(sql, rs)) return 1;

    /* SHOW */
    if (handle_show(sql, rs)) return 1;

    /* Transaction commands */
    if (handle_transaction(sql, rs)) return 1;

    /* Built-in functions: version(), current_database(), etc. */
    if (starts_with_i(sql, "SELECT") || starts_with_i(sql, "select")) {
        if (handle_builtin_functions(sql, rs)) return 1;
    }

    /* pg_catalog queries */
    if (stristr_found(sql, "pg_catalog") || stristr_found(sql, "pg_")) {
        if (handle_pg_catalog(sql, rs)) return 1;
    }

    /* information_schema queries */
    if (stristr_found(sql, "information_schema")) {
        if (handle_information_schema(sql, rs)) return 1;
    }

    /* Not a catalog query */
    return 0;
}
