/*
 * evo_protocol.c — EvoSQL native text-based wire protocol handler
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "platform.h"
#include "net.h"
#include "tls.h"
#include "evo_protocol.h"
#include "query_executor.h"
#include "result.h"
#include "util.h"
#include "server.h"          /* safe_query_execute */
#include "scram.h"           /* SCRAM-SHA-256 authentication */
#include "../evolution/db/database.h"
#include "../evolution/db/query_context.h"

/* From server.c — parser rwlock for SERIALIZABLE cleanup */
extern rwlock_t g_parse_lock;

/* ----------------------------------------------------------------
 *  evo_secure_wipe — local copy to avoid crypto.h / OpenSSL clash
 *  (CWE-14: Compiler Removal of Code to Clear Buffers)
 * ---------------------------------------------------------------- */
/* evo_secure_wipe() and sql_redact_password() from util.h */

/* ----------------------------------------------------------------
 *  Send helpers (text-line based)
 * ---------------------------------------------------------------- */
static int evo_sendf(conn_t *conn, const char *fmt, ...)
{
    char buf[4096];
    va_list ap;
    va_start(ap, fmt);
    int n = vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    if (n <= 0) return -1;
    return conn_send_all(conn, buf, n);
}

static int evo_send_result(conn_t *conn, const ResultSet *rs)
{
    int r, c;

    if (evo_sendf(conn, "RESULT\n") < 0) return -1;
    if (evo_sendf(conn, "COLS %d\n", rs->num_cols) < 0) return -1;

    for (c = 0; c < rs->num_cols; c++) {
        if (evo_sendf(conn, "COL %s %d %d\n",
                rs->columns[c].name,
                rs->columns[c].pg_type_oid,
                rs->columns[c].type_modifier) < 0)
            return -1;
    }

    for (r = 0; r < rs->num_rows; r++) {
        if (evo_sendf(conn, "ROW\n") < 0) return -1;
        for (c = 0; c < rs->num_cols; c++) {
            if (rs->rows[r].is_null[c] || !rs->rows[r].fields[c]) {
                if (evo_sendf(conn, "FIELD NULL\n") < 0) return -1;
            } else {
                if (evo_sendf(conn, "FIELD %s\n", rs->rows[r].fields[c]) < 0)
                    return -1;
            }
        }
    }

    if (evo_sendf(conn, "END\n") < 0) return -1;
    if (evo_sendf(conn, "TAG %s\n", rs->command_tag) < 0) return -1;
    return 0;
}

/* ----------------------------------------------------------------
 *  evo_handle_client — main session loop
 * ---------------------------------------------------------------- */
