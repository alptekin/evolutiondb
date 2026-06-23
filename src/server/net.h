/*
 * net.h — Shared networking primitives for EvoSQL Adaptor
 *
 * Protocol-agnostic socket I/O helpers used by both the PG and EVO
 * protocol layers, as well as the TCP server infrastructure.
 */
#ifndef NET_H
#define NET_H

#include "platform.h"

/* ----------------------------------------------------------------
 *  Low-level I/O — read/write exact byte counts
 * ---------------------------------------------------------------- */

/* Read exactly `len` bytes from socket into `buf`.
 * Returns total bytes read, or -1 on error/disconnect. */
int net_recv_exact(socket_t sock, char *buf, int len);

/* Send exactly `len` bytes from `buf` to socket.
 * Returns total bytes sent, or -1 on error. */
int net_send_all(socket_t sock, const char *buf, int len);

/* ----------------------------------------------------------------
 *  High-level server helpers
 * ---------------------------------------------------------------- */

/* Create a TCP server socket: socket() + SO_REUSEADDR.
 * Returns socket_t on success, SOCKET_INVALID on failure. */
socket_t net_create_server(void);

/* Bind + listen on `port` with backlog `backlog`.
 * Returns 0 on success, -1 on failure. */
int net_bind_listen(socket_t sock, int port, int backlog);

/* Accept a client connection: accept() + TCP_NODELAY.
 * Fills `addr` with client address (may be NULL).
 * Returns client socket on success, SOCKET_INVALID on failure. */
socket_t net_accept(socket_t server_sock, struct sockaddr_in *addr);

/* Send a line of text (appends \n automatically).
 * Returns 0 on success, -1 on error. */
int net_send_line(socket_t sock, const char *line);

/* Read one line from socket (up to \n), stores into `buf` without
 * the trailing \n.  Returns line length, or -1 on disconnect/error. */
int net_recv_line(socket_t sock, char *buf, int maxlen);

#endif /* NET_H */
