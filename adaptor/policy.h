/*
 * policy.h — Row-Level Security enforcement helpers
 *
 * Task 93 / Feature #64. The on-disk policy store (CAT_SYS_POLICIES) is
 * managed by the engine via evolution/db/catalog_internal.*. This file
 * provides the executor-side glue that combines a table's policies
 * with a running query's WHERE / fields context.
 *
 * Superuser bypass: `admin` is always allowed through, matching the
 * GRANT code path's convention. Other users see the policy overlay.
 */
#ifndef POLICY_H
#define POLICY_H

#include <stdint.h>
#include "../evolution/db/catalog_internal.h"  /* ColumnDesc, PolicyDesc */

struct ExprNode;

/* Returns 1 if the user is a superuser that bypasses RLS entirely. */
int policy_is_superuser(const char *username);

/* Build an AND-ed WHERE overlay for the given (table, user, command)
 * triple. The caller passes an already-parsed `base_where` (may be
 * NULL). Return value is a freshly-constructed ExprNode in the current
 * expression pool; caller does NOT free it. Returns `base_where` as-is
 * when the user is a superuser, or when RLS is disabled on the table,
 * or when no matching policies exist.
 *
 * Semantics:
 *  - All PERMISSIVE policies whose command matches `cmd` are OR'd together.
 *  - The OR of permissives is AND'd with the base_where.
 *  - Each RESTRICTIVE policy is then AND'd on top.
 *  - With RLS on but no matching policies, the overlay is EXPR_BOOL(0)
 *    → deny-by-default, matching PostgreSQL.
 *
 * cmd uses POLICY_CMD_* constants from catalog_internal.h.
 */
struct ExprNode *policy_build_overlay(uint32_t table_id,
                                      const char *username,
                                      char cmd,
                                      struct ExprNode *base_where);

/* Evaluate WITH CHECK for a post-write row (INSERT / UPDATE).
 * Returns 0 if the row passes all applicable policies' WITH CHECK
 * expressions; returns -1 on violation (caller sets sqlstate 42501).
 * Superusers always pass. */
int policy_check_write(uint32_t table_id,
                       const char *username,
                       char cmd,  /* 'I' or 'U' */
                       const ColumnDesc *cols, int ncols,
                       const char fields[][256],
                       const int is_null[]);

#endif /* POLICY_H */
