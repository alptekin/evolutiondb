/*
 * notify.h — LISTEN / NOTIFY channel registry (Task 91, Feature #62)
 *
 * In-memory, rwlock-protected hash map of channel name → listeners.
 * Shared by PG wire protocol (port 5433) and EVO text protocol (port 9967).
 * The actual pending-per-TX notify queue lives on SessionCtx (query_executor.h);
 * this module owns only the registry of "who is currently listening where".
 *
 * Commit-time delivery is implemented by SessionCtx.pending_notifies being
 * walked at COMMIT: for each pending entry we snapshot the registry's listener
 * list under rdlock, release the lock, then send to each snapshot listener's
 * conn_t (taking that conn's write_lock). This snapshot-then-release pattern
 * avoids registry-hold deadlocks on per-connection output mutexes.
 */
#ifndef NOTIFY_H
#define NOTIFY_H

#include "platform.h"
#include "tls.h"

#define NOTIFY_CHANNEL_NAME_MAX  64    /* PG NAMEDATALEN: 63 + NUL */
#define NOTIFY_PAYLOAD_MAX       8000
#define NOTIFY_MAX_LISTEN        32    /* per-session LISTEN cap (PG practical) */
#define NOTIFY_SNAPSHOT_MAX      1024

/* Listener entry — one per (session_id, channel) pair. */
typedef struct NotifyListener {
    int                     session_id;
    conn_t                 *conn;        /* not owned */
    int                     self_flag;   /* 1 = deliver when same session NOTIFYs */
    struct NotifyListener  *next;
} NotifyListener;

/* Initialize global registry. Call once at server startup. */
void notify_registry_init(void);

/* Free all channels + listeners. Call at server shutdown. */
void notify_registry_shutdown(void);

/* Register a listen. If the session is already listening on the channel,
 * the self_flag is updated in place. Returns 0 on success, -1 on overflow or
 * invalid channel name (> NOTIFY_CHANNEL_NAME_MAX-1 chars). */
int  notify_listen(int session_id, conn_t *conn,
                   const char *channel, int self_flag);

/* Unregister a specific (session, channel) listen. Returns 1 if found,
 * 0 if the session wasn't listening on that channel. */
int  notify_unlisten(int session_id, const char *channel);

/* Unregister every listen owned by this session. Returns count removed. */
int  notify_unlisten_all(int session_id);

/* Connection cleanup hook — alias of notify_unlisten_all, named for clarity
 * at the disconnect call site. */
void notify_session_disconnect(int session_id);

/* Snapshot current listeners for a channel into out[].
 *   sender_session_id — used to filter out same-session listeners when
 *                       their self_flag == 0 (PG default behavior).
 *   max_out           — bound for out[] capacity.
 * Returns number of entries copied. Takes rdlock then releases; callers
 * MUST send without holding any lock (deadlock-safe). */
int  notify_snapshot_listeners(const char *channel, int sender_session_id,
                               NotifyListener *out, int max_out);

/* Enumerate channels this session is listening on. Returns number written
 * into channels[] (each entry up to NOTIFY_CHANNEL_NAME_MAX bytes). */
int  notify_list_session_channels(int session_id,
                                   char channels[][NOTIFY_CHANNEL_NAME_MAX],
                                   int max);

#endif /* NOTIFY_H */
