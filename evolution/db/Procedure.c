/*
 * Procedure.c — Stored Procedures and Functions
 *
 * CREATE PROCEDURE / FUNCTION, DROP PROCEDURE / FUNCTION, CALL
 * Body is stored as raw SQL text and executed statement-by-statement
 * via query_execute() at CALL time.
 */
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "database.h"
#include "catalog_internal.h"
#include "evosql_errcodes.h"

/* ----------------------------------------------------------------
 *  Parser helper functions — called from evoparser.y actions
 * ---------------------------------------------------------------- */

void evo_set_proc_name(const char *name, int isFunction)
{
    strncpy(g_proc.procName, name, sizeof(g_proc.procName) - 1);
    g_proc.isFunction = isFunction;
}

void evo_set_proc_replace(int orReplace)
{
    g_proc.orReplace = orReplace;
}

void evo_set_proc_return_type(const char *type)
{
    strncpy(g_proc.returnType, type, sizeof(g_proc.returnType) - 1);
}

void evo_add_proc_param(const char *name, const char *mode)
{
    if (g_proc.paramCount >= MAX_PROC_PARAMS) return;
    strncpy(g_proc.paramNames[g_proc.paramCount], name,
            sizeof(g_proc.paramNames[0]) - 1);
    strncpy(g_proc.paramModes[g_proc.paramCount],
            mode ? mode : "IN", sizeof(g_proc.paramModes[0]) - 1);
    g_proc.paramCount++;
}

void evo_set_proc_drop(const char *name, int ifExists)
{
    strncpy(g_proc.dropName, name, sizeof(g_proc.dropName) - 1);
    g_proc.dropIfExists = ifExists;
}

void evo_set_call_name(const char *name)
{
    strncpy(g_proc.callName, name, sizeof(g_proc.callName) - 1);
}

void evo_add_call_arg(const char *val)
{
    if (g_proc.argCount >= MAX_CALL_ARGS) return;
    /* Keep value as-is (including quotes) for SQL substitution */
    strncpy(g_proc.args[g_proc.argCount], val,
            sizeof(g_proc.args[0]) - 1);
    g_proc.argCount++;
}

/* ----------------------------------------------------------------
 *  Extract procedure body from g_lex_input
 *  Finds text between first BEGIN and matching END
 * ---------------------------------------------------------------- */
static int extract_proc_body(char *body, int body_size)
{
    extern __thread const char *g_lex_input;
    if (!g_lex_input) return -1;

    /* Find BEGIN keyword (case-insensitive) */
    const char *p = g_lex_input;
    const char *begin_pos = NULL;
    while (*p) {
        if (strncasecmp(p, "BEGIN", 5) == 0 &&
            (p == g_lex_input || !isalnum((unsigned char)p[-1])) &&
            !isalnum((unsigned char)p[5])) {
            begin_pos = p + 5;
            break;
        }
        p++;
    }
    if (!begin_pos) return -1;

    /* Find the last END keyword — the outer END that closes the procedure */
    const char *end_pos = NULL;
    p = begin_pos;
    int depth = 1;
    while (*p) {
        /* Skip string literals */
        if (*p == '\'') {
            p++;
            while (*p && *p != '\'') {
                if (*p == '\\') p++;
                if (*p) p++;
            }
            if (*p) p++;
            continue;
        }
        /* Check for BEGIN — increase depth */
        if (strncasecmp(p, "BEGIN", 5) == 0 &&
            (p == g_lex_input || !isalnum((unsigned char)p[-1])) &&
            !isalnum((unsigned char)p[5])) {
            depth++;
            p += 5;
            continue;
        }
        /* Check for END — decrease depth only for standalone END
         * (not END IF, END WHILE, END LOOP, END FOR, END FOREACH, END CASE) */
        if (strncasecmp(p, "END", 3) == 0 &&
            !isalnum((unsigned char)p[-1]) &&
            !isalnum((unsigned char)p[3])) {
            /* Check what follows END */
            const char *ep = p + 3;
            while (*ep && isspace((unsigned char)*ep)) ep++;
            if (*ep == '\0' || *ep == ';' || *ep == '\n' || *ep == '\r' ||
                strncasecmp(ep, "$$", 2) == 0) {
                /* Standalone END — closes a BEGIN block */
                depth--;
                if (depth == 0) {
                    end_pos = p;
                    break;
                }
            }
            /* END IF/WHILE/LOOP/etc. — not a depth change, just skip */
            p += 3;
            continue;
        }
        p++;
    }
    if (!end_pos) return -1;

    /* Copy body between BEGIN and END, trimming whitespace */
    const char *src = begin_pos;
    while (src < end_pos && isspace((unsigned char)*src)) src++;
    int len = (int)(end_pos - src);
    while (len > 0 && isspace((unsigned char)src[len-1])) len--;

    if (len <= 0) {
        body[0] = '\0';
        return 0;
    }
    if (len >= body_size) len = body_size - 1;
    memcpy(body, src, len);
    body[len] = '\0';
    return 0;
}

