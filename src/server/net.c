/*
 * net.c — Shared networking primitives for EvoSQL Adaptor
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "platform.h"
#include "net.h"

/* ----------------------------------------------------------------
 *  Low-level I/O
 * ---------------------------------------------------------------- */
int net_recv_exact(socket_t sock, char *buf, int len)
{
    int total = 0, n;
    while (total < len) {
        n = recv(sock, buf + total, len - total, 0);
        if (n <= 0) return -1;
        total += n;
    }
    return total;
}

int net_send_all(socket_t sock, const char *buf, int len)
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
 *  High-level server helpers
 * ---------------------------------------------------------------- */
socket_t net_create_server(void)
{
    socket_t s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (s == SOCKET_INVALID) return SOCKET_INVALID;

    int opt = 1;
    setsockopt(s, SOL_SOCKET, SO_REUSEADDR, (const char *)&opt, sizeof(opt));
    return s;
}

int net_bind_listen(socket_t sock, int port, int backlog)
{
    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family      = AF_INET;

    /* Bind address is configurable via EVOSQL_BIND. Default is loopback so a
     * fresh install is not exposed on the network. Set EVOSQL_BIND=0.0.0.0
     * (or "*") to listen on all interfaces, or a specific IPv4 address. */
    {
        const char *bind_addr = getenv("EVOSQL_BIND");
        if (!bind_addr || !*bind_addr)
            bind_addr = "127.0.0.1";
        if (strcmp(bind_addr, "0.0.0.0") == 0 || strcmp(bind_addr, "*") == 0) {
            addr.sin_addr.s_addr = INADDR_ANY;
        } else if (inet_pton(AF_INET, bind_addr, &addr.sin_addr) != 1) {
            /* Unparseable address: fail safe to loopback rather than wildcard. */
            addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
        }
    }
    addr.sin_port        = htons((unsigned short)port);

    if (bind(sock, (struct sockaddr *)&addr, sizeof(addr)) == SOCKET_ERR)
        return -1;
    if (listen(sock, backlog) == SOCKET_ERR)
        return -1;
    return 0;
}

socket_t net_accept(socket_t server_sock, struct sockaddr_in *addr)
{
    struct sockaddr_in local_addr;
    socklen_t len = sizeof(local_addr);

    socket_t client = accept(server_sock,
                             (struct sockaddr *)(addr ? addr : &local_addr),
                             &len);
    if (client == SOCKET_INVALID) return SOCKET_INVALID;

    /* Disable Nagle's algorithm for low-latency responses */
    int opt = 1;
    setsockopt(client, IPPROTO_TCP, TCP_NODELAY,
               (const char *)&opt, sizeof(opt));
    return client;
}

int net_send_line(socket_t sock, const char *line)
{
    int len = (int)strlen(line);
    if (net_send_all(sock, line, len) < 0) return -1;
    if (net_send_all(sock, "\n", 1) < 0) return -1;
    return 0;
}

int net_recv_line(socket_t sock, char *buf, int maxlen)
{
    int pos = 0;
    while (pos < maxlen - 1) {
        char c;
        int n = recv(sock, &c, 1, 0);
        if (n <= 0) return -1;
        if (c == '\n') break;
        if (c == '\r') continue;   /* skip CR in CR+LF */
        buf[pos++] = c;
    }
    buf[pos] = '\0';
    return pos;
}
