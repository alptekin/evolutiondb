/*---------------------------------------
   POPPAD.C -- Popup Editor
               (c) Charles Petzold, 1998
  ---------------------------------------*/
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include <windows.h>
#include <commdlg.h>
#include "resource.h"
#include <tchar.h>
#include <commctrl.h>
#include "poppad.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <fcntl.h>
#include "../evolution/db/database.h"
#include "../evolution/db/apue_db.h"
#include "../evolution/db/apue.h"

/* Flex/Bison externs */
extern int yyparse(void);
typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE yy_scan_string(const char *str);
extern void yy_delete_buffer(YY_BUFFER_STATE buf);
extern int yylex_destroy(void);
extern int yylineno;



#define EDITID			1
#define BUTTONEXECID	2
#define BUTTONSTOPID	3
#define EDITERRID		4
#define LISTID			5
#define TABCTRLID		6
#define TREEID			7


#define UNTITLED TEXT ("(untitled)")

LRESULT CALLBACK WndProc      (HWND, UINT, WPARAM, LPARAM) ;
INT_PTR CALLBACK AboutDlgProc (HWND, UINT, WPARAM, LPARAM) ;
void PopulateGridView(HWND hwndLV, const char *tableName);

     // Functions in POPFILE.C

void PopFileInitialize (HWND) ;
BOOL PopFileOpenDlg    (HWND, PTSTR, PTSTR) ;
BOOL PopFileSaveDlg    (HWND, PTSTR, PTSTR) ;
BOOL PopFileRead       (HWND, PTSTR) ;
BOOL PopFileWrite      (HWND, PTSTR) ;

     // Functions in POPFIND.C

HWND PopFindFindDlg     (HWND) ;
HWND PopFindReplaceDlg  (HWND) ;
BOOL PopFindFindText    (HWND, int *, LPFINDREPLACE) ;
BOOL PopFindReplaceText (HWND, int *, LPFINDREPLACE) ;
BOOL PopFindNextText    (HWND, int *) ;
BOOL PopFindValidFind   (void) ;

     // Functions in POPFONT.C

void PopFontInitialize   (HWND) ;
BOOL PopFontChooseFont   (HWND) ;
void PopFontSetFont      (HWND) ;
void PopFontDeinitialize (void) ;

     // Functions in POPPRNT.C

BOOL PopPrntPrintFile (HINSTANCE, HWND, HWND, PTSTR) ;

     // Global variables

static HWND  hDlgModeless ;
static TCHAR szAppName[] = TEXT ("THE EVOLUTION PROJECT") ;

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    PSTR szCmdLine, int iCmdShow)
{
     MSG       msg ;
     HWND      hwnd ;
     HACCEL    hAccel ;
     WNDCLASS  wndclass ;
     
     wndclass.style         = CS_HREDRAW | CS_VREDRAW ;
     wndclass.lpfnWndProc   = WndProc ;
     wndclass.cbClsExtra    = 0 ;
     wndclass.cbWndExtra    = 0 ;
     wndclass.hInstance     = hInstance ;
     wndclass.hIcon         = LoadIcon (hInstance, szAppName) ;
     wndclass.hCursor       = LoadCursor (NULL, IDC_ARROW) ;
	 wndclass.hbrBackground = (HBRUSH) GetStockObject (WHITE_BRUSH) ;
     wndclass.lpszMenuName  = TEXT("PopPad") ;
     wndclass.lpszClassName = szAppName ;
     
     if (!RegisterClass (&wndclass))
     {
          MessageBox (NULL, TEXT ("This program requires Windows NT!"),
                      szAppName, MB_ICONERROR) ;
          return 0 ;
     }
     
     hwnd = CreateWindow (szAppName, NULL,
                          WS_OVERLAPPEDWINDOW,
                          90, 50,
                          1100, 720,
                          NULL, NULL, hInstance, szCmdLine) ;
     
     ShowWindow (hwnd, iCmdShow) ;
     UpdateWindow (hwnd) ; 
     
     hAccel = LoadAccelerators (hInstance, szAppName) ;
     
     while (GetMessage (&msg, NULL, 0, 0))
     {
          if (hDlgModeless == NULL || !IsDialogMessage (hDlgModeless, &msg))
          {
               if (!TranslateAccelerator (hwnd, hAccel, &msg))
               {
                    TranslateMessage (&msg) ;
                    DispatchMessage (&msg) ;
               }
          }
     }
     return msg.wParam ;
}

