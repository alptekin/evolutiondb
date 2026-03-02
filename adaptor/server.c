/*
 * server.c — Generic multi-threaded TCP server for EvoSQL Adaptor
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platform.h"
#include "net.h"
#include "server.h"
#include "query_executor.h"

/* ================================================================
 *  Shared state — used by all protocol servers
 * ================================================================ */

/* Mutex for serializing query execution (EvoSQL globals not thread-safe) */
static mutex_t g_query_lock;

/* Connection limits */
static int     g_max_connections    = 100;
static int     g_active_connections = 0;
static mutex_t g_conn_lock;

/* ---- Public accessors (used by catalog.c, etc.) ---- */
int  get_max_connections(void)      { return g_max_connections; }
void set_max_connections(int n)     { if (n > 0) g_max_connections = n; }
int  get_active_connections(void)   { return g_active_connections; }

/* ---- Thread-safe query execution ---- */
void safe_query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    mutex_lock(&g_query_lock);
    query_execute(sql, rs, ctx);
    mutex_unlock(&g_query_lock);
}

/* ================================================================
 *  Per-connection thread context
 * ================================================================ */
typedef struct {
    socket_t            sock;
    protocol_handler_fn handler;
    char                label[8];
} ClientArg;

static THREAD_RETURN client_thread(THREAD_PARAM param)
{
    ClientArg *arg = (ClientArg *)param;
    socket_t   sock    = arg->sock;
    char       label[8];
    strncpy(label, arg->label, sizeof(label));

    /* Run the protocol handler — it owns the conversation */
    arg->handler(sock);

    /* Done — close socket and update counters */
    socket_close(sock);
    free(arg);

    mutex_lock(&g_conn_lock);
    g_active_connections--;
    printf("[%s] Client disconnected  (active: %d/%d)\n",
           label, g_active_connections, g_max_connections);
    mutex_unlock(&g_conn_lock);
    fflush(stdout);
    return 0;
}

/* ================================================================
 *  Public API
 * ================================================================ */
void server_init(void)
{
    socket_init();
    mutex_init(&g_query_lock);
    mutex_init(&g_conn_lock);
    query_engine_init();
}

void server_cleanup(void)
{
    mutex_destroy(&g_query_lock);
    mutex_destroy(&g_conn_lock);
    socket_cleanup();
}

void server_listen(int port, const char *label, protocol_handler_fn handler)
{
    socket_t server_sock = net_create_server();
    if (server_sock == SOCKET_INVALID) {
        fprintf(stderr, "[%s] socket() failed\n", label);
        return;
    }

    if (net_bind_listen(server_sock, port, 5) < 0) {
        fprintf(stderr, "[%s] bind/listen failed on port %d\n", label, port);
        socket_close(server_sock);
        return;
    }

    printf("[%s] Listening on port %d\n", label, port);
    fflush(stdout);

    while (1) {
        struct sockaddr_in client_addr;
        socket_t client_sock = net_accept(server_sock, &client_addr);
        if (client_sock == SOCKET_INVALID) {
            fprintf(stderr, "[%s] accept() failed\n", label);
            continue;
        }

        /* ---- Connection limit enforcement ---- */
        mutex_lock(&g_conn_lock);
        if (g_active_connections >= g_max_connections) {
            mutex_unlock(&g_conn_lock);
            fprintf(stderr, "[%s] Connection rejected: limit %d reached\n",
                    label, g_max_connections);
            fflush(stderr);
            /* Best-effort error — just close the socket.
             * Protocol-specific rejection is up to the handler if needed. */
            socket_close(client_sock);
            continue;
        }
        g_active_connections++;
        printf("[%s] Connection from %s:%d  (active: %d/%d)\n",
               label,
               inet_ntoa(client_addr.sin_addr),
               ntohs(client_addr.sin_port),
               g_active_connections, g_max_connections);
        mutex_unlock(&g_conn_lock);
        fflush(stdout);

        /* ---- Spawn thread ---- */
        ClientArg *arg = (ClientArg *)malloc(sizeof(ClientArg));
        if (!arg) {
            fprintf(stderr, "[%s] Out of memory for client arg\n", label);
            socket_close(client_sock);
            continue;
        }
        arg->sock    = client_sock;
        arg->handler = handler;
        strncpy(arg->label, label, sizeof(arg->label) - 1);
        arg->label[sizeof(arg->label) - 1] = '\0';

        thread_create(client_thread, (THREAD_PARAM)arg);
    }

    socket_close(server_sock);
}
