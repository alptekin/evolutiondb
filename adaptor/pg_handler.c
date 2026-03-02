/*
 * pg_handler.c — PostgreSQL wire-protocol connection handler
 *
 * Extracted from the original monolithic main.c so that the PG
 * protocol layer is cleanly separated from the TCP server logic.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include "platform.h"
#include "pg_handler.h"
#include "pg_protocol.h"
#include "query_executor.h"
#include "result.h"
#include "server.h"          /* safe_query_execute */

/* ----------------------------------------------------------------
 *  pg_handle_client — full PG v3 session for one connection
 *
 *  The server infrastructure (server.c) calls this in a dedicated
 *  thread.  `client_sock` is already open and TCP_NODELAY'd.
 *  We must NOT close the socket — server.c does that after we return.
 * ---------------------------------------------------------------- */
void pg_handle_client(socket_t client_sock)
{
    char *msg_buf;
    ResultSet *rs;
    char msg_type;
    int msg_len;

    /* Pending query for Extended Query Protocol */
    char *pending_query = NULL;
    int pending_described = 0;

    /* Per-connection session context */
    SessionCtx session = { "evosql", "default" };

    /* Allocate per-thread buffers on heap */
    msg_buf = (char *)malloc(65536);
    rs = (ResultSet *)calloc(1, sizeof(ResultSet));
    if (!msg_buf || !rs) {
        fprintf(stderr, "[PG] Out of memory for client buffers\n");
        if (msg_buf) free(msg_buf);
        if (rs) free(rs);
        return;
    }

    printf("[PG] Client connected\n"); fflush(stdout);

    /* Step 1: Startup handshake */
    if (pg_handle_startup(client_sock) < 0) {
        printf("[PG] Startup failed, closing connection\n");
        fflush(stdout);
        free(msg_buf);
        free(rs);
        return;
    }

    /* Step 2: Query loop */
    while (1) {
        if (pg_read_message(client_sock, &msg_type, msg_buf, &msg_len) < 0) {
            printf("[PG] Connection closed by client\n");
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

            printf("[PG] Query: %.200s%s\n", sql_full,
                   strlen(sql_full) > 200 ? "..." : "");
            fflush(stdout);

            while (remaining && *remaining) {
                while (*remaining && isspace((unsigned char)*remaining))
                    remaining++;
                if (!*remaining) break;

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

                {
                    int slen = (int)strlen(stmt);
                    while (slen > 0 && isspace((unsigned char)stmt[slen-1]))
                        stmt[--slen] = '\0';
                }
                if (!*stmt) continue;

                had_any = 1;
                safe_query_execute(stmt, rs, &session);

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
            printf("[PG] Client terminated\n"); fflush(stdout);
            goto cleanup;

        /* ---- Extended Query Protocol ---- */
        case PG_MSG_PARSE: {
            char *stmt_name = msg_buf;
            char *query = stmt_name + strlen(stmt_name) + 1;
            printf("[PG] Extended Parse: %s\n", query); fflush(stdout);

            if (pending_query) free(pending_query);
            pending_query = strdup(query);
            pending_described = 0;

            PgBuf b;
            pg_buf_init(&b, PG_RESP_PARSE_COMPLETE);
            pg_buf_send(&b, client_sock);
            break;
        }

        case PG_MSG_BIND: {
            {
                char *ptr = msg_buf;
                ptr += strlen(ptr) + 1;   /* skip portal name */
                ptr += strlen(ptr) + 1;   /* skip statement name */

                int16_t num_fmt;
                memcpy(&num_fmt, ptr, 2);
                num_fmt = ntohs(num_fmt);
                ptr += 2 + num_fmt * 2;

                int16_t num_params;
                memcpy(&num_params, ptr, 2);
                num_params = ntohs(num_params);
                ptr += 2;

                if (num_params > 0 && pending_query) {
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

                    char *new_query = (char *)malloc(65536);
                    char *dst = new_query;
                    char *src = pending_query;
                    while (*src) {
                        if (*src == '$' && src[1] >= '1' && src[1] <= '9') {
                            int idx = 0;
                            src++;
                            while (*src >= '0' && *src <= '9') {
                                idx = idx * 10 + (*src - '0');
                                src++;
                            }
                            idx--;
                            if (idx >= 0 && idx < num_params) {
                                if (strcmp(param_vals[idx], "NULL") == 0) {
                                    memcpy(dst, "NULL", 4);
                                    dst += 4;
                                } else {
                                    *dst++ = '\'';
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

                    printf("[PG] Bind: resolved query: %s\n", new_query);
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
            char desc_type = msg_buf[0];
            printf("[PG] Extended Describe(%c)\n", desc_type); fflush(stdout);

            if (desc_type == 'S') {
                PgBuf pb;
                pg_buf_init(&pb, PG_RESP_PARAM_DESC);
                pg_buf_add_int16(&pb, 0);
                pg_buf_send(&pb, client_sock);
            }

            if (pending_query && pending_query[0] != '\0') {
                safe_query_execute(pending_query, rs, &session);
                pending_described = 1;

                if (rs->is_select && !rs->has_error && rs->num_cols > 0) {
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
                        pg_buf_add_int16(&b, 0);
                    }
                    pg_buf_send(&b, client_sock);
                } else {
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
            printf("[PG] Extended Execute\n"); fflush(stdout);

            if (pending_query && pending_query[0] != '\0') {
                if (!pending_described) {
                    safe_query_execute(pending_query, rs, &session);
                }

                if (rs->has_error) {
                    pg_send_error(client_sock, "ERROR",
                                  rs->error_sqlstate, rs->error_message);
                } else if (rs->is_select) {
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
                            pg_buf_add_int16(&rd, 0);
                        }
                        pg_buf_send(&rd, client_sock);
                    }

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

        case PG_MSG_FLUSH:
            break;

        case 'p':
            printf("[PG] PasswordMessage (ignored)\n"); fflush(stdout);
            break;

        default:
            printf("[PG] Unknown message type: '%c' (0x%02x), len=%d\n",
                   msg_type, (unsigned char)msg_type, msg_len);
            fflush(stdout);
            break;
        }
    }

cleanup:
    if (pending_query) free(pending_query);
    free(msg_buf);
    free(rs);
    /* NOTE: do NOT close socket — server.c does it */
}
