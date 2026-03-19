/*
 * GrantMgmt.c — Privilege / GRANT management for EvoSQL
 *
 * Storage: System catalog B+ tree (CAT_SYS_GRANTS) in unified storage file.
 * Key = "username:scope_type:scope_name", Record = grant details.
 *
 * Design decisions:
 *   - admin is superuser: CheckPrivilege() returns 1 without catalog I/O
 *   - PUBLIC grants are additive (PostgreSQL model):
 *       user-specific REVOKE does NOT override PUBLIC grants
 *   - Waterfall: TABLE → SCHEMA → DATABASE (most-specific wins first)
 *   - New databases have NO default PUBLIC grants (MySQL model)
 *
 * SQL commands handled via catalog.c interception:
 *   GRANT priv[,priv] ON DATABASE|SCHEMA|TABLE name TO user [WITH GRANT OPTION]
 *   REVOKE priv[,priv] ON DATABASE|SCHEMA|TABLE name FROM user
 *   SHOW GRANTS [FOR user]
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "database.h"
#include "catalog_internal.h"

/* ----------------------------------------------------------------
 *  Privilege bit flags
 * ---------------------------------------------------------------- */
#define PRIV_SELECT  0x01
#define PRIV_INSERT  0x02
#define PRIV_UPDATE  0x04
#define PRIV_DELETE  0x08
#define PRIV_CREATE  0x10
#define PRIV_DROP    0x20
#define PRIV_ALL     0x3F   /* SELECT|INSERT|UPDATE|DELETE|CREATE|DROP */

/* ----------------------------------------------------------------
 *  Scope type constants (must match adaptor/catalog.c parser)
 * ---------------------------------------------------------------- */
#define SCOPE_DATABASE 1
#define SCOPE_SCHEMA   2
#define SCOPE_TABLE    3

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */

/* Parse a comma-separated privilege string into bitmask.
 * Accepts: SELECT,INSERT,UPDATE,DELETE,CREATE,DROP,ALL
 * Returns bitmask, or 0 on empty/invalid. */
