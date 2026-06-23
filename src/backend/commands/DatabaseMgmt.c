/*
 * DatabaseMgmt.c — Database / Schema management for EvolutionDB
 *
 * All metadata is stored in the unified page-based storage (evosql.db).
 * The root/ directory only contains the evosql.db binary file.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef _WIN32
#include <direct.h>
#define MKDIR(path) _mkdir(path)
#else
#include <sys/types.h>
#include <sys/stat.h>
#define MKDIR(path) mkdir(path, 0755)
#endif

#include "database.h"
#include "page_mgr.h"
#include "catalog_internal.h"

#define ROOT_DIR "root"
#define DEFAULT_DB "evosql"

/* Data directory holding evosql.db and the WAL. Defaults to ROOT_DIR ("root")
 * for backward compatibility; override with EVOSQL_DATA_DIR (or --data-dir,
 * which the adaptor exports into the environment before db_ensure_root). */
static const char *db_data_dir(void)
{
    const char *d = getenv("EVOSQL_DATA_DIR");
    return (d && *d) ? d : ROOT_DIR;
}

/* ----------------------------------------------------------------
 *  Ensure the root directory and unified storage exist
 * ---------------------------------------------------------------- */
void db_ensure_root(void)
{
    const char *root = db_data_dir();

    /* Create the data directory for evosql.db */
    MKDIR(root);

    /* Set root path */
    snprintf(g_dbRoot, sizeof(g_dbRoot), "%s", root);

    /* Initialize unified page-based storage */
    {
        char dbFile[1024];
        snprintf(dbFile, sizeof(dbFile), "%s/evosql.db", root);
        pgm_init(dbFile);  /* WAL replay happens inside pgm_init if needed */
        if (pgm_open_failed()) {
            /* The existing data file could not be opened/decrypted (corrupt
             * header or a wrong/missing encryption passphrase). Do NOT proceed
             * to cat_init/users/grants/hnsw — those read pages and would crash
             * on the unusable file. Bail now; server_init_ex() and main() both
             * consult pgm_open_failed() and FAIL CLOSED (exit before binding any
             * listener) rather than serve a database that could not be opened. */
            return;
        }
        cat_init();  /* Creates default db/schema/admin on first run */
    }

    /* Create initial admin user if not present */
    db_ensure_users();

    /* Create initial grants with admin superuser grant */
    db_ensure_grants();

    /* Rebuild in-memory HNSW (ANN) index graphs from the catalog. They are
     * not persisted, so the ORDER BY <=> / hnsw_knn fast paths depend on
     * this to survive a restart (without it they fall back to brute force
     * until each index is recreated). */
    hnsw_rebuild_all_from_catalog();
}

/* ----------------------------------------------------------------
 *  Get root path
 * ---------------------------------------------------------------- */
const char *db_get_root(void)
{
    return g_dbRoot;
}

/* ----------------------------------------------------------------
 *  Set current database
 * ---------------------------------------------------------------- */
void db_set_current_database(const char *name)
{
    strncpy(g_currentDatabase, name, sizeof(g_currentDatabase) - 1);
    g_currentDatabase[sizeof(g_currentDatabase) - 1] = '\0';
}

/* ----------------------------------------------------------------
 *  Get current database name
 * ---------------------------------------------------------------- */
const char *db_get_current_database(void)
{
    return g_currentDatabase;
}

/* ----------------------------------------------------------------
 *  Set current schema
 * ---------------------------------------------------------------- */
void db_set_current_schema(const char *name)
{
    strncpy(g_currentSchema, name, sizeof(g_currentSchema) - 1);
    g_currentSchema[sizeof(g_currentSchema) - 1] = '\0';
}

/* ----------------------------------------------------------------
 *  Get current schema name
 * ---------------------------------------------------------------- */
const char *db_get_current_schema(void)
{
    return g_currentSchema;
}