/* ----------------------------------------------------------------
 *  Extract parameter list from g_lex_input
 *  Gets text between first '(' and matching ')' after PROCEDURE/FUNCTION name
 * ---------------------------------------------------------------- */
static int extract_param_list(char *params, int param_size)
{
    extern __thread const char *g_lex_input;
    if (!g_lex_input) { params[0] = '\0'; return 0; }

    /* Find first '(' */
    const char *open = strchr(g_lex_input, '(');
    if (!open) { params[0] = '\0'; return 0; }

    /* Find matching ')' */
    const char *close = NULL;
    int depth = 1;
    const char *p = open + 1;
    while (*p && depth > 0) {
        if (*p == '(') depth++;
        else if (*p == ')') { depth--; if (depth == 0) { close = p; break; } }
        p++;
    }
    if (!close) { params[0] = '\0'; return 0; }

    int len = (int)(close - open - 1);
    while (len > 0 && isspace((unsigned char)open[1])) { open++; len--; }
    while (len > 0 && isspace((unsigned char)open[len])) len--;

    if (len <= 0) { params[0] = '\0'; return 0; }
    if (len >= param_size) len = param_size - 1;
    memcpy(params, open + 1, len);
    params[len] = '\0';
    return 0;
}

/* ----------------------------------------------------------------
 *  CREATE PROCEDURE / FUNCTION
 * ---------------------------------------------------------------- */
int CreateProcedureProcess(void)
{
    char body[8192] = "";
    if (extract_proc_body(body, sizeof(body)) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not extract procedure body for \"%s\"",
                 g_proc.procName);
        g_err.error = 1;
        return -1;
    }

    char paramList[1024] = "";
    extract_param_list(paramList, sizeof(paramList));

    /* Resolve current database and schema */
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current database not found");
        g_err.error = 1;
        return -1;
    }
    SchemaDesc schDesc;
    const char *schema = db_get_current_schema();
    if (cat_find_schema(dbDesc.db_id, schema, &schDesc) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current schema not found");
        g_err.error = 1;
        return -1;
    }

    /* Check if procedure already exists */
    ProcedureDesc existing;
    if (cat_find_procedure(dbDesc.db_id, schDesc.schema_id,
                           g_proc.procName, &existing) == 0) {
        if (g_proc.orReplace) {
            cat_drop_procedure(dbDesc.db_id, schDesc.schema_id,
                               g_proc.procName);
        } else {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "%s \"%s\" already exists",
                     g_proc.isFunction ? "function" : "procedure",
                     g_proc.procName);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("42P07");
            return -1;
        }
    }

    if (cat_create_procedure(dbDesc.db_id, schDesc.schema_id,
                             g_proc.procName, paramList,
                             g_proc.returnType, g_proc.isFunction,
                             body) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not create %s \"%s\"",
                 g_proc.isFunction ? "function" : "procedure",
                 g_proc.procName);
        g_err.error = 1;
        return -1;
    }

    printf("CREATE %s\n", g_proc.isFunction ? "FUNCTION" : "PROCEDURE");
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP PROCEDURE / FUNCTION
 * ---------------------------------------------------------------- */
