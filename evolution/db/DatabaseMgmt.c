/*
 * DatabaseMgmt.c — Database / Schema management for EvolutionDB
 *
 * Root directory layout:
 *   root/
 *     databases          (text file listing database names, one per line)
 *     evosql/            (default database)
 *       schemas           (per-database schema registry, one per line)
 *       table.dat
 *       table.idx
 *       table.meta
 *       myschema/         (user-created schema directory)
 *     mydb/              (user-created database)
 *       schemas
 *       ...
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>

#ifdef _WIN32
#include <direct.h>
#define MKDIR(path) _mkdir(path)
#else
#include <sys/types.h>
#define MKDIR(path) mkdir(path, 0755)
#endif

#include "database.h"

#define ROOT_DIR "root"
#define DEFAULT_DB "evosql"

/* ----------------------------------------------------------------
 *  Ensure the root directory structure exists
 * ---------------------------------------------------------------- */
void db_ensure_root(void)
{
    char path[1024];
    FILE *fp;

    /* Create root/ */
    MKDIR(ROOT_DIR);

    /* Create root/databases file if not exists */
    snprintf(path, sizeof(path), "%s/databases", ROOT_DIR);
    fp = fopen(path, "r");
    if (!fp) {
        fp = fopen(path, "w");
        if (fp) {
            fprintf(fp, "%s\n", DEFAULT_DB);
            fclose(fp);
        }
    } else {
        fclose(fp);
    }

    /* Create default database directory root/evosql/ */
    snprintf(path, sizeof(path), "%s/%s", ROOT_DIR, DEFAULT_DB);
    MKDIR(path);

    /* Create per-database schemas file root/evosql/schemas if not exists */
    snprintf(path, sizeof(path), "%s/%s/schemas", ROOT_DIR, DEFAULT_DB);
    fp = fopen(path, "r");
    if (!fp) {
        fp = fopen(path, "w");
        if (fp) {
            fprintf(fp, "default\n");
            fclose(fp);
        }
    } else {
        fclose(fp);
    }

    /* Create default schema directory root/evosql/default/ */
    snprintf(path, sizeof(path), "%s/%s/default", ROOT_DIR, DEFAULT_DB);
    MKDIR(path);

    /* Set root path, default database and default schema */
    snprintf(g_dbRoot, sizeof(g_dbRoot), "%s", ROOT_DIR);
    strncpy(g_currentDatabase, DEFAULT_DB, sizeof(g_currentDatabase) - 1);
    strncpy(g_currentSchema, "default", sizeof(g_currentSchema) - 1);
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
 *  Build full path: root/<currentdb>/<currentschema>/<tableName>
 * ---------------------------------------------------------------- */
void db_table_path(const char *tableName, char *out, int outSize)
{
    snprintf(out, outSize, "%s/%s/%s/%s", g_dbRoot, g_currentDatabase, g_currentSchema, tableName);
}

/* ----------------------------------------------------------------
 *  Helper: check if name already in a file (one name per line)
 * ---------------------------------------------------------------- */
static int name_exists_in_file(const char *filepath, const char *name)
{
    FILE *fp = fopen(filepath, "r");
    char line[256];
    if (!fp) return 0;
    while (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n\r")] = '\0';
        if (strcasecmp(line, name) == 0) {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

/* ----------------------------------------------------------------
 *  Helper: append name to a file
 * ---------------------------------------------------------------- */
static void append_name_to_file(const char *filepath, const char *name)
{
    FILE *fp = fopen(filepath, "a");
    if (fp) {
        fprintf(fp, "%s\n", name);
        fclose(fp);
    }
}

/* ----------------------------------------------------------------
 *  CREATE DATABASE <name>
 * ---------------------------------------------------------------- */
int CreateDatabaseProcess(const char *name, int if_not_exists)
{
    char path[1024];
    char regFile[1024];

    /* Build directory path */
    snprintf(path, sizeof(path), "%s/%s", g_dbRoot, name);

    /* Check if already registered */
    snprintf(regFile, sizeof(regFile), "%s/databases", g_dbRoot);
    if (name_exists_in_file(regFile, name)) {
        if (if_not_exists) return 0;  /* silently succeed */
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "database \"%s\" already exists", name);
        g_gui_error = 1;
        return -1;
    }

    /* Create directory */
    if (MKDIR(path) != 0 && errno != EEXIST) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "could not create database directory \"%s\"", name);
        g_gui_error = 1;
        return -1;
    }

    /* Register in databases file */
    append_name_to_file(regFile, name);

    /* Create per-database schemas file with 'default' schema */
    {
        char schPath[1024];
        snprintf(schPath, sizeof(schPath), "%s/schemas", path);
        FILE *sfp = fopen(schPath, "w");
        if (sfp) {
            fprintf(sfp, "default\n");
            fclose(sfp);
        }
    }

    /* Create default schema directory under new database */
    {
        char defSchDir[1024];
        snprintf(defSchDir, sizeof(defSchDir), "%s/default", path);
        MKDIR(defSchDir);
    }

    printf("CREATE DATABASE %s\n", name);
    return 0;
}

/* ----------------------------------------------------------------
 *  CREATE SCHEMA <name>
 * ---------------------------------------------------------------- */
int CreateSchemaProcess(const char *name, int if_not_exists)
{
    char path[1024];
    char regFile[1024];

    /* Build directory path under current database: root/<currentdb>/<schema> */
    snprintf(path, sizeof(path), "%s/%s/%s", g_dbRoot, g_currentDatabase, name);

    /* Check if already registered in per-database schemas file */
    snprintf(regFile, sizeof(regFile), "%s/%s/schemas", g_dbRoot, g_currentDatabase);
    if (name_exists_in_file(regFile, name)) {
        if (if_not_exists) return 0;  /* silently succeed */
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "schema \"%s\" already exists", name);
        g_gui_error = 1;
        return -1;
    }

    /* Create schema directory under current database */
    if (MKDIR(path) != 0 && errno != EEXIST) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "could not create schema directory \"%s\"", name);
        g_gui_error = 1;
        return -1;
    }

    /* Register in per-database schemas file */
    append_name_to_file(regFile, name);

    printf("CREATE SCHEMA %s (in database %s)\n", name, g_currentDatabase);
    return 0;
}

