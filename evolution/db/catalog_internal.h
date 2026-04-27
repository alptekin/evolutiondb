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
#define CAT_MAX_COLUMNS     256
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
#define SHARD_NONE       0
#define SHARD_HASH       1
#define SHARD_RANGE      2
#define SHARD_PARTITION  3   /* Task 88: local RANGE partitioning (all partitions on owner_node_id=0) */

/* Task 88: ceiling on RANGE partitions per parent. The v1 partition
 * routing code pulls the full partition list into a stack array, so
 * the cap bounds both resource use and error behavior (no silent
 * truncation — CreatePartitionChild rejects the (MAX+1)th). */
#define EVO_MAX_PARTITIONS  1024

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
    uint32_t parent_table_id; /* Task 92: 0 = no parent; INHERITS sets this */
    uint8_t  rls_enabled;     /* Task 93: 1 = ROW LEVEL SECURITY enabled on this table */

    /* Transient schema-presence flags — populated by tapi_resolve(),
     * NOT serialized. Used by DML inner loops to skip catalog lookups
     * for features the table doesn't have. */
    uint8_t  has_triggers;
    uint8_t  has_secondary_indexes;
    /* Populated by tapi_probe_constraints (Phase 6.3). */
    uint8_t  has_check_constraints;
    uint8_t  has_fk_constraints_local;
    uint8_t  has_unique_constraints;
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
    char     index_type;                    /* 'P' primary, 'U' unique, 'N' normal, 'H' hash, 'V' unique hash, 'A' HNSW ANN (Task 202) */
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
    int  is_role;    /* 0=user (login), 1=role (no login) */
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
    int      is_materialized; /* 1 = materialized view (Task 87) */
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

typedef struct {
    uint32_t trigger_id;
    uint32_t table_id;
    uint32_t db_id;
    uint32_t schema_id;
    char     trigger_name[CAT_MAX_NAME_LEN];
    char     table_name[CAT_MAX_NAME_LEN];
    char     event;      /* 'I'=INSERT, 'U'=UPDATE, 'D'=DELETE */
    char     timing;     /* 'B'=BEFORE, 'A'=AFTER */
    int      enabled;    /* 1=enabled (default), 0=disabled */
    char     body[8192]; /* raw SQL between BEGIN...END */
} TriggerDesc;

typedef struct {
    uint32_t seq_id;
    uint32_t schema_id;
    char     seq_name[CAT_MAX_NAME_LEN];
    int64_t  current_value;
    int64_t  increment;
    int64_t  min_value;
    int64_t  max_value;
    int64_t  start_value;
    int      cycle;      /* 0=NO CYCLE, 1=CYCLE */
    int      is_called;  /* 0=start not yet consumed, 1=NEXTVAL called */
} SequenceDesc;

/* ----------------------------------------------------------------
 *  Row-Level Security (Task 93 — Feature #64)
 * ----------------------------------------------------------------
 * Policies attach to a table_id. Each policy decides a subset of rows
 * the session user may act on. USING expression filters reads/deletes/
 * update-candidates; WITH CHECK expression vets post-write rows on
 * INSERT / UPDATE. A table with rls_enabled=1 but no policies denies
 * all access to non-superusers (matches PostgreSQL's default-deny). */

/* Policy command scope — matches PG's per-policy `FOR` clause. */
#define POLICY_CMD_ALL    '*'
#define POLICY_CMD_SELECT 'S'
#define POLICY_CMD_INSERT 'I'
#define POLICY_CMD_UPDATE 'U'
#define POLICY_CMD_DELETE 'D'

#define CAT_MAX_POLICY_ROLES 8      /* max roles listed in `TO role_list` */
#define CAT_MAX_POLICY_EXPR  2048   /* serialized expression size */

typedef struct {
    uint32_t table_id;                         /* owning table */
    char     policy_name[CAT_MAX_NAME_LEN];
    char     command;                          /* POLICY_CMD_* */
    uint8_t  permissive;                       /* 1 = PERMISSIVE (OR'd), 0 = RESTRICTIVE (AND'd) */
    int      role_count;                       /* 0 = applies to any role */
    char     roles[CAT_MAX_POLICY_ROLES][CAT_MAX_NAME_LEN];
    /* Serialized expressions — both optional. Empty string = absent. */
    char     using_expr[CAT_MAX_POLICY_EXPR];
    char     check_expr[CAT_MAX_POLICY_EXPR];
} PolicyDesc;

