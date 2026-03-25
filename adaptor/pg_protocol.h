#ifndef PG_PROTOCOL_H
#define PG_PROTOCOL_H

#include "platform.h"
#include "result.h"
#include "tls.h"

/* Frontend message types (client → server) */
#define PG_MSG_QUERY       'Q'
#define PG_MSG_TERMINATE   'X'
#define PG_MSG_PARSE       'P'
#define PG_MSG_BIND        'B'
#define PG_MSG_DESCRIBE    'D'
#define PG_MSG_EXECUTE     'E'
#define PG_MSG_SYNC        'S'
#define PG_MSG_CLOSE       'C'
#define PG_MSG_FLUSH       'H'
#define PG_MSG_PASSWORD    'p'   /* PasswordMessage from client */

/* Backend message types (server → client) */
#define PG_RESP_AUTH            'R'
#define PG_RESP_PARAM_STATUS    'S'
#define PG_RESP_READY           'Z'
#define PG_RESP_ROW_DESC        'T'
#define PG_RESP_DATA_ROW        'D'
#define PG_RESP_CMD_COMPLETE    'C'
#define PG_RESP_ERROR           'E'
#define PG_RESP_EMPTY_QUERY     'I'
#define PG_RESP_NOTICE          'N'
#define PG_RESP_PARSE_COMPLETE  '1'
#define PG_RESP_BIND_COMPLETE   '2'
#define PG_RESP_CLOSE_COMPLETE  '3'
#define PG_RESP_NO_DATA        'n'
#define PG_RESP_PARAM_DESC     't'

/* Protocol version */
#define PG_PROTOCOL_V3  196608   /* 3.0 */
#define PG_SSL_REQUEST     80877103
#define PG_GSSENC_REQUEST  80877104
#define PG_CANCEL_REQUEST  80877102

/* Authentication sub-types (inside R message) */
#define PG_AUTH_OK                0
#define PG_AUTH_CLEARTEXT_PASSWORD 3

/* Write buffer for building messages */
typedef struct {
    char   buf[65536];
    int    len;
} PgBuf;

/* Read exact number of bytes from connection */
int pg_recv_exact(conn_t *conn, char *buf, int len);

/* Startup/handshake — returns 0 on success, -1 on failure.
 * Fills out_user with the authenticated username (max 256 bytes). */
int pg_handle_startup(conn_t *conn, char *out_user, int user_size);

/* Send helpers */
void pg_buf_init(PgBuf *b, char msg_type);
void pg_buf_add_int32(PgBuf *b, int val);
void pg_buf_add_int16(PgBuf *b, short val);
void pg_buf_add_byte(PgBuf *b, char c);
void pg_buf_add_string(PgBuf *b, const char *s);
void pg_buf_add_bytes(PgBuf *b, const char *data, int len);
int  pg_buf_send(PgBuf *b, conn_t *conn);

/* High-level send functions */
void pg_send_auth_ok(conn_t *conn);
void pg_send_auth_cleartext(conn_t *conn);
void pg_send_parameter_status(conn_t *conn, const char *name, const char *value);
void pg_send_ready_for_query(conn_t *conn, char status);
void pg_send_error(conn_t *conn, const char *severity, const char *sqlstate,
                   const char *message);
void pg_send_command_complete(conn_t *conn, const char *tag);
void pg_send_empty_query(conn_t *conn);
void pg_send_backend_key_data(conn_t *conn, int pid, int secret);
void pg_send_result_set(conn_t *conn, const ResultSet *rs);

/* Streaming: send RowDescription header (column metadata) */
void pg_send_row_description(conn_t *conn, const ResultSet *rs);

/* Streaming: send a single DataRow from raw field values */
void pg_send_data_row(conn_t *conn, const char *fields[], const int is_null[],
                      int num_cols);

/* Read a frontend message. Returns message type, fills buf and len.
   For startup messages, type is set to 0. */
int pg_read_message(conn_t *conn, char *type, char *buf, int *len);

#endif /* PG_PROTOCOL_H */
