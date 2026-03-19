#include <stdio.h>
#include <string.h>
#include "platform.h"
#include "pg_protocol.h"
#include "tls.h"
#include "../evolution/db/database.h"
#include "util.h"

/* ----------------------------------------------------------------
 *  Low-level I/O — use conn_t for TLS-transparent I/O
 * ---------------------------------------------------------------- */
int pg_recv_exact(conn_t *conn, char *buf, int len)
{
    return conn_recv_exact(conn, buf, len);
}

static int pg_send_all(conn_t *conn, const char *buf, int len)
{
    return conn_send_all(conn, buf, len);
}

/* ----------------------------------------------------------------
 *  Buffer helpers — build wire protocol messages
 * ---------------------------------------------------------------- */
void pg_buf_init(PgBuf *b, char msg_type)
{
    b->len = 0;
    if (msg_type != 0) {
        b->buf[0] = msg_type;
        b->len = 1;
    }
    /* reserve 4 bytes for length (filled at send time) */
    b->len += 4;
}

void pg_buf_add_int32(PgBuf *b, int val)
{
    unsigned char tmp[4];
    tmp[0] = (val >> 24) & 0xFF;
    tmp[1] = (val >> 16) & 0xFF;
    tmp[2] = (val >>  8) & 0xFF;
    tmp[3] = (val      ) & 0xFF;
    memcpy(b->buf + b->len, tmp, 4);
    b->len += 4;
}

void pg_buf_add_int16(PgBuf *b, short val)
{
    unsigned char tmp[2];
    tmp[0] = (val >> 8) & 0xFF;
    tmp[1] = (val     ) & 0xFF;
    memcpy(b->buf + b->len, tmp, 2);
    b->len += 2;
}

void pg_buf_add_byte(PgBuf *b, char c)
{
    b->buf[b->len++] = c;
}

void pg_buf_add_string(PgBuf *b, const char *s)
{
    int slen = (int)strlen(s) + 1; /* include null terminator */
    memcpy(b->buf + b->len, s, slen);
    b->len += slen;
}

void pg_buf_add_bytes(PgBuf *b, const char *data, int len)
{
    memcpy(b->buf + b->len, data, len);
    b->len += len;
}

int pg_buf_send(PgBuf *b, conn_t *conn)
{
    int has_type = (b->buf[0] != 0 && b->len >= 5) ? 1 : 0;
    int length_offset = has_type ? 1 : 0;
    int msg_body_len = b->len - length_offset;

    /* Write length field (4 bytes, network byte order) */
    unsigned char lenbuf[4];
    lenbuf[0] = (msg_body_len >> 24) & 0xFF;
    lenbuf[1] = (msg_body_len >> 16) & 0xFF;
    lenbuf[2] = (msg_body_len >>  8) & 0xFF;
    lenbuf[3] = (msg_body_len      ) & 0xFF;
    memcpy(b->buf + length_offset, lenbuf, 4);

    return pg_send_all(conn, b->buf, b->len);
}

/* ----------------------------------------------------------------
 *  High-level message senders
 * ---------------------------------------------------------------- */
void pg_send_auth_ok(conn_t *conn)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_AUTH);
    pg_buf_add_int32(&b, PG_AUTH_OK);
    pg_buf_send(&b, conn);
}

void pg_send_auth_cleartext(conn_t *conn)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_AUTH);
    pg_buf_add_int32(&b, PG_AUTH_CLEARTEXT_PASSWORD);
    pg_buf_send(&b, conn);
}

void pg_send_parameter_status(conn_t *conn, const char *name, const char *value)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_PARAM_STATUS);
    pg_buf_add_string(&b, name);
    pg_buf_add_string(&b, value);
    pg_buf_send(&b, conn);
}

void pg_send_ready_for_query(conn_t *conn, char status)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_READY);
    pg_buf_add_byte(&b, status);
    pg_buf_send(&b, conn);
}

void pg_send_error(conn_t *conn, const char *severity,
                   const char *sqlstate, const char *message)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_ERROR);

    pg_buf_add_byte(&b, 'S');
    pg_buf_add_string(&b, severity);

    pg_buf_add_byte(&b, 'V');
    pg_buf_add_string(&b, severity);

    pg_buf_add_byte(&b, 'C');
    pg_buf_add_string(&b, sqlstate);

    pg_buf_add_byte(&b, 'M');
    pg_buf_add_string(&b, message);

    pg_buf_add_byte(&b, '\0'); /* terminator */
    pg_buf_send(&b, conn);
}

