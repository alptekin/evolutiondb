#ifndef DATABASE_H_
#define DATABASE_H_

#include <setjmp.h>
#include <stdint.h>
#include "evosql_errcodes.h"

/* Max columns per table — must match catalog_internal.h */
#ifndef CAT_MAX_COLUMNS
#define CAT_MAX_COLUMNS 256
#endif

/* Forward declaration — full definition in slotted.h */
#ifndef ROWID_DEFINED
#define ROWID_DEFINED
typedef struct { uint32_t page_no; uint16_t slot_idx; } RowID;
#endif

/* Forward declaration — full definition in expression.h */
struct ExprNode;

/* Query cancellation flag — thread-local, set by watchdog or CancelRequest */
extern __thread volatile int g_query_cancelled;

/* Lock wait timeout — thread-local, set from SessionCtx.evo_lock_timeout_ms
 * 0 = use default (LOCK_WAIT_TIMEOUT_MS = 5000ms) */
extern __thread int g_lock_timeout_ms;


/* Minimum padded record size - ensures UPDATE can overwrite in-place */
#define RECORD_PAD_SIZE 256

/* Maximum record buffer size (must accommodate any padded record) */
#define RECORD_BUF_SIZE 8192

/* Safe path buffer size — all file-path buffers should use this */
#define SAFE_PATH_MAX 2048

/* Field separator for in-memory intermediate representation.
 * ASCII Unit Separator (0x1F) — cannot appear in SQL string literals. */
#define FIELD_SEP      "\x1F"
#define FIELD_SEP_CHAR '\x1F'

/* Function Prototypes */
int GetInsertions(char *name);
int InsertRowSeparator(void);
int GetSelection(char *pname);

int TruncateInsert(void);
void TruncateCreate(void);
int TruncateUpdate(void);
int TruncateDelete(void);
int TruncateSelect(void);
int TruncateDrop(void);

int GetTableName(char *name);
int GetUpdateTableName(char *pname);
int GetDelTableName(char *pname);
int GetSelTableName(char *pname);
int GetInsertionTableName(char *name);
int GetDropTableName(char *pname);

int GetUpdateColumnName(char *pname);
int GetColumnNames(char *name);
int GetColumnSize(int typeVal);
int GetOrderByColumn(char *name);
void SetOrderByDirection(int desc);
void AddOrderByColumn(const char *name, int desc);

/* Window function parser helpers */
void AddWindowSpec(int funcType, struct ExprNode *arg);
void AddWindowPartitionCol(const char *col);
void AddWindowOrderCol(const char *col, int desc);
void SetWindowOffset(int offset);
void SetWindowDefault(const char *val);

int UpdateProcess(void);
void SetMultiUpdate(void);
void AddMultiUpdateSet(const char *table, const char *col,
                       struct ExprNode *expr);
int evo_update_row(const char *tableName, const char *pkKey,
                   const char setCols[][128], const char setVals[][256],
                   int numSets, uint32_t mvcc_xid);
int DeleteProcess(void);
void AddDeleteTarget(const char *name);
void SetMultiDelete(void);
int evo_delete_row(const char *tableName,
                   const char *pkKey, uint32_t mvcc_xid);
int SelectProcess(void);
int CreateTableProcess(void);
int InsertProcess(void);
int DropTableProcess(void);
int TruncateTableProcess(void);
void TruncateAddTable(const char *name);
void TruncateSetCascade(void);
void TruncateSetContinueIdentity(void);
int ReclaimTableProcess(void);
int should_auto_reclaim(uint32_t table_id);
void auto_reclaim_start(void);
void auto_reclaim_stop(void);
int AnalyzeTableProcess(void);
int CreateDatabaseProcess(const char *name, int if_not_exists);
int CreateSchemaProcess(const char *name, int if_not_exists);
int DropDatabaseProcess(const char *name, int if_exists);
int DropSchemaProcess(const char *name, int if_exists);
int RenameTableProcess(const char *oldName, const char *newName);
int UseDatabaseProcess(const char *name);
int SetSchemaProcess(const char *name);

/* B-tree index operations */
int  CreateIndexProcess(void);
int  DropIndexProcess(void);
void SetIndexInfo(const char *idxName, const char *tblName, const char *colName);
void SetIndexAddColumn(const char *colName);
void SetDropIndexName(const char *idxName);
void SetIndexUnique(void);
void SetIndexIfNotExists(void);
void SetIndexExpression(struct ExprNode *expr);
void SetIndexUsingHash(void);
void SetIndexConcurrent(void);
int  CreateIndexConcurrentlyPhase2(void *mutex_ptr);
int  CreateIndexConcurrentlyPhase3(void *mutex_ptr);