/* ----------------------------------------------------------------
 *  Task 93 — Row-Level Security
 *  Current session username, used by CURRENT_USER expressions and
 *  RLS policy enforcement. Populated by the session handlers at the
 *  same points that set the database/schema context.
 * ---------------------------------------------------------------- */
void db_set_current_user(const char *username)
{
    if (!g_qctx || !username) return;
    strncpy(g_qctx->currentUser, username, sizeof(g_qctx->currentUser) - 1);
    g_qctx->currentUser[sizeof(g_qctx->currentUser) - 1] = '\0';
}

const char *db_get_current_user(void)
{
    return (g_qctx && g_qctx->currentUser[0]) ? g_qctx->currentUser : "";
}

/* ----------------------------------------------------------------
 *  Build full path: root/<currentdb>/<currentschema>/<tableName>
 *  NOTE: Legacy path format kept for backward compatibility with
 *  tapi_basename() which strips the path to extract the table name.
 * ---------------------------------------------------------------- */
void db_table_path(const char *tableName, char *out, int outSize)
{
    snprintf(out, outSize, "%s/%s/%s/%s", g_dbRoot, g_currentDatabase, g_currentSchema, tableName);
}

/* ----------------------------------------------------------------
 *  Build extension path: root/<db>/<schema>/<table>.<ext>
 *  NOTE: Legacy format — only used for backward compatibility.
 * ---------------------------------------------------------------- */
int db_ext_path(const char *tableName, const char *ext, char *out, int outSize)
{
    int n = snprintf(out, outSize, "%s/%s/%s/%s.%s",
                     g_dbRoot, g_currentDatabase, g_currentSchema, tableName, ext);
    if (n < 0 || n >= outSize) {
        g_err.error = 1;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "path too long for table \"%s\" (need %d, have %d)",
                 tableName, n, outSize);
        strncpy(g_err.sqlstate, "E0001", sizeof(g_err.sqlstate) - 1);
        g_err.sqlstate[sizeof(g_err.sqlstate) - 1] = '\0';
        return -1;
    }
    return 0;
}

int db_meta_path(const char *tableName, char *out, int outSize)
{
    return db_ext_path(tableName, "meta", out, outSize);
}

int db_dat_path(const char *tableName, char *out, int outSize)
{
    return db_ext_path(tableName, "dat", out, outSize);
}

int db_idx_path(const char *tableName, char *out, int outSize)
{
    return db_ext_path(tableName, "idx", out, outSize);
}

/* ----------------------------------------------------------------
 *  CREATE DATABASE <name>
 * ---------------------------------------------------------------- */
int CreateDatabaseProcess(const char *name, int if_not_exists)
{
    pthread_mutex_lock(&g_metadata_lock);

    /* Check if already exists in catalog */
    DatabaseDesc existing;
    if (cat_find_database(name, &existing) == 0) {
        pthread_mutex_unlock(&g_metadata_lock);
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "database \"%s\" already exists", name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DUPLICATE_DATABASE);
        return -1;
    }

    /* Register in catalog */
    int db_id = cat_create_database(name);
    if (db_id <= 0) {
        pthread_mutex_unlock(&g_metadata_lock);
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not create database \"%s\"", name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
        return -1;
    }

    /* Create default schema in new database */
    cat_create_schema(db_id, "default");

    pthread_mutex_unlock(&g_metadata_lock);

    printf("CREATE DATABASE %s\n", name);
    return 0;
}

/* ----------------------------------------------------------------
 *  CREATE SCHEMA <name>
 * ---------------------------------------------------------------- */
int CreateSchemaProcess(const char *name, int if_not_exists)
{
    pthread_mutex_lock(&g_metadata_lock);

    /* Look up current database */
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) != 0) {
        pthread_mutex_unlock(&g_metadata_lock);
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current database \"%s\" not found", g_currentDatabase);
        g_err.error = 1;
        return -1;
    }

    /* Check if schema already exists */
    SchemaDesc existing;
    if (cat_find_schema(dbDesc.db_id, name, &existing) == 0) {
        pthread_mutex_unlock(&g_metadata_lock);
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "schema \"%s\" already exists", name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DUPLICATE_SCHEMA);
        return -1;
    }

    /* Register in catalog */
    cat_create_schema(dbDesc.db_id, name);

    pthread_mutex_unlock(&g_metadata_lock);

    printf("CREATE SCHEMA %s (in database %s)\n", name, g_currentDatabase);
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP DATABASE
 * ---------------------------------------------------------------- */
