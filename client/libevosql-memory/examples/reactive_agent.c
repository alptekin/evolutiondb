/*
 * reactive_agent.c — minimal libevosql-memory streaming example.
 *
 * Subscribes to a NOTIFY channel and prints every event as it
 * arrives. In real agent code you'd kick off an LLM call here,
 * update state, or schedule downstream work.
 *
 * Build:
 *   cc -I../include reactive_agent.c ../build/libevosql-memory.a -lpthread \
 *      -o reactive_agent
 *
 * In one terminal run:
 *   ./reactive_agent
 *
 * In another terminal:
 *   evosql-cli                    -- then:
 *   NOTIFY agent_events, 'hello world';
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <evosql_memory.h>

static volatile int g_stop = 0;

static void on_event(const char *channel, const char *payload,
                      uint64_t lsn, void *ctx)
{
    (void)lsn; (void)ctx;
    printf("[event] %s -> %s\n", channel, payload);
    fflush(stdout);
}

static void on_signal(int sig)
{
    (void)sig;
    g_stop = 1;
}

int main(int argc, char **argv)
{
    const char *host    = (argc > 1) ? argv[1] : "127.0.0.1";
    int         port    = (argc > 2) ? atoi(argv[2]) : 9967;
    const char *channel = (argc > 3) ? argv[3] : "agent_events";

    signal(SIGINT, on_signal);
    signal(SIGTERM, on_signal);

    printf("subscribing to channel '%s' on %s:%d (Ctrl-C to stop)\n",
           channel, host, port);

    evo_subscription_t *sub = evo_subscribe(
        host, port, "admin", "admin",
        channel, on_event, NULL);
    if (!sub) {
        fprintf(stderr, "subscribe failed: %s\n", evo_strerror(NULL));
        return 1;
    }

    while (!g_stop) sleep(1);

    printf("\nshutting down...\n");
    evo_unsubscribe(sub);
    return 0;
}