void DoCaption (HWND hwnd, TCHAR * szTitleName)
{
     TCHAR szCaption[64 + MAX_PATH] ;
     
     wsprintf (szCaption, TEXT ("%s - %s"), szAppName,
               szTitleName[0] ? szTitleName : UNTITLED) ;
     
     SetWindowText (hwnd, szCaption) ;
}

void OkMessage (HWND hwnd, TCHAR * szMessage, TCHAR * szTitleName)
{
     TCHAR szBuffer[64 + MAX_PATH] ;
     
     wsprintf (szBuffer, szMessage, szTitleName[0] ? szTitleName : UNTITLED) ;
     
     MessageBox (hwnd, szBuffer, szAppName, MB_OK | MB_ICONEXCLAMATION) ;
}

short AskAboutSave (HWND hwnd, TCHAR * szTitleName)
{
	TCHAR szBuffer[64 + MAX_PATH] ;
	int   iReturn ;

	wsprintf (szBuffer, TEXT ("Save current changes in %s?"),
		szTitleName[0] ? szTitleName : UNTITLED) ;

	iReturn = MessageBox (hwnd, szBuffer, szAppName,
		MB_YESNOCANCEL | MB_ICONQUESTION) ;

	if (iReturn == IDYES)
		if (!SendMessage (hwnd, WM_COMMAND, IDM_FILE_SAVE, 0))
			iReturn = IDCANCEL ;
     
	return iReturn ;
}

void OnButtonExecClick(HWND hwndEdit, HWND hwndList)
{
    /* Get the SQL text from the edit control (ANSI) */
    int len = GetWindowTextLengthA(hwndEdit);
    if (len == 0) return;

    char *sql = (char *)malloc(len + 2);
    if (!sql) return;
    GetWindowTextA(hwndEdit, sql, len + 1);

    /* Strip \r characters (Windows \r\n -> \n) so the lexer doesn't choke */
    {
        int r = 0, w = 0;
        while (sql[r]) {
            if (sql[r] != '\r')
                sql[w++] = sql[r];
            r++;
        }
        sql[w] = '\0';
    }

    /* Get the parent window's error output control */
    HWND hwndParent = GetParent(hwndEdit);
    HWND hwndEditErr = GetDlgItem(hwndParent, 4); /* EDITERRID = 4 */

    /* Create temp files to capture stdout and stderr */
    char tmpPath[MAX_PATH], tmpFile[MAX_PATH], tmpErrFile[MAX_PATH];
    GetTempPathA(MAX_PATH, tmpPath);
    GetTempFileNameA(tmpPath, "evo", 0, tmpFile);
    GetTempFileNameA(tmpPath, "eve", 0, tmpErrFile);

    /* Redirect stdout and stderr to temp files (works in GUI apps) */
    freopen(tmpFile, "w", stdout);
    freopen(tmpErrFile, "w", stderr);

    /* Suppress RPN debug output in GUI mode */
    g_gui_mode = 1;
    g_gui_error = 0;
    yylineno = 1;

    /* Parse and execute the SQL (setjmp protects against err_sys exit) */
    if (setjmp(g_gui_jmpbuf) == 0) {
        YY_BUFFER_STATE buf = yy_scan_string(sql);
        yyparse();
        yy_delete_buffer(buf);
        yylex_destroy();
    }
    /* If longjmp occurred, g_gui_error is set - error was already written to stderr */

    /* Flush and close redirected streams */
    fflush(stdout);
    fflush(stderr);
    freopen("NUL", "w", stdout);
    freopen("NUL", "w", stderr);

    /* Read stdout output */
    char displayBuf[32000] = "";
    int pos = 0;

    FILE *resultFile = fopen(tmpFile, "r");
    if (resultFile) {
        int ch;
        while ((ch = fgetc(resultFile)) != EOF && pos < 31000) {
            if (ch == '\n') displayBuf[pos++] = '\r';
            displayBuf[pos++] = (char)ch;
        }
        fclose(resultFile);
    }

    /* Append stderr output (error messages) */
    FILE *errFile = fopen(tmpErrFile, "r");
    if (errFile) {
        fseek(errFile, 0, SEEK_END);
        long errSize = ftell(errFile);
        fseek(errFile, 0, SEEK_SET);
        if (errSize > 0) {
            if (pos > 0) {
                displayBuf[pos++] = '\r';
                displayBuf[pos++] = '\n';
            }
            int ch;
            while ((ch = fgetc(errFile)) != EOF && pos < 31900) {
                if (ch == '\n') displayBuf[pos++] = '\r';
                displayBuf[pos++] = (char)ch;
            }
        }
        fclose(errFile);
    }

    displayBuf[pos] = '\0';

    if (pos > 0)
        SetWindowTextA(hwndEditErr, displayBuf);
    else
        SetWindowTextA(hwndEditErr, "OK");

    /* If a SELECT was executed, populate the GridView */
    if (g_lastSelectTable[0] != '\0') {
        PopulateGridView(hwndList, g_lastSelectTable);
        g_lastSelectTable[0] = '\0';
    }

    /* Clear ORDER BY state after grid is populated */
    g_orderByColumn[0] = '\0';
    g_orderByDesc = 0;

    /* Cleanup */
    DeleteFileA(tmpFile);
    DeleteFileA(tmpErrFile);
    free(sql);
}

