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
#include "tls.h"
#include "../evolution/db/database.h"
#include "../evolution/db/query_context.h"
#include "util.h"

/* From server.c — parser rwlock for SERIALIZABLE cleanup */
extern rwlock_t g_parse_lock;

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
    SessionCtx session = { "evosql", "default", "" };
    session.isolation_level = 1;  /* default: READ COMMITTED */

    /* Wrap socket in conn_t for TLS-transparent I/O */
    conn_t conn;
    conn_init(&conn, client_sock);

    /* Allocate per-thread buffers on heap */
    msg_buf = (char *)malloc(65536);
    rs = (ResultSet *)calloc(1, sizeof(ResultSet));
    if (!msg_buf || !rs) {
        fprintf(stderr, "[PG] Out of memory for client buffers\n");
        if (msg_buf) free(msg_buf);
        if (rs) { result_free(rs); free(rs); }
        return;
    }

    printf("[PG] Client connected\n"); fflush(stdout);

    /* Step 1: Startup handshake (includes TLS + auth) */
    char auth_user[256] = "";
    if (pg_handle_startup(&conn, auth_user, sizeof(auth_user)) < 0) {
        printf("[PG] Startup failed, closing connection\n");
        fflush(stdout);
        conn_tls_shutdown(&conn);
        free(msg_buf);
        result_free(rs); free(rs);
        return;
    }

    /* Store authenticated username in session */
    strncpy(session.username, auth_user, sizeof(session.username) - 1);

    /* Register in session registry + generate cancel key */
    {
        extern __thread volatile int g_query_cancelled;
        session.session_id = session_register(&session, &g_query_cancelled);
        /* Generate random cancel key */
        {
            extern void crypto_random_bytes(unsigned char *, int);
            unsigned char rbuf[4];
            crypto_random_bytes(rbuf, 4);
            session.cancel_key = (int)(
                ((uint32_t)rbuf[0] << 24) | ((uint32_t)rbuf[1] << 16) |
                ((uint32_t)rbuf[2] <<  8) |  (uint32_t)rbuf[3]);
            if (session.cancel_key == 0) session.cancel_key = 1;
        }
    }

    /* Send BackendKeyData (with session_id + cancel_key) then ReadyForQuery.
     * pg_handle_startup no longer sends these — we do it here so BackendKeyData
     * includes the session registry ID and random cancel secret. */
    pg_send_backend_key_data(&conn, session.session_id, session.cancel_key);
    pg_send_ready_for_query(&conn, 'I');

    /* Step 2: Query loop */
    while (1) {
        /* Idle timeout — wait for data with timeout using select() */
        if (session.evo_idle_timeout_ms > 0) {
            fd_set rfds;
            struct timeval tv;
            FD_ZERO(&rfds);
            FD_SET(conn.sock, &rfds);
            tv.tv_sec  = session.evo_idle_timeout_ms / 1000;
            tv.tv_usec = (session.evo_idle_timeout_ms % 1000) * 1000;
            int sr = select((int)conn.sock + 1, &rfds, NULL, NULL, &tv);
            if (sr == 0) {
                pg_send_error(&conn, "FATAL", "57P05",
                    "terminating connection due to idle timeout");
                printf("[PG] Idle timeout (%d ms)\n", session.evo_idle_timeout_ms);
                fflush(stdout);
                break;
            }
            /* sr < 0 = error, sr > 0 = data ready — fall through */
        }

        if (pg_read_message(&conn, &msg_type, msg_buf, &msg_len) < 0) {
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

            {
                char redacted[256];
                sql_redact_password(redacted, sizeof(redacted), sql_full);
                printf("[PG] Query: %.200s%s\n", redacted,
                       strlen(redacted) > 200 ? "..." : "");
                fflush(stdout);
            }

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

                /* Enable streaming for SELECT queries */
                {
                    const char *sp = stmt;
                    while (*sp && isspace((unsigned char)*sp)) sp++;
                    if (strncasecmp(sp, "SELECT", 6) == 0 &&
                        (sp[6] == ' ' || sp[6] == '\t' || sp[6] == '\n'))
                        rs->stream_conn = &conn;
                    else
                        rs->stream_conn = NULL;
                }

                session_set_query(session.session_id, stmt);
                safe_query_execute(stmt, rs, &session);
                session_clear_query(session.session_id);

                if (rs->streamed_rows > 0) {
                    /* Already sent to client during scan — nothing to do */
                } else if (rs->has_error) {
                    pg_send_error(&conn, "ERROR",
                                  rs->error_sqlstate, rs->error_message);
                } else if (rs->command_tag[0] == '\0') {
                    pg_send_empty_query(&conn);
                } else if (rs->is_select) {
                    pg_send_result_set(&conn, rs);
                } else {
                    pg_send_command_complete(&conn, rs->command_tag);
                }
            }

            if (!had_any) {
                pg_send_empty_query(&conn);
            }

            pg_send_ready_for_query(&conn, 'I');
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
            {
                char redacted[256];
                sql_redact_password(redacted, sizeof(redacted), query);
                printf("[PG] Extended Parse: %s\n", redacted); fflush(stdout);
            }

            if (pending_query) free(pending_query);
            pending_query = strdup(query);
            pending_described = 0;

            PgBuf b;
            pg_buf_init(&b, PG_RESP_PARSE_COMPLETE);
            pg_buf_send(&b, &conn);
            break;
        }

        case PG_MSG_BIND: {
            {
                char *ptr = msg_buf;
                ptr += strlen(ptr) + 1;   /* skip portal name */
                ptr += strlen(ptr) + 1;   /* skip statement name */

                /* Read parameter format codes (0=text, 1=binary) */
                int16_t num_fmt;
                memcpy(&num_fmt, ptr, 2);
                num_fmt = ntohs(num_fmt);
                ptr += 2;
                int16_t fmt_codes[64];
                {
                    int fi;
                    for (fi = 0; fi < num_fmt && fi < 64; fi++) {
                        memcpy(&fmt_codes[fi], ptr, 2);
                        fmt_codes[fi] = ntohs(fmt_codes[fi]);
                        ptr += 2;
                    }
                }

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
                            /* Determine format for this parameter:
                             * - If num_fmt == 0: all text
                             * - If num_fmt == 1: single format applies to all
                             * - If num_fmt > 1: per-parameter format */
                            int is_binary = 0;
                            if (num_fmt == 1)
                                is_binary = (fmt_codes[0] == 1);
                            else if (pi < num_fmt)
                                is_binary = (fmt_codes[pi] == 1);

                            if (is_binary && plen == 4) {
                                /* 4-byte big-endian int32 → text */
                                int32_t ival;
                                memcpy(&ival, ptr, 4);
                                ival = ntohl(ival);
                                param_vals[pi] = (char *)malloc(16);
                                snprintf(param_vals[pi], 16, "%d", ival);
                            } else if (is_binary && plen == 2) {
                                /* 2-byte big-endian int16 → text */
                                int16_t sval;
                                memcpy(&sval, ptr, 2);
                                sval = ntohs(sval);
                                param_vals[pi] = (char *)malloc(16);
                                snprintf(param_vals[pi], 16, "%d", (int)sval);
                            } else if (is_binary && plen == 8) {
                                /* 8-byte big-endian int64 → text */
                                int64_t lval = 0;
                                int bi;
                                for (bi = 0; bi < 8; bi++)
                                    lval = (lval << 8) | (unsigned char)ptr[bi];
                                param_vals[pi] = (char *)malloc(24);
                                snprintf(param_vals[pi], 24, "%lld", (long long)lval);
                            } else if (is_binary && plen == 1) {
                                /* 1-byte boolean → text */
                                param_vals[pi] = strdup(ptr[0] ? "true" : "false");
                            } else {
                                /* Text format or unknown binary size: copy as-is */
                                param_vals[pi] = (char *)malloc(plen + 1);
                                memcpy(param_vals[pi], ptr, plen);
                                param_vals[pi][plen] = '\0';
                            }
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

                    {
                        char redacted[256];
                        sql_redact_password(redacted, sizeof(redacted), new_query);
                        printf("[PG] Bind: resolved query: %s\n", redacted);
                        fflush(stdout);
                    }

                    free(pending_query);
                    pending_query = new_query;

                    for (pi = 0; pi < num_params && pi < 64; pi++)
                        free(param_vals[pi]);
                }
            }

            PgBuf b;
            pg_buf_init(&b, PG_RESP_BIND_COMPLETE);
            pg_buf_send(&b, &conn);
            break;
        }

        case PG_MSG_DESCRIBE: {
            char desc_type = msg_buf[0];
            printf("[PG] Extended Describe(%c)\n", desc_type); fflush(stdout);

            if (desc_type == 'S') {
                PgBuf pb;
                pg_buf_init(&pb, PG_RESP_PARAM_DESC);
                pg_buf_add_int16(&pb, 0);
                pg_buf_send(&pb, &conn);
            }

            if (pending_query && pending_query[0] != '\0') {
                session_set_query(session.session_id, pending_query);
                safe_query_execute(pending_query, rs, &session);
                session_clear_query(session.session_id);
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
                    pg_buf_send(&b, &conn);
                } else {
                    PgBuf b;
                    pg_buf_init(&b, PG_RESP_NO_DATA);
                    pg_buf_send(&b, &conn);
                }
            } else {
                PgBuf b;
                pg_buf_init(&b, PG_RESP_NO_DATA);
                pg_buf_send(&b, &conn);
            }
            break;
        }

        case PG_MSG_EXECUTE: {
            printf("[PG] Extended Execute\n"); fflush(stdout);

            if (pending_query && pending_query[0] != '\0') {
                if (!pending_described) {
                    session_set_query(session.session_id, pending_query);
                    safe_query_execute(pending_query, rs, &session);
                    session_clear_query(session.session_id);
                }

                if (rs->has_error) {
                    pg_send_error(&conn, "ERROR",
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
                        pg_buf_send(&rd, &conn);
                    }

                    PgBuf b;
                    int r, c;
                    for (r = 0; r < rs->num_rows; r++) {
                        pg_buf_init(&b, PG_RESP_DATA_ROW);
                        pg_buf_add_int16(&b, (short)rs->num_cols);
                        for (c = 0; c < rs->num_cols; c++) {
                            if (rs->rows[r].is_null[c] || !rs->rows[r].fields[c]) {
                                pg_buf_add_int32(&b, -1);
                            } else {
                                int flen = (int)strlen(rs->rows[r].fields[c]);
                                pg_buf_add_int32(&b, flen);
                                pg_buf_add_bytes(&b, rs->rows[r].fields[c], flen);
                            }
                        }
                        pg_buf_send(&b, &conn);
                    }
                    pg_send_command_complete(&conn, rs->command_tag);
                } else {
                    pg_send_command_complete(&conn,
                        rs->command_tag[0] ? rs->command_tag : "OK");
                }

                pending_described = 0;
                free(pending_query);
                pending_query = NULL;
            } else {
                pg_send_command_complete(&conn, "OK");
            }
            break;
        }

        case PG_MSG_SYNC: {
            pending_described = 0;
            pg_send_ready_for_query(&conn, 'I');
            break;
        }

        case PG_MSG_CLOSE: {
            PgBuf b;
            pg_buf_init(&b, PG_RESP_CLOSE_COMPLETE);
            pg_buf_send(&b, &conn);
            break;
        }

        case PG_MSG_FLUSH:
            break;

        default:
            printf("[PG] Unknown message type: '%c' (0x%02x), len=%d\n",
                   msg_type, (unsigned char)msg_type, msg_len);
            fflush(stdout);
            break;
        }
    }

