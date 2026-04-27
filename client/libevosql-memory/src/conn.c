/*
 * conn.c — Connection layer for libevosql-memory.
 *
 * Speaks the EVO text protocol's plaintext path:
 *   client → "EVO\n"
 *   server → "HELLO EvoSQL 1.0\n"
 *   server → "STARTTLS\n"   (optional, server-driven)
 *   client → "NOTLS\n"      (decline)
 *   server → "AUTH_SCRAM\n"
 *   client → "AUTH <user> <pass>\n"
 *   server → "AUTH_OK\n"
 * Then per query:
 *   client → "SQL <len>\n<sql>\n"
 *   server → "RESULT\nCOLS N\nCOL <name> <oid> <typmod>\n... ROW\nFIELD ...\nEND\nTAG ...\nREADY\n"
 *      OR  → "OK\nTAG ...\nREADY\n"
 *      OR  → "ERR <sqlstate> <msg>\nREADY\n"
 *
 * v1 keeps the surface tight: plaintext only, cleartext AUTH, no SCRAM,
 * no TLS, no extended query / batch. The server still accepts the
 * legacy AUTH path so this works against any modern build.
 */
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <errno.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include "../include/evosql_memory.h"

/* ----------------------------------------------------------------
 *  Connection struct
 * ---------------------------------------------------------------- */
struct evo_conn {
    int  sock;
    char read_buf[8192];
    int  read_len;
    int  read_pos;
};

/* Thread-local last-error storage. */
static __thread char  g_evo_err[512];
static __thread char  g_evo_sqlstate[8];
static __thread int   g_evo_errc;

void evo_set_error(int code, const char *fmt, ...);
void evo_set_sqlstate(const char *s);

void evo_set_error(int code, const char *fmt, ...)
{
    g_evo_errc = code;
    va_list ap;
    __builtin_va_start(ap, fmt);
    vsnprintf(g_evo_err, sizeof(g_evo_err), fmt, ap);
    __builtin_va_end(ap);
}

void evo_set_sqlstate(const char *s)
{
    if (s) snprintf(g_evo_sqlstate, sizeof(g_evo_sqlstate), "%s", s);
    else g_evo_sqlstate[0] = '\0';
}

const char *evo_strerror(const evo_conn_t *conn)
{
    (void)conn;
    return g_evo_err[0] ? g_evo_err : "(no error)";
}
const char *evo_sqlstate(const evo_conn_t *conn)
{
    (void)conn;
    return g_evo_sqlstate;
}

/* ----------------------------------------------------------------
 *  Low-level line I/O
 * ---------------------------------------------------------------- */
static int recv_line(evo_conn_t *c, char *out, int out_size)
{
    int oi = 0;
    while (oi < out_size - 1) {
        if (c->read_pos >= c->read_len) {
            int n = (int)recv(c->sock, c->read_buf, sizeof(c->read_buf), 0);
            if (n <= 0) {
                evo_set_error(EVO_ERR_PROTOCOL, "connection closed");
                return -1;
            }
            c->read_len = n;
            c->read_pos = 0;
        }
        char ch = c->read_buf[c->read_pos++];
        if (ch == '\n') break;
        if (ch != '\r') out[oi++] = ch;
    }
    out[oi] = '\0';
    return oi;
}

static int send_line(evo_conn_t *c, const char *line)
{
    int n = (int)strlen(line);
    int off = 0;
    while (off < n) {
        int s = (int)send(c->sock, line + off, n - off, 0);
        if (s <= 0) {
            evo_set_error(EVO_ERR_PROTOCOL, "send failed: %s", strerror(errno));
            return -1;
        }
        off += s;
    }
    return 0;
}

static int send_fmt(evo_conn_t *c, const char *fmt, ...)
{
    char buf[8192];
    va_list ap;
    __builtin_va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    __builtin_va_end(ap);
    return send_line(c, buf);
}

/* ----------------------------------------------------------------
 *  Connect + handshake
 * ---------------------------------------------------------------- */
