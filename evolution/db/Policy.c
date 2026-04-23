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
