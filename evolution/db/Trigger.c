/*
 * Trigger.c — CREATE/DROP TRIGGER + Trigger Execution Engine
 *
 * Triggers fire before/after INSERT/UPDATE/DELETE operations.
 * Trigger body reuses the stored procedure execution engine.
 * OLD.col and NEW.col references are substituted before execution.
 */
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h> /* dup, dup2, close — for CreateTriggerProcess */
#include "database.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "evosql_errcodes.h"

/* Max trigger recursion depth */
static __thread int g_trigger_depth = 0;
#define MAX_TRIGGER_DEPTH 16

/* Thread-local flag: when set, execute_via_parser skips mutex acquisition */
__thread int g_trigger_exec_active = 0;

/* ----------------------------------------------------------------
 *  Parser helpers — called from evoparser.y actions
 * ---------------------------------------------------------------- */

void evo_set_trigger_info(const char *name, const char *table)
{
    strncpy(g_trig.triggerName, name, sizeof(g_trig.triggerName) - 1);
    strncpy(g_trig.tableName, table, sizeof(g_trig.tableName) - 1);
}

void evo_set_trigger_timing(char timing)
{
    g_trig.timing = timing;
}

void evo_set_trigger_event(char event)
{
    g_trig.event = event;
}

void evo_set_trigger_drop(const char *name, int ifExists)
{
    strncpy(g_trig.dropName, name, sizeof(g_trig.dropName) - 1);
    g_trig.dropIfExists = ifExists;
}

/* ----------------------------------------------------------------
 *  Extract trigger body from g_lex_input (same pattern as procedures)
 * ---------------------------------------------------------------- */
static int extract_trigger_body(char *body, int body_size)
{
    extern __thread const char *g_lex_input;
    if (!g_lex_input) return -1;

    /* Find BEGIN keyword */
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

    /* Find matching standalone END */
    const char *end_pos = NULL;
    p = begin_pos;
    while (*p) {
        if (*p == '\'') {
            p++;
            while (*p && *p != '\'') { if (*p == '\\') p++; if (*p) p++; }
            if (*p) p++;
            continue;
        }
        if (strncasecmp(p, "END", 3) == 0 &&
            !isalnum((unsigned char)p[-1]) &&
            !isalnum((unsigned char)p[3])) {
            /* Only standalone END (not END IF, END WHILE, etc.) */
            const char *ep = p + 3;
            while (*ep && isspace((unsigned char)*ep)) ep++;
            if (!*ep || *ep == ';' || *ep == '\n' || *ep == '\r') {
                end_pos = p;
                break;
            }
        }
        p++;
    }
    if (!end_pos) return -1;

    const char *src = begin_pos;
    while (src < end_pos && isspace((unsigned char)*src)) src++;
    int len = (int)(end_pos - src);
    while (len > 0 && isspace((unsigned char)src[len-1])) len--;
    if (len <= 0) { body[0] = '\0'; return 0; }
    if (len >= body_size) len = body_size - 1;
    memcpy(body, src, len);
    body[len] = '\0';
    return 0;
}

/* ----------------------------------------------------------------
 *  CREATE TRIGGER
 * ---------------------------------------------------------------- */
int CreateTriggerProcess(void)
{
    char body[8192] = "";
    if (extract_trigger_body(body, sizeof(body)) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not extract trigger body for \"%s\"", g_trig.triggerName);
        g_err.error = 1;
        return -1;
    }

    /* Resolve table */
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg), "current database not found");
        g_err.error = 1;
        return -1;
    }
    SchemaDesc schDesc;
    const char *schema = db_get_current_schema();
    if (cat_find_schema(dbDesc.db_id, schema, &schDesc) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg), "current schema not found");
        g_err.error = 1;
        return -1;
    }

    /* Verify target table exists */
    TableDesc td;
    if (cat_resolve_table(g_currentDatabase, schema, g_trig.tableName, &td) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", g_trig.tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    if (cat_create_trigger(dbDesc.db_id, schDesc.schema_id, td.table_id,
                           g_trig.tableName, g_trig.triggerName,
                           g_trig.event, g_trig.timing, body) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "trigger \"%s\" already exists", g_trig.triggerName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P07");
        return -1;
    }

    printf("CREATE TRIGGER\n");
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP TRIGGER
 * ---------------------------------------------------------------- */
