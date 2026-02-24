/* Global variable definitions for the EvoSQL database project */
#include "database.h"

char g_columnNames[1024];
char g_insert[1024];
char g_temp[1024];
char g_tblName[1024];
char g_tblInsertionName[1024];
char g_tblSelectionName[1024];
char g_whereSel[1024];
char g_tblDelName[1024];
char g_tblUpdateTableName[1024];
char g_columnDefs[1024];
char g_lastSelectTable[1024];
int g_totalColumnSize = 0;
int g_gui_mode = 0;
jmp_buf g_gui_jmpbuf;
int g_gui_error = 0;
