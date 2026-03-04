/*
 * GrantMgmt.c — Privilege / GRANT management for EvoSQL
 *
 * Storage layout:
 *   root/grants    (text file, one grant per line)
 *   Format: username:scope_type:scope_name:privileges:grant_option
 *
 *   username     = user name or "PUBLIC" (pseudo-user, affects everyone)
 *   scope_type   = DATABASE | SCHEMA | TABLE
 *   scope_name   = fully-qualified name (e.g. "mydb", "mydb.myschema",
 *                  "mydb.myschema.mytable") or "*" for all
 *   privileges   = comma-separated: SELECT,INSERT,UPDATE,DELETE,CREATE,DROP
 *                  or "ALL"
 *   grant_option = 1 (WITH GRANT OPTION) or 0
 *
 * Design decisions:
 *   - admin is superuser: CheckPrivilege() returns 1 without file I/O
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

#define GRANTS_FILE "grants"
#define MAX_LINE    1024
#define MAX_GRANTS  512

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
 *  Scope type constants
 * ---------------------------------------------------------------- */
#define SCOPE_DATABASE 1
#define SCOPE_SCHEMA   2
#define SCOPE_TABLE    3

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */
static void grants_path(char *out, size_t size)
{
    snprintf(out, size, "%s/%s", db_get_root(), GRANTS_FILE);
}

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