evo_conn_t *evo_connect(const char *host, int port,
                         const char *user, const char *password)
{
    g_evo_err[0] = '\0';
    g_evo_sqlstate[0] = '\0';

    if (!host || !user || !password || port <= 0) {
        evo_set_error(EVO_ERR_CONNECT, "evo_connect: missing arg");
        return NULL;
    }

    /* Resolve host. */
    struct addrinfo hints, *res = NULL;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family   = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    char port_str[16];
    snprintf(port_str, sizeof(port_str), "%d", port);
    if (getaddrinfo(host, port_str, &hints, &res) != 0 || !res) {
        evo_set_error(EVO_ERR_CONNECT, "getaddrinfo(%s) failed", host);
        return NULL;
    }

    int sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (sock < 0) {
        evo_set_error(EVO_ERR_CONNECT, "socket() failed: %s", strerror(errno));
        freeaddrinfo(res);
        return NULL;
    }
    if (connect(sock, res->ai_addr, res->ai_addrlen) < 0) {
        evo_set_error(EVO_ERR_CONNECT, "connect(%s:%d) failed: %s",
                      host, port, strerror(errno));
        close(sock);
        freeaddrinfo(res);
        return NULL;
    }
    freeaddrinfo(res);

    evo_conn_t *c = (evo_conn_t *)calloc(1, sizeof(*c));
    if (!c) {
        evo_set_error(EVO_ERR_BUFFER, "out of memory");
        close(sock);
        return NULL;
    }
    c->sock = sock;

    /* EVO greeting */
    if (send_line(c, "EVO\n") < 0) { evo_close(c); return NULL; }

    char line[4096];
    if (recv_line(c, line, sizeof(line)) < 0) { evo_close(c); return NULL; }
    if (strncmp(line, "HELLO ", 6) != 0) {
        evo_set_error(EVO_ERR_PROTOCOL, "expected HELLO, got: %s", line);
        evo_close(c);
        return NULL;
    }

    /* The server may now offer STARTTLS. Decline politely so the
     * plaintext path continues. v1 doesn't ship a TLS client. */
    if (recv_line(c, line, sizeof(line)) < 0) { evo_close(c); return NULL; }
    if (strcmp(line, "STARTTLS") == 0) {
        /* Send anything other than "STARTTLS" — server falls back. */
        if (send_line(c, "NOTLS\n") < 0) { evo_close(c); return NULL; }
        /* Next line is AUTH_SCRAM. */
        if (recv_line(c, line, sizeof(line)) < 0) { evo_close(c); return NULL; }
    }
    /* Either we got AUTH_SCRAM in `line` already (no TLS offered), or
     * we just read it after declining. */
    if (strcmp(line, "AUTH_SCRAM") != 0) {
        evo_set_error(EVO_ERR_PROTOCOL,
                      "expected AUTH_SCRAM, got: %s", line);
        evo_close(c);
        return NULL;
    }

    /* Send legacy cleartext AUTH — server accepts as fallback. */
    if (send_fmt(c, "AUTH %s %s\n", user, password) < 0) {
        evo_close(c); return NULL;
    }
    if (recv_line(c, line, sizeof(line)) < 0) { evo_close(c); return NULL; }
    if (strcmp(line, "AUTH_OK") != 0) {
        evo_set_error(EVO_ERR_AUTH, "auth failed: %s", line);
        evo_close(c);
        return NULL;
    }

    return c;
}

void evo_close(evo_conn_t *conn)
{
    if (!conn) return;
    /* Best-effort QUIT; server replies BYE but we don't care. */
    send_line(conn, "QUIT\n");
    if (conn->sock >= 0) close(conn->sock);
    free(conn);
}

/* ----------------------------------------------------------------
 *  Query execution
 * ---------------------------------------------------------------- */

/* Send "SQL <len>\n<sql>\n" to the server. Caller drains the
 * response. */
static int send_sql(evo_conn_t *c, const char *sql)
{
    int len = (int)strlen(sql);
    if (send_fmt(c, "SQL %d\n", len) < 0) return -1;
    /* Body line — append \n if absent. */
    if (send_line(c, sql) < 0) return -1;
    if (sql[len ? len - 1 : 0] != '\n') {
        if (send_line(c, "\n") < 0) return -1;
    }
    return 0;
}

/* Drain the response of a non-SELECT command (returns number of
 * affected rows from "OK\nTAG <kind> [n]\nREADY\n", or 0 on plain
 * OK without count). Sets evo_set_error on ERR. Returns -1 on
 * protocol / SQL error. */
