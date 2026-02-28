/* Global variable definitions for the EvoSQL database project */
#include "database.h"

char g_columnNames[1024];
char g_insert[RECORD_BUF_SIZE];
char g_temp[1024];
char g_tblName[1024];
char g_tblInsertionName[1024];
char g_tblSelectionName[1024];
char g_whereSel[1024];
char g_tblDelName[1024];
char g_tblUpdateTableName[1024];
char g_tblDropName[1024];
char g_columnDefs[1024];
char g_lastSelectTable[1024];
int g_totalColumnSize = 0;
int g_gui_mode = 0;
jmp_buf g_gui_jmpbuf;
int g_gui_error = 0;
char g_gui_error_msg[512];
char g_orderByColumn[256];
int g_orderByDesc = 0;
char g_orderByColumns[8][256];
int  g_orderByDescs[8];
int  g_orderByCount = 0;
int g_selectDistinct = 0;
char g_columnTypeDefs[1024];
int g_currentColNotNull = 0;
int g_currentColPrimaryKey = 0;
char g_columnNullFlags[1024];
int g_primaryKeyIndex = -1;
int g_columnCount = 0;
char g_selectColumns[64][128];
int g_selectColumnCount = 0;
char g_dbRoot[1024];
char g_currentDatabase[256];
char g_currentSchema[256];
