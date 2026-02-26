#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <io.h>
#include <ctype.h>
#include "query_executor.h"
#include "catalog.h"
#include "../evolution/db/database.h"
#include "../evolution/db/apue.h"
#include "../evolution/db/apue_db.h"

/* Flex/Bison externs */
extern int yyparse(void);
typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE yy_scan_string(const char *str);
extern void yy_delete_buffer(YY_BUFFER_STATE buf);
extern int yylex_destroy(void);
extern int yylineno;

/* ----------------------------------------------------------------
 *  Engine initialization
 * ---------------------------------------------------------------- */
void query_engine_init(void)
{
    g_gui_mode = 1;   /* Suppress printf output from EvoSQL */
    g_gui_error = 0;
}

/* ----------------------------------------------------------------
 *  Helpers: strip SQL whitespace/semicolons, detect statement type
 * ---------------------------------------------------------------- */
static void strip_trailing(char *sql)
{
    int len = (int)strlen(sql);
    while (len > 0 && (sql[len-1] == ';' || sql[len-1] == ' ' ||
           sql[len-1] == '\n' || sql[len-1] == '\r' || sql[len-1] == '\t'))
        sql[--len] = '\0';
}

static int is_select_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (_strnicmp(sql, "SELECT", 6) == 0);
}

static int is_insert_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (_strnicmp(sql, "INSERT", 6) == 0);
}

static int is_create_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (_strnicmp(sql, "CREATE", 6) == 0);
}

static int is_update_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (_strnicmp(sql, "UPDATE", 6) == 0);
}

static int is_delete_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (_strnicmp(sql, "DELETE", 6) == 0);
}

static int is_drop_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (_strnicmp(sql, "DROP", 4) == 0);
}

static int is_truncate_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (_strnicmp(sql, "TRUNCATE", 8) == 0);
}

/* Map EvoSQL type encoding to PostgreSQL type OID */
static int type_encoding_to_pg_oid(int typeEncoding)
{
    int family = typeEncoding / 10000;
    switch (family) {
    case 1:  return PG_OID_INT4;    /* BIT/TINYINT → int4 */
    case 2:  return PG_OID_INT2;    /* SMALLINT */
    case 3:  return PG_OID_INT4;    /* MEDIUMINT → int4 */
    case 4:  return PG_OID_INT4;    /* INT */
    case 5:  return PG_OID_INT4;    /* INTEGER */
    case 6:  return PG_OID_INT8;    /* BIGINT */
    case 7:  return PG_OID_FLOAT8;  /* REAL → float8 */
    case 8:  return PG_OID_FLOAT8;  /* DOUBLE */
    case 9:  return PG_OID_FLOAT4;  /* FLOAT */
    case 10: return PG_OID_DATE;    /* DATE/TIME/TIMESTAMP */
    case 11: return PG_OID_FLOAT8;  /* DECIMAL → float8 */
    case 12: return PG_OID_BPCHAR;  /* CHAR */
    case 13: return PG_OID_VARCHAR; /* VARCHAR */
    case 22: return PG_OID_BOOL;    /* BOOLEAN */
    default: return PG_OID_TEXT;    /* BLOB, TEXT, ENUM, SET, etc. */
    }
}

/* ----------------------------------------------------------------
 *  Collect SELECT results into ResultSet
 * ---------------------------------------------------------------- */