int DropProcedureProcess(void)
{
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) < 0) {
        if (g_proc.dropIfExists) {
            printf("DROP PROCEDURE\n");
            return 0;
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current database not found");
        g_err.error = 1;
        return -1;
    }
    SchemaDesc schDesc;
    const char *schema = db_get_current_schema();
    if (cat_find_schema(dbDesc.db_id, schema, &schDesc) < 0) {
        if (g_proc.dropIfExists) {
            printf("DROP PROCEDURE\n");
            return 0;
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "current schema not found");
        g_err.error = 1;
        return -1;
    }

    if (cat_drop_procedure(dbDesc.db_id, schDesc.schema_id,
                           g_proc.dropName) < 0) {
        if (g_proc.dropIfExists) {
            printf("DROP PROCEDURE\n");
            return 0;
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "%s \"%s\" does not exist",
                 g_proc.isFunction ? "function" : "procedure",
                 g_proc.dropName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42883");
        return -1;
    }

    printf("DROP %s\n", g_proc.isFunction ? "FUNCTION" : "PROCEDURE");
    return 0;
}

/* ----------------------------------------------------------------
 *  Statement splitter — splits SQL body at ';' boundaries,
 *  respecting string literals and nested parens.
 *  Returns number of statements found.
 * ---------------------------------------------------------------- */
int split_statements(const char *body, char stmts[][4096], int max_stmts)
{
    int count = 0;
    const char *p = body;
    const char *stmt_start = p;

    while (*p && count < max_stmts) {
        /* Skip string literals */
        if (*p == '\'') {
            p++;
            while (*p && !(*p == '\'' && (p[1] != '\''))) {
                if (*p == '\'' && p[1] == '\'') p += 2; /* escaped quote */
                else p++;
            }
            if (*p) p++;
            continue;
        }

        if (*p == ';') {
            /* Extract statement */
            int len = (int)(p - stmt_start);
            /* Trim whitespace */
            while (len > 0 && isspace((unsigned char)stmt_start[0])) {
                stmt_start++; len--;
            }
            while (len > 0 && isspace((unsigned char)stmt_start[len-1])) len--;

            if (len > 0) {
                if (len >= 4096) len = 4095;
                memcpy(stmts[count], stmt_start, len);
                stmts[count][len] = '\0';
                count++;
            }
            p++;
            stmt_start = p;
            continue;
        }
        p++;
    }

    /* Last statement (may not have trailing ';') */
    int len = (int)(p - stmt_start);
    while (len > 0 && isspace((unsigned char)stmt_start[0])) {
        stmt_start++; len--;
    }
    while (len > 0 && isspace((unsigned char)stmt_start[len-1])) len--;
    if (len > 0 && count < max_stmts) {
        if (len >= 4096) len = 4095;
        memcpy(stmts[count], stmt_start, len);
        stmts[count][len] = '\0';
        count++;
    }

    return count;
}

/* ----------------------------------------------------------------
 *  Parameter substitution — replace $1, $2, ... or param names
 *  in SQL with actual argument values.
 * ---------------------------------------------------------------- */
void substitute_params(const char *sql, char *out, int out_size,
                              const char *param_names[], const char *arg_vals[],
                              int param_count)
{
    const char *p = sql;
    char *dst = out;
    char *end = out + out_size - 1;

    while (*p && dst < end) {
        /* Check for $N positional parameter */
        if (*p == '$' && isdigit((unsigned char)p[1])) {
            int idx = 0;
            const char *start = p;
            p++; /* skip $ */
            while (isdigit((unsigned char)*p)) {
                idx = idx * 10 + (*p - '0');
                p++;
            }
            idx--; /* 0-based */
            if (idx >= 0 && idx < param_count && arg_vals[idx]) {
                int vlen = (int)strlen(arg_vals[idx]);
                if (dst + vlen < end) {
                    memcpy(dst, arg_vals[idx], vlen);
                    dst += vlen;
                }
            } else {
                /* Unknown param, keep original */
                while (start < p && dst < end) *dst++ = *start++;
            }
            continue;
        }

        /* Check for named parameter */
        if (isalpha((unsigned char)*p) || *p == '_') {
            const char *word = p;
            while (isalnum((unsigned char)*p) || *p == '_') p++;
            int wlen = (int)(p - word);

            int found = 0;
            for (int i = 0; i < param_count; i++) {
                if (param_names[i] &&
                    (int)strlen(param_names[i]) == wlen &&
                    strncasecmp(word, param_names[i], wlen) == 0) {
                    int vlen = (int)strlen(arg_vals[i]);
                    if (dst + vlen < end) {
                        memcpy(dst, arg_vals[i], vlen);
                        dst += vlen;
                    }
                    found = 1;
                    break;
                }
            }
            if (!found) {
                if (dst + wlen < end) {
                    memcpy(dst, word, wlen);
                    dst += wlen;
                }
            }
            continue;
        }

        /* String literals — copy verbatim */
        if (*p == '\'') {
            *dst++ = *p++;
            while (*p && dst < end) {
                if (*p == '\'' && p[1] == '\'') {
                    if (dst + 1 < end) { *dst++ = *p++; *dst++ = *p++; }
                    else break;
                } else if (*p == '\'') {
                    *dst++ = *p++;
                    break;
                } else {
                    *dst++ = *p++;
                }
            }
            continue;
        }

        *dst++ = *p++;
    }
    *dst = '\0';
}

/* ----------------------------------------------------------------
 *  Parse parameter definitions: "p1 INT, p2 VARCHAR(50)"
 *  Returns parameter count.
 * ---------------------------------------------------------------- */
int parse_param_defs(const char *param_list,
                     char names[][128], char types[][64],
                     char modes[][8], int max)
{
    if (!param_list || !param_list[0]) return 0;

    int count = 0;
    const char *p = param_list;

    while (*p && count < max) {
        /* Skip whitespace and commas */
        while (*p && (isspace((unsigned char)*p) || *p == ',')) p++;
        if (!*p) break;

        /* Detect mode: IN, OUT, INOUT */
        char mode[8] = "IN";
        if (strncasecmp(p, "INOUT ", 6) == 0) {
            strcpy(mode, "INOUT"); p += 6;
        } else if (strncasecmp(p, "OUT ", 4) == 0) {
            strcpy(mode, "OUT"); p += 4;
        } else if (strncasecmp(p, "IN ", 3) == 0) {
            strcpy(mode, "IN"); p += 3;
        }
        if (modes) strncpy(modes[count], mode, 7);
        while (*p && isspace((unsigned char)*p)) p++;

        /* Read parameter name */
        const char *name_start = p;
        while (*p && !isspace((unsigned char)*p) && *p != ',') p++;
        int nlen = (int)(p - name_start);
        if (nlen >= 128) nlen = 127;
        memcpy(names[count], name_start, nlen);
        names[count][nlen] = '\0';

        /* Skip whitespace */
        while (*p && isspace((unsigned char)*p)) p++;

        /* Read type (until comma or end) */
        const char *type_start = p;
        int paren_depth = 0;
        while (*p && (*p != ',' || paren_depth > 0)) {
            if (*p == '(') paren_depth++;
            if (*p == ')') paren_depth--;
            p++;
        }
        int tlen = (int)(p - type_start);
        while (tlen > 0 && isspace((unsigned char)type_start[tlen-1])) tlen--;
        if (tlen >= 64) tlen = 63;
        memcpy(types[count], type_start, tlen);
        types[count][tlen] = '\0';

        count++;
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Enhanced Statement Splitter for Procedure Control Flow
 *
 *  Splits procedure body into one "statement" per unit:
 *  - Normal SQL statements split at ';'
 *  - Control flow constructs split at keyword boundaries:
 *    "IF cond THEN" / "ELSEIF cond THEN" / "ELSE" / "END IF"
 *    "WHILE cond DO" / "END WHILE"
 *    "LOOP" / "END LOOP" / "LEAVE label" / "ITERATE label"
 *    "FOR var IN start..end DO" / "END FOR"
 *    "FOREACH vars IN (query) DO" / "END FOREACH"
 *    "CASE expr" / "WHEN val THEN" / "END CASE"
 * ---------------------------------------------------------------- */

/* Helper: check if text at pos starts with keyword (case-insensitive, word boundary) */
static int kw_at(const char *s, const char *kw)
{
    int len = (int)strlen(kw);
    if (strncasecmp(s, kw, len) != 0) return 0;
    /* Must be at word boundary */
    char after = s[len];
    if (after == '\0' || isspace((unsigned char)after) || after == ';' || after == '(')
        return len;
    return 0;
}

/* Helper: find keyword in string, respecting string literals */
static const char *find_kw(const char *s, const char *kw)
{
    const char *p = s;
    while (*p) {
        if (*p == '\'') {
            p++;
            while (*p && !(*p == '\'' && p[1] != '\'')) {
                if (*p == '\'' && p[1] == '\'') p += 2;
                else p++;
            }
            if (*p) p++;
            continue;
        }
        if (kw_at(p, kw) && (p == s || !isalnum((unsigned char)p[-1])))
            return p;
        p++;
    }
    return NULL;
}

/* Helper: copy trimmed text into a stmt buffer */
static int add_stmt(char stmts[][4096], int *count, int max,
                    const char *start, int len)
{
    if (*count >= max) return -1;
    /* Trim leading whitespace */
    while (len > 0 && isspace((unsigned char)*start)) { start++; len--; }
    /* Trim trailing whitespace */
    while (len > 0 && isspace((unsigned char)start[len-1])) len--;
    if (len <= 0) return 0;
    if (len >= 4096) len = 4095;
    memcpy(stmts[*count], start, len);
    stmts[*count][len] = '\0';
    (*count)++;
    return 0;
}

/* Try to split a single statement at a control-flow boundary.
 * Returns 1 if split occurred, 0 if no split. */
static int try_split_stmt(const char *s, char stmts[][4096], int *count, int max)
{
    while (*s && isspace((unsigned char)*s)) s++;
    if (!*s) return 0;

    const char *then_pos = find_kw(s, "THEN");
    const char *do_pos = find_kw(s, "DO");

    /* CASE expr: split at first WHEN */
    if (kw_at(s, "CASE")) {
        const char *when_pos = find_kw(s + 4, "WHEN");
        if (when_pos && when_pos > s + 4) {
            /* Split: "CASE expr" + "WHEN val THEN ..." */
            int prefix_len = (int)(when_pos - s);
            while (prefix_len > 0 && isspace((unsigned char)s[prefix_len-1])) prefix_len--;
            add_stmt(stmts, count, max, s, prefix_len);
            if (!try_split_stmt(when_pos, stmts, count, max))
                add_stmt(stmts, count, max, when_pos, (int)strlen(when_pos));
            return 1;
        }
    }

    /* IF...THEN or ELSEIF...THEN: split at THEN */
    if ((kw_at(s, "IF") || kw_at(s, "ELSEIF") || kw_at(s, "WHEN")) && then_pos) {
        int prefix_len = (int)(then_pos - s) + 4;
        add_stmt(stmts, count, max, s, prefix_len);
        const char *rest = then_pos + 4;
        while (*rest && isspace((unsigned char)*rest)) rest++;
        if (*rest) {
            /* Recursively try to split the rest */
            if (!try_split_stmt(rest, stmts, count, max))
                add_stmt(stmts, count, max, rest, (int)strlen(rest));
        }
        return 1;
    }

    /* LOOP (unconditional, no DO): split after LOOP keyword if followed by content */
    if (kw_at(s, "LOOP")) {
        int kwlen = 4;
        const char *rest = s + kwlen;
        while (*rest && isspace((unsigned char)*rest)) rest++;
        if (*rest) {
            add_stmt(stmts, count, max, s, kwlen);
            if (!try_split_stmt(rest, stmts, count, max))
                add_stmt(stmts, count, max, rest, (int)strlen(rest));
            return 1;
        }
        return 0; /* standalone LOOP, no split */
    }

    /* WHILE...DO / FOR...DO / FOREACH...DO: split at DO */
    if ((kw_at(s, "WHILE") || kw_at(s, "FOR") || kw_at(s, "FOREACH")) && do_pos) {
        int prefix_len = (int)(do_pos - s) + 2;
        add_stmt(stmts, count, max, s, prefix_len);
        const char *rest = do_pos + 2;
        while (*rest && isspace((unsigned char)*rest)) rest++;
        if (*rest) {
            if (!try_split_stmt(rest, stmts, count, max))
                add_stmt(stmts, count, max, rest, (int)strlen(rest));
        }
        return 1;
    }

    /* ELSE followed by more text: split */
    if (kw_at(s, "ELSE") && !kw_at(s, "ELSEIF")) {
        const char *rest = s + 4;
        while (*rest && isspace((unsigned char)*rest)) rest++;
        if (*rest) {
            add_stmt(stmts, count, max, s, 4);
            if (!try_split_stmt(rest, stmts, count, max))
                add_stmt(stmts, count, max, rest, (int)strlen(rest));
            return 1;
        }
    }

    return 0;
}

int split_proc_statements(const char *body, char stmts[][4096], int max_stmts)
{
    /* Phase 1: split on ';' using existing function */
    char (*raw)[4096] = malloc(128 * 4096);
    if (!raw) return 0;
    int raw_count = split_statements(body, raw, 128);

    /* Phase 2: recursively split at control-flow boundaries */
    int count = 0;
    for (int r = 0; r < raw_count && count < max_stmts; r++) {
        char *s = raw[r];
        while (*s && isspace((unsigned char)*s)) s++;
        if (!*s) continue;

        if (!try_split_stmt(s, stmts, &count, max_stmts))
            add_stmt(stmts, &count, max_stmts, s, (int)strlen(s));
    }
    free(raw);
    return count;
}

/* ----------------------------------------------------------------
 *  Block Map Builder
 *
 *  Pre-scans statements to build a jump table for control flow.
 *  For each control-flow statement, records matching counterparts.
 * ---------------------------------------------------------------- */

/* Classify a statement by its leading keyword */
static int classify_stmt(const char *s)
{
    while (*s && isspace((unsigned char)*s)) s++;
    if (kw_at(s, "END IF"))       return -1;  /* end marker */
    if (kw_at(s, "END WHILE"))    return -2;
    if (kw_at(s, "END LOOP"))     return -3;
    if (kw_at(s, "END FOR"))      return -4;
    if (kw_at(s, "END CASE"))     return -5;
    if (kw_at(s, "END FOREACH"))  return -6;
    if (kw_at(s, "IF"))           return BLOCK_IF;
    if (kw_at(s, "ELSEIF"))       return BLOCK_ELSEIF;
    if (kw_at(s, "ELSE"))         return BLOCK_ELSE;
    if (kw_at(s, "WHILE"))        return BLOCK_WHILE;
    /* Check for labeled LOOP: "label: LOOP" */
    if (kw_at(s, "LOOP"))         return BLOCK_LOOP;
    if (kw_at(s, "FOR"))          return BLOCK_FOR;
    if (kw_at(s, "FOREACH"))      return BLOCK_FOREACH;
    if (kw_at(s, "CASE"))         return BLOCK_CASE;
    if (kw_at(s, "WHEN"))         return BLOCK_WHEN;
    /* Check for label: before LOOP/WHILE/FOR */
    {
        const char *p = s;
        while (*p && (isalnum((unsigned char)*p) || *p == '_')) p++;
        if (*p == ':') {
            p++;
            while (*p && isspace((unsigned char)*p)) p++;
            if (kw_at(p, "LOOP"))    return BLOCK_LOOP;
            if (kw_at(p, "WHILE"))   return BLOCK_WHILE;
            if (kw_at(p, "FOR"))     return BLOCK_FOR;
            if (kw_at(p, "FOREACH")) return BLOCK_FOREACH;
        }
    }
    return -100; /* not a control-flow statement */
}

/* Extract label from "label: LOOP" or "label: WHILE...DO" */
static void extract_label(const char *s, char *label, int label_size)
{
    label[0] = '\0';
    const char *p = s;
    while (*p && isspace((unsigned char)*p)) p++;
    const char *start = p;
    while (*p && (isalnum((unsigned char)*p) || *p == '_')) p++;
    if (*p == ':') {
        int len = (int)(p - start);
        if (len > 0 && len < label_size) {
            memcpy(label, start, len);
            label[len] = '\0';
        }
    }
}

int proc_build_block_map(char stmts[][4096], int stmt_count,
                         BlockEntry map[], int map_size)
{
    /* Depth stack for nesting */
    struct { int type; int idx; } stack[32];
    int sp = 0;

    memset(map, 0, map_size * sizeof(BlockEntry));

    /* Initialize all entries */
    for (int i = 0; i < stmt_count && i < map_size; i++) {
        map[i].type = -100;
        map[i].match_idx = -1;
        map[i].end_idx = -1;
        map[i].start_idx = -1;
        map[i].label[0] = '\0';
    }

    for (int i = 0; i < stmt_count && i < map_size; i++) {
        int cls = classify_stmt(stmts[i]);

        switch (cls) {
        case BLOCK_IF:
            map[i].type = BLOCK_IF;
            extract_label(stmts[i], map[i].label, sizeof(map[i].label));
            if (sp < 32) { stack[sp].type = BLOCK_IF; stack[sp].idx = i; sp++; }
            break;

        case BLOCK_ELSEIF:
            map[i].type = BLOCK_ELSEIF;
            /* Link previous IF/ELSEIF to this */
            if (sp > 0 && (stack[sp-1].type == BLOCK_IF ||
                           stack[sp-1].type == BLOCK_ELSEIF)) {
                map[stack[sp-1].idx].match_idx = i;
                sp--;
            }
            if (sp < 32) { stack[sp].type = BLOCK_ELSEIF; stack[sp].idx = i; sp++; }
            break;

        case BLOCK_ELSE:
            map[i].type = BLOCK_ELSE;
            /* Link previous IF/ELSEIF/WHEN to this */
            if (sp > 0 && (stack[sp-1].type == BLOCK_IF ||
                           stack[sp-1].type == BLOCK_ELSEIF ||
                           stack[sp-1].type == BLOCK_WHEN)) {
                map[stack[sp-1].idx].match_idx = i;
                if (stack[sp-1].type == BLOCK_WHEN) sp--;
                else sp--;
            }
            if (sp < 32) { stack[sp].type = BLOCK_ELSE; stack[sp].idx = i; sp++; }
            break;

        case -1: /* END IF */
            map[i].type = BLOCK_END;
            if (sp > 0) {
                int top_idx = stack[sp-1].idx;
                map[top_idx].match_idx = i;
                sp--;
                /* Walk back and set end_idx for entire IF chain */
                map[i].end_idx = i; /* self */
                int j = top_idx;
                while (j >= 0 && j < map_size) {
                    map[j].end_idx = i;
                    if (map[j].type == BLOCK_IF) break;
                    /* Find the previous entry that links to j */
                    int found = 0;
                    for (int k = j - 1; k >= 0; k--) {
                        if (map[k].match_idx == j) { j = k; found = 1; break; }
                    }
                    if (!found) break;
                }
            }
            break;

        case BLOCK_WHILE:
            map[i].type = BLOCK_WHILE;
            extract_label(stmts[i], map[i].label, sizeof(map[i].label));
            if (sp < 32) { stack[sp].type = BLOCK_WHILE; stack[sp].idx = i; sp++; }
            break;

        case -2: /* END WHILE */
            map[i].type = BLOCK_END;
            if (sp > 0 && stack[sp-1].type == BLOCK_WHILE) {
                int top_idx = stack[sp-1].idx;
                map[top_idx].end_idx = i;
                map[i].start_idx = top_idx;
                sp--;
            }
            break;

        case BLOCK_LOOP:
            map[i].type = BLOCK_LOOP;
            extract_label(stmts[i], map[i].label, sizeof(map[i].label));
            if (sp < 32) { stack[sp].type = BLOCK_LOOP; stack[sp].idx = i; sp++; }
            break;

        case -3: /* END LOOP */
            map[i].type = BLOCK_END;
            if (sp > 0 && stack[sp-1].type == BLOCK_LOOP) {
                int top_idx = stack[sp-1].idx;
                map[top_idx].end_idx = i;
                map[i].start_idx = top_idx;
                sp--;
            }
            break;

        case BLOCK_FOR:
            map[i].type = BLOCK_FOR;
            extract_label(stmts[i], map[i].label, sizeof(map[i].label));
            if (sp < 32) { stack[sp].type = BLOCK_FOR; stack[sp].idx = i; sp++; }
            break;

        case -4: /* END FOR */
            map[i].type = BLOCK_END;
            if (sp > 0 && stack[sp-1].type == BLOCK_FOR) {
                int top_idx = stack[sp-1].idx;
                map[top_idx].end_idx = i;
                map[i].start_idx = top_idx;
                sp--;
            }
            break;

        case BLOCK_FOREACH:
            map[i].type = BLOCK_FOREACH;
            extract_label(stmts[i], map[i].label, sizeof(map[i].label));
            if (sp < 32) { stack[sp].type = BLOCK_FOREACH; stack[sp].idx = i; sp++; }
            break;

        case -6: /* END FOREACH */
            map[i].type = BLOCK_END;
            if (sp > 0 && stack[sp-1].type == BLOCK_FOREACH) {
                int top_idx = stack[sp-1].idx;
                map[top_idx].end_idx = i;
                map[i].start_idx = top_idx;
                sp--;
            }
            break;

        case BLOCK_CASE:
            map[i].type = BLOCK_CASE;
            if (sp < 32) { stack[sp].type = BLOCK_CASE; stack[sp].idx = i; sp++; }
            break;

        case BLOCK_WHEN:
            map[i].type = BLOCK_WHEN;
            /* Link to CASE start */
            if (sp > 0) {
                int top_idx = stack[sp-1].idx;
                if (stack[sp-1].type == BLOCK_CASE || stack[sp-1].type == BLOCK_WHEN) {
                    map[top_idx].match_idx = i;
                    if (stack[sp-1].type == BLOCK_WHEN) sp--;
                }
            }
            if (sp < 32) { stack[sp].type = BLOCK_WHEN; stack[sp].idx = i; sp++; }
            break;

        case -5: /* END CASE */
            map[i].type = BLOCK_END;
            /* Pop WHEN or CASE */
            while (sp > 0 && (stack[sp-1].type == BLOCK_WHEN ||
                              stack[sp-1].type == BLOCK_ELSE)) {
                map[stack[sp-1].idx].end_idx = i;
                sp--;
            }
            if (sp > 0 && stack[sp-1].type == BLOCK_CASE) {
                int case_idx = stack[sp-1].idx;
                map[case_idx].end_idx = i;
                map[i].start_idx = case_idx;
                /* Walk the WHEN chain and set end_idx for ALL entries */
                int w = case_idx;
                while (w >= 0 && w < map_size && map[w].match_idx > 0) {
                    w = map[w].match_idx;
                    map[w].end_idx = i;
                }
                sp--;
            }
            break;

        default:
            /* Not a control-flow statement — leave as-is */
            break;
        }
    }

    return (sp == 0) ? 0 : -1; /* -1 = mismatched blocks */
}

/* ----------------------------------------------------------------
 *  CALL — execute a stored procedure
 *  The heavy lifter: looks up procedure, binds args, executes body.
 *  Called from the parser action (stmt: call_stmt).
 *  query_execute() is called from the adaptor layer, so we need
 *  to signal back that this is a CALL and let the adaptor handle it.
 * ---------------------------------------------------------------- */
int CallProcedureProcess(void)
{
    /* CallProcedureProcess is invoked inside yyparse, which runs
     * under the parser mutex. The actual body execution happens in
     * query_executor.c after yyparse returns, to avoid re-entrant
     * mutex issues. We just validate the name here and set state. */
    printf("CALL\n");
    return 0;
}