static int drain_dml_response(evo_conn_t *c)
{
    char line[8192];
    int rows = 0;
    int saw_ok = 0, saw_err = 0;
    while (1) {
        if (recv_line(c, line, sizeof(line)) < 0) return -1;
        if (strcmp(line, "READY") == 0) break;
        if (strcmp(line, "OK") == 0) { saw_ok = 1; continue; }
        if (strncmp(line, "ERR ", 4) == 0) {
            saw_err = 1;
            char *sqlstate = line + 4;
            char *space = strchr(sqlstate, ' ');
            char ss_buf[8] = {0};
            const char *msg = "";
            if (space) {
                int slen = (int)(space - sqlstate);
                if (slen >= (int)sizeof(ss_buf)) slen = sizeof(ss_buf) - 1;
                memcpy(ss_buf, sqlstate, slen); ss_buf[slen] = '\0';
                msg = space + 1;
            }
            evo_set_sqlstate(ss_buf);
            evo_set_error(EVO_ERR_SQL, "%s", msg[0] ? msg : sqlstate);
            continue;
        }
        if (strncmp(line, "TAG ", 4) == 0) {
            const char *tag = line + 4;
            const char *sp = strrchr(tag, ' ');
            if (sp) rows = atoi(sp + 1);
            continue;
        }
        /* RESULT/COLS/ROW/FIELD/END leak in if caller misused — drain. */
    }
    if (saw_err) return -1;
    if (!saw_ok) {
        evo_set_error(EVO_ERR_PROTOCOL, "no OK in DML response");
        return -1;
    }
    return rows;
}

int evo_exec(evo_conn_t *conn, const char *sql)
{
    if (!conn || !sql) {
        evo_set_error(EVO_ERR, "evo_exec: bad args");
        return -1;
    }
    g_evo_err[0] = '\0';
    g_evo_sqlstate[0] = '\0';
    if (send_sql(conn, sql) < 0) return -1;
    return drain_dml_response(conn);
}

int evo_query(evo_conn_t *conn, const char *sql,
              char *out, int max_rows, int max_cols, int col_buf_size,
              int *cols_out)
{
    if (!conn || !sql || !out || max_rows <= 0 || max_cols <= 0 ||
        col_buf_size <= 1) {
        evo_set_error(EVO_ERR, "evo_query: bad args");
        return -1;
    }
    g_evo_err[0] = '\0';
    g_evo_sqlstate[0] = '\0';
    memset(out, 0, (size_t)max_rows * max_cols * col_buf_size);
    if (cols_out) *cols_out = 0;

    if (send_sql(conn, sql) < 0) return -1;

    char line[65536];
    int rows = 0;
    int cols = 0;
    int row_idx = -1;
    int col_idx = 0;
    int saw_err = 0;
    int saw_result = 0;

    while (1) {
        if (recv_line(conn, line, sizeof(line)) < 0) return -1;
        if (strcmp(line, "READY") == 0) break;
        if (strcmp(line, "RESULT") == 0) { saw_result = 1; continue; }
        if (strncmp(line, "COLS ", 5) == 0) { cols = atoi(line + 5); continue; }
        if (strncmp(line, "COL ", 4) == 0)  { continue; }
        if (strcmp(line, "ROW") == 0) { row_idx++; col_idx = 0; continue; }
        if (strncmp(line, "FIELD ", 6) == 0) {
            const char *val = (strcmp(line + 6, "NULL") == 0) ? "" : line + 6;
            if (row_idx >= 0 && row_idx < max_rows && col_idx < max_cols) {
                char *slot = out + ((size_t)row_idx * max_cols + col_idx) * col_buf_size;
                strncpy(slot, val, col_buf_size - 1);
                slot[col_buf_size - 1] = '\0';
            }
            col_idx++;
            continue;
        }
        if (strcmp(line, "END") == 0)  { rows = row_idx + 1; continue; }
        if (strncmp(line, "TAG ", 4) == 0) continue;
        if (strncmp(line, "OK", 2) == 0)   continue;
        if (strncmp(line, "ERR ", 4) == 0) {
            saw_err = 1;
            char *sqlstate = line + 4;
            char *space = strchr(sqlstate, ' ');
            char ss_buf[8] = {0};
            const char *msg = "";
            if (space) {
                int slen = (int)(space - sqlstate);
                if (slen >= (int)sizeof(ss_buf)) slen = sizeof(ss_buf) - 1;
                memcpy(ss_buf, sqlstate, slen); ss_buf[slen] = '\0';
                msg = space + 1;
            }
            evo_set_sqlstate(ss_buf);
            evo_set_error(EVO_ERR_SQL, "%s", msg[0] ? msg : sqlstate);
            continue;
        }
    }
    if (saw_err) return -1;
    if (!saw_result) return 0;     /* DML, not SELECT */
    if (cols_out) *cols_out = cols;
    return rows;
}