static unsigned parse_privs(const char *str)
{
    unsigned mask = 0;
    char buf[256];
    char *tok;

    if (!str || !*str) return 0;
    strncpy(buf, str, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';

    tok = strtok(buf, ",");
    while (tok) {
        /* Trim whitespace */
        while (*tok && isspace((unsigned char)*tok)) tok++;
        char *end = tok + strlen(tok) - 1;
        while (end > tok && isspace((unsigned char)*end)) *end-- = '\0';

        if      (strcasecmp(tok, "ALL")        == 0 ||
                 strcasecmp(tok, "ALL PRIVILEGES") == 0) mask |= PRIV_ALL;
        else if (strcasecmp(tok, "SELECT") == 0) mask |= PRIV_SELECT;
        else if (strcasecmp(tok, "INSERT") == 0) mask |= PRIV_INSERT;
        else if (strcasecmp(tok, "UPDATE") == 0) mask |= PRIV_UPDATE;
        else if (strcasecmp(tok, "DELETE") == 0) mask |= PRIV_DELETE;
        else if (strcasecmp(tok, "CREATE") == 0) mask |= PRIV_CREATE;
        else if (strcasecmp(tok, "DROP")   == 0) mask |= PRIV_DROP;

        tok = strtok(NULL, ",");
    }
    return mask;
}

/* Convert bitmask back to comma-separated string (into buf). */
static void privs_to_string(unsigned mask, char *buf, size_t size)
{
    buf[0] = '\0';
    if (mask == PRIV_ALL || mask == (PRIV_ALL)) {
        strncpy(buf, "ALL", size - 1);
        buf[size - 1] = '\0';
        return;
    }
    if (mask & PRIV_SELECT) { if (buf[0]) strncat(buf, ",", size - strlen(buf) - 1); strncat(buf, "SELECT", size - strlen(buf) - 1); }
    if (mask & PRIV_INSERT) { if (buf[0]) strncat(buf, ",", size - strlen(buf) - 1); strncat(buf, "INSERT", size - strlen(buf) - 1); }
    if (mask & PRIV_UPDATE) { if (buf[0]) strncat(buf, ",", size - strlen(buf) - 1); strncat(buf, "UPDATE", size - strlen(buf) - 1); }
    if (mask & PRIV_DELETE) { if (buf[0]) strncat(buf, ",", size - strlen(buf) - 1); strncat(buf, "DELETE", size - strlen(buf) - 1); }
    if (mask & PRIV_CREATE) { if (buf[0]) strncat(buf, ",", size - strlen(buf) - 1); strncat(buf, "CREATE", size - strlen(buf) - 1); }
    if (mask & PRIV_DROP)   { if (buf[0]) strncat(buf, ",", size - strlen(buf) - 1); strncat(buf, "DROP",   size - strlen(buf) - 1); }
}

static const char *scope_type_str(int scope)
{
    switch (scope) {
        case SCOPE_DATABASE: return "DATABASE";
        case SCOPE_SCHEMA:   return "SCHEMA";
        case SCOPE_TABLE:    return "TABLE";
        default:             return "?";
    }
}

/* Check privileges for a specific user at a specific scope level.
 * Returns the privilege bitmask found. */
static unsigned check_user_scope(const char *username,
                                 int scope_type,
                                 const char *scope_name)
{
    GrantDesc gd;
    if (cat_find_grant(username, scope_type, scope_name, &gd) == 0) {
        return parse_privs(gd.privileges);
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  db_ensure_grants — Create initial grants if catalog empty
 *
 *  Called from db_ensure_root() after db_ensure_users().
 *  Creates admin:DATABASE:*:ALL:1
 * ---------------------------------------------------------------- */
void db_ensure_grants(void)
{
    /* Check if admin already has a wildcard DATABASE grant */
    GrantDesc gd;
    if (cat_find_grant("admin", SCOPE_DATABASE, "*", &gd) == 0) {
        return; /* Already initialized */
    }

    /* Create initial admin superuser grant */
    cat_create_grant("admin", SCOPE_DATABASE, "*", "ALL", 1);
}

/* ----------------------------------------------------------------
 *  CheckPrivilege — Check if user has a specific privilege
 *
 *  Waterfall: TABLE → SCHEMA → DATABASE
 *  Additive: user-specific grants + PUBLIC grants (PG model)
 *  admin is always superuser (returns 1 immediately).
 *
 *  Returns 1 if allowed, 0 if denied.
 * ---------------------------------------------------------------- */
int CheckPrivilege(const char *username,
                   const char *database,
                   const char *schema,
                   const char *table,
                   const char *privilege)
{
    unsigned priv_bit;
    unsigned found;
    char scope_name[512];

    /* admin is superuser — always allowed */
    if (strcasecmp(username, "admin") == 0) return 1;

    priv_bit = parse_privs(privilege);
    if (priv_bit == 0) return 0;

    /* --- Check user-specific grants (waterfall) --- */

    /* Level 1: TABLE scope (most specific) */
    if (table && table[0] && schema && schema[0] && database && database[0]) {
        snprintf(scope_name, sizeof(scope_name), "%s.%s.%s", database, schema, table);
        found = check_user_scope(username, SCOPE_TABLE, scope_name);
        if (found & priv_bit) return 1;
    }

    /* Level 2: SCHEMA scope */
    if (schema && schema[0] && database && database[0]) {
        snprintf(scope_name, sizeof(scope_name), "%s.%s", database, schema);
        found = check_user_scope(username, SCOPE_SCHEMA, scope_name);
        if (found & priv_bit) return 1;
    }

    /* Level 3: DATABASE scope */
    if (database && database[0]) {
        found = check_user_scope(username, SCOPE_DATABASE, database);
        if (found & priv_bit) return 1;
        /* Also check wildcard '*' */
        found = check_user_scope(username, SCOPE_DATABASE, "*");
        if (found & priv_bit) return 1;
    }

    /* --- Check PUBLIC grants (same waterfall) --- */

    if (table && table[0] && schema && schema[0] && database && database[0]) {
        snprintf(scope_name, sizeof(scope_name), "%s.%s.%s", database, schema, table);
        found = check_user_scope("PUBLIC", SCOPE_TABLE, scope_name);
        if (found & priv_bit) return 1;
    }

    if (schema && schema[0] && database && database[0]) {
        snprintf(scope_name, sizeof(scope_name), "%s.%s", database, schema);
        found = check_user_scope("PUBLIC", SCOPE_SCHEMA, scope_name);
        if (found & priv_bit) return 1;
    }

    if (database && database[0]) {
        found = check_user_scope("PUBLIC", SCOPE_DATABASE, database);
        if (found & priv_bit) return 1;
        found = check_user_scope("PUBLIC", SCOPE_DATABASE, "*");
        if (found & priv_bit) return 1;
    }

    return 0; /* denied */
}

/* ----------------------------------------------------------------
 *  HasGrantOption — Check if user has WITH GRANT OPTION
 *
 *  Returns 1 if yes, 0 if no.
 * ---------------------------------------------------------------- */
int HasGrantOption(const char *username,
                   int scope_type,
                   const char *scope_name,
                   const char *privilege)
{
    unsigned priv_bit;
    GrantDesc gd;

    if (strcasecmp(username, "admin") == 0) return 1;

    priv_bit = parse_privs(privilege);
    if (priv_bit == 0) return 0;

    /* Check exact scope */
    if (cat_find_grant(username, scope_type, scope_name, &gd) == 0) {
        unsigned m = parse_privs(gd.privileges);
        if ((m & priv_bit) && gd.grant_option) return 1;
    }

    /* Also check wildcard '*' for DATABASE scope */
    if (scope_type == SCOPE_DATABASE) {
        if (cat_find_grant(username, scope_type, "*", &gd) == 0) {
            unsigned m = parse_privs(gd.privileges);
            if ((m & priv_bit) && gd.grant_option) return 1;
        }
    }

    return 0;
}

/* ----------------------------------------------------------------
 *  GrantPrivilege — Add a grant entry
 *
 *  If a matching grant exists, merge the new privileges.
 *  Otherwise, create a new grant.
 *
 *  Returns 0 on success, -1 on error (sets g_err.errorMsg).
 * ---------------------------------------------------------------- */
int GrantPrivilege(const char *username, int scope_type,
                   const char *scope_name, const char *privileges,
                   int with_grant_option)
{
    unsigned new_mask = parse_privs(privileges);

    if (new_mask == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "Invalid privilege specification");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INSUFFICIENT_PRIVILEGE);
        return -1;
    }

    pthread_mutex_lock(&g_metadata_lock);

    GrantDesc existing;
    if (cat_find_grant(username, scope_type, scope_name, &existing) == 0) {
        /* Merge: combine existing + new privileges */
        unsigned existing_mask = parse_privs(existing.privileges);
        unsigned merged = existing_mask | new_mask;
        int go = existing.grant_option;
        if (with_grant_option) go = 1;

        char priv_str[128];
        privs_to_string(merged, priv_str, sizeof(priv_str));

        /* Delete old, insert new with merged privileges */
        cat_drop_grant(username, scope_type, scope_name);
        cat_create_grant(username, scope_type, scope_name, priv_str, go);
    } else {
        /* New grant */
        char priv_str[128];
        privs_to_string(new_mask, priv_str, sizeof(priv_str));
        cat_create_grant(username, scope_type, scope_name, priv_str,
                         with_grant_option ? 1 : 0);
    }

    pthread_mutex_unlock(&g_metadata_lock);
    return 0;
}

/* ----------------------------------------------------------------
 *  RevokePrivilege — Remove specific privileges from a grant
 *
 *  If all privileges are removed, the grant entry is deleted.
 *  Returns 0 on success, -1 on error.
 * ---------------------------------------------------------------- */
int RevokePrivilege(const char *username, int scope_type,
                    const char *scope_name, const char *privileges)
{
    unsigned revoke_mask = parse_privs(privileges);
    int result = 0;

    if (revoke_mask == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "Invalid privilege specification");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INSUFFICIENT_PRIVILEGE);
        return -1;
    }

    pthread_mutex_lock(&g_metadata_lock);

    GrantDesc existing;
    if (cat_find_grant(username, scope_type, scope_name, &existing) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "No matching grant found for user '%s'", username);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        result = -1;
    } else {
        unsigned existing_mask = parse_privs(existing.privileges);
        unsigned remaining = existing_mask & ~revoke_mask;

        /* Always delete old grant */
        cat_drop_grant(username, scope_type, scope_name);

        if (remaining != 0) {
            /* Still has some privileges — re-create with remaining */
            int go = existing.grant_option;
            if (revoke_mask == PRIV_ALL) go = 0;
            char priv_str[128];
            privs_to_string(remaining, priv_str, sizeof(priv_str));
            cat_create_grant(username, scope_type, scope_name, priv_str, go);
        }
        /* else: all privileges revoked — entry deleted */
    }

    pthread_mutex_unlock(&g_metadata_lock);
    return result;
}

