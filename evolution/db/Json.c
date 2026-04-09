/*
 * Json.c — Complete JSON/JSONB support (MySQL-compatible)
 *
 * Functions: JSON_EXTRACT, JSON_TYPE, JSON_LENGTH, JSON_VALID,
 *   JSON_SET, JSON_INSERT, JSON_REPLACE, JSON_REMOVE, JSON_OBJECT,
 *   JSON_ARRAY, JSON_CONTAINS, JSON_CONTAINS_PATH, JSON_KEYS,
 *   JSON_PRETTY, JSON_DEPTH, JSON_QUOTE, JSON_UNQUOTE, JSON_SEARCH
 *
 * Path syntax: $.key, $.array[0], $.nested.key, $[0]
 */
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "database.h"

#define JSON_MAX_DEPTH 64
#define JSON_BUF_SIZE  8192

/* ═══════════════════════════════════════════════════════════════
 *  SECTION 1: Recursive-descent JSON parser (validation + skip)
 * ═══════════════════════════════════════════════════════════════ */

static void skip_ws(const char *s, int *pos, int len)
{
    while (*pos < len && isspace((unsigned char)s[*pos]))
        (*pos)++;
}

static int parse_value(const char *s, int *pos, int len, int depth);

static int parse_string(const char *s, int *pos, int len)
{
    if (*pos >= len || s[*pos] != '"') return -1;
    (*pos)++;
    while (*pos < len) {
        char c = s[*pos];
        if (c == '"') { (*pos)++; return 0; }
        if (c == '\\') {
            (*pos)++;
            if (*pos >= len) return -1;
            char esc = s[*pos];
            if (esc == '"' || esc == '\\' || esc == '/' ||
                esc == 'b' || esc == 'f' || esc == 'n' ||
                esc == 'r' || esc == 't') {
                (*pos)++;
            } else if (esc == 'u') {
                (*pos)++;
                for (int i = 0; i < 4; i++) {
                    if (*pos >= len || !isxdigit((unsigned char)s[*pos]))
                        return -1;
                    (*pos)++;
                }
            } else {
                return -1;
            }
        } else if ((unsigned char)c < 0x20) {
            return -1;
        } else {
            (*pos)++;
        }
    }
    return -1;
}

static int parse_number(const char *s, int *pos, int len)
{
    int start = *pos;
    if (*pos < len && s[*pos] == '-') (*pos)++;
    if (*pos >= len || !isdigit((unsigned char)s[*pos])) return -1;
    if (s[*pos] == '0') {
        (*pos)++;
    } else {
        while (*pos < len && isdigit((unsigned char)s[*pos])) (*pos)++;
    }
    if (*pos < len && s[*pos] == '.') {
        (*pos)++;
        if (*pos >= len || !isdigit((unsigned char)s[*pos])) return -1;
        while (*pos < len && isdigit((unsigned char)s[*pos])) (*pos)++;
    }
    if (*pos < len && (s[*pos] == 'e' || s[*pos] == 'E')) {
        (*pos)++;
        if (*pos < len && (s[*pos] == '+' || s[*pos] == '-')) (*pos)++;
        if (*pos >= len || !isdigit((unsigned char)s[*pos])) return -1;
        while (*pos < len && isdigit((unsigned char)s[*pos])) (*pos)++;
    }
    return (*pos > start) ? 0 : -1;
}

static int parse_object(const char *s, int *pos, int len, int depth)
{
    if (*pos >= len || s[*pos] != '{') return -1;
    (*pos)++;
    skip_ws(s, pos, len);
    if (*pos < len && s[*pos] == '}') { (*pos)++; return 0; }
    for (;;) {
        skip_ws(s, pos, len);
        if (parse_string(s, pos, len) != 0) return -1;
        skip_ws(s, pos, len);
        if (*pos >= len || s[*pos] != ':') return -1;
        (*pos)++;
        skip_ws(s, pos, len);
        if (parse_value(s, pos, len, depth + 1) != 0) return -1;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == '}') { (*pos)++; return 0; }
        if (*pos >= len || s[*pos] != ',') return -1;
        (*pos)++;
    }
}

static int parse_array(const char *s, int *pos, int len, int depth)
{
    if (*pos >= len || s[*pos] != '[') return -1;
    (*pos)++;
    skip_ws(s, pos, len);
    if (*pos < len && s[*pos] == ']') { (*pos)++; return 0; }
    for (;;) {
        skip_ws(s, pos, len);
        if (parse_value(s, pos, len, depth + 1) != 0) return -1;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == ']') { (*pos)++; return 0; }
        if (*pos >= len || s[*pos] != ',') return -1;
        (*pos)++;
    }
}

static int parse_literal(const char *s, int *pos, int len,
                         const char *lit, int litlen)
{
    if (*pos + litlen > len) return -1;
    if (memcmp(s + *pos, lit, litlen) != 0) return -1;
    *pos += litlen;
    return 0;
}

