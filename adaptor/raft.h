/*
 * raft.h — Raft Consensus Protocol for EvoSQL
 *
 * Provides automatic leader election and log replication
 * for a cluster of EvoSQL nodes.
 *
 * Roles:
 *   LEADER    — accepts DML, streams WAL to followers
 *   FOLLOWER  — receives WAL, serves read-only queries
 *   CANDIDATE — requesting votes for leader election
 *
 * Messages:
 *   RequestVote     — candidate asks for vote
 *   VoteResponse    — follower grants/denies vote
 *   AppendEntries   — leader sends WAL records (or heartbeat)
 *   AppendResponse  — follower ACKs WAL records
 *
 * Usage:
 *   ./evosql-server --cluster node1:9968,node2:9968,node3:9968
 *                   --node-id 1
 */
#ifndef RAFT_H
#define RAFT_H

#include <stdint.h>

/* Raft node states */
#define RAFT_FOLLOWER   0
#define RAFT_CANDIDATE  1
#define RAFT_LEADER     2

/* Timing (milliseconds) */
#define RAFT_HEARTBEAT_MS       150
#define RAFT_ELECTION_MIN_MS    300
#define RAFT_ELECTION_MAX_MS    500

/* Max cluster size */
#define RAFT_MAX_NODES  7

/* Raft message types */
#define RAFT_MSG_REQUEST_VOTE    1
#define RAFT_MSG_VOTE_RESPONSE   2
#define RAFT_MSG_APPEND_ENTRIES  3
#define RAFT_MSG_APPEND_RESPONSE 4

/* ----------------------------------------------------------------
 *  Raft messages (sent over TCP between nodes)
 * ---------------------------------------------------------------- */

typedef struct {
    uint8_t  msg_type;       /* RAFT_MSG_* */
    uint32_t term;           /* sender's current term */
    uint32_t node_id;        /* sender's node ID */
    uint32_t last_lsn;       /* sender's last WAL LSN */
    uint32_t vote_granted;   /* 1 = granted (VoteResponse only) */
    uint32_t wal_data_len;   /* length of WAL data (AppendEntries only) */
} RaftMessage;

#define RAFT_MSG_SIZE sizeof(RaftMessage)

/* ----------------------------------------------------------------
 *  Cluster node descriptor
 * ---------------------------------------------------------------- */
typedef struct {
    char     host[256];
    int      port;
    uint32_t last_confirmed_lsn;  /* replication slot: last ACK'd LSN */
    int      connected;
    int      sock;                /* TCP socket (-1 if not connected) */
} RaftNode;

/* ----------------------------------------------------------------
 *  Raft API
 * ---------------------------------------------------------------- */

/* Initialize Raft with cluster configuration.
 * nodes_csv: "host1:port,host2:port,host3:port"
 * my_id: 0-based index of this node in the list */
int raft_init(const char *nodes_csv, int my_id);

/* Start Raft background threads (election timer, heartbeat sender). */
int raft_start(void);

/* Stop Raft. */
void raft_stop(void);

/* Get current role (RAFT_FOLLOWER/CANDIDATE/LEADER). */
int raft_get_role(void);

/* Get current term. */
uint32_t raft_get_term(void);

/* Get leader node ID (-1 if unknown). */
int raft_get_leader_id(void);

/* Check if this node is the leader. */
int raft_is_leader(void);

/* Called by WAL writer: notify Raft of new WAL records for replication.
 * In leader mode: sends AppendEntries to followers.
 * Returns 1 if majority ACK'd, 0 if not (async replication). */
int raft_replicate_wal(uint32_t lsn);

/* Synchronous commit: wait until majority has ACK'd the given LSN.
 * Blocks up to 500ms. Returns 1 if majority confirmed, 0 on timeout. */
int raft_sync_commit(uint32_t lsn);

/* Get replication lag info for monitoring.
 * Fills lags[] with (my_lsn - node_lsn) for each node. */
void raft_get_lag(uint32_t *my_lsn, uint32_t lags[], int *num_nodes);

/* GAP-D8: Online member add/remove */
int raft_add_member(const char *host, int port);
int raft_remove_member(int node_id);

/* Distributed query engine: node info accessors */
int raft_get_num_nodes(void);
int raft_get_my_node_id(void);
int raft_get_node_host_port(int node_id, char *host, int host_size, int *port);

#endif /* RAFT_H */
