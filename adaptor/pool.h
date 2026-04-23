/*
 * pool.h — Connection pool (Task 96 / Feature #68)
 *
 * Pre-spawned worker threads pick up accepted sockets from a bounded
 * queue. Replaces the per-connection pthread_create in server.c's
 * accept loop, so steady-state RAM stays flat and connect latency
 * drops by the cost of a pthread_create round trip.
 *
 * Lifecycle:
 *   pool_init(size, queue_cap) — once at server startup, after
 *     server_init_ex. `size` workers are created; `queue_cap` bounds
 *     the pending-socket ring.
 *   pool_submit(task)          — invoked from accept loop; blocks
 *     briefly if queue is full (bounded backpressure — protects
 *     against connection floods).
 *   pool_shutdown()            — signals workers to drain + exit,
 *     joins every worker. Safe to call multiple times.
 *
 * The task struct is allocated by the caller and owned by the worker
 * after submit (worker frees it).
 */
#ifndef POOL_H
#define POOL_H

#include "server.h"   /* protocol_handler_fn */
#include "platform.h" /* socket_t */

typedef struct {
    socket_t            sock;
    protocol_handler_fn handler;
    char                label[8];
} PoolTask;

int  pool_init(int size, int queue_cap);
int  pool_submit(PoolTask *task);
void pool_shutdown(void);

/* Diagnostics — used by SHOW / test harness. */
int  pool_active_workers(void);
int  pool_queue_depth(void);

#endif /* POOL_H */
