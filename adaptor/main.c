/*
 * EvoSQL Adaptor — Dual-Protocol Server
 *
 * Spawns two listener threads:
 *   • PG   protocol on port 5433 (default) — DBeaver / psql / JDBC
 *   • EVO  protocol on port 9967 (default) — evosql CLI
 *
 * Usage:
 *   evosql-server [--pg-port PORT] [--evo-port PORT]
 *                 [--replication-port PORT] [--replica HOST:PORT]
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platform.h"
#include "server.h"
#include "pg_handler.h"
#include "evo_protocol.h"
#include "replication.h"
#include "raft.h"
#include "tls.h"

#define DEFAULT_PG_PORT   5433
#define DEFAULT_EVO_PORT  9967

/* ---- Graceful shutdown on SIGTERM/SIGINT ---- */
#ifndef _WIN32
#include <signal.h>
#include <unistd.h>

static void shutdown_handler(int sig)
{
    (void)sig;
    const char msg[] = "\n[server] Signal received — shutting down...\n";
    (void)write(STDERR_FILENO, msg, sizeof(msg) - 1);
    server_cleanup();
    _exit(0);
}
#endif

/* ---- Thread param for listener ---- */
typedef struct {
    int                  port;
    const char          *label;
    protocol_handler_fn  handler;
} ListenerArg;

static THREAD_RETURN listener_thread(THREAD_PARAM param)
{
    ListenerArg *a = (ListenerArg *)param;
    server_listen(a->port, a->label, a->handler);
    return 0;
}

/* Parse size string: "128MB", "1GB", "32768" (pages), "512M" */
static int parse_buffer_size(const char *s)
{
    char *end;
    long val = strtol(s, &end, 10);
    if (val <= 0) return 0;
    /* Unit suffix → convert to 4KB pages */
    if (*end == 'G' || *end == 'g')      return (int)(val * 1024 * 1024 / 4);  /* GB → pages */
    else if (*end == 'M' || *end == 'm') return (int)(val * 1024 / 4);          /* MB → pages */
    else if (*end == 'K' || *end == 'k') return (int)(val / 4);                 /* KB → pages */
    return (int)val;  /* raw page count */
}

int main(int argc, char *argv[])
{
    int pg_port  = DEFAULT_PG_PORT;
    int evo_port = DEFAULT_EVO_PORT;
    int buffer_pool_pages = 0;  /* 0 = use default */
    int repl_port = 0;         /* 0 = replication disabled */
    const char *replica_target = NULL;  /* --replica host:port */
    const char *cluster_nodes = NULL;   /* --cluster node1:port,node2:port,... */
    int node_id = -1;                   /* --node-id 0/1/2/... */
    int i;

    /* Parse CLI arguments */
    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--pg-port") == 0 && i + 1 < argc)
            pg_port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--evo-port") == 0 && i + 1 < argc)
            evo_port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--buffer-pool-size") == 0 && i + 1 < argc)
            buffer_pool_pages = parse_buffer_size(argv[++i]);
        else if (strcmp(argv[i], "--replication-port") == 0 && i + 1 < argc)
            repl_port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--replica") == 0 && i + 1 < argc)
            replica_target = argv[++i];
        else if (strcmp(argv[i], "--cluster") == 0 && i + 1 < argc)
            cluster_nodes = argv[++i];
        else if (strcmp(argv[i], "--node-id") == 0 && i + 1 < argc)
            node_id = atoi(argv[++i]);
        else if (argv[i][0] >= '0' && argv[i][0] <= '9')
            pg_port = atoi(argv[i]);   /* backward compat: bare number = PG port */
    }

    /* Environment variable override (MySQL-style: bytes or with suffix) */
    if (buffer_pool_pages == 0) {
        const char *env = getenv("EVOSQL_BUFFER_POOL_SIZE");
        if (env && env[0])
            buffer_pool_pages = parse_buffer_size(env);
    }

#ifndef _WIN32
    signal(SIGPIPE, SIG_IGN);
    signal(SIGTERM, shutdown_handler);
    signal(SIGINT,  shutdown_handler);
#endif

    /* Initialise engine, locks, socket subsystem */
    server_init_ex(buffer_pool_pages);

    /* TLS initialisation — read cert/key paths from environment */
    {
        const char *cert = getenv("EVOSQL_TLS_CERT");
        const char *key  = getenv("EVOSQL_TLS_KEY");
        if (cert && key) {
            if (tls_global_init(cert, key) == 0) {
                printf("[TLS] Server TLS enabled\n");
            } else {
                fprintf(stderr, "[TLS] Failed to initialise — continuing without TLS\n");
            }
        } else {
            printf("[TLS] No EVOSQL_TLS_CERT / EVOSQL_TLS_KEY set — TLS disabled\n");
        }
    }

    /* Banner */
    printf("==============================================\n");
    printf("                __                            \n");
    printf("               / _)                           \n");
    printf("      _.----._/ /                             \n");
    printf("     /         /                              \n");
    printf("  __/ (  | (  |                               \n");
    printf(" /__.-'|_|--|_|                               \n");
    printf("==============================================\n");
    printf("  EvoSQL Adaptor Server (dual-protocol)\n");
    printf("  PG  protocol on port %d\n", pg_port);
    printf("  EVO protocol on port %d\n", evo_port);
    printf("  TLS: %s\n", tls_is_available() ? "enabled" : "disabled");
    printf("  Max connections: %d\n", get_max_connections());
    if (repl_port > 0)
        printf("  Replication: sender on port %d\n", repl_port);
    if (replica_target)
        printf("  Replication: replica of %s\n", replica_target);
    printf("==============================================\n");
    fflush(stdout);

    /* Start replication sender if configured */
    if (repl_port > 0) {
        extern int repl_start_sender(int);
        repl_start_sender(repl_port);
    }

    /* Start replica receiver if configured */
    if (replica_target) {
        char host[256] = "127.0.0.1";
        int rport = REPL_DEFAULT_PORT;
        /* Parse host:port */
        const char *colon = strchr(replica_target, ':');
        if (colon) {
            int hlen = (int)(colon - replica_target);
            if (hlen > 0 && hlen < 255) {
                strncpy(host, replica_target, hlen);
                host[hlen] = '\0';
            }
            rport = atoi(colon + 1);
        } else {
            strncpy(host, replica_target, 255);
        }
        extern int repl_start_receiver(const char *, int, int);
        extern int pgm_get_fd(void);
        repl_start_receiver(host, rport, pgm_get_fd());
    }

    /* Start Raft consensus if cluster configured */
    if (cluster_nodes && node_id >= 0) {
        if (raft_init(cluster_nodes, node_id) == 0)
            raft_start();
    }

    /* Start EVO listener in a background thread */
    static ListenerArg evo_arg;
    evo_arg.port    = evo_port;
    evo_arg.label   = "EVO";
    evo_arg.handler = evo_handle_client;
    thread_create(listener_thread, (THREAD_PARAM)&evo_arg);

    /* Run PG listener on the main thread (blocks forever) */
    server_listen(pg_port, "PG", pg_handle_client);

    tls_global_cleanup();
    server_cleanup();
    return 0;
}
