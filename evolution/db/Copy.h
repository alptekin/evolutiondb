/*
 * Copy.h — COPY command streaming API (Task 85, Feature #61)
 *
 * Exposes the shared core used by:
 *   - Server-side file mode (Copy.c itself)
 *   - PG wire COPY subprotocol (adaptor/pg_handler.c)
 *   - EVO native text protocol (adaptor/evo_protocol.c)
 *
 * Parser-facing helpers (CopyBegin, CopySetDelimiter, CopyProcess, ...) live
 * in database.h — this header only declares the handler-facing stream API.
 */
#ifndef EVO_COPY_H
#define EVO_COPY_H

#include <stddef.h>
#include <stdint.h>
#include "csv.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Stream-handler inputs ---- */

typedef struct {
    char tblName[256];
    int  format;               /* EVO_COPY_FMT_TEXT / _CSV */
    char delimiter;
    char quote;
    char nullStr[32];
    int  header;
    int  columnCount;          /* 0 = all columns */
    char columns[64][128];
} CopyStreamSpec;

typedef struct {
    int      in_transaction;
    uint32_t tx_xid;
    char     database[256];
    char     schema[256];
} CopyStreamSession;

/* Reader callback: write one logical line (no terminator) into `buf`.
 * Returns:
 *   >0  line length
 *    0  end-of-data (orderly termination)
 *   -1  transport error (fills err_out + sqlstate)
 *   -2  remote abort (CopyFail) — treat as error without retry
 */
typedef int (*copy_read_line_fn)(char *buf, int max_len,
                                 char *sqlstate, size_t sqlstate_size,
                                 char *err_out, size_t err_size,
                                 void *ctx);

/* Writer callback: emit one formatted line (no trailing '\n' included;
 * callback decides framing). Returns 0 on success, -1 on error. */
typedef int (*copy_write_line_fn)(const char *line, int len, void *ctx);

/* Run a COPY ... FROM stream. The caller supplies a reader callback that
 * yields logical lines. Returns the inserted row count, or -1 on error
 * (err_out + sqlstate filled). */
int copy_stream_in_process(const CopyStreamSpec *spec,
                           const CopyStreamSession *sess,
                           copy_read_line_fn reader, void *rctx,
                           char *err_out, size_t err_size,
                           char *sqlstate, size_t sqlstate_size);

/* Run a COPY ... TO stream. Scans the table and invokes the writer for
 * each formatted row (optionally preceded by a header). Returns exported
 * row count, or -1 on error. */
int copy_stream_out_process(const CopyStreamSpec *spec,
                            const CopyStreamSession *sess,
                            copy_write_line_fn writer, void *wctx,
                            char *err_out, size_t err_size);

#ifdef __cplusplus
}
#endif

#endif /* EVO_COPY_H */
