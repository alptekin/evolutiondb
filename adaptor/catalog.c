#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "platform.h"
#include "catalog.h"
#include "../evolution/db/database.h"
#include "../evolution/db/crypto.h"
#include "../evolution/db/catalog_internal.h"
#include "../evolution/db/table_api.h"

/* From main.c — connection limit accessors */
extern int  get_max_connections(void);
extern void set_max_connections(int n);
extern int  get_active_connections(void);

/* From server.c — parser mutex for SERIALIZABLE isolation */
extern mutex_t g_parse_lock;

/* ----------------------------------------------------------------
 *  Type encoding → PG metadata helpers
 * ---------------------------------------------------------------- */
static int evo_type_to_pg_oid(int typeEncoding)
{
    int family = typeEncoding / 10000;
    switch (family) {
    case 1:  return 23;     /* BIT/TINYINT → int4 */
    case 2:  return 21;     /* SMALLINT → int2 */
    case 3:  return 23;     /* MEDIUMINT → int4 */
    case 4:  return 23;     /* INT → int4 */
    case 5:  return 23;     /* INTEGER → int4 */
    case 6:  return 20;     /* BIGINT → int8 */
    case 7:  return 701;    /* REAL → float8 */
    case 8:  return 701;    /* DOUBLE → float8 */
    case 9:  return 700;    /* FLOAT → float4 */
    case 10: return 1082;   /* DATE/TIME → date */
    case 11: return 1700;   /* DECIMAL → numeric */
    case 12: return 1042;   /* CHAR → bpchar */
    case 13: return 1043;   /* VARCHAR → varchar */
    case 22: return 16;     /* BOOLEAN → bool */
    default: return 25;     /* TEXT, BLOB, etc. */
    }
}

static const char *evo_type_to_name(int typeEncoding)
{
    int family = typeEncoding / 10000;
    switch (family) {
    case 1:  return "integer";
    case 2:  return "smallint";
    case 3:  return "integer";
    case 4:  return "integer";
    case 5:  return "integer";
    case 6:  return "bigint";
    case 7:  return "double precision";
    case 8:  return "double precision";
    case 9:  return "real";
    case 10: return "date";
    case 11: return "numeric";
    case 12: return "character";
    case 13: return "character varying";
    case 22: return "boolean";
    default: return "text";
    }
}

static int evo_type_to_attlen(int typeEncoding)
{
    int family = typeEncoding / 10000;
    switch (family) {
    case 2:  return 2;   /* int2 */
    case 1: case 3: case 4: case 5: return 4; /* int4 */
    case 6:  return 8;   /* int8 */
    case 9:  return 4;   /* float4 */
    case 7: case 8: return 8; /* float8 */
    case 10: return 4;   /* date */
    case 22: return 1;   /* bool */
    default: return -1;  /* varlena (varchar, text, char, numeric) */
    }
}

static int evo_type_to_atttypmod(int typeEncoding)
{
    int family = typeEncoding / 10000;
    int size = typeEncoding % 10000;
    /* PostgreSQL convention: varchar(N)/char(N) → atttypmod = N + 4 */
    if ((family == 12 || family == 13) && size > 0)
        return size + 4;
    return -1;
}

/* ----------------------------------------------------------------
 *  Helper: case-insensitive substring search
 * ---------------------------------------------------------------- */
static int stristr_found(const char *haystack, const char *needle)
{
    const char *h = haystack;
    int nlen = (int)strlen(needle);
    while (*h) {
        if (strncasecmp(h, needle, nlen) == 0)
            return 1;
        h++;
    }
    return 0;
}

/* Case-insensitive substring search — returns pointer (like strstr) */
static const char *strcasestr_local(const char *haystack, const char *needle)
{
    int nlen = (int)strlen(needle);
    while (*haystack) {
        if (strncasecmp(haystack, needle, nlen) == 0)
            return haystack;
        haystack++;
    }
    return NULL;
}

/* Case-insensitive prefix check (skips leading whitespace) */
static int starts_with_i(const char *sql, const char *prefix)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return strncasecmp(sql, prefix, strlen(prefix)) == 0;
}

/* Deterministic OID from table name (djb2 hash) — ensures the same
   table always gets the same OID regardless of file enumeration order */
static unsigned int stable_table_oid(const char *name)
{
    unsigned int h = 5381;
    const char *p = name;
    while (*p) {
        h = ((h << 5) + h) + (unsigned char)*p;
        p++;
    }
    return 16384 + (h % 100000);
}

/* ----------------------------------------------------------------
 *  Map a pg_namespace OID (string) to a schema name.
 *  OID assignment mirrors pg_namespace handler:
 *    11 = pg_catalog, 13060 = information_schema,
 *    2200.. = user schemas (from per-database "schemas" file, in order)
 *  Returns 1 if found and fills schema_out, 0 otherwise.
 * ---------------------------------------------------------------- */
static int schema_name_to_oid(const char *name, char *oid_out, int out_size)
{
    if (!name || !*name) return 0;
    if (strcmp(name, "pg_catalog") == 0) { snprintf(oid_out, out_size, "11"); return 1; }
    if (strcmp(name, "information_schema") == 0) { snprintf(oid_out, out_size, "13060"); return 1; }

    DatabaseDesc dbDesc;
    if (cat_find_database(db_get_current_database(), &dbDesc) != 0) return 0;
    SchemaDesc schemas[32];
    int n = cat_list_schemas(dbDesc.db_id, schemas, 32);
    for (int i = 0; i < n; i++) {
        if (strcasecmp(schemas[i].schema_name, name) == 0) {
            snprintf(oid_out, out_size, "%d", 2200 + i);
            return 1;
        }
    }
    return 0;
}

static int oid_to_schema_name(const char *oid_str, char *schema_out, int out_size)
{
    int oid_val;
    if (!oid_str || !*oid_str) return 0;
    oid_val = atoi(oid_str);
    if (oid_val == 11)    { strncpy(schema_out, "pg_catalog", out_size - 1); schema_out[out_size-1] = '\0'; return 1; }
    if (oid_val == 13060) { strncpy(schema_out, "information_schema", out_size - 1); schema_out[out_size-1] = '\0'; return 1; }
    if (oid_val < 2200)   return 0;

    int idx = oid_val - 2200;  /* 0-based index into schema list */
    DatabaseDesc dbDesc;
    if (cat_find_database(db_get_current_database(), &dbDesc) != 0) return 0;
    SchemaDesc schemas[32];
    int n = cat_list_schemas(dbDesc.db_id, schemas, 32);
    if (idx >= 0 && idx < n) {
        strncpy(schema_out, schemas[idx].schema_name, out_size - 1);
        schema_out[out_size - 1] = '\0';
        return 1;
    }
    return 0;
}

/* Extract the relnamespace OID from a WHERE clause like:
 *   WHERE c.relnamespace='2200' ...   or
 *   WHERE c.relnamespace = '2201' ...
 * Searches from the WHERE keyword to avoid matching SELECT-list columns. */
static int extract_relnamespace(const char *sql, char *oid_out, int out_size)
{
    /* Start searching from WHERE keyword */
    const char *where_pos = strcasestr_local(sql, "WHERE");
    if (!where_pos) return 0;

    const char *p = strcasestr_local(where_pos, "relnamespace");
    if (!p) return 0;
    p += 12; /* skip "relnamespace" */
    while (*p && (isspace((unsigned char)*p) || *p == '=')) p++;
    if (*p == '\'') {
        p++;
        int i = 0;
        while (*p && *p != '\'' && i < out_size - 1)
            oid_out[i++] = *p++;
        oid_out[i] = '\0';
        return 1;
    }
    /* Could also be unquoted number */
    if (isdigit((unsigned char)*p)) {
        int i = 0;
        while (*p && isdigit((unsigned char)*p) && i < out_size - 1)
            oid_out[i++] = *p++;
        oid_out[i] = '\0';
        return 1;
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  SET / SHOW / Transaction stubs
 * ---------------------------------------------------------------- */
static const char *isolation_level_name(int level)
{
    switch (level) {
    case 0:  return "read uncommitted";
    case 1:  return "read committed";
    case 2:  return "repeatable read";
    case 3:  return "serializable";
    default: return "read committed";
    }
}

static int parse_isolation_level(const char *p)
{
    while (*p && isspace((unsigned char)*p)) p++;
    if (strncasecmp(p, "READ", 4) == 0) {
        p += 4;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "UNCOMMITTED", 11) == 0) return 0;
        if (strncasecmp(p, "COMMITTED", 9) == 0)   return 1;
    }
    if (strncasecmp(p, "REPEATABLE", 10) == 0) {
        p += 10;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "READ", 4) == 0) return 2;
    }
    if (strncasecmp(p, "SERIALIZABLE", 12) == 0) return 3;
    return -1;
}

static int handle_set(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    if (!starts_with_i(sql, "SET"))
        return 0;

    /* SET SCHEMA <name> must go to the parser, not be stubbed */
    {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "SCHEMA", 6) == 0 &&
            (isspace((unsigned char)p[6]) || p[6] == '\0'))
            return 0;  /* let parser handle it */
    }

    /* SET [SESSION] TRANSACTION ISOLATION LEVEL <level> */
    if (stristr_found(sql, "TRANSACTION") && stristr_found(sql, "ISOLATION")) {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        /* Skip optional SESSION keyword */
        if (strncasecmp(p, "SESSION", 7) == 0) {
            p += 7;
            while (*p && isspace((unsigned char)*p)) p++;
        }
        if (strncasecmp(p, "TRANSACTION", 11) == 0) {
            p += 11;
            while (*p && isspace((unsigned char)*p)) p++;
            if (strncasecmp(p, "ISOLATION", 9) == 0) {
                p += 9;
                while (*p && isspace((unsigned char)*p)) p++;
                if (strncasecmp(p, "LEVEL", 5) == 0) {
                    p += 5;
                    int level = parse_isolation_level(p);
                    if (level < 0) {
                        result_init(rs);
                        result_set_error(rs, "22023", "invalid isolation level");
                        return 1;
                    }
                    if (ctx) {
                        if (ctx->in_transaction) {
                            result_init(rs);
                            result_set_error(rs, "25001",
                                "SET TRANSACTION ISOLATION LEVEL must be called before any query in transaction");
                            return 1;
                        }
                        ctx->isolation_level = level;
                    }
                    result_init(rs);
                    strcpy(rs->command_tag, "SET");
                    return 1;
                }
            }
        }
    }

    /* SET max_connections = N */
    {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "max_connections", 15) == 0) {
            p += 15;
            while (*p && (isspace((unsigned char)*p) || *p == '=' || *p == '\'')) p++;
            int val = atoi(p);
            if (val > 0) {
                set_max_connections(val);
                result_init(rs);
                snprintf(rs->command_tag, sizeof(rs->command_tag), "SET");
                return 1;
            }
        }
    }

    result_init(rs);
    strcpy(rs->command_tag, "SET");
    return 1;
}