static void collect_select_results(const char *tableName, ResultSet *rs)
{
    DBHANDLE db;
    char metaFile[1024], line[1024];
    char keyBuf[1024];
    char *data;
    FILE *fp;
    int count = 0;
    int colTypes[64];
    int numTypes = 0;

    rs->is_select = 1;

    /* Read type encodings from .meta line 3 */
    numTypes = ReadColumnTypes(tableName, colTypes, 64);

    /* Read column metadata from .meta file */
    sprintf(metaFile, "%s.meta", tableName);
    fp = fopen(metaFile, "r");
    if (!fp) {
        result_set_error(rs, "42P01",
            "relation does not exist");
        return;
    }

    if (fgets(line, sizeof(line), fp)) {
        char *col;
        int colIdx = 0;
        line[strcspn(line, "\n")] = '\0';
        col = strtok(line, ";");
        while (col) {
            int oid = (colIdx < numTypes)
                      ? type_encoding_to_pg_oid(colTypes[colIdx])
                      : PG_OID_TEXT;
            result_add_column(rs, col, oid);
            colIdx++;
            col = strtok(NULL, ";");
        }
    }
    fclose(fp);

    /* Open database and read records */
    db = db_open(tableName, O_RDWR, FILE_MODE);
    if (!db) {
        result_set_error(rs, "42P01",
            "could not open table");
        return;
    }

    db_rewind(db);
    while ((data = db_nextrec(db, keyBuf)) != NULL && count < MAX_ROWS) {
        int row = result_add_row(rs);
        if (row < 0) break;

        /* Parse semicolon-separated fields */
        char temp[1024];
        int col = 0;
        strncpy(temp, data, sizeof(temp) - 1);
        temp[sizeof(temp) - 1] = '\0';

        char *val = strtok(temp, ";");
        while (val && col < rs->num_cols) {
            result_set_field(rs, row, col, val);
            col++;
            val = strtok(NULL, ";");
        }
        count++;
    }

    db_close(db);

    /* Handle ORDER BY if set */
    if (g_orderByColumn[0] != '\0' && count > 1) {
        /* Find column index */
        int orderCol = -1;
        int c;
        for (c = 0; c < rs->num_cols; c++) {
            if (strcmp(rs->columns[c].name, g_orderByColumn) == 0) {
                orderCol = c;
                break;
            }
        }
        if (orderCol >= 0) {
            /* Simple bubble sort for MVP */
            int i, j;
            int desc = g_orderByDesc;
            for (i = 0; i < rs->num_rows - 1; i++) {
                for (j = 0; j < rs->num_rows - 1 - i; j++) {
                    char *a = rs->rows[j].fields[orderCol];
                    char *b = rs->rows[j+1].fields[orderCol];

                    /* Try numeric comparison */
                    char *endA, *endB;
                    double numA = strtod(a, &endA);
                    double numB = strtod(b, &endB);
                    int cmp;

                    if (*endA == '\0' && *endB == '\0' &&
                        a[0] != '\0' && b[0] != '\0') {
                        cmp = (numA > numB) ? 1 : (numA < numB) ? -1 : 0;
                    } else {
                        cmp = strcmp(a, b);
                    }

                    if (desc) cmp = -cmp;

                    if (cmp > 0) {
                        Row tmp = rs->rows[j];
                        rs->rows[j] = rs->rows[j+1];
                        rs->rows[j+1] = tmp;
                    }
                }
            }
        }
    }

    /* Clear ORDER BY state */
    g_orderByColumn[0] = '\0';
    g_orderByDesc = 0;

    sprintf(rs->command_tag, "SELECT %d", count);
}

/* ----------------------------------------------------------------
 *  Execute SQL through EvoSQL parser
 *
 *  IMPORTANT: The APUE db library (db.c) calls err_dump/err_sys on
 *  many internal errors (lseek, read, invalid index, etc.).  In GUI
 *  mode these do longjmp(g_gui_jmpbuf, 1).  Therefore ANY code that
 *  touches the db library (db_open, db_nextrec, …) MUST run inside
 *  the setjmp scope, and the stdout/stderr restore MUST be guarded
 *  against double-close in case longjmp fires after the first restore.
 * ---------------------------------------------------------------- */
