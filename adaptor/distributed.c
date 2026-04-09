/*
 * distributed.c — Built-in Distributed Query Engine for EvoSQL
 *
 * Transparent query routing: any node can serve any query.
 * Tables have owner_node_id in the catalog; queries targeting
 * remote tables are forwarded via PG wire protocol.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>
#include "distributed.h"
#include "pg_protocol.h"
#include "server.h"
#include "net.h"
#include "../evolution/db/catalog_internal.h"
#include "../evolution/db/table_api.h"
#include "../evolution/db/database.h"

/* ================================================================
 *  State
 * ================================================================ */
static int          g_dist_enabled = 0;
static int          g_dist_my_id = -1;
static int          g_dist_my_pg_port = 5433;

static DistNodeInfo g_dist_nodes[DIST_MAX_NODES];
static int          g_dist_num_nodes = 0;

/* Connection pool — one persistent conn per peer node */
static DistConn     g_dist_pool[DIST_MAX_NODES];

/* ================================================================
 *  Lifecycle
 * ================================================================ */

int dist_init(int my_node_id, int my_pg_port)
{
    g_dist_my_id = my_node_id;
    g_dist_my_pg_port = my_pg_port;
    g_dist_enabled = 1;
    memset(g_dist_nodes, 0, sizeof(g_dist_nodes));
    memset(g_dist_pool, 0, sizeof(g_dist_pool));
    for (int i = 0; i < DIST_MAX_NODES; i++) {
        g_dist_pool[i].sock = -1;
        g_dist_pool[i].node_id = i;
    }
    fprintf(stderr, "[DIST] Distributed engine initialized (node %d, pg_port %d)\n",
            my_node_id, my_pg_port);
    return 0;
}

int dist_is_enabled(void) { return g_dist_enabled; }
int dist_get_my_id(void)  { return g_dist_my_id; }

/* ================================================================
 *  Node registry
 * ================================================================ */

int dist_register_node(int node_id, const char *host, int pg_port, int dist_port)
{
    if (node_id < 0 || node_id >= DIST_MAX_NODES) return -1;
    strncpy(g_dist_nodes[node_id].host, host, 255);
    g_dist_nodes[node_id].host[255] = '\0';
    g_dist_nodes[node_id].pg_port = pg_port;
    g_dist_nodes[node_id].dist_port = dist_port;
    if (node_id >= g_dist_num_nodes)
        g_dist_num_nodes = node_id + 1;
    fprintf(stderr, "[DIST] Registered node %d: %s:%d (dist:%d)\n",
            node_id, host, pg_port, dist_port);
    return 0;
}

int dist_get_num_nodes(void) { return g_dist_num_nodes; }

int dist_get_node_info(int node_id, DistNodeInfo *out)
{
    if (node_id < 0 || node_id >= g_dist_num_nodes) return -1;
    *out = g_dist_nodes[node_id];
    return 0;
}

/* ================================================================
 *  Internal: TCP connect to peer node
 * ================================================================ */

