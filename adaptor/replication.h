/*
 * replication.h — WAL Streaming Replication for EvoSQL
 *
 * Master streams WAL records to replica over TCP.
 * Replica replays records to maintain an up-to-date copy.
 *
 * Protocol (over TCP):
 *   1. Replica connects to master replication port
 *   2. Sends: "REPLICATE <last_lsn>\n"
 *   3. Master streams: [lsn:4][len:4][wal_record:N] continuously
 *   4. Replica replays each record to local data file
 *
 * Master mode: --replication-port 9968 (default: disabled)
 * Replica mode: --replica <master_host>:<master_port>
 */
#ifndef REPLICATION_H
#define REPLICATION_H

#include <stdint.h>

/* Default replication port */
#define REPL_DEFAULT_PORT  9968

/* Replication message types */
#define REPL_MSG_WAL_DATA   'W'   /* WAL record data */
#define REPL_MSG_HEARTBEAT  'H'   /* keepalive */
#define REPL_MSG_END        'E'   /* caught up, waiting */

/* ----------------------------------------------------------------
 *  Master-side: WAL sender
 * ---------------------------------------------------------------- */

/* Start the WAL sender listener on the given port.
 * Spawns a background thread that accepts replica connections
 * and streams WAL records. */
int repl_start_sender(int port);

/* Stop the WAL sender. */
void repl_stop_sender(void);

/* Notify sender that new WAL records are available (called after wal_log_page). */
void repl_notify_new_wal(void);

/* ----------------------------------------------------------------
 *  Replica-side: WAL receiver
 * ---------------------------------------------------------------- */

/* Start replica mode: connect to master, receive and replay WAL.
 * This function blocks (runs the receive loop). Call in a background thread.
 * data_fd: local data file descriptor for replay. */
int repl_start_receiver(const char *master_host, int master_port, int data_fd);

/* Stop the receiver. */
void repl_stop_receiver(void);

/* Check if running in replica mode. */
int repl_is_replica(void);

/* ----------------------------------------------------------------
 *  Logical Replication — Change Data Capture (CDC)
 *
 *  Decodes WAL page images into row-level change events.
 *  Used by replicas or external consumers (ETL, event streaming).
 *
 *  Change event types:
 *    'I' = INSERT (new tuple visible)
 *    'U' = UPDATE (old tuple xmax set + new tuple inserted)
 *    'D' = DELETE (tuple xmax set)
 * ---------------------------------------------------------------- */

/* Change event from WAL decode */
typedef struct {
    char     type;                /* 'I', 'U', 'D' */
    uint32_t table_id;           /* from tuple header */
    uint32_t xid;                /* transaction ID (xmin for I/U, xmax for D) */
    char     pk_key[256];        /* primary key value */
    int64_t  timestamp;          /* WAL record timestamp (epoch microseconds) */
} ReplicationChangeEvent;

/* Callback for logical replication consumers */
typedef void (*repl_change_callback)(const ReplicationChangeEvent *event, void *ctx);

/* Register a CDC callback. Called for each decoded change event
 * during WAL replay/streaming. */
void repl_set_change_callback(repl_change_callback cb, void *ctx);

/* ----------------------------------------------------------------
 *  GAP-D11: Replication TLS
 * ---------------------------------------------------------------- */

/* Enable TLS for replication connections (uses server TLS certs). */
void repl_enable_tls(int enabled);

/* ----------------------------------------------------------------
 *  GAP-D12: Replication Authentication
 * ---------------------------------------------------------------- */

/* Set replication credentials (master verifies on connect). */
void repl_set_auth(const char *user, const char *password);

/* ----------------------------------------------------------------
 *  GAP-D4: Multi-Replica Slot Tracking
 * ---------------------------------------------------------------- */

#define REPL_MAX_SLOTS 16

typedef struct {
    char     replica_id[64];     /* replica identifier */
    uint32_t confirmed_lsn;     /* last confirmed LSN */
    int      active;             /* 1 = connected */
    int64_t  last_seen;          /* epoch microseconds */
} ReplicationSlot;

/* List all replication slots. Returns count. */
int repl_list_slots(ReplicationSlot *out, int max);

/* ----------------------------------------------------------------
 *  GAP-D9: Base Backup
 * ---------------------------------------------------------------- */

/* Create a base backup: copy data file + record WAL position.
 * backup_path: destination file path.
 * Returns 0 on success, -1 on error. */
int repl_create_backup(const char *backup_path);

/* ----------------------------------------------------------------
 *  GAP-D1: Auto-Promote (follower → leader transition)
 * ---------------------------------------------------------------- */

/* Promote this replica to standalone master (stop receiving WAL,
 * accept DML). Called after Raft election or manual promote. */
int repl_promote(void);

/* ----------------------------------------------------------------
 *  GAP-D7: CDC Streaming Protocol
 * ---------------------------------------------------------------- */

/* Start CDC streaming server on given port.
 * External consumers connect and receive change events as JSON lines. */
int repl_start_cdc_server(int port);

/* ----------------------------------------------------------------
 *  GAP-D8: Online Member Add/Remove
 * ---------------------------------------------------------------- */

/* Add a new node to the Raft cluster (online, no restart needed). */
int repl_add_member(const char *host, int port);

/* Remove a node from the Raft cluster. */
int repl_remove_member(int node_id);

#endif /* REPLICATION_H */