static void execute_via_parser(const char *sql, ResultSet *rs)
{
    char *sqlCopy;
    /* volatile: values survive longjmp per C standard */
    volatile int saved_stdout = -1;
    volatile int saved_stderr = -1;
    volatile YY_BUFFER_STATE scan_buf = NULL;

    /* Make a mutable copy, strip \r */
    sqlCopy = _strdup(sql);
    if (!sqlCopy) {
        result_set_error(rs, "53000", "out of memory");
        return;
    }

    /* Remove \r characters (lexer doesn't like them) */
    {
        char *src = sqlCopy, *dst = sqlCopy;
        while (*src) {
            if (*src != '\r')
                *dst++ = *src;
            src++;
        }
        *dst = '\0';
    }

    /* Ensure SQL ends with semicolon and newline for parser */
    {
        int len = (int)strlen(sqlCopy);
        char *withSemicolon = (char *)malloc(len + 4);
        if (!withSemicolon) {
            free(sqlCopy);
            result_set_error(rs, "53000", "out of memory");
            return;
        }
        strcpy(withSemicolon, sqlCopy);
        /* Strip trailing whitespace/semicolons */
        strip_trailing(withSemicolon);
        strcat(withSemicolon, "\n;\n");
        free(sqlCopy);
        sqlCopy = withSemicolon;
    }

    /* Reset global state — clear ALL parser globals to prevent stale
     * values from a previous query from interfering with this one. */
    g_gui_mode = 1;
    g_gui_error = 0;
    g_gui_error_msg[0] = '\0';
    g_lastSelectTable[0] = '\0';
    g_tblSelectionName[0] = '\0';
    g_tblName[0] = '\0';
    g_tblInsertionName[0] = '\0';
    g_tblUpdateTableName[0] = '\0';
    g_tblDelName[0] = '\0';
    g_tblDropName[0] = '\0';
    g_insert[0] = '\0';
    g_whereSel[0] = '\0';
    g_columnDefs[0] = '\0';
    g_columnNames[0] = '\0';
    g_orderByColumn[0] = '\0';
    g_orderByDesc = 0;
    g_totalColumnSize = 0;
    g_currentColNotNull = 0;
    g_currentColPrimaryKey = 0;
    g_columnNullFlags[0] = '\0';
    g_primaryKeyIndex = -1;
    g_columnCount = 0;

    /* Redirect stdout/stderr to NUL to suppress parser output */
    saved_stdout = _dup(1);
    saved_stderr = _dup(2);
    {
        FILE *fnul = fopen("NUL", "w");
        if (fnul) {
            _dup2(_fileno(fnul), 1);
            _dup2(_fileno(fnul), 2);
            fclose(fnul);
        }
    }

    /* ----- setjmp scope -----
     * Everything that can call err_sys / err_dump / err_quit (which
     * longjmp back here in GUI mode) MUST be inside this block.
     * This includes the parser AND collect_select_results (which
     * calls db_open / db_nextrec that use err_dump internally). */
    if (setjmp(g_gui_jmpbuf) == 0) {
        int parse_result;
        yylineno = 1;
        scan_buf = yy_scan_string(sqlCopy);
        parse_result = yyparse();
        yy_delete_buffer((YY_BUFFER_STATE)scan_buf);
        yylex_destroy();
        scan_buf = NULL;

        /* yyparse returns 0 on success, 1 on syntax error, 2 on OOM */
        if (parse_result != 0) {
            rs->has_error = 1;
            strcpy(rs->error_sqlstate, "42601");
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "Syntax error: %.200s", sql);
        }

        /* Check if engine set a validation/runtime error (e.g. type mismatch) */
        if (!rs->has_error && g_gui_error) {
            rs->has_error = 1;
            strcpy(rs->error_sqlstate, "22000");
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "%.500s", g_gui_error_msg[0] ? g_gui_error_msg : "data validation error");
        }

        /* Restore stdout/stderr BEFORE collect_select_results so that
         * any subsequent printf works, and mark fds as consumed. */
        if (saved_stdout >= 0) { _dup2(saved_stdout, 1); _close(saved_stdout); saved_stdout = -1; }
        if (saved_stderr >= 0) { _dup2(saved_stderr, 2); _close(saved_stderr); saved_stderr = -1; }

        /* Collect SELECT results (calls db_open/db_nextrec which may
         * longjmp on corrupted data — now safely inside setjmp scope) */
        if (!rs->has_error && g_lastSelectTable[0] != '\0') {
            collect_select_results(g_lastSelectTable, rs);
            g_lastSelectTable[0] = '\0';
        } else if (!rs->has_error) {
            /* DDL/DML command — determine appropriate tag */
            if (is_create_query(sql))
                strcpy(rs->command_tag, "CREATE TABLE");
            else if (is_insert_query(sql))
                strcpy(rs->command_tag, "INSERT 0 1");
            else if (is_update_query(sql))
                strcpy(rs->command_tag, "UPDATE 1");
            else if (is_delete_query(sql))
                strcpy(rs->command_tag, "DELETE 1");
            else if (is_drop_query(sql))
                strcpy(rs->command_tag, "DROP TABLE");
            else if (is_truncate_query(sql))
                strcpy(rs->command_tag, "TRUNCATE TABLE");
            else
                strcpy(rs->command_tag, "OK");
        }
    } else {
        /* Error occurred via longjmp (err_sys/err_quit/err_dump).
         * Clean up Flex scanner if it was still active. */
        if (scan_buf) {
            yy_delete_buffer((YY_BUFFER_STATE)scan_buf);
            yylex_destroy();
            scan_buf = NULL;
        }
        rs->has_error = 1;
        strcpy(rs->error_sqlstate, "42000");
        snprintf(rs->error_message, sizeof(rs->error_message),
                 "SQL execution error: %.200s", sql);
    }

    /* Restore stdout/stderr if not already done (longjmp path) */
    if (saved_stdout >= 0) { _dup2(saved_stdout, 1); _close(saved_stdout); }
    if (saved_stderr >= 0) { _dup2(saved_stderr, 2); _close(saved_stderr); }

    free(sqlCopy);
}

