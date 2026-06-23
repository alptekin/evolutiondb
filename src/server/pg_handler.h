/*
 * pg_handler.h — PostgreSQL wire-protocol connection handler
 *
 * Implements the per-connection state machine that speaks PG v3
 * protocol (Simple Query + Extended Query).  Used as a callback by
 * the generic server infrastructure in server.c.
 */
#ifndef PG_HANDLER_H
#define PG_HANDLER_H

#include "platform.h"

/* Handle a single PostgreSQL client connection.
 * Called from server.c's client_thread — must not close `sock`. */
void pg_handle_client(socket_t sock);

#endif /* PG_HANDLER_H */
