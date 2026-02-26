#ifndef PG_PROTOCOL_H
#define PG_PROTOCOL_H

#include <winsock2.h>
#include "result.h"

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

/* Write buffer for building messages */
typedef struct {
    char   buf[65536];
    int    len;
} PgBuf;

/* Read exact number of bytes from socket */
int pg_recv_exact(SOCKET sock, char *buf, int len);

/* Startup/handshake */
int pg_handle_startup(SOCKET sock);

/* Send helpers */ 
void pg_buf_init(PgBuf *b, char msg_type);
void pg_buf_add_int32(PgBuf *b, int val);
void pg_buf_add_int16(PgBuf *b, short val);
void pg_buf_add_byte(PgBuf *b, char c);
void pg_buf_add_string(PgBuf *b, const char *s);
void pg_buf_add_bytes(PgBuf *b, const char *data, int len);
int  pg_buf_send(PgBuf *b, SOCKET sock);

/* High-level send functions */
void pg_send_auth_ok(SOCKET sock);
void pg_send_parameter_status(SOCKET sock, const char *name, const char *value);
void pg_send_ready_for_query(SOCKET sock, char status);
void pg_send_error(SOCKET sock, const char *severity, const char *sqlstate,
                   const char *message);
void pg_send_command_complete(SOCKET sock, const char *tag);
void pg_send_empty_query(SOCKET sock);
void pg_send_backend_key_data(SOCKET sock, int pid, int secret);
void pg_send_result_set(SOCKET sock, const ResultSet *rs);

/* Read a frontend message. Returns message type, fills buf and len.
   For startup messages, type is set to 0. */
int pg_read_message(SOCKET sock, char *type, char *buf, int *len);

#endif /* PG_PROTOCOL_H */
