/*
 * catalog_internal.h — System Catalog for EvoSQL Unified Storage
 *
 * Stores all metadata (databases, schemas, tables, columns, indexes,
 * constraints, users, grants) in B+ trees within the unified storage file.
 * Replaces .meta, .indexes, databases, schemas, users, grants text files.
 *
 * Each catalog table = one B+ tree (key -> RowID).
 * Records stored as semicolon-delimited strings on slotted pages.
 */
#ifndef CATALOG_INTERNAL_H
#define CATALOG_INTERNAL_H

#include <stdint.h>
#include "page_mgr.h"
#include "slotted.h"
#include "btree2.h"

/* ----------------------------------------------------------------
 *  Constants
 * ---------------------------------------------------------------- */
#define CAT_MAX_COLUMNS     64
#define CAT_MAX_NAME_LEN    128
#define CAT_MAX_DEFAULT_LEN 256
#define CAT_MAX_HASH_LEN    512
#define CAT_MAX_KEY_LEN     255  /* matches BT2_MAX_KEY_LEN */
#define CAT_MAX_RECORD_LEN  2048

/* ----------------------------------------------------------------
 *  Descriptor structs — output of catalog queries
 * ---------------------------------------------------------------- */

typedef struct {
    uint32_t db_id;
    char     db_name[CAT_MAX_NAME_LEN];
} DatabaseDesc;

typedef struct {
    uint32_t schema_id;
    uint32_t db_id;
    char     schema_name[CAT_MAX_NAME_LEN];
} SchemaDesc;

typedef struct {
    uint32_t table_id;
    uint32_t schema_id;
    char     table_name[CAT_MAX_NAME_LEN];
    uint32_t pk_root_page;     /* root page of table's primary data B+ tree */
    uint32_t heap_page;        /* first slotted page for row storage */
    int      num_columns;
    int      pad_size;
    int      auto_inc_col;     /* -1 if none */
    int      auto_inc_counter;
    int      auto_inc_step;
    int      is_temporary;     /* 1 if CREATE TEMPORARY TABLE */
} TableDesc;

typedef struct {
    uint32_t table_id;
    int      col_ordinal;
    char     col_name[CAT_MAX_NAME_LEN];
    int      type_code;        /* typeVal / 10000 = family, % 10000 = size */
    int      is_not_null;
    int      is_unique;
    int      is_pk;
    char     default_val[CAT_MAX_DEFAULT_LEN];
} ColumnDesc;

typedef struct IndexDesc {
    uint32_t table_id;
    char     index_name[CAT_MAX_NAME_LEN];
    uint32_t root_page;
    char     col_list[CAT_MAX_NAME_LEN];   /* comma-separated column names */
    char     index_type;                    /* 'P' primary, 'U' unique, 'N' normal, 'H' hash, 'V' unique hash */
    char     expr_def[1024];               /* expression index: serialized RPN, empty if plain column */
} IndexDesc;

typedef struct {
    uint32_t table_id;
    int      ordinal;
    char     constraint_name[CAT_MAX_NAME_LEN]; /* user-defined or auto-generated name */
    char     constraint_type;  /* 'C' check, 'F' foreign key, 'P' primary, 'U' unique */
    char     definition[1024];
    uint32_t ref_table_id;     /* for FK, 0 otherwise */
    char     ref_columns[CAT_MAX_NAME_LEN];
    int      is_enabled;       /* 1=enabled (default), 0=disabled */
    int      is_validated;     /* 1=validated (default), 0=not validated */
} ConstraintDesc;

typedef struct {
    char username[CAT_MAX_NAME_LEN];
    char password_hash[CAT_MAX_HASH_LEN];
} UserDesc;

typedef struct {
    char username[CAT_MAX_NAME_LEN];
    int  scope_type;           /* 1=DATABASE, 2=SCHEMA, 3=TABLE */
    char scope_name[CAT_MAX_NAME_LEN];
    char privileges[CAT_MAX_NAME_LEN];   /* comma-separated or "ALL" */
    int  grant_option;
} GrantDesc;

/* ----------------------------------------------------------------
 *  Lifecycle
 * ---------------------------------------------------------------- */

/* Initialize the system catalog. On first run: creates B+ trees,
 * inserts default database/schema/admin user. On subsequent runs:
 * loads existing trees from file header.
 * Must be called after pgm_init(). Returns 0 on success, -1 on error. */
int  cat_init(void);

/* Flush and shutdown catalog. */
void cat_shutdown(void);

/* ----------------------------------------------------------------
 *  Database operations
 * ---------------------------------------------------------------- */
