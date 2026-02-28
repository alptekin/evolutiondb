/*
 * EvoSQL Adaptor — PostgreSQL Wire Protocol Server
 *
 * Listens on TCP port 5433 and speaks PostgreSQL v3 wire protocol.
 * DBeaver, pgAdmin, psql can connect using PostgreSQL JDBC/libpq driver.
 *
 * Multi-threaded: each connection handled in its own thread.
 * Query execution serialized via mutex (EvoSQL is not thread-safe).
 *
 * Usage:
 *   evosql-server[.exe] [port]
 *   Default port: 5433
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include "platform.h"

#include "pg_protocol.h"
#include "query_executor.h"
#include "result.h"

#define DEFAULT_PORT 5433

/* Mutex for serializing query execution (EvoSQL globals are not thread-safe) */
static mutex_t g_query_lock;

/* ----------------------------------------------------------------
 *  Execute query under lock (thread-safe wrapper)
 * ---------------------------------------------------------------- */
static void safe_query_execute(const char *sql, ResultSet *rs)
{
    mutex_lock(&g_query_lock);
    query_execute(sql, rs);
    mutex_unlock(&g_query_lock);
}

/* ----------------------------------------------------------------
 *  Handle a single client connection (runs in its own thread)
 * ---------------------------------------------------------------- */