/* ----------------------------------------------------------------
 *  Checkpoint Store (Task 204 — Feature #204)
 *
 *  Native LangGraph BaseCheckpointSaver backend. A "checkpoint store"
 *  is a named registry entry that owns a backing table __ck_<name> with
 *  a fixed schema:
 *
 *    thread_id      VARCHAR(255) NOT NULL
 *    checkpoint_ns  VARCHAR(255) NOT NULL
 *    checkpoint_id  VARCHAR(255) PRIMARY KEY
 *    parent_id      VARCHAR(255)
 *    values         JSON
 *    metadata       JSON
 *    parent_config  JSON
 *    created_at     TIMESTAMP
 *
 *  Optional retention is stored as a free-form text expression
 *  ("30 days" / "1 hour"); enforcement of retention pruning is a
 *  follow-up (Task 209 WAL retention reuses the same expression). */
#define CAT_MAX_CKSTORE_RETENTION 64

typedef struct {
    char     name[CAT_MAX_NAME_LEN];           /* logical store name */
    uint32_t backing_table_id;                 /* __ck_<name> table_id */
    char     retention[CAT_MAX_CKSTORE_RETENTION]; /* "" = no retention */
} CheckpointStoreDesc;

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

/* Update parent_table_id for INHERITS bookkeeping (Task 92). */
int cat_update_parent_table_id(uint32_t table_id, const char *table_name,
                                uint32_t schema_id, uint32_t parent_table_id);

/* Task 93: toggle RLS for a table — rewrites the TableDesc with the new
 * rls_enabled flag, preserving every other field. */
int cat_update_table_rls_flag(uint32_t table_id, uint8_t rls_enabled);

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

/* Task 88: partition lookup — for a partitioned table + column value,
 * return the ShardDesc of the matching RANGE partition (low <= v < high).
 * Returns 0 on match, -1 if value falls in no partition. */
int cat_find_partition_by_value(uint32_t table_id, const char *col_value,
                                ShardDesc *out);
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

