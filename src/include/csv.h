/*
 * csv.h — CSV/TEXT parse & format helpers for COPY (Task 85)
 *
 * Dialect-driven parsing and serialization:
 *   - CSV: RFC 4180-like. Fields may be double-quoted; inner quote doubled ("").
 *   - TEXT: backslash-escaped. \n, \t, \r, \\, \N for NULL.
 *
 * The dialect struct is independent of CopyOpts so these functions can be
 * unit-tested in isolation.
 */
#ifndef EVO_CSV_H
#define EVO_CSV_H

#include <stddef.h>

#define CSV_MAX_FIELDS      256
#define CSV_MAX_FIELD_LEN   4096

typedef struct {
    int  format;          /* 0 = TEXT, 1 = CSV (match EVO_COPY_FMT_*) */
    char delimiter;       /* default: ',' CSV, '\t' TEXT */
    char quote;           /* CSV only; default '"' */
    char null_str[32];    /* token that represents SQL NULL */
} CsvDialect;

/*
 * csv_parse_line — split a single logical line into fields.
 *
 * Inputs:
 *   line      NUL-terminated input (caller strips any terminating newline)
 *   d         dialect
 *   fields    output buffer [CSV_MAX_FIELDS][CSV_MAX_FIELD_LEN]
 *   is_null   per-field NULL flag (1 if field matched d->null_str)
 *   max_fields  capacity of fields/is_null arrays
 *
 * Outputs:
 *   *n_out    number of fields parsed
 *   return    0 on success, -1 on malformed input (e.g. unterminated quote)
 */
int csv_parse_line(const char *line,
                   const CsvDialect *d,
                   char fields[][CSV_MAX_FIELD_LEN],
                   int is_null[],
                   int max_fields,
                   int *n_out);

/*
 * csv_format_line — serialize a row to a single line (no terminator appended).
 *
 * Inputs:
 *   fields     array of NUL-terminated strings (ignored if is_null[i] != 0)
 *   is_null    per-field NULL marker
 *   nfields
 *   d          dialect
 *   out        output buffer
 *   out_size   capacity
 *
 * Outputs:
 *   *nw        bytes written (excluding terminator)
 *   return     0 on success, -1 if the buffer is too small
 */
int csv_format_line(const char *const *fields,
                    const int *is_null,
                    int nfields,
                    const CsvDialect *d,
                    char *out,
                    size_t out_size,
                    size_t *nw);

#endif /* EVO_CSV_H */
