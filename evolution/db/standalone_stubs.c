/*
 * standalone_stubs.c — default implementations of adaptor-layer symbols
 * that engine code references, provided only for the standalone `evolution`
 * CLI binary.
 *
 * The dual-protocol server (adaptor/) supplies the real Change Data Capture,
 * distributed-sharding, replication, XA, and parse-lock implementations and
 * therefore does NOT compile this file. The single-process CLI has none of
 * those subsystems, so these no-op / default versions let the engine link
 * and run as a self-contained single node. Keep this file out of the adaptor
 * build to avoid duplicate-symbol errors.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "../../adaptor/platform.h"   /* rwlock_t / rwlock_init — same path engine files use */

/* Parse lock: the server serializes DML/DDL on this rwlock. The CLI runs
 * queries single-threaded, but the auto-reclaim path still takes it, so
 * initialize a real lock at load time. */
rwlock_t g_parse_lock;

/* DML mutex: the server serializes single-statement DML on this (defined in
 * adaptor/server.c there). The standalone auto-reclaim and WAL-checkpointer
 * paths take it too, so provide and initialize a real one here. */
mutex_t g_dml_mutex;

__attribute__((constructor))
static void standalone_init_locks(void)
{
    rwlock_init(&g_parse_lock);
    mutex_init(&g_dml_mutex);
}

/* Distributed sharding — disabled in the standalone CLI. */
__thread uint32_t g_dist_create_node_id = 0;

int dist_is_enabled(void)    { return 0; }
int dist_get_num_nodes(void) { return 1; }

/* Change Data Capture — no subscribers without the server's CDC registry. */
int cdc_has_subscribers(void) { return 0; }

void cdc_dispatch_page_xid(const char *page_data, uint16_t page_len,
                           uint32_t page_no, int64_t lsn, uint32_t xid)
{
    (void)page_data; (void)page_len; (void)page_no; (void)lsn; (void)xid;
}

/* Replication — no replicas to notify. */
void repl_notify_new_wal(void) {}

/* XA / two-phase commit — no external transaction coordinator. */
int xa_cleanup_orphans(void) { return 0; }
int xa_list_prepared(void *recs, int max) { (void)recs; (void)max; return 0; }
