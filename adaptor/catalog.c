#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/time.h>
#include <time.h>
#include "platform.h"
#include "catalog.h"
#include "../evolution/db/database.h"
#include "../evolution/db/crypto.h"
#include "../evolution/db/catalog_internal.h"
#include "../evolution/db/table_api.h"
#include "../evolution/db/mvcc.h"
#include "../evolution/db/buffer_pool.h"
#include "../evolution/db/wal.h"   /* wal_get_current_lsn */
#include "xa_transaction.h"
#include "server.h"       /* session_register/list/cancel */
#include "replication.h"  /* ReplicationStatus, repl_get_status */

/* Task 91 — Feature #62: forward-declare pending-notify helpers
 * to avoid pulling query_executor.h (which includes tls.h → OpenSSL
 * and clashes with engine's crypto.h SHA256_CTX typedef). */
void notify_flush_commit(SessionCtx *ctx);
void notify_discard_pending(SessionCtx *ctx, int below_depth);

/* Forward declarations */
static void close_all_session_cursors(SessionCtx *ctx);
static int handle_cursor(const char *sql, ResultSet *rs, SessionCtx *ctx);

/* From main.c — connection limit accessors */
extern int  get_max_connections(void);
extern void set_max_connections(int n);
extern int  get_active_connections(void);

