#ifndef DATABASE_H_
#define DATABASE_H_

#include <setjmp.h>
#include <stdint.h>
#include "evosql_errcodes.h"

/* Forward declaration — full definition in slotted.h */
#ifndef ROWID_DEFINED
#define ROWID_DEFINED
typedef struct { uint32_t page_no; uint16_t slot_idx; } RowID;
#endif

/* Forward declaration — full definition in expression.h */
struct ExprNode;


/* Minimum padded record size - ensures UPDATE can overwrite in-place */
#define RECORD_PAD_SIZE 256

/* Maximum record buffer size (must accommodate any padded record) */
#define RECORD_BUF_SIZE 8192

/* Safe path buffer size — all file-path buffers should use this */
#define SAFE_PATH_MAX 2048

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

int UpdateProcess(void);
int DeleteProcess(void);
int SelectProcess(void);
int CreateTableProcess(void);
int InsertProcess(void);
int DropTableProcess(void);
int TruncateTableProcess(void);
int ReclaimTableProcess(void);
int AnalyzeTableProcess(void);
int CreateDatabaseProcess(const char *name, int if_not_exists);
int CreateSchemaProcess(const char *name, int if_not_exists);
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

/* tx_undo_fn typedef — used by QueryContext, must be before its include */
typedef void (*tx_undo_fn)(int op_type, const char *table,
                           const char *key, const char *data);

/* Per-query thread-local context — provides all query-scoped globals
 * via compatibility macros (g_insert, g_tblName, g_whereExpr, etc.) */
#include "query_context.h"

#endif