static int dist_connect(int node_id)
{
    if (node_id < 0 || node_id >= g_dist_num_nodes) return -1;

    /* Already connected? */
    if (g_dist_pool[node_id].sock >= 0 && g_dist_pool[node_id].connected)
        return g_dist_pool[node_id].sock;

    /* Close stale socket */
    if (g_dist_pool[node_id].sock >= 0) {
        close(g_dist_pool[node_id].sock);
        g_dist_pool[node_id].sock = -1;
        g_dist_pool[node_id].connected = 0;
    }

    DistNodeInfo *ni = &g_dist_nodes[node_id];

    /* Resolve host */
    struct addrinfo hints, *res;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    char port_str[16];
    snprintf(port_str, sizeof(port_str), "%d", ni->dist_port);
    if (getaddrinfo(ni->host, port_str, &hints, &res) != 0) {
        fprintf(stderr, "[DIST] Cannot resolve %s:%d\n", ni->host, ni->dist_port);
        return -1;
    }

    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        freeaddrinfo(res);
        return -1;
    }

    /* Set TCP_NODELAY */
    int flag = 1;
    setsockopt(sock, IPPROTO_TCP, TCP_NODELAY, &flag, sizeof(flag));

    if (connect(sock, res->ai_addr, res->ai_addrlen) < 0) {
        fprintf(stderr, "[DIST] Cannot connect to node %d (%s:%d): %s\n",
                node_id, ni->host, ni->dist_port, strerror(errno));
        close(sock);
        freeaddrinfo(res);
        return -1;
    }
    freeaddrinfo(res);

    /* PG v3 startup handshake (trusted internal — no password) */
    char startup[256];
    int slen = 0;
    /* length placeholder */
    startup[slen++] = 0; startup[slen++] = 0; startup[slen++] = 0; startup[slen++] = 0;
    /* protocol 3.0 */
    startup[slen++] = 0; startup[slen++] = 3; startup[slen++] = 0; startup[slen++] = 0;
    /* user=_dist_internal */
    memcpy(startup + slen, "user\0_dist_internal\0", 20); slen += 20;
    /* database=evosql */
    memcpy(startup + slen, "database\0evosql\0", 16); slen += 16;
    /* terminator */
    startup[slen++] = '\0';
    /* Fill length */
    startup[0] = (slen >> 24) & 0xff;
    startup[1] = (slen >> 16) & 0xff;
    startup[2] = (slen >>  8) & 0xff;
    startup[3] = (slen      ) & 0xff;

    if (net_send_all(sock, startup, slen) < 0) {
        close(sock);
        return -1;
    }

    /* Read responses until ReadyForQuery ('Z') */
    char hdr[5];
    while (1) {
        if (net_recv_exact(sock, hdr, 1) < 0) { close(sock); return -1; }
        char msg_type = hdr[0];
        if (net_recv_exact(sock, hdr, 4) < 0) { close(sock); return -1; }
        int msg_len = ((unsigned char)hdr[0] << 24) |
                      ((unsigned char)hdr[1] << 16) |
                      ((unsigned char)hdr[2] <<  8) |
                      ((unsigned char)hdr[3]);
        int body_len = msg_len - 4;
        if (body_len > 0 && body_len < 65536) {
            char discard[65536];
            if (net_recv_exact(sock, discard, body_len) < 0) { close(sock); return -1; }
        }
        if (msg_type == 'Z') break; /* ReadyForQuery */
        if (msg_type == 'E') {
            fprintf(stderr, "[DIST] Startup error from node %d\n", node_id);
            close(sock);
            return -1;
        }
    }

    g_dist_pool[node_id].sock = sock;
    g_dist_pool[node_id].connected = 1;
    return sock;
}

/* ================================================================
 *  SQL table name extraction
 * ================================================================ */

/* Extract the primary table name from a SQL statement.
 * Handles: SELECT ... FROM <table>, INSERT INTO <table>,
 *          UPDATE <table>, DELETE FROM <table>,
 *          DROP TABLE <table>, TRUNCATE <table>,
 *          RECLAIM TABLE <table>
 * Returns 1 if found, 0 if not. */