/* Parse scope type string to constant. Returns 0 on invalid. */
static int parse_scope_type(const char *str)
{
    if (strcasecmp(str, "DATABASE") == 0) return SCOPE_DATABASE;
    if (strcasecmp(str, "SCHEMA")   == 0) return SCOPE_SCHEMA;
    if (strcasecmp(str, "TABLE")    == 0) return SCOPE_TABLE;
    return 0;
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

/* Match a grant line against user+scope_type+scope_name.
 * Returns the privilege bitmask if matched, 0 otherwise.
 * If grant_option_out is not NULL, sets it to the grant_option value. */
static unsigned match_grant_line(const char *line,
                                 const char *username,
                                 int scope_type,
                                 const char *scope_name,
                                 int *grant_option_out)
{
    /* Format: username:scope_type:scope_name:privileges:grant_option */
    char buf[MAX_LINE];
    char *parts[5];
    int i = 0;

    strncpy(buf, line, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';
    buf[strcspn(buf, "\n\r")] = '\0';
    if (buf[0] == '\0') return 0;

    /* Split into parts */
    parts[0] = buf;
    for (i = 0; i < 4; i++) {
        char *colon = strchr(parts[i], ':');
        if (!colon) return 0; /* malformed line */
        *colon = '\0';
        parts[i + 1] = colon + 1;
    }

    /* parts[0]=username, parts[1]=scope_type, parts[2]=scope_name,
     * parts[3]=privileges, parts[4]=grant_option */

    /* Match username (case-insensitive) */
    if (strcasecmp(parts[0], username) != 0) return 0;

    /* Match scope type */
    int line_scope = parse_scope_type(parts[1]);
    if (line_scope != scope_type) return 0;

    /* Match scope name: either exact match or wildcard '*' */
    if (strcmp(parts[2], "*") != 0 &&
        strcasecmp(parts[2], scope_name) != 0) return 0;

    /* Parse privileges */
    unsigned mask = parse_privs(parts[3]);

    if (grant_option_out) {
        *grant_option_out = atoi(parts[4]);
    }

    return mask;
}

/* ----------------------------------------------------------------
 *  Check privileges for a specific user (not PUBLIC) at a specific
 *  scope level. Returns the privilege bitmask found.
 * ---------------------------------------------------------------- */
static unsigned check_user_scope(const char *username,
                                 int scope_type,
                                 const char *scope_name)
{
    char path[1024], line[MAX_LINE];
    FILE *fp;
    unsigned result = 0;

    grants_path(path, sizeof(path));
    fp = fopen(path, "r");
    if (!fp) return 0;

    while (fgets(line, sizeof(line), fp)) {
        result |= match_grant_line(line, username, scope_type, scope_name, NULL);
    }
    fclose(fp);
    return result;
}

/* ----------------------------------------------------------------
 *  db_ensure_grants — Create initial grants file if missing
 *
 *  Called from db_ensure_root() after db_ensure_users().
 *  Creates root/grants with admin:DATABASE:*:ALL:1
 * ---------------------------------------------------------------- */
void db_ensure_grants(void)
{
    char path[1024];
    FILE *fp;

    grants_path(path, sizeof(path));

    /* If file already exists and has content, skip */
    fp = fopen(path, "r");
    if (fp) {
        char line[MAX_LINE];
        if (fgets(line, sizeof(line), fp) && line[0] != '\0' && line[0] != '\n') {
            fclose(fp);
            return; /* Grants file already populated */
        }
        fclose(fp);
    }

    /* Write initial admin grant */
    fp = fopen(path, "w");
    if (fp) {
        fprintf(fp, "admin:DATABASE:*:ALL:1\n");
        fclose(fp);
    } else {
        fprintf(stderr, "[GrantMgmt] ERROR: Cannot create grants file: %s\n", path);
    }
}

/* ----------------------------------------------------------------
 *  CheckPrivilege — Check if user has a specific privilege
 *
 *  Waterfall: TABLE → SCHEMA → DATABASE
 *  Additive: user-specific grants + PUBLIC grants (PG model)
 *  admin is always superuser (returns 1 immediately).
 *
 *  Parameters:
 *    username  - the authenticated user
 *    database  - current database name
 *    schema    - current schema name (can be NULL for DB-level ops)
 *    table     - table name (can be NULL for schema/DB-level ops)
 *    privilege - single privilege string: "SELECT", "INSERT", etc.
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
 *  Checks if the user holds the privilege with grant_option=1
 *  at the given scope level.  admin always returns 1.
 *
 *  Returns 1 if yes, 0 if no.
 * ---------------------------------------------------------------- */
int HasGrantOption(const char *username,
                   int scope_type,
                   const char *scope_name,
                   const char *privilege)
{
    char path[1024], line[MAX_LINE];
    FILE *fp;
    unsigned priv_bit;
    int grant_opt = 0;

    if (strcasecmp(username, "admin") == 0) return 1;

    priv_bit = parse_privs(privilege);
    if (priv_bit == 0) return 0;

    grants_path(path, sizeof(path));
    fp = fopen(path, "r");
    if (!fp) return 0;

    while (fgets(line, sizeof(line), fp)) {
        int go = 0;
        unsigned m = match_grant_line(line, username, scope_type, scope_name, &go);
        if ((m & priv_bit) && go) {
            grant_opt = 1;
            break;
        }
        /* Also check wildcard scope */
        if (scope_type == SCOPE_DATABASE) {
            m = match_grant_line(line, username, scope_type, "*", &go);
            if ((m & priv_bit) && go) {
                grant_opt = 1;
                break;
            }
        }
    }
    fclose(fp);
    return grant_opt;
}

/* ----------------------------------------------------------------
 *  GrantPrivilege — Add a grant entry
 *
 *  If a matching line exists (same user + scope_type + scope_name),
 *  merge the new privileges with existing ones.
 *  Otherwise, append a new line.
 *
 *  Returns 0 on success, -1 on error (sets g_gui_error_msg).
 * ---------------------------------------------------------------- */
int GrantPrivilege(const char *username, int scope_type,
                   const char *scope_name, const char *privileges,
                   int with_grant_option)
{
    char path[1024], tmp_path[1024], line[MAX_LINE];
    FILE *fp, *tmp;
    int found = 0;
    unsigned new_mask = parse_privs(privileges);

    if (new_mask == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Invalid privilege specification");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INSUFFICIENT_PRIVILEGE);
        return -1;
    }

    grants_path(path, sizeof(path));
    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", path);

    fp = fopen(path, "r");
    tmp = fopen(tmp_path, "w");
    if (!tmp) {
        if (fp) fclose(fp);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Cannot create temp file for grants");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
        return -1;
    }

    if (fp) {
        while (fgets(line, sizeof(line), fp)) {
            char buf[MAX_LINE];
            char *parts[5];
            int i;

            strncpy(buf, line, sizeof(buf) - 1);
            buf[sizeof(buf) - 1] = '\0';
            buf[strcspn(buf, "\n\r")] = '\0';
            if (buf[0] == '\0') { fputs(line, tmp); continue; }

            /* Parse parts */
            parts[0] = buf;
            int valid = 1;
            for (i = 0; i < 4; i++) {
                char *colon = strchr(parts[i], ':');
                if (!colon) { valid = 0; break; }
                *colon = '\0';
                parts[i + 1] = colon + 1;
            }

            if (!valid) { fputs(line, tmp); continue; }

            /* Check if same user + scope_type + scope_name */
            int line_scope = parse_scope_type(parts[1]);
            if (strcasecmp(parts[0], username) == 0 &&
                line_scope == scope_type &&
                strcasecmp(parts[2], scope_name) == 0) {
                /* Merge privileges */
                unsigned existing = parse_privs(parts[3]);
                unsigned merged = existing | new_mask;
                int go = atoi(parts[4]);
                if (with_grant_option) go = 1;

                char priv_str[128];
                privs_to_string(merged, priv_str, sizeof(priv_str));
                fprintf(tmp, "%s:%s:%s:%s:%d\n",
                        username, scope_type_str(scope_type),
                        scope_name, priv_str, go);
                found = 1;
            } else {
                fputs(line, tmp);
            }
        }
        fclose(fp);
    }

    if (!found) {
        /* Append new grant */
        char priv_str[128];
        privs_to_string(new_mask, priv_str, sizeof(priv_str));
        fprintf(tmp, "%s:%s:%s:%s:%d\n",
                username, scope_type_str(scope_type),
                scope_name, priv_str, with_grant_option ? 1 : 0);
    }

    fclose(tmp);
    remove(path);
    rename(tmp_path, path);
    return 0;
}

/* ----------------------------------------------------------------
 *  RevokePrivilege — Remove specific privileges from a grant
 *
 *  If all privileges are removed, the line is deleted.
 *  Returns 0 on success, -1 on error.
 * ---------------------------------------------------------------- */
int RevokePrivilege(const char *username, int scope_type,
                    const char *scope_name, const char *privileges)
{
    char path[1024], tmp_path[1024], line[MAX_LINE];
    FILE *fp, *tmp;
    int found = 0;
    unsigned revoke_mask = parse_privs(privileges);

    if (revoke_mask == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Invalid privilege specification");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INSUFFICIENT_PRIVILEGE);
        return -1;
    }

    grants_path(path, sizeof(path));
    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", path);

    fp = fopen(path, "r");
    if (!fp) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Cannot open grants file");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
        return -1;
    }

    tmp = fopen(tmp_path, "w");
    if (!tmp) {
        fclose(fp);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Cannot create temp file for grants");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
        return -1;
    }

    while (fgets(line, sizeof(line), fp)) {
        char buf[MAX_LINE];
        char *parts[5];
        int i;

        strncpy(buf, line, sizeof(buf) - 1);
        buf[sizeof(buf) - 1] = '\0';
        buf[strcspn(buf, "\n\r")] = '\0';
        if (buf[0] == '\0') { fputs(line, tmp); continue; }

        /* Parse parts */
        parts[0] = buf;
        int valid = 1;
        for (i = 0; i < 4; i++) {
            char *colon = strchr(parts[i], ':');
            if (!colon) { valid = 0; break; }
            *colon = '\0';
            parts[i + 1] = colon + 1;
        }

        if (!valid) { fputs(line, tmp); continue; }

        int line_scope = parse_scope_type(parts[1]);
        if (strcasecmp(parts[0], username) == 0 &&
            line_scope == scope_type &&
            strcasecmp(parts[2], scope_name) == 0) {
            /* Remove revoked privileges */
            unsigned existing = parse_privs(parts[3]);
            unsigned remaining = existing & ~revoke_mask;
            found = 1;

            if (remaining != 0) {
                /* Still has some privileges — write back */
                int go = atoi(parts[4]);
                /* If revoking ALL, also revoke grant option */
                if (revoke_mask == PRIV_ALL) go = 0;
                char priv_str[128];
                privs_to_string(remaining, priv_str, sizeof(priv_str));
                fprintf(tmp, "%s:%s:%s:%s:%d\n",
                        username, scope_type_str(scope_type),
                        scope_name, priv_str, go);
            }
            /* else: all privileges revoked — line is deleted */
        } else {
            fputs(line, tmp);
        }
    }

    fclose(fp);
    fclose(tmp);

    if (!found) {
        remove(tmp_path);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "No matching grant found for user '%s'", username);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        return -1;
    }

    remove(path);
    rename(tmp_path, path);
    return 0;
}

