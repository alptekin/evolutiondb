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
#include "server.h"          /* safe_query_execute */
#include "../evolution/db/database.h"
#include "../evolution/db/query_context.h"

/* ----------------------------------------------------------------
 *  evo_secure_wipe — local copy to avoid crypto.h / OpenSSL clash
 *  (CWE-14: Compiler Removal of Code to Clear Buffers)
 * ---------------------------------------------------------------- */
static void *(*const volatile evo_memset_ptr)(void *, int, size_t) = memset;
static void evo_secure_wipe(void *ptr, size_t len)
{
    evo_memset_ptr(ptr, 0, len);
}

/* ----------------------------------------------------------------
 *  sql_redact_password — Redact PASSWORD clauses for safe logging
 * ---------------------------------------------------------------- */
static void sql_redact_password(char *dst, size_t dst_size, const char *src)
{
    const char *p = src;
    char *d = dst;
    char *end = dst + dst_size - 1;

    while (*p && d < end) {
        if (strncasecmp(p, "PASSWORD", 8) == 0 &&
            (p == src || isspace((unsigned char)p[-1])) &&
            (p[8] == '\0' || isspace((unsigned char)p[8]))) {
            const char *kw = "PASSWORD ";
            while (*kw && d < end) *d++ = *kw++;
            p += 8;
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p == '\'') {
                p++;
                while (*p && *p != '\'') p++;
                if (*p == '\'') p++;
            } else {
                while (*p && !isspace((unsigned char)*p) && *p != ';') p++;
            }
            const char *redacted = "'***'";
            while (*redacted && d < end) *d++ = *redacted++;
        } else {
            *d++ = *p++;
        }
    }
    *d = '\0';
}

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
        if (evo_sendf(conn, "COL %s\n", rs->columns[c].name) < 0) return -1;
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

    /* Step 2: Authentication (encrypted if TLS succeeded) */
    evo_sendf(&conn, "AUTH_REQUIRED\n");

    /* Expect: AUTH <username> <password> */
    if (conn_recv_line(&conn, line, sizeof(line)) < 0) {
        printf("[EVO] Connection closed during auth\n"); fflush(stdout);
        result_free(rs); free(rs);
        return;
    }

    if (strncasecmp(line, "AUTH ", 5) != 0) {
        evo_sendf(&conn, "ERR 28000 Expected AUTH <user> <password>\n");
        result_free(rs); free(rs);
        return;
    }

    {
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
        evo_secure_wipe(line, sizeof(line));   /* wipe AUTH line that held cleartext password */
        strncpy(session.username, username, sizeof(session.username) - 1);
        printf("[EVO] Authenticated user '%s'\n", username); fflush(stdout);
    }

    evo_sendf(&conn, "AUTH_OK\n");

    /* Step 2: Command loop */
    while (1) {
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
            safe_query_execute(sql, rs, &session);

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

        /* Unknown command */
        evo_sendf(&conn, "ERR 42000 Unknown command: %s\n", line);
        evo_sendf(&conn, "READY\n");
    }

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
    }

    /* Auto-drop temporary tables for this session */
    session_drop_temp_tables(&session);

    conn_tls_shutdown(&conn);
    result_free(rs); free(rs);
    /* NOTE: do NOT close socket — server.c does it */
}