void OnButtonStopClick()
{
	MessageBox(NULL, TEXT("Execution stopped!"), TEXT("Info"), MB_OK);
}

/* Sorting helpers for PopulateGridView ORDER BY support */
static int g_guiSortColIndex = -1;
static int g_guiSortDesc = 0;

typedef struct {
    char data[1024];
} GuiRecordEntry;

static void GuiGetFieldValue(const char *data, int colIndex, char *buf, int bufSize)
{
    char tmp[1024];
    char *val;
    int i = 0;

    strcpy(tmp, data);
    val = strtok(tmp, ";");
    while (val) {
        if (i == colIndex) {
            strncpy(buf, val, bufSize - 1);
            buf[bufSize - 1] = '\0';
            return;
        }
        i++;
        val = strtok(NULL, ";");
    }
    buf[0] = '\0';
}

static int GuiCompareRecords(const void *a, const void *b)
{
    const GuiRecordEntry *ra = (const GuiRecordEntry *)a;
    const GuiRecordEntry *rb = (const GuiRecordEntry *)b;
    char valA[256], valB[256];
    int result;
    double numA, numB;
    char *endA, *endB;

    GuiGetFieldValue(ra->data, g_guiSortColIndex, valA, sizeof(valA));
    GuiGetFieldValue(rb->data, g_guiSortColIndex, valB, sizeof(valB));

    numA = strtod(valA, &endA);
    numB = strtod(valB, &endB);
    if (*endA == '\0' && *endB == '\0' && valA[0] != '\0' && valB[0] != '\0') {
        if (numA < numB) result = -1;
        else if (numA > numB) result = 1;
        else result = 0;
    } else {
        result = strcmp(valA, valB);
    }

    return g_guiSortDesc ? -result : result;
}

