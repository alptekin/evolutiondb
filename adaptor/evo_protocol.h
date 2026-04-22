/*
 * evo_protocol.h — EvoSQL native text-based wire protocol
 *
 * A simple, human-readable protocol designed for the EvoSQL CLI client.
 * All messages are line-oriented (terminated by \n).
 *
 * ── Request format (client → server) ──
 *   EVO\n                          ← magic / greeting (sent once)
 *   SQL <length>\n                 ← query header
 *   <sql text>\n                   ← query body
 *   QUIT\n                         ← disconnect
 *
 * ── Response format (server → client) ──
 *   HELLO EvoSQL 1.0\n             ← server greeting
 *
 *   For SELECT results:
 *     RESULT\n
 *     COLS <n>\n
 *     COL <name>\n                 ← repeated n times
 *     ROW\n                        ← per row
 *     FIELD <value>\n              ← per field (or FIELD NULL\n)
 *     END\n
 *     TAG <command_tag>\n
 *
 *   For DDL/DML:
 *     OK\n
 *     TAG <command_tag>\n
 *
 *   For errors:
 *     ERR <sqlstate> <message>\n
 *
 *   After every command:
 *     READY\n
 */
#ifndef EVO_PROTOCOL_H
#define EVO_PROTOCOL_H

#include "platform.h"

#define EVO_DEFAULT_PORT 9967

#include "tls.h"

/* Handle a single EVO-protocol client connection.
 * Called from server.c's client_thread — must not close `sock`. */
void evo_handle_client(socket_t sock);

/* Async LISTEN/NOTIFY delivery (Task 91 — Feature #62). */
void evo_send_notification(conn_t *conn, int sender_session_id,
                           const char *channel, const char *payload);

#endif /* EVO_PROTOCOL_H */