static int extract_table_name(const char *sql, char *out, int out_size)
{
    const char *p = sql;
    while (*p && isspace((unsigned char)*p)) p++;

    if (strncasecmp(p, "SELECT", 6) == 0) {
        /* Find FROM keyword */
        const char *f = p;
        while (*f) {
            if (strncasecmp(f, "FROM", 4) == 0 &&
                (f == p || isspace((unsigned char)f[-1])) &&
                isspace((unsigned char)f[4])) {
                f += 4;
                while (*f && isspace((unsigned char)*f)) f++;
                break;
            }
            f++;
        }
        if (!*f) return 0;
        p = f;
    } else if (strncasecmp(p, "INSERT", 6) == 0) {
        p += 6;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "INTO", 4) == 0) p += 4;
        while (*p && isspace((unsigned char)*p)) p++;
    } else if (strncasecmp(p, "UPDATE", 6) == 0) {
        p += 6;
        while (*p && isspace((unsigned char)*p)) p++;
    } else if (strncasecmp(p, "DELETE", 6) == 0) {
        p += 6;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "FROM", 4) == 0) p += 4;
        while (*p && isspace((unsigned char)*p)) p++;
    } else if (strncasecmp(p, "DROP", 4) == 0) {
        p += 4;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "TABLE", 5) == 0) p += 5;
        else return 0;
        while (*p && isspace((unsigned char)*p)) p++;
        /* Skip IF EXISTS */
        if (strncasecmp(p, "IF", 2) == 0) {
            p += 2;
            while (*p && isspace((unsigned char)*p)) p++;
            if (strncasecmp(p, "EXISTS", 6) == 0) p += 6;
            while (*p && isspace((unsigned char)*p)) p++;
        }
    } else if (strncasecmp(p, "TRUNCATE", 8) == 0) {
        p += 8;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "TABLE", 5) == 0) { p += 5; while (*p && isspace((unsigned char)*p)) p++; }
    } else if (strncasecmp(p, "RECLAIM", 7) == 0) {
        p += 7;
        while (*p && isspace((unsigned char)*p)) p++;
        if (strncasecmp(p, "TABLE", 5) == 0) { p += 5; while (*p && isspace((unsigned char)*p)) p++; }
    } else {
        return 0; /* DDL/other — not routable */
    }

    /* Now p points to table name — extract it */
    int i = 0;
    /* Handle quoted identifiers */
    if (*p == '"') {
        p++;
        while (*p && *p != '"' && i < out_size - 1) out[i++] = *p++;
    } else {
        while (*p && !isspace((unsigned char)*p) && *p != '(' && *p != ';' &&
               *p != ',' && i < out_size - 1)
            out[i++] = *p++;
    }
    out[i] = '\0';
    return i > 0 ? 1 : 0;
}

/* ================================================================
 *  Forward query via PG wire protocol
 * ================================================================ */

