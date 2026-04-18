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
#include "../evolution/db/Copy.h"

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
 *  COPY stream handlers for EVO text protocol (Task 85 Faz 5)
 *
 *  Wire format:
 *    - Client sends SQL "COPY t FROM STDIN ..." via Q command
 *    - Server replies: "COPY_READY\n"
 *    - Client sends one CSV-formatted line per row, \n-terminated
 *    - Client sends "\\.\n" to signal end-of-data (PostgreSQL convention)
 *    - Server replies: "OK\nTAG COPY <n>\n"  or  "ERR <sqlstate> <msg>\n"
 *
 *  For COPY TO STDOUT:
 *    - Server replies: "COPY_READY\n"
 *    - Server sends one line per row: "D:<csv-line>\n"
 *    - Server sends terminator: "\\.\n"
 *    - Server sends: "OK\nTAG COPY <n>\n"
 * ---------------------------------------------------------------- */

/* Reader context: line-based EVO wire with "\\." end-of-data sentinel. */
typedef struct { conn_t *conn; } EvoCopyInCtx;

static int evo_line_reader(char *buf, int max_len,
                           char *sqlstate, size_t sqlstate_size,
                           char *err_out, size_t err_size, void *ctx)
{
    EvoCopyInCtx *ec = (EvoCopyInCtx *)ctx;
    for (;;) {
        if (conn_recv_line(ec->conn, buf, max_len) < 0) {
            snprintf(err_out, err_size, "COPY IN transport read error");
            strncpy(sqlstate, "08006", sqlstate_size - 1);
            return -1;
        }
        size_t n = strlen(buf);
        while (n > 0 && (buf[n - 1] == '\n' || buf[n - 1] == '\r'))
            buf[--n] = '\0';
        if (strcmp(buf, "\\.") == 0) return 0;   /* end-of-data */
        if (n > 0) return (int)n;
        /* empty line — keep reading */
    }
}

static int evo_line_writer(const char *line, int len, void *ctx)
{
    conn_t *conn = (conn_t *)ctx;
    return evo_sendf(conn, "D:%.*s\n", len, line) < 0 ? -1 : 0;
}

static void evo_rs_to_spec(const ResultSet *rs, CopyStreamSpec *spec)
{
    memset(spec, 0, sizeof(*spec));
    strncpy(spec->tblName, rs->copy_table, sizeof(spec->tblName) - 1);
    spec->format    = rs->copy_format;
    spec->delimiter = rs->copy_delimiter;
    spec->quote     = rs->copy_quote;
    strncpy(spec->nullStr, rs->copy_null_str, sizeof(spec->nullStr) - 1);
    spec->header    = rs->copy_header;
    spec->columnCount = rs->copy_column_count;
    for (int c = 0; c < rs->copy_column_count && c < 64; c++) {
        strncpy(spec->columns[c], rs->copy_columns[c],
                sizeof(spec->columns[c]) - 1);
    }
}

static void evo_session_to_stream(const SessionCtx *session, CopyStreamSession *out)
{
    memset(out, 0, sizeof(*out));
    out->in_transaction = session->in_transaction;
    out->tx_xid         = session->tx_xid;
    strncpy(out->database, session->database, sizeof(out->database) - 1);
    strncpy(out->schema,   session->schema,   sizeof(out->schema)   - 1);
}

static int evo_copy_in_stream(conn_t *conn, ResultSet *rs, SessionCtx *session,
                              char *err_out, size_t err_size)
{
    CopyStreamSpec spec;     evo_rs_to_spec(rs, &spec);
    CopyStreamSession sess;  evo_session_to_stream(session, &sess);
    EvoCopyInCtx ec = { .conn = conn };
    char sqlstate[6] = "00000";
    return copy_stream_in_process(&spec, &sess,
                                  evo_line_reader, &ec,
                                  err_out, err_size,
                                  sqlstate, sizeof(sqlstate));
}

