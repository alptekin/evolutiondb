/*
 * notify.c — LISTEN / NOTIFY channel registry (Task 91, Feature #62)
 *
 * djb2-hashed bucket map → linked channel records → linked listener list.
 * All mutation under wrlock; snapshotting under rdlock. Listener records are
 * returned to callers by value-copy so the registry lock can be released
 * before any network I/O.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "notify.h"
#include "query_executor.h"
#include "pg_protocol.h"
#include "evo_protocol.h"

#define NOTIFY_CH_BUCKETS  1024

typedef struct NotifyChannel {
    char                   name[NOTIFY_CHANNEL_NAME_MAX];
    NotifyListener        *listeners;
    struct NotifyChannel  *next;
} NotifyChannel;

static rwlock_t        g_notify_registry_lock;
static NotifyChannel  *g_notify_buckets[NOTIFY_CH_BUCKETS];
static int             g_notify_init_done = 0;

/* ----------------------------------------------------------------
 *  Hashing & lookup (no lock — caller holds appropriate lock)
 * ---------------------------------------------------------------- */
static unsigned notify_hash(const char *s)
{
    unsigned h = 5381;
    /* case-insensitive, like PG's channel names */
    while (*s) {
        unsigned c = (unsigned char)*s++;
        if (c >= 'A' && c <= 'Z') c += 32;
        h = ((h << 5) + h) + c;
    }
    return h;
}

static int notify_name_eq(const char *a, const char *b)
{
    return strcasecmp(a, b) == 0;
}

static NotifyChannel *notify_find_channel(const char *name)
{
    unsigned idx = notify_hash(name) % NOTIFY_CH_BUCKETS;
    for (NotifyChannel *ch = g_notify_buckets[idx]; ch; ch = ch->next)
        if (notify_name_eq(ch->name, name))
            return ch;
    return NULL;
}

static NotifyChannel *notify_get_or_create_channel(const char *name)
{
    unsigned idx = notify_hash(name) % NOTIFY_CH_BUCKETS;
    for (NotifyChannel *ch = g_notify_buckets[idx]; ch; ch = ch->next)
        if (notify_name_eq(ch->name, name))
            return ch;
    NotifyChannel *nc = (NotifyChannel *)calloc(1, sizeof(NotifyChannel));
    if (!nc) return NULL;
    strncpy(nc->name, name, NOTIFY_CHANNEL_NAME_MAX - 1);
    nc->next = g_notify_buckets[idx];
    g_notify_buckets[idx] = nc;
    return nc;
}

/* Called with wrlock held; removes channel record when listener list empties. */
static void notify_maybe_free_channel(const char *name)
{
    unsigned idx = notify_hash(name) % NOTIFY_CH_BUCKETS;
    NotifyChannel **pp = &g_notify_buckets[idx];
    while (*pp) {
        if (notify_name_eq((*pp)->name, name) && (*pp)->listeners == NULL) {
            NotifyChannel *dead = *pp;
            *pp = dead->next;
            free(dead);
            return;
        }
        pp = &(*pp)->next;
    }
}

/* ----------------------------------------------------------------
 *  Public API
 * ---------------------------------------------------------------- */

void notify_registry_init(void)
{
    if (g_notify_init_done) return;
    rwlock_init(&g_notify_registry_lock);
    memset(g_notify_buckets, 0, sizeof(g_notify_buckets));
    g_notify_init_done = 1;
}

void notify_registry_shutdown(void)
{
    if (!g_notify_init_done) return;
    rwlock_wrlock(&g_notify_registry_lock);
    for (int i = 0; i < NOTIFY_CH_BUCKETS; i++) {
        NotifyChannel *ch = g_notify_buckets[i];
        while (ch) {
            NotifyListener *l = ch->listeners;
            while (l) {
                NotifyListener *nxt = l->next;
                free(l);
                l = nxt;
            }
            NotifyChannel *nxt_ch = ch->next;
            free(ch);
            ch = nxt_ch;
        }
        g_notify_buckets[i] = NULL;
    }
    rwlock_wrunlock(&g_notify_registry_lock);
    rwlock_destroy(&g_notify_registry_lock);
    g_notify_init_done = 0;
}