void evo_handle_client(socket_t sock)
{
    char line[65536];
    ResultSet *rs;

    /* Per-connection session context */
    SessionCtx session = { "evosql", "default", "" };
    session.isolation_level = 1;  /* default: READ COMMITTED */

    /* Wrap socket in conn_t for TLS-transparent I/O */
    conn_t conn;
    conn_init(&conn, sock);

    rs = (ResultSet *)calloc(1, sizeof(ResultSet));
    if (!rs) {
        fprintf(stderr, "[EVO] Out of memory for ResultSet\n");
        return;
    }

    printf("[EVO] Client connected\n"); fflush(stdout);

    /* Step 1: Read greeting line — must be "EVO" */
    if (conn_recv_line(&conn, line, sizeof(line)) < 0) {
        printf("[EVO] No greeting, closing\n"); fflush(stdout);
        result_free(rs); free(rs);
        return;
    }

    if (strcmp(line, "EVO") != 0) {
        evo_sendf(&conn, "ERR 08000 Expected EVO greeting\n");
        result_free(rs); free(rs);
        return;
    }

    /* Send server greeting */
    evo_sendf(&conn, "HELLO EvoSQL 1.0\n");

    /* Step 1.5: STARTTLS upgrade — offer TLS before auth so that
     * credentials are never sent in cleartext over the wire. */
    if (tls_is_available()) {
        evo_sendf(&conn, "STARTTLS\n");

        /* Wait for client acknowledgement */
        if (conn_recv_line(&conn, line, sizeof(line)) < 0) {
            printf("[EVO] Connection closed during TLS negotiation\n");
            fflush(stdout);
            free(rs);
            return;
        }

        if (strcmp(line, "STARTTLS") == 0) {
            /* Client accepted — perform TLS handshake */
            if (conn_tls_accept(&conn) < 0) {
                fprintf(stderr, "[EVO] TLS handshake failed\n");
                free(rs);
                return;
            }
            printf("[EVO] TLS connection established\n"); fflush(stdout);
        } else {
            /* Client declined — continue plaintext (backward compat) */
            printf("[EVO] Client declined TLS, continuing plaintext\n");
            fflush(stdout);
        }
    }

    /* Step 2: Authentication (encrypted if TLS succeeded)
     *
     * The server advertises AUTH_SCRAM to request SCRAM-SHA-256.
     * If the client responds with the legacy "AUTH <user> <pass>"
     * format, we fall back to cleartext verification for backward
     * compatibility.  SCRAM is preferred because it never transmits
     * the password — even without TLS the secret is protected.
     */
    evo_sendf(&conn, "AUTH_SCRAM\n");

    if (conn_recv_line(&conn, line, sizeof(line)) < 0) {
        printf("[EVO] Connection closed during auth\n"); fflush(stdout);
        result_free(rs); free(rs);
        return;
    }

    if (strncasecmp(line, "SCRAM-CLIENT-FIRST ", 19) == 0) {
        /* ---- SCRAM-SHA-256 authentication path ---- */
        ScramState scram;
        memset(&scram, 0, sizeof(scram));

        char scram_username[256] = "";
        char server_first[1024];

        /* Process client-first-message, produce server-first-message */
        if (scram_server_first(line + 19, scram_username, &scram,
                               server_first, sizeof(server_first)) < 0) {
            evo_sendf(&conn, "ERR 28P01 SCRAM: invalid client-first message\n");
            printf("[EVO] SCRAM auth failed for client-first\n"); fflush(stdout);
            evo_secure_wipe(&scram, sizeof(scram));
            evo_secure_wipe(line, sizeof(line));
            result_free(rs); free(rs);
            return;
        }

        /* Send server-first-message */
        evo_sendf(&conn, "%s\n", server_first);

        /* Read client-final-message */
        if (conn_recv_line(&conn, line, sizeof(line)) < 0) {
            printf("[EVO] Connection closed during SCRAM\n"); fflush(stdout);
            evo_secure_wipe(&scram, sizeof(scram));
            result_free(rs); free(rs);
            return;
        }

        if (strncasecmp(line, "SCRAM-CLIENT-FINAL ", 19) != 0) {
            evo_sendf(&conn, "ERR 28P01 Expected SCRAM-CLIENT-FINAL\n");
            evo_secure_wipe(&scram, sizeof(scram));
            evo_secure_wipe(line, sizeof(line));
            result_free(rs); free(rs);
            return;
        }

        /* Verify client proof and produce server-final-message */
        char server_final[256];
        if (scram_server_final(line + 19, &scram,
                               server_final, sizeof(server_final)) < 0) {
            evo_sendf(&conn, "ERR 28P01 SCRAM authentication failed\n");
            printf("[EVO] SCRAM auth failed for user '%s'\n", scram_username);
            fflush(stdout);
            evo_secure_wipe(&scram, sizeof(scram));
            evo_secure_wipe(line, sizeof(line));
            result_free(rs); free(rs);
            return;
        }

        /* Send server-final (ServerSignature for mutual auth) */
        evo_sendf(&conn, "%s\n", server_final);

        evo_secure_wipe(&scram, sizeof(scram));
        evo_secure_wipe(line, sizeof(line));

        strncpy(session.username, scram_username,
                sizeof(session.username) - 1);
        printf("[EVO] SCRAM-SHA-256 authenticated user '%s'\n",
               scram_username);
        fflush(stdout);

    } else if (strncasecmp(line, "AUTH ", 5) == 0) {
        /* ---- Legacy cleartext authentication (backward compat) ---- */
        char *p = line + 5;
        char username[256] = "", password[256] = "";

        /* Extract username */
        int ui = 0;
        while (*p && !isspace((unsigned char)*p) && ui < 255)
            username[ui++] = *p++;
        username[ui] = '\0';

        /* Skip space */
        while (*p && isspace((unsigned char)*p)) p++;

        /* Extract password */
        int pi = 0;
        while (*p && pi < 255)
            password[pi++] = *p++;
        password[pi] = '\0';

        if (!AuthenticateUser(username, password)) {
            evo_sendf(&conn, "ERR 28P01 Authentication failed\n");
            printf("[EVO] Auth failed for user '%s'\n", username);
            fflush(stdout);
            evo_secure_wipe(password, sizeof(password));
            evo_secure_wipe(line, sizeof(line));
            free(rs);
            return;
        }

        evo_secure_wipe(password, sizeof(password));
        evo_secure_wipe(line, sizeof(line));
        strncpy(session.username, username,
                sizeof(session.username) - 1);
        printf("[EVO] Cleartext authenticated user '%s'\n", username);
        fflush(stdout);

    } else {
        evo_sendf(&conn, "ERR 28000 Expected AUTH or SCRAM-CLIENT-FIRST\n");
        result_free(rs); free(rs);
        return;
    }

    evo_sendf(&conn, "AUTH_OK\n");

    /* Register in session registry */
    {
        extern __thread volatile int g_query_cancelled;
        session.session_id = session_register(&session, &g_query_cancelled);
    }

    /* Step 2: Command loop */
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
                evo_sendf(&conn, "ERR 57P05 idle timeout\n");
                printf("[EVO] Idle timeout (%d ms)\n", session.evo_idle_timeout_ms);
                fflush(stdout);
                break;
            }
        }

        if (conn_recv_line(&conn, line, sizeof(line)) < 0) {
            printf("[EVO] Connection closed by client\n");
            break;
        }

        /* QUIT */
        if (strncasecmp(line, "QUIT", 4) == 0) {
            printf("[EVO] Client quit\n"); fflush(stdout);
            evo_sendf(&conn, "BYE\n");
            break;
        }

        /* SQL <length>\n followed by <sql>\n */
        if (strncasecmp(line, "SQL ", 4) == 0) {
            int sql_len = atoi(line + 4);
            if (sql_len <= 0 || sql_len > 65000) {
                evo_sendf(&conn, "ERR 42000 Invalid SQL length\n");
                evo_sendf(&conn, "READY\n");
                continue;
            }

            /* Read the SQL body line */
            char sql[65536];
            if (conn_recv_line(&conn, sql, sizeof(sql)) < 0) {
                printf("[EVO] Disconnect during SQL read\n");
                break;
            }

            {
                char redacted[256];
                sql_redact_password(redacted, sizeof(redacted), sql);
                printf("[EVO] Query: %.200s%s\n", redacted,
                       strlen(redacted) > 200 ? "..." : "");
                fflush(stdout);
            }

            /* Execute */
            session_set_query(session.session_id, sql);
            safe_query_execute(sql, rs, &session);
            session_clear_query(session.session_id);

            if (rs->has_error) {
                evo_sendf(&conn, "ERR %s %s\n",
                          rs->error_sqlstate, rs->error_message);
            } else if (rs->is_select) {
                evo_send_result(&conn, rs);
            } else {
                evo_sendf(&conn, "OK\n");
                evo_sendf(&conn, "TAG %s\n", rs->command_tag);
            }

            evo_sendf(&conn, "READY\n");
            continue;
        }

        /* PREPARE <stmt_name> <byte_length>\n  then SQL body line */
        if (strncasecmp(line, "PREPARE ", 8) == 0) {
            char stmt_name[64] = "";
            int  body_len = 0;
            {
                char *p = line + 8;
                int ni = 0;
                while (*p && !isspace((unsigned char)*p) && ni < 63)
                    stmt_name[ni++] = *p++;
                stmt_name[ni] = '\0';
                while (*p && isspace((unsigned char)*p)) p++;
                body_len = atoi(p);
            }

            if (stmt_name[0] == '\0') {
                evo_sendf(&conn, "ERR 42000 PREPARE: missing statement name\n");
                evo_sendf(&conn, "READY\n");
                continue;
            }
            if (body_len <= 0 || body_len > 65000) {
                evo_sendf(&conn, "ERR 42000 PREPARE: invalid SQL length\n");
                evo_sendf(&conn, "READY\n");
                continue;
            }

            /* Read the SQL body line */
            char prep_sql[65536];
            if (conn_recv_line(&conn, prep_sql, sizeof(prep_sql)) < 0) {
                printf("[EVO] Disconnect during PREPARE SQL read\n");
                break;
            }

            /* Count $N placeholders to determine param_count */
            int max_param = 0;
            {
                const char *s = prep_sql;
                while ((s = strchr(s, '$')) != NULL) {
                    s++;
                    if (*s >= '1' && *s <= '9') {
                        int pn = atoi(s);
                        if (pn > max_param) max_param = pn;
                    }
                }
            }

            /* Find existing slot or allocate new one */
            int slot = -1;
            for (int i = 0; i < session.prepared_stmt_count; i++) {
                if (strcasecmp(session.prepared_stmts[i].name, stmt_name) == 0) {
                    slot = i;
                    break;
                }
            }
            if (slot < 0) {
                if (session.prepared_stmt_count >= 32) {
                    evo_sendf(&conn, "ERR 53000 Too many prepared statements (max 32)\n");
                    evo_sendf(&conn, "READY\n");
                    continue;
                }
                slot = session.prepared_stmt_count++;
            } else {
                /* Overwrite existing — free old query */
                free(session.prepared_stmts[slot].query);
                session.prepared_stmts[slot].query = NULL;
            }

            strncpy(session.prepared_stmts[slot].name, stmt_name,
                    sizeof(session.prepared_stmts[slot].name) - 1);
            session.prepared_stmts[slot].name[63] = '\0';
            session.prepared_stmts[slot].query = strdup(prep_sql);
            session.prepared_stmts[slot].param_count = max_param;

            if (!session.prepared_stmts[slot].query) {
                evo_sendf(&conn, "ERR 53000 Out of memory\n");
                evo_sendf(&conn, "READY\n");
                continue;
            }

            printf("[EVO] PREPARE %s (%d params)\n", stmt_name, max_param);
            fflush(stdout);

            evo_sendf(&conn, "OK\n");
            evo_sendf(&conn, "TAG PREPARE\n");
            evo_sendf(&conn, "READY\n");
            continue;
        }

        /* EXECUTE <stmt_name> <param_count>\n  then param lines */
        if (strncasecmp(line, "EXECUTE ", 8) == 0) {
            char stmt_name[64] = "";
            int  param_count = 0;
            {
                char *p = line + 8;
                int ni = 0;
                while (*p && !isspace((unsigned char)*p) && ni < 63)
                    stmt_name[ni++] = *p++;
                stmt_name[ni] = '\0';
                while (*p && isspace((unsigned char)*p)) p++;
                param_count = atoi(p);
            }

            if (stmt_name[0] == '\0') {
                evo_sendf(&conn, "ERR 42000 EXECUTE: missing statement name\n");
                evo_sendf(&conn, "READY\n");
                continue;
            }

            /* Find the prepared statement */
            int slot = -1;
            for (int i = 0; i < session.prepared_stmt_count; i++) {
                if (strcasecmp(session.prepared_stmts[i].name, stmt_name) == 0) {
                    slot = i;
                    break;
                }
            }
            if (slot < 0) {
                /* Drain param lines so protocol stays in sync */
                for (int i = 0; i < param_count; i++) {
                    char drain[65536];
                    if (conn_recv_line(&conn, drain, sizeof(drain)) < 0) break;
                }
                evo_sendf(&conn, "ERR 26000 Prepared statement '%s' not found\n", stmt_name);
                evo_sendf(&conn, "READY\n");
                continue;
            }

            /* Read parameter values */
            char *params[32];
            memset(params, 0, sizeof(params));
            int  read_ok = 1;
            for (int i = 0; i < param_count && i < 32; i++) {
                char pbuf[65536];
                if (conn_recv_line(&conn, pbuf, sizeof(pbuf)) < 0) {
                    read_ok = 0;
                    break;
                }
                params[i] = strdup(pbuf);
            }
            if (!read_ok) {
                for (int i = 0; i < param_count && i < 32; i++)
                    free(params[i]);
                printf("[EVO] Disconnect during EXECUTE param read\n");
                break;
            }

            /* Build substituted SQL from the template */
            const char *tmpl = session.prepared_stmts[slot].query;
            char sql[65536];
            int  out = 0;
            const char *t = tmpl;

            while (*t && out < (int)sizeof(sql) - 2) {
                if (*t == '$' && t[1] >= '1' && t[1] <= '9') {
                    int pn = 0;
                    const char *d = t + 1;
                    while (*d >= '0' && *d <= '9') {
                        pn = pn * 10 + (*d - '0');
                        d++;
                    }
                    int pidx = pn - 1;  /* 0-based */
                    if (pidx >= 0 && pidx < param_count && params[pidx]) {
                        if (strcmp(params[pidx], "\\N") == 0) {
                            /* NULL literal */
                            const char *nul = "NULL";
                            while (*nul && out < (int)sizeof(sql) - 2)
                                sql[out++] = *nul++;
                        } else {
                            /* Wrap in single quotes, escape internal quotes */
                            sql[out++] = '\'';
                            const char *v = params[pidx];
                            while (*v && out < (int)sizeof(sql) - 4) {
                                if (*v == '\'') {
                                    sql[out++] = '\'';
                                    sql[out++] = '\'';
                                } else {
                                    sql[out++] = *v;
                                }
                                v++;
                            }
                            sql[out++] = '\'';
                        }
                    }
                    t = d;
                } else {
                    sql[out++] = *t++;
                }
            }
            sql[out] = '\0';

            /* Free param strings */
            for (int i = 0; i < param_count && i < 32; i++)
                free(params[i]);

            printf("[EVO] EXECUTE %s -> %.200s%s\n", stmt_name, sql,
                   strlen(sql) > 200 ? "..." : "");
            fflush(stdout);

            /* Execute the substituted SQL */
            session_set_query(session.session_id, sql);
            safe_query_execute(sql, rs, &session);
            session_clear_query(session.session_id);

            if (rs->has_error) {
                evo_sendf(&conn, "ERR %s %s\n",
                          rs->error_sqlstate, rs->error_message);
            } else if (rs->is_select) {
                evo_send_result(&conn, rs);
            } else {
                evo_sendf(&conn, "OK\n");
                evo_sendf(&conn, "TAG %s\n", rs->command_tag);
            }

            evo_sendf(&conn, "READY\n");
            continue;
        }

        /* DEALLOCATE <stmt_name>\n */
        if (strncasecmp(line, "DEALLOCATE ", 11) == 0) {
            char stmt_name[64] = "";
            {
                char *p = line + 11;
                int ni = 0;
                while (*p && !isspace((unsigned char)*p) && ni < 63)
                    stmt_name[ni++] = *p++;
                stmt_name[ni] = '\0';
            }

            if (stmt_name[0] == '\0') {
                evo_sendf(&conn, "ERR 42000 DEALLOCATE: missing statement name\n");
                evo_sendf(&conn, "READY\n");
                continue;
            }

            int slot = -1;
            for (int i = 0; i < session.prepared_stmt_count; i++) {
                if (strcasecmp(session.prepared_stmts[i].name, stmt_name) == 0) {
                    slot = i;
                    break;
                }
            }

            if (slot < 0) {
                evo_sendf(&conn, "ERR 26000 Prepared statement '%s' not found\n", stmt_name);
                evo_sendf(&conn, "READY\n");
                continue;
            }

            /* Free and compact */
            free(session.prepared_stmts[slot].query);
            session.prepared_stmts[slot].query = NULL;

            /* Shift remaining entries down */
            for (int i = slot; i < session.prepared_stmt_count - 1; i++)
                session.prepared_stmts[i] = session.prepared_stmts[i + 1];

            session.prepared_stmt_count--;

            /* Clear the last slot */
            memset(&session.prepared_stmts[session.prepared_stmt_count], 0,
                   sizeof(session.prepared_stmts[0]));

            printf("[EVO] DEALLOCATE %s\n", stmt_name);
            fflush(stdout);

            evo_sendf(&conn, "OK\n");
            evo_sendf(&conn, "TAG DEALLOCATE\n");
            evo_sendf(&conn, "READY\n");
            continue;
        }

        /* Unknown command */
        evo_sendf(&conn, "ERR 42000 Unknown command: %s\n", line);
        evo_sendf(&conn, "READY\n");
    }

    /* Free all prepared statements */
    for (int i = 0; i < session.prepared_stmt_count; i++) {
        free(session.prepared_stmts[i].query);
        session.prepared_stmts[i].query = NULL;
    }
    session.prepared_stmt_count = 0;

    /* Auto-rollback if client disconnects with an open transaction */
    if (session.in_transaction && session.undo_log) {
        fprintf(stderr, "[TX] EVO client disconnected with open transaction — rolling back\n");
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
    result_free(rs); free(rs);
    /* NOTE: do NOT close socket — server.c does it */
}