/* ----------------------------------------------------------------
 *  ListGrantsForUser — List all grants for a user
 *
 *  Fills the output arrays.  Returns count of grants found.
 *  If username is NULL or empty, lists ALL grants (via cursor scan).
 * ---------------------------------------------------------------- */
int ListGrantsForUser(const char *username,
                      char out_users[][256],
                      char out_scopes[][32],
                      char out_names[][256],
                      char out_privs[][128],
                      int  out_grant_option[],
                      int  max_entries)
{
    int count = 0;

    if (username && username[0] != '\0') {
        /* List grants for specific user */
        GrantDesc grants[64];
        int limit = max_entries < 64 ? max_entries : 64;
        int n = cat_list_grants_for_user(username, grants, limit);

        for (int i = 0; i < n && count < max_entries; i++) {
            strncpy(out_users[count], grants[i].username, 255);
            out_users[count][255] = '\0';
            strncpy(out_scopes[count], scope_type_str(grants[i].scope_type), 31);
            out_scopes[count][31] = '\0';
            strncpy(out_names[count], grants[i].scope_name, 255);
            out_names[count][255] = '\0';
            strncpy(out_privs[count], grants[i].privileges, 127);
            out_privs[count][127] = '\0';
            out_grant_option[count] = grants[i].grant_option;
            count++;
        }
    } else {
        /* List ALL grants — scan entire B+ tree */
        /* Use cursor scan from the beginning of the grants tree */
        UserDesc users[64];
        int nusers = cat_list_users(users, 64);

        for (int u = 0; u < nusers && count < max_entries; u++) {
            GrantDesc grants[64];
            int n = cat_list_grants_for_user(users[u].username, grants, 64);
            for (int i = 0; i < n && count < max_entries; i++) {
                strncpy(out_users[count], grants[i].username, 255);
                out_users[count][255] = '\0';
                strncpy(out_scopes[count], scope_type_str(grants[i].scope_type), 31);
                out_scopes[count][31] = '\0';
                strncpy(out_names[count], grants[i].scope_name, 255);
                out_names[count][255] = '\0';
                strncpy(out_privs[count], grants[i].privileges, 127);
                out_privs[count][127] = '\0';
                out_grant_option[count] = grants[i].grant_option;
                count++;
            }
        }

        /* Also list PUBLIC grants */
        GrantDesc pub_grants[64];
        int npub = cat_list_grants_for_user("PUBLIC", pub_grants, 64);
        for (int i = 0; i < npub && count < max_entries; i++) {
            strncpy(out_users[count], pub_grants[i].username, 255);
            out_users[count][255] = '\0';
            strncpy(out_scopes[count], scope_type_str(pub_grants[i].scope_type), 31);
            out_scopes[count][31] = '\0';
            strncpy(out_names[count], pub_grants[i].scope_name, 255);
            out_names[count][255] = '\0';
            strncpy(out_privs[count], pub_grants[i].privileges, 127);
            out_privs[count][127] = '\0';
            out_grant_option[count] = pub_grants[i].grant_option;
            count++;
        }
    }

    return count;
}

/* ----------------------------------------------------------------
 *  DropUserGrants — Remove ALL grants for a user
 *
 *  Called when DROP USER is executed.
 *  Returns number of grants removed (always 0 on success for catalog).
 * ---------------------------------------------------------------- */
int DropUserGrants(const char *username)
{
    pthread_mutex_lock(&g_metadata_lock);
    cat_drop_all_grants_for_user(username);
    pthread_mutex_unlock(&g_metadata_lock);
    return 0;
}
