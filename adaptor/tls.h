/*
 * tls.h — OpenSSL TLS wrapper for EvoSQL Adaptor
 *
 * Provides a unified connection object (conn_t) that abstracts
 * plain TCP vs. TLS-encrypted I/O.  Protocol handlers use conn_*
 * functions instead of raw socket recv/send.
 */
#ifndef TLS_H
#define TLS_H

#include "platform.h"

#ifdef EVOSQL_TLS
#include <openssl/ssl.h>
#include <openssl/err.h>
#endif

/* ----------------------------------------------------------------
 *  Connection object — wraps socket + optional TLS
 * ---------------------------------------------------------------- */
typedef struct {
    socket_t sock;
#ifdef EVOSQL_TLS
    SSL     *ssl;       /* NULL if not TLS */
#else
    void    *ssl;       /* placeholder — always NULL */
#endif
    int      is_tls;    /* 1 if TLS active on this connection */

    /* ------------------------------------------------------------------
     *  LISTEN/NOTIFY support (Task 91 — Feature #62)
     *
     *  write_lock serializes outbound message writes so async
     *  notifications from other threads cannot interleave with a
     *  response being streamed by the query-execution thread.
     *
     *  valid is set to 0 just before the socket is closed; async senders
     *  check it (under write_lock) and drop their send.
     *
     *  protocol identifies which wire format this conn speaks — the
     *  flush_commit snapshot dispatcher uses it to pick between
     *  pg_send_notification_response and evo_send_notification.
     * ------------------------------------------------------------------ */
    mutex_t  write_lock;
    int      valid;            /* 1 until disconnect begins */
    int      protocol;         /* CONN_PROTO_PG or CONN_PROTO_EVO */
    int      initialized;      /* 1 after conn_lock_init set up write_lock */
} conn_t;

#define CONN_PROTO_PG   0
#define CONN_PROTO_EVO  1

/* Initialize write_lock / valid flag. Call once per accepted connection
 * before any pg_send_* or evo_send_* is invoked. Idempotent. */
void conn_lock_init(conn_t *c, int protocol);

/* Set valid=0 under write_lock (so in-flight async senders see the flag),
 * then destroy the mutex. Call once per connection at cleanup. */
void conn_lock_destroy(conn_t *c);

/* ----------------------------------------------------------------
 *  Global TLS context management
 * ---------------------------------------------------------------- */

/* Initialize OpenSSL and create server SSL_CTX.
 * cert_file and key_file are paths to PEM files.
 * Returns 0 on success, -1 on error. */
int tls_global_init(const char *cert_file, const char *key_file);

/* Cleanup global TLS context. */
void tls_global_cleanup(void);

/* Returns 1 if TLS is available (initialized with valid cert). */
int tls_is_available(void);

/* ----------------------------------------------------------------
 *  Per-connection TLS operations
 * ---------------------------------------------------------------- */

/* Initialize a conn_t with a plain socket (no TLS yet). */
void conn_init(conn_t *c, socket_t sock);

/* Upgrade a plain connection to TLS (server-side accept).
 * Returns 0 on success, -1 on error. */
int conn_tls_accept(conn_t *c);

/* Upgrade a plain connection to TLS (client-side connect).
 * Returns 0 on success, -1 on error. */
int conn_tls_connect(conn_t *c);

/* ----------------------------------------------------------------
 *  I/O operations (work for both plain and TLS)
 * ---------------------------------------------------------------- */

/* Read exactly `len` bytes. Returns total read or -1. */
int conn_recv_exact(conn_t *c, char *buf, int len);

/* Send exactly `len` bytes. Returns total sent or -1. */
int conn_send_all(conn_t *c, const char *buf, int len);

/* Send a line (appends \n). Returns 0 on success, -1 on error. */
int conn_send_line(conn_t *c, const char *line);

/* Read one line (up to \n). Returns line length or -1. */
int conn_recv_line(conn_t *c, char *buf, int maxlen);

/* Close TLS layer (if any). Does NOT close the socket. */
void conn_tls_shutdown(conn_t *c);

#endif /* TLS_H */