/* Role operations (roles stored in CAT_SYS_USERS with is_role=1) */
int cat_create_role(const char *rolename);
int cat_list_roles(UserDesc *out, int max);
int cat_is_role(const char *name);

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
 *  Policy operations (Task 93 — Feature #64)
 * ----------------------------------------------------------------
 * Keys in CAT_SYS_POLICIES are "table_id:policy_name" so lookups by
 * name stay O(log n) and cat_list_policies_for_table can walk a prefix
 * range. All reads/writes are serialized by cat_lock()/unlock() — the
 * callers from executor paths don't need to hold cat_lock themselves. */
int cat_create_policy(const PolicyDesc *pd);
int cat_find_policy(uint32_t table_id, const char *policy_name,
                    PolicyDesc *out);
int cat_drop_policy(uint32_t table_id, const char *policy_name);
int cat_list_policies_for_table(uint32_t table_id,
                                PolicyDesc *out, int max);
/* Clean up every policy attached to a table (called from DROP TABLE). */
int cat_drop_all_policies_for_table(uint32_t table_id);

/* ----------------------------------------------------------------
 *  Checkpoint store catalog API (Task 204 — Feature #204)
 *
 *  Keys in CAT_SYS_CHECKPOINT_STORES are the lowercased store name. */
int cat_create_checkpoint_store(const CheckpointStoreDesc *desc);
int cat_find_checkpoint_store(const char *name, CheckpointStoreDesc *out);
int cat_drop_checkpoint_store(const char *name);
int cat_list_checkpoint_stores(CheckpointStoreDesc *out, int max);

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

/* ----------------------------------------------------------------
 *  Histograms — Task 99 (Feature #101)
 *
 *  Per-column histograms for query-planner selectivity estimation.
 *  Stored in CAT_SYS_TABLE_STATS with key "%010u:H:%s" (table_id:H:col)
 *  so they coexist with table stats (":_"), column stats (plain), and
 *  index stats (":I:") in the same B+ tree.
 *
 *  Two flavors:
 *    'F' frequency   — NDV ≤ num_buckets: each distinct value + count
 *    'E' equi-depth  — NDV >  num_buckets: bucket upper bounds +
 *                      cumulative counts; each bucket has ~total/N rows
 * ---------------------------------------------------------------- */

#define HIST_MAX_BUCKETS     100
#define HIST_MAX_BOUND_LEN   32          /* per-bound string cap */
#define HIST_DEFAULT_BUCKETS 100

typedef struct {
    uint32_t table_id;
    char     col_name[CAT_MAX_NAME_LEN];
    char     histogram_type;             /* 'F' = frequency, 'E' = equi-depth */
    int      num_buckets;                /* filled buckets, 0..HIST_MAX_BUCKETS */
    char     bucket_bounds[HIST_MAX_BUCKETS][HIST_MAX_BOUND_LEN];
    uint64_t bucket_counts[HIST_MAX_BUCKETS];
    uint64_t total_rows;                 /* total non-NULL rows sampled */
} HistogramDesc;

/* Upsert a histogram for (table_id, col_name). */
int cat_store_histogram(const HistogramDesc *hist);

/* Retrieve histogram. Returns 0 on hit, -1 if none. */
int cat_get_histogram(uint32_t table_id, const char *col_name,
                      HistogramDesc *out);

/* Drop histogram for (table_id, col_name). Returns 0 on hit, -1 if none. */
int cat_drop_histogram(uint32_t table_id, const char *col_name);

/* List all histograms for a table. Returns count found. */
int cat_list_histograms(uint32_t table_id, HistogramDesc *out, int max);

/* Increment DML counter for auto-analyze tracking. */
int cat_increment_dml_counter(uint32_t table_id);

/* Increment dead tuple counter for a table (called after DELETE/UPDATE). */
int cat_increment_dead_tuples(uint32_t table_id, int count);

/* ----------------------------------------------------------------
 *  View operations
 * ---------------------------------------------------------------- */
int cat_create_matview(uint32_t db_id, uint32_t schema_id,
                       const char *name, const char *sql);
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
 *  Trigger operations
 * ---------------------------------------------------------------- */
int cat_create_trigger(uint32_t db_id, uint32_t schema_id,
                       uint32_t table_id, const char *table_name,
                       const char *trigger_name, char event, char timing,
                       const char *body);
int cat_find_trigger(uint32_t table_id, const char *trigger_name,
                     TriggerDesc *out);
int cat_drop_trigger(uint32_t table_id, const char *trigger_name);
int cat_list_triggers_for_table(uint32_t table_id, TriggerDesc *out, int max);
int cat_update_trigger_enabled(uint32_t table_id, const char *trigger_name, int enabled);

/* ── Sequences ── */
int cat_create_sequence(const SequenceDesc *seq);
int cat_find_sequence(uint32_t schema_id, const char *seq_name, SequenceDesc *out);
int cat_update_sequence(const SequenceDesc *seq);
int cat_drop_sequence(uint32_t schema_id, const char *seq_name);
int cat_list_sequences(uint32_t schema_id, SequenceDesc *out, int max);

/* ---- Table inheritance (Task 92 — Feature #63) ----
 *
 *   cat_add_inheritance       — record (child_id → parent_id). Also
 *                                sets TableDesc.parent_table_id on the
 *                                child table row (caller updates the
 *                                child TableDesc before this).
 *   cat_find_parent           — 0 if no parent, returns parent_id via out.
 *   cat_list_children         — direct children only; returns count.
 *   cat_remove_inheritance    — drop a child's mapping entry.
 *   cat_list_all_inheritance  — used by pg_inherits view; fills pairs[].
 */
int cat_add_inheritance(uint32_t child_table_id, uint32_t parent_table_id);
int cat_find_parent(uint32_t child_table_id, uint32_t *parent_id_out);
int cat_list_children(uint32_t parent_table_id, uint32_t *out, int max);
int cat_remove_inheritance(uint32_t child_table_id);

typedef struct {
    uint32_t child_id;
    uint32_t parent_id;
} InheritPair;
int cat_list_all_inheritance(InheritPair *out, int max);

/* ----------------------------------------------------------------
 *  Convenience
 * ---------------------------------------------------------------- */

/* Three-level lookup: database -> schema -> table.
 * Returns 0 on success, -1 if any level fails. */
int cat_resolve_table(const char *db_name, const char *schema_name,
                      const char *table_name, TableDesc *out);

#endif /* CATALOG_INTERNAL_H */
