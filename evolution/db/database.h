#ifndef DATABASE_H_
#define DATABASE_H_

#include <setjmp.h>

/* Minimum padded record size - ensures UPDATE can overwrite in-place */
#define RECORD_PAD_SIZE 256

/* Maximum record buffer size (must accommodate any padded record) */
#define RECORD_BUF_SIZE 8192

/* Function Prototypes */
int GetInsertions(char *name);
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

char *ParseUpdate(char *arr);
char *ParseInsertion(char *arr);

void SelectAll(void);

int ReadPadSize(const char *tblName);
void WritePadSize(const char *tblName, int padSize);
int ReadColumnTypes(const char *tblName, int *types, int maxCols);
int ValidateValue(const char *value, int typeEncoding);
void SetColumnNotNull(void);
void SetColumnPrimaryKey(void);
int ReadPrimaryKey(const char *tblName);
int ReadNullFlags(const char *tblName, int *flags, int maxCols);

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
extern char g_orderByColumn[256];
extern int g_orderByDesc;
extern char g_orderByColumns[8][256];
extern int  g_orderByDescs[8];
extern int  g_orderByCount;
extern int g_selectDistinct;
extern char g_columnTypeDefs[1024];
extern int g_currentColNotNull;
extern int g_currentColPrimaryKey;
extern char g_columnNullFlags[1024];
extern int g_primaryKeyIndex;
extern int g_columnCount;
extern char g_selectColumns[64][128];
extern int g_selectColumnCount;
extern char g_dbRoot[1024];
extern char g_currentDatabase[256];
extern char g_currentSchema[256];

#endif
