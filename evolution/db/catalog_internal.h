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
#include <time.h>
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

/* Shard type constants */
#define SHARD_NONE   0
#define SHARD_HASH   1
#define SHARD_RANGE  2

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
    int      is_temporary;     /* 0=normal, 1=LOCAL TEMPORARY, 2=GLOBAL TEMPORARY */
    int      on_commit_delete; /* GTT only: 1=ON COMMIT DELETE ROWS (default), 0=PRESERVE ROWS */
    uint32_t owner_node_id;   /* distributed: 0=local (default), >0=remote node */
    int      shard_type;       /* SHARD_NONE / SHARD_HASH / SHARD_RANGE */
    char     shard_key[CAT_MAX_NAME_LEN]; /* column name used for sharding */
    int      shard_count;      /* HASH: number of shards */
} TableDesc;

typedef struct {
    uint32_t table_id;
    int      shard_ordinal;          /* 0-based shard index */
    char     shard_name[CAT_MAX_NAME_LEN];
    int      owner_node_id;
    char     range_bound[256];       /* RANGE: upper bound, "" = MAXVALUE */
} ShardDesc;

typedef struct {
    uint32_t table_id;
    int      col_ordinal;
    char     col_name[CAT_MAX_NAME_LEN];
    int      type_code;        /* typeVal / 10000 = family, % 10000 = size */
    int      is_not_null;
    int      is_unique;
    int      is_pk;
    char     default_val[CAT_MAX_DEFAULT_LEN];
    int      generated_mode;   /* GENMODE_NONE / GENMODE_STORED / GENMODE_VIRTUAL */
    char     generated_expr[512]; /* serialized RPN expression */
    int      is_dropped;      /* 1 = column dropped (lazy placeholder) */
} ColumnDesc;

#define GENMODE_NONE    0
#define GENMODE_STORED  1
#define GENMODE_VIRTUAL 2

/* Index readiness state */
#define IDX_BUILDING  0   /* CONCURRENTLY build in progress */
#define IDX_READY     1   /* ready for query planner */

typedef struct IndexDesc {
    uint32_t table_id;
    char     index_name[CAT_MAX_NAME_LEN];
    uint32_t root_page;
    char     col_list[CAT_MAX_NAME_LEN];   /* comma-separated column names */
    char     index_type;                    /* 'P' primary, 'U' unique, 'N' normal, 'H' hash, 'V' unique hash */
    char     expr_def[1024];               /* expression index: serialized RPN, empty if plain column */
    int      is_ready;                     /* IDX_BUILDING or IDX_READY */
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

typedef struct {
    uint32_t view_id;
    uint32_t db_id;
    uint32_t schema_id;
    char     view_name[CAT_MAX_NAME_LEN];
    char     view_sql[4096];
    int      check_option;   /* 0=none, 1=CASCADED, 2=LOCAL */
} ViewDesc;

typedef struct {
    uint32_t proc_id;
    uint32_t db_id;
    uint32_t schema_id;
    char     proc_name[CAT_MAX_NAME_LEN];
    char     param_list[1024];   /* "p1 INT,p2 VARCHAR(50)" */
    char     return_type[64];    /* empty for procedures */
    int      is_function;        /* 0=PROCEDURE, 1=FUNCTION */
    char     body[8192];         /* raw SQL between BEGIN...END */
} ProcedureDesc;

/* ----------------------------------------------------------------
 *  Lifecycle
 * ---------------------------------------------------------------- */

/* Initialize the system catalog. On first run: creates B+ trees,
 * inserts default database/schema/admin user. On subsequent runs:
 * loads existing trees from file header.
 * Must be called after pgm_init(). Returns 0 on success, -1 on error. */
int  cat_init(void);

/* Thread-safe catalog locking — callers wrap catalog access sequences.
 * Use when multiple catalog calls must be atomic (e.g., resolve table). */
void cat_lock(void);
void cat_unlock(void);

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
                     int is_temporary, int on_commit_delete);
int cat_find_table(uint32_t schema_id, const char *name, TableDesc *out);
int cat_find_table_by_id(uint32_t table_id, TableDesc *out);
int cat_rename_table(uint32_t table_id, uint32_t schema_id,
                     const char *old_name, const char *new_name);
int cat_drop_table(uint32_t table_id);
int cat_update_auto_inc(uint32_t table_id, const char *table_name,
                        uint32_t schema_id, int new_counter);
int cat_update_heap_page(uint32_t table_id, const char *table_name,
                         uint32_t schema_id, uint32_t heap_page);
int cat_update_pk_root(uint32_t table_id, const char *table_name,
                       uint32_t schema_id, uint32_t pk_root_page);
int cat_list_tables(uint32_t schema_id, TableDesc *out, int max);

/* Update owner_node_id for distributed table placement. */
int cat_update_owner_node(uint32_t table_id, const char *table_name,
                          uint32_t schema_id, uint32_t owner_node_id);

/* Update shard metadata for a table. */
int cat_update_shard_info(uint32_t table_id, const char *table_name,
                          uint32_t schema_id, int shard_type,
                          const char *shard_key, int shard_count);

/* ----------------------------------------------------------------
 *  Shard operations (CAT_SYS_SHARDS)
 * ---------------------------------------------------------------- */