/* ----------------------------------------------------------------
 *  ListGrantsForUser — List all grants for a user
 *
 *  Fills the output arrays.  Returns count of grants found.
 *  If username is NULL or empty, lists ALL grants.
 * ---------------------------------------------------------------- */
int ListGrantsForUser(const char *username,
                      char out_users[][256],
                      char out_scopes[][32],
                      char out_names[][256],
                      char out_privs[][128],
                      int  out_grant_option[],
                      int  max_entries)
{
    char path[1024], line[MAX_LINE];
    FILE *fp;
    int count = 0;

    grants_path(path, sizeof(path));
    fp = fopen(path, "r");
    if (!fp) return 0;

    while (fgets(line, sizeof(line), fp) && count < max_entries) {
        char buf[MAX_LINE];
        char *parts[5];
        int i;

        strncpy(buf, line, sizeof(buf) - 1);
        buf[sizeof(buf) - 1] = '\0';
        buf[strcspn(buf, "\n\r")] = '\0';
        if (buf[0] == '\0') continue;

        parts[0] = buf;
        int valid = 1;
        for (i = 0; i < 4; i++) {
            char *colon = strchr(parts[i], ':');
            if (!colon) { valid = 0; break; }
            *colon = '\0';
            parts[i + 1] = colon + 1;
        }
        if (!valid) continue;

        /* Filter by username if provided */
        if (username && username[0] != '\0' &&
            strcasecmp(parts[0], username) != 0)
            continue;

        strncpy(out_users[count], parts[0], 255);
        out_users[count][255] = '\0';
        strncpy(out_scopes[count], parts[1], 31);
        out_scopes[count][31] = '\0';
        strncpy(out_names[count], parts[2], 255);
        out_names[count][255] = '\0';
        strncpy(out_privs[count], parts[3], 127);
        out_privs[count][127] = '\0';
        out_grant_option[count] = atoi(parts[4]);
        count++;
    }

    fclose(fp);
    return count;
}

