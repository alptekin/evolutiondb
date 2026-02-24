#ifndef DATABASE_H_
#define DATABASE_H_

#include <setjmp.h>

/* Minimum padded record size - ensures UPDATE can overwrite in-place */
#define RECORD_PAD_SIZE 256

/* Function Prototypes */
int GetInsertions(char *name);
int GetSelection(char *pname);

int TruncateInsert(void);
void TruncateCreate(void);
int TruncateUpdate(void);
int TruncateDelete(void);
int TruncateSelect(void);

int GetTableName(char *name);
int GetUpdateTableName(char *pname);
int GetDelTableName(char *pname);
int GetSelTableName(char *pname);
int GetInsertionTableName(char *name);

int GetUpdateColumnName(char *pname);
int GetColumnNames(char *name);
int GetColumnSize(int typeVal);

int UpdateProcess(void);
int DeleteProcess(void);
int SelectProcess(void);
int CreateTableProcess(void);
int InsertProcess(void);

char *ParseUpdate(char *arr);
char *ParseInsertion(char *arr);

void SelectAll(void);

int ReadPadSize(const char *tblName);
void WritePadSize(const char *tblName, int padSize);

/* Global Variables (defined in database_globals.c) */
extern char g_columnNames[1024];
extern char g_insert[1024];
extern char g_temp[1024];
extern char g_tblName[1024];
extern char g_tblInsertionName[1024];
extern char g_tblSelectionName[1024];
extern char g_whereSel[1024];
extern char g_tblDelName[1024];
extern char g_tblUpdateTableName[1024];
extern char g_columnDefs[1024];
extern char g_lastSelectTable[1024];
extern int g_totalColumnSize;
extern int g_gui_mode;
extern jmp_buf g_gui_jmpbuf;
extern int g_gui_error;

#endif
