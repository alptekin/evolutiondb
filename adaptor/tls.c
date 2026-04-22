/*
 * tls.c — OpenSSL TLS wrapper for EvoSQL Adaptor
 *
 * When compiled with -DEVOSQL_TLS, provides real TLS via OpenSSL.
 * Otherwise, all TLS functions gracefully degrade to plain-socket I/O.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "platform.h"
#include "tls.h"
#include "net.h"

/* ================================================================
 *  TLS-enabled build (OpenSSL)
 * ================================================================ */
#ifdef EVOSQL_TLS

static SSL_CTX *g_ssl_ctx = NULL;

int tls_global_init(const char *cert_file, const char *key_file)
{
    SSL_load_error_strings();
    SSL_library_init();
    OpenSSL_add_all_algorithms();

    g_ssl_ctx = SSL_CTX_new(TLS_server_method());
    if (!g_ssl_ctx) {
        fprintf(stderr, "[TLS] Failed to create SSL_CTX\n");
        ERR_print_errors_fp(stderr);
        return -1;
    }

    if (SSL_CTX_use_certificate_file(g_ssl_ctx, cert_file, SSL_FILETYPE_PEM) <= 0) {
        fprintf(stderr, "[TLS] Failed to load certificate: %s\n", cert_file);
        ERR_print_errors_fp(stderr);
        SSL_CTX_free(g_ssl_ctx);
        g_ssl_ctx = NULL;
        return -1;
    }

    if (SSL_CTX_use_PrivateKey_file(g_ssl_ctx, key_file, SSL_FILETYPE_PEM) <= 0) {
        fprintf(stderr, "[TLS] Failed to load private key: %s\n", key_file);
        ERR_print_errors_fp(stderr);
        SSL_CTX_free(g_ssl_ctx);
        g_ssl_ctx = NULL;
        return -1;
    }

    if (!SSL_CTX_check_private_key(g_ssl_ctx)) {
        fprintf(stderr, "[TLS] Private key does not match certificate\n");
        SSL_CTX_free(g_ssl_ctx);
        g_ssl_ctx = NULL;
        return -1;
    }

    printf("[TLS] Initialized with cert=%s key=%s\n", cert_file, key_file);
    return 0;
}

void tls_global_cleanup(void)
{
    if (g_ssl_ctx) {
        SSL_CTX_free(g_ssl_ctx);
        g_ssl_ctx = NULL;
    }
    EVP_cleanup();
}

int tls_is_available(void)
{
    return g_ssl_ctx != NULL;
}

void conn_init(conn_t *c, socket_t sock)
{
    c->sock        = sock;
    c->ssl         = NULL;
    c->is_tls      = 0;
    c->valid       = 1;
    c->protocol    = CONN_PROTO_PG;  /* default, overwritten by conn_lock_init */
    c->initialized = 0;
}

int conn_tls_accept(conn_t *c)
{
    if (!g_ssl_ctx) return -1;

    c->ssl = SSL_new(g_ssl_ctx);
    if (!c->ssl) {
        fprintf(stderr, "[TLS] SSL_new failed\n");
        return -1;
    }

    SSL_set_fd(c->ssl, (int)c->sock);

    int ret = SSL_accept(c->ssl);
    if (ret <= 0) {
        fprintf(stderr, "[TLS] SSL_accept failed: %d\n", SSL_get_error(c->ssl, ret));
        ERR_print_errors_fp(stderr);
        SSL_free(c->ssl);
        c->ssl = NULL;
        return -1;
    }

    c->is_tls = 1;
    fprintf(stderr, "[TLS] Handshake complete (cipher: %s)\n",
            SSL_get_cipher(c->ssl));
    return 0;
}

int conn_tls_connect(conn_t *c)
{
    /* Client-side TLS connect — uses a temporary client context */
    SSL_CTX *client_ctx = SSL_CTX_new(TLS_client_method());
    if (!client_ctx) return -1;

    c->ssl = SSL_new(client_ctx);
    SSL_CTX_free(client_ctx); /* SSL object keeps reference */

    if (!c->ssl) return -1;

    SSL_set_fd(c->ssl, (int)c->sock);

    int ret = SSL_connect(c->ssl);
    if (ret <= 0) {
        fprintf(stderr, "[TLS] SSL_connect failed: %d\n", SSL_get_error(c->ssl, ret));
        SSL_free(c->ssl);
        c->ssl = NULL;
        return -1;
    }

    c->is_tls = 1;
    return 0;
}