static int parse_value(const char *s, int *pos, int len, int depth)
{
    if (depth > JSON_MAX_DEPTH) return -1;
    skip_ws(s, pos, len);
    if (*pos >= len) return -1;
    char c = s[*pos];
    if (c == '"')  return parse_string(s, pos, len);
    if (c == '{')  return parse_object(s, pos, len, depth);
    if (c == '[')  return parse_array(s, pos, len, depth);
    if (c == 't')  return parse_literal(s, pos, len, "true", 4);
    if (c == 'f')  return parse_literal(s, pos, len, "false", 5);
    if (c == 'n')  return parse_literal(s, pos, len, "null", 4);
    if (c == '-' || isdigit((unsigned char)c)) return parse_number(s, pos, len);
    return -1;
}

/* Copy a JSON value span to output buffer */
static int copy_value_span(const char *s, int start, int end,
                           char *out, int out_size)
{
    int n = end - start;
    if (n >= out_size) n = out_size - 1;
    if (n < 0) n = 0;
    memcpy(out, s + start, n);
    out[n] = '\0';
    return n;
}

/* ═══════════════════════════════════════════════════════════════
 *  SECTION 2: MySQL $.path expression parser
 * ═══════════════════════════════════════════════════════════════ */

#define PATH_SEG_KEY   0
#define PATH_SEG_INDEX 1

typedef struct {
    int type;       /* PATH_SEG_KEY or PATH_SEG_INDEX */
    char key[256];  /* key name (for KEY) */
    int index;      /* array index (for INDEX) */
} PathSeg;

/* Parse MySQL-style path: $.key.nested[0].field
 * Returns number of segments, -1 on error */
static int parse_path(const char *path, PathSeg *segs, int max_segs)
{
    if (!path || !segs) return -1;
    const char *p = path;
    int n = 0;

    /* Skip leading $ */
    if (*p == '$') p++;

    while (*p && n < max_segs) {
        if (*p == '.') {
            p++;
            /* Read key name */
            int i = 0;
            while (*p && *p != '.' && *p != '[' && i < 255) {
                segs[n].key[i++] = *p++;
            }
            segs[n].key[i] = '\0';
            if (i == 0) return -1;
            segs[n].type = PATH_SEG_KEY;
            n++;
        } else if (*p == '[') {
            p++;
            /* Read array index */
            int idx = 0;
            if (!isdigit((unsigned char)*p)) return -1;
            while (isdigit((unsigned char)*p)) {
                idx = idx * 10 + (*p - '0');
                p++;
            }
            if (*p != ']') return -1;
            p++;
            segs[n].type = PATH_SEG_INDEX;
            segs[n].index = idx;
            n++;
        } else {
            /* For simple key without $ prefix (used by -> operator) */
            int i = 0;
            while (*p && *p != '.' && *p != '[' && i < 255) {
                segs[n].key[i++] = *p++;
            }
            segs[n].key[i] = '\0';
            if (i == 0) return -1;
            segs[n].type = PATH_SEG_KEY;
            n++;
        }
    }
    return n;
}

/* Navigate to a value at a given path segment within JSON.
 * Sets val_start/val_end to the value span. Returns 0 on success. */
static int navigate_segment(const char *s, int len, int *pos,
                            const PathSeg *seg, int *val_start, int *val_end)
{
    skip_ws(s, pos, len);
    if (*pos >= len) return -1;

    if (seg->type == PATH_SEG_KEY) {
        /* Must be an object */
        if (s[*pos] != '{') return -1;
        (*pos)++;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == '}') return -1; /* empty object */

        for (;;) {
            skip_ws(s, pos, len);
            if (*pos >= len || s[*pos] != '"') return -1;
            int ks = *pos + 1;
            if (parse_string(s, pos, len) != 0) return -1;
            int ke = *pos - 1;

            skip_ws(s, pos, len);
            if (*pos >= len || s[*pos] != ':') return -1;
            (*pos)++;
            skip_ws(s, pos, len);

            int klen = ke - ks;
            int match = (klen == (int)strlen(seg->key) &&
                         memcmp(s + ks, seg->key, klen) == 0);

            int vs = *pos;
            if (parse_value(s, pos, len, 1) != 0) return -1;
            int ve = *pos;

            if (match) {
                *val_start = vs;
                *val_end = ve;
                return 0;
            }

            skip_ws(s, pos, len);
            if (*pos < len && s[*pos] == '}') return -1;
            if (*pos >= len || s[*pos] != ',') return -1;
            (*pos)++;
        }
    } else {
        /* Array index */
        if (s[*pos] != '[') return -1;
        (*pos)++;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == ']') return -1; /* empty array */

        int idx = 0;
        for (;;) {
            skip_ws(s, pos, len);
            int vs = *pos;
            if (parse_value(s, pos, len, 1) != 0) return -1;
            int ve = *pos;

            if (idx == seg->index) {
                *val_start = vs;
                *val_end = ve;
                return 0;
            }
            idx++;

            skip_ws(s, pos, len);
            if (*pos < len && s[*pos] == ']') return -1;
            if (*pos >= len || s[*pos] != ',') return -1;
            (*pos)++;
        }
    }
}