int dist_forward_query(int node_id, const char *sql, ResultSet *rs)
{
    int sock = dist_connect(node_id);
    if (sock < 0) {
        result_set_error(rs, "08001",
            "Could not connect to remote node for distributed query");
        return -1;
    }

    /* Send Simple Query message: 'Q' + len + sql\0 */
    int sql_len = (int)strlen(sql) + 1; /* include null terminator */
    int msg_len = 4 + sql_len;
    char header[5];
    header[0] = 'Q';
    header[1] = (msg_len >> 24) & 0xff;
    header[2] = (msg_len >> 16) & 0xff;
    header[3] = (msg_len >>  8) & 0xff;
    header[4] = (msg_len      ) & 0xff;

    if (net_send_all(sock, header, 5) < 0 ||
        net_send_all(sock, sql, sql_len) < 0) {
        /* Connection broken — invalidate pool */
        close(sock);
        g_dist_pool[node_id].sock = -1;
        g_dist_pool[node_id].connected = 0;
        result_set_error(rs, "08006", "Connection to remote node lost");
        return -1;
    }

    /* Read response messages until ReadyForQuery ('Z') */
    char hdr[5];
    char body[65536];
    int got_row_desc = 0;

    while (1) {
        if (net_recv_exact(sock, hdr, 1) < 0) goto conn_error;
        char msg_type = hdr[0];
        if (net_recv_exact(sock, hdr, 4) < 0) goto conn_error;
        int body_len = ((unsigned char)hdr[0] << 24) |
                       ((unsigned char)hdr[1] << 16) |
                       ((unsigned char)hdr[2] <<  8) |
                       ((unsigned char)hdr[3]);
        body_len -= 4;
        if (body_len < 0) body_len = 0;
        if (body_len > (int)sizeof(body) - 1) {
            /* Too large — skip */
            char skip[4096];
            int remaining = body_len;
            while (remaining > 0) {
                int chunk = remaining > (int)sizeof(skip) ? (int)sizeof(skip) : remaining;
                if (net_recv_exact(sock, skip, chunk) < 0) goto conn_error;
                remaining -= chunk;
            }
            continue;
        }
        if (body_len > 0) {
            if (net_recv_exact(sock, body, body_len) < 0) goto conn_error;
        }

        if (msg_type == 'T') {
            /* RowDescription — parse column metadata */
            rs->is_select = 1;
            int offset = 0;
            int num_fields = ((unsigned char)body[0] << 8) | (unsigned char)body[1];
            offset = 2;
            for (int i = 0; i < num_fields && i < MAX_COLUMNS; i++) {
                /* Column name (null-terminated string) */
                const char *col_name = body + offset;
                while (offset < body_len && body[offset] != '\0') offset++;
                offset++; /* skip null */
                /* Skip: table OID(4) + attnum(2) + type OID(4) + type len(2) +
                   type mod(4) + format code(2) = 18 bytes */
                int pg_oid = PG_OID_TEXT;
                if (offset + 10 <= body_len) {
                    offset += 6; /* skip table OID + attnum */
                    pg_oid = ((unsigned char)body[offset] << 24) |
                             ((unsigned char)body[offset+1] << 16) |
                             ((unsigned char)body[offset+2] << 8) |
                             ((unsigned char)body[offset+3]);
                    offset += 12; /* type OID(4) + type len(2) + type mod(4) + format(2) */
                }
                result_add_column(rs, col_name, pg_oid);
            }
            got_row_desc = 1;

        } else if (msg_type == 'D') {
            /* DataRow — parse field values */
            int offset = 0;
            int num_fields = ((unsigned char)body[0] << 8) | (unsigned char)body[1];
            offset = 2;
            int row_idx = result_add_row(rs);
            for (int i = 0; i < num_fields && i < MAX_COLUMNS; i++) {
                if (offset + 4 > body_len) break;
                int fld_len = ((unsigned char)body[offset] << 24) |
                              ((unsigned char)body[offset+1] << 16) |
                              ((unsigned char)body[offset+2] << 8) |
                              ((unsigned char)body[offset+3]);
                offset += 4;
                if (fld_len == -1 || (unsigned int)fld_len == 0xFFFFFFFF) {
                    result_set_null(rs, row_idx, i);
                } else {
                    if (offset + fld_len <= body_len) {
                        char val[8192];
                        int clen = fld_len < (int)sizeof(val) - 1 ? fld_len : (int)sizeof(val) - 1;
                        memcpy(val, body + offset, clen);
                        val[clen] = '\0';
                        result_set_field(rs, row_idx, i, val);
                    }
                    offset += fld_len;
                }
            }

        } else if (msg_type == 'C') {
            /* CommandComplete — copy tag */
            if (body_len > 0) {
                int tlen = body_len < (int)sizeof(rs->command_tag) - 1 ?
                           body_len : (int)sizeof(rs->command_tag) - 1;
                memcpy(rs->command_tag, body, tlen);
                rs->command_tag[tlen] = '\0';
                /* Remove trailing null if present */
                int l = (int)strlen(rs->command_tag);
                while (l > 0 && rs->command_tag[l-1] == '\0') l--;
            }

        } else if (msg_type == 'E') {
            /* ErrorResponse — parse error fields */
            char err_msg[1024] = "Remote error";
            char sqlstate[6] = "42000";
            int offset = 0;
            while (offset < body_len) {
                char field_type = body[offset++];
                if (field_type == '\0') break;
                const char *val = body + offset;
                while (offset < body_len && body[offset] != '\0') offset++;
                offset++; /* skip null */
                if (field_type == 'M') {
                    strncpy(err_msg, val, sizeof(err_msg) - 1);
                } else if (field_type == 'C') {
                    strncpy(sqlstate, val, 5);
                    sqlstate[5] = '\0';
                }
            }
            result_set_error(rs, sqlstate, err_msg);

        } else if (msg_type == 'Z') {
            /* ReadyForQuery — done */
            break;
        }
        /* Ignore other messages (S, N, etc.) */
    }

    if (got_row_desc && !rs->has_error) {
        snprintf(rs->command_tag, sizeof(rs->command_tag),
                 "SELECT %d", rs->num_rows);
    }

    return rs->has_error ? -1 : 0;

conn_error:
    close(sock);
    g_dist_pool[node_id].sock = -1;
    g_dist_pool[node_id].connected = 0;
    result_set_error(rs, "08006", "Connection to remote node lost during query");
    return -1;
}

/* ================================================================
 *  Query routing
 * ================================================================ */