/* ----------------------------------------------------------------
 *  High-level wrappers — MEMORY STORE
 * ---------------------------------------------------------------- */

/* Quick-and-dirty SQL string escape: doubles single quotes inside the
 * value. Caller's responsibility to keep keys / namespaces sane —
 * agent-memory call sites typically already validate IDs. */
static int sql_escape(const char *src, char *dst, int dst_size)
{
    int oi = 0;
    for (int i = 0; src[i]; i++) {
        if (src[i] == '\'') {
            if (oi + 2 >= dst_size) return -1;
            dst[oi++] = '\''; dst[oi++] = '\'';
        } else {
            if (oi + 1 >= dst_size) return -1;
            dst[oi++] = src[i];
        }
    }
    dst[oi] = '\0';
    return oi;
}

int evo_memory_put(evo_conn_t *conn,
                    const char *store,
                    const char *ns,
                    const char *key,
                    const char *value_json,
                    const char *embedding_or_null)
{
    if (!conn || !store || !ns || !key || !value_json) {
        evo_set_error(EVO_ERR, "evo_memory_put: bad args");
        return -1;
    }
    char e_ns[1024], e_key[1024], e_val[16384];
    if (sql_escape(ns, e_ns, sizeof(e_ns)) < 0 ||
        sql_escape(key, e_key, sizeof(e_key)) < 0 ||
        sql_escape(value_json, e_val, sizeof(e_val)) < 0) {
        evo_set_error(EVO_ERR_BUFFER, "memory_put: arg too large");
        return -1;
    }
    char sql[32768];
    if (embedding_or_null && embedding_or_null[0]) {
        snprintf(sql, sizeof(sql),
            "MEMORY PUT INTO %s VALUES ('%s','%s','%s','%s')",
            store, e_ns, e_key, e_val, embedding_or_null);
    } else {
        snprintf(sql, sizeof(sql),
            "MEMORY PUT INTO %s VALUES ('%s','%s','%s')",
            store, e_ns, e_key, e_val);
    }
    return evo_exec(conn, sql) >= 0 ? EVO_OK : EVO_ERR_SQL;
}

int evo_memory_get(evo_conn_t *conn,
                    const char *store,
                    const char *ns,
                    const char *key,
                    char *out_value, int out_size)
{
    if (!conn || !store || !ns || !key || !out_value || out_size <= 1) {
        evo_set_error(EVO_ERR, "evo_memory_get: bad args");
        return -1;
    }
    char e_ns[1024], e_key[1024];
    sql_escape(ns, e_ns, sizeof(e_ns));
    sql_escape(key, e_key, sizeof(e_key));
    char sql[8192];
    snprintf(sql, sizeof(sql),
        "MEMORY GET FROM %s WHERE NS = '%s' AND KEY = '%s'",
        store, e_ns, e_key);

    /* Project: namespace, mem_key, value, [embedding,] created_at — col 2
     * is the mem_value field we care about. */
    char buf[1][16][2048];
    int cols = 0;
    int rows = evo_query(conn, sql, (char *)buf, 1, 16, 2048, &cols);
    if (rows < 0) return EVO_ERR_SQL;
    if (rows == 0) {
        evo_set_error(EVO_ERR_NOT_FOUND, "no row for ns=%s key=%s", ns, key);
        return EVO_ERR_NOT_FOUND;
    }
    /* mem_value is column index 2 in the projection. */
    snprintf(out_value, out_size, "%s", buf[0][2]);
    return EVO_OK;
}