/* Extract value at a full path. Returns 0 on success. */
static int extract_by_path(const char *json, int json_len,
                           const PathSeg *segs, int nsegs,
                           int *val_start, int *val_end)
{
    int pos = 0;
    skip_ws(json, &pos, json_len);

    if (nsegs == 0) {
        /* $ alone = entire document */
        *val_start = pos;
        int save = pos;
        if (parse_value(json, &pos, json_len, 0) != 0) return -1;
        *val_end = pos;
        return 0;
    }

    /* Navigate each segment */
    int vs = 0, ve = 0;
    for (int i = 0; i < nsegs; i++) {
        if (i > 0) {
            /* Position at the previous value */
            pos = vs;
        }
        if (navigate_segment(json, json_len, &pos, &segs[i], &vs, &ve) != 0)
            return -1;
    }
    *val_start = vs;
    *val_end = ve;
    return 0;
}

/* ═══════════════════════════════════════════════════════════════
 *  SECTION 3: Public API — JSON Functions
 * ═══════════════════════════════════════════════════════════════ */

/* ── JSON_VALID ── */
int evo_json_validate(const char *json_str)
{
    if (!json_str) return -1;
    int len = (int)strlen(json_str);
    int pos = 0;
    skip_ws(json_str, &pos, len);
    if (pos >= len) return -1;
    if (parse_value(json_str, &pos, len, 0) != 0) return -1;
    skip_ws(json_str, &pos, len);
    if (pos != len) return -1;
    return 0;
}

/* ── JSON_EXTRACT / -> / ->> with MySQL $.path support ── */
int evo_json_extract(const char *json_str, const char *path,
                     char *out, int out_size, int as_text)
{
    if (!json_str || !path || !out || out_size < 2) return -1;
    int len = (int)strlen(json_str);

    PathSeg segs[32];
    int nsegs = parse_path(path, segs, 32);
    if (nsegs < 0) return -1;

    int vs = 0, ve = 0;
    if (extract_by_path(json_str, len, segs, nsegs, &vs, &ve) != 0)
        return 0; /* not found */

    /* Trim whitespace around value */
    while (vs < ve && isspace((unsigned char)json_str[vs])) vs++;
    while (ve > vs && isspace((unsigned char)json_str[ve - 1])) ve--;

    if (as_text && json_str[vs] == '"') {
        /* Strip quotes for text extraction */
        vs++;
        ve--;
        copy_value_span(json_str, vs, ve, out, out_size);
    } else if (as_text && ve - vs == 4 && memcmp(json_str + vs, "null", 4) == 0) {
        strncpy(out, "\x01NULL\x01", out_size - 1);
        out[out_size - 1] = '\0';
    } else {
        copy_value_span(json_str, vs, ve, out, out_size);
    }
    return 1;
}

/* ── JSON_TYPE ── */
int evo_json_type(const char *json_str, char *out, int out_size)
{
    if (!json_str || !out) return -1;
    int len = (int)strlen(json_str);
    int pos = 0;
    skip_ws(json_str, &pos, len);
    if (pos >= len) return -1;

    const char *type_name;
    switch (json_str[pos]) {
    case '{': type_name = "OBJECT"; break;
    case '[': type_name = "ARRAY"; break;
    case '"': type_name = "STRING"; break;
    case 't': case 'f': type_name = "BOOLEAN"; break;
    case 'n': type_name = "NULL"; break;
    default:
        if (json_str[pos] == '-' || isdigit((unsigned char)json_str[pos])) {
            /* Check if integer or double */
            int save = pos;
            parse_number(json_str, &pos, len);
            int has_dot = 0;
            for (int i = save; i < pos; i++) {
                if (json_str[i] == '.' || json_str[i] == 'e' || json_str[i] == 'E') {
                    has_dot = 1;
                    break;
                }
            }
            type_name = has_dot ? "DOUBLE" : "INTEGER";
        } else {
            return -1;
        }
    }
    strncpy(out, type_name, out_size - 1);
    out[out_size - 1] = '\0';
    return 0;
}

/* ── JSON_LENGTH ── */
int evo_json_length(const char *json_str)
{
    if (!json_str) return -1;
    int len = (int)strlen(json_str);
    int pos = 0;
    skip_ws(json_str, &pos, len);
    if (pos >= len) return -1;

    int count = 0;
    if (json_str[pos] == '{') {
        pos++;
        skip_ws(json_str, &pos, len);
        if (pos < len && json_str[pos] == '}') return 0;
        for (;;) {
            skip_ws(json_str, &pos, len);
            if (parse_string(json_str, &pos, len) != 0) return -1;
            skip_ws(json_str, &pos, len);
            if (pos >= len || json_str[pos] != ':') return -1;
            pos++;
            skip_ws(json_str, &pos, len);
            if (parse_value(json_str, &pos, len, 1) != 0) return -1;
            count++;
            skip_ws(json_str, &pos, len);
            if (pos < len && json_str[pos] == '}') return count;
            if (pos >= len || json_str[pos] != ',') return -1;
            pos++;
        }
    } else if (json_str[pos] == '[') {
        pos++;
        skip_ws(json_str, &pos, len);
        if (pos < len && json_str[pos] == ']') return 0;
        for (;;) {
            skip_ws(json_str, &pos, len);
            if (parse_value(json_str, &pos, len, 1) != 0) return -1;
            count++;
            skip_ws(json_str, &pos, len);
            if (pos < len && json_str[pos] == ']') return count;
            if (pos >= len || json_str[pos] != ',') return -1;
            pos++;
        }
    }
    /* Scalar: MySQL returns 1 */
    return 1;
}

