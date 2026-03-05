#ifndef DATABASE_H_
#define DATABASE_H_

#include <setjmp.h>
#include "evosql_errcodes.h"

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
int CreateDatabaseProcess(const char *name, int if_not_exists);
int CreateSchemaProcess(const char *name, int if_not_exists);
int UseDatabaseProcess(const char *name);
int SetSchemaProcess(const char *name);

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

int ReadPadSize(const char *tblName);
void WritePadSize(const char *tblName, int padSize);
int ReadColumnTypes(const char *tblName, int *types, int maxCols);
int ValidateValue(const char *value, int typeEncoding);
void SetColumnNotNull(void);
void SetColumnPrimaryKey(void);
void SetColumnUnique(void);
void SetColumnDefault(const char *value);
void SetColumnAutoIncrement(int start, int step);
int ReadAutoIncrement(const char *tblName, int *colIndex, int *counter, int *step);
int WriteAutoIncrement(const char *tblName, int colIndex, int counter, int step);
void AddPrimaryKeyColumn(const char *colName);
int ReadPrimaryKeys(const char *tblName, int *indices, int maxCols);
int ReadPrimaryKey(const char *tblName);
int ReadNullFlags(const char *tblName, int *flags, int maxCols);
int ReadUniqueFlags(const char *tblName, int *flags, int maxCols);
int ReadDefaults(const char *tblName, char defaults[][256], int maxCols);

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

/* Global Variables (defined in database_globals.c) */
extern char g_columnNames[1024];
extern char g_insert[RECORD_BUF_SIZE];
extern char g_temp[1024];
extern char g_tblName[1024];
extern char g_tblInsertionName[1024];
extern char g_tblSelectionName[1024];
extern char g_whereSel[1024];
extern char g_tblDelName[1024];
extern char g_tblUpdateTableName[1024];
extern char g_tblDropName[1024];
extern char g_columnDefs[1024];
extern char g_lastSelectTable[1024];
extern int g_totalColumnSize;
extern int g_gui_mode;
extern jmp_buf g_gui_jmpbuf;
extern int g_gui_error;
extern char g_gui_error_msg[512];
extern char g_gui_error_sqlstate[6];
extern char g_orderByColumn[256];
extern int g_orderByDesc;
extern char g_orderByColumns[8][256];
extern int  g_orderByDescs[8];
extern int  g_orderByCount;
extern int g_selectDistinct;
extern char g_columnTypeDefs[1024];
extern int g_currentColNotNull;
extern int g_currentColPrimaryKey;
extern int g_currentColUnique;
extern char g_columnNullFlags[1024];
extern char g_columnUniqueFlags[1024];
extern char g_currentColDefault[256];
extern char g_columnDefaults[4096];
extern int g_currentColAutoIncrement;
extern int g_autoIncColIndex;
extern int g_autoIncStart;
extern int g_autoIncStep;
extern char g_primaryKeyIndices[256];
extern int g_pkColumnCount;
extern char g_pkColumnNames[16][128];
extern int g_primaryKeyIndex;
extern int g_columnCount;
extern char g_selectColumns[64][128];
extern int g_selectColumnCount;
extern char g_dbRoot[1024];
extern char g_currentDatabase[256];
extern char g_currentSchema[256];
extern int g_deleteCount;
extern int g_updateCount;
extern int g_insertCount;
extern char g_insertColumns[64][128];
extern int g_insertColumnCount;

#endif
