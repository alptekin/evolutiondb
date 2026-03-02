/*
 * server.h — Generic multi-threaded TCP server for EvoSQL Adaptor
 *
 * Provides a reusable accept-loop that spawns a thread per connection.
 * The actual protocol handling is delegated to a callback function,
 * allowing the same server infrastructure to serve PG and EVO protocols.
 */
#ifndef SERVER_H
#define SERVER_H

#include "platform.h"
#include "query_executor.h"
#include "result.h"

/* ----------------------------------------------------------------
 *  Protocol handler callback
 *
 *  Called once per accepted connection, in its own thread.
 *  `sock` is the client socket (already TCP_NODELAY'd).
 *  The handler owns the socket and must NOT close it — the server
 *  infrastructure closes it after the handler returns.
 * ---------------------------------------------------------------- */
typedef void (*protocol_handler_fn)(socket_t sock);

/* ----------------------------------------------------------------
 *  Thread-safe query execution (shared by all protocol handlers)
 * ---------------------------------------------------------------- */
void safe_query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx);

/* ----------------------------------------------------------------
 *  Connection-limit accessors (shared state)
 * ---------------------------------------------------------------- */
int  get_max_connections(void);
void set_max_connections(int n);
int  get_active_connections(void);

/* ----------------------------------------------------------------
 *  Server lifecycle
 * ---------------------------------------------------------------- */

/* Initialise the engine and shared locks.  Call once from main(). */
void server_init(void);

/* Start an accept loop on `port` using `handler` for each connection.
 * `label` is used in log messages (e.g. "PG", "EVO").
 * This function blocks forever (runs the accept loop).
 * Returns only on fatal error. */
void server_listen(int port, const char *label, protocol_handler_fn handler);

/* Cleanup (called after all servers stop — usually never). */
void server_cleanup(void);

#endif /* SERVER_H */