/* ── JSON_DEPTH ── */
static int depth_value(const char *s, int *pos, int len, int depth);

static int depth_object(const char *s, int *pos, int len, int depth)
{
    int max_d = depth;
    (*pos)++;
    skip_ws(s, pos, len);
    if (*pos < len && s[*pos] == '}') { (*pos)++; return depth; }
    for (;;) {
        skip_ws(s, pos, len);
        if (parse_string(s, pos, len) != 0) return -1;
        skip_ws(s, pos, len);
        if (*pos >= len || s[*pos] != ':') return -1;
        (*pos)++;
        int d = depth_value(s, pos, len, depth + 1);
        if (d < 0) return -1;
        if (d > max_d) max_d = d;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == '}') { (*pos)++; return max_d; }
        if (*pos >= len || s[*pos] != ',') return -1;
        (*pos)++;
    }
}

static int depth_array(const char *s, int *pos, int len, int depth)
{
    int max_d = depth;
    (*pos)++;
    skip_ws(s, pos, len);
    if (*pos < len && s[*pos] == ']') { (*pos)++; return depth; }
    for (;;) {
        skip_ws(s, pos, len);
        int d = depth_value(s, pos, len, depth + 1);
        if (d < 0) return -1;
        if (d > max_d) max_d = d;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == ']') { (*pos)++; return max_d; }
        if (*pos >= len || s[*pos] != ',') return -1;
        (*pos)++;
    }
}

static int depth_value(const char *s, int *pos, int len, int depth)
{
    if (depth > JSON_MAX_DEPTH) return -1;
    skip_ws(s, pos, len);
    if (*pos >= len) return -1;
    char c = s[*pos];
    if (c == '{') return depth_object(s, pos, len, depth);
    if (c == '[') return depth_array(s, pos, len, depth);
    if (parse_value(s, pos, len, depth) != 0) return -1;
    return depth;
}

int evo_json_depth(const char *json_str)
{
    if (!json_str) return -1;
    int len = (int)strlen(json_str);
    int pos = 0;
    return depth_value(json_str, &pos, len, 1);
}

/* ── JSON_KEYS ── */
int evo_json_keys(const char *json_str, char *out, int out_size)
{
    if (!json_str || !out) return -1;
    int len = (int)strlen(json_str);
    int pos = 0;
    skip_ws(json_str, &pos, len);
    if (pos >= len || json_str[pos] != '{') return -1;
    pos++;
    skip_ws(json_str, &pos, len);

    int off = 0;
    out[off++] = '[';

    if (pos < len && json_str[pos] == '}') {
        out[off++] = ']';
        out[off] = '\0';
        return 0;
    }

    int first = 1;
    for (;;) {
        skip_ws(json_str, &pos, len);
        if (pos >= len || json_str[pos] != '"') return -1;
        int ks = pos;
        if (parse_string(json_str, &pos, len) != 0) return -1;
        int ke = pos;

        if (!first && off < out_size - 1) out[off++] = ',';
        first = 0;

        int kn = ke - ks;
        if (off + kn >= out_size - 2) break;
        memcpy(out + off, json_str + ks, kn);
        off += kn;

        skip_ws(json_str, &pos, len);
        if (pos >= len || json_str[pos] != ':') return -1;
        pos++;
        skip_ws(json_str, &pos, len);
        if (parse_value(json_str, &pos, len, 1) != 0) return -1;
        skip_ws(json_str, &pos, len);
        if (pos < len && json_str[pos] == '}') break;
        if (pos >= len || json_str[pos] != ',') return -1;
        pos++;
    }

    if (off < out_size - 1) out[off++] = ']';
    out[off] = '\0';
    return 0;
}

/* ── JSON_QUOTE ── */
int evo_json_quote(const char *str, char *out, int out_size)
{
    if (!str || !out) return -1;
    int off = 0;
    if (off < out_size - 1) out[off++] = '"';
    for (const char *p = str; *p && off < out_size - 3; p++) {
        switch (*p) {
        case '"':  out[off++] = '\\'; out[off++] = '"'; break;
        case '\\': out[off++] = '\\'; out[off++] = '\\'; break;
        case '\n': out[off++] = '\\'; out[off++] = 'n'; break;
        case '\r': out[off++] = '\\'; out[off++] = 'r'; break;
        case '\t': out[off++] = '\\'; out[off++] = 't'; break;
        default:
            if ((unsigned char)*p < 0x20) {
                off += snprintf(out + off, out_size - off, "\\u%04x", (unsigned char)*p);
            } else {
                out[off++] = *p;
            }
        }
    }
    if (off < out_size - 1) out[off++] = '"';
    out[off] = '\0';
    return 0;
}

