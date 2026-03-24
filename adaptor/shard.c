/*
 * shard.c — Shard Routing for EvoSQL Distributed Engine
 *
 * Resolves shard from key value, routes DML to correct shard node,
 * scatter-gather for full table scans across shards.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "shard.h"
#include "distributed.h"
#include "../evolution/db/hash_idx.h"

/* ================================================================
 *  Shard resolution
 * ================================================================ */

int shard_resolve(const TableDesc *td, const char *key_value,
                  int *shard_ordinals, int max)
{
    if (!td || !key_value || max < 1) return 0;

    if (td->shard_type == SHARD_HASH) {
        if (td->shard_count <= 0) return 0;
        int len = (int)strlen(key_value);
        uint32_t h = hash_fnv1a(key_value, len);
        shard_ordinals[0] = (int)(h % (uint32_t)td->shard_count);
        return 1;
    }

    if (td->shard_type == SHARD_RANGE) {
        /* Range: load shard descriptors, compare bounds */
        ShardDesc shards[7];
        int ns = cat_list_shards(td->table_id, shards, 7);
        for (int i = 0; i < ns; i++) {
            if (shards[i].range_bound[0] == '\0') {
                /* MAXVALUE — always matches */
                shard_ordinals[0] = shards[i].shard_ordinal;
                return 1;
            }
            if (strcmp(key_value, shards[i].range_bound) < 0) {
                shard_ordinals[0] = shards[i].shard_ordinal;
                return 1;
            }
        }
        /* Past all bounds — should not happen with MAXVALUE partition */
        return 0;
    }

    return 0;
}

/* ================================================================
 *  SQL key extraction helpers
 * ================================================================ */

/* Extract shard key value from INSERT SQL.
 * Finds column position of shard_key in column list, then extracts
 * the corresponding value from VALUES clause. */
static int extract_insert_key(const char *sql, const char *shard_key,
                               char *out, int out_size)
{
    /* Find column list between first ( and ) after INSERT INTO <table> */
    const char *p = sql;
    while (*p && isspace((unsigned char)*p)) p++;

    /* Skip INSERT INTO <table> */
    if (strncasecmp(p, "INSERT", 6) != 0) return 0;
    p += 6;
    while (*p && isspace((unsigned char)*p)) p++;
    if (strncasecmp(p, "INTO", 4) == 0) p += 4;
    while (*p && isspace((unsigned char)*p)) p++;
    /* Skip table name */
    while (*p && !isspace((unsigned char)*p) && *p != '(') p++;
    while (*p && isspace((unsigned char)*p)) p++;

    if (*p != '(') return 0; /* No column list — can't determine position */
    p++;

    /* Parse column names to find shard_key position */
    int col_pos = -1, col_idx = 0;
    while (*p && *p != ')') {
        while (*p && isspace((unsigned char)*p)) p++;
        /* Extract column name */
        char col_name[128];
        int ci = 0;
        while (*p && *p != ',' && *p != ')' && !isspace((unsigned char)*p) && ci < 127)
            col_name[ci++] = *p++;
        col_name[ci] = '\0';

        if (strcasecmp(col_name, shard_key) == 0)
            col_pos = col_idx;
        col_idx++;

        while (*p && isspace((unsigned char)*p)) p++;
        if (*p == ',') p++;
    }

    if (col_pos < 0) return 0;

    /* Find VALUES */
    while (*p && *p != ')') p++;
    if (*p) p++; /* skip ')' */
    while (*p && isspace((unsigned char)*p)) p++;
    if (strncasecmp(p, "VALUES", 6) != 0) return 0;
    p += 6;
    while (*p && isspace((unsigned char)*p)) p++;
    if (*p != '(') return 0;
    p++;

    /* Skip to col_pos-th value */
    int cur = 0;
    while (cur < col_pos && *p) {
        /* Skip value (handle quoted strings) */
        if (*p == '\'') {
            p++;
            while (*p && *p != '\'') { if (*p == '\\') p++; p++; }
            if (*p == '\'') p++;
        } else {
            while (*p && *p != ',' && *p != ')') p++;
        }
        if (*p == ',') p++;
        while (*p && isspace((unsigned char)*p)) p++;
        cur++;
    }

    /* Extract the value */
    while (*p && isspace((unsigned char)*p)) p++;
    int oi = 0;
    if (*p == '\'') {
        p++;
        while (*p && *p != '\'' && oi < out_size - 1) {
            if (*p == '\\') p++;
            out[oi++] = *p++;
        }
    } else {
        while (*p && *p != ',' && *p != ')' && !isspace((unsigned char)*p) && oi < out_size - 1)
            out[oi++] = *p++;
    }
    out[oi] = '\0';
    return oi > 0 ? 1 : 0;
}

/* Extract shard key value from WHERE clause (equality condition).
 * Simple pattern: WHERE <shard_key> = <value> */