static int handle_show(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    if (!starts_with_i(sql, "SHOW"))
        return 0;

    /* ── SHOW DATABASES ── */
    if (stristr_found(sql, "databases")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "database", PG_OID_TEXT);

        DatabaseDesc dbs[64];
        int ndb = cat_list_databases(dbs, 64);
        for (int i = 0; i < ndb; i++) {
            int row = result_add_row(rs);
            result_set_field(rs, row, 0, dbs[i].db_name);
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── SHOW SCHEMAS ── */
    if (stristr_found(sql, "schemas")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "schema", PG_OID_TEXT);

        DatabaseDesc dbDesc;
        if (cat_find_database(db_get_current_database(), &dbDesc) == 0) {
            SchemaDesc schemas[32];
            int ns = cat_list_schemas(dbDesc.db_id, schemas, 32);
            for (int i = 0; i < ns; i++) {
                int row = result_add_row(rs);
                result_set_field(rs, row, 0, schemas[i].schema_name);
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── SHOW TABLES ── */
    if (stristr_found(sql, "tables")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "table", PG_OID_TEXT);

        DatabaseDesc dbDesc;
        SchemaDesc schDesc;
        if (cat_find_database(db_get_current_database(), &dbDesc) == 0 &&
            cat_find_schema(dbDesc.db_id, g_currentSchema, &schDesc) == 0) {
            TableDesc tables[256];
            int nt = cat_list_tables(schDesc.schema_id, tables, 256);
            for (int i = 0; i < nt; i++) {
                /* Skip temp tables not owned by this session */
                if (tables[i].is_temporary) {
                    int owned = 0;
                    if (ctx) {
                        for (int ti = 0; ti < ctx->temp_table_count; ti++) {
                            if (ctx->temp_table_ids[ti] == tables[i].table_id) {
                                owned = 1;
                                break;
                            }
                        }
                    }
                    if (!owned) continue;
                }
                int row = result_add_row(rs);
                result_set_field(rs, row, 0, tables[i].table_name);
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── SHOW USERS ── */
    if (stristr_found(sql, "users")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "username", PG_OID_TEXT);

        char usernames[64][256];
        int count = ListUsers(usernames, 64);
        for (int i = 0; i < count; i++) {
            int row = result_add_row(rs);
            result_set_field(rs, row, 0, usernames[i]);
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── SHOW GRANTS [FOR <user>] ── */
    if (stristr_found(sql, "grants")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "user",         PG_OID_TEXT);
        result_add_column(rs, "scope",        PG_OID_TEXT);
        result_add_column(rs, "object",       PG_OID_TEXT);
        result_add_column(rs, "privileges",   PG_OID_TEXT);
        result_add_column(rs, "grant_option", PG_OID_TEXT);

        /* Parse optional FOR <username> */
        char filter_user[256] = "";
        {
            /* Find "FOR" keyword (case-insensitive) in the SQL */
            const char *scan = sql;
            const char *forpos = NULL;
            while (*scan) {
                if (strncasecmp(scan, "FOR", 3) == 0 &&
                    (scan == sql || isspace((unsigned char)scan[-1])) &&
                    isspace((unsigned char)scan[3])) {
                    forpos = scan;
                    break;
                }
                scan++;
            }
            if (forpos) {
                const char *u = forpos + 3;
                while (*u && isspace((unsigned char)*u)) u++;
                int ui = 0;
                /* Handle quoted or unquoted username */
                if (*u == '\'') {
                    u++;
                    while (*u && *u != '\'' && ui < 255) filter_user[ui++] = *u++;
                } else {
                    while (*u && !isspace((unsigned char)*u) && *u != ';' && ui < 255)
                        filter_user[ui++] = *u++;
                }
                filter_user[ui] = '\0';
            }
        }

        #define GRANT_LIST_MAX 512
        char users[GRANT_LIST_MAX][256];
        char scopes[GRANT_LIST_MAX][32];
        char names[GRANT_LIST_MAX][256];
        char privs[GRANT_LIST_MAX][128];
        int  gopts[GRANT_LIST_MAX];
        int cnt = ListGrantsForUser(filter_user, users, scopes, names, privs, gopts,
                                    GRANT_LIST_MAX);
        for (int i = 0; i < cnt; i++) {
            int row = result_add_row(rs);
            result_set_field(rs, row, 0, users[i]);
            result_set_field(rs, row, 1, scopes[i]);
            result_set_field(rs, row, 2, names[i]);
            result_set_field(rs, row, 3, privs[i]);
            result_set_field(rs, row, 4, gopts[i] ? "YES" : "NO");
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── Other SHOW variables ── */
    result_init(rs);
    rs->is_select = 1;
    result_add_column(rs, "setting", PG_OID_TEXT);

    int row = result_add_row(rs);
    if (stristr_found(sql, "max_connections")) {
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", get_max_connections());
        result_set_field(rs, row, 0, buf);
    } else if (stristr_found(sql, "active_connections")) {
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", get_active_connections());
        result_set_field(rs, row, 0, buf);
    } else if (stristr_found(sql, "transaction_isolation") || stristr_found(sql, "transaction isolation"))
        result_set_field(rs, row, 0, isolation_level_name(ctx ? ctx->isolation_level : 1));
    else if (stristr_found(sql, "server_version"))
        result_set_field(rs, row, 0, "15.0 (EvoSQL)");
    else if (stristr_found(sql, "max_identifier_length"))
        result_set_field(rs, row, 0, "63");
    else if (stristr_found(sql, "standard_conforming_strings"))
        result_set_field(rs, row, 0, "on");
    else if (stristr_found(sql, "search_path"))
        result_set_field(rs, row, 0, "\"$user\", default");
    else
        result_set_field(rs, row, 0, "");

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
    return 1;
}

static int handle_transaction(const char *sql, ResultSet *rs,
                              SessionCtx *ctx)
{
    result_init(rs);

    if (starts_with_i(sql, "BEGIN") ||
        starts_with_i(sql, "START TRANSACTION")) {
        if (ctx) {
            if (ctx->in_transaction) {
                /* Nested BEGIN — PostgreSQL issues a WARNING but continues */
                fprintf(stderr, "[TX] WARNING: already in transaction\n");
            } else {
                ctx->in_transaction = 1;
                if (ctx->undo_log) {
                    undo_log_free(ctx->undo_log);
                    ctx->undo_log = NULL;
                }
                ctx->undo_log = undo_log_create();
                savepoint_stack_init(&ctx->savepoints);
                /* SERIALIZABLE: hold parse lock for entire transaction */
                if (ctx->isolation_level == 3) {
                    mutex_lock(&g_parse_lock);
                    ctx->serializable_locked = 1;
                }
            }
        }
        strcpy(rs->command_tag, "BEGIN");
        return 1;
    }
    if (starts_with_i(sql, "COMMIT") || starts_with_i(sql, "END")) {
        if (ctx && (ctx->in_transaction || ctx->tx_aborted)) {
            if (ctx->tx_aborted && ctx->undo_log) {
                /* COMMIT in aborted TX = implicit ROLLBACK (PostgreSQL behavior) */
                undo_log_rollback(ctx->undo_log);
            }
            ctx->in_transaction = 0;
            ctx->tx_aborted = 0;
            if (ctx->undo_log) {
                undo_log_free(ctx->undo_log);
                ctx->undo_log = NULL;
            }
            savepoint_stack_init(&ctx->savepoints);
            /* Release SERIALIZABLE lock */
            if (ctx->serializable_locked) {
                ctx->serializable_locked = 0;
                mutex_unlock(&g_parse_lock);
            }
            /* GTT ON COMMIT DELETE ROWS: purge session data */
            for (int gi = 0; gi < ctx->gtt_count; gi++) {
                if (ctx->gtt_data[gi].pk_root_page == 0) continue;
                TableDesc gtd;
                if (cat_find_table_by_id(ctx->gtt_data[gi].table_id, &gtd) < 0)
                    continue;
                if (gtd.on_commit_delete) {
                    BTree2 pk = { .root_page = ctx->gtt_data[gi].pk_root_page };
                    bt2_destroy(&pk);
                    if (ctx->gtt_data[gi].heap_page != 0) {
                        TableDesc tmpTd = {0};
                        tmpTd.heap_page = ctx->gtt_data[gi].heap_page;
                        tapi_free_heap_pages(&tmpTd);
                    }
                    ctx->gtt_data[gi].pk_root_page = 0;
                    ctx->gtt_data[gi].heap_page = 0;
                }
            }
        }
        strcpy(rs->command_tag, "COMMIT");
        return 1;
    }
    /* ROLLBACK TO [SAVEPOINT] <name> — must check before plain ROLLBACK */
    if (starts_with_i(sql, "ROLLBACK TO")) {
        if (ctx && ctx->in_transaction) {
            /* Parse savepoint name: "ROLLBACK TO [SAVEPOINT] name" */
            const char *p = sql + 11; /* skip "ROLLBACK TO" */
            while (*p == ' ') p++;
            if (starts_with_i(p, "SAVEPOINT"))
                p += 9;
            while (*p == ' ') p++;
            char sp_name[128];
            int i = 0;
            while (*p && *p != ' ' && *p != ';' && i < 127)
                sp_name[i++] = *p++;
            sp_name[i] = '\0';

            if (sp_name[0] == '\0') {
                result_set_error(rs, "42601", "ROLLBACK TO requires a savepoint name");
                return 1;
            }

            int idx = savepoint_find(&ctx->savepoints, sp_name);
            if (idx < 0) {
                char msg[256];
                snprintf(msg, sizeof(msg), "savepoint \"%s\" does not exist", sp_name);
                result_set_error(rs, "3B001", msg);
                return 1;
            }

            /* Undo entries back to savepoint position */
            int target = ctx->savepoints.entries[idx].undo_count;
            undo_log_rollback_to(ctx->undo_log, target);

            /* Destroy savepoints created after this one */
            savepoint_release_after(&ctx->savepoints, idx);

            /* Clear aborted state — PG allows continuing after ROLLBACK TO */
            ctx->tx_aborted = 0;
        } else {
            result_set_error(rs, "25P01", "ROLLBACK TO can only be used in a transaction");
            return 1;
        }
        strcpy(rs->command_tag, "ROLLBACK");
        return 1;
    }
    if (starts_with_i(sql, "ROLLBACK")) {
        if (ctx && (ctx->in_transaction || ctx->tx_aborted)) {
            /* ROLLBACK — replay undo log in reverse */
            if (ctx->undo_log) {
                undo_log_rollback(ctx->undo_log);
                undo_log_free(ctx->undo_log);
                ctx->undo_log = NULL;
            }
            ctx->in_transaction = 0;
            ctx->tx_aborted = 0;
            savepoint_stack_init(&ctx->savepoints);
            /* Release SERIALIZABLE lock */
            if (ctx->serializable_locked) {
                ctx->serializable_locked = 0;
                mutex_unlock(&g_parse_lock);
            }
        }
        strcpy(rs->command_tag, "ROLLBACK");
        return 1;
    }
    /* RELEASE SAVEPOINT <name> */
    if (starts_with_i(sql, "RELEASE")) {
        if (ctx && ctx->in_transaction) {
            const char *p = sql + 7; /* skip "RELEASE" */
            while (*p == ' ') p++;
            if (starts_with_i(p, "SAVEPOINT"))
                p += 9;
            while (*p == ' ') p++;
            char sp_name[128];
            int i = 0;
            while (*p && *p != ' ' && *p != ';' && i < 127)
                sp_name[i++] = *p++;
            sp_name[i] = '\0';

            if (sp_name[0] == '\0') {
                result_set_error(rs, "42601", "RELEASE requires a savepoint name");
                return 1;
            }

            int idx = savepoint_find(&ctx->savepoints, sp_name);
            if (idx < 0) {
                char msg[256];
                snprintf(msg, sizeof(msg), "savepoint \"%s\" does not exist", sp_name);
                result_set_error(rs, "3B001", msg);
                return 1;
            }

            /* Release this savepoint and all newer ones */
            savepoint_release_after(&ctx->savepoints, idx - 1);
        } else {
            result_set_error(rs, "25P01", "RELEASE SAVEPOINT can only be used in a transaction");
            return 1;
        }
        strcpy(rs->command_tag, "RELEASE");
        return 1;
    }
    /* SAVEPOINT <name> */
    if (starts_with_i(sql, "SAVEPOINT")) {
        if (ctx && ctx->in_transaction) {
            const char *p = sql + 9; /* skip "SAVEPOINT" */
            while (*p == ' ') p++;
            char sp_name[128];
            int i = 0;
            while (*p && *p != ' ' && *p != ';' && i < 127)
                sp_name[i++] = *p++;
            sp_name[i] = '\0';

            if (sp_name[0] == '\0') {
                result_set_error(rs, "42601", "SAVEPOINT requires a name");
                return 1;
            }

            int undo_count = ctx->undo_log ? ctx->undo_log->count : 0;
            if (savepoint_create(&ctx->savepoints, sp_name, undo_count) < 0) {
                result_set_error(rs, "53000", "too many savepoints");
                return 1;
            }
        } else {
            result_set_error(rs, "25P01", "SAVEPOINT can only be used in a transaction");
            return 1;
        }
        strcpy(rs->command_tag, "SAVEPOINT");
        return 1;
    }
    if (starts_with_i(sql, "DISCARD")) {
        strcpy(rs->command_tag, "DISCARD ALL");
        return 1;
    }
    if (starts_with_i(sql, "DEALLOCATE")) {
        strcpy(rs->command_tag, "DEALLOCATE");
        return 1;
    }
    if (starts_with_i(sql, "CLOSE")) {
        strcpy(rs->command_tag, "CLOSE CURSOR");
        return 1;
    }
    if (starts_with_i(sql, "RESET")) {
        strcpy(rs->command_tag, "RESET");
        return 1;
    }
    if (starts_with_i(sql, "LISTEN")) {
        strcpy(rs->command_tag, "LISTEN");
        return 1;
    }
    if (starts_with_i(sql, "UNLISTEN")) {
        strcpy(rs->command_tag, "UNLISTEN");
        return 1;
    }
    return 0;
}

/* Check if SQL references a pg_catalog system table — used to prevent
   builtin function handlers from intercepting complex pg_catalog queries
   that happen to contain function calls like format_type(), pg_get_expr() */
static int has_pg_table_ref(const char *sql)
{
    return stristr_found(sql, "pg_class") ||
           stristr_found(sql, "pg_type") ||
           stristr_found(sql, "pg_attribute") ||
           stristr_found(sql, "pg_namespace") ||
           stristr_found(sql, "pg_database") ||
           stristr_found(sql, "pg_proc") ||
           stristr_found(sql, "pg_constraint") ||
           stristr_found(sql, "pg_depend");
}

/* ----------------------------------------------------------------
 *  SELECT version(), current_database(), etc.
 * ---------------------------------------------------------------- */
static int handle_builtin_functions(const char *sql, ResultSet *rs)
{
    result_init(rs);
    rs->is_select = 1;

    if (stristr_found(sql, "version()")) {
        result_add_column(rs, "version", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0,
            "PostgreSQL 15.0 (EvoSQL 1.0 - Evolution Database Engine)");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    if (stristr_found(sql, "current_database()")) {
        result_add_column(rs, "current_database", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, db_get_current_database());
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* Combined: current_schema + session_user/current_user */
    if (stristr_found(sql, "current_schema") &&
        (stristr_found(sql, "session_user") || stristr_found(sql, "current_user"))) {
        result_add_column(rs, "current_schema", PG_OID_TEXT);
        result_add_column(rs, "current_user", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, db_get_current_schema());
        result_set_field(rs, row, 1, "evosql");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    if (stristr_found(sql, "current_schema")) {
        result_add_column(rs, "current_schema", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, db_get_current_schema());
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    if (stristr_found(sql, "current_user") || stristr_found(sql, "session_user")) {
        result_add_column(rs, "current_user", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "evosql");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    if (stristr_found(sql, "inet_server_port()")) {
        result_add_column(rs, "inet_server_port", PG_OID_INT4);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "5433");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* current_setting(...) — JDBC driver sends during init */
    if (stristr_found(sql, "current_setting")) {
        result_add_column(rs, "current_setting", PG_OID_TEXT);
        int row = result_add_row(rs);
        if (stristr_found(sql, "server_version_num"))
            result_set_field(rs, row, 0, "150000");
        else if (stristr_found(sql, "server_version"))
            result_set_field(rs, row, 0, "15.0 (EvoSQL)");
        else if (stristr_found(sql, "max_identifier_length"))
            result_set_field(rs, row, 0, "63");
        else if (stristr_found(sql, "transaction_isolation"))
            result_set_field(rs, row, 0, "read committed");
        else
            result_set_field(rs, row, 0, "");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* current_schemas(...) — JDBC driver may query this */
    if (stristr_found(sql, "current_schemas")) {
        result_add_column(rs, "current_schemas", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "{pg_catalog,default}");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* obj_description(...), col_description(...), shobj_description(...) */
    if ((stristr_found(sql, "obj_description") ||
         stristr_found(sql, "col_description") ||
         stristr_found(sql, "shobj_description")) &&
        !has_pg_table_ref(sql)) {
        result_add_column(rs, "description", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_null(rs, row, 0);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* format_type(...) */
    if (stristr_found(sql, "format_type") && !has_pg_table_ref(sql)) {
        result_add_column(rs, "format_type", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "text");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* pg_get_userbyid(...) */
    if (stristr_found(sql, "pg_get_userbyid") && !has_pg_table_ref(sql)) {
        result_add_column(rs, "pg_get_userbyid", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "evosql");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* pg_encoding_to_char(...) */
    if (stristr_found(sql, "pg_encoding_to_char") && !has_pg_table_ref(sql)) {
        result_add_column(rs, "pg_encoding_to_char", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "UTF8");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* has_table_privilege, has_schema_privilege, has_column_privileges, etc.
     * These are PostgreSQL catalog functions used by tools like DBeaver/pgAdmin.
     * Real privilege enforcement is done in query_executor.c via CheckPrivilege().
     * TODO: Parse arguments and call CheckPrivilege() for accurate results. */
    if ((stristr_found(sql, "has_table_privilege") ||
         stristr_found(sql, "has_schema_privilege") ||
         stristr_found(sql, "has_database_privilege") ||
         stristr_found(sql, "has_column_privilege")) &&
        !has_pg_table_ref(sql)) {
        result_add_column(rs, "privilege", PG_OID_BOOL);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "t");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* pg_get_expr(...) */
    if (stristr_found(sql, "pg_get_expr") && !has_pg_table_ref(sql)) {
        result_add_column(rs, "pg_get_expr", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_null(rs, row, 0);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* array_to_string, string_to_array — common utility functions */
    if ((stristr_found(sql, "array_to_string") ||
         stristr_found(sql, "string_to_array")) &&
        !has_pg_table_ref(sql)) {
        result_add_column(rs, "result", PG_OID_TEXT);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0, "");
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        return 1;
    }

    /* SELECT 1 — connection test / keepalive */
    {
        const char *p = sql;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "SELECT", 6) == 0) {
            p += 6;
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p == '1') {
                /* Make sure there's nothing meaningful after the '1'
                   (just optional whitespace / semicolon / end-of-string).
                   Otherwise queries like "SELECT 1 << 4" would be caught. */
                const char *q = p + 1;
                while (*q && isspace((unsigned char)*q)) q++;
                if (*q == '\0' || *q == ';') {
                    result_add_column(rs, "?column?", PG_OID_INT4);
                    int row = result_add_row(rs);
                    result_set_field(rs, row, 0, "1");
                    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
                    return 1;
                }
            }
        }
    }

    return 0;
}

/* ----------------------------------------------------------------
 *  information_schema.tables
 * ---------------------------------------------------------------- */
int catalog_list_tables(ResultSet *rs)
{
    result_init(rs);
    rs->is_select = 1;

    result_add_column(rs, "table_catalog", PG_OID_TEXT);
    result_add_column(rs, "table_schema", PG_OID_TEXT);
    result_add_column(rs, "table_name", PG_OID_TEXT);
    result_add_column(rs, "table_type", PG_OID_TEXT);

    int count = 0;
    DatabaseDesc dbDesc;
    SchemaDesc schDesc;
    if (cat_find_database(db_get_current_database(), &dbDesc) == 0 &&
        cat_find_schema(dbDesc.db_id, db_get_current_schema(), &schDesc) == 0) {
        TableDesc tables[256];
        int nt = cat_list_tables(schDesc.schema_id, tables, 256);
        for (int i = 0; i < nt; i++) {
            int row = result_add_row(rs);
            if (row < 0) break;
            result_set_field(rs, row, 0, "evosql");
            result_set_field(rs, row, 1, db_get_current_schema());
            result_set_field(rs, row, 2, tables[i].table_name);
            result_set_field(rs, row, 3, "BASE TABLE");
            count++;
        }
    }

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
    return 1;
}

/* ----------------------------------------------------------------
 *  information_schema.columns
 * ---------------------------------------------------------------- */
int catalog_list_columns(const char *table_name, ResultSet *rs)
{
    int ordinal = 0;

    result_init(rs);
    rs->is_select = 1;

    result_add_column(rs, "table_catalog", PG_OID_TEXT);
    result_add_column(rs, "table_schema", PG_OID_TEXT);
    result_add_column(rs, "table_name", PG_OID_TEXT);
    result_add_column(rs, "column_name", PG_OID_TEXT);
    result_add_column(rs, "ordinal_position", PG_OID_INT4);
    result_add_column(rs, "data_type", PG_OID_TEXT);
    result_add_column(rs, "is_nullable", PG_OID_TEXT);

    DatabaseDesc dbDesc;
    SchemaDesc schDesc;
    TableDesc tblDesc;
    if (cat_find_database(db_get_current_database(), &dbDesc) != 0 ||
        cat_find_schema(dbDesc.db_id, db_get_current_schema(), &schDesc) != 0 ||
        cat_find_table(schDesc.schema_id, table_name, &tblDesc) != 0) {
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = cat_find_columns(tblDesc.table_id, cols, CAT_MAX_COLUMNS);
    for (int i = 0; i < ncols; i++) {
        ordinal++;
        int row = result_add_row(rs);
        if (row < 0) break;

        char ordStr[16];
        snprintf(ordStr, sizeof(ordStr), "%d", ordinal);

        const char *typeName = evo_type_to_name(cols[i].type_code);

        result_set_field(rs, row, 0, "evosql");
        result_set_field(rs, row, 1, db_get_current_schema());
        result_set_field(rs, row, 2, table_name);
        result_set_field(rs, row, 3, cols[i].col_name);
        result_set_field(rs, row, 4, ordStr);
        result_set_field(rs, row, 5, typeName);
        result_set_field(rs, row, 6, cols[i].is_not_null ? "NO" : "YES");
    }

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", ordinal);
    return 1;
}

/* ----------------------------------------------------------------
 *  All columns across all tables
 * ---------------------------------------------------------------- */
static int catalog_list_all_columns(ResultSet *rs)
{
    int total = 0;

    result_init(rs);
    rs->is_select = 1;

    result_add_column(rs, "table_catalog", PG_OID_TEXT);
    result_add_column(rs, "table_schema", PG_OID_TEXT);
    result_add_column(rs, "table_name", PG_OID_TEXT);
    result_add_column(rs, "column_name", PG_OID_TEXT);
    result_add_column(rs, "ordinal_position", PG_OID_INT4);
    result_add_column(rs, "data_type", PG_OID_TEXT);
    result_add_column(rs, "is_nullable", PG_OID_TEXT);

    DatabaseDesc dbDesc;
    SchemaDesc schDesc;
    if (cat_find_database(db_get_current_database(), &dbDesc) != 0 ||
        cat_find_schema(dbDesc.db_id, db_get_current_schema(), &schDesc) != 0) {
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    TableDesc tables[256];
    int nt = cat_list_tables(schDesc.schema_id, tables, 256);
    for (int t = 0; t < nt; t++) {
        ColumnDesc cols[CAT_MAX_COLUMNS];
        int ncols = cat_find_columns(tables[t].table_id, cols, CAT_MAX_COLUMNS);
        for (int c = 0; c < ncols; c++) {
            int row = result_add_row(rs);
            if (row < 0) break;

            char ordStr[16];
            snprintf(ordStr, sizeof(ordStr), "%d", c + 1);

            const char *typeName = evo_type_to_name(cols[c].type_code);

            result_set_field(rs, row, 0, "evosql");
            result_set_field(rs, row, 1, db_get_current_schema());
            result_set_field(rs, row, 2, tables[t].table_name);
            result_set_field(rs, row, 3, cols[c].col_name);
            result_set_field(rs, row, 4, ordStr);
            result_set_field(rs, row, 5, typeName);
            result_set_field(rs, row, 6, cols[c].is_not_null ? "NO" : "YES");
            total++;
        }
    }

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", total);
    return 1;
}

/* ----------------------------------------------------------------
 *  pg_catalog mock queries
 * ---------------------------------------------------------------- */
static int handle_pg_catalog(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    result_init(rs);
    rs->is_select = 1;

    /* pg_database — DBeaver queries this for database list.
     * Read dynamically from root/databases file.
     * DBeaver issues:
     *   SELECT db.oid,db.* FROM pg_catalog.pg_database db WHERE datname=$1
     * The db.* expands to ALL pg_database columns, so we must provide them. */
    if (stristr_found(sql, "pg_database")) {
        /* PostgreSQL pg_database columns */
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "datname", PG_OID_TEXT);
        result_add_column(rs, "datdba", PG_OID_INT4);
        result_add_column(rs, "encoding", PG_OID_INT4);
        result_add_column(rs, "datlocprovider", PG_OID_BPCHAR);
        result_add_column(rs, "datistemplate", PG_OID_BOOL);
        result_add_column(rs, "datallowconn", PG_OID_BOOL);
        result_add_column(rs, "datconnlimit", PG_OID_INT4);
        result_add_column(rs, "datfrozenxid", PG_OID_INT4);
        result_add_column(rs, "datminmxid", PG_OID_INT4);
        result_add_column(rs, "dattablespace", PG_OID_INT4);
        result_add_column(rs, "datcollate", PG_OID_TEXT);
        result_add_column(rs, "datctype", PG_OID_TEXT);
        result_add_column(rs, "daticulocale", PG_OID_TEXT);
        result_add_column(rs, "daticurules", PG_OID_TEXT);
        result_add_column(rs, "datcollversion", PG_OID_TEXT);
        result_add_column(rs, "datacl", PG_OID_TEXT);

        /* Extract optional single-database filter.
         * DBeaver uses two patterns:
         *   1) WHERE datname=$1   (bind → WHERE datname='evosql')  — single db
         *   2) WHERE 1=1 AND datallowconn AND NOT datistemplate
         *      OR db.datname='evosql'                              — all dbs
         * We only filter when pattern is "WHERE datname=" or "WHERE datname =" 
         * i.e. datname is the primary WHERE condition. */
        char datname_filter[256] = {0};
        {
            const char *wpos = strcasestr_local(sql, "WHERE");
            if (wpos) {
                const char *after = wpos + 5;
                while (*after == ' ' || *after == '\t') after++;
                if (strncasecmp(after, "datname", 7) == 0) {
                    /* datname is right after WHERE — single-db filter */
                    const char *q = strchr(after, '\'');
                    if (q) {
                        q++;
                        int i = 0;
                        while (*q && *q != '\'' && i < 255)
                            datname_filter[i++] = *q++;
                        datname_filter[i] = '\0';
                    }
                }
                /* Otherwise (WHERE 1=1 AND datallowconn...) → no filter, show all */
            }
        }

        DatabaseDesc dbs[64];
        int ndb = cat_list_databases(dbs, 64);
        int count = 0;
        int oid_counter = 16384;
        for (int i = 0; i < ndb; i++) {
            if (datname_filter[0] && strcasecmp(dbs[i].db_name, datname_filter) != 0) {
                oid_counter++;
                continue;
            }
            char oid_str[32];
            snprintf(oid_str, sizeof(oid_str), "%d", oid_counter++);
            int r = result_add_row(rs);
            result_set_field(rs, r, 0, oid_str);    /* oid */
            result_set_field(rs, r, 1, dbs[i].db_name); /* datname */
            result_set_field(rs, r, 2, "10");         /* datdba */
            result_set_field(rs, r, 3, "6");          /* encoding (UTF8) */
            result_set_field(rs, r, 4, "c");          /* datlocprovider */
            result_set_field(rs, r, 5, "f");          /* datistemplate */
            result_set_field(rs, r, 6, "t");          /* datallowconn */
            result_set_field(rs, r, 7, "-1");         /* datconnlimit */
            result_set_field(rs, r, 8, "726");        /* datfrozenxid */
            result_set_field(rs, r, 9, "1");          /* datminmxid */
            result_set_field(rs, r, 10, "1663");      /* dattablespace */
            result_set_field(rs, r, 11, "en_US.UTF-8"); /* datcollate */
            result_set_field(rs, r, 12, "en_US.UTF-8"); /* datctype */
            /* daticulocale, daticurules, datcollversion, datacl → NULL */
            count++;
        }
        if (count == 0 && datname_filter[0] == '\0') {
            int r = result_add_row(rs);
            result_set_field(rs, r, 0, "16384");
            result_set_field(rs, r, 1, "evosql");
            result_set_field(rs, r, 2, "10");
            result_set_field(rs, r, 3, "6");
            result_set_field(rs, r, 4, "c");
            result_set_field(rs, r, 5, "f");
            result_set_field(rs, r, 6, "t");
            result_set_field(rs, r, 7, "-1");
            result_set_field(rs, r, 8, "726");
            result_set_field(rs, r, 9, "1");
            result_set_field(rs, r, 10, "1663");
            result_set_field(rs, r, 11, "en_US.UTF-8");
            result_set_field(rs, r, 12, "en_US.UTF-8");
            count = 1;
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
        return 1;
    }

    /* pg_namespace — schema list
     * Guard: skip if query's main target is pg_type, pg_class, or pg_attribute
     * (those queries reference pg_namespace in WHERE/subqueries)
     * Read user schemas dynamically from root/schemas file.
     * DBeaver issues:
     *   SELECT n.oid,n.*,d.description FROM pg_catalog.pg_namespace n
     *     LEFT OUTER JOIN pg_catalog.pg_description d ...
     */
    if ((stristr_found(sql, "pg_namespace") || stristr_found(sql, "pg_catalog.pg_namespace")) &&
        !stristr_found(sql, "pg_type") && !stristr_found(sql, "pg_class") &&
        !stristr_found(sql, "pg_attribute")) {
        /* n.oid (extra) + n.* columns + d.description from JOIN */
        result_add_column(rs, "oid", PG_OID_INT4);       /* n.oid */
        result_add_column(rs, "nspname", PG_OID_TEXT);
        result_add_column(rs, "nspowner", PG_OID_INT4);
        result_add_column(rs, "nspacl", PG_OID_TEXT);     /* n.* includes nspacl */
        result_add_column(rs, "description", PG_OID_TEXT); /* d.description */

        int count = 0;

        /* pg_catalog — system schema (required for type resolution) */
        int row0 = result_add_row(rs);
        result_set_field(rs, row0, 0, "11");
        result_set_field(rs, row0, 1, "pg_catalog");
        result_set_field(rs, row0, 2, "10");
        count++;

        /* information_schema — system schema */
        int row1 = result_add_row(rs);
        result_set_field(rs, row1, 0, "13060");
        result_set_field(rs, row1, 1, "information_schema");
        result_set_field(rs, row1, 2, "10");
        count++;

        /* Database schemas from catalog */
        DatabaseDesc dbDescNs;
        if (cat_find_database(db_get_current_database(), &dbDescNs) == 0) {
            SchemaDesc schemas[32];
            int ns = cat_list_schemas(dbDescNs.db_id, schemas, 32);
            int oid_counter = 2200;
            for (int i = 0; i < ns; i++) {
                char oid_str[32];
                snprintf(oid_str, sizeof(oid_str), "%d", oid_counter++);
                int r = result_add_row(rs);
                result_set_field(rs, r, 0, oid_str);
                result_set_field(rs, r, 1, schemas[i].schema_name);
                result_set_field(rs, r, 2, "10");
                count++;
            }
        }

        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
        return 1;
    }

    /* pg_type — basic PostgreSQL types for DBeaver column type display */
    /* DBeaver queries:
     *   SELECT t.oid,t.*,c.relkind,format_type(nullif(t.typbasetype,0),t.typtypmod) as base_type_name
     *     FROM pg_type t LEFT JOIN pg_class c ...
     *   SELECT t.oid,t.*,format_type(nullif(t.typbasetype,0),t.typtypmod) as base_type_name
     *     FROM pg_catalog.pg_type t ...
     */
    if (stristr_found(sql, "pg_type")) {
        /* t.oid + t.* columns (PostgreSQL pg_type real columns) */
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "typname", PG_OID_TEXT);
        result_add_column(rs, "typnamespace", PG_OID_INT4);
        result_add_column(rs, "typowner", PG_OID_INT4);
        result_add_column(rs, "typlen", PG_OID_INT2);
        result_add_column(rs, "typbyval", PG_OID_BOOL);
        result_add_column(rs, "typtype", PG_OID_BPCHAR);
        result_add_column(rs, "typcategory", PG_OID_BPCHAR);
        result_add_column(rs, "typispreferred", PG_OID_BOOL);
        result_add_column(rs, "typisdefined", PG_OID_BOOL);
        result_add_column(rs, "typdelim", PG_OID_BPCHAR);
        result_add_column(rs, "typrelid", PG_OID_INT4);
        result_add_column(rs, "typelem", PG_OID_INT4);
        result_add_column(rs, "typarray", PG_OID_INT4);
        result_add_column(rs, "typinput", PG_OID_TEXT);
        result_add_column(rs, "typoutput", PG_OID_TEXT);
        result_add_column(rs, "typreceive", PG_OID_TEXT);
        result_add_column(rs, "typsend", PG_OID_TEXT);
        result_add_column(rs, "typmodin", PG_OID_TEXT);
        result_add_column(rs, "typmodout", PG_OID_TEXT);
        result_add_column(rs, "typanalyze", PG_OID_TEXT);
        result_add_column(rs, "typalign", PG_OID_BPCHAR);
        result_add_column(rs, "typstorage", PG_OID_BPCHAR);
        result_add_column(rs, "typnotnull", PG_OID_BOOL);
        result_add_column(rs, "typbasetype", PG_OID_INT4);
        result_add_column(rs, "typtypmod", PG_OID_INT4);
        result_add_column(rs, "typndims", PG_OID_INT4);
        result_add_column(rs, "typcollation", PG_OID_INT4);
        /* Extra columns from JOIN / computed */
        result_add_column(rs, "relkind", PG_OID_BPCHAR);
        result_add_column(rs, "base_type_name", PG_OID_TEXT);

        struct { const char *oid; const char *name; const char *len;
                 const char *typtype; const char *cat; } types[] = {
            {"16",   "bool",      "1",  "b", "B"},
            {"20",   "int8",      "8",  "b", "N"},
            {"21",   "int2",      "2",  "b", "N"},
            {"23",   "int4",      "4",  "b", "N"},
            {"25",   "text",      "-1", "b", "S"},
            {"700",  "float4",    "4",  "b", "N"},
            {"701",  "float8",    "8",  "b", "N"},
            {"1042", "bpchar",    "-1", "b", "S"},
            {"1043", "varchar",   "-1", "b", "S"},
            {"1082", "date",      "4",  "b", "D"},
            {"1114", "timestamp", "8",  "b", "D"},
            {"1700", "numeric",   "-1", "b", "N"},
            {"2950", "uuid",      "16", "b", "U"},
            {NULL, NULL, NULL, NULL, NULL}
        };

        int count = 0, i;
        for (i = 0; types[i].oid != NULL; i++) {
            int row = result_add_row(rs);
            if (row < 0) break;
            result_set_field(rs, row, 0, types[i].oid);    /* oid */
            result_set_field(rs, row, 1, types[i].name);   /* typname */
            result_set_field(rs, row, 2, "11");             /* typnamespace (pg_catalog=11) */
            result_set_field(rs, row, 3, "10");             /* typowner */
            result_set_field(rs, row, 4, types[i].len);     /* typlen */
            result_set_field(rs, row, 5, "t");              /* typbyval */
            result_set_field(rs, row, 6, types[i].typtype); /* typtype */
            result_set_field(rs, row, 7, types[i].cat);     /* typcategory */
            result_set_field(rs, row, 8, "f");              /* typispreferred */
            result_set_field(rs, row, 9, "t");              /* typisdefined */
            result_set_field(rs, row, 10, ",");             /* typdelim */
            result_set_field(rs, row, 11, "0");             /* typrelid */
            result_set_field(rs, row, 12, "0");             /* typelem */
            result_set_field(rs, row, 13, "0");             /* typarray */
            result_set_field(rs, row, 14, "textin");        /* typinput */
            result_set_field(rs, row, 15, "textout");       /* typoutput */
            result_set_field(rs, row, 16, "-");             /* typreceive */
            result_set_field(rs, row, 17, "-");             /* typsend */
            result_set_field(rs, row, 18, "-");             /* typmodin */
            result_set_field(rs, row, 19, "-");             /* typmodout */
            result_set_field(rs, row, 20, "-");             /* typanalyze */
            result_set_field(rs, row, 21, "i");             /* typalign */
            result_set_field(rs, row, 22, "p");             /* typstorage */
            result_set_field(rs, row, 23, "f");             /* typnotnull */
            result_set_field(rs, row, 24, "0");             /* typbasetype */
            result_set_field(rs, row, 25, "-1");            /* typtypmod */
            result_set_field(rs, row, 26, "0");             /* typndims */
            result_set_field(rs, row, 27, "0");             /* typcollation */
            result_set_null(rs, row, 28);                   /* relkind */
            result_set_null(rs, row, 29);                   /* base_type_name (null for base types) */
            count++;
        }

        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
        return 1;
    }

    /* pg_attribute — column information (DBeaver reads columns from here)
     * Must be checked BEFORE pg_class since pg_attribute queries often JOIN pg_class
     * Guard: skip if query's main target is pg_constraint
     * Columns match PostgreSQL 15 pg_attribute layout for DBeaver compatibility */
    if (stristr_found(sql, "pg_attribute") &&
        !stristr_found(sql, "pg_constraint")) {
        result_add_column(rs, "attrelid", PG_OID_INT4);      /* 0  */
        result_add_column(rs, "attname", PG_OID_TEXT);        /* 1  */
        result_add_column(rs, "atttypid", PG_OID_INT4);      /* 2  */
        result_add_column(rs, "attstattarget", PG_OID_INT2);  /* 3  */
        result_add_column(rs, "attlen", PG_OID_INT2);         /* 4  */
        result_add_column(rs, "attnum", PG_OID_INT2);         /* 5  */
        result_add_column(rs, "attndims", PG_OID_INT4);       /* 6  */
        result_add_column(rs, "attcacheoff", PG_OID_INT4);    /* 7  */
        result_add_column(rs, "atttypmod", PG_OID_INT4);      /* 8  */
        result_add_column(rs, "attbyval", PG_OID_BOOL);       /* 9  */
        result_add_column(rs, "attstorage", PG_OID_BPCHAR);   /* 10 */
        result_add_column(rs, "attalign", PG_OID_BPCHAR);     /* 11 */
        result_add_column(rs, "attnotnull", PG_OID_BOOL);     /* 12 */
        result_add_column(rs, "atthasdef", PG_OID_BOOL);      /* 13 */
        result_add_column(rs, "atthasmissing", PG_OID_BOOL);  /* 14 */
        result_add_column(rs, "attidentity", PG_OID_BPCHAR);  /* 15 */
        result_add_column(rs, "attgenerated", PG_OID_BPCHAR); /* 16 */
        result_add_column(rs, "attisdropped", PG_OID_BOOL);   /* 17 */
        result_add_column(rs, "attislocal", PG_OID_BOOL);     /* 18 */
        result_add_column(rs, "attinhcount", PG_OID_INT4);    /* 19 */
        result_add_column(rs, "attcollation", PG_OID_INT4);   /* 20 */
        /* Extra columns from JOINs in DBeaver query */
        result_add_column(rs, "relname", PG_OID_TEXT);        /* 21 */
        result_add_column(rs, "def_value", PG_OID_TEXT);      /* 22 */
        result_add_column(rs, "description", PG_OID_TEXT);    /* 23 */

        /* Scan tables via catalog — OID derived from table name for stability */
        int count = 0;
        DatabaseDesc dbDescAttr;
        SchemaDesc schDescAttr;
        if (cat_find_database(db_get_current_database(), &dbDescAttr) == 0 &&
            cat_find_schema(dbDescAttr.db_id, db_get_current_schema(), &schDescAttr) == 0) {
            TableDesc tables[256];
            int nt = cat_list_tables(schDescAttr.schema_id, tables, 256);
            for (int t = 0; t < nt; t++) {
                char oidStr[16];
                snprintf(oidStr, sizeof(oidStr), "%u", stable_table_oid(tables[t].table_name));

                ColumnDesc cols[CAT_MAX_COLUMNS];
                int ncols = cat_find_columns(tables[t].table_id, cols, CAT_MAX_COLUMNS);
                for (int c = 0; c < ncols; c++) {
                    int attnum = c + 1;
                    int row = result_add_row(rs);
                    if (row < 0) break;
                    char numStr[16], typoidStr[16], attlenStr[16], typmodStr[16];
                    int typoid, attlen, typmod;
                    const char *byval, *storage;

                    snprintf(numStr, sizeof(numStr), "%d", attnum);

                    typoid = evo_type_to_pg_oid(cols[c].type_code);
                    attlen = evo_type_to_attlen(cols[c].type_code);
                    typmod = evo_type_to_atttypmod(cols[c].type_code);
                    byval = (attlen > 0 && attlen <= 8) ? "t" : "f";
                    storage = (attlen < 0) ? "x" : "p";

                    snprintf(typoidStr, sizeof(typoidStr), "%d", typoid);
                    snprintf(attlenStr, sizeof(attlenStr), "%d", attlen);
                    snprintf(typmodStr, sizeof(typmodStr), "%d", typmod);

                    result_set_field(rs, row, 0, oidStr);      /* attrelid */
                    result_set_field(rs, row, 1, cols[c].col_name); /* attname */
                    result_set_field(rs, row, 2, typoidStr);    /* atttypid */
                    result_set_field(rs, row, 3, "-1");         /* attstattarget */
                    result_set_field(rs, row, 4, attlenStr);    /* attlen */
                    result_set_field(rs, row, 5, numStr);       /* attnum */
                    result_set_field(rs, row, 6, "0");          /* attndims */
                    result_set_field(rs, row, 7, "-1");         /* attcacheoff */
                    result_set_field(rs, row, 8, typmodStr);    /* atttypmod */
                    result_set_field(rs, row, 9, byval);        /* attbyval */
                    result_set_field(rs, row, 10, storage);     /* attstorage */
                    result_set_field(rs, row, 11, "i");         /* attalign */
                    result_set_field(rs, row, 12, cols[c].is_not_null ? "t" : "f"); /* attnotnull */
                    result_set_field(rs, row, 13,
                        (cols[c].default_val[0] != '\0') ? "t" : "f"); /* atthasdef */
                    result_set_field(rs, row, 14, "f");     /* atthasmissing */
                    result_set_field(rs, row, 15, "");      /* attidentity (none) */
                    result_set_field(rs, row, 16, "");      /* attgenerated (none) */
                    result_set_field(rs, row, 17, "f");     /* attisdropped */
                    result_set_field(rs, row, 18, "t");     /* attislocal */
                    result_set_field(rs, row, 19, "0");     /* attinhcount */
                    result_set_field(rs, row, 20, "0");     /* attcollation */
                    result_set_field(rs, row, 21, tables[t].table_name); /* relname */
                    if (cols[c].default_val[0] != '\0')
                        result_set_field(rs, row, 22, cols[c].default_val); /* def_value */
                    else
                        result_set_null(rs, row, 22);           /* def_value */
                    result_set_null(rs, row, 23);           /* description */
                    count++;
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
        return 1;
    }

    /* pg_class — table listing (DBeaver reads tables from here)
     * Guard: skip if query's main target is pg_constraint or pg_depend
     * (those queries reference pg_class in JOINs/subqueries) */
    if (stristr_found(sql, "pg_class") &&
        !stristr_found(sql, "pg_constraint") &&
        !stristr_found(sql, "pg_depend")) {
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "relname", PG_OID_TEXT);
        result_add_column(rs, "relnamespace", PG_OID_INT4);
        result_add_column(rs, "reltype", PG_OID_INT4);
        result_add_column(rs, "reloftype", PG_OID_INT4);
        result_add_column(rs, "relowner", PG_OID_INT4);
        result_add_column(rs, "relam", PG_OID_INT4);
        result_add_column(rs, "reltablespace", PG_OID_INT4);
        result_add_column(rs, "relpages", PG_OID_INT4);
        result_add_column(rs, "reltuples", PG_OID_FLOAT4);
        result_add_column(rs, "relallvisible", PG_OID_INT4);
        result_add_column(rs, "reltoastrelid", PG_OID_INT4);
        result_add_column(rs, "relhasindex", PG_OID_BOOL);
        result_add_column(rs, "relisshared", PG_OID_BOOL);
        result_add_column(rs, "relpersistence", PG_OID_BPCHAR);
        result_add_column(rs, "relkind", PG_OID_BPCHAR);
        result_add_column(rs, "relnatts", PG_OID_INT2);
        result_add_column(rs, "relchecks", PG_OID_INT2);
        result_add_column(rs, "relhasrules", PG_OID_BOOL);
        result_add_column(rs, "relhastriggers", PG_OID_BOOL);
        result_add_column(rs, "relhassubclass", PG_OID_BOOL);
        result_add_column(rs, "relrowsecurity", PG_OID_BOOL);
        result_add_column(rs, "relforcerowsecurity", PG_OID_BOOL);
        result_add_column(rs, "relispopulated", PG_OID_BOOL);
        result_add_column(rs, "relreplident", PG_OID_BPCHAR);
        result_add_column(rs, "relispartition", PG_OID_BOOL);
        result_add_column(rs, "relrewrite", PG_OID_INT4);
        result_add_column(rs, "relfrozenxid", PG_OID_INT4);
        result_add_column(rs, "relminmxid", PG_OID_INT4);
        result_add_column(rs, "description", PG_OID_TEXT);
        result_add_column(rs, "partition_expr", PG_OID_TEXT);

        /* Determine which schema to scan from the WHERE clause.
         * DBeaver sends: WHERE c.relnamespace='<oid>'
         * We map the OID to a schema name and scan that directory. */
        char nsOid[32] = "";
        char schemaName[256] = "";
        char nsOidStr[32] = "2200"; /* default fallback */

        int has_ns_filter = extract_relnamespace(sql, nsOid, sizeof(nsOid));
        if (has_ns_filter && nsOid[0]) {
            /* If it's a system schema (pg_catalog, information_schema), return empty */
            int oid_val = atoi(nsOid);
            if (oid_val == 11 || oid_val == 13060) {
                snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
                return 1;
            }
            if (oid_to_schema_name(nsOid, schemaName, sizeof(schemaName))) {
                strncpy(nsOidStr, nsOid, sizeof(nsOidStr) - 1);
            } else {
                /* Unknown OID — return empty */
                snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
                return 1;
            }
        } else {
            /* No filter — use current schema */
            strncpy(schemaName, db_get_current_schema(), sizeof(schemaName) - 1);
            schemaName[sizeof(schemaName) - 1] = '\0';
            schema_name_to_oid(schemaName, nsOidStr, sizeof(nsOidStr));
        }

        /* Scan tables from catalog for the resolved schema */
        int count = 0;
        DatabaseDesc dbDescCls;
        SchemaDesc schDescCls;
        if (cat_find_database(db_get_current_database(), &dbDescCls) == 0 &&
            cat_find_schema(dbDescCls.db_id, schemaName, &schDescCls) == 0) {
            TableDesc tables[256];
            int nt = cat_list_tables(schDescCls.schema_id, tables, 256);
            for (int i = 0; i < nt; i++) {
                /* Skip temporary tables not owned by this session */
                if (tables[i].is_temporary) {
                    int owned = 0;
                    if (ctx) {
                        for (int ti = 0; ti < ctx->temp_table_count; ti++) {
                            if (ctx->temp_table_ids[ti] == tables[i].table_id) {
                                owned = 1;
                                break;
                            }
                        }
                    }
                    if (!owned) continue;
                }

                int row = result_add_row(rs);
                if (row < 0) break;

                char oidStr[16], nattsStr[16];
                unsigned int tableOid = stable_table_oid(tables[i].table_name);
                snprintf(oidStr, sizeof(oidStr), "%u", tableOid);
                snprintf(nattsStr, sizeof(nattsStr), "%d", tables[i].num_columns);

                /* reltype: OID of the composite type for this table.
                 * Use table OID + 1 so DBeaver can resolve it. */
                char reltypeStr[16];
                snprintf(reltypeStr, sizeof(reltypeStr), "%u", tableOid + 1);

                result_set_field(rs, row, 0, oidStr);         /* oid */
                result_set_field(rs, row, 1, tables[i].table_name); /* relname */
                result_set_field(rs, row, 2, nsOidStr);       /* relnamespace */
                result_set_field(rs, row, 3, reltypeStr);     /* reltype */
                result_set_field(rs, row, 4, "0");            /* reloftype */
                result_set_field(rs, row, 5, "10");           /* relowner */
                result_set_field(rs, row, 6, "2");            /* relam (heap) */
                result_set_field(rs, row, 7, "0");            /* reltablespace */
                result_set_field(rs, row, 8, "0");            /* relpages */
                result_set_field(rs, row, 9, "-1");           /* reltuples */
                result_set_field(rs, row, 10, "0");           /* relallvisible */
                result_set_field(rs, row, 11, "0");           /* reltoastrelid */
                result_set_field(rs, row, 12, "f");           /* relhasindex */
                result_set_field(rs, row, 13, "f");           /* relisshared */
                result_set_field(rs, row, 14, "p");           /* relpersistence */
                result_set_field(rs, row, 15, "r");           /* relkind = regular table */
                result_set_field(rs, row, 16, nattsStr);      /* relnatts */
                result_set_field(rs, row, 17, "0");           /* relchecks */
                result_set_field(rs, row, 18, "f");           /* relhasrules */
                result_set_field(rs, row, 19, "f");           /* relhastriggers */
                result_set_field(rs, row, 20, "f");           /* relhassubclass */
                result_set_field(rs, row, 21, "f");           /* relrowsecurity */
                result_set_field(rs, row, 22, "f");           /* relforcerowsecurity */
                result_set_field(rs, row, 23, "t");           /* relispopulated */
                result_set_field(rs, row, 24, "d");           /* relreplident */
                result_set_field(rs, row, 25, "f");           /* relispartition */
                result_set_field(rs, row, 26, "0");           /* relrewrite */
                result_set_field(rs, row, 27, "0");           /* relfrozenxid */
                result_set_field(rs, row, 28, "0");           /* relminmxid */
                result_set_null(rs, row, 29);                 /* description */
                result_set_null(rs, row, 30);                 /* partition_expr */
                count++;
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
        return 1;
    }

    /* pg_proc — functions */
    if (stristr_found(sql, "pg_proc")) {
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "proname", PG_OID_TEXT);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    /* pg_settings */
    if (stristr_found(sql, "pg_settings")) {
        result_add_column(rs, "name", PG_OID_TEXT);
        result_add_column(rs, "setting", PG_OID_TEXT);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    /* pg_constraint — DBeaver queries for table constraints */
    if (stristr_found(sql, "pg_constraint")) {
        result_add_column(rs, "oid", PG_OID_INT4);
        result_add_column(rs, "conname", PG_OID_TEXT);
        result_add_column(rs, "connamespace", PG_OID_INT4);
        result_add_column(rs, "contype", PG_OID_BPCHAR);
        result_add_column(rs, "condeferrable", PG_OID_BOOL);
        result_add_column(rs, "condeferred", PG_OID_BOOL);
        result_add_column(rs, "convalidated", PG_OID_BOOL);
        result_add_column(rs, "conrelid", PG_OID_INT4);
        result_add_column(rs, "contypid", PG_OID_INT4);
        result_add_column(rs, "conindid", PG_OID_INT4);
        result_add_column(rs, "conparentid", PG_OID_INT4);
        result_add_column(rs, "confrelid", PG_OID_INT4);
        result_add_column(rs, "confupdtype", PG_OID_BPCHAR);
        result_add_column(rs, "confdeltype", PG_OID_BPCHAR);
        result_add_column(rs, "confmatchtype", PG_OID_BPCHAR);
        result_add_column(rs, "conkey", PG_OID_TEXT);
        result_add_column(rs, "confkey", PG_OID_TEXT);
        result_add_column(rs, "description", PG_OID_TEXT);

        /* Resolve the namespace OID for the current schema */
        char conNsOid[32] = "2200";
        schema_name_to_oid(db_get_current_schema(), conNsOid, sizeof(conNsOid));

        /* Scan tables via catalog for constraints */
        int count = 0;
        DatabaseDesc dbDescCon;
        SchemaDesc schDescCon;
        if (cat_find_database(db_get_current_database(), &dbDescCon) == 0 &&
            cat_find_schema(dbDescCon.db_id, db_get_current_schema(), &schDescCon) == 0) {
            TableDesc tables[256];
            int nt = cat_list_tables(schDescCon.schema_id, tables, 256);
            for (int t = 0; t < nt; t++) {
                ConstraintDesc cons[64];
                int ncons = cat_list_constraints(tables[t].table_id, cons, 64);
                for (int ci = 0; ci < ncons; ci++) {
                    /* Map constraint type: catalog uses 'P','U','C','F' */
                    char contype[2] = {0};
                    contype[0] = cons[ci].constraint_type;
                    /* lowercase for PG compatibility */
                    if (contype[0] >= 'A' && contype[0] <= 'Z')
                        contype[0] = contype[0] + ('a' - 'A');

                    int row = result_add_row(rs);
                    if (row < 0) break;

                    unsigned int tableOid = stable_table_oid(tables[t].table_name);
                    char oidStr[16], relidStr[16], conkeyStr[64], conname[256];
                    snprintf(oidStr, sizeof(oidStr), "%u", tableOid + 10000 + ci);
                    snprintf(relidStr, sizeof(relidStr), "%u", tableOid);

                    /* Build conkey from constraint definition for PK/UK,
                     * or from column info for PK */
                    /* Use actual constraint name if available, else auto-generate */
                    if (cons[ci].constraint_name[0] != '\0') {
                        strncpy(conname, cons[ci].constraint_name, sizeof(conname) - 1);
                        conname[sizeof(conname) - 1] = '\0';
                    } else if (contype[0] == 'p') {
                        snprintf(conname, sizeof(conname), "%s_pkey", tables[t].table_name);
                    } else if (contype[0] == 'u') {
                        snprintf(conname, sizeof(conname), "%s_uq_%d", tables[t].table_name, ci);
                    } else if (contype[0] == 'c') {
                        snprintf(conname, sizeof(conname), "%s_check_%d", tables[t].table_name, ci);
                    } else if (contype[0] == 'f') {
                        snprintf(conname, sizeof(conname), "%s_fkey_%d", tables[t].table_name, ci);
                    } else {
                        snprintf(conname, sizeof(conname), "%s_con_%d", tables[t].table_name, ci);
                    }

                    if (contype[0] == 'p') {
                        /* Find PK column ordinal */
                        ColumnDesc cols[CAT_MAX_COLUMNS];
                        int ncols = cat_find_columns(tables[t].table_id, cols, CAT_MAX_COLUMNS);
                        int pk_positions_len = 0;
                        char pk_positions[256] = "{";
                        for (int k = 0; k < ncols; k++) {
                            if (cols[k].is_pk) {
                                if (pk_positions_len > 0) strcat(pk_positions, ",");
                                char tmp[16];
                                snprintf(tmp, sizeof(tmp), "%d", k + 1);
                                strcat(pk_positions, tmp);
                                pk_positions_len++;
                            }
                        }
                        strcat(pk_positions, "}");
                        strncpy(conkeyStr, pk_positions, sizeof(conkeyStr) - 1);
                        conkeyStr[sizeof(conkeyStr) - 1] = '\0';
                    } else if (contype[0] == 'u') {
                        snprintf(conkeyStr, sizeof(conkeyStr), "{1}");
                    } else if (contype[0] == 'c') {
                        snprintf(conkeyStr, sizeof(conkeyStr), "{}");
                    } else if (contype[0] == 'f') {
                        snprintf(conkeyStr, sizeof(conkeyStr), "{1}");
                    } else {
                        snprintf(conkeyStr, sizeof(conkeyStr), "{}");
                    }

                    char confrelStr[16] = "0";
                    if (contype[0] == 'f' && cons[ci].ref_table_id != 0) {
                        /* Try to find ref table name for OID */
                        snprintf(confrelStr, sizeof(confrelStr), "%u", cons[ci].ref_table_id);
                    }

                    result_set_field(rs, row, 0, oidStr);       /* oid */
                    result_set_field(rs, row, 1, conname);       /* conname */
                    result_set_field(rs, row, 2, conNsOid);      /* connamespace */
                    result_set_field(rs, row, 3, contype);        /* contype */
                    result_set_field(rs, row, 4, "f");           /* condeferrable */
                    result_set_field(rs, row, 5, "f");           /* condeferred */
                    result_set_field(rs, row, 6, "t");           /* convalidated */
                    result_set_field(rs, row, 7, relidStr);      /* conrelid */
                    result_set_field(rs, row, 8, "0");           /* contypid */
                    result_set_field(rs, row, 9, "0");           /* conindid */
                    result_set_field(rs, row, 10, "0");          /* conparentid */
                    result_set_field(rs, row, 11, confrelStr);   /* confrelid */
                    result_set_field(rs, row, 12, " ");          /* confupdtype */
                    result_set_field(rs, row, 13, " ");          /* confdeltype */
                    result_set_field(rs, row, 14, " ");          /* confmatchtype */
                    result_set_field(rs, row, 15, conkeyStr);    /* conkey */
                    if (contype[0] == 'f' && cons[ci].ref_columns[0])
                        result_set_field(rs, row, 16, cons[ci].ref_columns); /* confkey */
                    else
                        result_set_null(rs, row, 16);            /* confkey */
                    result_set_null(rs, row, 17);                /* description */
                    count++;
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
        return 1;
    }

    /* pg_depend — DBeaver queries for object dependencies */
    if (stristr_found(sql, "pg_depend")) {
        result_add_column(rs, "classid", PG_OID_INT4);
        result_add_column(rs, "objid", PG_OID_INT4);
        result_add_column(rs, "objsubid", PG_OID_INT4);
        result_add_column(rs, "refclassid", PG_OID_INT4);
        result_add_column(rs, "refobjid", PG_OID_INT4);
        result_add_column(rs, "refobjsubid", PG_OID_INT4);
        result_add_column(rs, "deptype", PG_OID_BPCHAR);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    /* pg_get_keywords — DBeaver queries for reserved word list */
    if (stristr_found(sql, "pg_get_keywords")) {
        if (stristr_found(sql, "string_agg")) {
            result_add_column(rs, "string_agg", PG_OID_TEXT);
            int row = result_add_row(rs);
            result_set_field(rs, row, 0, "");
            snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        } else {
            result_add_column(rs, "word", PG_OID_TEXT);
            result_add_column(rs, "catcode", PG_OID_TEXT);
            result_add_column(rs, "catdesc", PG_OID_TEXT);
            snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        }
        return 1;
    }

    /* pg_am, pg_roles, etc. — return empty */
    if (stristr_found(sql, "pg_am") || stristr_found(sql, "pg_roles") ||
        stristr_found(sql, "pg_user") || stristr_found(sql, "pg_stat") ||
        stristr_found(sql, "pg_index") ||
        stristr_found(sql, "pg_description") ||
        stristr_found(sql, "pg_extension") || stristr_found(sql, "pg_tablespace") ||
        stristr_found(sql, "pg_shdescription") || stristr_found(sql, "pg_inherits") ||
        stristr_found(sql, "pg_trigger") || stristr_found(sql, "pg_rewrite") ||
        stristr_found(sql, "pg_enum") || stristr_found(sql, "pg_collation") ||
        stristr_found(sql, "pg_available_extensions") ||
        stristr_found(sql, "pg_matviews") || stristr_found(sql, "pg_sequences") ||
        stristr_found(sql, "pg_foreign") || stristr_found(sql, "pg_policy") ||
        stristr_found(sql, "pg_publication") || stristr_found(sql, "pg_subscription") ||
        stristr_found(sql, "pg_event_trigger") || stristr_found(sql, "pg_language") ||
        stristr_found(sql, "pg_conversion") || stristr_found(sql, "pg_opclass") ||
        stristr_found(sql, "pg_operator") || stristr_found(sql, "pg_aggregate") ||
        stristr_found(sql, "pg_cast") || stristr_found(sql, "pg_auth")) {
        result_add_column(rs, "oid", PG_OID_INT4);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    /* Before falling through to the catch-all, check if the SQL
     * references a user table via pg_catalog.<tablename> syntax.
     * If so, return 0 to let the query be handled by the EvoSQL parser. */
    {
        DatabaseDesc dbDescChk;
        SchemaDesc schDescChk;
        int have_schema = (cat_find_database(db_get_current_database(), &dbDescChk) == 0 &&
                           cat_find_schema(dbDescChk.db_id, db_get_current_schema(), &schDescChk) == 0);
        const char *pc = sql;
        while ((pc = strcasestr_local(pc, "pg_catalog.")) != NULL) {
            const char *tbl = pc + 11; /* skip "pg_catalog." */
            /* Extract table name */
            char candidate[256];
            int ci = 0;
            while (tbl[ci] && (isalnum((unsigned char)tbl[ci]) || tbl[ci] == '_') && ci < 255) {
                candidate[ci] = tbl[ci];
                ci++;
            }
            candidate[ci] = '\0';
            if (ci > 0 && have_schema) {
                /* Check if this is a user table via catalog */
                TableDesc tDesc;
                if (cat_find_table(schDescChk.schema_id, candidate, &tDesc) == 0) {
                    /* This is a user table, not a system table */
                    return 0;
                }
            }
            pc = tbl; /* advance past this occurrence */
        }
    }

    /* Generic catch-all: any other pg_ query returns empty SELECT */
    result_add_column(rs, "oid", PG_OID_INT4);
    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
    return 1;
}

/* ----------------------------------------------------------------
 *  information_schema dispatch
 * ---------------------------------------------------------------- */
static int handle_information_schema(const char *sql, ResultSet *rs)
{
    if (stristr_found(sql, "information_schema.tables") ||
        stristr_found(sql, "information_schema.\"tables\"")) {
        return catalog_list_tables(rs);
    }

    if (stristr_found(sql, "information_schema.columns") ||
        stristr_found(sql, "information_schema.\"columns\"")) {
        return catalog_list_all_columns(rs);
    }

    if (stristr_found(sql, "information_schema.schemata")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "catalog_name", PG_OID_TEXT);
        result_add_column(rs, "schema_name", PG_OID_TEXT);
        result_add_column(rs, "schema_owner", PG_OID_TEXT);

        int schcount = 0;

        /* System schemas */
        int row0 = result_add_row(rs);
        result_set_field(rs, row0, 0, "evosql");
        result_set_field(rs, row0, 1, "pg_catalog");
        result_set_field(rs, row0, 2, "evosql");
        schcount++;

        int row1 = result_add_row(rs);
        result_set_field(rs, row1, 0, "evosql");
        result_set_field(rs, row1, 1, "information_schema");
        result_set_field(rs, row1, 2, "evosql");
        schcount++;

        /* User schemas from catalog */
        DatabaseDesc dbDescSch;
        if (cat_find_database(db_get_current_database(), &dbDescSch) == 0) {
            SchemaDesc schemas[32];
            int ns = cat_list_schemas(dbDescSch.db_id, schemas, 32);
            for (int i = 0; i < ns; i++) {
                int r = result_add_row(rs);
                result_set_field(rs, r, 0, "evosql");
                result_set_field(rs, r, 1, schemas[i].schema_name);
                result_set_field(rs, r, 2, "evosql");
                schcount++;
            }
        }

        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", schcount);
        return 1;
    }

    /* information_schema.table_constraints */
    if (stristr_found(sql, "table_constraints")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "constraint_catalog", PG_OID_TEXT);
        result_add_column(rs, "constraint_schema", PG_OID_TEXT);
        result_add_column(rs, "constraint_name", PG_OID_TEXT);
        result_add_column(rs, "table_catalog", PG_OID_TEXT);
        result_add_column(rs, "table_schema", PG_OID_TEXT);
        result_add_column(rs, "table_name", PG_OID_TEXT);
        result_add_column(rs, "constraint_type", PG_OID_TEXT);
        result_add_column(rs, "is_deferrable", PG_OID_TEXT);
        result_add_column(rs, "initially_deferred", PG_OID_TEXT);

        int tccount = 0;
        DatabaseDesc dbDescTC;
        if (cat_find_database(db_get_current_database(), &dbDescTC) == 0) {
            SchemaDesc schemas[32];
            int ns = cat_list_schemas(dbDescTC.db_id, schemas, 32);
            for (int si = 0; si < ns; si++) {
                TableDesc tables[256];
                int nt = cat_list_tables(schemas[si].schema_id, tables, 256);
                for (int ti = 0; ti < nt; ti++) {
                    ConstraintDesc cons[64];
                    int ncons = cat_list_constraints(tables[ti].table_id, cons, 64);
                    for (int ci = 0; ci < ncons; ci++) {
                        char conname[256];
                        const char *contype_str = "CHECK";

                        if (cons[ci].constraint_name[0] != '\0') {
                            strncpy(conname, cons[ci].constraint_name, sizeof(conname) - 1);
                            conname[sizeof(conname) - 1] = '\0';
                        } else {
                            switch (cons[ci].constraint_type) {
                                case 'P': snprintf(conname, sizeof(conname), "%s_pkey", tables[ti].table_name); break;
                                case 'U': snprintf(conname, sizeof(conname), "%s_uq_%d", tables[ti].table_name, ci); break;
                                case 'C': snprintf(conname, sizeof(conname), "%s_check_%d", tables[ti].table_name, ci); break;
                                case 'F': snprintf(conname, sizeof(conname), "%s_fkey_%d", tables[ti].table_name, ci); break;
                                default:  snprintf(conname, sizeof(conname), "%s_con_%d", tables[ti].table_name, ci); break;
                            }
                        }

                        switch (cons[ci].constraint_type) {
                            case 'P': contype_str = "PRIMARY KEY"; break;
                            case 'U': contype_str = "UNIQUE"; break;
                            case 'C': contype_str = "CHECK"; break;
                            case 'F': contype_str = "FOREIGN KEY"; break;
                        }

                        int r = result_add_row(rs);
                        if (r < 0) break;
                        result_set_field(rs, r, 0, "evosql");
                        result_set_field(rs, r, 1, schemas[si].schema_name);
                        result_set_field(rs, r, 2, conname);
                        result_set_field(rs, r, 3, "evosql");
                        result_set_field(rs, r, 4, schemas[si].schema_name);
                        result_set_field(rs, r, 5, tables[ti].table_name);
                        result_set_field(rs, r, 6, contype_str);
                        result_set_field(rs, r, 7, "NO");
                        result_set_field(rs, r, 8, "NO");
                        tccount++;
                    }
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", tccount);
        return 1;
    }

    /* Other information_schema queries — return empty */
    if (stristr_found(sql, "information_schema.")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "result", PG_OID_TEXT);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    return 0;
}

/* ----------------------------------------------------------------
 *  GRANT / REVOKE privilege management
 *
 *  GRANT priv[,priv] ON DATABASE|SCHEMA|TABLE name TO user [WITH GRANT OPTION]
 *  REVOKE priv[,priv] ON DATABASE|SCHEMA|TABLE name FROM user
 * ---------------------------------------------------------------- */
static int handle_grant_revoke(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    const char *p = sql;
    while (*p && isspace((unsigned char)*p)) p++;

    int is_grant  = (strncasecmp(p, "GRANT",  5) == 0 && isspace((unsigned char)p[5]));
    int is_revoke = (strncasecmp(p, "REVOKE", 6) == 0 && isspace((unsigned char)p[6]));
    if (!is_grant && !is_revoke) return 0;

    /* Only admin (or users with GRANT OPTION) can run GRANT/REVOKE.
     * For simplicity, check admin first — GRANT OPTION checked later. */
    const char *caller = ctx ? ctx->username : "admin";

    p += is_grant ? 5 : 6;
    while (*p && isspace((unsigned char)*p)) p++;

    /* Parse privilege list (everything before ON keyword) */
    char priv_buf[512] = "";
    {
        /* Find the ON keyword (as a separate word) */
        const char *on_pos = p;
        while (*on_pos) {
            if (strncasecmp(on_pos, "ON", 2) == 0 &&
                (on_pos == p || isspace((unsigned char)on_pos[-1])) &&
                isspace((unsigned char)on_pos[2]))
                break;
            on_pos++;
        }
        if (!*on_pos) {
            result_init(rs);
            result_set_error(rs, "42601",
                is_grant ? "Syntax: GRANT priv[,priv] ON DATABASE|SCHEMA|TABLE name TO user [WITH GRANT OPTION]"
                         : "Syntax: REVOKE priv[,priv] ON DATABASE|SCHEMA|TABLE name FROM user");
            return 1;
        }
        int len = (int)(on_pos - p);
        if (len >= (int)sizeof(priv_buf)) len = (int)sizeof(priv_buf) - 1;
        memcpy(priv_buf, p, len);
        priv_buf[len] = '\0';
        /* Trim trailing whitespace */
        while (len > 0 && isspace((unsigned char)priv_buf[len - 1]))
            priv_buf[--len] = '\0';

        p = on_pos + 2; /* skip "ON" */
    }
    while (*p && isspace((unsigned char)*p)) p++;

    /* Parse scope type: DATABASE | SCHEMA | TABLE */
    int scope_type = 0;
    if (strncasecmp(p, "DATABASE", 8) == 0 && isspace((unsigned char)p[8])) {
        scope_type = 1; p += 8;
    } else if (strncasecmp(p, "SCHEMA", 6) == 0 && isspace((unsigned char)p[6])) {
        scope_type = 2; p += 6;
    } else if (strncasecmp(p, "TABLE", 5) == 0 && isspace((unsigned char)p[5])) {
        scope_type = 3; p += 5;
    } else {
        result_init(rs);
        result_set_error(rs, "42601", "Expected DATABASE, SCHEMA, or TABLE after ON");
        return 1;
    }
    while (*p && isspace((unsigned char)*p)) p++;

    /* Parse scope name (may be quoted or unquoted) */
    char scope_name[256] = "";
    {
        int ni = 0;
        if (*p == '\'') {
            p++;
            while (*p && *p != '\'' && ni < 255) scope_name[ni++] = *p++;
            if (*p == '\'') p++;
        } else if (*p == '"') {
            p++;
            while (*p && *p != '"' && ni < 255) scope_name[ni++] = *p++;
            if (*p == '"') p++;
        } else {
            while (*p && !isspace((unsigned char)*p) && *p != ';' && ni < 255)
                scope_name[ni++] = *p++;
        }
        scope_name[ni] = '\0';
    }
    while (*p && isspace((unsigned char)*p)) p++;

    /* Parse TO/FROM keyword and target user */
    char target_user[256] = "";
    if (is_grant) {
        if (strncasecmp(p, "TO", 2) != 0 || !isspace((unsigned char)p[2])) {
            result_init(rs);
            result_set_error(rs, "42601", "Expected TO after scope name");
            return 1;
        }
        p += 2;
    } else {
        if (strncasecmp(p, "FROM", 4) != 0 || !isspace((unsigned char)p[4])) {
            result_init(rs);
            result_set_error(rs, "42601", "Expected FROM after scope name");
            return 1;
        }
        p += 4;
    }
    while (*p && isspace((unsigned char)*p)) p++;

    {
        int ui = 0;
        if (*p == '\'') {
            p++;
            while (*p && *p != '\'' && ui < 255) target_user[ui++] = *p++;
            if (*p == '\'') p++;
        } else {
            while (*p && !isspace((unsigned char)*p) && *p != ';' && ui < 255)
                target_user[ui++] = *p++;
        }
        target_user[ui] = '\0';
    }
    while (*p && isspace((unsigned char)*p)) p++;

    /* Check WITH GRANT OPTION (only for GRANT) */
    int with_grant_option = 0;
    if (is_grant && strncasecmp(p, "WITH", 4) == 0) {
        const char *wp = p + 4;
        while (*wp && isspace((unsigned char)*wp)) wp++;
        if (strncasecmp(wp, "GRANT", 5) == 0) {
            wp += 5;
            while (*wp && isspace((unsigned char)*wp)) wp++;
            if (strncasecmp(wp, "OPTION", 6) == 0) {
                with_grant_option = 1;
            }
        }
    }

    /* Authorization check:
     * - admin can always GRANT/REVOKE
     * - non-admin needs GRANT OPTION on the same scope to delegate */
    if (strcasecmp(caller, "admin") != 0) {
        /* Check the caller has all privileges being granted with GRANT OPTION */
        int has_option = HasGrantOption(caller, scope_type, scope_name, priv_buf);
        if (!has_option) {
            result_init(rs);
            result_set_error(rs, "42501",
                "Permission denied: you need WITH GRANT OPTION to delegate privileges");
            return 1;
        }
    }

    /* Execute */
    result_init(rs);
    if (is_grant) {
        if (GrantPrivilege(target_user, scope_type, scope_name,
                           priv_buf, with_grant_option) == 0) {
            snprintf(rs->command_tag, sizeof(rs->command_tag), "GRANT");
        } else {
            result_set_error(rs, "42501", g_gui_error_msg);
            g_gui_error = 0;
        }
    } else {
        if (RevokePrivilege(target_user, scope_type, scope_name, priv_buf) == 0) {
            snprintf(rs->command_tag, sizeof(rs->command_tag), "REVOKE");
        } else {
            result_set_error(rs, "42501", g_gui_error_msg);
            g_gui_error = 0;
        }
    }
    return 1;
}

/* ----------------------------------------------------------------
 *  User management: CREATE/DROP/ALTER USER
 * ---------------------------------------------------------------- */
static int handle_user_mgmt(const char *sql, ResultSet *rs)
{
    const char *p = sql;
    while (*p && isspace((unsigned char)*p)) p++;

    /* CREATE USER <name> PASSWORD '<pass>' */
    if (strncasecmp(p, "CREATE USER", 11) == 0 && isspace((unsigned char)p[11])) {
        p += 11;
        while (*p && isspace((unsigned char)*p)) p++;

        /* Extract username */
        char username[256];
        int ui = 0;
        while (*p && !isspace((unsigned char)*p) && ui < 255)
            username[ui++] = *p++;
        username[ui] = '\0';

        /* Expect PASSWORD keyword */
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "PASSWORD", 8) != 0) {
            result_init(rs);
            result_set_error(rs, "42601", "Syntax: CREATE USER <name> PASSWORD '<pass>'");
            return 1;
        }
        p += 8;
        while (*p && isspace((unsigned char)*p)) p++;

        /* Extract password (may be quoted) */
        char password[256];
        int pi = 0;
        if (*p == '\'') {
            p++;
            while (*p && *p != '\'' && pi < 255)
                password[pi++] = *p++;
            if (*p == '\'') p++;
        } else {
            while (*p && !isspace((unsigned char)*p) && *p != ';' && pi < 255)
                password[pi++] = *p++;
        }
        password[pi] = '\0';

        result_init(rs);
        if (CreateUserProcess(username, password) == 0) {
            snprintf(rs->command_tag, sizeof(rs->command_tag), "CREATE USER");
        } else {
            result_set_error(rs, "42710", g_gui_error_msg);
            g_gui_error = 0;
        }
        evo_secure_wipe(password, sizeof(password));
        return 1;
    }

    /* DROP USER <name> */
    if (strncasecmp(p, "DROP USER", 9) == 0 && isspace((unsigned char)p[9])) {
        p += 9;
        while (*p && isspace((unsigned char)*p)) p++;

        char username[256];
        int ui = 0;
        while (*p && !isspace((unsigned char)*p) && *p != ';' && ui < 255)
            username[ui++] = *p++;
        username[ui] = '\0';

        result_init(rs);
        if (DropUserProcess(username) == 0) {
            DropUserGrants(username);   /* Also remove all grants for this user */
            snprintf(rs->command_tag, sizeof(rs->command_tag), "DROP USER");
        } else {
            result_set_error(rs, "42704", g_gui_error_msg);
            g_gui_error = 0;
        }
        return 1;
    }

    /* ALTER USER <name> PASSWORD '<newpass>' */
    if (strncasecmp(p, "ALTER USER", 10) == 0 && isspace((unsigned char)p[10])) {
        p += 10;
        while (*p && isspace((unsigned char)*p)) p++;

        char username[256];
        int ui = 0;
        while (*p && !isspace((unsigned char)*p) && ui < 255)
            username[ui++] = *p++;
        username[ui] = '\0';

        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "PASSWORD", 8) != 0) {
            result_init(rs);
            result_set_error(rs, "42601", "Syntax: ALTER USER <name> PASSWORD '<newpass>'");
            return 1;
        }
        p += 8;
        while (*p && isspace((unsigned char)*p)) p++;

        char password[256];
        int pi = 0;
        if (*p == '\'') {
            p++;
            while (*p && *p != '\'' && pi < 255)
                password[pi++] = *p++;
            if (*p == '\'') p++;
        } else {
            while (*p && !isspace((unsigned char)*p) && *p != ';' && pi < 255)
                password[pi++] = *p++;
        }
        password[pi] = '\0';

        result_init(rs);
        if (AlterUserPasswordProcess(username, password) == 0) {
            snprintf(rs->command_tag, sizeof(rs->command_tag), "ALTER USER");
        } else {
            result_set_error(rs, "42704", g_gui_error_msg);
            g_gui_error = 0;
        }
        evo_secure_wipe(password, sizeof(password));
        return 1;
    }

    return 0;
}

/* ----------------------------------------------------------------
 *  Main dispatch
 * ---------------------------------------------------------------- */
int catalog_try_handle(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    /* Empty or whitespace-only query */
    {
        const char *p = sql;
        while (*p && isspace((unsigned char)*p)) p++;
        if (*p == '\0' || *p == ';') {
            result_init(rs);
            strcpy(rs->command_tag, "");
            return 1;
        }
    }

    /* User management: CREATE/DROP/ALTER USER */
    if (handle_user_mgmt(sql, rs)) return 1;

    /* GRANT / REVOKE */
    if (handle_grant_revoke(sql, rs, ctx)) return 1;

    /* SET */
    if (handle_set(sql, rs, ctx)) return 1;

    /* SHOW */
    if (handle_show(sql, rs, ctx)) return 1;

    /* Transaction commands */
    if (handle_transaction(sql, rs, ctx)) return 1;

    /* Built-in functions: version(), current_database(), etc. */
    if (starts_with_i(sql, "SELECT") || starts_with_i(sql, "select")) {
        if (handle_builtin_functions(sql, rs)) return 1;
    }

    /* pg_catalog queries */
    if (stristr_found(sql, "pg_catalog") || stristr_found(sql, "pg_")) {
        if (handle_pg_catalog(sql, rs, ctx)) return 1;
    }

    /* information_schema queries */
    if (stristr_found(sql, "information_schema")) {
        if (handle_information_schema(sql, rs)) return 1;
    }

    /* Not a catalog query */
    return 0;
}
