/*
 * Policy.c — Task 93 / Feature #64: Row-Level Security SQL surface
 *
 * Parser-side handlers for:
 *   - ALTER TABLE ... ENABLE / DISABLE ROW LEVEL SECURITY
 *   - CREATE POLICY name ON table
 *       [AS PERMISSIVE|RESTRICTIVE]
 *       [FOR ALL|SELECT|INSERT|UPDATE|DELETE]
 *       [TO role_list]
 *       [USING (expr)]
 *       [WITH CHECK (expr)]
 *   - DROP POLICY name ON table
 *
 * Enforcement (SELECT/INSERT/UPDATE/DELETE paths) happens in
 * adaptor/policy.c — this file just validates the SQL and persists
 * the PolicyDesc via cat_create_policy / cat_drop_policy.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "database.h"
#include "catalog_internal.h"
#include "query_context.h"
#include "expression.h"
#include "table_api.h"

/* ----------------------------------------------------------------
 *  Parser action helpers — populate g_policy during grammar reduce
 * ---------------------------------------------------------------- */

void SetPolicyName(const char *name)
{
    if (!g_qctx || !name) return;
    strncpy(g_policy.policy_name, name, sizeof(g_policy.policy_name) - 1);
    g_policy.policy_name[sizeof(g_policy.policy_name) - 1] = '\0';
}

void SetPolicyTable(const char *tableName)
{
    if (!g_qctx || !tableName) return;
    strncpy(g_policy.table_name, tableName, sizeof(g_policy.table_name) - 1);
    g_policy.table_name[sizeof(g_policy.table_name) - 1] = '\0';
}

/* Task 206: route a `... ON MEMORY STORE name` policy onto its backing
 * table by looking the store up in the catalog and storing the
 * mem_<name> table name. Falls back to the literal store name if the
 * store does not exist; CreatePolicyProcess will surface the
 * "relation does not exist" error in that case, matching the
 * behaviour of CREATE POLICY against an unknown table. */
void SetPolicyTableForMemoryStore(const char *store_name)
{
    if (!g_qctx || !store_name) return;
    MemoryStoreDesc desc;
    if (cat_find_memory_store(store_name, &desc) == 0) {
        snprintf(g_policy.table_name, sizeof(g_policy.table_name),
                 "mem_%s", store_name);
    } else {
        snprintf(g_policy.table_name, sizeof(g_policy.table_name),
                 "%s", store_name);
    }
}

void SetPolicyPermissive(int permissive)
{
    if (!g_qctx) return;
    g_policy.permissive = permissive ? 1 : 0;
}

void SetPolicyCommand(char cmd)
{
    if (!g_qctx) return;
    g_policy.command = cmd;
}

void AddPolicyRole(const char *role)
{
    if (!g_qctx || !role) return;
    int slots = (int)(sizeof(g_policy.roles) / sizeof(g_policy.roles[0]));
    if (g_policy.role_count >= slots) return;
    strncpy(g_policy.roles[g_policy.role_count],
            role, sizeof(g_policy.roles[0]) - 1);
    g_policy.roles[g_policy.role_count][sizeof(g_policy.roles[0]) - 1] = '\0';
    g_policy.role_count++;
}

void SetPolicyUsing(struct ExprNode *expr)
{
    if (!g_qctx) return;
    g_policy.using_expr = expr;
}

void SetPolicyCheck(struct ExprNode *expr)
{
    if (!g_qctx) return;
    g_policy.check_expr = expr;
}

/* ----------------------------------------------------------------
 *  ALTER TABLE <name> ENABLE / DISABLE ROW LEVEL SECURITY
 * ---------------------------------------------------------------- */
int AlterTableToggleRLS(const char *tableName, int enable)
{
    if (!tableName || !tableName[0]) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "ALTER TABLE: missing table name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_SYNTAX_ERROR);
        return -1;
    }

    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = 0;
    if (tapi_resolve(tableName, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "relation \"%s\" does not exist", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        return -1;
    }

    if (cat_update_table_rls_flag(td.table_id, (uint8_t)(enable ? 1 : 0)) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "could not update RLS flag for \"%s\"", tableName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INTERNAL_ERROR);
        return -1;
    }
    return 0;
}

/* Task 206: ALTER MEMORY STORE name ENABLE / DISABLE ROW LEVEL SECURITY
 * Resolves the backing table name and reuses the existing toggle path.*/