int conn_recv_exact(conn_t *c, char *buf, int len)
{
    if (c->is_tls && c->ssl) {
        int total = 0, n;
        while (total < len) {
            n = SSL_read(c->ssl, buf + total, len - total);
            if (n <= 0) return -1;
            total += n;
        }
        return total;
    }
    return net_recv_exact(c->sock, buf, len);
}

int conn_send_all(conn_t *c, const char *buf, int len)
{
    if (c->is_tls && c->ssl) {
        int total = 0, n;
        while (total < len) {
            n = SSL_write(c->ssl, buf + total, len - total);
            if (n <= 0) return -1;
            total += n;
        }
        return total;
    }
    return net_send_all(c->sock, buf, len);
}

int conn_send_line(conn_t *c, const char *line)
{
    int len = (int)strlen(line);
    if (conn_send_all(c, line, len) < 0) return -1;
    if (conn_send_all(c, "\n", 1) < 0) return -1;
    return 0;
}

int conn_recv_line(conn_t *c, char *buf, int maxlen)
{
    int pos = 0;
    while (pos < maxlen - 1) {
        char ch;
        int n;
        if (c->is_tls && c->ssl) {
            n = SSL_read(c->ssl, &ch, 1);
        } else {
            n = recv(c->sock, &ch, 1, 0);
        }
        if (n <= 0) return -1;
        if (ch == '\n') break;
        if (ch == '\r') continue;
        buf[pos++] = ch;
    }
    buf[pos] = '\0';
    return pos;
}

void conn_tls_shutdown(conn_t *c)
{
    if (c->ssl) {
        SSL_shutdown(c->ssl);
        SSL_free(c->ssl);
        c->ssl = NULL;
    }
    c->is_tls = 0;
}

#else /* !EVOSQL_TLS — stub implementations */

int tls_global_init(const char *cert_file, const char *key_file)
{
    (void)cert_file; (void)key_file;
    fprintf(stderr, "[TLS] Not compiled with TLS support\n");
    return -1;
}

void tls_global_cleanup(void) { }
int  tls_is_available(void)   { return 0; }

void conn_init(conn_t *c, socket_t sock)
{
    c->sock        = sock;
    c->ssl         = NULL;
    c->is_tls      = 0;
    c->valid       = 1;
    c->protocol    = CONN_PROTO_PG;  /* default, overwritten by conn_lock_init */
    c->initialized = 0;
}

int conn_tls_accept(conn_t *c)  { (void)c; return -1; }
int conn_tls_connect(conn_t *c) { (void)c; return -1; }

int conn_recv_exact(conn_t *c, char *buf, int len)
{
    return net_recv_exact(c->sock, buf, len);
}

int conn_send_all(conn_t *c, const char *buf, int len)
{
    return net_send_all(c->sock, buf, len);
}

int conn_send_line(conn_t *c, const char *line)
{
    int slen = (int)strlen(line);
    if (net_send_all(c->sock, line, slen) < 0) return -1;
    if (net_send_all(c->sock, "\n", 1) < 0) return -1;
    return 0;
}

int conn_recv_line(conn_t *c, char *buf, int maxlen)
{
    return net_recv_line(c->sock, buf, maxlen);
}

void conn_tls_shutdown(conn_t *c) { (void)c; }

#endif /* EVOSQL_TLS */

/* ================================================================
 *  Per-connection output mutex (Task 91 — Feature #62)
 *
 *  Shared by both TLS and non-TLS builds — lock primitives are
 *  abstracted in platform.h.
 * ================================================================ */

void conn_lock_init(conn_t *c, int protocol)
{
    if (!c) return;
    if (!c->initialized) {
        mutex_init(&c->write_lock);
        c->initialized = 1;
    }
    c->protocol = protocol;
    c->valid    = 1;
}

void conn_lock_destroy(conn_t *c)
{
    if (!c || !c->initialized) return;
    mutex_lock(&c->write_lock);
    c->valid = 0;
    mutex_unlock(&c->write_lock);
    mutex_destroy(&c->write_lock);
    c->initialized = 0;
}