static void handle_client(socket_t client_sock)
{
    char *msg_buf;
    ResultSet *rs;
    char msg_type;
    int msg_len;
    /* Pending query for Extended Query Protocol */
    char *pending_query = NULL;
    int pending_described = 0;

    /* Allocate per-thread buffers on heap */
    msg_buf = (char *)malloc(65536);
    rs = (ResultSet *)calloc(1, sizeof(ResultSet));
    if (!msg_buf || !rs) {
        fprintf(stderr, "[adaptor] Out of memory for client buffers\n");
        if (msg_buf) free(msg_buf);
        if (rs) free(rs);
        socket_close(client_sock);
        return;
    }

    printf("[adaptor] Client connected\n"); fflush(stdout);

    /* Step 1: Startup handshake */
    if (pg_handle_startup(client_sock) < 0) {
        printf("[adaptor] Startup failed, closing connection\n");
        fflush(stdout);
        free(msg_buf);
        free(rs);
        socket_close(client_sock);
        return;
    }

    /* Step 2: Query loop */
    while (1) {
        if (pg_read_message(client_sock, &msg_type, msg_buf, &msg_len) < 0) {
            printf("[adaptor] Connection closed by client\n");
            break;
        }

        switch (msg_type) {

        case PG_MSG_QUERY: {
            /* Simple Query protocol — may contain multiple statements
             * separated by semicolons. Per PG protocol, we must send
             * one response per statement, then a single ReadyForQuery. */
            char *sql_full = msg_buf;
            char *sql_copy = strdup(sql_full);
            char *remaining = sql_copy;
            int had_any = 0;

            printf("[adaptor] Query: %.200s%s\n", sql_full,
                   strlen(sql_full) > 200 ? "..." : "");
            fflush(stdout);

            while (remaining && *remaining) {
                /* Skip leading whitespace */
                while (*remaining && isspace((unsigned char)*remaining))
                    remaining++;
                if (!*remaining) break;

                /* Find the next semicolon (not inside quotes) */
                char *stmt = remaining;
                char *semi = NULL;
                int in_single = 0, in_double = 0;
                char *p;
                for (p = remaining; *p; p++) {
                    if (*p == '\'' && !in_double) in_single = !in_single;
                    else if (*p == '"' && !in_single) in_double = !in_double;
                    else if (*p == ';' && !in_single && !in_double) {
                        semi = p;
                        break;
                    }
                }

                if (semi) {
                    *semi = '\0';
                    remaining = semi + 1;
                } else {
                    remaining = NULL;
                }

                /* Strip trailing whitespace from this statement */
                {
                    int slen = (int)strlen(stmt);
                    while (slen > 0 && isspace((unsigned char)stmt[slen-1]))
                        stmt[--slen] = '\0';
                }
                if (!*stmt) continue;

                had_any = 1;
                safe_query_execute(stmt, rs);

                if (rs->has_error) {
                    pg_send_error(client_sock, "ERROR",
                                  rs->error_sqlstate, rs->error_message);
                } else if (rs->command_tag[0] == '\0') {
                    pg_send_empty_query(client_sock);
                } else if (rs->is_select) {
                    pg_send_result_set(client_sock, rs);
                } else {
                    pg_send_command_complete(client_sock, rs->command_tag);
                }
            }

            if (!had_any) {
                pg_send_empty_query(client_sock);
            }

            pg_send_ready_for_query(client_sock, 'I');
            free(sql_copy);
            break;
        }

        case PG_MSG_TERMINATE:
            printf("[adaptor] Client terminated\n"); fflush(stdout);
            goto cleanup;

        /* Extended Query Protocol */
        case PG_MSG_PARSE: {
            /* Parse message body: stmt_name\0 + query\0 + int16(nparams) + ... */
            char *stmt_name = msg_buf;
            char *query = stmt_name + strlen(stmt_name) + 1;
            printf("[adaptor] Extended Parse: %s\n", query);
            fflush(stdout);

            /* Save query for Execute phase */
            if (pending_query) free(pending_query);
            pending_query = strdup(query);
            pending_described = 0;

            PgBuf b;
            pg_buf_init(&b, PG_RESP_PARSE_COMPLETE);
            pg_buf_send(&b, client_sock);
            break;
        }

        case PG_MSG_BIND: {
            /* Bind message body:
             *   portal_name\0 + stmt_name\0
             *   int16 num_format_codes + int16[] format_codes
             *   int16 num_params + (int32 len + bytes)[] params
             *   int16 num_result_format_codes + int16[] result_format_codes
             *
             * We parse parameter values and substitute $1, $2, ... in
             * pending_query so catalog handlers see real values.
             */
            {
                char *ptr = msg_buf;
                /* Skip portal name */
                ptr += strlen(ptr) + 1;
                /* Skip statement name */
                ptr += strlen(ptr) + 1;

                /* Skip format codes */
                int16_t num_fmt;
                memcpy(&num_fmt, ptr, 2);
                num_fmt = ntohs(num_fmt);
                ptr += 2 + num_fmt * 2;

                /* Read parameter values */
                int16_t num_params;
                memcpy(&num_params, ptr, 2);
                num_params = ntohs(num_params);
                ptr += 2;

                if (num_params > 0 && pending_query) {
                    /* Collect parameter values */
                    char *param_vals[64];
                    int pi;
                    for (pi = 0; pi < num_params && pi < 64; pi++) {
                        int32_t plen;
                        memcpy(&plen, ptr, 4);
                        plen = ntohl(plen);
                        ptr += 4;
                        if (plen == -1) {
                            param_vals[pi] = strdup("NULL");
                        } else {
                            param_vals[pi] = (char *)malloc(plen + 1);
                            memcpy(param_vals[pi], ptr, plen);
                            param_vals[pi][plen] = '\0';
                            ptr += plen;
                        }
                    }

                    /* Substitute $1, $2, ... with quoted values in pending_query */
                    char *new_query = (char *)malloc(65536);
                    char *dst = new_query;
                    char *src = pending_query;
                    while (*src) {
                        if (*src == '$' && src[1] >= '1' && src[1] <= '9') {
                            int idx = 0;
                            src++; /* skip '$' */
                            while (*src >= '0' && *src <= '9') {
                                idx = idx * 10 + (*src - '0');
                                src++;
                            }
                            idx--; /* 0-based */
                            if (idx >= 0 && idx < num_params) {
                                if (strcmp(param_vals[idx], "NULL") == 0) {
                                    memcpy(dst, "NULL", 4);
                                    dst += 4;
                                } else {
                                    *dst++ = '\'';
                                    /* Copy value, escaping single quotes */
                                    char *v = param_vals[idx];
                                    while (*v) {
                                        if (*v == '\'') *dst++ = '\'';
                                        *dst++ = *v++;
                                    }
                                    *dst++ = '\'';
                                }
                            }
                        } else {
                            *dst++ = *src++;
                        }
                    }
                    *dst = '\0';

                    printf("[adaptor] Bind: resolved query: %s\n", new_query);
                    fflush(stdout);

                    free(pending_query);
                    pending_query = new_query;

                    for (pi = 0; pi < num_params && pi < 64; pi++)
                        free(param_vals[pi]);
                }
            }

            PgBuf b;
            pg_buf_init(&b, PG_RESP_BIND_COMPLETE);
            pg_buf_send(&b, client_sock);
            break;
        }

        case PG_MSG_DESCRIBE: {
            /* Describe: type_byte('S'/'P') + name\0 */
            char desc_type = msg_buf[0];
            printf("[adaptor] Extended Describe(%c)\n", desc_type);
            fflush(stdout);

            /* Statement Describe: send ParameterDescription first */
            if (desc_type == 'S') {
                PgBuf pb;
                pg_buf_init(&pb, PG_RESP_PARAM_DESC);
                pg_buf_add_int16(&pb, 0);
                pg_buf_send(&pb, client_sock);
            }

            if (pending_query && pending_query[0] != '\0') {
                /* Execute the query to get column info */
                safe_query_execute(pending_query, rs);
                pending_described = 1;

                if (rs->is_select && !rs->has_error && rs->num_cols > 0) {
                    /* Send RowDescription */
                    PgBuf b;
                    int c;
                    pg_buf_init(&b, PG_RESP_ROW_DESC);
                    pg_buf_add_int16(&b, (short)rs->num_cols);
                    for (c = 0; c < rs->num_cols; c++) {
                        pg_buf_add_string(&b, rs->columns[c].name);
                        pg_buf_add_int32(&b, rs->columns[c].table_oid);
                        pg_buf_add_int16(&b, (short)rs->columns[c].attnum);
                        pg_buf_add_int32(&b, rs->columns[c].pg_type_oid);
                        pg_buf_add_int16(&b, (short)rs->columns[c].type_len);
                        pg_buf_add_int32(&b, rs->columns[c].type_modifier);
                        pg_buf_add_int16(&b, 0);  /* format: text */
                    }
                    pg_buf_send(&b, client_sock);
                } else {
                    /* NoData for non-SELECT or error */
                    PgBuf b;
                    pg_buf_init(&b, PG_RESP_NO_DATA);
                    pg_buf_send(&b, client_sock);
                }
            } else {
                PgBuf b;
                pg_buf_init(&b, PG_RESP_NO_DATA);
                pg_buf_send(&b, client_sock);
            }
            break;
        }

        case PG_MSG_EXECUTE: {
            printf("[adaptor] Extended Execute\n"); fflush(stdout);

            if (pending_query && pending_query[0] != '\0') {
                /* Only execute if not already done in Describe */
                if (!pending_described) {
                    safe_query_execute(pending_query, rs);
                }

                if (rs->has_error) {
                    pg_send_error(client_sock, "ERROR",
                                  rs->error_sqlstate, rs->error_message);
                } else if (rs->is_select) {
                    /* If Describe was skipped, we must send RowDescription
                     * before any DataRows, otherwise the JDBC driver sees
                     * tuples with no field structure. */
                    if (!pending_described && rs->num_cols > 0) {
                        PgBuf rd;
                        int ci;
                        pg_buf_init(&rd, PG_RESP_ROW_DESC);
                        pg_buf_add_int16(&rd, (short)rs->num_cols);
                        for (ci = 0; ci < rs->num_cols; ci++) {
                            pg_buf_add_string(&rd, rs->columns[ci].name);
                            pg_buf_add_int32(&rd, rs->columns[ci].table_oid);
                            pg_buf_add_int16(&rd, (short)rs->columns[ci].attnum);
                            pg_buf_add_int32(&rd, rs->columns[ci].pg_type_oid);
                            pg_buf_add_int16(&rd, (short)rs->columns[ci].type_len);
                            pg_buf_add_int32(&rd, rs->columns[ci].type_modifier);
                            pg_buf_add_int16(&rd, 0);  /* format: text */
                        }
                        pg_buf_send(&rd, client_sock);
                    }

                    /* Send DataRows */
                    PgBuf b;
                    int r, c;
                    for (r = 0; r < rs->num_rows; r++) {
                        pg_buf_init(&b, PG_RESP_DATA_ROW);
                        pg_buf_add_int16(&b, (short)rs->num_cols);
                        for (c = 0; c < rs->num_cols; c++) {
                            if (rs->rows[r].is_null[c]) {
                                pg_buf_add_int32(&b, -1);
                            } else {
                                int flen = (int)strlen(rs->rows[r].fields[c]);
                                pg_buf_add_int32(&b, flen);
                                pg_buf_add_bytes(&b, rs->rows[r].fields[c], flen);
                            }
                        }
                        pg_buf_send(&b, client_sock);
                    }
                    pg_send_command_complete(client_sock, rs->command_tag);
                } else {
                    pg_send_command_complete(client_sock,
                        rs->command_tag[0] ? rs->command_tag : "OK");
                }

                /* Clear state after execution */
                pending_described = 0;
                free(pending_query);
                pending_query = NULL;
            } else {
                pg_send_command_complete(client_sock, "OK");
            }
            break;
        }

        case PG_MSG_SYNC: {
            pending_described = 0;
            pg_send_ready_for_query(client_sock, 'I');
            break;
        }

        case PG_MSG_CLOSE: {
            PgBuf b;
            pg_buf_init(&b, PG_RESP_CLOSE_COMPLETE);
            pg_buf_send(&b, client_sock);
            break;
        }

        case PG_MSG_FLUSH: {
            /* Flush — no-op, we send immediately */
            break;
        }

        case 'p': {
            /* PasswordMessage — ignore, we don't authenticate */
            printf("[adaptor] PasswordMessage (ignored)\n"); fflush(stdout);
            break;
        }

        default:
            printf("[adaptor] Unknown message type: '%c' (0x%02x), len=%d\n",
                   msg_type, (unsigned char)msg_type, msg_len);
            fflush(stdout);
            break;
        }
    }

cleanup:
    if (pending_query) free(pending_query);
    free(msg_buf);
    free(rs);
    socket_close(client_sock);
}