/* From server.c — parser mutex for SERIALIZABLE isolation */
extern rwlock_t g_parse_lock;

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

    /* SET @var = expr — user variables */
    {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        if (*p == '@') {
            p++; /* skip @ */
            char varname[128] = "";
            int vi = 0;
            while (*p && (isalnum((unsigned char)*p) || *p == '_') && vi < 127)
                varname[vi++] = *p++;
            varname[vi] = '\0';
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p == '=') {
                p++;
                while (*p && isspace((unsigned char)*p)) p++;
                /* Evaluate the RHS value — simple: strip quotes, or use as literal */
                char value[256] = "";
                if (*p == '\'') {
                    p++;
                    int vl = 0;
                    while (*p && *p != '\'' && vl < 255) value[vl++] = *p++;
                    value[vl] = '\0';
                } else {
                    /* Numeric or expression — try simple eval */
                    strncpy(value, p, 255);
                    value[255] = '\0';
                    /* Trim trailing semicolon/whitespace */
                    int vl = (int)strlen(value);
                    while (vl > 0 && (value[vl-1] == ';' || isspace((unsigned char)value[vl-1])))
                        value[--vl] = '\0';
                    /* Simple arithmetic: try to evaluate */
                    char *endp;
                    double d = strtod(value, &endp);
                    if (*endp == '\0' && value[0] != '\0') {
                        if (d == (double)(long long)d)
                            snprintf(value, sizeof(value), "%lld", (long long)d);
                        else
                            snprintf(value, sizeof(value), "%g", d);
                    }
                    /* Handle simple expressions: a + b, a - b, etc. */
                    char *plus = strchr(value, '+');
                    char *minus = strrchr(value, '-');
                    if (plus && plus != value) {
                        double a = strtod(value, NULL);
                        double b = strtod(plus + 1, NULL);
                        snprintf(value, sizeof(value), "%g", a + b);
                    } else if (minus && minus != value && *(minus-1) != 'e' && *(minus-1) != 'E') {
                        double a = strtod(value, NULL);
                        double b = strtod(minus + 1, NULL);
                        snprintf(value, sizeof(value), "%g", a - b);
                    }
                }
                if (ctx && varname[0]) {
                    /* Find or create variable slot */
                    int slot = -1;
                    for (int i = 0; i < ctx->user_var_count; i++) {
                        if (strcasecmp(ctx->user_var_names[i], varname) == 0) {
                            slot = i; break;
                        }
                    }
                    if (slot < 0 && ctx->user_var_count < 64) {
                        slot = ctx->user_var_count++;
                        strncpy(ctx->user_var_names[slot], varname, 127);
                        ctx->user_var_names[slot][127] = '\0';
                    }
                    if (slot >= 0) {
                        strncpy(ctx->user_var_values[slot], value, 255);
                        ctx->user_var_values[slot][255] = '\0';
                    }
                }
                strcpy(rs->command_tag, "SET");
                return 1;
            }
        }
    }

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

    /* SET evo_statement_timeout = N (ms, 0 = disabled)
     * Also accepts alias: SET statement_timeout = N */
    {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        int is_timeout = 0;
        if (strncasecmp(p, "evo_statement_timeout", 21) == 0) {
            p += 21; is_timeout = 1;
        } else if (strncasecmp(p, "statement_timeout", 17) == 0) {
            p += 17; is_timeout = 1;
        }
        if (is_timeout) {
            while (*p && (isspace((unsigned char)*p) || *p == '=' || *p == '\'')) p++;
            int val = atoi(p);
            if (ctx) ctx->statement_timeout_ms = (val >= 0) ? val : 0;
            result_init(rs);
            snprintf(rs->command_tag, sizeof(rs->command_tag), "SET");
            return 1;
        }
    }

    /* SET EVO_LOCK_TIMEOUT = N (ms, 0 = use default 5000ms) */
    {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "evo_lock_timeout", 16) == 0) {
            p += 16;
            while (*p && (isspace((unsigned char)*p) || *p == '=' || *p == '\'')) p++;
            int val = atoi(p);
            if (ctx) ctx->evo_lock_timeout_ms = (val >= 0) ? val : 0;
            result_init(rs);
            snprintf(rs->command_tag, sizeof(rs->command_tag), "SET");
            return 1;
        }
    }

    /* SET EVO_IDLE_TIMEOUT = N (ms, 0 = disabled) */
    {
        const char *p = sql + 3;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "evo_idle_timeout", 16) == 0) {
            p += 16;
            while (*p && (isspace((unsigned char)*p) || *p == '=' || *p == '\'')) p++;
            int val = atoi(p);
            if (ctx) ctx->evo_idle_timeout_ms = (val >= 0) ? val : 0;
            result_init(rs);
            snprintf(rs->command_tag, sizeof(rs->command_tag), "SET");
            return 1;
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

    /* ── SHOW VIEWS ── */
    if (stristr_found(sql, "views")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "view_name", PG_OID_TEXT);
        result_add_column(rs, "view_sql", PG_OID_TEXT);
        DatabaseDesc vdb;
        if (ctx && cat_find_database(ctx->database, &vdb) == 0) {
            SchemaDesc vsch;
            if (cat_find_schema(vdb.db_id, ctx->schema, &vsch) == 0) {
                ViewDesc views[64];
                int nv = cat_list_views(vsch.schema_id, views, 64);
                for (int i = 0; i < nv; i++) {
                    int row = result_add_row(rs);
                    result_set_field(rs, row, 0, views[i].view_name);
                    result_set_field(rs, row, 1, views[i].view_sql);
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── SHOW CREATE VIEW name ── */
    if (strncasecmp(sql + 4, " CREATE VIEW", 12) == 0 ||
        strncasecmp(sql + 4, "  CREATE VIEW", 13) == 0) {
        const char *p = sql + 4;
        while (*p && isspace((unsigned char)*p)) p++;
        p += 6; /* skip CREATE */
        while (*p && isspace((unsigned char)*p)) p++;
        p += 4; /* skip VIEW */
        while (*p && isspace((unsigned char)*p)) p++;
        char vname[128] = "";
        int vi = 0;
        while (*p && (isalnum((unsigned char)*p) || *p == '_') && vi < 127)
            vname[vi++] = *p++;
        vname[vi] = '\0';

        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "View", PG_OID_TEXT);
        result_add_column(rs, "Create View", PG_OID_TEXT);

        if (ctx && vname[0]) {
            DatabaseDesc vdb;
            SchemaDesc vsch;
            if (cat_find_database(ctx->database, &vdb) == 0 &&
                cat_find_schema(vdb.db_id, ctx->schema, &vsch) == 0) {
                ViewDesc vd;
                if (cat_find_view(vdb.db_id, vsch.schema_id, vname, &vd) == 0) {
                    int row = result_add_row(rs);
                    result_set_field(rs, row, 0, vname);
                    char create_stmt[4200];
                    snprintf(create_stmt, sizeof(create_stmt),
                             "CREATE VIEW %s AS %s", vname, vd.view_sql);
                    result_set_field(rs, row, 1, create_stmt);
                } else {
                    result_set_error(rs, "42P01", "view does not exist");
                    return 1;
                }
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

    /* ── SHOW ROLES ── */
    if (stristr_found(sql, "roles")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "role_name", PG_OID_TEXT);

        char rolenames[64][256];
        int count = ListRoles(rolenames, 64);
        for (int i = 0; i < count; i++) {
            int row = result_add_row(rs);
            result_set_field(rs, row, 0, rolenames[i]);
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

    /* ── SHOW EVO_SESSIONS ── */
    if (stristr_found(sql, "evo_sessions")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "pid",       PG_OID_TEXT);
        result_add_column(rs, "username",  PG_OID_TEXT);
        result_add_column(rs, "database",  PG_OID_TEXT);
        result_add_column(rs, "state",     PG_OID_TEXT);
        result_add_column(rs, "duration_ms", PG_OID_TEXT);

        ActiveSession sessions[MAX_SESSIONS];
        int ns = session_list(sessions, MAX_SESSIONS);
        int64_t now = platform_now_ms();
        for (int i = 0; i < ns; i++) {
            int row = result_add_row(rs);
            char buf[64];
            snprintf(buf, sizeof(buf), "%d", sessions[i].session_id);
            result_set_field(rs, row, 0, buf);
            result_set_field(rs, row, 1,
                sessions[i].ctx ? sessions[i].ctx->username : "");
            result_set_field(rs, row, 2,
                sessions[i].ctx ? sessions[i].ctx->database : "");
            if (sessions[i].query_start_ms > 0) {
                result_set_field(rs, row, 3, "active");
                snprintf(buf, sizeof(buf), "%lld",
                         (long long)(now - sessions[i].query_start_ms));
            } else {
                result_set_field(rs, row, 3, "idle");
                snprintf(buf, sizeof(buf), "0");
            }
            result_set_field(rs, row, 4, buf);
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── SHOW EVO_PROCESSES ── */
    if (stristr_found(sql, "evo_processes")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "pid",       PG_OID_TEXT);
        result_add_column(rs, "username",  PG_OID_TEXT);
        result_add_column(rs, "database",  PG_OID_TEXT);
        result_add_column(rs, "state",     PG_OID_TEXT);
        result_add_column(rs, "duration_ms", PG_OID_TEXT);
        result_add_column(rs, "query",     PG_OID_TEXT);

        ActiveSession sessions[MAX_SESSIONS];
        int ns = session_list(sessions, MAX_SESSIONS);
        int64_t now = platform_now_ms();
        for (int i = 0; i < ns; i++) {
            int row = result_add_row(rs);
            char buf[64];
            snprintf(buf, sizeof(buf), "%d", sessions[i].session_id);
            result_set_field(rs, row, 0, buf);
            result_set_field(rs, row, 1,
                sessions[i].ctx ? sessions[i].ctx->username : "");
            result_set_field(rs, row, 2,
                sessions[i].ctx ? sessions[i].ctx->database : "");
            if (sessions[i].query_start_ms > 0) {
                result_set_field(rs, row, 3, "active");
                snprintf(buf, sizeof(buf), "%lld",
                         (long long)(now - sessions[i].query_start_ms));
            } else {
                result_set_field(rs, row, 3, "idle");
                snprintf(buf, sizeof(buf), "0");
            }
            result_set_field(rs, row, 4, buf);
            result_set_field(rs, row, 5, sessions[i].current_query);
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── SHOW REPLICATION STATUS ── per-slot view (Task 97 v1) ── */
    if (stristr_found(sql, "replication") &&
        stristr_found(sql, "status") &&
        !stristr_found(sql, "cluster")) {
        ReplicationStatus st;
        memset(&st, 0, sizeof(st));
        repl_get_status(&st);

        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "role",          PG_OID_TEXT);
        result_add_column(rs, "replica_id",    PG_OID_TEXT);
        result_add_column(rs, "my_lsn",        PG_OID_INT8);
        result_add_column(rs, "confirmed_lsn", PG_OID_INT8);
        result_add_column(rs, "lag_bytes",     PG_OID_INT8);
        result_add_column(rs, "active",        PG_OID_BOOL);
        result_add_column(rs, "last_seen_us",  PG_OID_INT8);

        const char *role_name =
            st.role == REPL_ROLE_REPLICA ? "replica" :
            st.role == REPL_ROLE_WITNESS ? "witness" : "primary";

        if (st.num_replicas == 0) {
            int r = result_add_row(rs);
            result_set_field(rs, r, 0, role_name);
            result_set_field(rs, r, 1, "");
            char b[32];
            snprintf(b, sizeof(b), "%u", st.my_lsn);
            result_set_field(rs, r, 2, b);
            result_set_field(rs, r, 3, "0");
            result_set_field(rs, r, 4, "0");
            result_set_field(rs, r, 5, "f");
            result_set_field(rs, r, 6, "0");
        } else {
            for (int i = 0; i < st.num_replicas; i++) {
                int r = result_add_row(rs);
                char b[64];
                result_set_field(rs, r, 0, role_name);
                result_set_field(rs, r, 1, st.slots[i].replica_id);
                snprintf(b, sizeof(b), "%u", st.my_lsn);
                result_set_field(rs, r, 2, b);
                snprintf(b, sizeof(b), "%u", st.slots[i].confirmed_lsn);
                result_set_field(rs, r, 3, b);
                uint32_t lag = (st.my_lsn > st.slots[i].confirmed_lsn)
                    ? (st.my_lsn - st.slots[i].confirmed_lsn) : 0;
                snprintf(b, sizeof(b), "%u", lag);
                result_set_field(rs, r, 4, b);
                result_set_field(rs, r, 5, st.slots[i].active ? "t" : "f");
                snprintf(b, sizeof(b), "%lld", (long long)st.slots[i].last_seen);
                result_set_field(rs, r, 6, b);
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* ── SHOW REPLICATION LAG ── compact lag-per-slot view ── */
    if (stristr_found(sql, "replication") && stristr_found(sql, "lag")) {
        ReplicationStatus st;
        memset(&st, 0, sizeof(st));
        repl_get_status(&st);

        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "replica_id", PG_OID_TEXT);
        result_add_column(rs, "lag_bytes",  PG_OID_INT8);

        for (int i = 0; i < st.num_replicas; i++) {
            int r = result_add_row(rs);
            result_set_field(rs, r, 0, st.slots[i].replica_id);
            char b[32];
            uint32_t lag = (st.my_lsn > st.slots[i].confirmed_lsn)
                ? (st.my_lsn - st.slots[i].confirmed_lsn) : 0;
            snprintf(b, sizeof(b), "%u", lag);
            result_set_field(rs, r, 1, b);
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
    } else if (stristr_found(sql, "evo_statement_timeout") ||
               stristr_found(sql, "statement_timeout")) {
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", ctx ? ctx->statement_timeout_ms : 0);
        result_set_field(rs, row, 0, buf);
    } else if (stristr_found(sql, "evo_lock_timeout")) {
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", ctx ? ctx->evo_lock_timeout_ms : 0);
        result_set_field(rs, row, 0, buf);
    } else if (stristr_found(sql, "evo_idle_timeout")) {
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", ctx ? ctx->evo_idle_timeout_ms : 0);
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
    else if (stristr_found(sql, "cluster") || stristr_found(sql, "replication_status")) {
        /* SHOW CLUSTER STATUS / SHOW REPLICATION STATUS */
        extern int raft_get_role(void);
        extern uint32_t raft_get_term(void);
        extern int raft_get_leader_id(void);
        extern void raft_get_lag(uint32_t *, uint32_t *, int *);
        rs->num_rows = 0; rs->num_cols = 0;
        result_add_column(rs, "role", PG_OID_TEXT);
        result_add_column(rs, "term", PG_OID_TEXT);
        result_add_column(rs, "leader_id", PG_OID_TEXT);
        result_add_column(rs, "my_lsn", PG_OID_TEXT);
        row = result_add_row(rs);
        int raft_role = raft_get_role();
        result_set_field(rs, row, 0,
            raft_role == 2 ? "LEADER" : raft_role == 1 ? "CANDIDATE" : "FOLLOWER");
        char b2[32];
        snprintf(b2, sizeof(b2), "%u", raft_get_term());
        result_set_field(rs, row, 1, b2);
        snprintf(b2, sizeof(b2), "%d", raft_get_leader_id());
        result_set_field(rs, row, 2, b2);
        uint32_t my_lsn2; uint32_t lags2[7]; int nn2;
        raft_get_lag(&my_lsn2, lags2, &nn2);
        snprintf(b2, sizeof(b2), "%u", my_lsn2);
        result_set_field(rs, row, 3, b2);
    } else if (stristr_found(sql, "buffer_pool_stats")) {
        /* SHOW buffer_pool_stats — detailed hit rate and I/O stats */
        extern int server_get_buffer_pool_pages(void);
        rs->num_rows = 0; rs->num_cols = 0;
        result_add_column(rs, "pool_pages", PG_OID_TEXT);
        result_add_column(rs, "pool_mb", PG_OID_TEXT);
        result_add_column(rs, "hits", PG_OID_TEXT);
        result_add_column(rs, "misses", PG_OID_TEXT);
        result_add_column(rs, "hit_rate", PG_OID_TEXT);
        result_add_column(rs, "evictions", PG_OID_TEXT);
        result_add_column(rs, "flushes", PG_OID_TEXT);
        BPStats stats;
        bp_get_stats(&stats);
        int pages = server_get_buffer_pool_pages();
        row = result_add_row(rs);
        char b[64];
        snprintf(b, sizeof(b), "%d", pages); result_set_field(rs, row, 0, b);
        snprintf(b, sizeof(b), "%d", pages * 4 / 1024); result_set_field(rs, row, 1, b);
        snprintf(b, sizeof(b), "%lu", stats.hits); result_set_field(rs, row, 2, b);
        snprintf(b, sizeof(b), "%lu", stats.misses); result_set_field(rs, row, 3, b);
        unsigned long total = stats.hits + stats.misses;
        if (total > 0)
            snprintf(b, sizeof(b), "%.1f%%", (double)stats.hits * 100.0 / total);
        else
            snprintf(b, sizeof(b), "N/A");
        result_set_field(rs, row, 4, b);
        snprintf(b, sizeof(b), "%lu", stats.evictions); result_set_field(rs, row, 5, b);
        snprintf(b, sizeof(b), "%lu", stats.flushes); result_set_field(rs, row, 6, b);
    } else if (stristr_found(sql, "buffer_pool_size") ||
               stristr_found(sql, "shared_buffers") ||          /* PostgreSQL */
               stristr_found(sql, "innodb_buffer_pool_size") || /* MySQL */
               stristr_found(sql, "db_cache_size")) {           /* Oracle */
        extern int server_get_buffer_pool_pages(void);
        int pages = server_get_buffer_pool_pages();
        char buf[64];
        snprintf(buf, sizeof(buf), "%d MB (%d pages)", pages * 4 / 1024, pages);
        result_set_field(rs, row, 0, buf);
    } else
        result_set_field(rs, row, 0, "");

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
    return 1;
}

/* ── KILL QUERY <pid> — cancel a running query by session ID ── */
static int handle_kill(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    if (!starts_with_i(sql, "KILL"))
        return 0;

    const char *p = sql + 4;
    while (*p && isspace((unsigned char)*p)) p++;

    /* KILL QUERY <pid> */
    if (strncasecmp(p, "QUERY", 5) == 0) {
        p += 5;
        while (*p && isspace((unsigned char)*p)) p++;
        int target_pid = atoi(p);
        if (target_pid <= 0) {
            result_init(rs);
            result_set_error(rs, "22023", "invalid session pid");
            return 1;
        }
        int found = session_cancel(target_pid);
        result_init(rs);
        if (found) {
            snprintf(rs->command_tag, sizeof(rs->command_tag), "KILL");
        } else {
            result_set_error(rs, "HY000", "session not found");
        }
        return 1;
    }

    /* KILL <pid> — alias for KILL QUERY <pid> */
    {
        int target_pid = atoi(p);
        if (target_pid > 0) {
            int found = session_cancel(target_pid);
            result_init(rs);
            if (found) {
                snprintf(rs->command_tag, sizeof(rs->command_tag), "KILL");
            } else {
                result_set_error(rs, "HY000", "session not found");
            }
            return 1;
        }
    }

    return 0;
}

/* ---- XA helper: extract XID string from "XA <CMD> 'xid'" ---- */
static const char *xa_extract_xid(const char *sql, int skip_words)
{
    const char *p = sql;
    for (int w = 0; w < skip_words; w++) {
        while (*p && isspace((unsigned char)*p)) p++;
        while (*p && !isspace((unsigned char)*p) && *p != '\'') p++;
    }
    while (*p && isspace((unsigned char)*p)) p++;
    if (*p == '\'') p++;
    return p;  /* points to start of xid (may end at '\'' or '\0') */
}

static int handle_xa(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    if (!starts_with_i(sql, "XA ")) return 0;
    if (!ctx) { result_init(rs); return 0; }

    result_init(rs);
    const char *cmd = sql + 3;
    while (*cmd && isspace((unsigned char)*cmd)) cmd++;

    /* XA START 'xid' */
    if (strncasecmp(cmd, "START", 5) == 0 || strncasecmp(cmd, "BEGIN", 5) == 0) {
        if (ctx->in_transaction || ctx->xa_state != 0) {
            rs->has_error = 1;
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "XA START: transaction already active");
            strcpy(rs->error_sqlstate, "25000");
            return 1;
        }
        /* Extract XID */
        const char *xid_start = xa_extract_xid(sql, 2);
        int xi = 0;
        while (xid_start[xi] && xid_start[xi] != '\'' && xid_start[xi] != ';'
               && xi < 127)
            ctx->xa_xid[xi] = xid_start[xi], xi++;
        ctx->xa_xid[xi] = '\0';

        /* Start transaction (same as BEGIN) */
        ctx->in_transaction = 1;
        ctx->tx_aborted = 0;
        if (ctx->undo_log) undo_log_free(ctx->undo_log);
        ctx->undo_log = undo_log_create();
        savepoint_stack_init(&ctx->savepoints);
        ctx->tx_xid = mvcc_assign_xid();
        mvcc_register_tx(ctx->tx_xid);
        mvcc_snapshot_take(&ctx->snapshot);
        ctx->snapshot.my_xid = ctx->tx_xid;
        ctx->snapshot_valid = 1;
        ctx->xa_state = 1; /* ACTIVE */

        snprintf(rs->command_tag, sizeof(rs->command_tag), "XA START");
        return 1;
    }

    /* XA END 'xid' */
    if (strncasecmp(cmd, "END", 3) == 0) {
        if (ctx->xa_state != 1) {
            rs->has_error = 1;
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "XA END: transaction not in ACTIVE state");
            strcpy(rs->error_sqlstate, "25000");
            return 1;
        }
        ctx->xa_state = 2; /* ENDED */
        snprintf(rs->command_tag, sizeof(rs->command_tag), "XA END");
        return 1;
    }

    /* XA PREPARE 'xid' */
    if (strncasecmp(cmd, "PREPARE", 7) == 0) {
        if (ctx->xa_state != 2) {
            rs->has_error = 1;
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "XA PREPARE: transaction not in ENDED state");
            strcpy(rs->error_sqlstate, "25000");
            return 1;
        }
        if (ctx->tx_aborted) {
            rs->has_error = 1;
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "XA PREPARE: transaction is aborted, must ROLLBACK");
            strcpy(rs->error_sqlstate, "25P02");
            return 1;
        }

        /* WAL flush for durability */
        {
            extern void bp_wal_flush_dirty(int fd);
            extern int pgm_get_fd(void);
            bp_wal_flush_dirty(pgm_get_fd());
        }

        /* Persist PREPARE record to disk (survives crash) */
        {
            extern int xa_persist_prepare(const char *, uint32_t);
            if (xa_persist_prepare(ctx->xa_xid, ctx->tx_xid) < 0) {
                rs->has_error = 1;
                snprintf(rs->error_message, sizeof(rs->error_message),
                         "XA PREPARE: too many prepared transactions");
                strcpy(rs->error_sqlstate, "54000");
                return 1;
            }
        }

        ctx->xa_state = 3; /* PREPARED */
        /* Don't commit or unregister yet — stays in prepared state */
        fprintf(stderr, "[XA] PREPARE '%s' (xid=%u)\n", ctx->xa_xid, ctx->tx_xid);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "XA PREPARE");
        return 1;
    }

    /* XA COMMIT 'xid' [ONE PHASE]
     * ONE PHASE: skip PREPARE, commit directly from ENDED state (MySQL/Oracle compat)
     * Normal: commit from PREPARED state (2PC) or ENDED state (1PC optimization) */
    if (strncasecmp(cmd, "COMMIT", 6) == 0) {
        if (ctx->xa_state != 3 && ctx->xa_state != 2) {
            /* Try to commit a previously prepared TX (different session) */
            const char *xid_start = xa_extract_xid(sql, 2);
            char xa_xid[128] = "";
            int xi = 0;
            while (xid_start[xi] && xid_start[xi] != '\'' && xid_start[xi] != ';'
                   && xi < 127)
                xa_xid[xi] = xid_start[xi], xi++;
            xa_xid[xi] = '\0';

            extern uint32_t xa_find_prepared(const char *);
            uint32_t mvcc_xid = xa_find_prepared(xa_xid);
            if (mvcc_xid == 0) {
                rs->has_error = 1;
                snprintf(rs->error_message, sizeof(rs->error_message),
                         "XA COMMIT: '%s' not found in prepared state", xa_xid);
                strcpy(rs->error_sqlstate, "25000");
                return 1;
            }
            /* Commit the prepared TX */
            uint32_t csn = pgm_next_csn();
            clog_set_committed_csn(mvcc_xid, csn);
            { extern void lock_release_all(uint32_t); lock_release_all(mvcc_xid);
              extern void lock_gap_release_all(uint32_t); lock_gap_release_all(mvcc_xid); }
            mvcc_unregister_tx(mvcc_xid);
            { extern int xa_remove_prepared(const char *); xa_remove_prepared(xa_xid);
              extern uint32_t wal_log_xa_resolve(const char *, int); wal_log_xa_resolve(xa_xid, 1); }
            fprintf(stderr, "[XA] COMMIT '%s' (xid=%u) — from prepared\n", xa_xid, mvcc_xid);
            snprintf(rs->command_tag, sizeof(rs->command_tag), "XA COMMIT");
            return 1;
        }

        /* Commit from current session */
        if (ctx->tx_xid > 0) {
            { extern void bp_wal_flush_dirty(int fd); extern int pgm_get_fd(void);
              bp_wal_flush_dirty(pgm_get_fd()); }
            uint32_t csn = pgm_next_csn();
            clog_set_committed_csn(ctx->tx_xid, csn);
            { extern void lock_release_all(uint32_t); lock_release_all(ctx->tx_xid);
              extern void lock_gap_release_all(uint32_t); lock_gap_release_all(ctx->tx_xid); }
            { extern void cg_unregister_tx(uint32_t); cg_unregister_tx(ctx->tx_xid); }
            mvcc_unregister_tx(ctx->tx_xid);
            { extern int xa_remove_prepared(const char *); xa_remove_prepared(ctx->xa_xid); }
        }
        if (ctx->undo_log) { undo_log_free(ctx->undo_log); ctx->undo_log = NULL; }
        notify_flush_commit(ctx);            /* Task 91: deliver pending NOTIFYs */
        ctx->in_transaction = 0;
        ctx->tx_aborted = 0;
        ctx->snapshot_valid = 0;
        ctx->xa_state = 0;
        ctx->xa_xid[0] = '\0';
        ctx->tx_xid = 0;
        fprintf(stderr, "[XA] COMMIT '%s'\n", ctx->xa_xid);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "XA COMMIT");
        return 1;
    }

    /* XA ROLLBACK 'xid' */
    if (strncasecmp(cmd, "ROLLBACK", 8) == 0) {
        if (ctx->xa_state == 0) {
            /* Try to rollback a previously prepared TX */
            const char *xid_start = xa_extract_xid(sql, 2);
            char xa_xid[128] = "";
            int xi = 0;
            while (xid_start[xi] && xid_start[xi] != '\'' && xid_start[xi] != ';'
                   && xi < 127)
                xa_xid[xi] = xid_start[xi], xi++;
            xa_xid[xi] = '\0';

            extern uint32_t xa_find_prepared(const char *);
            uint32_t mvcc_xid = xa_find_prepared(xa_xid);
            if (mvcc_xid == 0) {
                rs->has_error = 1;
                snprintf(rs->error_message, sizeof(rs->error_message),
                         "XA ROLLBACK: '%s' not found", xa_xid);
                strcpy(rs->error_sqlstate, "25000");
                return 1;
            }
            clog_set_aborted(mvcc_xid);
            { extern void lock_release_all(uint32_t); lock_release_all(mvcc_xid);
              extern void lock_gap_release_all(uint32_t); lock_gap_release_all(mvcc_xid); }
            mvcc_unregister_tx(mvcc_xid);
            { extern int xa_remove_prepared(const char *); xa_remove_prepared(xa_xid);
              extern uint32_t wal_log_xa_resolve(const char *, int); wal_log_xa_resolve(xa_xid, 0); }
            fprintf(stderr, "[XA] ROLLBACK '%s' (xid=%u) — from prepared\n", xa_xid, mvcc_xid);
            snprintf(rs->command_tag, sizeof(rs->command_tag), "XA ROLLBACK");
            return 1;
        }

        /* Rollback from current session */
        if (ctx->undo_log) undo_log_rollback(ctx->undo_log);
        if (ctx->tx_xid > 0) {
            clog_set_aborted(ctx->tx_xid);
            { extern void lock_release_all(uint32_t); lock_release_all(ctx->tx_xid);
              extern void lock_gap_release_all(uint32_t); lock_gap_release_all(ctx->tx_xid); }
            { extern void cg_unregister_tx(uint32_t); cg_unregister_tx(ctx->tx_xid); }
            mvcc_unregister_tx(ctx->tx_xid);
            { extern int xa_remove_prepared(const char *); xa_remove_prepared(ctx->xa_xid); }
        }
        if (ctx->undo_log) { undo_log_free(ctx->undo_log); ctx->undo_log = NULL; }
        ctx->in_transaction = 0;
        ctx->tx_aborted = 0;
        ctx->snapshot_valid = 0;
        ctx->xa_state = 0;
        ctx->xa_xid[0] = '\0';
        ctx->tx_xid = 0;
        snprintf(rs->command_tag, sizeof(rs->command_tag), "XA ROLLBACK");
        return 1;
    }

    /* XA RECOVER — list all prepared transactions (with timestamps) */
    if (strncasecmp(cmd, "RECOVER", 7) == 0) {
        rs->is_select = 1;
        result_add_column(rs, "xa_xid", PG_OID_TEXT);
        result_add_column(rs, "mvcc_xid", PG_OID_INT4);
        result_add_column(rs, "prepared_at", PG_OID_TEXT);
        result_add_column(rs, "age_seconds", PG_OID_INT4);

        XAPreparedRecord recs[XA_MAX_PREPARED];
        int n = xa_list_prepared(recs, XA_MAX_PREPARED);

        struct timeval now_tv;
        gettimeofday(&now_tv, NULL);
        int64_t now_us = (int64_t)now_tv.tv_sec * 1000000LL + now_tv.tv_usec;

        for (int i = 0; i < n; i++) {
            int row = result_add_row(rs);
            result_set_field(rs, row, 0, recs[i].xid);
            char buf[64];
            snprintf(buf, sizeof(buf), "%u", recs[i].mvcc_xid);
            result_set_field(rs, row, 1, buf);

            /* Timestamp as ISO string */
            if (recs[i].prepare_time > 0) {
                time_t sec = (time_t)(recs[i].prepare_time / 1000000);
                struct tm *tm = localtime(&sec);
                strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", tm);
                result_set_field(rs, row, 2, buf);
                int64_t age_sec = (now_us - recs[i].prepare_time) / 1000000;
                snprintf(buf, sizeof(buf), "%lld", (long long)age_sec);
                result_set_field(rs, row, 3, buf);
            } else {
                result_set_field(rs, row, 2, "unknown");
                result_set_field(rs, row, 3, "0");
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "XA RECOVER");
        return 1;
    }

    return 0;
}

static int handle_transaction(const char *sql, ResultSet *rs,
                              SessionCtx *ctx)
{
    /* XA commands first */
    if (starts_with_i(sql, "XA "))
        return handle_xa(sql, rs, ctx);

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
                /* MVCC: assign transaction ID and register as active */
                ctx->tx_xid = mvcc_assign_xid();
                mvcc_register_tx(ctx->tx_xid);
                ctx->snapshot_valid = 0;
                /* Take snapshot for REPEATABLE READ / SERIALIZABLE */
                if (ctx->isolation_level >= 2) {
                    mvcc_snapshot_take(&ctx->snapshot);
                    ctx->snapshot.my_xid = ctx->tx_xid;
                    ctx->snapshot_valid = 1;
                }
                /* SERIALIZABLE: register with Conflict Guard for write skew detection.
                 * We also grab g_dml_mutex for the life of the TX so concurrent DML
                 * from other sessions blocks until COMMIT/ROLLBACK. The mutex
                 * protects the serializer-style "this TX sees a snapshot consistent
                 * with a global serial order" guarantee test_isolation expects.
                 * query_executor checks `serializable_locked` and SKIPS its own
                 * mutex acquire when the flag is already set, so nested parse
                 * rounds inside the TX don't deadlock on their own lock. */
                if (ctx->isolation_level == 3) {
                    extern void cg_register_tx(uint32_t);
                    cg_register_tx(ctx->tx_xid);
                    extern mutex_t g_dml_mutex;
                    mutex_lock(&g_dml_mutex);
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
                /* MVCC: mark aborted in CLOG */
                if (ctx->tx_xid > 0) {
                    clog_set_aborted(ctx->tx_xid);
                    { extern void lock_release_all(uint32_t); lock_release_all(ctx->tx_xid);
                      extern void lock_gap_release_all(uint32_t); lock_gap_release_all(ctx->tx_xid); }
                    mvcc_unregister_tx(ctx->tx_xid);
                    ctx->tx_xid = 0;
                }
                notify_discard_pending(ctx, 0);  /* Task 91: implicit rollback */
                ctx->savepoint_depth = 0;
            } else {
                /* Conflict Guard: check for serialization failure before commit */
                if (ctx->serializable_locked && ctx->tx_xid > 0) {
                    extern int cg_check_commit(uint32_t);
                    if (cg_check_commit(ctx->tx_xid) != 0) {
                        /* Dangerous structure detected → abort */
                        snprintf(rs->error_message, sizeof(rs->error_message),
                                 "could not serialize access due to "
                                 "read/write dependencies among transactions");
                        rs->has_error = 1;
                        strncpy(rs->error_sqlstate, "40001", 6);
                        /* Fall through to aborted-TX handling */
                        ctx->tx_aborted = 1;
                        if (ctx->undo_log) undo_log_rollback(ctx->undo_log);
                        if (ctx->tx_xid > 0) {
                            clog_set_aborted(ctx->tx_xid);
                            { extern void lock_release_all(uint32_t); lock_release_all(ctx->tx_xid);
                      extern void lock_gap_release_all(uint32_t); lock_gap_release_all(ctx->tx_xid); }
                            { extern void cg_unregister_tx(uint32_t); cg_unregister_tx(ctx->tx_xid); }
                            mvcc_unregister_tx(ctx->tx_xid);
                            ctx->tx_xid = 0;
                        }
                        notify_discard_pending(ctx, 0);  /* Task 91 */
                        ctx->savepoint_depth = 0;
                        ctx->in_transaction = 0;
                        ctx->tx_aborted = 0;
                        ctx->snapshot_valid = 0;
                        if (ctx->serializable_locked) {
                            extern mutex_t g_dml_mutex;
                            mutex_unlock(&g_dml_mutex);
                            ctx->serializable_locked = 0;
                        }
                        strcpy(rs->command_tag, "ROLLBACK");
                        return 1;
                    }
                }
                /* MVCC: mark committed in CLOG with CSN */
                if (ctx->tx_xid > 0) {
                    /* WAL: flush dirty pages before commit for durability */
                    {
                        extern void bp_wal_flush_dirty(int fd);
                        extern int pgm_get_fd(void);
                        bp_wal_flush_dirty(pgm_get_fd());
                    }
                    /* Synchronous commit: wait for
                     * replica majority to confirm this transaction's WAL
                     * LSN before acknowledging COMMIT to the client.
                     * Gated by EVOSQL_SYNC_COMMIT=1. Silently degrades
                     * to async commit on timeout (logged). */
                    if (repl_sync_commit_enabled()) {
                        uint32_t target_lsn = wal_get_current_lsn();
                        if (target_lsn > 0 &&
                            repl_sync_commit(target_lsn,
                                             REPL_SYNC_COMMIT_DEFAULT_MS) < 0) {
                            fprintf(stderr, "[REPL] Sync commit timeout at "
                                    "LSN %u — falling back to async\n",
                                    target_lsn);
                        }
                    }
                    uint32_t csn = pgm_next_csn();
                    clog_set_committed_csn(ctx->tx_xid, csn);
                    { extern void lock_release_all(uint32_t); lock_release_all(ctx->tx_xid);
                      extern void lock_gap_release_all(uint32_t); lock_gap_release_all(ctx->tx_xid); }
                    mvcc_unregister_tx(ctx->tx_xid);
                    ctx->tx_xid = 0;
                }
            }
            notify_flush_commit(ctx);      /* Task 91: deliver pending NOTIFYs */
            ctx->in_transaction = 0;
            ctx->tx_aborted = 0;
            ctx->snapshot_valid = 0;
            close_all_session_cursors(ctx);
            if (ctx->undo_log) {
                undo_log_free(ctx->undo_log);
                ctx->undo_log = NULL;
            }
            savepoint_stack_init(&ctx->savepoints);
            /* Unregister from Conflict Guard and release the serializer
             * mutex that BEGIN SERIALIZABLE grabbed. Concurrent DML from
             * other sessions was blocked waiting on this unlock. */
            if (ctx->serializable_locked) {
                extern void cg_unregister_tx(uint32_t);
                if (ctx->tx_xid > 0) cg_unregister_tx(ctx->tx_xid);
                extern mutex_t g_dml_mutex;
                mutex_unlock(&g_dml_mutex);
                ctx->serializable_locked = 0;
            }
            /* GTT ON COMMIT DELETE ROWS: purge session data under mutex */
            {
                int has_gtt_work = 0;
                for (int gi = 0; gi < ctx->gtt_count; gi++) {
                    if (ctx->gtt_data[gi].pk_root_page != 0 &&
                        ctx->gtt_data[gi].on_commit_delete) {
                        has_gtt_work = 1;
                        break;
                    }
                }
                if (has_gtt_work) {
                    rwlock_wrlock(&g_parse_lock);
                    for (int gi = 0; gi < ctx->gtt_count; gi++) {
                        if (ctx->gtt_data[gi].pk_root_page == 0) continue;
                        if (!ctx->gtt_data[gi].on_commit_delete) continue;
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
                    rwlock_wrunlock(&g_parse_lock);
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

            /* Task 91: drop pending NOTIFYs enqueued after this savepoint.
             * SAVEPOINT at array-index idx was created when depth was idx,
             * then bumped to idx+1 for subsequent NOTIFYs. To undo those,
             * discard entries with savepoint_depth > idx. */
            notify_discard_pending(ctx, idx);
            ctx->savepoint_depth = idx;

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
            /* MVCC: mark aborted in CLOG */
            if (ctx->tx_xid > 0) {
                clog_set_aborted(ctx->tx_xid);
                mvcc_unregister_tx(ctx->tx_xid);
                ctx->tx_xid = 0;
            }
            notify_discard_pending(ctx, 0);    /* Task 91: drop all pending NOTIFYs */
            ctx->savepoint_depth = 0;
            ctx->in_transaction = 0;
            ctx->tx_aborted = 0;
            ctx->snapshot_valid = 0;
            savepoint_stack_init(&ctx->savepoints);
            /* Unregister from Conflict Guard and release the serializer
             * mutex that BEGIN SERIALIZABLE grabbed. Concurrent DML from
             * other sessions was blocked waiting on this unlock. */
            if (ctx->serializable_locked) {
                extern void cg_unregister_tx(uint32_t);
                if (ctx->tx_xid > 0) cg_unregister_tx(ctx->tx_xid);
                extern mutex_t g_dml_mutex;
                mutex_unlock(&g_dml_mutex);
                ctx->serializable_locked = 0;
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
            /* Task 91: RELEASE keeps NOTIFYs pending but lowers depth so
             * a subsequent ROLLBACK TO earlier savepoint still discards
             * them. Depth becomes the remaining savepoint count. */
            if (ctx->savepoint_depth > idx)
                ctx->savepoint_depth = idx;
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
            ctx->savepoint_depth++;   /* Task 91: stamp depth on new NOTIFYs */
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
        if (ctx && handle_cursor(sql, rs, ctx)) return 1;
        strcpy(rs->command_tag, "CLOSE CURSOR");
        return 1;
    }
    if (starts_with_i(sql, "RESET")) {
        strcpy(rs->command_tag, "RESET");
        return 1;
    }
    /* LISTEN / UNLISTEN / NOTIFY are handled by the real dispatch inside
     * query_executor.c (Task 91 — Feature #62). Do NOT short-circuit here
     * or the registry never gets updated. */
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
           stristr_found(sql, "pg_depend") ||
           stristr_found(sql, "pg_sequences");
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

    /* pg_is_in_recovery() — true on a replica (Task 97 v1). */
    if (stristr_found(sql, "pg_is_in_recovery")) {
        result_add_column(rs, "pg_is_in_recovery", PG_OID_BOOL);
        int row = result_add_row(rs);
        result_set_field(rs, row, 0,
            repl_get_role() == REPL_ROLE_REPLICA ? "t" : "f");
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

    /* pg_inherits catalog view (Task 92 — Feature #63). Emits one row
     * per (child, parent, 1) pair stored in CAT_SYS_INHERITANCE, letting
     * DBeaver/pgAdmin show inheritance edges. */
    if (stristr_found(sql, "pg_inherits")) {
        result_add_column(rs, "inhrelid",  PG_OID_INT4);
        result_add_column(rs, "inhparent", PG_OID_INT4);
        result_add_column(rs, "inhseqno",  PG_OID_INT4);
        InheritPair pairs[256];
        int n = cat_list_all_inheritance(pairs, 256);
        for (int i = 0; i < n; i++) {
            int row = result_add_row(rs);
            if (row < 0) break;
            char buf[32];
            snprintf(buf, sizeof(buf), "%u", pairs[i].child_id);
            result_set_field(rs, row, 0, buf);
            snprintf(buf, sizeof(buf), "%u", pairs[i].parent_id);
            result_set_field(rs, row, 1, buf);
            result_set_field(rs, row, 2, "1");
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag),
                 "SELECT %d", rs->num_rows);
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
        if (cols[i].is_dropped) continue;
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
            if (cols[c].is_dropped) continue;
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

    /* Npgsql composite-type fields query
     *   SELECT typ.oid, att.attname, att.atttypid FROM pg_type ... JOIN pg_attribute ...
     * Must be checked BEFORE pg_type handlers because the query references both tables.
     * EvoSQL has no composite types — return an empty 3-column result. */
    if (stristr_found(sql, "pg_type") && stristr_found(sql, "pg_attribute") &&
        stristr_found(sql, "attname")) {
        result_add_column(rs, "oid",       PG_OID_INT4);
        result_add_column(rs, "attname",   PG_OID_TEXT);
        result_add_column(rs, "atttypid",  PG_OID_INT4);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    /* Npgsql enum labels query
     *   SELECT pg_type.oid, enumlabel FROM pg_enum JOIN pg_type ...
     * Must be checked BEFORE pg_type handlers because the query references both tables.
     * EvoSQL has no enum types — return an empty 2-column result. */
    if (stristr_found(sql, "pg_enum") && stristr_found(sql, "enumlabel")) {
        result_add_column(rs, "oid",        PG_OID_INT4);
        result_add_column(rs, "enumlabel",  PG_OID_TEXT);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 0");
        return 1;
    }

    /* pg_type — PostgreSQL type catalog
     *
     * Npgsql sends: SELECT ns.nspname, t.oid, t.typname, t.typtype, t.typnotnull, t.elemtypoid
     *   → 6 columns: nspname, oid, typname, typtype, typnotnull, elemtypoid
     *   Detected by "elemtypoid" in query (avoid matching pg_namespace substring)
     *
     * DBeaver sends: SELECT t.oid,t.*,c.relkind,format_type(...)
     *   → 30 columns (full pg_type layout)
     */
    if (stristr_found(sql, "pg_type") &&
        stristr_found(sql, "elemtypoid")) {
        /* Npgsql type-loading format: exactly 6 columns
         *
         * Npgsql 8.0 requires BOTH base types (typtype='b') and their
         * corresponding array types (typtype='a') to fully activate
         * type handlers.  Each array row has elemtypoid pointing to
         * its base type OID. */
        result_add_column(rs, "nspname",     PG_OID_TEXT);
        result_add_column(rs, "oid",         PG_OID_INT4);
        result_add_column(rs, "typname",     PG_OID_TEXT);
        result_add_column(rs, "typtype",     PG_OID_BPCHAR);
        result_add_column(rs, "typnotnull",  PG_OID_BOOL);
        result_add_column(rs, "elemtypoid",  PG_OID_INT4);

        /* base_oid, name, array_oid, array_name — from pg_type catalog */
        struct { const char *oid; const char *name;
                 const char *arr_oid; const char *arr_name; } types[] = {
            {"16",   "bool",      "1000", "_bool"},
            {"17",   "bytea",     "1001", "_bytea"},
            {"20",   "int8",      "1016", "_int8"},
            {"21",   "int2",      "1005", "_int2"},
            {"23",   "int4",      "1007", "_int4"},
            {"25",   "text",      "1009", "_text"},
            {"26",   "oid",       "1028", "_oid"},
            {"114",  "json",      "199",  "_json"},
            {"700",  "float4",    "1021", "_float4"},
            {"701",  "float8",    "1022", "_float8"},
            {"1042", "bpchar",    "1014", "_bpchar"},
            {"1043", "varchar",   "1015", "_varchar"},
            {"1082", "date",      "1182", "_date"},
            {"1114", "timestamp", "1115", "_timestamp"},
            {"1184", "timestamptz","1185","_timestamptz"},
            {"1700", "numeric",   "1231", "_numeric"},
            {"2950", "uuid",      "2951", "_uuid"},
            {"3802", "jsonb",     "3807", "_jsonb"},
            {NULL, NULL, NULL, NULL}
        };

        int count = 0, i, row;
        /* Emit base types first (typtype='b', elemtypoid=0) */
        for (i = 0; types[i].oid != NULL; i++) {
            row = result_add_row(rs);
            if (row < 0) break;
            result_set_field(rs, row, 0, "pg_catalog");
            result_set_field(rs, row, 1, types[i].oid);
            result_set_field(rs, row, 2, types[i].name);
            result_set_field(rs, row, 3, "b");
            result_set_field(rs, row, 4, "f");
            result_set_field(rs, row, 5, "0");
            count++;
        }
        /* Emit array types (typtype='a', elemtypoid=base OID) */
        for (i = 0; types[i].oid != NULL; i++) {
            row = result_add_row(rs);
            if (row < 0) break;
            result_set_field(rs, row, 0, "pg_catalog");
            result_set_field(rs, row, 1, types[i].arr_oid);
            result_set_field(rs, row, 2, types[i].arr_name);
            result_set_field(rs, row, 3, "a");
            result_set_field(rs, row, 4, "f");
            result_set_field(rs, row, 5, types[i].oid);  /* element type OID */
            count++;
        }
        /* Pseudo-types required by Npgsql: record, void, unknown */
        {
            struct { const char *oid; const char *name; } pseudos[] = {
                {"2249", "record"},
                {"2278", "void"},
                {"705",  "unknown"},
                {NULL, NULL}
            };
            for (i = 0; pseudos[i].oid != NULL; i++) {
                row = result_add_row(rs);
                if (row < 0) break;
                result_set_field(rs, row, 0, "pg_catalog");
                result_set_field(rs, row, 1, pseudos[i].oid);
                result_set_field(rs, row, 2, pseudos[i].name);
                result_set_field(rs, row, 3, "p");     /* pseudo-type */
                result_set_field(rs, row, 4, "f");
                result_set_field(rs, row, 5, "0");
                count++;
            }
        }

        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
        return 1;
    }

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

    /* pg_stat_replication (Task 97 v1) — one row per active replica slot.
     * Columns match PostgreSQL 15 layout for DBeaver/psql introspection. */
    if (stristr_found(sql, "pg_stat_replication")) {
        ReplicationStatus st;
        memset(&st, 0, sizeof(st));
        repl_get_status(&st);

        result_add_column(rs, "pid",              PG_OID_INT4);
        result_add_column(rs, "usesysid",         PG_OID_INT4);
        result_add_column(rs, "usename",          PG_OID_TEXT);
        result_add_column(rs, "application_name", PG_OID_TEXT);
        result_add_column(rs, "client_addr",      PG_OID_TEXT);
        result_add_column(rs, "backend_start",    PG_OID_TEXT);
        result_add_column(rs, "state",            PG_OID_TEXT);
        result_add_column(rs, "sent_lsn",         PG_OID_TEXT);
        result_add_column(rs, "write_lsn",        PG_OID_TEXT);
        result_add_column(rs, "flush_lsn",        PG_OID_TEXT);
        result_add_column(rs, "replay_lsn",       PG_OID_TEXT);
        result_add_column(rs, "sync_state",       PG_OID_TEXT);

        for (int i = 0; i < st.num_replicas; i++) {
            int r = result_add_row(rs);
            char b[64];
            /* Synthetic PID: derive stable-ish number from replica_id */
            unsigned pid = 0;
            for (const char *s = st.slots[i].replica_id; *s; s++)
                pid = pid * 31u + (unsigned char)*s;
            if (pid == 0) pid = (unsigned)(i + 1);
            snprintf(b, sizeof(b), "%u", pid & 0x7FFFFFFF);
            result_set_field(rs, r, 0, b);
            result_set_field(rs, r, 1, "10");
            result_set_field(rs, r, 2, "evosql");
            result_set_field(rs, r, 3, st.slots[i].replica_id);
            result_set_field(rs, r, 4, st.slots[i].replica_id);
            /* backend_start: encode last_seen as "YYYY-MM-DD HH:MM:SS+00" */
            {
                time_t t = (time_t)(st.slots[i].last_seen / 1000000LL);
                struct tm tmv;
                gmtime_r(&t, &tmv);
                char ts[32];
                strftime(ts, sizeof(ts), "%Y-%m-%d %H:%M:%S+00", &tmv);
                result_set_field(rs, r, 5, ts);
            }
            result_set_field(rs, r, 6, st.slots[i].active ? "streaming" : "catchup");
            snprintf(b, sizeof(b), "%u/%u", 0, st.my_lsn);
            result_set_field(rs, r, 7, b);
            result_set_field(rs, r, 8, b);
            result_set_field(rs, r, 9, b);
            snprintf(b, sizeof(b), "%u/%u", 0, st.slots[i].confirmed_lsn);
            result_set_field(rs, r, 10, b);
            result_set_field(rs, r, 11, "async");
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag),
                 "SELECT %d", st.num_replicas);
        return 1;
    }

    /* Task 101: statistics views — pg_stats / pg_stat_user_tables /
     * pg_stat_user_indexes. Model after PostgreSQL so DBeaver/psql
     * "table statistics" panes work against EvoSQL. Optional
     * tablename='x' / attname='y' filters are honored for cheap
     * introspection of a single table. */

    /* Helper: extract a simple `col = 'val'` (or unquoted) filter from
     * the WHERE clause. Only recognises string-equality on well-known
     * column names — used to avoid scanning every table when the
     * caller asked for one. */
    #define EXTRACT_EQ_FILTER(_name, _out, _out_sz) do {                 \
        const char *_p = strcasestr_local(sql, (_name));                    \
        if (_p) {                                                         \
            _p += strlen((_name));                                        \
            while (*_p && isspace((unsigned char)*_p)) _p++;              \
            if (*_p == '=') {                                             \
                _p++;                                                     \
                while (*_p && isspace((unsigned char)*_p)) _p++;          \
                int _quote = (*_p == '\'');                               \
                if (_quote) _p++;                                         \
                int _i = 0;                                               \
                while (*_p && _i + 1 < (int)(_out_sz)) {                  \
                    if (_quote && *_p == '\'') break;                     \
                    if (!_quote &&                                        \
                        (isspace((unsigned char)*_p) || *_p == ')'))      \
                        break;                                            \
                    (_out)[_i++] = *_p++;                                 \
                }                                                         \
                (_out)[_i] = '\0';                                        \
            }                                                             \
        }                                                                 \
    } while (0)

    /* pg_stats — row per (table, column) with column stats + histogram.
     * Columns match PostgreSQL 15 layout (histogram_bounds uses the
     * '{a,b,c}' array-literal syntax PG emits). */
    if (stristr_found(sql, "pg_stats") &&
        !stristr_found(sql, "pg_stat_user_")) {
        result_add_column(rs, "schemaname",        PG_OID_TEXT);
        result_add_column(rs, "tablename",         PG_OID_TEXT);
        result_add_column(rs, "attname",           PG_OID_TEXT);
        result_add_column(rs, "null_frac",         PG_OID_FLOAT8);
        result_add_column(rs, "n_distinct",        PG_OID_INT8);
        result_add_column(rs, "avg_width",         PG_OID_INT4);
        result_add_column(rs, "most_common_vals",  PG_OID_TEXT);
        result_add_column(rs, "most_common_freqs", PG_OID_TEXT);
        result_add_column(rs, "histogram_bounds",  PG_OID_TEXT);

        char filter_table[128] = "";
        char filter_attname[128] = "";
        EXTRACT_EQ_FILTER("tablename", filter_table, sizeof(filter_table));
        EXTRACT_EQ_FILTER("attname",   filter_attname, sizeof(filter_attname));

        DatabaseDesc dbDesc; SchemaDesc schDesc;
        int total = 0;
        if (cat_find_database(db_get_current_database(), &dbDesc) == 0 &&
            cat_find_schema(dbDesc.db_id, db_get_current_schema(), &schDesc) == 0) {
            TableDesc tables[256];
            int nt = cat_list_tables(schDesc.schema_id, tables, 256);
            for (int t = 0; t < nt; t++) {
                if (tables[t].is_temporary) continue;
                if (filter_table[0] &&
                    strcasecmp(tables[t].table_name, filter_table) != 0)
                    continue;

                TableStatsDesc ts;
                int has_ts = (cat_get_table_stats(tables[t].table_id, &ts) == 0);

                /* Iterate all columns (not just those with ColumnStatsDesc) —
                 * UPDATE HISTOGRAM mode stores a histogram without
                 * refreshing column_stats; such columns must still
                 * surface in pg_stats. */
                ColumnDesc cols_cd[CAT_MAX_COLUMNS];
                int ncols_cd = cat_find_columns(tables[t].table_id,
                                                cols_cd, CAT_MAX_COLUMNS);
                for (int c = 0; c < ncols_cd; c++) {
                    if (cols_cd[c].is_dropped) continue;
                    if (filter_attname[0] &&
                        strcasecmp(cols_cd[c].col_name, filter_attname) != 0)
                        continue;

                    ColumnStatsDesc cs;
                    int has_cs = (cat_get_column_stats(tables[t].table_id,
                                                       cols_cd[c].col_name,
                                                       &cs) == 0);

                    int row = result_add_row(rs);
                    char b[64];
                    result_set_field(rs, row, 0, db_get_current_schema());
                    result_set_field(rs, row, 1, tables[t].table_name);
                    result_set_field(rs, row, 2, cols_cd[c].col_name);

                    /* null_frac */
                    double nf = 0.0;
                    if (has_ts && has_cs && ts.row_count > 0)
                        nf = (double)cs.null_count / (double)ts.row_count;
                    snprintf(b, sizeof(b), "%.6f", nf);
                    result_set_field(rs, row, 3, b);

                    /* n_distinct */
                    snprintf(b, sizeof(b), "%lu",
                             has_cs ? (unsigned long)cs.distinct_count : 0UL);
                    result_set_field(rs, row, 4, b);

                    /* avg_width */
                    snprintf(b, sizeof(b), "%d", has_cs ? cs.avg_width : 0);
                    result_set_field(rs, row, 5, b);

                    /* Histogram → MCV or histogram_bounds */
                    HistogramDesc h;
                    int mcv_set = 0, hb_set = 0;
                    if (cat_get_histogram(tables[t].table_id,
                                          cols_cd[c].col_name, &h) == 0 &&
                        h.num_buckets > 0) {
                        if (h.histogram_type == 'F') {
                            /* Frequency → most_common_vals / _freqs */
                            char mcv[2048] = "{";
                            char mcf[2048] = "{";
                            int lim = h.num_buckets < 10 ? h.num_buckets : 10;
                            for (int i = 0; i < lim; i++) {
                                if (i) {
                                    strncat(mcv, ",",
                                            sizeof(mcv) - strlen(mcv) - 1);
                                    strncat(mcf, ",",
                                            sizeof(mcf) - strlen(mcf) - 1);
                                }
                                strncat(mcv, h.bucket_bounds[i],
                                        sizeof(mcv) - strlen(mcv) - 2);
                                double freq = h.total_rows > 0
                                    ? (double)h.bucket_counts[i] /
                                      (double)h.total_rows : 0.0;
                                char fbuf[32];
                                snprintf(fbuf, sizeof(fbuf), "%.4f", freq);
                                strncat(mcf, fbuf,
                                        sizeof(mcf) - strlen(mcf) - 2);
                            }
                            strncat(mcv, "}", sizeof(mcv) - strlen(mcv) - 1);
                            strncat(mcf, "}", sizeof(mcf) - strlen(mcf) - 1);
                            result_set_field(rs, row, 6, mcv);
                            result_set_field(rs, row, 7, mcf);
                            mcv_set = 1;
                        } else if (h.histogram_type == 'E') {
                            /* Equi-depth → histogram_bounds */
                            char hb[4096] = "{";
                            for (int i = 0; i < h.num_buckets; i++) {
                                if (i) strncat(hb, ",",
                                              sizeof(hb) - strlen(hb) - 1);
                                strncat(hb, h.bucket_bounds[i],
                                        sizeof(hb) - strlen(hb) - 2);
                            }
                            strncat(hb, "}", sizeof(hb) - strlen(hb) - 1);
                            result_set_field(rs, row, 8, hb);
                            hb_set = 1;
                        }
                    }
                    if (!mcv_set) { result_set_null(rs, row, 6);
                                    result_set_null(rs, row, 7); }
                    if (!hb_set)  { result_set_null(rs, row, 8); }
                    total++;
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag),
                 "SELECT %d", total);
        return 1;
    }

    /* pg_stat_user_tables — row per user table with activity counters. */
    if (stristr_found(sql, "pg_stat_user_tables") ||
        stristr_found(sql, "pg_stat_all_tables")) {
        result_add_column(rs, "relid",              PG_OID_INT4);
        result_add_column(rs, "schemaname",         PG_OID_TEXT);
        result_add_column(rs, "relname",            PG_OID_TEXT);
        result_add_column(rs, "n_live_tup",         PG_OID_INT8);
        result_add_column(rs, "n_dead_tup",         PG_OID_INT8);
        result_add_column(rs, "n_mod_since_analyze",PG_OID_INT8);
        result_add_column(rs, "last_analyze",       PG_OID_TEXT);
        result_add_column(rs, "last_autoanalyze",   PG_OID_TEXT);

        char filter_table[128] = "";
        EXTRACT_EQ_FILTER("relname",  filter_table, sizeof(filter_table));
        if (!filter_table[0])
            EXTRACT_EQ_FILTER("tablename", filter_table, sizeof(filter_table));

        DatabaseDesc dbDesc; SchemaDesc schDesc;
        int total = 0;
        if (cat_find_database(db_get_current_database(), &dbDesc) == 0 &&
            cat_find_schema(dbDesc.db_id, db_get_current_schema(), &schDesc) == 0) {
            TableDesc tables[256];
            int nt = cat_list_tables(schDesc.schema_id, tables, 256);
            for (int t = 0; t < nt; t++) {
                if (tables[t].is_temporary) continue;
                if (filter_table[0] &&
                    strcasecmp(tables[t].table_name, filter_table) != 0)
                    continue;

                TableStatsDesc ts;
                int has_ts = (cat_get_table_stats(tables[t].table_id, &ts) == 0);

                int row = result_add_row(rs);
                char b[64];
                snprintf(b, sizeof(b), "%u", tables[t].table_id);
                result_set_field(rs, row, 0, b);
                result_set_field(rs, row, 1, db_get_current_schema());
                result_set_field(rs, row, 2, tables[t].table_name);

                if (has_ts) {
                    snprintf(b, sizeof(b), "%lu",
                             (unsigned long)ts.row_count);
                    result_set_field(rs, row, 3, b);
                    snprintf(b, sizeof(b), "%lu",
                             (unsigned long)ts.dead_tuple_count);
                    result_set_field(rs, row, 4, b);
                    snprintf(b, sizeof(b), "%lu",
                             (unsigned long)ts.dml_since_analyze);
                    result_set_field(rs, row, 5, b);
                    if (ts.last_analyzed > 0) {
                        struct tm tmv;
                        gmtime_r(&ts.last_analyzed, &tmv);
                        char tsbuf[32];
                        strftime(tsbuf, sizeof(tsbuf),
                                 "%Y-%m-%d %H:%M:%S+00", &tmv);
                        result_set_field(rs, row, 6, tsbuf);
                    } else {
                        result_set_null(rs, row, 6);
                    }
                } else {
                    result_set_field(rs, row, 3, "0");
                    result_set_field(rs, row, 4, "0");
                    result_set_field(rs, row, 5, "0");
                    result_set_null(rs, row, 6);
                }
                /* last_autoanalyze — not tracked separately */
                result_set_null(rs, row, 7);
                total++;
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag),
                 "SELECT %d", total);
        return 1;
    }

    /* pg_stat_user_indexes — row per (table, index) with B+ tree stats. */
    if (stristr_found(sql, "pg_stat_user_indexes") ||
        stristr_found(sql, "pg_stat_all_indexes")) {
        result_add_column(rs, "relid",         PG_OID_INT4);
        result_add_column(rs, "schemaname",    PG_OID_TEXT);
        result_add_column(rs, "relname",       PG_OID_TEXT);
        result_add_column(rs, "indexrelname",  PG_OID_TEXT);
        result_add_column(rs, "idx_scan",      PG_OID_INT8);
        result_add_column(rs, "idx_tup_read",  PG_OID_INT8);
        result_add_column(rs, "idx_tup_fetch", PG_OID_INT8);
        result_add_column(rs, "tree_depth",    PG_OID_INT4);  /* extension */
        result_add_column(rs, "leaf_pages",    PG_OID_INT8);  /* extension */

        char filter_table[128] = "";
        char filter_index[128] = "";
        EXTRACT_EQ_FILTER("relname",      filter_table, sizeof(filter_table));
        if (!filter_table[0])
            EXTRACT_EQ_FILTER("tablename", filter_table, sizeof(filter_table));
        EXTRACT_EQ_FILTER("indexrelname", filter_index, sizeof(filter_index));

        DatabaseDesc dbDesc; SchemaDesc schDesc;
        int total = 0;
        if (cat_find_database(db_get_current_database(), &dbDesc) == 0 &&
            cat_find_schema(dbDesc.db_id, db_get_current_schema(), &schDesc) == 0) {
            TableDesc tables[256];
            int nt = cat_list_tables(schDesc.schema_id, tables, 256);
            for (int t = 0; t < nt; t++) {
                if (tables[t].is_temporary) continue;
                if (filter_table[0] &&
                    strcasecmp(tables[t].table_name, filter_table) != 0)
                    continue;

                IndexStatsDesc is[32];
                int nis = cat_list_index_stats(tables[t].table_id, is,
                                               32);
                for (int i = 0; i < nis; i++) {
                    if (filter_index[0] &&
                        strcasecmp(is[i].index_name, filter_index) != 0)
                        continue;
                    int row = result_add_row(rs);
                    char b[64];
                    snprintf(b, sizeof(b), "%u", tables[t].table_id);
                    result_set_field(rs, row, 0, b);
                    result_set_field(rs, row, 1, db_get_current_schema());
                    result_set_field(rs, row, 2, tables[t].table_name);
                    result_set_field(rs, row, 3, is[i].index_name);
                    result_set_field(rs, row, 4, "0");  /* idx_scan — not tracked */
                    snprintf(b, sizeof(b), "%lu",
                             (unsigned long)is[i].total_entries);
                    result_set_field(rs, row, 5, b);
                    result_set_field(rs, row, 6, "0");  /* idx_tup_fetch */
                    snprintf(b, sizeof(b), "%d", is[i].tree_depth);
                    result_set_field(rs, row, 7, b);
                    snprintf(b, sizeof(b), "%u", is[i].leaf_pages);
                    result_set_field(rs, row, 8, b);
                    total++;
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag),
                 "SELECT %d", total);
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
        /* Extra columns for DBeaver JOIN query */
        result_add_column(rs, "tabrelname", PG_OID_TEXT);
        result_add_column(rs, "refnamespace", PG_OID_INT4);
        result_add_column(rs, "consrc_copy", PG_OID_TEXT);

        /* Resolve the namespace OID for the current schema */
        char conNsOid[32] = "2200";
        schema_name_to_oid(db_get_current_schema(), conNsOid, sizeof(conNsOid));

        /* Extract conrelid filter: WHERE c.conrelid = <oid> or conrelid=<oid> */
        uint32_t filter_conrelid = 0;
        {
            const char *p = sql;
            while (*p) {
                if (strncasecmp(p, "conrelid", 8) == 0) {
                    const char *q = p + 8;
                    while (*q == ' ' || *q == '=') q++;
                    if (*q >= '0' && *q <= '9')
                        filter_conrelid = (uint32_t)atol(q);
                }
                p++;
            }
        }

        /* Scan tables via catalog for constraints */
        int count = 0;
        DatabaseDesc dbDescCon;
        SchemaDesc schDescCon;
        if (cat_find_database(db_get_current_database(), &dbDescCon) == 0 &&
            cat_find_schema(dbDescCon.db_id, db_get_current_schema(), &schDescCon) == 0) {
            TableDesc tables[256];
            int nt = cat_list_tables(schDescCon.schema_id, tables, 256);
            for (int t = 0; t < nt; t++) {
                /* Apply conrelid filter if DBeaver sent WHERE */
                if (filter_conrelid != 0 &&
                    stable_table_oid(tables[t].table_name) != filter_conrelid)
                    continue;
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
                        /* Parse FK local columns from definition: "col1,col2|on_delete|on_update" */
                        ColumnDesc fk_cols[CAT_MAX_COLUMNS];
                        int fk_ncols = cat_find_columns(tables[t].table_id, fk_cols, CAT_MAX_COLUMNS);
                        char fk_def[1024];
                        strncpy(fk_def, cons[ci].definition, sizeof(fk_def) - 1);
                        fk_def[sizeof(fk_def) - 1] = '\0';
                        char *pipe = strchr(fk_def, '|');
                        if (pipe) *pipe = '\0'; /* truncate at | to get local col names */
                        /* Find ordinal position of each local FK column */
                        int fk_pos_len = 0;
                        char fk_pos[256] = "{";
                        char *saveptr = NULL;
                        char *fk_tok = strtok_r(fk_def, ",", &saveptr);
                        while (fk_tok) {
                            while (*fk_tok == ' ') fk_tok++;
                            for (int k = 0; k < fk_ncols; k++) {
                                if (strcasecmp(fk_cols[k].col_name, fk_tok) == 0) {
                                    if (fk_pos_len > 0) strcat(fk_pos, ",");
                                    char tmp[16]; snprintf(tmp, sizeof(tmp), "%d", k + 1);
                                    strcat(fk_pos, tmp);
                                    fk_pos_len++;
                                    break;
                                }
                            }
                            fk_tok = strtok_r(NULL, ",", &saveptr);
                        }
                        strcat(fk_pos, "}");
                        strncpy(conkeyStr, fk_pos, sizeof(conkeyStr) - 1);
                    } else {
                        snprintf(conkeyStr, sizeof(conkeyStr), "{}");
                    }

                    char confrelStr[16] = "0";
                    char confkeyStr[64] = "";
                    if (contype[0] == 'f' && cons[ci].ref_table_id != 0) {
                        /* Resolve ref table name → stable OID for DBeaver */
                        TableDesc refTd;
                        ColumnDesc refCols[CAT_MAX_COLUMNS];
                        int refNcols = 0;
                        /* Find ref table by ID across all schemas */
                        {
                            SchemaDesc schemas[32];
                            int ns = cat_list_schemas(dbDescCon.db_id, schemas, 32);
                            for (int si = 0; si < ns; si++) {
                                TableDesc allTbls[256];
                                int ntbls = cat_list_tables(schemas[si].schema_id, allTbls, 256);
                                for (int ti2 = 0; ti2 < ntbls; ti2++) {
                                    if (allTbls[ti2].table_id == cons[ci].ref_table_id) {
                                        snprintf(confrelStr, sizeof(confrelStr), "%u",
                                                 stable_table_oid(allTbls[ti2].table_name));
                                        refTd = allTbls[ti2];
                                        refNcols = cat_find_columns(refTd.table_id, refCols, CAT_MAX_COLUMNS);
                                        goto ref_found;
                                    }
                                }
                            }
                        }
                        ref_found:
                        /* Build confkey from ref_columns */
                        if (cons[ci].ref_columns[0] && refNcols > 0) {
                            char rc_buf[256];
                            strncpy(rc_buf, cons[ci].ref_columns, sizeof(rc_buf) - 1);
                            rc_buf[sizeof(rc_buf) - 1] = '\0';
                            int ck_len = 0;
                            strcpy(confkeyStr, "{");
                            char *sv2 = NULL;
                            char *rtok = strtok_r(rc_buf, ",", &sv2);
                            while (rtok) {
                                while (*rtok == ' ') rtok++;
                                for (int k = 0; k < refNcols; k++) {
                                    if (strcasecmp(refCols[k].col_name, rtok) == 0) {
                                        if (ck_len > 0) strcat(confkeyStr, ",");
                                        char tmp[16]; snprintf(tmp, sizeof(tmp), "%d", k + 1);
                                        strcat(confkeyStr, tmp);
                                        ck_len++;
                                        break;
                                    }
                                }
                                rtok = strtok_r(NULL, ",", &sv2);
                            }
                            strcat(confkeyStr, "}");
                        }
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
                    if (contype[0] == 'f' && confkeyStr[0])
                        result_set_field(rs, row, 16, confkeyStr); /* confkey */
                    else
                        result_set_null(rs, row, 16);              /* confkey */
                    result_set_null(rs, row, 17);                /* description */
                    /* DBeaver JOIN extras */
                    result_set_field(rs, row, 18, tables[t].table_name); /* tabrelname */
                    result_set_field(rs, row, 19, conNsOid);    /* refnamespace */
                    result_set_null(rs, row, 20);               /* consrc_copy */
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

    /* pg_trigger — real implementation */
    if (stristr_found(sql, "pg_trigger")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "tgname", PG_OID_TEXT);
        result_add_column(rs, "tgrelid", PG_OID_INT4);
        result_add_column(rs, "tgtype", PG_OID_INT2);
        result_add_column(rs, "tgenabled", PG_OID_BPCHAR);

        DatabaseDesc dbDesc;
        if (cat_find_database(db_get_current_database(), &dbDesc) == 0) {
            SchemaDesc schemas[32];
            int ns = cat_list_schemas(dbDesc.db_id, schemas, 32);
            for (int si = 0; si < ns; si++) {
                TableDesc tables[256];
                int nt = cat_list_tables(schemas[si].schema_id, tables, 256);
                for (int ti = 0; ti < nt; ti++) {
                    TriggerDesc trigs[16];
                    int ntr = cat_list_triggers_for_table(tables[ti].table_id, trigs, 16);
                    for (int tri = 0; tri < ntr; tri++) {
                        int row = result_add_row(rs);
                        result_set_field(rs, row, 0, trigs[tri].trigger_name);
                        char tid[16]; snprintf(tid, sizeof(tid), "%u", trigs[tri].table_id);
                        result_set_field(rs, row, 1, tid);
                        /* tgtype: bitmask (PG convention) */
                        int tgtype = (trigs[tri].timing == 'B' ? 2 : 0) |
                                     (trigs[tri].event == 'I' ? 4 : trigs[tri].event == 'D' ? 8 : 16) | 1;
                        char tt[8]; snprintf(tt, sizeof(tt), "%d", tgtype);
                        result_set_field(rs, row, 2, tt);
                        result_set_field(rs, row, 3, trigs[tri].enabled ? "O" : "D");
                    }
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);
        return 1;
    }

    /* pg_am, pg_roles, etc. — return empty */
    if (stristr_found(sql, "pg_am") || stristr_found(sql, "pg_roles") ||
        stristr_found(sql, "pg_user") || stristr_found(sql, "pg_stat") ||
        stristr_found(sql, "pg_index") ||
        stristr_found(sql, "pg_description") ||
        stristr_found(sql, "pg_extension") || stristr_found(sql, "pg_tablespace") ||
        stristr_found(sql, "pg_shdescription") || stristr_found(sql, "pg_inherits") ||
        stristr_found(sql, "pg_rewrite") ||
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

    /* pg_sequences — real sequence metadata */
    if (stristr_found(sql, "pg_sequences")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "schemaname", PG_OID_TEXT);
        result_add_column(rs, "sequencename", PG_OID_TEXT);
        result_add_column(rs, "start_value", PG_OID_INT8);
        result_add_column(rs, "min_value", PG_OID_INT8);
        result_add_column(rs, "max_value", PG_OID_INT8);
        result_add_column(rs, "increment_by", PG_OID_INT8);
        result_add_column(rs, "cycle", PG_OID_BOOL);
        result_add_column(rs, "last_value", PG_OID_INT8);

        DatabaseDesc dbDescSeq;
        SchemaDesc schDescSeq;
        if (cat_find_database(db_get_current_database(), &dbDescSeq) == 0 &&
            cat_find_schema(dbDescSeq.db_id, db_get_current_schema(), &schDescSeq) == 0) {
            SequenceDesc seqs[64];
            int nseqs = cat_list_sequences(schDescSeq.schema_id, seqs, 64);
            for (int i = 0; i < nseqs; i++) {
                char sv[32], mn[32], mx[32], inc[32], cv[32];
                snprintf(sv, sizeof(sv), "%lld", (long long)seqs[i].start_value);
                snprintf(mn, sizeof(mn), "%lld", (long long)seqs[i].min_value);
                snprintf(mx, sizeof(mx), "%lld", (long long)seqs[i].max_value);
                snprintf(inc, sizeof(inc), "%lld", (long long)seqs[i].increment);
                snprintf(cv, sizeof(cv), "%lld", (long long)seqs[i].current_value);
                int row = rs->num_rows;
                result_add_row(rs);
                result_set_field(rs, row, 0, db_get_current_schema());
                result_set_field(rs, row, 1, seqs[i].seq_name);
                result_set_field(rs, row, 2, sv);
                result_set_field(rs, row, 3, mn);
                result_set_field(rs, row, 4, mx);
                result_set_field(rs, row, 5, inc);
                result_set_field(rs, row, 6, seqs[i].cycle ? "true" : "false");
                result_set_field(rs, row, 7, cv);
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);
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

    if (stristr_found(sql, "information_schema.triggers")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "trigger_name", PG_OID_TEXT);
        result_add_column(rs, "event_manipulation", PG_OID_TEXT);
        result_add_column(rs, "event_object_table", PG_OID_TEXT);
        result_add_column(rs, "action_timing", PG_OID_TEXT);
        result_add_column(rs, "is_enabled", PG_OID_TEXT);

        DatabaseDesc dbDesc;
        if (cat_find_database(db_get_current_database(), &dbDesc) == 0) {
            SchemaDesc schemas[32];
            int ns = cat_list_schemas(dbDesc.db_id, schemas, 32);
            for (int si = 0; si < ns; si++) {
                TableDesc tables[256];
                int nt = cat_list_tables(schemas[si].schema_id, tables, 256);
                for (int ti = 0; ti < nt; ti++) {
                    TriggerDesc trigs[16];
                    int ntr = cat_list_triggers_for_table(tables[ti].table_id, trigs, 16);
                    for (int tri = 0; tri < ntr; tri++) {
                        int row = result_add_row(rs);
                        result_set_field(rs, row, 0, trigs[tri].trigger_name);
                        const char *evt = trigs[tri].event == 'I' ? "INSERT" :
                                          trigs[tri].event == 'U' ? "UPDATE" : "DELETE";
                        result_set_field(rs, row, 1, evt);
                        result_set_field(rs, row, 2, trigs[tri].table_name);
                        const char *timing = trigs[tri].timing == 'B' ? "BEFORE" : "AFTER";
                        result_set_field(rs, row, 3, timing);
                        result_set_field(rs, row, 4, trigs[tri].enabled ? "YES" : "NO");
                    }
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);
        return 1;
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

    /* Detect role GRANT/REVOKE: no ON keyword before TO/FROM.
     * GRANT rolename TO username  (no ON)
     * REVOKE rolename FROM username  (no ON)
     * vs. GRANT SELECT ON TABLE t TO user  (has ON) */
    {
        const char *scan = p;
        int found_on = 0, found_to_from = 0;
        const char *to_from_pos = NULL;
        while (*scan && *scan != ';') {
            if (!found_on &&
                strncasecmp(scan, "ON", 2) == 0 &&
                (scan == p || isspace((unsigned char)scan[-1])) &&
                (isspace((unsigned char)scan[2]) || scan[2] == '\0')) {
                found_on = 1;
            }
            if (!found_to_from && is_grant &&
                strncasecmp(scan, "TO", 2) == 0 &&
                (scan == p || isspace((unsigned char)scan[-1])) &&
                (isspace((unsigned char)scan[2]) || scan[2] == '\0' || scan[2] == ';')) {
                found_to_from = 1;
                to_from_pos = scan;
            }
            if (!found_to_from && is_revoke &&
                strncasecmp(scan, "FROM", 4) == 0 &&
                (scan == p || isspace((unsigned char)scan[-1])) &&
                (isspace((unsigned char)scan[4]) || scan[4] == '\0' || scan[4] == ';')) {
                found_to_from = 1;
                to_from_pos = scan;
            }
            scan++;
        }

        if (!found_on && found_to_from && to_from_pos) {
            /* Role GRANT/REVOKE — extract rolename and username */
            char rolename[256] = "";
            int ri = 0;
            while (*p && !isspace((unsigned char)*p) && *p != ';' && ri < 255)
                rolename[ri++] = *p++;
            rolename[ri] = '\0';

            /* Skip to after TO or FROM */
            p = to_from_pos + (is_grant ? 2 : 4);
            while (*p && isspace((unsigned char)*p)) p++;

            char username[256] = "";
            int ui = 0;
            while (*p && !isspace((unsigned char)*p) && *p != ';' && ui < 255)
                username[ui++] = *p++;
            username[ui] = '\0';

            /* Auth: only admin can manage role membership */
            if (strcasecmp(caller, "admin") != 0) {
                result_init(rs);
                result_set_error(rs, "42501",
                    "Permission denied: only admin can manage role membership");
                return 1;
            }

            result_init(rs);
            if (is_grant) {
                if (GrantRoleToUser(rolename, username) == 0) {
                    snprintf(rs->command_tag, sizeof(rs->command_tag),
                             "GRANT ROLE");
                } else {
                    result_set_error(rs, "42704", g_err.errorMsg);
                    g_err.error = 0;
                }
            } else {
                if (RevokeRoleFromUser(rolename, username) == 0) {
                    snprintf(rs->command_tag, sizeof(rs->command_tag),
                             "REVOKE ROLE");
                } else {
                    result_set_error(rs, "42704", g_err.errorMsg);
                    g_err.error = 0;
                }
            }
            return 1;
        }
    }

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
            result_set_error(rs, "42501", g_err.errorMsg);
            g_err.error = 0;
        }
    } else {
        if (RevokePrivilege(target_user, scope_type, scope_name, priv_buf) == 0) {
            snprintf(rs->command_tag, sizeof(rs->command_tag), "REVOKE");
        } else {
            result_set_error(rs, "42501", g_err.errorMsg);
            g_err.error = 0;
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
            result_set_error(rs, "42710", g_err.errorMsg);
            g_err.error = 0;
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
            result_set_error(rs, "42704", g_err.errorMsg);
            g_err.error = 0;
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
            result_set_error(rs, "42704", g_err.errorMsg);
            g_err.error = 0;
        }
        evo_secure_wipe(password, sizeof(password));
        return 1;
    }

    /* CREATE ROLE <name> */
    if (strncasecmp(p, "CREATE ROLE", 11) == 0 &&
        isspace((unsigned char)p[11])) {
        p += 11;
        while (*p && isspace((unsigned char)*p)) p++;

        char rolename[256];
        int ri = 0;
        while (*p && !isspace((unsigned char)*p) && *p != ';' && ri < 255)
            rolename[ri++] = *p++;
        rolename[ri] = '\0';

        result_init(rs);
        if (CreateRoleProcess(rolename) == 0) {
            snprintf(rs->command_tag, sizeof(rs->command_tag), "CREATE ROLE");
        } else {
            result_set_error(rs, "42710", g_err.errorMsg);
            g_err.error = 0;
        }
        return 1;
    }

    /* DROP ROLE <name> */
    if (strncasecmp(p, "DROP ROLE", 9) == 0 &&
        isspace((unsigned char)p[9])) {
        p += 9;
        while (*p && isspace((unsigned char)*p)) p++;

        char rolename[256];
        int ri = 0;
        while (*p && !isspace((unsigned char)*p) && *p != ';' && ri < 255)
            rolename[ri++] = *p++;
        rolename[ri] = '\0';

        result_init(rs);
        if (DropRoleProcess(rolename) == 0) {
            snprintf(rs->command_tag, sizeof(rs->command_tag), "DROP ROLE");
        } else {
            result_set_error(rs, "42704", g_err.errorMsg);
            g_err.error = 0;
        }
        return 1;
    }

    return 0;
}

/* ----------------------------------------------------------------
 *  Main dispatch
 * ---------------------------------------------------------------- */
/* ----------------------------------------------------------------
 *  Distributed commands: SHOW TABLE PLACEMENT, SHOW NODES,
 *  MOVE TABLE x TO NODE N, CREATE TABLE ... ON NODE N
 * ---------------------------------------------------------------- */
static int handle_distributed(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    extern int dist_is_enabled(void);
    extern int dist_get_my_id(void);
    extern int dist_get_num_nodes(void);
    extern int dist_get_node_info(int node_id, void *out);
    extern int dist_move_table(const char *table_name, int dest_node_id,
                               ResultSet *rs, SessionCtx *ctx);

    /* SHOW TABLE PLACEMENT */
    if (starts_with_i(sql, "SHOW") && stristr_found(sql, "placement")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "table_name", PG_OID_TEXT);
        result_add_column(rs, "schema", PG_OID_TEXT);
        result_add_column(rs, "owner_node_id", PG_OID_INT4);
        result_add_column(rs, "location", PG_OID_TEXT);

        DatabaseDesc dbDesc;
        const char *db = ctx ? ctx->database : "evosql";
        if (cat_find_database(db, &dbDesc) == 0) {
            /* List all schemas in this database */
            SchemaDesc schemas[32];
            int ns = cat_list_schemas(dbDesc.db_id, schemas, 32);
            for (int si = 0; si < ns; si++) {
                TableDesc tables[256];
                int nt = cat_list_tables(schemas[si].schema_id, tables, 256);
                for (int ti = 0; ti < nt; ti++) {
                    if (tables[ti].is_temporary) continue;
                    int row = result_add_row(rs);
                    result_set_field(rs, row, 0, tables[ti].table_name);
                    result_set_field(rs, row, 1, schemas[si].schema_name);
                    char node_str[16];
                    snprintf(node_str, sizeof(node_str), "%u", tables[ti].owner_node_id);
                    result_set_field(rs, row, 2, node_str);
                    int my_id = dist_is_enabled() ? dist_get_my_id() : 0;
                    if ((int)tables[ti].owner_node_id == my_id || tables[ti].owner_node_id == 0)
                        result_set_field(rs, row, 3, "LOCAL");
                    else
                        result_set_field(rs, row, 3, "REMOTE");
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* SHOW NODES */
    if (starts_with_i(sql, "SHOW") && stristr_found(sql, "nodes")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "node_id", PG_OID_INT4);
        result_add_column(rs, "host", PG_OID_TEXT);
        result_add_column(rs, "pg_port", PG_OID_INT4);
        result_add_column(rs, "role", PG_OID_TEXT);

        if (dist_is_enabled()) {
            int nn = dist_get_num_nodes();
            int my_id = dist_get_my_id();
            for (int i = 0; i < nn; i++) {
                /* Use a temporary struct to get node info */
                typedef struct { char host[256]; int pg_port; int dist_port; } DNI;
                DNI ni;
                memset(&ni, 0, sizeof(ni));
                dist_get_node_info(i, &ni);

                int row = result_add_row(rs);
                char id_str[16];
                snprintf(id_str, sizeof(id_str), "%d", i);
                result_set_field(rs, row, 0, id_str);
                result_set_field(rs, row, 1, ni.host);
                char port_str[16];
                snprintf(port_str, sizeof(port_str), "%d", ni.pg_port);
                result_set_field(rs, row, 2, port_str);
                result_set_field(rs, row, 3, (i == my_id) ? "SELF" : "PEER");
            }
        } else {
            int row = result_add_row(rs);
            result_set_field(rs, row, 0, "0");
            result_set_field(rs, row, 1, "localhost");
            result_set_field(rs, row, 2, "5433");
            result_set_field(rs, row, 3, "STANDALONE");
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* MOVE TABLE <name> TO NODE <n> */
    if (starts_with_i(sql, "MOVE")) {
        const char *p = sql + 4;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "TABLE", 5) != 0) return 0;
        p += 5;
        while (*p && isspace((unsigned char)*p)) p++;

        /* Extract table name */
        char tname[256];
        int ti = 0;
        while (*p && !isspace((unsigned char)*p) && *p != ';' && ti < 255)
            tname[ti++] = *p++;
        tname[ti] = '\0';

        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "TO", 2) != 0) {
            result_set_error(rs, "42601", "Syntax: MOVE TABLE <name> TO NODE <n>");
            return 1;
        }
        p += 2;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "NODE", 4) != 0) {
            result_set_error(rs, "42601", "Syntax: MOVE TABLE <name> TO NODE <n>");
            return 1;
        }
        p += 4;
        while (*p && isspace((unsigned char)*p)) p++;

        int dest = atoi(p);
        result_init(rs);
        dist_move_table(tname, dest, rs, ctx);
        return 1;
    }

    /* SHOW SHARDS <table_name> */
    if (starts_with_i(sql, "SHOW") && stristr_found(sql, "shards")) {
        result_init(rs);
        rs->is_select = 1;
        result_add_column(rs, "shard_name", PG_OID_TEXT);
        result_add_column(rs, "ordinal", PG_OID_INT4);
        result_add_column(rs, "owner_node_id", PG_OID_INT4);
        result_add_column(rs, "range_bound", PG_OID_TEXT);
        result_add_column(rs, "shard_type", PG_OID_TEXT);
        result_add_column(rs, "shard_key", PG_OID_TEXT);

        /* Extract table name from "SHOW SHARDS <table>" */
        const char *p = sql;
        while (*p && isspace((unsigned char)*p)) p++;
        p += 4; /* SHOW */
        while (*p && isspace((unsigned char)*p)) p++;
        /* Skip "SHARDS" */
        if (strncasecmp(p, "SHARDS", 6) == 0) p += 6;
        while (*p && isspace((unsigned char)*p)) p++;

        char tname[256];
        int ti = 0;
        while (*p && !isspace((unsigned char)*p) && *p != ';' && ti < 255)
            tname[ti++] = *p++;
        tname[ti] = '\0';

        if (tname[0]) {
            const char *db = ctx ? ctx->database : "evosql";
            const char *sch = ctx ? ctx->schema : "default";
            TableDesc td;
            int rc = cat_resolve_table(db, sch, tname, &td);
            if (rc == 0 && td.shard_type != 0) {
                ShardDesc shards[7];
                int ns = cat_list_shards(td.table_id, shards, 7);
                for (int si = 0; si < ns; si++) {
                    int row = result_add_row(rs);
                    result_set_field(rs, row, 0, shards[si].shard_name);
                    char buf[32];
                    snprintf(buf, sizeof(buf), "%d", shards[si].shard_ordinal);
                    result_set_field(rs, row, 1, buf);
                    snprintf(buf, sizeof(buf), "%d", shards[si].owner_node_id);
                    result_set_field(rs, row, 2, buf);
                    result_set_field(rs, row, 3,
                        shards[si].range_bound[0] ? shards[si].range_bound : "MAXVALUE");
                    result_set_field(rs, row, 4,
                        td.shard_type == 1 ? "HASH" : "RANGE");
                    result_set_field(rs, row, 5, td.shard_key);
                }
            }
        }
        snprintf(rs->command_tag, sizeof(rs->command_tag), "SHOW");
        return 1;
    }

    /* CREATE TABLE ... ON NODE <n> — set thread-local for query_executor to strip.
     * Only match ON NODE outside parentheses (avoids SHARD range definitions). */
    if (starts_with_i(sql, "CREATE") && stristr_found(sql, "ON NODE")) {
        const char *on_node = NULL;
        const char *scan = sql;
        int paren_depth = 0;
        while (*scan) {
            if (*scan == '(') paren_depth++;
            else if (*scan == ')') { if (paren_depth > 0) paren_depth--; }
            else if (paren_depth == 0 &&
                     strncasecmp(scan, "ON NODE", 7) == 0 &&
                     (scan == sql || isspace((unsigned char)scan[-1])) &&
                     (scan[7] == '\0' || isspace((unsigned char)scan[7]))) {
                on_node = scan;
            }
            scan++;
        }
        if (on_node) {
            int node_id = atoi(on_node + 7);
            /* Store node_id + 1 so that node 0 is distinguishable from "not set" */
            extern __thread uint32_t g_dist_create_node_id;
            g_dist_create_node_id = (uint32_t)(node_id + 1);
            return 0; /* Let it fall through — ID picked up in query_execute */
        }
    }

    return 0;
}

/* Close all session cursors — called on COMMIT/ROLLBACK/disconnect */
static void close_all_session_cursors(SessionCtx *ctx)
{
    if (!ctx) return;
    for (int i = 0; i < ctx->cursor_count; i++) {
        if (ctx->cursors[i].is_open) result_free(&ctx->cursors[i].rs);
        ctx->cursors[i].is_open = 0;
    }
    ctx->cursor_count = 0;
}

/* ================================================================
 *  Standalone Cursor Handling
 *  DECLARE cursor CURSOR FOR select; OPEN cursor; FETCH FROM cursor; CLOSE cursor
 * ================================================================ */

static int handle_cursor(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    if (!ctx) return 0;
    const char *p = sql;
    while (*p && isspace((unsigned char)*p)) p++;

    /* DECLARE name CURSOR FOR select_stmt */
    if (strncasecmp(p, "DECLARE", 7) == 0 && isspace((unsigned char)p[7])) {
        const char *dp = p + 7;
        while (*dp && isspace((unsigned char)*dp)) dp++;
        /* Extract cursor name */
        char cname[64] = "";
        int ni = 0;
        while (*dp && !isspace((unsigned char)*dp) && ni < 63) cname[ni++] = *dp++;
        cname[ni] = '\0';
        while (*dp && isspace((unsigned char)*dp)) dp++;
        if (strncasecmp(dp, "CURSOR", 6) != 0) return 0; /* not a cursor declaration */
        dp += 6;
        while (*dp && isspace((unsigned char)*dp)) dp++;
        if (strncasecmp(dp, "FOR", 3) != 0) return 0;
        dp += 3;
        while (*dp && isspace((unsigned char)*dp)) dp++;
        /* dp now points to the SELECT query */
        if (!*dp) {
            result_set_error(rs, "42601", "DECLARE CURSOR requires a query");
            return 1;
        }
        /* Check duplicate name (skip empty/closed slots) */
        for (int i = 0; i < ctx->cursor_count; i++) {
            if (ctx->cursors[i].name[0] && strcasecmp(ctx->cursors[i].name, cname) == 0) {
                result_set_error(rs, "42P03", "cursor already exists");
                return 1;
            }
        }
        /* Find free slot (reuse closed cursors) */
        int idx = -1;
        for (int i = 0; i < ctx->cursor_count; i++) {
            if (ctx->cursors[i].name[0] == '\0') { idx = i; break; }
        }
        if (idx < 0) {
            if (ctx->cursor_count >= 16) {
                result_set_error(rs, "54000", "too many cursors (max 16)");
                return 1;
            }
            idx = ctx->cursor_count++;
        }
        strncpy(ctx->cursors[idx].name, cname, 63);
        strncpy(ctx->cursors[idx].query, dp, 4095);
        /* Strip trailing semicolons */
        int qlen = (int)strlen(ctx->cursors[idx].query);
        while (qlen > 0 && (ctx->cursors[idx].query[qlen-1] == ';' ||
               isspace((unsigned char)ctx->cursors[idx].query[qlen-1])))
            ctx->cursors[idx].query[--qlen] = '\0';
        memset(&ctx->cursors[idx].rs, 0, sizeof(ResultSet));
        ctx->cursors[idx].pos = -1;
        ctx->cursors[idx].is_open = 0;
        result_init(rs);
        strcpy(rs->command_tag, "DECLARE CURSOR");
        return 1;
    }

    /* OPEN name */
    if (strncasecmp(p, "OPEN", 4) == 0 && isspace((unsigned char)p[4])) {
        const char *op = p + 4;
        while (*op && isspace((unsigned char)*op)) op++;
        char cname[64] = "";
        int ni = 0;
        while (*op && !isspace((unsigned char)*op) && *op != ';' && ni < 63) cname[ni++] = *op++;
        cname[ni] = '\0';
        for (int i = 0; i < ctx->cursor_count; i++) {
            if (strcasecmp(ctx->cursors[i].name, cname) == 0) {
                if (ctx->cursors[i].is_open) result_free(&ctx->cursors[i].rs);
                memset(&ctx->cursors[i].rs, 0, sizeof(ResultSet));
                result_init(&ctx->cursors[i].rs);
                query_execute(ctx->cursors[i].query, &ctx->cursors[i].rs, ctx);
                if (ctx->cursors[i].rs.has_error) {
                    rs->has_error = 1;
                    strncpy(rs->error_message, ctx->cursors[i].rs.error_message, sizeof(rs->error_message)-1);
                    strncpy(rs->error_sqlstate, ctx->cursors[i].rs.error_sqlstate, sizeof(rs->error_sqlstate)-1);
                    return 1;
                }
                ctx->cursors[i].pos = 0;
                ctx->cursors[i].is_open = 1;
                result_init(rs);
                strcpy(rs->command_tag, "OPEN CURSOR");
                return 1;
            }
        }
        char msg[256];
        snprintf(msg, sizeof(msg), "cursor \"%s\" does not exist", cname);
        result_set_error(rs, "34000", msg);
        return 1;
    }

    /* FETCH [NEXT|FORWARD n|ALL] [FROM] name */
    if (strncasecmp(p, "FETCH", 5) == 0 && isspace((unsigned char)p[5])) {
        const char *fp = p + 5;
        while (*fp && isspace((unsigned char)*fp)) fp++;
        int fetch_count = 1; /* default: FETCH NEXT = 1 row */
        int fetch_all = 0;
        /* Parse direction */
        if (strncasecmp(fp, "NEXT", 4) == 0 && (isspace((unsigned char)fp[4]) || fp[4] == '\0')) {
            fp += 4; fetch_count = 1;
        } else if (strncasecmp(fp, "ALL", 3) == 0 && (isspace((unsigned char)fp[3]) || fp[3] == '\0')) {
            fp += 3; fetch_all = 1;
        } else if (strncasecmp(fp, "FORWARD", 7) == 0 && isspace((unsigned char)fp[7])) {
            fp += 7;
            while (*fp && isspace((unsigned char)*fp)) fp++;
            if (strncasecmp(fp, "ALL", 3) == 0 && (isspace((unsigned char)fp[3]) || fp[3] == '\0')) {
                fp += 3; fetch_all = 1;
            } else {
                fetch_count = atoi(fp);
                if (fetch_count <= 0) fetch_count = 1;
                while (*fp && isdigit((unsigned char)*fp)) fp++;
            }
        } else if (strncasecmp(fp, "PRIOR", 5) == 0 && (isspace((unsigned char)fp[5]) || fp[5] == '\0')) {
            fp += 5; fetch_count = -1; /* backward */
        } else if (strncasecmp(fp, "FIRST", 5) == 0 && (isspace((unsigned char)fp[5]) || fp[5] == '\0')) {
            fp += 5; fetch_count = -2; /* special: go to first */
        } else if (strncasecmp(fp, "LAST", 4) == 0 && (isspace((unsigned char)fp[4]) || fp[4] == '\0')) {
            fp += 4; fetch_count = -3; /* special: go to last */
        }
        while (*fp && isspace((unsigned char)*fp)) fp++;
        /* Skip optional FROM keyword */
        if (strncasecmp(fp, "FROM", 4) == 0 && isspace((unsigned char)fp[4])) {
            fp += 4;
            while (*fp && isspace((unsigned char)*fp)) fp++;
        }
        /* Extract cursor name */
        char cname[64] = "";
        int ni = 0;
        while (*fp && !isspace((unsigned char)*fp) && *fp != ';' && ni < 63) cname[ni++] = *fp++;
        cname[ni] = '\0';

        for (int i = 0; i < ctx->cursor_count; i++) {
            if (strcasecmp(ctx->cursors[i].name, cname) == 0) {
                if (!ctx->cursors[i].is_open) {
                    result_set_error(rs, "24000", "cursor is not open");
                    return 1;
                }
                ResultSet *crs = &ctx->cursors[i].rs;
                result_init(rs);
                rs->is_select = 1;
                /* Copy column metadata */
                for (int c = 0; c < crs->num_cols; c++)
                    result_add_column(rs, crs->columns[c].name, crs->columns[c].pg_type_oid);

                /* Handle special directions */
                if (fetch_count == -1) { /* PRIOR */
                    ctx->cursors[i].pos--;
                    if (ctx->cursors[i].pos >= 0 && ctx->cursors[i].pos < crs->num_rows) {
                        int row = result_add_row(rs);
                        for (int c = 0; c < crs->num_cols; c++) {
                            if (crs->rows[ctx->cursors[i].pos].is_null[c])
                                result_set_null(rs, row, c);
                            else if (crs->rows[ctx->cursors[i].pos].fields[c])
                                result_set_field(rs, row, c, crs->rows[ctx->cursors[i].pos].fields[c]);
                        }
                    }
                } else if (fetch_count == -2) { /* FIRST */
                    ctx->cursors[i].pos = 0;
                    if (crs->num_rows > 0) {
                        int row = result_add_row(rs);
                        for (int c = 0; c < crs->num_cols; c++) {
                            if (crs->rows[0].is_null[c]) result_set_null(rs, row, c);
                            else if (crs->rows[0].fields[c]) result_set_field(rs, row, c, crs->rows[0].fields[c]);
                        }
                        ctx->cursors[i].pos = 1;
                    }
                } else if (fetch_count == -3) { /* LAST */
                    if (crs->num_rows > 0) {
                        ctx->cursors[i].pos = crs->num_rows - 1;
                        int row = result_add_row(rs);
                        for (int c = 0; c < crs->num_cols; c++) {
                            if (crs->rows[ctx->cursors[i].pos].is_null[c]) result_set_null(rs, row, c);
                            else if (crs->rows[ctx->cursors[i].pos].fields[c])
                                result_set_field(rs, row, c, crs->rows[ctx->cursors[i].pos].fields[c]);
                        }
                        ctx->cursors[i].pos = crs->num_rows;
                    }
                } else {
                    /* FORWARD n or NEXT or ALL */
                    int n = fetch_all ? (crs->num_rows - ctx->cursors[i].pos) : fetch_count;
                    for (int f = 0; f < n && ctx->cursors[i].pos < crs->num_rows; f++) {
                        int row = result_add_row(rs);
                        for (int c = 0; c < crs->num_cols; c++) {
                            if (crs->rows[ctx->cursors[i].pos].is_null[c])
                                result_set_null(rs, row, c);
                            else if (crs->rows[ctx->cursors[i].pos].fields[c])
                                result_set_field(rs, row, c, crs->rows[ctx->cursors[i].pos].fields[c]);
                        }
                        ctx->cursors[i].pos++;
                    }
                }
                snprintf(rs->command_tag, sizeof(rs->command_tag), "FETCH %d", rs->num_rows);
                return 1;
            }
        }
        char msg[256];
        snprintf(msg, sizeof(msg), "cursor \"%s\" does not exist", cname);
        result_set_error(rs, "34000", msg);
        return 1;
    }

    /* CLOSE name */
    if (strncasecmp(p, "CLOSE", 5) == 0 && isspace((unsigned char)p[5])) {
        const char *cp = p + 5;
        while (*cp && isspace((unsigned char)*cp)) cp++;
        char cname[64] = "";
        int ni = 0;
        while (*cp && !isspace((unsigned char)*cp) && *cp != ';' && ni < 63) cname[ni++] = *cp++;
        cname[ni] = '\0';
        for (int i = 0; i < ctx->cursor_count; i++) {
            if (strcasecmp(ctx->cursors[i].name, cname) == 0) {
                if (ctx->cursors[i].is_open) result_free(&ctx->cursors[i].rs);
                ctx->cursors[i].is_open = 0;
                ctx->cursors[i].pos = -1;
                ctx->cursors[i].name[0] = '\0'; /* mark as free slot */
                result_init(rs);
                strcpy(rs->command_tag, "CLOSE CURSOR");
                return 1;
            }
        }
        char msg[256];
        snprintf(msg, sizeof(msg), "cursor \"%s\" does not exist", cname);
        result_set_error(rs, "34000", msg);
        return 1;
    }

    /* MOVE [NEXT|FORWARD n] FROM name — skip without returning rows */
    if (strncasecmp(p, "MOVE", 4) == 0 && isspace((unsigned char)p[4])) {
        const char *mp = p + 4;
        while (*mp && isspace((unsigned char)*mp)) mp++;
        int move_count = 1;
        if (strncasecmp(mp, "NEXT", 4) == 0 && (isspace((unsigned char)mp[4]) || mp[4] == '\0')) {
            mp += 4; move_count = 1;
        } else if (strncasecmp(mp, "FORWARD", 7) == 0 && isspace((unsigned char)mp[7])) {
            mp += 7;
            while (*mp && isspace((unsigned char)*mp)) mp++;
            move_count = atoi(mp);
            if (move_count <= 0) move_count = 1;
            while (*mp && isdigit((unsigned char)*mp)) mp++;
        }
        while (*mp && isspace((unsigned char)*mp)) mp++;
        if (strncasecmp(mp, "FROM", 4) == 0 && isspace((unsigned char)mp[4])) {
            mp += 4;
            while (*mp && isspace((unsigned char)*mp)) mp++;
        }
        char cname[64] = "";
        int ni = 0;
        while (*mp && !isspace((unsigned char)*mp) && *mp != ';' && ni < 63) cname[ni++] = *mp++;
        cname[ni] = '\0';
        for (int i = 0; i < ctx->cursor_count; i++) {
            if (strcasecmp(ctx->cursors[i].name, cname) == 0) {
                if (!ctx->cursors[i].is_open) {
                    result_set_error(rs, "24000", "cursor is not open");
                    return 1;
                }
                ctx->cursors[i].pos += move_count;
                if (ctx->cursors[i].pos > ctx->cursors[i].rs.num_rows)
                    ctx->cursors[i].pos = ctx->cursors[i].rs.num_rows;
                result_init(rs);
                snprintf(rs->command_tag, sizeof(rs->command_tag), "MOVE %d", move_count);
                return 1;
            }
        }
        char msg[256];
        snprintf(msg, sizeof(msg), "cursor \"%s\" does not exist", cname);
        result_set_error(rs, "34000", msg);
        return 1;
    }

    return 0; /* not a cursor command */
}

/* Thread-local for CREATE TABLE ON NODE N */
__thread uint32_t g_dist_create_node_id = 0;

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

    /* Distributed commands: SHOW TABLE PLACEMENT, SHOW NODES, MOVE TABLE */
    if (handle_distributed(sql, rs, ctx)) return 1;

    /* DML on view — handled in query_executor.c view resolution, not here
     * (catalog_try_handle cannot call query_execute recursively) */
    if (0) {
        const char *p = sql;
        while (*p && isspace((unsigned char)*p)) p++;
        int is_upd = (strncasecmp(p, "UPDATE", 6) == 0 && isspace((unsigned char)p[6]));
        int is_del = (strncasecmp(p, "DELETE", 6) == 0);
        int is_ins = (strncasecmp(p, "INSERT", 6) == 0);
        if ((is_upd || is_del || is_ins) && ctx) {
            /* Extract table name */
            const char *t = p + 6;
            while (*t && isspace((unsigned char)*t)) t++;
            if (is_del && strncasecmp(t, "FROM", 4) == 0) { t += 4; while (*t && isspace((unsigned char)*t)) t++; }
            if (is_ins && strncasecmp(t, "INTO", 4) == 0) { t += 4; while (*t && isspace((unsigned char)*t)) t++; }
            char vname[128] = "";
            int vi = 0;
            while (*t && (isalnum((unsigned char)*t) || *t == '_') && vi < 127)
                vname[vi++] = *t++;
            vname[vi] = '\0';

            if (vname[0]) {
                DatabaseDesc dbd;
                SchemaDesc sd;
                if (cat_find_database(ctx->database, &dbd) == 0 &&
                    cat_find_schema(dbd.db_id, ctx->schema, &sd) == 0) {
                    ViewDesc vd;
                    if (cat_find_view(dbd.db_id, sd.schema_id, vname, &vd) == 0) {
                        /* Check updatable: no JOIN/UNION/GROUP BY */
                        if (strcasestr(vd.view_sql, " JOIN ") ||
                            strcasestr(vd.view_sql, " UNION ") ||
                            strcasestr(vd.view_sql, " GROUP BY ")) {
                            result_set_error(rs, "42809",
                                "cannot modify a non-updatable view (contains JOIN/UNION/GROUP BY)");
                            return 1;
                        }

                        /* Extract underlying table from view SQL */
                        const char *vf = strcasestr(vd.view_sql, " FROM ");
                        if (!vf) { result_set_error(rs, "XX000", "invalid view SQL"); return 1; }
                        vf += 6;
                        while (*vf && isspace((unsigned char)*vf)) vf++;
                        char underlying[128] = "";
                        int ui = 0;
                        while (*vf && (isalnum((unsigned char)*vf) || *vf == '_') && ui < 127)
                            underlying[ui++] = *vf++;
                        underlying[ui] = '\0';

                        if (!underlying[0]) { result_set_error(rs, "XX000", "cannot resolve view table"); return 1; }

                        /* Extract view WHERE condition */
                        char view_where[2048] = "";
                        const char *vw = strcasestr(vd.view_sql, " WHERE ");
                        if (vw) {
                            strncpy(view_where, vw + 7, sizeof(view_where) - 1);
                            view_where[sizeof(view_where) - 1] = '\0';
                            /* Trim trailing ORDER BY/LIMIT/; */
                            char *trim;
                            if ((trim = strcasestr(view_where, " ORDER BY "))) *trim = '\0';
                            if ((trim = strcasestr(view_where, " LIMIT "))) *trim = '\0';
                            int vl = (int)strlen(view_where);
                            while (vl > 0 && (view_where[vl-1] == ';' || isspace((unsigned char)view_where[vl-1])))
                                view_where[--vl] = '\0';
                        }

                        /* Build rewritten SQL: replace view name with underlying table */
                        const char *rest = t; /* everything after view name */
                        char new_sql[8192];

                        if (is_upd) {
                            if (view_where[0]) {
                                /* Check if outer has WHERE */
                                const char *ow = strcasestr(rest, " WHERE ");
                                if (ow) {
                                    /* UPDATE underlying SET ... WHERE view_cond AND outer_cond */
                                    snprintf(new_sql, sizeof(new_sql), "UPDATE %s%.*s WHERE %s AND %s",
                                             underlying, (int)(ow - rest), rest, view_where, ow + 7);
                                } else {
                                    snprintf(new_sql, sizeof(new_sql), "UPDATE %s%s WHERE %s",
                                             underlying, rest, view_where);
                                }
                            } else {
                                snprintf(new_sql, sizeof(new_sql), "UPDATE %s%s", underlying, rest);
                            }
                        } else if (is_del) {
                            if (view_where[0]) {
                                const char *ow = strcasestr(rest, " WHERE ");
                                if (ow) {
                                    snprintf(new_sql, sizeof(new_sql), "DELETE FROM %s WHERE %s AND %s",
                                             underlying, view_where, ow + 7);
                                } else {
                                    snprintf(new_sql, sizeof(new_sql), "DELETE FROM %s WHERE %s",
                                             underlying, view_where);
                                }
                            } else {
                                snprintf(new_sql, sizeof(new_sql), "DELETE FROM %s%s", underlying, rest);
                            }
                        } else if (is_ins) {
                            snprintf(new_sql, sizeof(new_sql), "INSERT INTO %s%s", underlying, rest);
                        }

                        /* Execute rewritten SQL */
                        result_init(rs);
                        query_execute(new_sql, rs, ctx);

                        /* WITH CHECK OPTION: verify view condition after DML */
                        if (vd.check_option && view_where[0] && !rs->has_error) {
                            /* TODO: re-query to verify inserted/updated rows satisfy view condition */
                        }

                        return 1;
                    }
                }
            }
        }
    }

    /* CREATE/DROP VIEW — handle pre-parse (no grammar needed) */
    {
        const char *p = sql;
        while (*p && isspace((unsigned char)*p)) p++;

        /* REFRESH MATERIALIZED VIEW name — re-executes stored SELECT, swaps
         * the underlying table in place. */
        if (strncasecmp(p, "REFRESH", 7) == 0 && isspace((unsigned char)p[7])) {
            const char *rq = p + 8;
            while (*rq && isspace((unsigned char)*rq)) rq++;
            if (strncasecmp(rq, "MATERIALIZED", 12) == 0 && isspace((unsigned char)rq[12])) {
                rq += 13;
                while (*rq && isspace((unsigned char)*rq)) rq++;
                if (strncasecmp(rq, "VIEW", 4) == 0 && isspace((unsigned char)rq[4])) {
                    rq += 5;
                    while (*rq && isspace((unsigned char)*rq)) rq++;
                    char vname[128] = "";
                    int vi = 0;
                    while (*rq && (isalnum((unsigned char)*rq) || *rq == '_') && vi < 127)
                        vname[vi++] = *rq++;
                    vname[vi] = '\0';

                    if (!ctx) return 0;
                    DatabaseDesc dbd; SchemaDesc sd;
                    if (cat_find_database(ctx->database, &dbd) < 0 ||
                        cat_find_schema(dbd.db_id, ctx->schema, &sd) < 0) return 0;
                    ViewDesc vd;
                    if (cat_find_view(dbd.db_id, sd.schema_id, vname, &vd) < 0) {
                        result_set_error(rs, "42P01", "materialized view does not exist");
                        return 1;
                    }
                    if (!vd.is_materialized) {
                        result_set_error(rs, "42809",
                            "REFRESH can only be applied to materialized views");
                        return 1;
                    }

                    /* Drop underlying table, then re-run CTAS. Wrapped in a
                     * single catalog-handler call — not atomic. A future
                     * enhancement could swap via rename. */
                    char step_sql[8192];
                    snprintf(step_sql, sizeof(step_sql), "DROP TABLE %s", vname);
                    ResultSet ir; memset(&ir, 0, sizeof(ir)); result_init(&ir);
                    query_execute(step_sql, &ir, ctx);
                    result_free(&ir);

                    snprintf(step_sql, sizeof(step_sql),
                             "CREATE TABLE %s AS %s", vname, vd.view_sql);
                    memset(&ir, 0, sizeof(ir)); result_init(&ir);
                    query_execute(step_sql, &ir, ctx);
                    if (ir.has_error) {
                        result_set_error(rs, ir.error_sqlstate[0] ?
                                         ir.error_sqlstate : "XX000",
                                         ir.error_message);
                        result_free(&ir);
                        return 1;
                    }
                    result_free(&ir);
                    strcpy(rs->command_tag, "REFRESH MATERIALIZED VIEW");
                    return 1;
                }
            }
        }

        if (strncasecmp(p, "CREATE", 6) == 0 && isspace((unsigned char)p[6])) {
            const char *q = p + 7;
            while (*q && isspace((unsigned char)*q)) q++;
            int is_replace = 0;
            if (strncasecmp(q, "OR", 2) == 0 && isspace((unsigned char)q[2])) {
                q += 3;
                while (*q && isspace((unsigned char)*q)) q++;
                if (strncasecmp(q, "REPLACE", 7) == 0) { is_replace = 1; q += 7; }
                while (*q && isspace((unsigned char)*q)) q++;
            }
            /* CREATE MATERIALIZED VIEW name AS <select>
             * Materialize via CTAS: CREATE TABLE name AS <select>, then
             * store the SQL under cat_create_matview so REFRESH/DROP work. */
            if (strncasecmp(q, "MATERIALIZED", 12) == 0 && isspace((unsigned char)q[12])) {
                const char *mq = q + 13;
                while (*mq && isspace((unsigned char)*mq)) mq++;
                if (strncasecmp(mq, "VIEW", 4) == 0 && isspace((unsigned char)mq[4])) {
                    mq += 5;
                    while (*mq && isspace((unsigned char)*mq)) mq++;
                    char vname[128] = "";
                    int vi = 0;
                    while (*mq && (isalnum((unsigned char)*mq) || *mq == '_') && vi < 127)
                        vname[vi++] = *mq++;
                    vname[vi] = '\0';
                    while (*mq && isspace((unsigned char)*mq)) mq++;
                    if (strncasecmp(mq, "AS", 2) != 0 ||
                        !isspace((unsigned char)mq[2])) {
                        result_set_error(rs, "42601",
                            "expected AS after CREATE MATERIALIZED VIEW <name>");
                        return 1;
                    }
                    mq += 3;
                    while (*mq && isspace((unsigned char)*mq)) mq++;

                    char vsql[4096];
                    strncpy(vsql, mq, sizeof(vsql) - 1);
                    vsql[sizeof(vsql) - 1] = '\0';
                    int vl = (int)strlen(vsql);
                    while (vl > 0 && (vsql[vl-1] == ';' || isspace((unsigned char)vsql[vl-1])))
                        vsql[--vl] = '\0';

                    if (!ctx) {
                        result_set_error(rs, "XX000", "no session context");
                        return 1;
                    }
                    DatabaseDesc dbd;
                    SchemaDesc   sd;
                    if (cat_find_database(ctx->database, &dbd) < 0 ||
                        cat_find_schema(dbd.db_id, ctx->schema, &sd) < 0) {
                        result_set_error(rs, "XX000", "no database/schema");
                        return 1;
                    }
                    ViewDesc existing;
                    if (cat_find_view(dbd.db_id, sd.schema_id, vname, &existing) == 0) {
                        if (is_replace) cat_drop_view(dbd.db_id, sd.schema_id, vname);
                        else {
                            result_set_error(rs, "42P07",
                                "materialized view already exists");
                            return 1;
                        }
                    }

                    /* Materialize: CREATE TABLE <vname> AS <select> */
                    char ctas[8192];
                    snprintf(ctas, sizeof(ctas),
                             "CREATE TABLE %s AS %s", vname, vsql);
                    ResultSet ir; memset(&ir, 0, sizeof(ir)); result_init(&ir);
                    query_execute(ctas, &ir, ctx);
                    if (ir.has_error) {
                        result_set_error(rs, ir.error_sqlstate[0] ?
                                         ir.error_sqlstate : "XX000",
                                         ir.error_message);
                        result_free(&ir);
                        return 1;
                    }
                    result_free(&ir);

                    if (cat_create_matview(dbd.db_id, sd.schema_id,
                                           vname, vsql) < 0) {
                        result_set_error(rs, "XX000",
                            "could not register materialized view");
                        return 1;
                    }
                    strcpy(rs->command_tag, "CREATE MATERIALIZED VIEW");
                    return 1;
                }
            }

            if (strncasecmp(q, "VIEW", 4) == 0 && isspace((unsigned char)q[4])) {
                q += 5;
                while (*q && isspace((unsigned char)*q)) q++;
                char vname[128] = "";
                int vi = 0;
                while (*q && (isalnum((unsigned char)*q) || *q == '_') && vi < 127)
                    vname[vi++] = *q++;
                vname[vi] = '\0';
                while (*q && isspace((unsigned char)*q)) q++;
                if (strncasecmp(q, "AS", 2) == 0 && isspace((unsigned char)q[2])) {
                    q += 3;
                    while (*q && isspace((unsigned char)*q)) q++;
                    /* q now points to the SELECT SQL */
                    char vsql[4096];
                    strncpy(vsql, q, sizeof(vsql) - 1);
                    vsql[sizeof(vsql) - 1] = '\0';
                    int vl = (int)strlen(vsql);
                    while (vl > 0 && (vsql[vl-1] == ';' || isspace((unsigned char)vsql[vl-1])))
                        vsql[--vl] = '\0';

                    /* Detect WITH CHECK OPTION */
                    int check_opt = 0;
                    {
                        char *wco = strcasestr(vsql, "WITH CHECK OPTION");
                        if (!wco) wco = strcasestr(vsql, "WITH CASCADED CHECK OPTION");
                        if (!wco) wco = strcasestr(vsql, "WITH LOCAL CHECK OPTION");
                        if (wco) {
                            if (strcasestr(wco, "LOCAL")) check_opt = 2;
                            else check_opt = 1; /* CASCADED (default) */
                            *wco = '\0'; /* strip from view SQL */
                            int svl = (int)strlen(vsql);
                            while (svl > 0 && isspace((unsigned char)vsql[svl-1]))
                                vsql[--svl] = '\0';
                        }
                    }

                    if (ctx) {
                        DatabaseDesc dbd;
                        SchemaDesc sd;
                        if (cat_find_database(ctx->database, &dbd) == 0 &&
                            cat_find_schema(dbd.db_id, ctx->schema, &sd) == 0) {
                            ViewDesc existing;
                            if (cat_find_view(dbd.db_id, sd.schema_id, vname, &existing) == 0) {
                                if (is_replace) {
                                    cat_drop_view(dbd.db_id, sd.schema_id, vname);
                                } else {
                                    result_set_error(rs, "42P07", "view already exists");
                                    return 1;
                                }
                            }
                            if (cat_create_view(dbd.db_id, sd.schema_id, vname, vsql) == 0) {
                                strcpy(rs->command_tag, "CREATE VIEW");
                                return 1;
                            }
                        }
                    }
                    result_set_error(rs, "XX000", "could not create view");
                    return 1;
                }
            }
        }
        if (strncasecmp(p, "DROP", 4) == 0 && isspace((unsigned char)p[4])) {
            const char *q = p + 5;
            while (*q && isspace((unsigned char)*q)) q++;
            /* DROP MATERIALIZED VIEW [IF EXISTS] name */
            if (strncasecmp(q, "MATERIALIZED", 12) == 0 && isspace((unsigned char)q[12])) {
                const char *mq = q + 13;
                while (*mq && isspace((unsigned char)*mq)) mq++;
                if (strncasecmp(mq, "VIEW", 4) == 0 && isspace((unsigned char)mq[4])) {
                    mq += 5;
                    while (*mq && isspace((unsigned char)*mq)) mq++;
                    int if_exists = 0;
                    if (strncasecmp(mq, "IF", 2) == 0 && isspace((unsigned char)mq[2])) {
                        mq += 3;
                        while (*mq && isspace((unsigned char)*mq)) mq++;
                        if (strncasecmp(mq, "EXISTS", 6) == 0) { if_exists = 1; mq += 6; }
                        while (*mq && isspace((unsigned char)*mq)) mq++;
                    }
                    char vname[128] = "";
                    int vi = 0;
                    while (*mq && (isalnum((unsigned char)*mq) || *mq == '_') && vi < 127)
                        vname[vi++] = *mq++;
                    vname[vi] = '\0';

                    if (!ctx) return 0;
                    DatabaseDesc dbd; SchemaDesc sd;
                    if (cat_find_database(ctx->database, &dbd) < 0 ||
                        cat_find_schema(dbd.db_id, ctx->schema, &sd) < 0) return 0;
                    ViewDesc vd;
                    if (cat_find_view(dbd.db_id, sd.schema_id, vname, &vd) < 0) {
                        if (if_exists) {
                            strcpy(rs->command_tag, "DROP MATERIALIZED VIEW");
                            return 1;
                        }
                        result_set_error(rs, "42P01", "materialized view does not exist");
                        return 1;
                    }
                    if (!vd.is_materialized) {
                        result_set_error(rs, "42809",
                            "DROP MATERIALIZED VIEW cannot be used on a regular view; use DROP VIEW instead");
                        return 1;
                    }

                    /* Drop the materialized underlying table, then the view entry. */
                    char drop_sql[256];
                    snprintf(drop_sql, sizeof(drop_sql), "DROP TABLE %s", vname);
                    ResultSet ir; memset(&ir, 0, sizeof(ir)); result_init(&ir);
                    query_execute(drop_sql, &ir, ctx);
                    result_free(&ir);
                    cat_drop_view(dbd.db_id, sd.schema_id, vname);
                    strcpy(rs->command_tag, "DROP MATERIALIZED VIEW");
                    return 1;
                }
            }
            if (strncasecmp(q, "VIEW", 4) == 0 && isspace((unsigned char)q[4])) {
                q += 5;
                while (*q && isspace((unsigned char)*q)) q++;
                int if_exists = 0;
                if (strncasecmp(q, "IF", 2) == 0 && isspace((unsigned char)q[2])) {
                    q += 3;
                    while (*q && isspace((unsigned char)*q)) q++;
                    if (strncasecmp(q, "EXISTS", 6) == 0) { if_exists = 1; q += 6; }
                    while (*q && isspace((unsigned char)*q)) q++;
                }
                char vname[128] = "";
                int vi = 0;
                while (*q && (isalnum((unsigned char)*q) || *q == '_') && vi < 127)
                    vname[vi++] = *q++;
                vname[vi] = '\0';
                if (ctx) {
                    DatabaseDesc dbd;
                    SchemaDesc sd;
                    if (cat_find_database(ctx->database, &dbd) == 0 &&
                        cat_find_schema(dbd.db_id, ctx->schema, &sd) == 0) {
                        ViewDesc vd;
                        if (cat_find_view(dbd.db_id, sd.schema_id, vname, &vd) == 0) {
                            cat_drop_view(dbd.db_id, sd.schema_id, vname);
                        } else if (!if_exists) {
                            result_set_error(rs, "42P01", "view does not exist");
                            return 1;
                        }
                    }
                }
                strcpy(rs->command_tag, "DROP VIEW");
                return 1;
            }
        }
    }

    /* PREPARE / EXECUTE / DEALLOCATE — SQL-level prepared statements */
    {
        const char *p = sql;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "PREPARE", 7) == 0 && isspace((unsigned char)p[7])) {
            const char *q = p + 8;
            while (*q && isspace((unsigned char)*q)) q++;
            char sname[64] = "";
            int si = 0;
            while (*q && (isalnum((unsigned char)*q) || *q == '_') && si < 63)
                sname[si++] = *q++;
            sname[si] = '\0';
            while (*q && isspace((unsigned char)*q)) q++;
            /* Skip optional (type_list) */
            if (*q == '(') {
                while (*q && *q != ')') q++;
                if (*q == ')') q++;
                while (*q && isspace((unsigned char)*q)) q++;
            }
            if (strncasecmp(q, "AS", 2) == 0 && isspace((unsigned char)q[2])) {
                q += 3;
                while (*q && isspace((unsigned char)*q)) q++;
                char stmt_sql[4096];
                strncpy(stmt_sql, q, sizeof(stmt_sql) - 1);
                stmt_sql[sizeof(stmt_sql) - 1] = '\0';
                int sl = (int)strlen(stmt_sql);
                while (sl > 0 && (stmt_sql[sl-1] == ';' || isspace((unsigned char)stmt_sql[sl-1])))
                    stmt_sql[--sl] = '\0';

                if (ctx && sname[0]) {
                    /* Find or create slot */
                    int slot = -1;
                    for (int i = 0; i < ctx->prepared_stmt_count; i++) {
                        if (strcasecmp(ctx->prepared_stmts[i].name, sname) == 0) {
                            slot = i;
                            if (ctx->prepared_stmts[i].query) free(ctx->prepared_stmts[i].query);
                            break;
                        }
                    }
                    if (slot < 0 && ctx->prepared_stmt_count < 32)
                        slot = ctx->prepared_stmt_count++;
                    if (slot >= 0) {
                        strncpy(ctx->prepared_stmts[slot].name, sname, 63);
                        ctx->prepared_stmts[slot].query = strdup(stmt_sql);
                        /* Count $N params */
                        int pc = 0;
                        for (const char *s = stmt_sql; *s; s++) {
                            if (*s == '$' && isdigit((unsigned char)s[1])) {
                                int n = atoi(s + 1);
                                if (n > pc) pc = n;
                            }
                        }
                        ctx->prepared_stmts[slot].param_count = pc;
                    }
                }
                result_init(rs);
                strcpy(rs->command_tag, "PREPARE");
                return 1;
            }
        }
        if (strncasecmp(p, "EXECUTE", 7) == 0 && isspace((unsigned char)p[7])) {
            const char *q = p + 8;
            while (*q && isspace((unsigned char)*q)) q++;
            char sname[64] = "";
            int si = 0;
            while (*q && (isalnum((unsigned char)*q) || *q == '_') && si < 63)
                sname[si++] = *q++;
            sname[si] = '\0';

            if (ctx && sname[0]) {
                /* Find prepared statement */
                int slot = -1;
                for (int i = 0; i < ctx->prepared_stmt_count; i++) {
                    if (strcasecmp(ctx->prepared_stmts[i].name, sname) == 0) {
                        slot = i; break;
                    }
                }
                if (slot < 0) {
                    result_set_error(rs, "26000", "prepared statement does not exist");
                    return 1;
                }

                /* Extract params from (val1, val2, ...) */
                while (*q && isspace((unsigned char)*q)) q++;
                char exec_sql[8192];
                strncpy(exec_sql, ctx->prepared_stmts[slot].query, sizeof(exec_sql) - 1);
                exec_sql[sizeof(exec_sql) - 1] = '\0';

                if (*q == '(') {
                    q++;
                    int pnum = 1;
                    while (*q && *q != ')') {
                        while (*q && isspace((unsigned char)*q)) q++;
                        char val[256] = "";
                        int vi = 0;
                        if (*q == '\'') {
                            q++;
                            while (*q && *q != '\'' && vi < 255) val[vi++] = *q++;
                            if (*q == '\'') q++;
                        } else {
                            while (*q && *q != ',' && *q != ')' && vi < 255) val[vi++] = *q++;
                        }
                        val[vi] = '\0';
                        /* Trim */
                        int vl = vi - 1;
                        while (vl >= 0 && isspace((unsigned char)val[vl])) val[vl--] = '\0';

                        /* Replace $N in exec_sql */
                        char placeholder[8];
                        snprintf(placeholder, sizeof(placeholder), "$%d", pnum);
                        char *pos = strstr(exec_sql, placeholder);
                        if (pos) {
                            char quoted[260];
                            snprintf(quoted, sizeof(quoted), "'%s'", val);
                            int pl = (int)strlen(placeholder);
                            int ql = (int)strlen(quoted);
                            memmove(pos + ql, pos + pl, strlen(pos + pl) + 1);
                            memcpy(pos, quoted, ql);
                        }
                        pnum++;
                        if (*q == ',') q++;
                    }
                }

                result_init(rs);
                query_execute(exec_sql, rs, ctx);
                return 1;
            }
        }
        if (strncasecmp(p, "DEALLOCATE", 10) == 0 && isspace((unsigned char)p[10])) {
            const char *q = p + 11;
            while (*q && isspace((unsigned char)*q)) q++;
            /* Skip optional PREPARE keyword */
            if (strncasecmp(q, "PREPARE", 7) == 0) { q += 7; while (*q && isspace((unsigned char)*q)) q++; }
            char sname[64] = "";
            int si = 0;
            while (*q && (isalnum((unsigned char)*q) || *q == '_') && si < 63)
                sname[si++] = *q++;
            sname[si] = '\0';

            if (ctx && sname[0]) {
                if (strcasecmp(sname, "ALL") == 0) {
                    for (int i = 0; i < ctx->prepared_stmt_count; i++) {
                        if (ctx->prepared_stmts[i].query) free(ctx->prepared_stmts[i].query);
                        ctx->prepared_stmts[i].query = NULL;
                    }
                    ctx->prepared_stmt_count = 0;
                } else {
                    for (int i = 0; i < ctx->prepared_stmt_count; i++) {
                        if (strcasecmp(ctx->prepared_stmts[i].name, sname) == 0) {
                            if (ctx->prepared_stmts[i].query) free(ctx->prepared_stmts[i].query);
                            ctx->prepared_stmts[i] = ctx->prepared_stmts[--ctx->prepared_stmt_count];
                            break;
                        }
                    }
                }
            }
            result_init(rs);
            strcpy(rs->command_tag, "DEALLOCATE");
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

    /* KILL QUERY */
    if (handle_kill(sql, rs, ctx)) return 1;

    /* Transaction commands */
    if (handle_transaction(sql, rs, ctx)) return 1;

    /* Standalone cursor commands */
    if (handle_cursor(sql, rs, ctx)) return 1;

    /* Built-in functions: version(), current_database(), etc. */
    if (starts_with_i(sql, "SELECT") || starts_with_i(sql, "select")) {
        if (handle_builtin_functions(sql, rs)) return 1;
    }

    /* pg_catalog queries — but NOT our LISTEN/NOTIFY helpers
     * (pg_listening_channels, pg_notify); they route through the real
     * parser/expression engine. Task 91 — Feature #62. */
    if ((stristr_found(sql, "pg_catalog") || stristr_found(sql, "pg_")) &&
        !stristr_found(sql, "pg_listening_channels") &&
        !stristr_found(sql, "pg_notify")) {
        if (handle_pg_catalog(sql, rs, ctx)) return 1;
    }

    /* information_schema queries */
    if (stristr_found(sql, "information_schema")) {
        if (handle_information_schema(sql, rs)) return 1;
    }

    /* Not a catalog query */
    return 0;
}