/* ── JSON_UNQUOTE ── */
int evo_json_unquote(const char *json_str, char *out, int out_size)
{
    if (!json_str || !out) return -1;
    int len = (int)strlen(json_str);
    if (len < 2 || json_str[0] != '"' || json_str[len - 1] != '"') {
        /* Not a JSON string — return as-is */
        strncpy(out, json_str, out_size - 1);
        out[out_size - 1] = '\0';
        return 0;
    }
    int off = 0;
    for (int i = 1; i < len - 1 && off < out_size - 1; i++) {
        if (json_str[i] == '\\' && i + 1 < len - 1) {
            i++;
            switch (json_str[i]) {
            case '"':  out[off++] = '"'; break;
            case '\\': out[off++] = '\\'; break;
            case '/':  out[off++] = '/'; break;
            case 'b':  out[off++] = '\b'; break;
            case 'f':  out[off++] = '\f'; break;
            case 'n':  out[off++] = '\n'; break;
            case 'r':  out[off++] = '\r'; break;
            case 't':  out[off++] = '\t'; break;
            default:   out[off++] = json_str[i]; break;
            }
        } else {
            out[off++] = json_str[i];
        }
    }
    out[off] = '\0';
    return 0;
}

/* ── JSON_PRETTY ── */
static int pretty_value(const char *s, int *pos, int len, char *out,
                        int *off, int out_size, int indent, int depth);

static int pretty_indent(char *out, int *off, int out_size, int indent)
{
    for (int i = 0; i < indent && *off < out_size - 1; i++)
        out[(*off)++] = ' ';
    return 0;
}

static int pretty_object(const char *s, int *pos, int len, char *out,
                         int *off, int out_size, int indent, int depth)
{
    if (depth > JSON_MAX_DEPTH) return -1;
    out[(*off)++] = '{';
    (*pos)++;
    skip_ws(s, pos, len);
    if (*pos < len && s[*pos] == '}') {
        (*pos)++;
        out[(*off)++] = '}';
        return 0;
    }
    int first = 1;
    for (;;) {
        if (!first && *off < out_size - 1) out[(*off)++] = ',';
        first = 0;
        if (*off < out_size - 1) out[(*off)++] = '\n';
        pretty_indent(out, off, out_size, indent + 2);

        skip_ws(s, pos, len);
        int ks = *pos;
        if (parse_string(s, pos, len) != 0) return -1;
        int ke = *pos;
        int kn = ke - ks;
        if (*off + kn < out_size) { memcpy(out + *off, s + ks, kn); *off += kn; }

        if (*off < out_size - 2) { out[(*off)++] = ':'; out[(*off)++] = ' '; }
        skip_ws(s, pos, len);
        if (*pos >= len || s[*pos] != ':') return -1;
        (*pos)++;
        skip_ws(s, pos, len);

        if (pretty_value(s, pos, len, out, off, out_size, indent + 2, depth + 1) != 0)
            return -1;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == '}') {
            (*pos)++;
            if (*off < out_size - 1) out[(*off)++] = '\n';
            pretty_indent(out, off, out_size, indent);
            if (*off < out_size - 1) out[(*off)++] = '}';
            return 0;
        }
        if (*pos >= len || s[*pos] != ',') return -1;
        (*pos)++;
    }
}

static int pretty_array(const char *s, int *pos, int len, char *out,
                        int *off, int out_size, int indent, int depth)
{
    if (depth > JSON_MAX_DEPTH) return -1;
    out[(*off)++] = '[';
    (*pos)++;
    skip_ws(s, pos, len);
    if (*pos < len && s[*pos] == ']') {
        (*pos)++;
        out[(*off)++] = ']';
        return 0;
    }
    int first = 1;
    for (;;) {
        if (!first && *off < out_size - 1) out[(*off)++] = ',';
        first = 0;
        if (*off < out_size - 1) out[(*off)++] = '\n';
        pretty_indent(out, off, out_size, indent + 2);

        skip_ws(s, pos, len);
        if (pretty_value(s, pos, len, out, off, out_size, indent + 2, depth + 1) != 0)
            return -1;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == ']') {
            (*pos)++;
            if (*off < out_size - 1) out[(*off)++] = '\n';
            pretty_indent(out, off, out_size, indent);
            if (*off < out_size - 1) out[(*off)++] = ']';
            return 0;
        }
        if (*pos >= len || s[*pos] != ',') return -1;
        (*pos)++;
    }
}

static int pretty_value(const char *s, int *pos, int len, char *out,
                        int *off, int out_size, int indent, int depth)
{
    skip_ws(s, pos, len);
    if (*pos >= len) return -1;
    if (s[*pos] == '{') return pretty_object(s, pos, len, out, off, out_size, indent, depth);
    if (s[*pos] == '[') return pretty_array(s, pos, len, out, off, out_size, indent, depth);
    /* Scalar: copy as-is */
    int vs = *pos;
    if (parse_value(s, pos, len, depth) != 0) return -1;
    int ve = *pos;
    int n = ve - vs;
    if (*off + n < out_size) { memcpy(out + *off, s + vs, n); *off += n; }
    return 0;
}