cleanup:
    /* Auto-rollback if client disconnects with an open transaction */
    if (session.in_transaction && session.undo_log) {
        fprintf(stderr, "[TX] Client disconnected with open transaction — rolling back\n");
        /* Allocate temporary query context so g_currentDatabase etc. work */
        QueryContext *qctx = qctx_alloc();
        if (qctx) {
            g_qctx = qctx;
            db_set_current_database(session.database);
            db_set_current_schema(session.schema);
            undo_log_rollback(session.undo_log);
            qctx_free(qctx);
            g_qctx = NULL;
        }
        undo_log_free(session.undo_log);
        session.undo_log = NULL;
        session.in_transaction = 0;
        if (session.serializable_locked) {
            extern void cg_unregister_tx(uint32_t);
            if (session.tx_xid > 0) cg_unregister_tx(session.tx_xid);
            session.serializable_locked = 0;
        }
    }

    /* Unregister from session registry */
    session_unregister(session.session_id);

    /* Auto-drop temporary tables for this session */
    session_drop_temp_tables(&session);
    session_cleanup_gtt(&session);

    conn_tls_shutdown(&conn);
    if (pending_query) free(pending_query);
    free(msg_buf);
    result_free(rs); free(rs);
    /* NOTE: do NOT close socket — server.c does it */
}