void PopulateGridView(HWND hwndLV, const char *tableName)
{
    DBHANDLE db;
    char metaFile[1024], metaLine[1024], temp[1024];
    char *tok;
    int col, row;
    LVCOLUMNA lvc;
    LVITEMA lvI;

    /* Clear existing items and columns */
    SendMessage(hwndLV, LVM_DELETEALLITEMS, 0, 0);
    while (SendMessageA(hwndLV, LVM_DELETECOLUMN, 0, 0))
        ;

    /* Read column names from .meta file */
    char colNames[64][256];
    int numCols = 0;

    sprintf(metaFile, "%s.meta", tableName);
    FILE *fp = fopen(metaFile, "r");
    if (!fp) return;

    if (fgets(metaLine, sizeof(metaLine), fp)) {
        metaLine[strcspn(metaLine, "\n")] = '\0';
        strcpy(temp, metaLine);
        tok = strtok(temp, ";");
        while (tok && numCols < 64) {
            strcpy(colNames[numCols], tok);
            numCols++;
            tok = strtok(NULL, ";");
        }
    }
    fclose(fp);

    /* Insert columns */
    memset(&lvc, 0, sizeof(lvc));
    lvc.mask = LVCF_FMT | LVCF_WIDTH | LVCF_TEXT | LVCF_SUBITEM;
    lvc.fmt = LVCFMT_LEFT;
    lvc.cx = 150;

    for (col = 0; col < numCols; col++) {
        lvc.iSubItem = col;
        lvc.pszText = colNames[col];
        SendMessageA(hwndLV, LVM_INSERTCOLUMNA, col, (LPARAM)&lvc);
    }

    /* Open database and read all records */
    if ((db = db_open(tableName, O_RDWR, FILE_MODE)) == NULL)
        return;

    db_rewind(db);

    char keyBuf[1024];
    char *data;
    static GuiRecordEntry records[500];
    int count = 0;

    while ((data = db_nextrec(db, keyBuf)) != NULL && count < 500) {
        strncpy(records[count].data, data, sizeof(records[count].data) - 1);
        records[count].data[sizeof(records[count].data) - 1] = '\0';
        count++;
    }

    db_close(db);

    /* Sort if ORDER BY is requested */
    if (g_orderByColumn[0] != '\0') {
        int orderColIdx = -1;
        int c;
        for (c = 0; c < numCols; c++) {
            if (strcmp(colNames[c], g_orderByColumn) == 0) {
                orderColIdx = c;
                break;
            }
        }
        if (orderColIdx >= 0) {
            g_guiSortColIndex = orderColIdx;
            g_guiSortDesc = g_orderByDesc;
            qsort(records, count, sizeof(GuiRecordEntry), GuiCompareRecords);
        }
    }

    /* Insert sorted records into ListView */
    for (row = 0; row < count; row++) {
        char fields[64][256];
        int numFields = 0;

        strcpy(temp, records[row].data);
        tok = strtok(temp, ";");
        while (tok && numFields < 64) {
            strcpy(fields[numFields], tok);
            numFields++;
            tok = strtok(NULL, ";");
        }

        memset(&lvI, 0, sizeof(lvI));
        lvI.mask = LVIF_TEXT;
        lvI.iItem = row;
        lvI.iSubItem = 0;
        lvI.pszText = numFields > 0 ? fields[0] : "";
        SendMessageA(hwndLV, LVM_INSERTITEMA, 0, (LPARAM)&lvI);

        for (col = 1; col < numFields && col < numCols; col++) {
            lvI.iSubItem = col;
            lvI.pszText = fields[col];
            SendMessageA(hwndLV, LVM_SETITEMTEXTA, row, (LPARAM)&lvI);
        }
    }
}
LRESULT CALLBACK WndProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    static BOOL	bNeedSave = FALSE ;
    static HINSTANCE hInst ;
    static HWND	hwndEdit ;
	static HWND	hwndEditErr;
	static HWND	hwndButtonExec;
	static HWND	hwndButtonStop;
	static HWND	hwndList;
	static HWND	hwndTree;
    static int	iOffset ;
    static TCHAR szFileName[MAX_PATH], szTitleName[MAX_PATH] ;
    static UINT	messageFindReplace ;
    int	iSelBeg, iSelEnd, iEnable ;
    LPFINDREPLACE pfr ;

    
    switch (message)
    {
		case WM_CREATE:
			hInst = ((LPCREATESTRUCT) lParam) -> hInstance ;
	        
				 // Create the edit control child window
	        

			hwndEdit = CreateWindow (TEXT ("edit"), NULL,
								WS_CHILD | WS_VISIBLE | WS_HSCROLL | WS_VSCROLL |
								WS_BORDER | ES_LEFT | ES_MULTILINE |
								ES_NOHIDESEL | ES_AUTOHSCROLL | ES_AUTOVSCROLL,
								0, 0, 800, 250,
								hwnd, (HMENU) EDITID, hInst, NULL) ;


			hwndButtonExec = CreateWindow (TEXT ("button"), TEXT ("Execute"),
							  WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
							  805, 5, 60, 60,
							  hwnd, (HMENU) BUTTONEXECID, hInst, NULL) ;
			

			hwndButtonStop = CreateWindow (TEXT ("button"), TEXT ("Stop"),
							  WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
								875, 5, 60, 60,
								hwnd, (HMENU) BUTTONSTOPID, hInst, NULL) ;


			hwndList = CreateWindow (WC_LISTVIEW, NULL,
								WS_CHILD | LVS_REPORT | LVS_EDITLABELS | WS_VISIBLE | WS_BORDER,
								0, 260, 800, 290,
								hwnd, (HMENU) LISTID, hInst, NULL) ;

			hwndTree = CreateWindow (WC_TREEVIEW, NULL,
								WS_CHILD |  WS_VISIBLE | WS_BORDER,
								800, 80, 284, 582,
								hwnd, (HMENU) TREEID, hInst, NULL) ;

			hwndEditErr = CreateWindow (TEXT ("edit"), NULL,
								WS_CHILD | WS_VISIBLE | WS_HSCROLL | WS_VSCROLL |
								WS_BORDER | ES_LEFT | ES_MULTILINE |
								ES_NOHIDESEL | ES_AUTOHSCROLL | ES_AUTOVSCROLL,
								0, 555, 800, 107,
								hwnd, (HMENU) EDITERRID, hInst, NULL) ;
			
			SendMessage (hwndEdit, EM_LIMITTEXT, 32000, 0L) ;
	        
				 // Initialize common dialog box stuff
	        
			PopFileInitialize (hwnd) ;
			PopFontInitialize (hwndEdit) ;
	        
			messageFindReplace = RegisterWindowMessage (FINDMSGSTRING) ;
	        
			DoCaption (hwnd, szTitleName) ;

			return 0;
			  
		case WM_SETFOCUS:
			  SetFocus (hwndEdit) ;
			  return 0 ;
	          
		 /*case WM_SIZE: 
			  MoveWindow (hwndEdit, 0, 0, LOWORD (lParam), HIWORD (lParam), TRUE) ;
			  return 0 ;*/
	          
		 case WM_INITMENUPOPUP:
			  switch (lParam)
			  {
				  case 1:             // Edit menu
		               
							// Enable Undo if edit control can do it
		               
					   EnableMenuItem ((HMENU) wParam, IDM_EDIT_UNDO,
							SendMessage (hwndEdit, EM_CANUNDO, 0, 0L) ?
													 MF_ENABLED : MF_GRAYED) ;
		               
							// Enable Paste if text is in the clipboard
		               
					   EnableMenuItem ((HMENU) wParam, IDM_EDIT_PASTE,
							IsClipboardFormatAvailable (CF_TEXT) ?
													 MF_ENABLED : MF_GRAYED) ;
		               
							// Enable Cut, Copy, and Del if text is selected
		               
					   SendMessage (hwndEdit, EM_GETSEL, (WPARAM) &iSelBeg,
														 (LPARAM) &iSelEnd) ;
		               
					   iEnable = iSelBeg != iSelEnd ? MF_ENABLED : MF_GRAYED ;
		               
					   EnableMenuItem ((HMENU) wParam, IDM_EDIT_CUT,   iEnable) ;
					   EnableMenuItem ((HMENU) wParam, IDM_EDIT_COPY,  iEnable) ;
					   EnableMenuItem ((HMENU) wParam, IDM_EDIT_CLEAR, iEnable) ;
					   break ;
		               
				  case 2:             // Search menu
		               
					   // Enable Find, Next, and Replace if modeless
					   //   dialogs are not already active
		               
					   iEnable = hDlgModeless == NULL ?
									  MF_ENABLED : MF_GRAYED ;
		               
					   EnableMenuItem ((HMENU) wParam, IDM_SEARCH_FIND,    iEnable) ;
					   EnableMenuItem ((HMENU) wParam, IDM_SEARCH_NEXT,    iEnable) ;
					   EnableMenuItem ((HMENU) wParam, IDM_SEARCH_REPLACE, iEnable) ;
					   break ;
			  }
			  return 0 ;
	     
		 case WM_COMMAND:
				   // Messages from edit control
	          
			  if (lParam && LOWORD (wParam) == EDITID)
			  {
				   switch (HIWORD (wParam))
				   {
				   case EN_UPDATE :
						bNeedSave = TRUE ;
						return 0 ;
	                    
				   case EN_ERRSPACE :
				   case EN_MAXTEXT :
						MessageBox (hwnd, TEXT ("Edit control out of space."),
									szAppName, MB_OK | MB_ICONSTOP) ;
						return 0 ;
				   }
				   break ;
			  }

			  /* Messages from button Exec*/

			  if (LOWORD(wParam) == BUTTONEXECID && HIWORD(wParam) == BN_CLICKED)
				  OnButtonExecClick(hwndEdit, hwndList);
	          
			  /* Messages from button Stop*/

			  if (LOWORD(wParam) == BUTTONSTOPID && HIWORD(wParam) == BN_CLICKED)
				  OnButtonStopClick();
	          
			  switch (LOWORD (wParam))
			  {
				   // Messages from File menu
	               
				  case IDM_FILE_NEW:
					   if (bNeedSave && IDCANCEL == AskAboutSave (hwnd, szTitleName))
							return 0 ;
		               
					   SetWindowText (hwndEdit, TEXT ("\0")) ;
					   szFileName[0]  = '\0' ;
					   szTitleName[0] = '\0' ;
					   DoCaption (hwnd, szTitleName) ;
					   bNeedSave = FALSE ;
					   return 0 ;
	               
				  case IDM_FILE_OPEN:
					   if (bNeedSave && IDCANCEL == AskAboutSave (hwnd, szTitleName))
							return 0 ;
		               
					   if (PopFileOpenDlg (hwnd, szFileName, szTitleName))
					   {
							if (!PopFileRead (hwndEdit, szFileName))
							{
								 OkMessage (hwnd, TEXT ("Could not read file %s!"),
											szTitleName) ;
								 szFileName[0]  = '\0' ;
								 szTitleName[0] = '\0' ;
							}
					   }
	               
					   DoCaption (hwnd, szTitleName) ;
					   bNeedSave = FALSE ;
					   return 0 ;
	               
				  case IDM_FILE_SAVE:
					   if (szFileName[0])
					   {
							if (PopFileWrite (hwndEdit, szFileName))
							{
								 bNeedSave = FALSE ;
								 return 1 ;
							}
							else
							{
								 OkMessage (hwnd, TEXT ("Could not write file %s"),
											szTitleName) ;
								 return 0 ;
							}
					   }
									   // fall through
				  case IDM_FILE_SAVE_AS:
					   if (PopFileSaveDlg (hwnd, szFileName, szTitleName))
					   {
							DoCaption (hwnd, szTitleName) ;
		                    
							if (PopFileWrite (hwndEdit, szFileName))
							{
								 bNeedSave = FALSE ;
								 return 1 ;
							}
							else
							{
								 OkMessage (hwnd, TEXT ("Could not write file %s"),
											szTitleName) ;
								 return 0 ;
							}
					   }
					   return 0 ;
	               
				  case IDM_FILE_PRINT:
					   if (!PopPrntPrintFile (hInst, hwnd, hwndEdit, szTitleName))
							OkMessage (hwnd, TEXT ("Could not print file %s"),
											 szTitleName) ;
					   return 0 ;
	               
				  case IDM_APP_EXIT:
					   SendMessage (hwnd, WM_CLOSE, 0, 0) ;
					   return 0 ;
	               
						// Messages from Edit menu
	               
				  case IDM_EDIT_UNDO:
					   SendMessage (hwndEdit, WM_UNDO, 0, 0) ;
					   return 0 ;
		               
				  case IDM_EDIT_CUT:
					   SendMessage (hwndEdit, WM_CUT, 0, 0) ;
					   return 0 ;
		               
				  case IDM_EDIT_COPY:
					   SendMessage (hwndEdit, WM_COPY, 0, 0) ;
					   return 0 ;
		               
				  case IDM_EDIT_PASTE:
					   SendMessage (hwndEdit, WM_PASTE, 0, 0) ;
					   return 0 ;
		               
				  case IDM_EDIT_CLEAR:
					   SendMessage (hwndEdit, WM_CLEAR, 0, 0) ;
					   return 0 ;
	               
				  case IDM_EDIT_SELECT_ALL:
					   SendMessage (hwndEdit, EM_SETSEL, 0, -1) ;
					   return 0 ;
	               
						// Messages from Search menu
	               
				  case IDM_SEARCH_FIND:
					   SendMessage (hwndEdit, EM_GETSEL, 0, (LPARAM) &iOffset) ;
					   hDlgModeless = PopFindFindDlg (hwnd) ;
					   return 0 ;
		               
				  case IDM_SEARCH_NEXT:
					   SendMessage (hwndEdit, EM_GETSEL, 0, (LPARAM) &iOffset) ;
		               
					   if (PopFindValidFind ())
							PopFindNextText (hwndEdit, &iOffset) ;
					   else
							hDlgModeless = PopFindFindDlg (hwnd) ;
		               
					   return 0 ;
		               
				  case IDM_SEARCH_REPLACE:
					   SendMessage (hwndEdit, EM_GETSEL, 0, (LPARAM) &iOffset) ;
					   hDlgModeless = PopFindReplaceDlg (hwnd) ;
					   return 0 ;
	               
				  case IDM_FORMAT_FONT:
					   if (PopFontChooseFont (hwnd))
							PopFontSetFont (hwndEdit) ;
		               
					   return 0 ;
	               
						// Messages from Help menu
	               
				  case IDM_HELP:
					   OkMessage (hwnd, TEXT ("Help not yet implemented!"), 
										TEXT ("\0")) ;
					   return 0 ;
		               
				  case IDM_APP_ABOUT:
					   DialogBox (hInst, TEXT ("AboutBox"), hwnd, AboutDlgProc) ;
					   return 0 ;
			  }
			  break ;
	               
		 case WM_CLOSE:
			  if (!bNeedSave || IDCANCEL != AskAboutSave (hwnd, szTitleName))
				   DestroyWindow (hwnd) ;
	          
			  return 0 ;
	          
		 case WM_QUERYENDSESSION :
			  if (!bNeedSave || IDCANCEL != AskAboutSave (hwnd, szTitleName))
				   return 1 ;
	          
			  return 0 ;
	          
		 case WM_DESTROY:
			  PopFontDeinitialize () ;
			  PostQuitMessage (0) ;
			  return 0 ;
	          
		 default:
				   // Process "Find-Replace" messages
	          
			  if (message == messageFindReplace)
			  {
				   pfr = (LPFINDREPLACE) lParam ;
	               
				   if (pfr->Flags & FR_DIALOGTERM)
						hDlgModeless = NULL ;
	               
				   if (pfr->Flags & FR_FINDNEXT)
						if (!PopFindFindText (hwndEdit, &iOffset, pfr))
							 OkMessage (hwnd, TEXT ("Text not found!"), 
											  TEXT ("\0")) ;
	                    
				   if (pfr->Flags & FR_REPLACE || pfr->Flags & FR_REPLACEALL)
						if (!PopFindReplaceText (hwndEdit, &iOffset, pfr))
							 OkMessage (hwnd, TEXT ("Text not found!"), 
											  TEXT ("\0")) ;
	                         
				   if (pfr->Flags & FR_REPLACEALL)
						while (PopFindReplaceText (hwndEdit, &iOffset, pfr)) ;
	                              
				   return 0 ;
			  }
			  break ;
     }
     return DefWindowProc (hwnd, message, wParam, lParam) ;
}

INT_PTR CALLBACK AboutDlgProc (HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
     switch (message)
     {
     case WM_INITDIALOG:
          return TRUE ;
          
     case WM_COMMAND:
          switch (LOWORD (wParam))
          {
          case IDOK:
               EndDialog (hDlg, 0) ;
               return TRUE ;
          }
          break ;
     }
     return FALSE ;
}