int evo_json_pretty(const char *json_str, char *out, int out_size)
{
    if (!json_str || !out) return -1;
    int len = (int)strlen(json_str);
    int pos = 0, off = 0;
    if (pretty_value(json_str, &pos, len, out, &off, out_size, 0, 0) != 0)
        return -1;
    if (off < out_size) out[off] = '\0';
    else out[out_size - 1] = '\0';
    return 0;
}

/* ── JSON_CONTAINS ── */
static int json_values_equal(const char *a, int as, int ae,
                             const char *b, int bs, int be);

static int contains_value(const char *target, int ts, int te,
                          const char *candidate, int cs, int ce)
{
    /* Skip whitespace */
    while (ts < te && isspace((unsigned char)target[ts])) ts++;
    while (te > ts && isspace((unsigned char)target[te - 1])) te--;
    while (cs < ce && isspace((unsigned char)candidate[cs])) cs++;
    while (ce > cs && isspace((unsigned char)candidate[ce - 1])) ce--;

    if (cs >= ce) return 0;
    char tc = target[ts], cc = candidate[cs];

    /* Scalar equality */
    if (cc != '{' && cc != '[') {
        return json_values_equal(target, ts, te, candidate, cs, ce);
    }

    /* If candidate is object, check all keys present in target */
    if (cc == '{' && tc == '{') {
        int cpos = cs + 1;
        int clen = ce;
        skip_ws(candidate, &cpos, clen);
        if (cpos < clen && candidate[cpos] == '}') return 1;
        for (;;) {
            skip_ws(candidate, &cpos, clen);
            if (cpos >= clen || candidate[cpos] != '"') return 0;
            int cks = cpos + 1;
            if (parse_string(candidate, &cpos, clen) != 0) return 0;
            int cke = cpos - 1;
            skip_ws(candidate, &cpos, clen);
            if (cpos >= clen || candidate[cpos] != ':') return 0;
            cpos++;
            skip_ws(candidate, &cpos, clen);
            int cvs = cpos;
            if (parse_value(candidate, &cpos, clen, 1) != 0) return 0;
            int cve = cpos;

            /* Find this key in target */
            char key[256];
            int kn = cke - cks;
            if (kn >= 255) kn = 255;
            memcpy(key, candidate + cks, kn);
            key[kn] = '\0';

            char tval[JSON_BUF_SIZE];
            PathSeg seg;
            seg.type = PATH_SEG_KEY;
            strncpy(seg.key, key, 255);
            seg.key[255] = '\0';
            int tvs, tve;
            int tpos = ts;
            if (navigate_segment(target, te, &tpos, &seg, &tvs, &tve) != 0)
                return 0;

            if (!contains_value(target, tvs, tve, candidate, cvs, cve))
                return 0;

            skip_ws(candidate, &cpos, clen);
            if (cpos < clen && candidate[cpos] == '}') return 1;
            if (cpos >= clen || candidate[cpos] != ',') return 0;
            cpos++;
        }
    }

    /* If candidate is array, check all elements present in target array */
    if (cc == '[' && tc == '[') {
        int cpos = cs + 1;
        int clen = ce;
        skip_ws(candidate, &cpos, clen);
        if (cpos < clen && candidate[cpos] == ']') return 1;
        for (;;) {
            skip_ws(candidate, &cpos, clen);
            int cvs = cpos;
            if (parse_value(candidate, &cpos, clen, 1) != 0) return 0;
            int cve = cpos;

            /* Check if this element exists in target array */
            int tpos = ts + 1;
            int found = 0;
            skip_ws(target, &tpos, te);
            if (tpos < te && target[tpos] != ']') {
                for (;;) {
                    skip_ws(target, &tpos, te);
                    int tvs = tpos;
                    if (parse_value(target, &tpos, te, 1) != 0) break;
                    int tve = tpos;
                    if (contains_value(target, tvs, tve, candidate, cvs, cve)) {
                        found = 1;
                        break;
                    }
                    skip_ws(target, &tpos, te);
                    if (tpos < te && target[tpos] == ']') break;
                    if (tpos >= te || target[tpos] != ',') break;
                    tpos++;
                }
            }
            if (!found) return 0;

            skip_ws(candidate, &cpos, clen);
            if (cpos < clen && candidate[cpos] == ']') return 1;
            if (cpos >= clen || candidate[cpos] != ',') return 0;
            cpos++;
        }
    }

    return 0;
}

static int json_values_equal(const char *a, int as, int ae,
                             const char *b, int bs, int be)
{
    while (as < ae && isspace((unsigned char)a[as])) as++;
    while (ae > as && isspace((unsigned char)a[ae - 1])) ae--;
    while (bs < be && isspace((unsigned char)b[bs])) bs++;
    while (be > bs && isspace((unsigned char)b[be - 1])) be--;
    int an = ae - as, bn = be - bs;
    if (an != bn) return 0;
    return memcmp(a + as, b + bs, an) == 0;
}