int evo_memory_delete(evo_conn_t *conn,
                       const char *store,
                       const char *ns,
                       const char *key)
{
    if (!conn || !store || !ns || !key) {
        evo_set_error(EVO_ERR, "evo_memory_delete: bad args");
        return -1;
    }
    char e_ns[1024], e_key[1024];
    sql_escape(ns, e_ns, sizeof(e_ns));
    sql_escape(key, e_key, sizeof(e_key));
    char sql[8192];
    snprintf(sql, sizeof(sql),
        "MEMORY DELETE FROM %s WHERE NS = '%s' AND KEY = '%s'",
        store, e_ns, e_key);
    return evo_exec(conn, sql) >= 0 ? EVO_OK : EVO_ERR_SQL;
}

/* ----------------------------------------------------------------
 *  CHECKPOINT STORE
 * ---------------------------------------------------------------- */
int evo_checkpoint_put(evo_conn_t *conn,
                        const char *store,
                        const char *thread_id,
                        const char *checkpoint_ns,
                        const char *checkpoint_id,
                        const char *values_json,
                        const char *metadata_json)
{
    if (!conn || !store || !thread_id || !checkpoint_id || !values_json) {
        evo_set_error(EVO_ERR, "evo_checkpoint_put: bad args");
        return -1;
    }
    /* Backing table layout is 7 fields:
     *   thread_id, checkpoint_ns, checkpoint_id, parent_id,
     *   ck_values, metadata, parent_config
     * The SDK exposes the 5 the agent layer cares about and supplies
     * sensible defaults for the rest (empty parent linkage). */
    char e_t[512], e_n[512], e_id[512], e_v[16384], e_m[8192];
    sql_escape(thread_id, e_t, sizeof(e_t));
    sql_escape(checkpoint_ns ? checkpoint_ns : "", e_n, sizeof(e_n));
    sql_escape(checkpoint_id, e_id, sizeof(e_id));
    sql_escape(values_json, e_v, sizeof(e_v));
    sql_escape(metadata_json ? metadata_json : "{}", e_m, sizeof(e_m));
    char sql[40000];
    snprintf(sql, sizeof(sql),
        "CHECKPOINT PUT INTO %s VALUES "
        "('%s','%s','%s','','%s','%s','{}')",
        store, e_t, e_n, e_id, e_v, e_m);
    return evo_exec(conn, sql) >= 0 ? EVO_OK : EVO_ERR_SQL;
}

int evo_checkpoint_get_latest(evo_conn_t *conn,
                                const char *store,
                                const char *thread_id,
                                char *out_value, int out_size)
{
    if (!conn || !store || !thread_id || !out_value || out_size <= 1) {
        evo_set_error(EVO_ERR, "evo_checkpoint_get_latest: bad args");
        return -1;
    }
    char e_t[512];
    sql_escape(thread_id, e_t, sizeof(e_t));
    char sql[8192];
    snprintf(sql, sizeof(sql),
        "CHECKPOINT GET FROM %s THREAD '%s'", store, e_t);

    char buf[1][16][8192];
    int cols = 0;
    int rows = evo_query(conn, sql, (char *)buf, 1, 16, 8192, &cols);
    if (rows < 0) return EVO_ERR_SQL;
    if (rows == 0) {
        evo_set_error(EVO_ERR_NOT_FOUND,
                      "no checkpoint for thread=%s", thread_id);
        return EVO_ERR_NOT_FOUND;
    }
    /* Backing table * projection order:
     *   0=thread_id  1=checkpoint_ns  2=checkpoint_id  3=parent_id
     *   4=ck_values  5=metadata       6=parent_config  7=created_at
     * The user wants the values JSON. */
    snprintf(out_value, out_size, "%s", buf[0][4]);
    return EVO_OK;
}

/* ----------------------------------------------------------------
 *  Vector helpers
 * ---------------------------------------------------------------- */
int evo_vector_format(const float *vec, int n, char *out, int out_size)
{
    if (!vec || n <= 0 || !out || out_size <= 2) return -1;
    int pos = snprintf(out, out_size, "[");
    if (pos >= out_size) return -1;
    for (int i = 0; i < n; i++) {
        int avail = out_size - pos;
        int w = snprintf(out + pos, avail, "%s%.6f",
                         i == 0 ? "" : ",", vec[i]);
        if (w < 0 || w >= avail) return -1;
        pos += w;
    }
    if (pos + 2 > out_size) return -1;
    out[pos++] = ']';
    out[pos] = '\0';
    return pos;
}