int dist_try_route(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    if (!g_dist_enabled) return 0;

    char table_name[256];
    if (!extract_table_name(sql, table_name, sizeof(table_name)))
        return 0; /* Can't determine table — let local engine handle */

    /* Resolve table in catalog */
    const char *db = ctx ? ctx->database : "evosql";
    const char *sch = ctx ? ctx->schema : "default";

    TableDesc td;
    if (cat_resolve_table(db, sch, table_name, &td) < 0)
        return 0; /* Table not found — let local engine produce the error */

    /* Shard-aware routing — check if table is sharded */
    if (td.shard_type != SHARD_NONE) {
        extern int shard_try_route(const char *sql, const TableDesc *td,
                                   ResultSet *rs, SessionCtx *ctx);
        return shard_try_route(sql, &td, rs, ctx);
    }

    /* Local table or unset owner — handle locally */
    if (td.owner_node_id == 0 ||
        (int)td.owner_node_id == g_dist_my_id)
        return 0;

    /* Remote table — forward to owner node */
    result_init(rs);
    dist_forward_query((int)td.owner_node_id, sql, rs);
    return 1;
}

/* ================================================================
 *  Distributed listener — handle incoming forwarded queries
 * ================================================================ */

void dist_handle_client(socket_t sock)
{
    conn_t conn;
    conn_init(&conn, sock);

    /* PG startup handshake (trusted — accept any user) */
    char username[256];
    if (pg_handle_startup(&conn, username, sizeof(username)) < 0) {
        return;
    }
    /* Send BackendKeyData + ReadyForQuery (pg_handle_startup no longer does) */
    pg_send_backend_key_data(&conn, platform_getpid(), 0);
    pg_send_ready_for_query(&conn, 'I');

    /* Query loop */
    while (1) {
        char type;
        char msg_buf[65536];
        int msg_len;

        if (pg_read_message(&conn, &type, msg_buf, &msg_len) < 0)
            break;

        if (type == 'X') break; /* Terminate */

        if (type == 'Q') {
            /* Simple Query */
            const char *query = msg_buf; /* null-terminated by pg_read_message */

            ResultSet rs;
            result_init(&rs);
            SessionCtx local_ctx;
            memset(&local_ctx, 0, sizeof(local_ctx));
            strcpy(local_ctx.database, "evosql");
            strcpy(local_ctx.schema, "default");
            strcpy(local_ctx.username, "admin");

            safe_query_execute(query, &rs, &local_ctx);

            if (rs.has_error) {
                pg_send_error(&conn, "ERROR", rs.error_sqlstate, rs.error_message);
            } else if (rs.is_select && rs.num_cols > 0) {
                pg_send_result_set(&conn, &rs);
            } else {
                pg_send_command_complete(&conn, rs.command_tag);
            }

            pg_send_ready_for_query(&conn, 'I');
            result_free(&rs);
        }
    }
}

/* ================================================================
 *  MOVE TABLE
 * ================================================================ */

