#include <stdio.h>
#include <string.h>
#include "platform.h"
#include "pg_protocol.h"

/* ----------------------------------------------------------------
 *  Low-level I/O
 * ---------------------------------------------------------------- */
int pg_recv_exact(socket_t sock, char *buf, int len)
{
    int total = 0, n;
    while (total < len) {
        n = recv(sock, buf + total, len - total, 0);
        if (n <= 0) return -1;
        total += n;
    }
    return total;
}

static int pg_send_all(socket_t sock, const char *buf, int len)
{
    int total = 0, n;
    while (total < len) {
        n = send(sock, buf + total, len - total, 0);
        if (n <= 0) return -1;
        total += n;
    }
    return total;
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

int pg_buf_send(PgBuf *b, socket_t sock)
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

    return pg_send_all(sock, b->buf, b->len);
}

/* ----------------------------------------------------------------
 *  High-level message senders
 * ---------------------------------------------------------------- */
void pg_send_auth_ok(socket_t sock)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_AUTH);
    pg_buf_add_int32(&b, 0); /* AuthenticationOk */
    pg_buf_send(&b, sock);
}

void pg_send_parameter_status(socket_t sock, const char *name, const char *value)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_PARAM_STATUS);
    pg_buf_add_string(&b, name);
    pg_buf_add_string(&b, value);
    pg_buf_send(&b, sock);
}

void pg_send_ready_for_query(socket_t sock, char status)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_READY);
    pg_buf_add_byte(&b, status);
    pg_buf_send(&b, sock);
}

void pg_send_error(socket_t sock, const char *severity,
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
    pg_buf_send(&b, sock);
}

void pg_send_command_complete(socket_t sock, const char *tag)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_CMD_COMPLETE);
    pg_buf_add_string(&b, tag);
    pg_buf_send(&b, sock);
}

void pg_send_empty_query(socket_t sock)
{
    PgBuf b;
    pg_buf_init(&b, PG_RESP_EMPTY_QUERY);
    pg_buf_send(&b, sock);
}

void pg_send_backend_key_data(socket_t sock, int pid, int secret)
{
    PgBuf b;
    pg_buf_init(&b, 'K');
    pg_buf_add_int32(&b, pid);
    pg_buf_add_int32(&b, secret);
    pg_buf_send(&b, sock);
}

void pg_send_result_set(socket_t sock, const ResultSet *rs)
{
    PgBuf b;
    int r, c;

    /* RowDescription */
    pg_buf_init(&b, PG_RESP_ROW_DESC);
    pg_buf_add_int16(&b, (short)rs->num_cols);
    for (c = 0; c < rs->num_cols; c++) {
        pg_buf_add_string(&b, rs->columns[c].name);  /* column name */
        pg_buf_add_int32(&b, 0);                       /* table OID */
        pg_buf_add_int16(&b, 0);                       /* column attr */
        pg_buf_add_int32(&b, rs->columns[c].pg_type_oid); /* type OID */
        pg_buf_add_int16(&b, (short)rs->columns[c].type_len); /* type size */
        pg_buf_add_int32(&b, -1);                      /* type modifier */
        pg_buf_add_int16(&b, 0);                       /* format: text */
    }
    pg_buf_send(&b, sock);

    /* DataRow for each row */
    for (r = 0; r < rs->num_rows; r++) {
        pg_buf_init(&b, PG_RESP_DATA_ROW);
        pg_buf_add_int16(&b, (short)rs->num_cols);
        for (c = 0; c < rs->num_cols; c++) {
            if (rs->rows[r].is_null[c]) {
                pg_buf_add_int32(&b, -1); /* NULL */
            } else {
                int flen = (int)strlen(rs->rows[r].fields[c]);
                pg_buf_add_int32(&b, flen);
                pg_buf_add_bytes(&b, rs->rows[r].fields[c], flen);
            }
        }
        pg_buf_send(&b, sock);
    }

    /* CommandComplete */
    pg_send_command_complete(sock, rs->command_tag);
}