static int extract_where_key(const char *sql, const char *shard_key,
                              char *out, int out_size)
{
    const char *where = sql;
    while (*where) {
        if (strncasecmp(where, "WHERE", 5) == 0 &&
            (where == sql || isspace((unsigned char)where[-1])) &&
            isspace((unsigned char)where[5])) {
            where += 5;
            break;
        }
        where++;
    }
    if (!*where) return 0;

    while (*where && isspace((unsigned char)*where)) where++;

    /* Try to find shard_key = value pattern */
    int key_len = (int)strlen(shard_key);
    const char *p = where;
    while (*p) {
        if (strncasecmp(p, shard_key, key_len) == 0 &&
            (p == where || isspace((unsigned char)p[-1]) || p[-1] == '(')) {
            const char *after = p + key_len;
            while (*after && isspace((unsigned char)*after)) after++;
            if (*after == '=') {
                after++;
                while (*after && isspace((unsigned char)*after)) after++;
                int oi = 0;
                if (*after == '\'') {
                    after++;
                    while (*after && *after != '\'' && oi < out_size - 1) {
                        if (*after == '\\') after++;
                        out[oi++] = *after++;
                    }
                } else {
                    while (*after && !isspace((unsigned char)*after) &&
                           *after != ')' && *after != ';' &&
                           strncasecmp(after, "AND", 3) != 0 &&
                           oi < out_size - 1)
                        out[oi++] = *after++;
                }
                out[oi] = '\0';
                return oi > 0 ? 1 : 0;
            }
        }
        p++;
    }
    return 0;
}

/* ================================================================
 *  Shard-aware routing
 * ================================================================ */

int shard_try_route(const char *sql, const TableDesc *td,
                    ResultSet *rs, SessionCtx *ctx)
{
    if (td->shard_type == SHARD_NONE) return 0;

    extern int dist_is_enabled(void);
    extern int dist_get_my_id(void);

    /* In standalone mode (no distributed cluster), all shards are local —
     * let the normal query executor handle it without scatter-gather */
    if (!dist_is_enabled()) return 0;

    char key_value[256];
    int has_key = 0;

    /* Determine query type */
    const char *p = sql;
    while (*p && isspace((unsigned char)*p)) p++;

    if (strncasecmp(p, "INSERT", 6) == 0) {
        has_key = extract_insert_key(sql, td->shard_key, key_value, sizeof(key_value));
    } else if (strncasecmp(p, "SELECT", 6) == 0 ||
               strncasecmp(p, "UPDATE", 6) == 0 ||
               strncasecmp(p, "DELETE", 6) == 0) {
        has_key = extract_where_key(sql, td->shard_key, key_value, sizeof(key_value));
    } else {
        return 0;
    }

    if (has_key) {
        /* Shard pruning — route to single shard */
        int shard_ord;
        if (shard_resolve(td, key_value, &shard_ord, 1) != 1)
            return 0;

        ShardDesc sd;
        if (cat_find_shard(td->table_id, shard_ord, &sd) < 0)
            return 0;

        int my_id = dist_is_enabled() ? dist_get_my_id() : 0;
        if (sd.owner_node_id == my_id || (!dist_is_enabled() && sd.owner_node_id == 0))
            return 0; /* Local shard — handle normally */

        /* Forward to shard owner */
        result_init(rs);
        dist_forward_query(sd.owner_node_id, sql, rs);
        return 1;
    }

    /* No shard key in query — scatter-gather across all shards */
    if (strncasecmp(p, "SELECT", 6) == 0) {
        result_init(rs);
        shard_scatter_gather(td, sql, rs, ctx);
        return 1;
    }

    /* UPDATE/DELETE without shard key: scatter to all shards */
    if (strncasecmp(p, "UPDATE", 6) == 0 || strncasecmp(p, "DELETE", 6) == 0) {
        result_init(rs);
        shard_scatter_gather(td, sql, rs, ctx);
        return 1;
    }

    return 0;
}

/* ================================================================
 *  Scatter-gather
 * ================================================================ */

int shard_scatter_gather(const TableDesc *td, const char *sql,
                         ResultSet *merged_rs, SessionCtx *ctx)
{
    extern int dist_is_enabled(void);
    extern int dist_get_my_id(void);
    extern void safe_query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx);

    ShardDesc shards[7];
    int ns = cat_list_shards(td->table_id, shards, 7);
    if (ns <= 0) return -1;

    int my_id = dist_is_enabled() ? dist_get_my_id() : 0;
    int first_result = 1;
    int total_rows = 0;

    for (int i = 0; i < ns; i++) {
        ResultSet shard_rs;
        result_init(&shard_rs);

        if (shards[i].owner_node_id == my_id ||
            (!dist_is_enabled() && shards[i].owner_node_id == 0)) {
            /* Local shard — execute directly */
            safe_query_execute(sql, &shard_rs, ctx);
        } else {
            /* Remote shard — forward via PG wire protocol */
            dist_forward_query(shards[i].owner_node_id, sql, &shard_rs);
        }

        if (shard_rs.has_error) {
            result_set_error(merged_rs, shard_rs.error_sqlstate,
                             shard_rs.error_message);
            result_free(&shard_rs);
            return -1;
        }

        if (first_result && shard_rs.num_cols > 0) {
            /* Copy column metadata from first result */
            merged_rs->is_select = shard_rs.is_select;
            for (int c = 0; c < shard_rs.num_cols; c++) {
                result_add_column(merged_rs, shard_rs.columns[c].name,
                                  shard_rs.columns[c].pg_type_oid);
            }
            first_result = 0;
        }

        /* Append rows */
        for (int r = 0; r < shard_rs.num_rows; r++) {
            int row = result_add_row(merged_rs);
            if (row < 0) break;
            for (int c = 0; c < shard_rs.num_cols && c < MAX_COLUMNS; c++) {
                if (shard_rs.rows[r].is_null[c])
                    result_set_null(merged_rs, row, c);
                else if (shard_rs.rows[r].fields[c])
                    result_set_field(merged_rs, row, c, shard_rs.rows[r].fields[c]);
            }
            total_rows++;
        }

        result_free(&shard_rs);
    }

    snprintf(merged_rs->command_tag, sizeof(merged_rs->command_tag),
             "SELECT %d", total_rows);
    return 0;
}