int dist_move_table(const char *table_name, int dest_node_id,
                    ResultSet *rs, SessionCtx *ctx)
{
    if (!g_dist_enabled) {
        result_set_error(rs, "0A000", "Distributed mode is not enabled");
        return -1;
    }
    if (dest_node_id < 0 || dest_node_id >= g_dist_num_nodes) {
        result_set_error(rs, "42000", "Invalid destination node ID");
        return -1;
    }

    const char *db = ctx ? ctx->database : "evosql";
    const char *sch = ctx ? ctx->schema : "default";

    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = 0;
    if (cat_resolve_table(db, sch, table_name, &td) < 0) {
        result_set_error(rs, "42P01", "Table not found");
        return -1;
    }
    ncols = cat_find_columns(td.table_id, cols, CAT_MAX_COLUMNS);

    int current_owner = (int)td.owner_node_id;
    if (current_owner == dest_node_id ||
        (current_owner == 0 && dest_node_id == g_dist_my_id)) {
        result_set_error(rs, "42000", "Table is already on the destination node");
        return -1;
    }

    /* If we are the current owner (or owner=0 means local) — export data */
    int is_local_source = (current_owner == 0 || current_owner == g_dist_my_id);

    if (is_local_source) {
        /* Scan all rows and INSERT them on the destination node */
        if (td.pk_root_page != 0 && td.heap_page != 0) {
            /* Build column list for INSERT */
            char col_list[4096];
            int cl_pos = 0;
            for (int i = 0; i < ncols && cl_pos < (int)sizeof(col_list) - 1; i++) {
                if (i > 0) cl_pos += snprintf(col_list + cl_pos, sizeof(col_list) - cl_pos, ", ");
                cl_pos += snprintf(col_list + cl_pos, sizeof(col_list) - cl_pos, "%s", cols[i].col_name);
            }

            /* Scan rows using tapi_scan */
            TableScanCursor cursor;
            if (tapi_scan_begin(&td, &cursor) == 0) {
                char pk_key[256];
                char record[RECORD_BUF_SIZE];

                while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
                    /* Parse record fields (FIELD_SEP-delimited) */
                    char *fields[64];
                    int nf = 0;
                    char *saveptr = NULL;
                    char *tok = strtok_r(record, FIELD_SEP, &saveptr);
                    while (tok && nf < 64) {
                        fields[nf++] = tok;
                        tok = strtok_r(NULL, FIELD_SEP, &saveptr);
                    }

                    /* Build INSERT statement */
                    char insert_sql[16384];
                    int pos = snprintf(insert_sql, sizeof(insert_sql),
                                       "INSERT INTO %s (%s) VALUES (",
                                       table_name, col_list);
                    for (int fi = 0; fi < nf && fi < ncols; fi++) {
                        if (pos >= (int)sizeof(insert_sql) - 8) break;
                        if (fi > 0) { insert_sql[pos++] = ','; insert_sql[pos++] = ' '; }
                        insert_sql[pos++] = '\'';
                        /* Escape single quotes */
                        for (const char *v = fields[fi]; *v; v++) {
                            if (pos >= (int)sizeof(insert_sql) - 4) break;
                            if (*v == '\'') insert_sql[pos++] = '\'';
                            insert_sql[pos++] = *v;
                        }
                        insert_sql[pos++] = '\'';
                    }
                    if (pos < (int)sizeof(insert_sql) - 2) {
                        insert_sql[pos++] = ')';
                    }
                    insert_sql[pos] = '\0';

                    /* Forward INSERT to destination */
                    ResultSet ins_rs;
                    result_init(&ins_rs);
                    dist_forward_query(dest_node_id, insert_sql, &ins_rs);
                    if (ins_rs.has_error) {
                        result_set_error(rs, ins_rs.error_sqlstate, ins_rs.error_message);
                        result_free(&ins_rs);
                        tapi_scan_end(&cursor);
                        return -1;
                    }
                    result_free(&ins_rs);
                }
                tapi_scan_end(&cursor);
            }

            /* Delete local data: destroy PK tree + free heap pages */
            BTree2 pk_tree = tapi_pk_tree(&td);
            bt2_destroy(&pk_tree);

            /* Free secondary indexes */
            IndexDesc idxs[32];
            int nidx = cat_list_indexes(td.table_id, idxs, 32);
            for (int i = 0; i < nidx; i++) {
                if (idxs[i].root_page > 0) {
                    BTree2 idx_tree = { idxs[i].root_page };
                    bt2_destroy(&idx_tree);
                }
            }

            tapi_free_heap_pages(&td);
        }

        /* Update catalog: set owner to destination, clear local PK/heap */
        cat_update_owner_node(td.table_id, td.table_name,
                              td.schema_id, (uint32_t)dest_node_id);
        cat_update_pk_root(td.table_id, td.table_name, td.schema_id, 0);
        cat_update_heap_page(td.table_id, td.table_name, td.schema_id, 0);

    } else {
        /* We're not the owner — need to tell the owner to move the data */
        /* For now, forward a MOVE TABLE command to the owner */
        char move_sql[512];
        snprintf(move_sql, sizeof(move_sql), "MOVE TABLE %s TO NODE %d",
                 table_name, dest_node_id);
        dist_forward_query(current_owner, move_sql, rs);
        return rs->has_error ? -1 : 0;
    }

    snprintf(rs->command_tag, sizeof(rs->command_tag), "MOVE TABLE");
    return 0;
}