/* ----------------------------------------------------------------
 *  Normalize SQL for DBeaver compatibility
 *  - Remove double quotes around identifiers: "Stok" → Stok
 *  - Strip schema prefix: public.Foo → Foo
 *  - Replace alias.* with *: s.* → *
 *  - Remove table aliases: FROM Stok AS s → FROM Stok
 *  - Remove LIMIT/OFFSET clauses (not supported by parser)
 *
 *  IMPORTANT: Quote removal MUST happen before schema prefix
 *  removal, because DBeaver sends "public"."Stok" — the quotes
 *  around "public" prevent the public. prefix match.
 * ---------------------------------------------------------------- */
static void normalize_sql(char *sql)
{
    char buf[8192];
    char *src, *dst;
    int len;

    /* Pass 1: Remove double quotes around identifiers */
    src = sql;
    dst = buf;
    while (*src) {
        if (*src == '"') {
            src++;  /* skip opening quote */
            while (*src && *src != '"') {
                *dst++ = *src++;
            }
            if (*src == '"') src++;  /* skip closing quote */
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Pass 2: Remove "public." prefix (case-insensitive) */
    src = sql;
    dst = buf;
    while (*src) {
        if (_strnicmp(src, "public.", 7) == 0) {
            src += 7;  /* skip "public." */
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Pass 3: Remove "alias." prefix from qualified references
     *   alias.*       → *       (e.g. s.* → *)
     *   alias.column  → column  (e.g. x.id → id)
     * Only triggers when char before dot is a letter/underscore (not digit,
     * so 3.14 is left alone) and char after dot is letter/underscore or '*'. */
    src = sql;
    dst = buf;
    while (*src) {
        if (*src == '.' && dst > buf &&
            (isalpha((unsigned char)*(src - 1)) || *(src - 1) == '_') &&
            (src[1] == '*' || isalpha((unsigned char)src[1]) || src[1] == '_')) {
            /* Walk backwards in dst to erase the alias word */
            char *alias_start = dst - 1;
            while (alias_start > buf && (isalnum((unsigned char)*(alias_start-1)) || *(alias_start-1) == '_'))
                alias_start--;
            dst = alias_start;
            src++;  /* skip the dot, next char (*|column) will be copied normally */
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Pass 4: Remove "AS <alias>" after table name in FROM clause */
    src = sql;
    dst = buf;
    while (*src) {
        /* Look for " AS " (case-insensitive, surrounded by spaces) */
        if ((*src == ' ' || *src == '\t') &&
            _strnicmp(src + 1, "AS ", 3) == 0 &&
            (isalpha((unsigned char)src[4]) || src[4] == '_')) {
            /* Skip " AS alias" */
            char *p = src + 4;
            while (*p && (isalnum((unsigned char)*p) || *p == '_'))
                p++;
            src = p;  /* skip past the alias */
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Pass 5: Remove LIMIT and OFFSET clauses */
    {
        char *p = sql;
        while (*p) {
            while (*p && isspace((unsigned char)*p)) p++;
            if (_strnicmp(p, "LIMIT", 5) == 0 && (p[5] == ' ' || p[5] == '\t')) {
                /* Find end of LIMIT clause (LIMIT <number>) */
                *p = '\0';
                break;
            }
            if (_strnicmp(p, "OFFSET", 6) == 0 && (p[6] == ' ' || p[6] == '\t')) {
                *p = '\0';
                break;
            }
            /* Advance to next word */
            while (*p && !isspace((unsigned char)*p)) p++;
        }
    }

    /* Clean up: strip trailing whitespace */
    len = (int)strlen(sql);
    while (len > 0 && isspace((unsigned char)sql[len-1]))
        sql[--len] = '\0';
}

/* ----------------------------------------------------------------
 *  Main entry point
 * ---------------------------------------------------------------- */
void query_execute(const char *sql, ResultSet *rs)
{
    char normalized[8192];

    result_init(rs);

    /* First, try catalog/internal queries (before normalization) */
    if (catalog_try_handle(sql, rs)) {
        return;
    }

    /* Reset rs — catalog sub-handlers may have modified it before returning 0 */
    result_init(rs);

    /* Normalize SQL for DBeaver compatibility */
    strncpy(normalized, sql, sizeof(normalized) - 1);
    normalized[sizeof(normalized) - 1] = '\0';
    normalize_sql(normalized);

    printf("[adaptor] Normalized SQL: %.200s%s\n", normalized,
           strlen(normalized) > 200 ? "..." : "");
    fflush(stdout);

    /* Real EvoSQL query */
    execute_via_parser(normalized, rs);
}