int cat_create_database(const char *name);
int cat_find_database(const char *name, DatabaseDesc *out);
int cat_drop_database(const char *name);
int cat_list_databases(DatabaseDesc *out, int max);

/* ----------------------------------------------------------------
 *  Schema operations
 * ---------------------------------------------------------------- */
int cat_create_schema(uint32_t db_id, const char *name);
int cat_find_schema(uint32_t db_id, const char *name, SchemaDesc *out);
int cat_drop_schema(uint32_t db_id, const char *name);
int cat_list_schemas(uint32_t db_id, SchemaDesc *out, int max);

/* ----------------------------------------------------------------
 *  Table operations
 * ---------------------------------------------------------------- */
int cat_create_table(uint32_t schema_id, const char *name,
                     const ColumnDesc *cols, int ncols,
                     int pad_size, int auto_inc_col,
                     int auto_inc_start, int auto_inc_step,
                     int is_temporary);
int cat_find_table(uint32_t schema_id, const char *name, TableDesc *out);
int cat_find_table_by_id(uint32_t table_id, TableDesc *out);
int cat_drop_table(uint32_t table_id);
int cat_update_auto_inc(uint32_t table_id, const char *table_name,
                        uint32_t schema_id, int new_counter);
int cat_update_heap_page(uint32_t table_id, const char *table_name,
                         uint32_t schema_id, uint32_t heap_page);
int cat_list_tables(uint32_t schema_id, TableDesc *out, int max);

/* ----------------------------------------------------------------
 *  Column operations
 * ---------------------------------------------------------------- */
int cat_find_columns(uint32_t table_id, ColumnDesc *out, int max);

/* ----------------------------------------------------------------
 *  Index operations
 * ---------------------------------------------------------------- */
int cat_create_index(uint32_t table_id, const char *name,
                     uint32_t root_page, const char *col_list,
                     char index_type);
int cat_create_index_ex(uint32_t table_id, const char *name,
                        uint32_t root_page, const char *col_list,
                        char index_type, const char *expr_def);
int cat_find_index(uint32_t table_id, const char *name, IndexDesc *out);
int cat_find_index_by_name(const char *name, IndexDesc *out);
int cat_list_indexes(uint32_t table_id, IndexDesc *out, int max);
int cat_drop_index(uint32_t table_id, const char *name);
int cat_update_index_root(uint32_t table_id, const char *name,
                          uint32_t new_root_page);

/* ----------------------------------------------------------------
 *  Constraint operations
 * ---------------------------------------------------------------- */
int cat_add_constraint(uint32_t table_id, char type, const char *name,
                       const char *definition,
                       uint32_t ref_table_id, const char *ref_columns);
int cat_add_constraint_ex(uint32_t table_id, char type, const char *name,
                          const char *definition,
                          uint32_t ref_table_id, const char *ref_columns,
                          int is_enabled, int is_validated);
int cat_list_constraints(uint32_t table_id, ConstraintDesc *out, int max);
int cat_find_constraint_by_name(uint32_t table_id, const char *name, ConstraintDesc *out);
int cat_drop_constraint(uint32_t table_id, int ordinal);
int cat_update_constraint(uint32_t table_id, int ordinal, const ConstraintDesc *updated);

/* Find all FK constraints that reference a given table (by ref_table_id).
 * Scans all constraints in the catalog. Returns count found. */
int cat_list_referencing_fks(uint32_t ref_table_id, ConstraintDesc *out, int max);

/* ----------------------------------------------------------------
 *  User operations
 * ---------------------------------------------------------------- */
int cat_create_user(const char *username, const char *password_hash);
int cat_find_user(const char *username, UserDesc *out);
int cat_update_user(const char *username, const char *new_hash);
int cat_drop_user(const char *username);
int cat_list_users(UserDesc *out, int max);

/* ----------------------------------------------------------------
 *  Grant operations
 * ---------------------------------------------------------------- */
int cat_create_grant(const char *username, int scope_type,
                     const char *scope_name, const char *privileges,
                     int grant_option);
int cat_find_grant(const char *username, int scope_type,
                   const char *scope_name, GrantDesc *out);
int cat_drop_grant(const char *username, int scope_type,
                   const char *scope_name);
int cat_list_grants_for_user(const char *username, GrantDesc *out, int max);
int cat_drop_all_grants_for_user(const char *username);

/* ----------------------------------------------------------------
 *  Convenience
 * ---------------------------------------------------------------- */

/* Three-level lookup: database -> schema -> table.
 * Returns 0 on success, -1 if any level fails. */
int cat_resolve_table(const char *db_name, const char *schema_name,
                      const char *table_name, TableDesc *out);

#endif /* CATALOG_INTERNAL_H */