void pg_send_command_complete(conn_t *conn, const char *tag)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_CMD_COMPLETE);
    pg_buf_add_string(&b, tag);
    pg_buf_send(&b, conn);
}

void pg_send_empty_query(conn_t *conn)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_EMPTY_QUERY);
    pg_buf_send(&b, conn);
}

void pg_send_backend_key_data(conn_t *conn, int pid, int secret)
{
    PgBuf b;
    pg_buf_init(&b, 'K');
    pg_buf_add_int32(&b, pid);
    pg_buf_add_int32(&b, secret);
    pg_buf_send(&b, conn);
}

void pg_send_row_description(conn_t *conn, const ResultSet *rs)
{
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
    pg_buf_send(&b, conn);
}

void pg_send_data_row(conn_t *conn, const char *fields[], const int is_null[],
                      int num_cols)
{
    PgBuf b;
    int c;
    pg_buf_init(&b, PG_RESP_DATA_ROW);
    pg_buf_add_int16(&b, (short)num_cols);
    for (c = 0; c < num_cols; c++) {
        if (is_null[c] || !fields[c]) {
            pg_buf_add_int32(&b, -1);
        } else {
            int flen = (int)strlen(fields[c]);
            pg_buf_add_int32(&b, flen);
            pg_buf_add_bytes(&b, fields[c], flen);
        }
    }
    pg_buf_send(&b, conn);
}

void pg_send_result_set(conn_t *conn, const ResultSet *rs)
{
    int r;

    pg_send_row_description(conn, rs);

    for (r = 0; r < rs->num_rows; r++) {
        pg_send_data_row(conn,
                         (const char **)rs->rows[r].fields,
                         rs->rows[r].is_null,
                         rs->num_cols);
    }

    /* CommandComplete */
    pg_send_command_complete(conn, rs->command_tag);
}

/* ----------------------------------------------------------------
 *  Startup / handshake — with TLS and cleartext password auth
 * ---------------------------------------------------------------- */
