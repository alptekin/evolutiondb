/*
 * policy.c — Row-Level Security enforcement (Task 93 / Feature #64).
 *
 * Executor-side glue:
 *   - policy_build_overlay: combines permissive / restrictive USING
 *     expressions into an AND-layer added on top of the query WHERE.
 *   - policy_check_write:   evaluates WITH CHECK on post-write rows.
 *
 * The engine-side SQL surface + catalog storage live in
 * evolution/db/Policy.c and catalog_internal.*. This file is the
 * executor-only wrapper that query_executor / Insert / Update / Delete
 * invoke at enforcement time.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "policy.h"
#include "../evolution/db/catalog_internal.h"
#include "../evolution/db/expression.h"
#include "../evolution/db/database.h"

/* v1: a single hardcoded superuser name. The same test lives in the
 * GRANT path and in user management. When a proper BYPASSRLS attribute
 * lands we widen this to a catalog lookup. */
int policy_is_superuser(const char *username)
{
    if (!username || !username[0]) return 0;
    return strcasecmp(username, "admin") == 0 ? 1 : 0;
}

/* Does this policy's TO role_list cover `username`?
 * An empty role_list matches everyone (PostgreSQL semantics). */
static int policy_applies_to_user(const PolicyDesc *pd, const char *username)
{
    if (pd->role_count <= 0) return 1;
    if (!username) return 0;
    for (int i = 0; i < pd->role_count; i++) {
        if (pd->roles[i][0] == '\0') continue;
        if (strcasecmp(pd->roles[i], username) == 0) return 1;
        /* "public" is always a match — kept compatible with PG even
         * though we don't ship a proper role hierarchy yet. */
        if (strcasecmp(pd->roles[i], "public") == 0) return 1;
    }
    return 0;
}

/* Does this policy apply to the current command? '*' (ALL) matches
 * every command; otherwise the letter must match. */
static int policy_matches_cmd(const PolicyDesc *pd, char cmd)
{
    if (pd->command == POLICY_CMD_ALL) return 1;
    return pd->command == cmd ? 1 : 0;
}

struct ExprNode *policy_build_overlay(uint32_t table_id,
                                      const char *username,
                                      char cmd,
                                      struct ExprNode *base_where)
{
    if (policy_is_superuser(username)) return base_where;

    /* Pull all policies for the table in one shot — order doesn't
     * matter for the AND/OR combination. */
    PolicyDesc pols[64];
    int n = cat_list_policies_for_table(table_id, pols, 64);
    if (n <= 0) {
        /* RLS enabled but no policies → deny-by-default. The caller
         * only invokes policy_build_overlay when td.rls_enabled is on,
         * so the "no RLS at all" path never reaches us. */
        return expr_make_bool(0);
    }

    ExprNode *permissive_or = NULL;   /* OR of all permissive USINGs */
    ExprNode *restrictive_and = NULL; /* AND of all restrictive USINGs */
    int had_permissive = 0;

    for (int i = 0; i < n; i++) {
        PolicyDesc *pd = &pols[i];
        if (!policy_matches_cmd(pd, cmd)) continue;
        if (!policy_applies_to_user(pd, username)) continue;
        if (pd->using_expr[0] == '\0') continue;

        ExprNode *u = expr_deserialize(pd->using_expr);
        if (!u) continue;

        if (pd->permissive) {
            had_permissive = 1;
            permissive_or = permissive_or
                ? expr_make_or(permissive_or, u) : u;
        } else {
            restrictive_and = restrictive_and
                ? expr_make_and(restrictive_and, u) : u;
        }
    }

    /* PostgreSQL rule: with RLS on, a row passes iff
     *      (any permissive policy matches)
     *   AND (all restrictive policies match).
     * With zero matching permissive policies the row is filtered out. */
    ExprNode *overlay;
    if (!had_permissive) {
        overlay = expr_make_bool(0);
    } else if (restrictive_and) {
        overlay = expr_make_and(permissive_or, restrictive_and);
    } else {
        overlay = permissive_or;
    }

    if (base_where)
        return expr_make_and(base_where, overlay);
    return overlay;
}

int policy_check_write(uint32_t table_id,
                       const char *username,
                       char cmd,
                       const ColumnDesc *cols, int ncols,
                       const char fields[][256],
                       const int is_null[])
{
    if (policy_is_superuser(username)) return 0;
    (void)is_null;

    PolicyDesc pols[64];
    int n = cat_list_policies_for_table(table_id, pols, 64);
    if (n <= 0) return -1;  /* RLS on, no policies → deny */

    /* Column name array for expr_evaluate. */
    char colNames[CAT_MAX_COLUMNS][128];
    int nnames = ncols < CAT_MAX_COLUMNS ? ncols : CAT_MAX_COLUMNS;
    for (int i = 0; i < nnames; i++) {
        strncpy(colNames[i], cols[i].col_name, 127);
        colNames[i][127] = '\0';
    }

    /* Semantics mirror the SELECT overlay, but evaluated in-line
     * against `fields`. The row must pass at least one permissive
     * CHECK (or USING, if no CHECK is given for that policy) AND every
     * restrictive CHECK. */
    int had_permissive = 0;
    int permissive_pass = 0;
    for (int i = 0; i < n; i++) {
        PolicyDesc *pd = &pols[i];
        if (!policy_matches_cmd(pd, cmd)) continue;
        if (!policy_applies_to_user(pd, username)) continue;

        /* PG semantics: WITH CHECK defaults to USING when absent. */
        const char *serialized = pd->check_expr[0]
                                    ? pd->check_expr
                                    : pd->using_expr;
        if (serialized[0] == '\0') continue;

        ExprNode *e = expr_deserialize(serialized);
        if (!e) continue;

        char result[256];
        int ok = expr_evaluate(e,
                                (const char (*)[128])colNames,
                                fields, nnames,
                                result, sizeof(result));
        int truthy = 0;
        if (ok) {
            if (strcmp(result, "t") == 0 ||
                strcasecmp(result, "true") == 0 ||
                strcmp(result, "1") == 0)
                truthy = 1;
            else {
                double v = strtod(result, NULL);
                if (v != 0.0) truthy = 1;
            }
        }

        if (pd->permissive) {
            had_permissive = 1;
            if (truthy) permissive_pass = 1;
        } else {
            /* Restrictive: row must pass every one. */
            if (!truthy) return -1;
        }
    }

    if (!had_permissive) return -1;          /* no permissive match */
    if (!permissive_pass) return -1;         /* all permissives failed */
    return 0;
}