int evo_json_contains(const char *target, const char *candidate)
{
    if (!target || !candidate) return 0;
    int tlen = (int)strlen(target);
    int clen = (int)strlen(candidate);
    return contains_value(target, 0, tlen, candidate, 0, clen);
}

/* ── JSON_CONTAINS_PATH ── */
int evo_json_contains_path(const char *json_str, int mode_all,
                           const char **paths, int npaths)
{
    if (!json_str || !paths) return 0;
    int len = (int)strlen(json_str);
    int found_count = 0;

    for (int i = 0; i < npaths; i++) {
        PathSeg segs[32];
        int nsegs = parse_path(paths[i], segs, 32);
        if (nsegs < 0) continue;

        int vs = 0, ve = 0;
        int ok = (extract_by_path(json_str, len, segs, nsegs, &vs, &ve) == 0);

        if (ok) {
            found_count++;
            if (!mode_all) return 1; /* 'one' mode: any path found */
        } else {
            if (mode_all) return 0; /* 'all' mode: any path missing */
        }
    }
    return mode_all ? (found_count == npaths) : 0;
}

/* ── JSON_SEARCH ── */
static int search_value(const char *s, int *pos, int len,
                        const char *search_str, int search_len,
                        char *cur_path, int path_off,
                        char *out, int out_size, int *out_off,
                        int find_all, int *found, int depth);

static int search_object(const char *s, int *pos, int len,
                         const char *search_str, int search_len,
                         char *cur_path, int path_off,
                         char *out, int out_size, int *out_off,
                         int find_all, int *found, int depth)
{
    (*pos)++;
    skip_ws(s, pos, len);
    if (*pos < len && s[*pos] == '}') { (*pos)++; return 0; }
    for (;;) {
        skip_ws(s, pos, len);
        if (*pos >= len || s[*pos] != '"') return -1;
        int ks = *pos + 1;
        if (parse_string(s, pos, len) != 0) return -1;
        int ke = *pos - 1;

        char child_path[512];
        int kn = ke - ks;
        if (kn > 255) kn = 255;
        snprintf(child_path, sizeof(child_path), "%.*s.%.*s",
                 path_off, cur_path, kn, s + ks);

        skip_ws(s, pos, len);
        if (*pos >= len || s[*pos] != ':') return -1;
        (*pos)++;
        skip_ws(s, pos, len);

        search_value(s, pos, len, search_str, search_len,
                     child_path, (int)strlen(child_path),
                     out, out_size, out_off, find_all, found, depth + 1);
        if (*found && !find_all) return 0;

        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == '}') { (*pos)++; return 0; }
        if (*pos >= len || s[*pos] != ',') return -1;
        (*pos)++;
    }
}

static int search_array(const char *s, int *pos, int len,
                        const char *search_str, int search_len,
                        char *cur_path, int path_off,
                        char *out, int out_size, int *out_off,
                        int find_all, int *found, int depth)
{
    (*pos)++;
    skip_ws(s, pos, len);
    if (*pos < len && s[*pos] == ']') { (*pos)++; return 0; }
    int idx = 0;
    for (;;) {
        char child_path[512];
        snprintf(child_path, sizeof(child_path), "%.*s[%d]", path_off, cur_path, idx);
        skip_ws(s, pos, len);
        search_value(s, pos, len, search_str, search_len,
                     child_path, (int)strlen(child_path),
                     out, out_size, out_off, find_all, found, depth + 1);
        if (*found && !find_all) return 0;
        idx++;
        skip_ws(s, pos, len);
        if (*pos < len && s[*pos] == ']') { (*pos)++; return 0; }
        if (*pos >= len || s[*pos] != ',') return -1;
        (*pos)++;
    }
}

static int search_value(const char *s, int *pos, int len,
                        const char *search_str, int search_len,
                        char *cur_path, int path_off,
                        char *out, int out_size, int *out_off,
                        int find_all, int *found, int depth)
{
    if (depth > JSON_MAX_DEPTH) return -1;
    skip_ws(s, pos, len);
    if (*pos >= len) return -1;

    if (s[*pos] == '"') {
        int vs = *pos + 1;
        if (parse_string(s, pos, len) != 0) return -1;
        int ve = *pos - 1;
        int vn = ve - vs;
        if (vn == search_len && memcmp(s + vs, search_str, search_len) == 0) {
            /* Match! Add "$" prefix */
            if (*out_off > 0 && *out_off < out_size - 1) out[(*out_off)++] = ',';
            int pn = snprintf(out + *out_off, out_size - *out_off, "\"$%.*s\"",
                              path_off, cur_path);
            *out_off += pn;
            *found = 1;
        }
        return 0;
    }
    if (s[*pos] == '{') return search_object(s, pos, len, search_str, search_len,
                                              cur_path, path_off, out, out_size, out_off,
                                              find_all, found, depth);
    if (s[*pos] == '[') return search_array(s, pos, len, search_str, search_len,
                                             cur_path, path_off, out, out_size, out_off,
                                             find_all, found, depth);
    /* Skip other value types (numbers, booleans, null) */
    return parse_value(s, pos, len, depth);
}

