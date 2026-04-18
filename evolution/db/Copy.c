/*
 * Copy.c — PostgreSQL-compatible COPY command (Task 85, Feature #61)
 *
 * Provides bulk import/export between tables and CSV/TEXT files or streams.
 *
 * v1 scope:
 *   - Server-side file mode: COPY tbl FROM '/path', COPY tbl TO '/path'
 *   - Options: FORMAT CSV/TEXT, DELIMITER, HEADER, NULL, QUOTE
 *   - Path traversal guard (reject '..')
 *   - COPY FROM: line-by-line InsertProcess invocation (reuses constraints/FK/indexes)
 *   - COPY TO: tapi_scan + tup_extract_fields + csv_format_line
 *
 * Deferred to later tasks:
 *   - Stream mode (STDIN/STDOUT) via PG wire COPY subprotocol (Faz 4)
 *   - EVO text protocol COPY command (Faz 5)
 *   - Strict superuser check for file mode (Faz 6)
 *   - COPY (SELECT ...) TO
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "database.h"
#include "query_context.h"
#include "csv.h"
#include "table_api.h"
#include "tuple_format.h"
#include "catalog_internal.h"

/* ---- Parser helpers — called from evoparser.y semantic actions ---- */

void CopyBegin(const char *tbl)
{
    memset(&g_copy, 0, sizeof(g_copy));
    g_copy.active   = 1;
    g_copy.isSelect = 0;
    strncpy(g_copy.tblName, tbl ? tbl : "", sizeof(g_copy.tblName) - 1);
    /* CSV defaults — TEXT format overrides in CopySetFormat */
    g_copy.format    = EVO_COPY_FMT_TEXT;
    g_copy.delimiter = '\t';
    g_copy.quote     = '"';
    strncpy(g_copy.nullStr, "\\N", sizeof(g_copy.nullStr) - 1);
    g_copy.header    = 0;
    g_copy.source    = EVO_COPY_SRC_FILE;
}

void CopySelectBegin(const char *select_sql)
{
    memset(&g_copy, 0, sizeof(g_copy));
    g_copy.active   = 1;
    g_copy.isSelect = 1;
    if (select_sql) {
        strncpy(g_copy.selectSQL, select_sql, sizeof(g_copy.selectSQL) - 1);
    }
    g_copy.format    = EVO_COPY_FMT_TEXT;
    g_copy.delimiter = '\t';
    g_copy.quote     = '"';
    strncpy(g_copy.nullStr, "\\N", sizeof(g_copy.nullStr) - 1);
    g_copy.direction = EVO_COPY_DIR_TO;    /* only COPY (SELECT) TO makes sense */
    g_copy.source    = EVO_COPY_SRC_FILE;
}

void CopyAddColumn(const char *col)
{
    if (!col) return;
    if (g_copy.columnCount >= (int)(sizeof(g_copy.columns) / sizeof(g_copy.columns[0])))
        return;
    strncpy(g_copy.columns[g_copy.columnCount],
            col,
            sizeof(g_copy.columns[0]) - 1);
    g_copy.columnCount++;
}

void CopySetDirection(int dir)
{
    g_copy.direction = (dir == EVO_COPY_DIR_TO) ? EVO_COPY_DIR_TO : EVO_COPY_DIR_FROM;
}

void CopySetSourcePath(const char *path)
{
    g_copy.source = EVO_COPY_SRC_FILE;
    if (!path) return;

    /* The lexer's STRING token retains its surrounding quotes; strip them. */
    size_t len = strlen(path);
    const char *start = path;
    if (len >= 2 &&
        ((path[0] == '\'' && path[len - 1] == '\'') ||
         (path[0] == '"'  && path[len - 1] == '"'))) {
        start = path + 1;
        len -= 2;
    }
    if (len >= sizeof(g_copy.path)) len = sizeof(g_copy.path) - 1;
    memcpy(g_copy.path, start, len);
    g_copy.path[len] = '\0';
}

void CopySetSourceStream(int src)
{
    /* STDIN implies FROM, STDOUT implies TO — parser must enforce consistency */
    g_copy.source = (src == EVO_COPY_SRC_STDOUT) ? EVO_COPY_SRC_STDOUT
                                                 : EVO_COPY_SRC_STDIN;
    g_copy.path[0] = '\0';
}