static int evo_copy_out_stream(conn_t *conn, ResultSet *rs, SessionCtx *session,
                               char *err_out, size_t err_size)
{
    CopyStreamSpec spec;     evo_rs_to_spec(rs, &spec);
    CopyStreamSession sess;  evo_session_to_stream(session, &sess);
    int rc = copy_stream_out_process(&spec, &sess,
                                     evo_line_writer, conn,
                                     err_out, err_size);
    /* Terminator marker even on error so the client knows the stream ended. */
    evo_sendf(conn, "\\.\n");
    return rc;
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
            } else if (rs->copy_stream_mode == 1) {
                /* COPY FROM STDIN via EVO protocol */
                evo_sendf(&conn, "COPY_READY\n");
                char serr[512] = {0};
                int nrows = evo_copy_in_stream(&conn, rs, &session,
                                               serr, sizeof(serr));
                if (nrows < 0)
                    evo_sendf(&conn, "ERR 22000 %s\n",
                              serr[0] ? serr : "COPY IN failed");
                else {
                    evo_sendf(&conn, "OK\n");
                    evo_sendf(&conn, "TAG COPY %d\n", nrows);
                }
            } else if (rs->copy_stream_mode == 2) {
                /* COPY TO STDOUT via EVO protocol */
                evo_sendf(&conn, "COPY_READY\n");
                char serr[512] = {0};
                int nrows = evo_copy_out_stream(&conn, rs, &session,
                                                serr, sizeof(serr));
                if (nrows < 0)
                    evo_sendf(&conn, "ERR 22000 %s\n",
                              serr[0] ? serr : "COPY OUT failed");
                else {
                    evo_sendf(&conn, "OK\n");
                    evo_sendf(&conn, "TAG COPY %d\n", nrows);
                }
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

        /* EXECUTE_BATCH <stmt_name> <row_count> <param_count>\n
         *   <row1_param1>\n
         *   <row1_param2>\n
         *   ...
         *   <rowN_paramM>\n
         * Response:
         *   BATCH_OK <total_affected>\n
         *   READY\n
         *  or on error:
         *   BATCH_ERR <row_index> <sqlstate> <msg>\n
         *   READY\n
         */
        if (strncasecmp(line, "EXECUTE_BATCH ", 14) == 0) {
            char stmt_name[64] = "";
            int  row_count = 0;
            int  param_count = 0;
            {
                char *p = line + 14;
                int ni = 0;
                while (*p && !isspace((unsigned char)*p) && ni < 63)
                    stmt_name[ni++] = *p++;
                stmt_name[ni] = '\0';
                while (*p && isspace((unsigned char)*p)) p++;
                row_count = atoi(p);
                while (*p && !isspace((unsigned char)*p)) p++;
                while (*p && isspace((unsigned char)*p)) p++;
                param_count = atoi(p);
            }

            if (stmt_name[0] == '\0' || row_count <= 0 || param_count < 0) {
                evo_sendf(&conn, "ERR 42000 EXECUTE_BATCH: invalid arguments\n");
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
                int total = row_count * param_count;
                for (int i = 0; i < total; i++) {
                    char drain[65536];
                    if (conn_recv_line(&conn, drain, sizeof(drain)) < 0) break;
                }
                evo_sendf(&conn, "ERR 26000 Prepared statement '%s' not found\n", stmt_name);
                evo_sendf(&conn, "READY\n");
                continue;
            }

            const char *tmpl = session.prepared_stmts[slot].query;
            long total_affected = 0;
            int  batch_error = 0;
            int  err_row = -1;
            char err_state[16] = "";
            char err_msg[256] = "";

            for (int r = 0; r < row_count && !batch_error; r++) {
                /* Read param_count lines for this row */
                char *params[32];
                memset(params, 0, sizeof(params));
                int read_ok = 1;
                for (int i = 0; i < param_count && i < 32; i++) {
                    char pbuf[65536];
                    if (conn_recv_line(&conn, pbuf, sizeof(pbuf)) < 0) {
                        read_ok = 0;
                        break;
                    }
                    params[i] = strdup(pbuf);
                }
                if (!read_ok) {
                    for (int i = 0; i < 32; i++) if (params[i]) free(params[i]);
                    batch_error = 1;
                    err_row = r;
                    strcpy(err_state, "08006");
                    strcpy(err_msg, "connection lost during batch");
                    break;
                }

                /* Build substituted SQL */
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
                        int pidx = pn - 1;
                        if (pidx >= 0 && pidx < param_count && params[pidx]) {
                            if (strcmp(params[pidx], "\\N") == 0) {
                                const char *nul = "NULL";
                                while (*nul && out < (int)sizeof(sql) - 2)
                                    sql[out++] = *nul++;
                            } else {
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

                for (int i = 0; i < 32; i++) if (params[i]) free(params[i]);

                /* Execute — reuses existing safe_query_execute() */
                session_set_query(session.session_id, sql);
                safe_query_execute(sql, rs, &session);
                session_clear_query(session.session_id);

                if (rs->has_error) {
                    batch_error = 1;
                    err_row = r;
                    strncpy(err_state, rs->error_sqlstate, sizeof(err_state) - 1);
                    strncpy(err_msg, rs->error_message, sizeof(err_msg) - 1);
                    /* Drain remaining param lines */
                    int remaining = (row_count - r - 1) * param_count;
                    for (int i = 0; i < remaining; i++) {
                        char drain[65536];
                        if (conn_recv_line(&conn, drain, sizeof(drain)) < 0) break;
                    }
                    break;
                }

                /* Extract affected rows from command_tag */
                const char *tag = rs->command_tag;
                if (strncmp(tag, "INSERT ", 7) == 0) {
                    /* INSERT 0 N */
                    const char *sp = strchr(tag + 7, ' ');
                    if (sp) total_affected += atol(sp + 1);
                    else total_affected += 1;
                } else if (strncmp(tag, "UPDATE ", 7) == 0) {
                    total_affected += atol(tag + 7);
                } else if (strncmp(tag, "DELETE ", 7) == 0) {
                    total_affected += atol(tag + 7);
                }
            }

            if (batch_error) {
                evo_sendf(&conn, "BATCH_ERR %d %s %s\n", err_row, err_state, err_msg);
            } else {
                evo_sendf(&conn, "BATCH_OK %ld\n", total_affected);
            }
            evo_sendf(&conn, "READY\n");
            continue;
        }

        /* EXECUTE_BATCH_BINARY <stmt_name> <row_count> <param_count>\n
         *   <binary payload>
         *
         * Binary payload — per row, per param, in order:
         *   1 byte type code:
         *     'N' NULL      — no payload
         *     'i' int4      — 4 bytes, big-endian
         *     'l' int8      — 8 bytes, big-endian
         *     'd' float8    — 8 bytes, big-endian IEEE 754
         *     'b' bool      — 1 byte (0 = false, non-zero = true)
         *     's' string    — 4-byte length big-endian + UTF-8 bytes (no NUL)
         *
         * Server decodes each binary param into a text buffer and
         * reuses the existing EXECUTE_BATCH substitution + execution
         * path (text mode). Phase 4.
         *
         * Response (same as EXECUTE_BATCH):
         *   BATCH_OK <total_affected>\n  READY\n
         * or
         *   BATCH_ERR <row_index> <sqlstate> <msg>\n  READY\n
         */
        if (strncasecmp(line, "EXECUTE_BATCH_BINARY ", 21) == 0) {
            char stmt_name[64] = "";
            int  row_count = 0;
            int  param_count = 0;
            {
                char *p = line + 21;
                int ni = 0;
                while (*p && !isspace((unsigned char)*p) && ni < 63)
                    stmt_name[ni++] = *p++;
                stmt_name[ni] = '\0';
                while (*p && isspace((unsigned char)*p)) p++;
                row_count = atoi(p);
                while (*p && !isspace((unsigned char)*p)) p++;
                while (*p && isspace((unsigned char)*p)) p++;
                param_count = atoi(p);
            }

            if (stmt_name[0] == '\0' || row_count <= 0 || param_count < 0 ||
                param_count > 32) {
                evo_sendf(&conn, "ERR 42000 EXECUTE_BATCH_BINARY: invalid arguments\n");
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
            /* On statement-not-found we still need to drain the binary
             * payload so the protocol stays in sync. We do that by
             * draining byte-by-byte using the type header of each
             * field — same decoder as the hot path. */
            int drain_mode = (slot < 0);
            const char *tmpl = drain_mode ? "" : session.prepared_stmts[slot].query;

            long total_affected = 0;
            int  batch_error = 0;
            int  err_row = -1;
            char err_state[16] = "";
            char err_msg[256] = "";

            for (int r = 0; r < row_count && !batch_error; r++) {
                /* params[i] holds the text representation of each
                 * binary-decoded value. Buffers sized to hold a
                 * reasonable string (16K); larger strings are
                 * truncated and reported as an error. */
                char *params[32];
                int   param_is_null[32];
                memset(params, 0, sizeof(params));
                memset(param_is_null, 0, sizeof(param_is_null));

                int read_ok = 1;
                for (int i = 0; i < param_count && read_ok; i++) {
                    char type_byte;
                    if (conn_recv_exact(&conn, &type_byte, 1) < 0) {
                        read_ok = 0;
                        break;
                    }
                    switch (type_byte) {
                        case 'N':
                            param_is_null[i] = 1;
                            params[i] = strdup("");
                            break;
                        case 'i': {
                            unsigned char b[4];
                            if (conn_recv_exact(&conn, (char *)b, 4) < 0) {
                                read_ok = 0; break;
                            }
                            int32_t v = (int32_t)(((uint32_t)b[0] << 24) |
                                                   ((uint32_t)b[1] << 16) |
                                                   ((uint32_t)b[2] << 8)  |
                                                    (uint32_t)b[3]);
                            char buf[32];
                            snprintf(buf, sizeof(buf), "%d", v);
                            params[i] = strdup(buf);
                            break;
                        }
                        case 'l': {
                            unsigned char b[8];
                            if (conn_recv_exact(&conn, (char *)b, 8) < 0) {
                                read_ok = 0; break;
                            }
                            int64_t v = 0;
                            for (int k = 0; k < 8; k++)
                                v = (v << 8) | b[k];
                            char buf[32];
                            snprintf(buf, sizeof(buf), "%lld", (long long)v);
                            params[i] = strdup(buf);
                            break;
                        }
                        case 'd': {
                            unsigned char b[8];
                            if (conn_recv_exact(&conn, (char *)b, 8) < 0) {
                                read_ok = 0; break;
                            }
                            uint64_t bits = 0;
                            for (int k = 0; k < 8; k++)
                                bits = (bits << 8) | b[k];
                            double v;
                            memcpy(&v, &bits, 8);
                            char buf[64];
                            snprintf(buf, sizeof(buf), "%.17g", v);
                            params[i] = strdup(buf);
                            break;
                        }
                        case 'b': {
                            char b;
                            if (conn_recv_exact(&conn, &b, 1) < 0) {
                                read_ok = 0; break;
                            }
                            params[i] = strdup(b ? "1" : "0");
                            break;
                        }
                        case 's': {
                            unsigned char lb[4];
                            if (conn_recv_exact(&conn, (char *)lb, 4) < 0) {
                                read_ok = 0; break;
                            }
                            uint32_t slen = ((uint32_t)lb[0] << 24) |
                                            ((uint32_t)lb[1] << 16) |
                                            ((uint32_t)lb[2] << 8)  |
                                             (uint32_t)lb[3];
                            /* Sanity bound — 16 MB max per string */
                            if (slen > 16 * 1024 * 1024) {
                                read_ok = 0; break;
                            }
                            char *sbuf = (char *)malloc(slen + 1);
                            if (!sbuf) { read_ok = 0; break; }
                            if (slen > 0 &&
                                conn_recv_exact(&conn, sbuf, (int)slen) < 0) {
                                free(sbuf);
                                read_ok = 0; break;
                            }
                            sbuf[slen] = '\0';
                            params[i] = sbuf;
                            break;
                        }
                        default:
                            /* Unknown type — abort the batch */
                            read_ok = 0;
                            break;
                    }
                }

                if (!read_ok) {
                    for (int i = 0; i < 32; i++) if (params[i]) free(params[i]);
                    batch_error = 1;
                    err_row = r;
                    strcpy(err_state, "08006");
                    strcpy(err_msg, "connection lost or malformed binary param during batch");
                    break;
                }

                if (drain_mode) {
                    for (int i = 0; i < 32; i++) if (params[i]) free(params[i]);
                    continue;
                }

                /* Build substituted SQL — same logic as EXECUTE_BATCH.
                 * NULL binary params emit the SQL literal NULL; all
                 * other decoded values get single-quoted so the
                 * existing parser accepts them unchanged. */
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
                        int pidx = pn - 1;
                        if (pidx >= 0 && pidx < param_count && params[pidx]) {
                            if (param_is_null[pidx]) {
                                const char *nul = "NULL";
                                while (*nul && out < (int)sizeof(sql) - 2)
                                    sql[out++] = *nul++;
                            } else {
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

                for (int i = 0; i < 32; i++) if (params[i]) free(params[i]);

                /* Execute */
                session_set_query(session.session_id, sql);
                safe_query_execute(sql, rs, &session);
                session_clear_query(session.session_id);

                if (rs->has_error) {
                    batch_error = 1;
                    err_row = r;
                    strncpy(err_state, rs->error_sqlstate, sizeof(err_state) - 1);
                    strncpy(err_msg, rs->error_message, sizeof(err_msg) - 1);
                    /* No more rows to drain — binary batch protocol
                     * doesn't have a fixed-size tail after an error;
                     * the client MUST stop sending after BATCH_ERR.
                     * We simply return here so the next read starts
                     * with a fresh command. */
                    break;
                }

                const char *tag = rs->command_tag;
                if (strncmp(tag, "INSERT ", 7) == 0) {
                    const char *sp = strchr(tag + 7, ' ');
                    if (sp) total_affected += atol(sp + 1);
                    else total_affected += 1;
                } else if (strncmp(tag, "UPDATE ", 7) == 0) {
                    total_affected += atol(tag + 7);
                } else if (strncmp(tag, "DELETE ", 7) == 0) {
                    total_affected += atol(tag + 7);
                }
            }

            if (drain_mode) {
                evo_sendf(&conn, "ERR 26000 Prepared statement '%s' not found\n",
                          stmt_name);
            } else if (batch_error) {
                evo_sendf(&conn, "BATCH_ERR %d %s %s\n",
                          err_row, err_state, err_msg);
            } else {
                evo_sendf(&conn, "BATCH_OK %ld\n", total_affected);
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
