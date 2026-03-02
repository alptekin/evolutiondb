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
#include "evo_protocol.h"
#include "query_executor.h"
#include "result.h"
#include "server.h"          /* safe_query_execute */

/* ----------------------------------------------------------------
 *  Send helpers (text-line based)
 * ---------------------------------------------------------------- */
static int evo_sendf(socket_t sock, const char *fmt, ...)
{
    char buf[4096];
    va_list ap;
    va_start(ap, fmt);
    int n = vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    if (n <= 0) return -1;
    return net_send_all(sock, buf, n);
}

static int evo_send_result(socket_t sock, const ResultSet *rs)
{
    int r, c;

    if (evo_sendf(sock, "RESULT\n") < 0) return -1;
    if (evo_sendf(sock, "COLS %d\n", rs->num_cols) < 0) return -1;

    for (c = 0; c < rs->num_cols; c++) {
        if (evo_sendf(sock, "COL %s\n", rs->columns[c].name) < 0) return -1;
    }

    for (r = 0; r < rs->num_rows; r++) {
        if (evo_sendf(sock, "ROW\n") < 0) return -1;
        for (c = 0; c < rs->num_cols; c++) {
            if (rs->rows[r].is_null[c]) {
                if (evo_sendf(sock, "FIELD NULL\n") < 0) return -1;
            } else {
                if (evo_sendf(sock, "FIELD %s\n", rs->rows[r].fields[c]) < 0)
                    return -1;
            }
        }
    }

    if (evo_sendf(sock, "END\n") < 0) return -1;
    if (evo_sendf(sock, "TAG %s\n", rs->command_tag) < 0) return -1;
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
    SessionCtx session = { "evosql", "default" };

    rs = (ResultSet *)calloc(1, sizeof(ResultSet));
    if (!rs) {
        fprintf(stderr, "[EVO] Out of memory for ResultSet\n");
        return;
    }

    printf("[EVO] Client connected\n"); fflush(stdout);

    /* Step 1: Read greeting line — must be "EVO" */
    if (net_recv_line(sock, line, sizeof(line)) < 0) {
        printf("[EVO] No greeting, closing\n"); fflush(stdout);
        free(rs);
        return;
    }

    if (strcmp(line, "EVO") != 0) {
        evo_sendf(sock, "ERR 08000 Expected EVO greeting\n");
        free(rs);
        return;
    }

    /* Send server greeting */
    evo_sendf(sock, "HELLO EvoSQL 1.0\n");

    /* Step 2: Command loop */
    while (1) {
        if (net_recv_line(sock, line, sizeof(line)) < 0) {
            printf("[EVO] Connection closed by client\n");
            break;
        }

        /* QUIT */
        if (strncasecmp(line, "QUIT", 4) == 0) {
            printf("[EVO] Client quit\n"); fflush(stdout);
            evo_sendf(sock, "BYE\n");
            break;
        }

        /* SQL <length>\n followed by <sql>\n */
        if (strncasecmp(line, "SQL ", 4) == 0) {
            int sql_len = atoi(line + 4);
            if (sql_len <= 0 || sql_len > 65000) {
                evo_sendf(sock, "ERR 42000 Invalid SQL length\n");
                evo_sendf(sock, "READY\n");
                continue;
            }

            /* Read the SQL body line */
            char sql[65536];
            if (net_recv_line(sock, sql, sizeof(sql)) < 0) {
                printf("[EVO] Disconnect during SQL read\n");
                break;
            }

            printf("[EVO] Query: %.200s%s\n", sql,
                   strlen(sql) > 200 ? "..." : "");
            fflush(stdout);

            /* Execute */
            safe_query_execute(sql, rs, &session);

            if (rs->has_error) {
                evo_sendf(sock, "ERR %s %s\n",
                          rs->error_sqlstate, rs->error_message);
            } else if (rs->is_select) {
                evo_send_result(sock, rs);
            } else {
                evo_sendf(sock, "OK\n");
                evo_sendf(sock, "TAG %s\n", rs->command_tag);
            }

            evo_sendf(sock, "READY\n");
            continue;
        }

        /* Unknown command */
        evo_sendf(sock, "ERR 42000 Unknown command: %s\n", line);
        evo_sendf(sock, "READY\n");
    }

    free(rs);
    /* NOTE: do NOT close socket — server.c does it */
}