void CopySetFormat(int fmt)
{
    if (fmt == EVO_COPY_FMT_CSV) {
        g_copy.format    = EVO_COPY_FMT_CSV;
        g_copy.delimiter = ',';
        /* CSV default null string is empty */
        g_copy.nullStr[0] = '\0';
    } else {
        g_copy.format    = EVO_COPY_FMT_TEXT;
        g_copy.delimiter = '\t';
        strncpy(g_copy.nullStr, "\\N", sizeof(g_copy.nullStr) - 1);
    }
}

/* Strip surrounding single/double quotes from a lexer STRING token
 * into a caller-provided buffer. */
static void strip_quotes(const char *in, char *out, size_t out_size)
{
    if (!in || !out || out_size == 0) { if (out && out_size) out[0] = '\0'; return; }
    size_t len = strlen(in);
    const char *start = in;
    if (len >= 2 &&
        ((in[0] == '\'' && in[len - 1] == '\'') ||
         (in[0] == '"'  && in[len - 1] == '"'))) {
        start = in + 1;
        len -= 2;
    }
    if (len >= out_size) len = out_size - 1;
    memcpy(out, start, len);
    out[len] = '\0';
}

void CopySetDelimiter(const char *d)
{
    if (!d || !*d) return;
    char buf[8];
    strip_quotes(d, buf, sizeof(buf));
    if (buf[0]) g_copy.delimiter = buf[0];
}

void CopySetHeader(int v)
{
    g_copy.header = v ? 1 : 0;
}

void CopySetNullStr(const char *s)
{
    if (!s) return;
    strip_quotes(s, g_copy.nullStr, sizeof(g_copy.nullStr));
}

void CopySetQuote(const char *q)
{
    if (!q || !*q) return;
    char buf[8];
    strip_quotes(q, buf, sizeof(buf));
    if (buf[0]) g_copy.quote = buf[0];
}

/* ---- Path safety ---- */

static int copy_path_is_safe(const char *path)
{
    if (!path || !*path) return 0;
    /* Reject obvious traversal — require absolute path, no ".." component */
    if (path[0] != '/') return 0;
    const char *p = path;
    while ((p = strstr(p, "..")) != NULL) {
        int prev_ok = (p == path || p[-1] == '/');
        int next_ok = (p[2] == '\0' || p[2] == '/');
        if (prev_ok && next_ok) return 0;
        p += 2;
    }
    return 1;
}

/* ---- Dialect builder from g_copy ---- */

static void copy_build_dialect(CsvDialect *d)
{
    memset(d, 0, sizeof(*d));
    d->format    = g_copy.format;
    d->delimiter = g_copy.delimiter ? g_copy.delimiter :
                   (g_copy.format == EVO_COPY_FMT_CSV ? ',' : '\t');
    d->quote     = g_copy.quote ? g_copy.quote : '"';
    strncpy(d->null_str, g_copy.nullStr, sizeof(d->null_str) - 1);
}

/* ---- COPY FROM file — feed each CSV row through InsertProcess ---- */

static int copy_from_file(void)
{
    CsvDialect dia;
    copy_build_dialect(&dia);

    FILE *fp = fopen(g_copy.path, "r");
    if (!fp) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not open file \"%s\" for reading: %s",
                 g_copy.path, strerror(errno));
        g_err.error = 1;
        return -1;
    }

    /* Read line-by-line. A 64 KB line buffer is generous for typical CSVs. */
    char *line = malloc(65536);
    if (!line) {
        fclose(fp);
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg), "out of memory in COPY");
        g_err.error = 1;
        return -1;
    }

    int skipped_header = 0;
    int inserted = 0;

    while (fgets(line, 65536, fp) != NULL) {
        /* Strip trailing CR/LF */
        size_t len = strlen(line);
        while (len > 0 && (line[len - 1] == '\n' || line[len - 1] == '\r')) {
            line[--len] = '\0';
        }
        if (len == 0) continue;

        if (g_copy.header && !skipped_header) {
            skipped_header = 1;
            continue;
        }

        char fields[CSV_MAX_FIELDS][CSV_MAX_FIELD_LEN];
        int  is_null[CSV_MAX_FIELDS];
        int  nf = 0;
        if (csv_parse_line(line, &dia, fields, is_null, CSV_MAX_FIELDS, &nf) < 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "COPY parse error at row %d", inserted + 1);
            g_err.error = 1;
            free(line);
            fclose(fp);
            return -1;
        }

        /* Build g_ins for a single row, then call InsertProcess. */
        TruncateInsert();
        strncpy(g_ins.tblName, g_copy.tblName, sizeof(g_ins.tblName) - 1);
        g_ins.columnCount = g_copy.columnCount;
        for (int c = 0; c < g_copy.columnCount; c++) {
            strncpy(g_ins.columns[c], g_copy.columns[c],
                    sizeof(g_ins.columns[c]) - 1);
        }
        g_ins.rowCount = 0;

        for (int c = 0; c < nf; c++) {
            if (is_null[c]) {
                /* Insert.c recognises literal "\x01NULL\x01" as NULL marker */
                GetInsertions("\x01NULL\x01");
            } else {
                GetInsertions(fields[c]);
            }
        }
        InsertRowSeparator();

        int ip_rc = InsertProcess();
        if (ip_rc != 0 || g_err.error) {
            free(line);
            fclose(fp);
            return -1;
        }
        inserted += (g_ins.rowCount > 0) ? g_ins.rowCount : 1;
    }

    free(line);
    fclose(fp);
    g_copy.rowCount = inserted;
    return 0;
}

