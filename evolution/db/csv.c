/*
 * csv.c — CSV/TEXT parse & format for COPY.
 */

#include "csv.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CSV_FMT_TEXT 0
#define CSV_FMT_CSV  1

static int append_char(char *buf, size_t cap, size_t *pos, char c)
{
    if (*pos + 1 >= cap) return -1;
    buf[(*pos)++] = c;
    buf[*pos] = '\0';
    return 0;
}

/* ---- TEXT decode: interpret backslash escapes ---- */
static int decode_text_escape(char c, char *out)
{
    switch (c) {
        case 'n':  *out = '\n'; return 1;
        case 't':  *out = '\t'; return 1;
        case 'r':  *out = '\r'; return 1;
        case 'b':  *out = '\b'; return 1;
        case 'f':  *out = '\f'; return 1;
        case 'v':  *out = '\v'; return 1;
        case '\\': *out = '\\'; return 1;
        default:   *out = c;    return 1;   /* unknown escape — keep literal */
    }
}

/* ---- CSV parser: quoted fields with "" escape ---- */
static int parse_csv_field(const char *in, size_t *ip,
                           char delim, char quote,
                           char *field, size_t field_cap)
{
    size_t fp = 0;
    field[0] = '\0';

    if (in[*ip] == quote) {
        /* Quoted field */
        (*ip)++;
        for (;;) {
            char c = in[*ip];
            if (c == '\0') return -1;   /* unterminated quote */
            if (c == quote) {
                if (in[*ip + 1] == quote) {
                    /* Escaped quote */
                    if (append_char(field, field_cap, &fp, quote) < 0) return -1;
                    *ip += 2;
                } else {
                    /* End of field */
                    (*ip)++;
                    return 0;
                }
            } else {
                if (append_char(field, field_cap, &fp, c) < 0) return -1;
                (*ip)++;
            }
        }
    }

    /* Unquoted field — read until delim or EOL */
    while (in[*ip] != '\0' && in[*ip] != delim) {
        if (append_char(field, field_cap, &fp, in[*ip]) < 0) return -1;
        (*ip)++;
    }
    return 0;
}

/* ---- TEXT parser: backslash-escaped fields ---- */
static int parse_text_field(const char *in, size_t *ip,
                            char delim,
                            char *field, size_t field_cap)
{
    size_t fp = 0;
    field[0] = '\0';

    while (in[*ip] != '\0' && in[*ip] != delim) {
        char c = in[*ip];
        if (c == '\\' && in[*ip + 1] != '\0') {
            char decoded;
            decode_text_escape(in[*ip + 1], &decoded);
            if (append_char(field, field_cap, &fp, decoded) < 0) return -1;
            *ip += 2;
        } else {
            if (append_char(field, field_cap, &fp, c) < 0) return -1;
            (*ip)++;
        }
    }
    return 0;
}

int csv_parse_line(const char *line,
                   const CsvDialect *d,
                   char fields[][CSV_MAX_FIELD_LEN],
                   int is_null[],
                   int max_fields,
                   int *n_out)
{
    if (!line || !d || !fields || !n_out) return -1;
    int n = 0;
    size_t ip = 0;

    while (n < max_fields) {
        int rc;
        if (d->format == CSV_FMT_CSV) {
            rc = parse_csv_field(line, &ip, d->delimiter, d->quote,
                                 fields[n], CSV_MAX_FIELD_LEN);
        } else {
            rc = parse_text_field(line, &ip, d->delimiter,
                                  fields[n], CSV_MAX_FIELD_LEN);
        }
        if (rc < 0) return -1;

        /* NULL detection */
        is_null[n] = (d->null_str[0] && strcmp(fields[n], d->null_str) == 0) ? 1 : 0;

        n++;
        if (line[ip] == '\0') break;
        if (line[ip] == d->delimiter) {
            ip++;
            /* Trailing delimiter => empty trailing field */
            if (line[ip] == '\0' && n < max_fields) {
                fields[n][0] = '\0';
                is_null[n] = (d->null_str[0] == '\0') ? 0 : 0;
                n++;
                break;
            }
        }
    }

    *n_out = n;
    return 0;
}

/* ---- Formatters ---- */

static int csv_field_needs_quote(const char *s, const CsvDialect *d)
{
    for (const char *p = s; *p; p++) {
        if (*p == d->delimiter || *p == d->quote || *p == '\n' || *p == '\r')
            return 1;
    }
    return 0;
}

static int append_str(char *buf, size_t cap, size_t *pos, const char *s)
{
    size_t n = strlen(s);
    if (*pos + n >= cap) return -1;
    memcpy(buf + *pos, s, n);
    *pos += n;
    buf[*pos] = '\0';
    return 0;
}

static int append_csv_field(char *buf, size_t cap, size_t *pos,
                            const char *val, const CsvDialect *d)
{
    if (!csv_field_needs_quote(val, d)) {
        return append_str(buf, cap, pos, val);
    }
    if (append_char(buf, cap, pos, d->quote) < 0) return -1;
    for (const char *p = val; *p; p++) {
        if (*p == d->quote) {
            if (append_char(buf, cap, pos, d->quote) < 0) return -1;
        }
        if (append_char(buf, cap, pos, *p) < 0) return -1;
    }
    if (append_char(buf, cap, pos, d->quote) < 0) return -1;
    return 0;
}

static int append_text_field(char *buf, size_t cap, size_t *pos,
                             const char *val, const CsvDialect *d)
{
    for (const char *p = val; *p; p++) {
        char c = *p;
        if (c == '\\' || c == '\n' || c == '\r' || c == '\t' || c == d->delimiter) {
            if (append_char(buf, cap, pos, '\\') < 0) return -1;
            char out;
            switch (c) {
                case '\n': out = 'n';  break;
                case '\r': out = 'r';  break;
                case '\t': out = 't';  break;
                case '\\': out = '\\'; break;
                default:   out = c;    break;  /* delimiter escaped literally */
            }
            if (append_char(buf, cap, pos, out) < 0) return -1;
        } else {
            if (append_char(buf, cap, pos, c) < 0) return -1;
        }
    }
    return 0;
}

int csv_format_line(const char *const *fields,
                    const int *is_null,
                    int nfields,
                    const CsvDialect *d,
                    char *out,
                    size_t out_size,
                    size_t *nw)
{
    if (!fields || !d || !out || out_size == 0) return -1;
    size_t pos = 0;
    out[0] = '\0';

    for (int i = 0; i < nfields; i++) {
        if (i > 0) {
            if (append_char(out, out_size, &pos, d->delimiter) < 0) return -1;
        }
        if (is_null && is_null[i]) {
            if (append_str(out, out_size, &pos, d->null_str) < 0) return -1;
            continue;
        }
        const char *val = fields[i] ? fields[i] : "";
        int rc = (d->format == CSV_FMT_CSV)
                 ? append_csv_field(out, out_size, &pos, val, d)
                 : append_text_field(out, out_size, &pos, val, d);
        if (rc < 0) return -1;
    }

    if (nw) *nw = pos;
    return 0;
}