int pg_handle_startup(conn_t *conn, char *out_user, int user_size)
{
    char buf[8192];
    int msg_len;
    int protocol;
    char startup_user[256] = "";

    fprintf(stderr, "[debug] handle_startup: reading length...\n"); fflush(stderr);

    /* Read initial 4-byte length */
    if (pg_recv_exact(conn, buf, 4) < 0)
        return -1;

    msg_len = ((unsigned char)buf[0] << 24) |
              ((unsigned char)buf[1] << 16) |
              ((unsigned char)buf[2] <<  8) |
              ((unsigned char)buf[3]);

    fprintf(stderr, "[debug] handle_startup: msg_len=%d\n", msg_len); fflush(stderr);

    if (msg_len < 8 || msg_len > (int)sizeof(buf))
        return -1;

    /* Read rest of startup message */
    if (pg_recv_exact(conn, buf + 4, msg_len - 4) < 0)
        return -1;

    /* Parse protocol version */
    protocol = ((unsigned char)buf[4] << 24) |
               ((unsigned char)buf[5] << 16) |
               ((unsigned char)buf[6] <<  8) |
               ((unsigned char)buf[7]);

    /* SSL request? */
    if (protocol == PG_SSL_REQUEST) {
        if (tls_is_available()) {
            /* Accept SSL — respond with 'S' then do TLS handshake */
            char yes = 'S';
            pg_send_all(conn, &yes, 1);
            if (conn_tls_accept(conn) < 0) {
                fprintf(stderr, "[PG] TLS handshake failed\n");
                return -1;
            }
        } else {
            /* TLS not available — respond with 'N' */
            char no = 'N';
            pg_send_all(conn, &no, 1);
        }
        return pg_handle_startup(conn, out_user, user_size);
    }

    /* GSSAPI encryption request? Always decline */
    if (protocol == PG_GSSENC_REQUEST) {
        char no = 'N';
        pg_send_all(conn, &no, 1);
        return pg_handle_startup(conn, out_user, user_size);
    }

    if (protocol != PG_PROTOCOL_V3) {
        printf("[adaptor] Unsupported protocol version: %d\n", protocol);
        return -1;
    }

    /* Parse startup parameters — extract user */
    {
        char *p = buf + 8;
        char *end = buf + msg_len;
        while (p < end && *p != '\0') {
            char *key = p;
            p += strlen(p) + 1;
            if (p >= end) break;
            char *val = p;
            p += strlen(p) + 1;
            printf("[adaptor] Startup param: %s = %s\n", key, val);
            if (strcmp(key, "user") == 0) {
                strncpy(startup_user, val, sizeof(startup_user) - 1);
                startup_user[sizeof(startup_user) - 1] = '\0';
            }
        }
    }

    /* ── Authentication: request cleartext password ── */
    fprintf(stderr, "[debug] requesting cleartext password...\n"); fflush(stderr);
    pg_send_auth_cleartext(conn);

    /* Read PasswordMessage ('p') */
    {
        char pw_header[5];
        if (pg_recv_exact(conn, pw_header, 5) < 0)
            return -1;

        if (pw_header[0] != PG_MSG_PASSWORD) {
            fprintf(stderr, "[PG] Expected PasswordMessage, got '%c'\n", pw_header[0]);
            pg_send_error(conn, "FATAL", "28000", "Expected password message");
            return -1;
        }

        int pw_len = ((unsigned char)pw_header[1] << 24) |
                     ((unsigned char)pw_header[2] << 16) |
                     ((unsigned char)pw_header[3] <<  8) |
                     ((unsigned char)pw_header[4]);
        int pw_body = pw_len - 4;
        if (pw_body <= 0 || pw_body > 1024) {
            pg_send_error(conn, "FATAL", "28P01", "Invalid password length");
            return -1;
        }

        char password[1024];
        if (pg_recv_exact(conn, password, pw_body) < 0)
            return -1;
        /* Password is null-terminated in the wire message */
        password[pw_body] = '\0';

        /* Verify credentials */
        if (!AuthenticateUser(startup_user, password)) {
            fprintf(stderr, "[PG] Authentication failed for user '%s'\n", startup_user);
            pg_send_error(conn, "FATAL", "28P01",
                          "password authentication failed");
            evo_secure_wipe(password, sizeof(password));
            return -1;
        }

        evo_secure_wipe(password, sizeof(password));
    }

    /* Authentication succeeded */
    fprintf(stderr, "[debug] sending auth_ok...\n"); fflush(stderr);
    pg_send_auth_ok(conn);

    /* Copy username to caller */
    if (out_user && user_size > 0) {
        strncpy(out_user, startup_user, user_size - 1);
        out_user[user_size - 1] = '\0';
    }

    /* Send essential ParameterStatus messages */
    fprintf(stderr, "[debug] sending param_status...\n"); fflush(stderr);
    pg_send_parameter_status(conn, "server_version", "15.0 (EvoSQL)");
    pg_send_parameter_status(conn, "server_encoding", "UTF8");
    pg_send_parameter_status(conn, "client_encoding", "UTF8");
    pg_send_parameter_status(conn, "DateStyle", "ISO, MDY");
    pg_send_parameter_status(conn, "integer_datetimes", "on");
    pg_send_parameter_status(conn, "standard_conforming_strings", "on");
    pg_send_parameter_status(conn, "TimeZone", "UTC");
    pg_send_parameter_status(conn, "is_superuser", "on");
    pg_send_parameter_status(conn, "session_authorization", startup_user);
    pg_send_parameter_status(conn, "IntervalStyle", "postgres");

    /* BackendKeyData — required by JDBC/DBeaver */
    fprintf(stderr, "[debug] sending backend_key_data...\n"); fflush(stderr);
    pg_send_backend_key_data(conn, platform_getpid(), 12345);

    /* ReadyForQuery — idle */
    fprintf(stderr, "[debug] sending ready_for_query...\n"); fflush(stderr);
    pg_send_ready_for_query(conn, 'I');

    fprintf(stderr, "[debug] startup handshake done!\n"); fflush(stderr);
    printf("[adaptor] Startup handshake completed (user: %s)\n", startup_user);
    fflush(stdout);
    return 0;
}

/* ----------------------------------------------------------------
 *  Read a frontend message
 * ---------------------------------------------------------------- */
int pg_read_message(conn_t *conn, char *type, char *buf, int *len)
{
    char header[5];
    int msg_len;

    /* Read 1-byte type + 4-byte length */
    if (pg_recv_exact(conn, header, 5) < 0)
        return -1;

    *type = header[0];
    msg_len = ((unsigned char)header[1] << 24) |
              ((unsigned char)header[2] << 16) |
              ((unsigned char)header[3] <<  8) |
              ((unsigned char)header[4]);

    /* msg_len includes itself (4 bytes) but not the type byte */
    int body_len = msg_len - 4;
    if (body_len < 0 || body_len > 65536)
        return -1;

    if (body_len > 0) {
        if (pg_recv_exact(conn, buf, body_len) < 0)
            return -1;
    }
    *len = body_len;
    return 0;
}
