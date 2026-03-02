/*
 * EvoSQL Adaptor — Dual-Protocol Server
 *
 * Spawns two listener threads:
 *   • PG   protocol on port 5433 (default) — DBeaver / psql / JDBC
 *   • EVO  protocol on port 9967 (default) — evosql CLI
 *
 * Usage:
 *   evosql-server [--pg-port PORT] [--evo-port PORT]
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platform.h"
#include "server.h"
#include "pg_handler.h"
#include "evo_protocol.h"

#define DEFAULT_PG_PORT   5433
#define DEFAULT_EVO_PORT  9967

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

int main(int argc, char *argv[])
{
    int pg_port  = DEFAULT_PG_PORT;
    int evo_port = DEFAULT_EVO_PORT;
    int i;

    /* Parse CLI arguments */
    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--pg-port") == 0 && i + 1 < argc)
            pg_port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--evo-port") == 0 && i + 1 < argc)
            evo_port = atoi(argv[++i]);
        else if (argv[i][0] >= '0' && argv[i][0] <= '9')
            pg_port = atoi(argv[i]);   /* backward compat: bare number = PG port */
    }

#ifndef _WIN32
    signal(SIGPIPE, SIG_IGN);
#endif

    /* Initialise engine, locks, socket subsystem */
    server_init();

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
    printf("  Max connections: %d\n", get_max_connections());
    printf("==============================================\n");
    fflush(stdout);

    /* Start EVO listener in a background thread */
    static ListenerArg evo_arg;
    evo_arg.port    = evo_port;
    evo_arg.label   = "EVO";
    evo_arg.handler = evo_handle_client;
    thread_create(listener_thread, (THREAD_PARAM)&evo_arg);

    /* Run PG listener on the main thread (blocks forever) */
    server_listen(pg_port, "PG", pg_handle_client);

    server_cleanup();
    return 0;
}
