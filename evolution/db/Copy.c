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
#include "Copy.h"
#include "table_api.h"
#include "tuple_format.h"
#include "catalog_internal.h"
#include "mvcc.h"
#include "lock_mgr.h"
#include "buffer_pool.h"
#include "page_mgr.h"

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

/* ---- File-mode adapters over the shared stream API ---- */

static void spec_from_g_copy(CopyStreamSpec *spec)
{
    memset(spec, 0, sizeof(*spec));
    strncpy(spec->tblName, g_copy.tblName, sizeof(spec->tblName) - 1);
    spec->format    = g_copy.format;
    spec->delimiter = g_copy.delimiter;
    spec->quote     = g_copy.quote;
    strncpy(spec->nullStr, g_copy.nullStr, sizeof(spec->nullStr) - 1);
    spec->header    = g_copy.header;
    spec->columnCount = g_copy.columnCount;
    for (int c = 0; c < g_copy.columnCount && c < 64; c++) {
        strncpy(spec->columns[c], g_copy.columns[c],
                sizeof(spec->columns[c]) - 1);
    }
}

/* File reader: yields one non-empty line (CR/LF stripped) per call. */
static int file_line_reader(char *buf, int max_len,
                            char *sqlstate, size_t sqlstate_size,
                            char *err_out, size_t err_size, void *ctx)
{
    (void)sqlstate; (void)sqlstate_size; (void)err_out; (void)err_size;
    FILE *fp = (FILE *)ctx;
    while (fgets(buf, max_len, fp) != NULL) {
        size_t n = strlen(buf);
        while (n > 0 && (buf[n - 1] == '\n' || buf[n - 1] == '\r'))
            buf[--n] = '\0';
        if (n > 0) return (int)n;          /* skip blank lines */
    }
    return 0;   /* EOF */
}

/* File writer: writes line + '\n' to FILE*. */
static int file_line_writer(const char *line, int len, void *ctx)
{
    FILE *fp = (FILE *)ctx;
    if (fwrite(line, 1, (size_t)len, fp) != (size_t)len) return -1;
    if (fputc('\n', fp) == EOF) return -1;
    return 0;
}

static int copy_from_file(void)
{
    FILE *fp = fopen(g_copy.path, "r");
    if (!fp) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not open file \"%s\" for reading: %s",
                 g_copy.path, strerror(errno));
        g_err.error = 1;
        return -1;
    }

    CopyStreamSpec spec;     spec_from_g_copy(&spec);
    CopyStreamSession sess = {0};
    sess.in_transaction = 0;    /* file mode is always auto-commit */
    sess.tx_xid         = 0;
    strncpy(sess.database, g_currentDatabase, sizeof(sess.database) - 1);
    strncpy(sess.schema,   g_currentSchema,   sizeof(sess.schema)   - 1);

    char sstate[6] = "00000";
    int n = copy_stream_in_process(&spec, &sess,
                                   file_line_reader, fp,
                                   g_err.errorMsg, sizeof(g_err.errorMsg),
                                   sstate, sizeof(sstate));
    fclose(fp);
    if (n < 0) { g_err.error = 1; return -1; }
    g_copy.rowCount = n;
    return 0;
}

static int copy_to_file(void)
{
    FILE *fp = fopen(g_copy.path, "w");
    if (!fp) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not open file \"%s\" for writing: %s",
                 g_copy.path, strerror(errno));
        g_err.error = 1;
        return -1;
    }

    CopyStreamSpec spec;     spec_from_g_copy(&spec);
    CopyStreamSession sess = {0};
    strncpy(sess.database, g_currentDatabase, sizeof(sess.database) - 1);
    strncpy(sess.schema,   g_currentSchema,   sizeof(sess.schema)   - 1);

    int n = copy_stream_out_process(&spec, &sess,
                                    file_line_writer, fp,
                                    g_err.errorMsg, sizeof(g_err.errorMsg));
    fclose(fp);
    if (n < 0) { g_err.error = 1; return -1; }
    g_copy.rowCount = n;
    return 0;
}

/* ================================================================
 *  Shared stream API (PG wire + EVO + file-mode all funnel through here)
 * ================================================================ */

static void stream_dialect(const CopyStreamSpec *spec, CsvDialect *d)
{
    memset(d, 0, sizeof(*d));
    d->format    = spec->format;
    d->delimiter = spec->delimiter ? spec->delimiter :
                   (spec->format == EVO_COPY_FMT_CSV ? ',' : '\t');
    d->quote     = spec->quote ? spec->quote : '"';
    strncpy(d->null_str, spec->nullStr, sizeof(d->null_str) - 1);
}