int AlterMemoryStoreToggleRLS(const char *store_name, int enable)
{
    if (!store_name || !store_name[0]) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "ALTER MEMORY STORE: missing store name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_SYNTAX_ERROR);
        return -1;
    }
    MemoryStoreDesc desc;
    if (cat_find_memory_store(store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store \"%s\" does not exist", store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[300];
    snprintf(tbl, sizeof(tbl), "mem_%s", store_name);
    return AlterTableToggleRLS(tbl, enable);
}

/* ----------------------------------------------------------------
 *  CREATE POLICY — persist staged g_policy into the catalog
 * ---------------------------------------------------------------- */
int CreatePolicyProcess(void)
{
    if (!g_qctx) return -1;
    if (!g_policy.policy_name[0] || !g_policy.table_name[0]) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE POLICY: missing policy name or target table");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_SYNTAX_ERROR);
        return -1;
    }

    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = 0;
    if (tapi_resolve(g_policy.table_name, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "relation \"%s\" does not exist", g_policy.table_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        return -1;
    }

    PolicyDesc pd;
    memset(&pd, 0, sizeof(pd));
    pd.table_id = td.table_id;
    strncpy(pd.policy_name, g_policy.policy_name, sizeof(pd.policy_name) - 1);
    pd.command    = g_policy.command ? g_policy.command : POLICY_CMD_ALL;
    pd.permissive = (uint8_t)(g_policy.permissive ? 1 : 0);

    int copy_roles = g_policy.role_count;
    if (copy_roles > CAT_MAX_POLICY_ROLES) copy_roles = CAT_MAX_POLICY_ROLES;
    pd.role_count = copy_roles;
    for (int i = 0; i < copy_roles; i++) {
        strncpy(pd.roles[i], g_policy.roles[i], sizeof(pd.roles[0]) - 1);
    }

    /* Serialize USING / WITH CHECK expression ASTs — hex-encoded on the
     * record side so ';'/FIELD_SEP bytes inside the blob don't disturb
     * the catalog record splitter. */
    if (g_policy.using_expr) {
        int n = expr_serialize(g_policy.using_expr,
                                pd.using_expr, sizeof(pd.using_expr));
        if (n < 0) pd.using_expr[0] = '\0';
    }
    if (g_policy.check_expr) {
        int n = expr_serialize(g_policy.check_expr,
                                pd.check_expr, sizeof(pd.check_expr));
        if (n < 0) pd.check_expr[0] = '\0';
    }

    if (cat_create_policy(&pd) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "policy \"%s\" for relation \"%s\" already exists",
                 pd.policy_name, g_policy.table_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DUPLICATE_OBJECT);
        return -1;
    }

    /* Reset staged state so a pipelined CREATE POLICY / DROP POLICY in
     * the same session doesn't leak leftover role lists or expressions. */
    memset(&g_qctx->policy, 0, sizeof(g_qctx->policy));
    g_qctx->policy.permissive = 1;
    g_qctx->policy.command = POLICY_CMD_ALL;
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP POLICY — resolve table, delete from catalog
 * ---------------------------------------------------------------- */
int DropPolicyProcess(void)
{
    if (!g_qctx) return -1;
    if (!g_policy.policy_name[0] || !g_policy.table_name[0]) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "DROP POLICY: missing policy name or target table");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_SYNTAX_ERROR);
        return -1;
    }

    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = 0;
    if (tapi_resolve(g_policy.table_name, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "relation \"%s\" does not exist", g_policy.table_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        return -1;
    }

    if (cat_drop_policy(td.table_id, g_policy.policy_name) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "policy \"%s\" for relation \"%s\" does not exist",
                 g_policy.policy_name, g_policy.table_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        return -1;
    }

    memset(&g_qctx->policy, 0, sizeof(g_qctx->policy));
    g_qctx->policy.permissive = 1;
    g_qctx->policy.command = POLICY_CMD_ALL;
    return 0;
}

/* ================================================================
 *  Runtime enforcement helpers — shared by SELECT, INSERT, UPDATE,
 *  and DELETE paths.
 * ================================================================ */

int policy_is_superuser(const char *username)
{
    if (!username || !username[0]) return 0;
    return strcasecmp(username, "admin") == 0 ? 1 : 0;
}

static int policy_applies_to_user(const PolicyDesc *pd, const char *username)
{
    if (pd->role_count <= 0) return 1;
    if (!username) return 0;
    for (int i = 0; i < pd->role_count; i++) {
        if (pd->roles[i][0] == '\0') continue;
        if (strcasecmp(pd->roles[i], username) == 0) return 1;
        if (strcasecmp(pd->roles[i], "public") == 0) return 1;
    }
    return 0;
}

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

    PolicyDesc pols[64];
    int n = cat_list_policies_for_table(table_id, pols, 64);
    if (n <= 0) return expr_make_bool(0);

    ExprNode *permissive_or = NULL;
    ExprNode *restrictive_and = NULL;
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

    ExprNode *overlay;
    if (!had_permissive)      overlay = expr_make_bool(0);
    else if (restrictive_and) overlay = expr_make_and(permissive_or, restrictive_and);
    else                      overlay = permissive_or;

    return base_where ? expr_make_and(base_where, overlay) : overlay;
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
    if (n <= 0) return -1;

    char colNames[CAT_MAX_COLUMNS][128];
    int nnames = ncols < CAT_MAX_COLUMNS ? ncols : CAT_MAX_COLUMNS;
    for (int i = 0; i < nnames; i++) {
        strncpy(colNames[i], cols[i].col_name, 127);
        colNames[i][127] = '\0';
    }

    int had_permissive = 0;
    int permissive_pass = 0;
    for (int i = 0; i < n; i++) {
        PolicyDesc *pd = &pols[i];
        if (!policy_matches_cmd(pd, cmd)) continue;
        if (!policy_applies_to_user(pd, username)) continue;

        /* PG: WITH CHECK defaults to USING when absent. */
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
                strcmp(result, "1") == 0) {
                truthy = 1;
            } else {
                double v = strtod(result, NULL);
                if (v != 0.0) truthy = 1;
            }
        }

        if (pd->permissive) {
            had_permissive = 1;
            if (truthy) permissive_pass = 1;
        } else if (!truthy) {
            return -1;
        }
    }

    if (!had_permissive) return -1;
    if (!permissive_pass) return -1;
    return 0;
}