int notify_listen(int session_id, conn_t *conn,
                  const char *channel, int self_flag)
{
    if (!channel || !*channel) return -1;
    if (strlen(channel) >= NOTIFY_CHANNEL_NAME_MAX) return -1;
    if (!g_notify_init_done) notify_registry_init();

    rwlock_wrlock(&g_notify_registry_lock);
    NotifyChannel *ch = notify_get_or_create_channel(channel);
    if (!ch) {
        rwlock_wrunlock(&g_notify_registry_lock);
        return -1;
    }
    /* Upsert: if session already listening, update self_flag */
    for (NotifyListener *l = ch->listeners; l; l = l->next) {
        if (l->session_id == session_id) {
            l->conn = conn;
            l->self_flag = self_flag ? 1 : 0;
            rwlock_wrunlock(&g_notify_registry_lock);
            return 0;
        }
    }
    NotifyListener *nl = (NotifyListener *)calloc(1, sizeof(NotifyListener));
    if (!nl) {
        rwlock_wrunlock(&g_notify_registry_lock);
        return -1;
    }
    nl->session_id = session_id;
    nl->conn = conn;
    nl->self_flag = self_flag ? 1 : 0;
    nl->next = ch->listeners;
    ch->listeners = nl;
    rwlock_wrunlock(&g_notify_registry_lock);
    return 0;
}

int notify_unlisten(int session_id, const char *channel)
{
    if (!channel || !*channel) return 0;
    if (!g_notify_init_done) return 0;

    rwlock_wrlock(&g_notify_registry_lock);
    NotifyChannel *ch = notify_find_channel(channel);
    if (!ch) {
        rwlock_wrunlock(&g_notify_registry_lock);
        return 0;
    }
    int removed = 0;
    NotifyListener **pp = &ch->listeners;
    while (*pp) {
        if ((*pp)->session_id == session_id) {
            NotifyListener *dead = *pp;
            *pp = dead->next;
            free(dead);
            removed = 1;
            break;
        }
        pp = &(*pp)->next;
    }
    if (removed) notify_maybe_free_channel(channel);
    rwlock_wrunlock(&g_notify_registry_lock);
    return removed;
}

int notify_unlisten_all(int session_id)
{
    if (!g_notify_init_done) return 0;
    int total = 0;

    rwlock_wrlock(&g_notify_registry_lock);
    for (int i = 0; i < NOTIFY_CH_BUCKETS; i++) {
        NotifyChannel *ch = g_notify_buckets[i];
        NotifyChannel *prev_ch = NULL;
        while (ch) {
            NotifyChannel *next_ch = ch->next;
            NotifyListener **pp = &ch->listeners;
            while (*pp) {
                if ((*pp)->session_id == session_id) {
                    NotifyListener *dead = *pp;
                    *pp = dead->next;
                    free(dead);
                    total++;
                } else {
                    pp = &(*pp)->next;
                }
            }
            if (ch->listeners == NULL) {
                /* unlink empty channel */
                if (prev_ch) prev_ch->next = next_ch;
                else         g_notify_buckets[i] = next_ch;
                free(ch);
                ch = next_ch;
            } else {
                prev_ch = ch;
                ch = next_ch;
            }
        }
    }
    rwlock_wrunlock(&g_notify_registry_lock);
    return total;
}

void notify_session_disconnect(int session_id)
{
    (void)notify_unlisten_all(session_id);
}