/* Concurrent index build modification log — tracks DML during Phase 2 */
typedef struct {
    uint32_t table_id;    /* table being indexed */
    int      active;      /* 1 while Phase 2 is in progress */
    char     col_name[256]; /* indexed column(s) — for building old keys */
    char     expr_def[1024]; /* expression index def (empty if plain) */
    char   **pks;         /* array of strdup'd PK strings */
    char   **old_keys;    /* parallel: old composite key "val\x1fPK", NULL for INSERT */
    int      count;
    int      capacity;
} ConcModLog;
extern ConcModLog g_conc_mod_log;

/* Simple append — INSERT only (no old value) */
void conc_mod_log_append(uint32_t table_id, const char *pk_key);
/* DML append — builds old composite key from field arrays (DELETE/UPDATE) */
void conc_mod_log_record(uint32_t table_id, const char *pk_key,
                          const char *col_names_buf, int name_stride,
                          const char *col_values_buf, int val_stride,
                          int num_cols);

/* B-tree index API */
int  btree_create(const char *path);
int  btree_insert(const char *path, const char *key, const char *pk);
int  btree_search(const char *path, const char *key, char results[][256], int max_results);
int  btree_delete(const char *path, const char *key, const char *pk);
int  btree_range(const char *path, const char *lo, const char *hi,
                 int lo_inclusive, int hi_inclusive,
                 char results[][256], int max_results);
int  btree_drop(const char *path);

/* Index metadata helpers (catalog-backed) */
int  index_exists(const char *tblPath, const char *colName,
                  char *idxPath, int idxPathSize);
int  index_list_for_table(const char *tblPath, char names[][256],
                          char cols[][256], char paths[][1024], int max);
int  index_list_with_types(const char *tblPath, char names[][256],
                           char cols[][256], char paths[][1024],
                           char types[], int max);

/* Load secondary indexes as IndexDesc array (excludes PK) */
struct IndexDesc;
int  idx_load_secondary(const char *tblName, struct IndexDesc *out, int max);

/* Build index key from row data (handles expression, composite, single column) */
int  idx_build_key(const struct IndexDesc *idx,
                   const char colNames[][128], int numCols,
                   const char colValues[][256],
                   char *keyBuf, int keyBufSize);
int  idx_build_key_ex(const struct IndexDesc *idx,
                      const char *colNamesBuf, int nameStride,
                      const char *colValuesBuf, int valueStride,
                      int numCols,
                      char *keyBuf, int keyBufSize);

/* Secondary index operations (page-based bt2) */
int  sec_idx_search(uint32_t root_page, const char *indexed_val,
                    char results[][256], int max_results);
int  sec_idx_insert(uint32_t *root_page, const char *indexed_val,
                    const char *pk, RowID heap_rid);
int  sec_idx_delete(uint32_t *root_page, const char *indexed_val,
                    const char *pk);

/* Database root path management */
void db_ensure_root(void);
const char *db_get_root(void);
void db_set_current_database(const char *name);
const char *db_get_current_database(void);
void db_set_current_schema(const char *name);
const char *db_get_current_schema(void);
void db_table_path(const char *tableName, char *out, int outSize);
int  db_ext_path(const char *tableName, const char *ext, char *out, int outSize);
int  db_meta_path(const char *tableName, char *out, int outSize);
int  db_dat_path(const char *tableName, char *out, int outSize);
int  db_idx_path(const char *tableName, char *out, int outSize);

char *ParseUpdate(char *arr);
char *ParseInsertion(char *arr);

void SelectAll(void);

int ReadColumnTypes(const char *tblName, int *types, int maxCols);
int ValidateValue(const char *value, int typeEncoding);
void SetColumnNotNull(void);
void SetColumnPrimaryKey(void);
void SetColumnUnique(void);
void SetColumnDefault(const char *value);
void SetColumnAutoIncrement(int start, int step);
void SetColumnGenerated(int mode, struct ExprNode *expr);
void SetTableAutoIncrement(int startVal);
void AddPrimaryKeyColumn(const char *colName);
int ReadPrimaryKeys(const char *tblName, int *indices, int maxCols);
int ReadPrimaryKey(const char *tblName);
int ReadNullFlags(const char *tblName, int *flags, int maxCols);
int ReadUniqueFlags(const char *tblName, int *flags, int maxCols);
int ReadDefaults(const char *tblName, char defaults[][256], int maxCols);
int ReadCheckConstraints(const char *tblName, char constraints[][1024], int maxConstraints);
int ReadCheckConstraintsWithNames(const char *tblName, char constraints[][1024],
                                   char names[][128], int maxConstraints);

