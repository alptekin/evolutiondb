#ifndef  DATABASE_H_
#define  DATABASE_H_

/*Function Prototypes*/
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


int UpdateProcess(void);
int DeleteProcess(void);
int SelectProcess(void);
int CreateTableProcess(void);
int InsertProcess(void);


int ParseUpdate(char *arr);
char *ParseInsertion(char *arr);

void SelectAll();


/*Global Variable*/
char g_columnNames[1024];
char g_insert[1024];
char g_temp[1024];
char g_tblName[1024];
char g_tblInsertionName[1024];
char g_tblSelectionName[1024];
char g_whereSel[1024];
char g_tblDelName[1024];
char g_tblUpdateTableName[1024];





#endif