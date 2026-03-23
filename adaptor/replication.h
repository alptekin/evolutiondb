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

#endif /* REPLICATION_H */