/* Shard parser helpers (Create.c) */
void SetShardHash(const char *colName, int shardCount);
void SetShardRange(const char *colName);
void AddShardRangeDef(const char *name, const char *bound, int node_id);

/* JOIN parser helpers (Select.c) */
void AddJoinTable(const char *name, const char *alias);
void SetLastJoinType(int type);
void SetJoinOnExpr(struct ExprNode *expr);

/* Table-level UNIQUE parser helpers */
void AddUniqueColumn(const char *colName);
void AddUniqueComplete(void);

/* FOREIGN KEY parser helpers */
void AddForeignKeyColumn(const char *colName);
void AddForeignKeyRefColumn(const char *colName);
void AddForeignKeyRefTable(const char *tableName);
void SetForeignKeyOnDelete(int action);
void SetForeignKeyOnUpdate(int action);
void SetForeignKeyMatchType(int matchType);
void SetForeignKeyDeferrable(int mode);
void AddForeignKeyRefTableSchema(const char *schemaName, const char *tableName);

/* ALTER TABLE constraint operations */
struct ExprNode;  /* forward declaration */
int AlterTableAddCheckConstraint(const char *tableName, const char *constraintName, struct ExprNode *expr);
int AlterTableAddCheckConstraintNotValid(const char *tableName, const char *constraintName, struct ExprNode *expr);
int AlterTableAddUniqueConstraint(const char *tableName, const char *constraintName);
int AlterTableAddForeignKeyConstraint(const char *tableName, const char *refTableName);
int AlterTableAddForeignKeyConstraintNotValid(const char *tableName, const char *refTableName);
int AlterTableAddPrimaryKey(const char *tableName, const char *constraintName);
int AlterTableDropConstraint(const char *tableName, const char *constraintName);
int AlterTableRenameConstraint(const char *tableName, const char *oldName, const char *newName);
int AlterTableEnableConstraint(const char *tableName, const char *constraintName);
int AlterTableDisableConstraint(const char *tableName, const char *constraintName);
int AlterTableValidateConstraint(const char *tableName, const char *constraintName);

/* ALTER TABLE ADD/DROP COLUMN */
int AlterTableAddColumn(const char *tableName, const char *colName, int typeCode);
int AlterTableDropColumn(const char *tableName, const char *colName);
int CreateViewProcess(const char *viewName);
int DropViewProcess(const char *viewName, int ifExists);
int AlterTableRenameColumn(const char *tableName, const char *oldName, const char *newName);
int AlterTableModifyColumn(const char *tableName, const char *colName, int newTypeCode);
int AlterTableChangeColumn(const char *tableName, const char *oldName,
                           const char *newName, int newTypeCode);

/* ON DUPLICATE KEY UPDATE */
void SetOnDupKeyUpdate(void);
void SetUpsertMode(void);
void AddUpsertSet(const char *col, struct ExprNode *expr);

/* RETURNING clause helpers */
void SetReturningAll(void);
void AddReturningCol(const char *name);

/* RETURNING result buffer — populated by DML, read by query_executor */
extern __thread char g_returning_buf[256][CAT_MAX_COLUMNS][256];
extern __thread int  g_returning_null[256][CAT_MAX_COLUMNS];
extern __thread int  g_returning_row_count;
extern __thread int  g_returning_col_count;
extern __thread char g_returning_col_names[CAT_MAX_COLUMNS][128];
extern __thread int  g_returning_col_types[CAT_MAX_COLUMNS];

/* Triggers (Trigger.c) */
int CreateTriggerProcess(void);
int DropTriggerProcess(void);
int AlterTriggerProcess(void);

/* Parser helpers for trigger grammar */
void evo_set_trigger_info(const char *name, const char *table);
void evo_set_trigger_timing(char timing);
void evo_set_trigger_event(char event);
void evo_set_trigger_drop(const char *name, int ifExists);

/* Trigger execution — called from DML operations */
int evo_fire_triggers(const char *table_name, char timing, char event,
                      const char *col_names[], const char *old_vals[],
                      const char *new_vals[], int ncols);

/* Stored Procedures / Functions (Procedure.c) */
int CreateProcedureProcess(void);
int DropProcedureProcess(void);
int CallProcedureProcess(void);

/* Block map for procedure control flow */
#define BLOCK_IF       0
#define BLOCK_ELSEIF   1
#define BLOCK_ELSE     2
#define BLOCK_WHILE    3
#define BLOCK_LOOP     4
#define BLOCK_FOR      5
#define BLOCK_CASE     6
#define BLOCK_WHEN     7
#define BLOCK_FOREACH  8
#define BLOCK_END      9