/* ----------------------------------------------------------------
 *  DropUserGrants — Remove ALL grants for a user
 *
 *  Called when DROP USER is executed.
 *  Returns number of grants removed.
 * ---------------------------------------------------------------- */
int DropUserGrants(const char *username)
{
    char path[1024], tmp_path[1024], line[MAX_LINE];
    FILE *fp, *tmp;
    int removed = 0;

    grants_path(path, sizeof(path));
    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", path);

    fp = fopen(path, "r");
    if (!fp) return 0;

    tmp = fopen(tmp_path, "w");
    if (!tmp) { fclose(fp); return 0; }

    while (fgets(line, sizeof(line), fp)) {
        char buf[MAX_LINE];
        strncpy(buf, line, sizeof(buf) - 1);
        buf[sizeof(buf) - 1] = '\0';
        buf[strcspn(buf, "\n\r")] = '\0';

        /* Extract username from line (before first ':') */
        char *colon = strchr(buf, ':');
        if (colon) {
            *colon = '\0';
            if (strcasecmp(buf, username) == 0) {
                removed++;
                continue; /* Skip — drop this grant */
            }
            *colon = ':';
        }
        fputs(line, tmp);
    }

    fclose(fp);
    fclose(tmp);
    remove(path);
    rename(tmp_path, path);
    return removed;
}