int notify_snapshot_listeners(const char *channel, int sender_session_id,
                              NotifyListener *out, int max_out)
{
    if (!channel || !out || max_out <= 0) return 0;
    if (!g_notify_init_done) return 0;

    int count = 0;
    rwlock_rdlock(&g_notify_registry_lock);
    NotifyChannel *ch = notify_find_channel(channel);
    if (ch) {
        for (NotifyListener *l = ch->listeners; l && count < max_out; l = l->next) {
            /* Self-delivery filter: skip same-session unless it opted in */
            if (l->session_id == sender_session_id && !l->self_flag) continue;
            out[count].session_id = l->session_id;
            out[count].conn       = l->conn;
            out[count].self_flag  = l->self_flag;
            out[count].next       = NULL;
            count++;
        }
    }
    rwlock_rdunlock(&g_notify_registry_lock);
    return count;
}

int notify_list_session_channels(int session_id,
                                 char channels[][NOTIFY_CHANNEL_NAME_MAX],
                                 int max)
{
    if (!channels || max <= 0) return 0;
    if (!g_notify_init_done) return 0;

    int count = 0;
    rwlock_rdlock(&g_notify_registry_lock);
    for (int i = 0; i < NOTIFY_CH_BUCKETS && count < max; i++) {
        for (NotifyChannel *ch = g_notify_buckets[i]; ch && count < max; ch = ch->next) {
            for (NotifyListener *l = ch->listeners; l; l = l->next) {
                if (l->session_id == session_id) {
                    strncpy(channels[count], ch->name,
                            NOTIFY_CHANNEL_NAME_MAX - 1);
                    channels[count][NOTIFY_CHANNEL_NAME_MAX - 1] = '\0';
                    count++;
                    break;
                }
            }
        }
    }
    rwlock_rdunlock(&g_notify_registry_lock);
    return count;
}

/* =================================================================
 *  Session-scoped helpers (Task 91 pending list + listening[] mirror)
 *  These live here (rather than in a separate file) so the registry
 *  and per-session state share access patterns + locks in one TU.
 * ================================================================= */

int notify_enqueue_pending(SessionCtx *ctx, const char *channel,
                           const char *payload)
{
    if (!ctx || !channel || !*channel) return -1;
    if (strlen(channel) >= NOTIFY_CHANNEL_NAME_MAX) return -1;
    int plen = payload ? (int)strlen(payload) : 0;
    if (plen > NOTIFY_PAYLOAD_MAX) return -1;

    PendingNotify *pn = (PendingNotify *)calloc(1, sizeof(PendingNotify));
    if (!pn) return -1;
    strncpy(pn->channel, channel, NOTIFY_CHANNEL_NAME_MAX - 1);
    if (payload && plen > 0) {
        memcpy(pn->payload, payload, (size_t)plen);
        pn->payload[plen] = '\0';
    }
    pn->sender_session_id = ctx->session_id;
    pn->savepoint_depth   = ctx->savepoint_depth;

    if (ctx->pending_notifies_tail) {
        ctx->pending_notifies_tail->next = pn;
        ctx->pending_notifies_tail = pn;
    } else {
        ctx->pending_notifies_head = ctx->pending_notifies_tail = pn;
    }
    ctx->pending_notify_count++;
    return 0;
}

/* Collapse identical (channel, payload) pairs for the same sender.
 * O(n²) scan; fine for small n. Walks the list, removing any entry
 * that matches an earlier one. */
static void notify_dedup_pending(SessionCtx *ctx)
{
    for (PendingNotify *a = ctx->pending_notifies_head; a; a = a->next) {
        PendingNotify **link = &a->next;
        while (*link) {
            PendingNotify *b = *link;
            if (strcasecmp(a->channel, b->channel) == 0 &&
                strcmp(a->payload, b->payload) == 0 &&
                a->sender_session_id == b->sender_session_id) {
                *link = b->next;
                if (ctx->pending_notifies_tail == b)
                    ctx->pending_notifies_tail = a;
                free(b);
                ctx->pending_notify_count--;
            } else {
                link = &(*link)->next;
            }
        }
    }
}