typedef struct {
    int type;        /* BLOCK_IF, BLOCK_WHILE, etc. */
    int match_idx;   /* next branch: IF→ELSEIF→ELSE, or END for WHILE/LOOP */
    int end_idx;     /* END xxx index that closes this entire block */
    int start_idx;   /* back-pointer: END WHILE → WHILE, END LOOP → LOOP */
    char label[64];  /* optional label for LEAVE/ITERATE */
} BlockEntry;

/* Enhanced statement splitter for control flow */
int split_proc_statements(const char *body, char stmts[][4096], int max_stmts);

/* Build block map from split statements */
int proc_build_block_map(char stmts[][4096], int stmt_count,
                         BlockEntry map[], int map_size);

/* Parser helpers for procedure grammar */
void evo_set_proc_name(const char *name, int isFunction);
void evo_set_proc_replace(int orReplace);
void evo_set_proc_return_type(const char *type);
void evo_add_proc_param(const char *name, const char *mode);
void evo_set_proc_drop(const char *name, int ifExists);
void evo_set_call_name(const char *name);
void evo_add_call_arg(const char *val);

/* CREATE DOMAIN */
int CreateDomainProcess(const char *name, int typeVal, struct ExprNode *checkExpr,
                        int notNull, int hasCheck);

/* User management (UserMgmt.c) */
void db_ensure_users(void);
int  AuthenticateUser(const char *username, const char *password);
int  CreateUserProcess(const char *username, const char *password);
int  DropUserProcess(const char *username);
int  AlterUserPasswordProcess(const char *username, const char *new_password);
int  ListUsers(char names[][256], int max_users);

/* Grant / Privilege management (GrantMgmt.c) */
void db_ensure_grants(void);
int  CheckPrivilege(const char *username, const char *database,
                    const char *schema, const char *table,
                    const char *privilege);
int  HasGrantOption(const char *username, int scope_type,
                    const char *scope_name, const char *privilege);
int  GrantPrivilege(const char *username, int scope_type,
                    const char *scope_name, const char *privileges,
                    int with_grant_option);
int  RevokePrivilege(const char *username, int scope_type,
                     const char *scope_name, const char *privileges);
int  ListGrantsForUser(const char *username,
                       char out_users[][256],
                       char out_scopes[][32],
                       char out_names[][256],
                       char out_privs[][128],
                       int  out_grant_option[],
                       int  max_entries);
int  DropUserGrants(const char *username);

/* Role management (UserMgmt.c) */
int  CreateRoleProcess(const char *rolename);
int  DropRoleProcess(const char *rolename);
int  ListRoles(char names[][256], int max_roles);

/* Role membership (GrantMgmt.c) */
int  GrantRoleToUser(const char *rolename, const char *username);
int  RevokeRoleFromUser(const char *rolename, const char *username);
int  ListRolesForUser(const char *username, char roles[][256], int max);
int  DropRoleAllMemberships(const char *rolename);

/* Server-wide globals (NOT per-query, remain as true globals) */
extern int  g_gui_mode;
extern char g_dbRoot[1024];

/* Metadata file mutex — protects users/grants/databases registry files */
#include <pthread.h>
extern pthread_mutex_t g_metadata_lock;

/* Snowflake ID state — protected by g_parse_lock in query_executor */
extern uint64_t g_snowflake_last_ms;
extern uint16_t g_snowflake_sequence;
extern uint16_t g_snowflake_machine_id;
void snowflake_init(void);

/* LAST_INSERT_ID — per-session, synced via SessionCtx in query_executor */
extern char g_last_insert_id[64];

/* GTT override — per-session storage for global temporary tables.
 * Set by adaptor before each query, used by tapi_resolve(). */
/* Temporary table type constants */
#define TEMP_NONE    0
#define TEMP_LOCAL   1
#define TEMP_GLOBAL  2

#define MAX_GTT_PER_SESSION 32

typedef struct {
    uint32_t table_id;
    uint32_t pk_root_page;
    uint32_t heap_page;
    int      auto_inc_counter;
    int      on_commit_delete;  /* cached from catalog for fast COMMIT check */
} GttOverride;
extern GttOverride *g_gtt_overrides;
extern int g_gtt_override_count;

/* tx_undo_fn typedef — used by QueryContext, must be before its include */
typedef void (*tx_undo_fn)(int op_type, const char *table,
                           const char *key, const char *data);

/* Per-query thread-local context — provides all query-scoped globals
 * via struct accessors (g_create.tblName, g_ins.data, g_expr.whereExpr, etc.) */
#include "query_context.h"

#endif