int DropDatabaseProcess(const char *name, int if_exists)
{
    DatabaseDesc dbDesc;
    if (cat_find_database(name, &dbDesc) != 0) {
        if (if_exists) {
            printf("DROP DATABASE\n");
            return 0;
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "database \"%s\" does not exist", name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("3D000");
        return -1;
    }

    /* Cannot drop current database */
    if (strcasecmp(name, g_currentDatabase) == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "cannot drop the currently open database \"%s\"", name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("55006");
        return -1;
    }

    /* Cascade: drop all schemas and their tables */
    SchemaDesc *schemas = NULL;
    int ns = cat_list_schemas_all(dbDesc.db_id, &schemas);
    if (ns < 0) ns = 0;
    for (int si = 0; si < ns; si++) {
        TableDesc *tables = NULL;
        int nt = cat_list_tables_all(schemas[si].schema_id, &tables);
        if (nt < 0) nt = 0;
        for (int ti = 0; ti < nt; ti++) {
            cat_drop_table(tables[ti].table_id);
        }
        free(tables);
        cat_drop_schema(dbDesc.db_id, schemas[si].schema_name);
    }
    free(schemas);
    cat_drop_database(name);

    printf("DROP DATABASE\n");
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP SCHEMA
 * ---------------------------------------------------------------- */
int DropSchemaProcess(const char *name, int if_exists)
{
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current database \"%s\" not found", g_currentDatabase);
        g_err.error = 1;
        return -1;
    }

    SchemaDesc schDesc;
    if (cat_find_schema(dbDesc.db_id, name, &schDesc) != 0) {
        if (if_exists) {
            printf("DROP SCHEMA\n");
            return 0;
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "schema \"%s\" does not exist", name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("3F000");
        return -1;
    }

    /* Cascade: drop all tables in schema */
    TableDesc *tables = NULL;
    int nt = cat_list_tables_all(schDesc.schema_id, &tables);
    if (nt < 0) nt = 0;
    for (int ti = 0; ti < nt; ti++) {
        cat_drop_table(tables[ti].table_id);
    }
    free(tables);
    cat_drop_schema(dbDesc.db_id, name);

    printf("DROP SCHEMA\n");
    return 0;
}

/* ----------------------------------------------------------------
 *  USE <database>  — switch the active database
 * ---------------------------------------------------------------- */
int UseDatabaseProcess(const char *name)
{
    /* Check if database exists in catalog */
    DatabaseDesc dbDesc;
    if (cat_find_database(name, &dbDesc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "database \"%s\" does not exist", name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_DATABASE);
        return -1;
    }

    /* Switch active database and reset schema to default */
    db_set_current_database(name);
    db_set_current_schema("default");

    printf("USE DATABASE %s\n", name);
    return 0;
}

/* ----------------------------------------------------------------
 *  SET SCHEMA <name>  — switch the active schema
 * ---------------------------------------------------------------- */
int SetSchemaProcess(const char *name)
{
    /* Look up current database */
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "database \"%s\" not found", g_currentDatabase);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_SCHEMA);
        return -1;
    }

    /* Check if schema exists in catalog */
    SchemaDesc schDesc;
    if (cat_find_schema(dbDesc.db_id, name, &schDesc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "schema \"%s\" does not exist in database \"%s\"",
                 name, g_currentDatabase);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_SCHEMA);
        return -1;
    }

    /* Switch active schema */
    db_set_current_schema(name);

    printf("SET SCHEMA %s\n", name);
    return 0;
}