int DropTriggerProcess(void)
{
    DatabaseDesc dbDesc;
    if (cat_find_database(g_currentDatabase, &dbDesc) < 0) {
        if (g_trig.dropIfExists) { printf("DROP TRIGGER\n"); return 0; }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg), "current database not found");
        g_err.error = 1;
        return -1;
    }
    SchemaDesc schDesc;
    const char *schema = db_get_current_schema();
    if (cat_find_schema(dbDesc.db_id, schema, &schDesc) < 0) {
        if (g_trig.dropIfExists) { printf("DROP TRIGGER\n"); return 0; }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg), "current schema not found");
        g_err.error = 1;
        return -1;
    }

    /* Find trigger across all tables — scan by name suffix */
    /* For simplicity, iterate all tables' triggers to find by name */
    TableDesc tables[256];
    int ntables = cat_list_tables(schDesc.schema_id, tables, 256);
    for (int t = 0; t < ntables; t++) {
        TriggerDesc td;
        if (cat_find_trigger(tables[t].table_id, g_trig.dropName, &td) == 0) {
            cat_drop_trigger(tables[t].table_id, g_trig.dropName);
            printf("DROP TRIGGER\n");
            return 0;
        }
    }

    if (g_trig.dropIfExists) {
        printf("DROP TRIGGER\n");
        return 0;
    }
    snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
             "trigger \"%s\" does not exist", g_trig.dropName);
    g_err.error = 1;
    EVOSQL_SET_SQLSTATE("42883");
    return -1;
}

/* ----------------------------------------------------------------
 *  Trigger Execution Engine
 *
 *  Called from Insert.c, Update.c, Delete.c at hook points.
 *  Substitutes OLD.col and NEW.col references in trigger body,
 *  then executes via query_execute (reusing procedure engine).
 * ---------------------------------------------------------------- */