/* ----------------------------------------------------------------
 *  Startup / handshake
 * ---------------------------------------------------------------- */
int pg_handle_startup(socket_t sock)
{
    char buf[8192];
    int msg_len;
    int protocol;

    fprintf(stderr, "[debug] handle_startup: reading length...\n"); fflush(stderr);

    /* Read initial 4-byte length */
    if (pg_recv_exact(sock, buf, 4) < 0)
        return -1;

    msg_len = ((unsigned char)buf[0] << 24) |
              ((unsigned char)buf[1] << 16) |
              ((unsigned char)buf[2] <<  8) |
              ((unsigned char)buf[3]);

    fprintf(stderr, "[debug] handle_startup: msg_len=%d\n", msg_len); fflush(stderr);

    if (msg_len < 8 || msg_len > (int)sizeof(buf))
        return -1;

    /* Read rest of startup message */
    if (pg_recv_exact(sock, buf + 4, msg_len - 4) < 0)
        return -1;

    /* Parse protocol version */
    protocol = ((unsigned char)buf[4] << 24) |
               ((unsigned char)buf[5] << 16) |
               ((unsigned char)buf[6] <<  8) |
               ((unsigned char)buf[7]);

    /* SSL request? Respond with 'N' and read real startup */
    if (protocol == PG_SSL_REQUEST) {
        char no = 'N';
        pg_send_all(sock, &no, 1);
        return pg_handle_startup(sock); /* recursive: read real startup */
    }

    /* GSSAPI encryption request? Respond with 'N' and read real startup */
    if (protocol == PG_GSSENC_REQUEST) {
        char no = 'N';
        pg_send_all(sock, &no, 1);
        return pg_handle_startup(sock); /* recursive: read real startup */
    }

    if (protocol != PG_PROTOCOL_V3) {
        printf("[adaptor] Unsupported protocol version: %d\n", protocol);
        return -1;
    }

    /* Parse startup parameters (user, database, etc.) - just log them */
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
        }
    }

    /* Send AuthenticationOk */
    fprintf(stderr, "[debug] sending auth_ok...\n"); fflush(stderr);
    pg_send_auth_ok(sock);

    /* Send essential ParameterStatus messages */
    fprintf(stderr, "[debug] sending param_status...\n"); fflush(stderr);
    pg_send_parameter_status(sock, "server_version", "15.0 (EvoSQL)");
    pg_send_parameter_status(sock, "server_encoding", "UTF8");
    pg_send_parameter_status(sock, "client_encoding", "UTF8");
    pg_send_parameter_status(sock, "DateStyle", "ISO, MDY");
    pg_send_parameter_status(sock, "integer_datetimes", "on");
    pg_send_parameter_status(sock, "standard_conforming_strings", "on");
    pg_send_parameter_status(sock, "TimeZone", "UTC");
    pg_send_parameter_status(sock, "is_superuser", "on");
    pg_send_parameter_status(sock, "session_authorization", "evosql");
    pg_send_parameter_status(sock, "IntervalStyle", "postgres");

    /* BackendKeyData — required by JDBC/DBeaver */
    fprintf(stderr, "[debug] sending backend_key_data...\n"); fflush(stderr);
    pg_send_backend_key_data(sock, platform_getpid(), 12345);

    /* ReadyForQuery — idle */
    fprintf(stderr, "[debug] sending ready_for_query...\n"); fflush(stderr);
    pg_send_ready_for_query(sock, 'I');

    fprintf(stderr, "[debug] startup handshake done!\n"); fflush(stderr);
    printf("[adaptor] Startup handshake completed\n"); fflush(stdout);
    return 0;
}

/* ----------------------------------------------------------------
 *  Read a frontend message
 * ---------------------------------------------------------------- */
int pg_read_message(socket_t sock, char *type, char *buf, int *len)
{
    char header[5];
    int msg_len;

    /* Read 1-byte type + 4-byte length */
    if (pg_recv_exact(sock, header, 5) < 0)
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
        if (pg_recv_exact(sock, buf, body_len) < 0)
            return -1;
    }
    *len = body_len;
    return 0;
}