/* ---- COPY TO file — scan table and write CSV lines ---- */

static int copy_to_file(void)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = 0;
    if (tapi_resolve(g_copy.tblName, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not open table \"%s\"", g_copy.tblName);
        g_err.error = 1;
        return -1;
    }

    CsvDialect dia;
    copy_build_dialect(&dia);

    FILE *fp = fopen(g_copy.path, "w");
    if (!fp) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not open file \"%s\" for writing: %s",
                 g_copy.path, strerror(errno));
        g_err.error = 1;
        return -1;
    }

    /* Header row if requested */
    if (g_copy.header) {
        const char *cnames[CAT_MAX_COLUMNS];
        int is_null_hdr[CAT_MAX_COLUMNS];
        for (int i = 0; i < ncols; i++) {
            cnames[i] = cols[i].col_name;
            is_null_hdr[i] = 0;
        }
        char out[8192];
        size_t nw = 0;
        if (csv_format_line(cnames, is_null_hdr, ncols, &dia,
                            out, sizeof(out), &nw) < 0) {
            fclose(fp);
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "COPY header serialization failed");
            g_err.error = 1;
            return -1;
        }
        fwrite(out, 1, nw, fp);
        fputc('\n', fp);
    }

    TableScanCursor cur;
    if (tapi_scan_begin(&td, &cur) < 0) {
        /* Empty table is fine */
        fclose(fp);
        g_copy.rowCount = 0;
        return 0;
    }

    char pk_key[256];
    char record[RECORD_BUF_SIZE];
    int exported = 0;

    while (tapi_scan_next(&cur, pk_key, record, sizeof(record)) == 0) {
        char fields[CAT_MAX_COLUMNS][256];
        int  is_null[CAT_MAX_COLUMNS];
        int  rec_len = tup_record_len(record, sizeof(record));
        if (rec_len < 0) rec_len = (int)strlen(record);
        int nout = tup_extract_fields(record, rec_len, cols, ncols,
                                      fields, is_null, CAT_MAX_COLUMNS);
        if (nout < 0) {
            tapi_scan_end(&cur);
            fclose(fp);
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "COPY could not decode row %d", exported + 1);
            g_err.error = 1;
            return -1;
        }

        const char *ptrs[CAT_MAX_COLUMNS];
        for (int i = 0; i < nout; i++) ptrs[i] = fields[i];

        char out[8192];
        size_t nw = 0;
        if (csv_format_line(ptrs, is_null, nout, &dia,
                            out, sizeof(out), &nw) < 0) {
            tapi_scan_end(&cur);
            fclose(fp);
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "COPY row serialization overflow at row %d", exported + 1);
            g_err.error = 1;
            return -1;
        }
        fwrite(out, 1, nw, fp);
        fputc('\n', fp);
        exported++;
    }

    tapi_scan_end(&cur);
    fclose(fp);
    g_copy.rowCount = exported;
    return 0;
}

/* ---- Execution entry ---- */

int CopyProcess(void)
{
    if (!g_copy.active) return 0;

    /* Stream mode not wired yet — PG wire subprotocol is Faz 4. */
    if (g_copy.source == EVO_COPY_SRC_STDIN ||
        g_copy.source == EVO_COPY_SRC_STDOUT) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "COPY ... STDIN/STDOUT not yet supported (use file path)");
        g_err.error = 1;
        return -1;
    }

    if (!copy_path_is_safe(g_copy.path)) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "COPY file path must be absolute and must not contain '..'");
        g_err.error = 1;
        return -1;
    }

    int rc;
    if (g_copy.direction == EVO_COPY_DIR_FROM) {
        rc = copy_from_file();
    } else {
        rc = copy_to_file();
    }

    g_copy.active = 0;
    return rc;
}