/* ----------------------------------------------------------------
 *  Thread entry point for each client connection
 * ---------------------------------------------------------------- */
static THREAD_RETURN client_thread(THREAD_PARAM param)
{
    socket_t client_sock = (socket_t)(size_t)param;
    handle_client(client_sock);
    printf("[adaptor] Client disconnected\n"); fflush(stdout);
    return 0;
}

/* ----------------------------------------------------------------
 *  Main: TCP server
 * ---------------------------------------------------------------- */
int main(int argc, char *argv[])
{
    socket_t server_sock, client_sock;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_len;
    int port = DEFAULT_PORT;

    if (argc > 1)
        port = atoi(argv[1]);

#ifndef _WIN32
    /* Ignore SIGPIPE so writing to a closed socket doesn't kill us */
    signal(SIGPIPE, SIG_IGN);
#endif

    /* Initialize socket subsystem */
    socket_init();

    /* Initialize query execution lock */
    mutex_init(&g_query_lock);

    /* Create socket */
    server_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (server_sock == SOCKET_INVALID) {
        fprintf(stderr, "socket() failed\n");
        socket_cleanup();
        return 1;
    }

    /* Allow address reuse */
    {
        int opt = 1;
        setsockopt(server_sock, SOL_SOCKET, SO_REUSEADDR,
                   (const char *)&opt, sizeof(opt));
    }

    /* Bind */
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons((unsigned short)port);

    if (bind(server_sock, (struct sockaddr *)&server_addr,
             sizeof(server_addr)) == SOCKET_ERR) {
        fprintf(stderr, "bind() failed on port %d\n", port);
        socket_close(server_sock);
        socket_cleanup();
        return 1;
    }

    /* Listen */
    if (listen(server_sock, 5) == SOCKET_ERR) {
        fprintf(stderr, "listen() failed\n");
        socket_close(server_sock);
        socket_cleanup();
        return 1;
    }

    printf("==============================================\n");
    printf("                __                            \n");
    printf("               / _)                           \n");
    printf("      _.----._/ /                             \n");
    printf("     /         /                              \n");
    printf("  __/ (  | (  |                               \n");
    printf(" /__.-'|_|--|_|                               \n");
    printf("==============================================\n");
    printf("  EvoSQL Adaptor Server (multi-threaded)\n");
    printf("  PostgreSQL Wire Protocol on port %d\n", port);
    printf("  Connect with: psql -h localhost -p %d evosql\n", port);
    printf("  Or DBeaver: PostgreSQL, localhost:%d, db=evosql\n", port);
    printf("==============================================\n");
    printf("[adaptor] Waiting for connections...\n");
    fflush(stdout);

    /* Initialize EvoSQL engine */
    query_engine_init();

    /* Accept loop — each connection gets its own thread */
    while (1) {
        client_len = sizeof(client_addr);
        client_sock = accept(server_sock, (struct sockaddr *)&client_addr,
                             &client_len);
        if (client_sock == SOCKET_INVALID) {
            fprintf(stderr, "accept() failed\n");
            continue;
        }

        /* Set TCP_NODELAY to disable Nagle's algorithm */
        {
            int opt = 1;
            setsockopt(client_sock, IPPROTO_TCP, TCP_NODELAY,
                       (const char *)&opt, sizeof(opt));
        }

        printf("[adaptor] Connection from %s:%d\n",
               inet_ntoa(client_addr.sin_addr),
               ntohs(client_addr.sin_port));
        fflush(stdout);

        /* Spawn a thread for this client */
        thread_create(client_thread, (THREAD_PARAM)(size_t)client_sock);
    }

    mutex_destroy(&g_query_lock);
    socket_close(server_sock);
    socket_cleanup();
    return 0;
}