/* ----------------------------------------------------------------
 *  USE <database>  — switch the active database
 * ---------------------------------------------------------------- */
int UseDatabaseProcess(const char *name)
{
    char regFile[1024];
    char dbDir[1024];

    /* Check if database is registered */
    snprintf(regFile, sizeof(regFile), "%s/databases", g_dbRoot);
    if (!name_exists_in_file(regFile, name)) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "database \"%s\" does not exist", name);
        g_gui_error = 1;
        return -1;
    }

    /* Verify database directory exists */
    snprintf(dbDir, sizeof(dbDir), "%s/%s", g_dbRoot, name);
    {
        struct stat st;
        if (stat(dbDir, &st) != 0 || !(st.st_mode & S_IFDIR)) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "database directory \"%s\" not found", name);
            g_gui_error = 1;
            return -1;
        }
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
    char regFile[1024];
    char schDir[1024];

    /* Check if schema is registered in current database */
    snprintf(regFile, sizeof(regFile), "%s/%s/schemas", g_dbRoot, g_currentDatabase);
    if (!name_exists_in_file(regFile, name)) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "schema \"%s\" does not exist in database \"%s\"",
                 name, g_currentDatabase);
        g_gui_error = 1;
        return -1;
    }

    /* Verify schema directory exists */
    snprintf(schDir, sizeof(schDir), "%s/%s/%s", g_dbRoot, g_currentDatabase, name);
    {
        struct stat st;
        if (stat(schDir, &st) != 0 || !(st.st_mode & S_IFDIR)) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "schema directory \"%s\" not found", name);
            g_gui_error = 1;
            return -1;
        }
    }

    /* Switch active schema */
    db_set_current_schema(name);

    printf("SET SCHEMA %s\n", name);
    return 0;
}