int cat_create_shard(const ShardDesc *sd);
int cat_list_shards(uint32_t table_id, ShardDesc *out, int max);
int cat_find_shard(uint32_t table_id, int ordinal, ShardDesc *out);
int cat_drop_shards(uint32_t table_id);
int cat_update_shard_owner(uint32_t table_id, int ordinal, int new_owner);

/* ----------------------------------------------------------------
 *  Column operations
 * ---------------------------------------------------------------- */
int cat_find_columns(uint32_t table_id, ColumnDesc *out, int max);
int cat_add_column(uint32_t table_id, const ColumnDesc *col);
int cat_drop_column(uint32_t table_id, int col_ordinal);
int cat_remove_dropped_columns(uint32_t table_id);
int cat_update_column(uint32_t table_id, int col_ordinal, const ColumnDesc *updated);
int cat_update_index_col_list(uint32_t table_id, const char *index_name, const char *new_col_list);
int cat_reorder_column(uint32_t table_id, int old_ordinal, int new_ordinal);
int cat_update_num_columns(uint32_t table_id, const char *table_name,
                           uint32_t schema_id, int new_count);

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
int cat_update_index_ready(uint32_t table_id, const char *index_name,
                           int is_ready);

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
 *  Table statistics (ANALYZE TABLE)
 * ---------------------------------------------------------------- */

typedef struct {
    uint32_t table_id;
    uint64_t row_count;
    uint32_t page_count;
    time_t   last_analyzed;
    uint64_t dml_since_analyze;   /* DML count since last ANALYZE */
    uint64_t dead_tuple_count;    /* estimated dead tuples from UPDATE/DELETE */
    uint32_t last_reclaim_xid;   /* XID of the last RECLAIM run */
    uint32_t frozen_xid;         /* oldest non-frozen XID in this table (0 = never frozen) */
} TableStatsDesc;

typedef struct {
    uint32_t table_id;
    char     col_name[CAT_MAX_NAME_LEN];
    uint64_t null_count;
    uint64_t distinct_count;
    char     min_value[256];
    char     max_value[256];
    int      avg_width;
} ColumnStatsDesc;

/* Store or update table-level statistics. */
int cat_store_table_stats(const TableStatsDesc *ts);

/* Retrieve table-level statistics. Returns 0 on success, -1 if not found. */
int cat_get_table_stats(uint32_t table_id, TableStatsDesc *out);

/* Store or update per-column statistics. */
int cat_store_column_stats(const ColumnStatsDesc *cs);

/* Retrieve per-column statistics. Returns 0 on success, -1 if not found. */
int cat_get_column_stats(uint32_t table_id, const char *col_name,
                         ColumnStatsDesc *out);

/* List all column stats for a table. Returns count found. */
int cat_list_column_stats(uint32_t table_id, ColumnStatsDesc *out, int max);

/* ----------------------------------------------------------------
 *  Index statistics (ANALYZE TABLE — per-index B+ tree stats)
 * ---------------------------------------------------------------- */

typedef struct {
    uint32_t table_id;
    char     index_name[CAT_MAX_NAME_LEN];
    int      tree_depth;
    uint32_t leaf_pages;
    uint64_t total_entries;
    int      avg_entries_per_leaf;
} IndexStatsDesc;

/* Store or update per-index statistics. */
int cat_store_index_stats(const IndexStatsDesc *ist);

/* Retrieve per-index statistics. Returns 0 on success, -1 if not found. */
int cat_get_index_stats(uint32_t table_id, const char *index_name,
                        IndexStatsDesc *out);

/* List all index stats for a table. Returns count found. */
int cat_list_index_stats(uint32_t table_id, IndexStatsDesc *out, int max);

/* Increment DML counter for auto-analyze tracking. */
int cat_increment_dml_counter(uint32_t table_id);

/* Increment dead tuple counter for a table (called after DELETE/UPDATE). */
int cat_increment_dead_tuples(uint32_t table_id, int count);

/* ----------------------------------------------------------------
 *  View operations
 * ---------------------------------------------------------------- */
int cat_create_view(uint32_t db_id, uint32_t schema_id,
                    const char *name, const char *sql);
int cat_find_view(uint32_t db_id, uint32_t schema_id,
                  const char *name, ViewDesc *out);
int cat_drop_view(uint32_t db_id, uint32_t schema_id, const char *name);
int cat_list_views(uint32_t schema_id, ViewDesc *out, int max);

/* ----------------------------------------------------------------
 *  Procedure / Function operations
 * ---------------------------------------------------------------- */
int cat_create_procedure(uint32_t db_id, uint32_t schema_id,
                         const char *name, const char *param_list,
                         const char *return_type, int is_function,
                         const char *body);
int cat_find_procedure(uint32_t db_id, uint32_t schema_id,
                       const char *name, ProcedureDesc *out);
int cat_drop_procedure(uint32_t db_id, uint32_t schema_id, const char *name);
int cat_list_procedures(uint32_t schema_id, ProcedureDesc *out, int max);

/* ----------------------------------------------------------------
 *  Convenience
 * ---------------------------------------------------------------- */

/* Three-level lookup: database -> schema -> table.
 * Returns 0 on success, -1 if any level fails. */
int cat_resolve_table(const char *db_name, const char *schema_name,
                      const char *table_name, TableDesc *out);

#endif /* CATALOG_INTERNAL_H */