/* Single-row CSV-parse + InsertProcess. Caller has bound g_qctx.
 * Returns 0 on success, -1 on error (err_out filled). */
static int stream_insert_one(const CopyStreamSpec *spec, const char *line,
                             const CsvDialect *dia,
                             char *err_out, size_t err_size)
{
    char fields[CSV_MAX_FIELDS][CSV_MAX_FIELD_LEN];
    int  is_null[CSV_MAX_FIELDS];
    int  nf = 0;
    if (csv_parse_line(line, dia, fields, is_null, CSV_MAX_FIELDS, &nf) < 0) {
        snprintf(err_out, err_size, "COPY parse error");
        return -1;
    }

    TruncateInsert();
    strncpy(g_ins.tblName, spec->tblName, sizeof(g_ins.tblName) - 1);
    g_ins.columnCount = spec->columnCount;
    for (int c = 0; c < spec->columnCount; c++) {
        strncpy(g_ins.columns[c], spec->columns[c],
                sizeof(g_ins.columns[c]) - 1);
    }
    g_ins.rowCount = 0;

    for (int c = 0; c < nf; c++) {
        if (is_null[c]) GetInsertions("\x01NULL\x01");
        else            GetInsertions(fields[c]);
    }
    InsertRowSeparator();

    int rc = InsertProcess();
    if (rc != 0 || g_err.error) {
        snprintf(err_out, err_size, "%s",
                 g_err.errorMsg[0] ? g_err.errorMsg : "COPY row insert failed");
        return -1;
    }
    return 0;
}

/* Allocate + bind a QueryContext for the stream. Returns NULL on OOM. */
static QueryContext *stream_qctx_begin(const CopyStreamSession *sess)
{
    QueryContext *qctx = qctx_alloc();
    if (!qctx) return NULL;
    g_qctx = qctx;
    if (sess->database[0])
        strncpy(g_qctx->currentDatabase, sess->database,
                sizeof(g_qctx->currentDatabase) - 1);
    if (sess->schema[0])
        strncpy(g_qctx->currentSchema, sess->schema,
                sizeof(g_qctx->currentSchema) - 1);
    if (sess->tx_xid > 0) qctx->mvcc_xid = sess->tx_xid;
    return qctx;
}

/* Commit (or abort) the auto-commit xid and release the context. */
static void stream_qctx_end(QueryContext *qctx, QueryContext *prev,
                            const CopyStreamSession *sess, int failed)
{
    if (!sess->in_transaction && qctx->mvcc_xid > 0) {
        if (failed) {
            clog_set_aborted(qctx->mvcc_xid);
        } else {
            bp_wal_flush_dirty(pgm_get_fd());
            clog_set_committed_csn(qctx->mvcc_xid, pgm_next_csn());
        }
        lock_release_all(qctx->mvcc_xid);
        lock_gap_release_all(qctx->mvcc_xid);
        mvcc_unregister_tx(qctx->mvcc_xid);
    }
    g_qctx = prev;
    qctx_free(qctx);
}

int copy_stream_in_process(const CopyStreamSpec *spec,
                           const CopyStreamSession *sess,
                           copy_read_line_fn reader, void *rctx,
                           char *err_out, size_t err_size,
                           char *sqlstate, size_t sqlstate_size)
{
    CsvDialect dia;
    stream_dialect(spec, &dia);

    QueryContext *prev = g_qctx;
    QueryContext *qctx = stream_qctx_begin(sess);
    if (!qctx) {
        snprintf(err_out, err_size, "out of memory for COPY stream");
        strncpy(sqlstate, "53200", sqlstate_size - 1);
        return -1;
    }

    int header_skipped = 0;
    int inserted = 0;
    int failed = 0;

    char *line = malloc(65536);
    if (!line) {
        snprintf(err_out, err_size, "out of memory for COPY line buffer");
        strncpy(sqlstate, "53200", sqlstate_size - 1);
        stream_qctx_end(qctx, prev, sess, 1);
        return -1;
    }

    for (;;) {
        int n = reader(line, 65536, sqlstate, sqlstate_size,
                       err_out, err_size, rctx);
        if (n == 0) break;                 /* orderly end-of-data */
        if (n == -2) { failed = 1; break; } /* CopyFail */
        if (n < 0)   { failed = 1; break; } /* transport error */

        if (spec->header && !header_skipped) { header_skipped = 1; continue; }

        if (stream_insert_one(spec, line, &dia, err_out, err_size) < 0) {
            strncpy(sqlstate,
                    g_err.sqlstate[0] ? g_err.sqlstate : "22000",
                    sqlstate_size - 1);
            failed = 1;
            break;
        }
        inserted++;
    }

    free(line);
    stream_qctx_end(qctx, prev, sess, failed);
    return failed ? -1 : inserted;
}