/* Replace OLD.col and NEW.col with literal values in SQL text */
static void substitute_old_new(const char *sql, char *out, int out_size,
                               const char *col_names[],
                               const char *old_vals[], const char *new_vals[],
                               int ncols)
{
    const char *p = sql;
    char *dst = out;
    char *end = out + out_size - 1;

    while (*p && dst < end) {
        /* Check for OLD.colname or NEW.colname */
        if ((strncasecmp(p, "OLD.", 4) == 0 || strncasecmp(p, "NEW.", 4) == 0)) {
            int is_old = (p[0] == 'O' || p[0] == 'o');
            /* Check word boundary before */
            if (p > sql && (isalnum((unsigned char)p[-1]) || p[-1] == '_')) {
                *dst++ = *p++;
                continue;
            }
            p += 4; /* skip OLD. or NEW. */
            /* Read column name */
            const char *col_start = p;
            while (*p && (isalnum((unsigned char)*p) || *p == '_')) p++;
            int col_len = (int)(p - col_start);

            /* Find matching column */
            int found = 0;
            for (int c = 0; c < ncols; c++) {
                if (col_names[c] && (int)strlen(col_names[c]) == col_len &&
                    strncasecmp(col_start, col_names[c], col_len) == 0) {
                    const char *val = is_old ?
                        (old_vals ? old_vals[c] : NULL) :
                        (new_vals ? new_vals[c] : NULL);
                    if (val) {
                        /* Check if value needs quoting (non-numeric) */
                        int needs_quote = 0;
                        if (val[0] == '\0') needs_quote = 1;
                        else {
                            const char *vp = val;
                            if (*vp == '-') vp++;
                            while (*vp && (isdigit((unsigned char)*vp) || *vp == '.')) vp++;
                            if (*vp) needs_quote = 1; /* has non-numeric chars */
                        }
                        int vlen = (int)strlen(val);
                        if (needs_quote) {
                            if (dst + vlen + 2 < end) {
                                *dst++ = '\'';
                                /* Escape internal quotes */
                                for (int vi = 0; vi < vlen && dst < end - 1; vi++) {
                                    if (val[vi] == '\'') { *dst++ = '\''; }
                                    *dst++ = val[vi];
                                }
                                *dst++ = '\'';
                            }
                        } else {
                            if (dst + vlen < end) {
                                memcpy(dst, val, vlen);
                                dst += vlen;
                            }
                        }
                    } else {
                        /* NULL reference */
                        if (dst + 4 < end) {
                            memcpy(dst, "NULL", 4);
                            dst += 4;
                        }
                    }
                    found = 1;
                    break;
                }
            }
            if (!found) {
                /* Unknown column — keep original text */
                const char *prefix = is_old ? "OLD." : "NEW.";
                int plen = 4;
                if (dst + plen + col_len < end) {
                    memcpy(dst, prefix, plen); dst += plen;
                    memcpy(dst, col_start, col_len); dst += col_len;
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

int evo_fire_triggers(const char *table_name, char timing, char event,
                      const char *col_names[], const char *old_vals[],
                      const char *new_vals[], int ncols)
{
    /* Recursion guard */
    if (g_trigger_depth >= MAX_TRIGGER_DEPTH) return 0;

    /* Resolve table to get table_id */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int nc;
    if (tapi_resolve(table_name, &td, cols, &nc) < 0)
        return 0; /* Table not found — skip silently */

    /* List triggers for this table */
    TriggerDesc triggers[16];
    int ntrig = cat_list_triggers_for_table(td.table_id, triggers, 16);
    if (ntrig <= 0) return 0;

    /* Filter by timing and event */
    for (int t = 0; t < ntrig; t++) {
        if (triggers[t].timing != timing || triggers[t].event != event)
            continue;

        /* Substitute OLD.col / NEW.col in body */
        char substituted_body[8192];
        substitute_old_new(triggers[t].body, substituted_body, sizeof(substituted_body),
                           col_names, old_vals, new_vals, ncols);

        /* Split into statements */
        extern int split_proc_statements(const char *body, char stmts[][4096], int max);
        char (*stmts)[4096] = malloc(64 * 4096);
        if (!stmts) continue;
        int stmt_count = split_proc_statements(substituted_body, stmts, 64);

        g_trigger_depth++;

        /* Execute body via adaptor callback (query_execute with mutex skip).
         * Wrap body as: CREATE OR REPLACE PROCEDURE → CALL → DROP.
         * This reuses the full procedure engine (IF/WHILE/SIGNAL). */
        if (g_qctx && g_qctx->trigger_exec_fn) {
            char err_msg[512] = "";
            char err_state[6] = "";
            int had_error = 0;

            /* Step 1: Create temp procedure with substituted body */
            char proc_sql[16384];
            snprintf(proc_sql, sizeof(proc_sql),
                     "CREATE OR REPLACE PROCEDURE __trig_%u__() AS BEGIN %s END",
                     triggers[t].trigger_id, substituted_body);
            had_error = g_qctx->trigger_exec_fn(proc_sql, err_msg, sizeof(err_msg),
                                                  err_state, g_qctx->trigger_exec_ctx);

            /* Step 2: CALL the temp procedure */
            if (!had_error) {
                char call_sql[256];
                snprintf(call_sql, sizeof(call_sql),
                         "CALL __trig_%u__()", triggers[t].trigger_id);
                had_error = g_qctx->trigger_exec_fn(call_sql, err_msg, sizeof(err_msg),
                                                      err_state, g_qctx->trigger_exec_ctx);
            }

            /* Step 3: Drop temp procedure */
            {
                char drop_sql[256];
                snprintf(drop_sql, sizeof(drop_sql),
                         "DROP PROCEDURE IF EXISTS __trig_%u__", triggers[t].trigger_id);
                g_qctx->trigger_exec_fn(drop_sql, NULL, 0, NULL, g_qctx->trigger_exec_ctx);
            }

            if (had_error) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg), "%s", err_msg);
                if (err_state[0]) EVOSQL_SET_SQLSTATE(err_state);
                g_err.error = 1;
                g_trigger_depth--;
                free(stmts);
                return -1;
            }
        }

        g_trigger_depth--;
        free(stmts);
    }
    return 0;
}