void notify_flush_commit(SessionCtx *ctx)
{
    if (!ctx || !ctx->pending_notifies_head) return;

    notify_dedup_pending(ctx);

    PendingNotify *pn = ctx->pending_notifies_head;
    while (pn) {
        NotifyListener snap[NOTIFY_SNAPSHOT_MAX];
        int n = notify_snapshot_listeners(pn->channel, ctx->session_id,
                                          snap, NOTIFY_SNAPSHOT_MAX);
        for (int j = 0; j < n; j++) {
            if (!snap[j].conn) continue;
            if (snap[j].conn->protocol == CONN_PROTO_EVO)
                evo_send_notification(snap[j].conn,
                                       pn->sender_session_id,
                                       pn->channel, pn->payload);
            else
                pg_send_notification_response(snap[j].conn,
                                              (int32_t)pn->sender_session_id,
                                              pn->channel, pn->payload);
        }
        /* Task 210 — durable subscriptions: append the notification to
         * every persistent mailbox bound to this channel so consumers
         * who weren't connected at broadcast time can drain the queue
         * via RESUME after they reconnect. Runs after the in-memory
         * fan-out so the fast path (no durable subscribers) doesn't
         * pay the catalog walk. */
        {
            extern void subscription_publish(const char *channel,
                                             const char *payload);
            subscription_publish(pn->channel, pn->payload);
        }
        PendingNotify *next = pn->next;
        free(pn);
        pn = next;
    }
    ctx->pending_notifies_head = ctx->pending_notifies_tail = NULL;
    ctx->pending_notify_count = 0;
}

void notify_discard_pending(SessionCtx *ctx, int below_depth)
{
    if (!ctx) return;
    PendingNotify **link = &ctx->pending_notifies_head;
    PendingNotify *tail = NULL;
    int count = 0;
    while (*link) {
        if ((*link)->savepoint_depth > below_depth) {
            PendingNotify *dead = *link;
            *link = dead->next;
            free(dead);
        } else {
            tail = *link;
            link = &(*link)->next;
            count++;
        }
    }
    ctx->pending_notifies_tail = tail;
    ctx->pending_notify_count = count;
}

void notify_discard_session_pending(SessionCtx *ctx)
{
    if (!ctx) return;
    PendingNotify *pn = ctx->pending_notifies_head;
    while (pn) {
        PendingNotify *nxt = pn->next;
        free(pn);
        pn = nxt;
    }
    ctx->pending_notifies_head = ctx->pending_notifies_tail = NULL;
    ctx->pending_notify_count = 0;
}

int notify_session_add_listen(SessionCtx *ctx, const char *channel, int self_flag)
{
    if (!ctx || !channel) return -1;
    for (int i = 0; i < ctx->listening_count; i++) {
        if (strcasecmp(ctx->listening[i].channel, channel) == 0) {
            ctx->listening[i].self_flag = self_flag ? 1 : 0;
            return 0;
        }
    }
    if (ctx->listening_count >= NOTIFY_MAX_LISTEN) return -1;
    int slot = ctx->listening_count++;
    strncpy(ctx->listening[slot].channel, channel,
            NOTIFY_CHANNEL_NAME_MAX - 1);
    ctx->listening[slot].channel[NOTIFY_CHANNEL_NAME_MAX - 1] = '\0';
    ctx->listening[slot].self_flag = self_flag ? 1 : 0;
    return 0;
}

int notify_session_remove_listen(SessionCtx *ctx, const char *channel)
{
    if (!ctx || !channel) return 0;
    for (int i = 0; i < ctx->listening_count; i++) {
        if (strcasecmp(ctx->listening[i].channel, channel) == 0) {
            /* compact */
            for (int j = i + 1; j < ctx->listening_count; j++)
                ctx->listening[j - 1] = ctx->listening[j];
            ctx->listening_count--;
            return 1;
        }
    }
    return 0;
}

void notify_session_clear_listens(SessionCtx *ctx)
{
    if (!ctx) return;
    ctx->listening_count = 0;
}