int copy_stream_out_process(const CopyStreamSpec *spec,
                            const CopyStreamSession *sess,
                            copy_write_line_fn writer, void *wctx,
                            char *err_out, size_t err_size)
{
    CsvDialect dia;
    stream_dialect(spec, &dia);

    QueryContext *prev = g_qctx;
    QueryContext *qctx = stream_qctx_begin(sess);
    if (!qctx) {
        snprintf(err_out, err_size, "out of memory for COPY stream");
        return -1;
    }

    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = 0;
    int exported = 0;
    int rc = 0;

    if (tapi_resolve(spec->tblName, &td, cols, &ncols) < 0) {
        snprintf(err_out, err_size, "could not open table \"%s\"", spec->tblName);
        rc = -1;
        goto done;
    }

    char *outline = malloc(8192);
    if (!outline) { snprintf(err_out, err_size, "out of memory"); rc = -1; goto done; }

    if (spec->header) {
        const char *cnames[CAT_MAX_COLUMNS];
        int is_null_hdr[CAT_MAX_COLUMNS];
        for (int i = 0; i < ncols; i++) {
            cnames[i] = cols[i].col_name;
            is_null_hdr[i] = 0;
        }
        size_t nw = 0;
        if (csv_format_line(cnames, is_null_hdr, ncols, &dia,
                            outline, 8192, &nw) == 0) {
            if (writer(outline, (int)nw, wctx) < 0) {
                rc = -1; free(outline); goto done;
            }
        }
    }

    TableScanCursor cur;
    if (tapi_scan_begin(&td, &cur) == 0) {
        char pk_key[256];
        char record[RECORD_BUF_SIZE];
        while (tapi_scan_next(&cur, pk_key, record, sizeof(record)) == 0) {
            char fields[CAT_MAX_COLUMNS][256];
            int  is_null[CAT_MAX_COLUMNS];
            int  rec_len = tup_record_len(record, sizeof(record));
            if (rec_len < 0) rec_len = (int)strlen(record);
            int nout = tup_extract_fields(record, rec_len, cols, ncols,
                                          fields, is_null, CAT_MAX_COLUMNS);
            if (nout < 0) {
                tapi_scan_end(&cur);
                snprintf(err_out, err_size, "COPY could not decode row %d", exported + 1);
                rc = -1;
                free(outline);
                goto done;
            }
            const char *ptrs[CAT_MAX_COLUMNS];
            for (int i = 0; i < nout; i++) ptrs[i] = fields[i];
            size_t nw = 0;
            if (csv_format_line(ptrs, is_null, nout, &dia,
                                outline, 8192, &nw) < 0) {
                tapi_scan_end(&cur);
                snprintf(err_out, err_size,
                         "COPY row serialization overflow at row %d", exported + 1);
                rc = -1;
                free(outline);
                goto done;
            }
            if (writer(outline, (int)nw, wctx) < 0) {
                tapi_scan_end(&cur);
                rc = -1; free(outline); goto done;
            }
            exported++;
        }
        tapi_scan_end(&cur);
    }
    free(outline);

done:
    /* COPY TO is read-only; no abort needed. Treat as never-failed from MVCC POV. */
    stream_qctx_end(qctx, prev, sess, 0);
    return (rc == 0) ? exported : -1;
}

/* ---- Execution entry ---- */

int CopyProcess(void)
{
    if (!g_copy.active) return 0;

    /* Stream mode — the PG wire COPY subprotocol is driven by the adaptor
     * (pg_handler.c) after query_execute returns. Copy.c does nothing here;
     * query_executor harvests g_copy state into the ResultSet so that the
     * stream handler can run after the query context is freed. */
    if (g_copy.source == EVO_COPY_SRC_STDIN ||
        g_copy.source == EVO_COPY_SRC_STDOUT) {
        return 0;
    }

    if (!copy_path_is_safe(g_copy.path)) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "COPY file path must be absolute and must not contain '..'");
        g_err.error = 1;
        return -1;
    }

    /*
     * FIXME(security, Task 85 Faz 6): server-side file COPY should require
     * superuser (ADMIN role). The textual ".." guard does not defeat
     * symlinks — today any user holding INSERT/SELECT on a table can
     * read or write arbitrary server-accessible files via COPY FROM/TO
     * '/path'. Either gate file mode behind a superuser check here or
     * resolve `g_copy.path` with realpath() and verify it sits under a
     * configured allow-prefix before proceeding.
     */

    int rc;
    if (g_copy.direction == EVO_COPY_DIR_FROM) {
        rc = copy_from_file();
    } else {
        rc = copy_to_file();
    }

    g_copy.active = 0;
    return rc;
}