int evo_json_search(const char *json_str, int find_all,
                    const char *search_str, char *out, int out_size)
{
    if (!json_str || !search_str || !out) return -1;
    int len = (int)strlen(json_str);
    int search_len = (int)strlen(search_str);
    int pos = 0, out_off = 0, found = 0;
    char path[4] = "";
    search_value(json_str, &pos, len, search_str, search_len,
                 path, 0, out, out_size, &out_off, find_all, &found, 0);
    if (!found) return 0;
    if (out_off < out_size) out[out_off] = '\0';
    return 1;
}

/* ── JSON_SET / JSON_INSERT / JSON_REPLACE / JSON_REMOVE ──
 *    Simplified: only supports top-level object keys */
int evo_json_set(const char *json_str, const char *path,
                 const char *new_val, char *out, int out_size, int mode)
{
    /* mode: 0=SET (insert or replace), 1=INSERT (only if missing),
     *       2=REPLACE (only if exists), 3=REMOVE */
    if (!json_str || !path || !out) return -1;
    int len = (int)strlen(json_str);
    int pos = 0;
    skip_ws(json_str, &pos, len);
    if (pos >= len || json_str[pos] != '{') return -1;

    PathSeg segs[32];
    int nsegs = parse_path(path, segs, 32);
    if (nsegs != 1 || segs[0].type != PATH_SEG_KEY) return -1;
    const char *key = segs[0].key;
    int key_len = (int)strlen(key);

    /* Build output: scan the object */
    int off = 0;
    out[off++] = '{';
    pos++; /* skip { */
    skip_ws(json_str, &pos, len);

    int found_key = 0;
    int first = 1;

    if (pos < len && json_str[pos] != '}') {
        for (;;) {
            skip_ws(json_str, &pos, len);
            if (pos >= len || json_str[pos] != '"') break;
            int ks = pos + 1;
            int save_pos = pos;
            if (parse_string(json_str, &pos, len) != 0) break;
            int ke = pos - 1;

            skip_ws(json_str, &pos, len);
            if (pos >= len || json_str[pos] != ':') break;
            pos++;
            skip_ws(json_str, &pos, len);

            int vs = pos;
            if (parse_value(json_str, &pos, len, 1) != 0) break;
            int ve = pos;

            int this_klen = ke - ks;
            int is_target = (this_klen == key_len &&
                             memcmp(json_str + ks, key, key_len) == 0);

            if (is_target && mode == 3) {
                /* REMOVE: skip this key-value */
                found_key = 1;
            } else if (is_target) {
                found_key = 1;
                if (!first) out[off++] = ',';
                first = 0;
                off += snprintf(out + off, out_size - off, "\"%.*s\":",
                                this_klen, json_str + ks);
                if (mode == 1) {
                    /* INSERT: keep old value */
                    int vn = ve - vs;
                    if (off + vn < out_size) { memcpy(out + off, json_str + vs, vn); off += vn; }
                } else {
                    /* SET or REPLACE: use new value */
                    int nlen = (int)strlen(new_val);
                    if (off + nlen < out_size) { memcpy(out + off, new_val, nlen); off += nlen; }
                }
            } else {
                if (!first) out[off++] = ',';
                first = 0;
                off += snprintf(out + off, out_size - off, "\"%.*s\":",
                                this_klen, json_str + ks);
                int vn = ve - vs;
                if (off + vn < out_size) { memcpy(out + off, json_str + vs, vn); off += vn; }
            }

            skip_ws(json_str, &pos, len);
            if (pos < len && json_str[pos] == '}') break;
            if (pos >= len || json_str[pos] != ',') break;
            pos++;
        }
    }

    /* For SET/INSERT: add new key if not found */
    if (!found_key && mode != 2 && mode != 3 && new_val) {
        if (!first) out[off++] = ',';
        off += snprintf(out + off, out_size - off, "\"%s\":%s", key, new_val);
    }

    if (off < out_size - 1) out[off++] = '}';
    out[off] = '\0';
    return 0;
}

/* ── JSON_OBJECT ── */
int evo_json_object(const char **keys, const char **values, int n,
                    char *out, int out_size)
{
    if (!out) return -1;
    int off = 0;
    out[off++] = '{';
    for (int i = 0; i < n && off < out_size - 4; i++) {
        if (i > 0) out[off++] = ',';
        off += snprintf(out + off, out_size - off, "\"%s\":%s",
                        keys[i] ? keys[i] : "",
                        values[i] ? values[i] : "null");
    }
    if (off < out_size - 1) out[off++] = '}';
    out[off] = '\0';
    return 0;
}

/* ── JSON_ARRAY ── */
int evo_json_array(const char **values, int n, char *out, int out_size)
{
    if (!out) return -1;
    int off = 0;
    out[off++] = '[';
    for (int i = 0; i < n && off < out_size - 3; i++) {
        if (i > 0) out[off++] = ',';
        const char *v = values[i] ? values[i] : "null";
        int vn = (int)strlen(v);
        if (off + vn < out_size) { memcpy(out + off, v, vn); off += vn; }
    }
    if (off < out_size - 1) out[off++] = ']';
    out[off] = '\0';
    return 0;
}
