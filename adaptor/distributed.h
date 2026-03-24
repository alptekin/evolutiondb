/*
 * distributed.h — Built-in Distributed Query Engine for EvoSQL
 *
 * Provides transparent query routing across cluster nodes.
 * Any node can serve any query — routing is automatic based on
 * table ownership stored in the system catalog (owner_node_id).
 *
 * Architecture:
 *   - Catalog replicated on ALL nodes (via WAL streaming)
 *   - Data pages live only on the owner node
 *   - Queries routed via PG wire protocol between nodes
 */
#ifndef DISTRIBUTED_H
#define DISTRIBUTED_H

#include <stdint.h>
#include "platform.h"
#include "result.h"
#include "query_executor.h"

/* Max nodes in the cluster */
#define DIST_MAX_NODES  7

/* Node descriptor for distributed routing */
typedef struct {
    char     host[256];
    int      pg_port;       /* PG wire protocol port on that node */
    int      dist_port;     /* distributed internal port */
} DistNodeInfo;

/* Persistent connection to a peer node */
typedef struct {
    int      sock;          /* TCP socket (-1 if not connected) */
    int      node_id;
    int      connected;
} DistConn;

/* ----------------------------------------------------------------
 *  Lifecycle
 * ---------------------------------------------------------------- */

/* Initialize the distributed engine.
 * my_node_id: this node's ID in the cluster
 * my_pg_port: the PG wire protocol port this node listens on
 * Returns 0 on success. */
int dist_init(int my_node_id, int my_pg_port);

/* Check if distributed mode is active. */
int dist_is_enabled(void);

/* Get this node's ID. */
int dist_get_my_id(void);

/* ----------------------------------------------------------------
 *  Node registry
 * ---------------------------------------------------------------- */

/* Register a peer node (called from raft init or manual config).
 * Returns 0 on success. */
int dist_register_node(int node_id, const char *host, int pg_port, int dist_port);

/* Get number of registered nodes. */
int dist_get_num_nodes(void);

/* Get node info by ID. Returns 0 on success. */
int dist_get_node_info(int node_id, DistNodeInfo *out);

/* ----------------------------------------------------------------
 *  Query routing
 * ---------------------------------------------------------------- */

/* Try to route a SQL query to a remote node.
 * Returns 1 if handled (remote), 0 if local. */
int dist_try_route(const char *sql, ResultSet *rs, SessionCtx *ctx);

/* Forward a query to a specific node via PG wire protocol.
 * Returns 0 on success, -1 on error. */
int dist_forward_query(int node_id, const char *sql, ResultSet *rs);

/* ----------------------------------------------------------------
 *  Distributed listener (for incoming forwarded queries)
 * ---------------------------------------------------------------- */

/* Handle an incoming distributed client connection (protocol handler). */
void dist_handle_client(socket_t sock);

/* ----------------------------------------------------------------
 *  Table operations
 * ---------------------------------------------------------------- */

/* Move table data from current owner to dest_node_id.
 * Returns 0 on success. */
int dist_move_table(const char *table_name, int dest_node_id,
                    ResultSet *rs, SessionCtx *ctx);

#endif /* DISTRIBUTED_H */
