/*
 * lock_mgr.c — Row-Level Lock Manager for EvoSQL
 *
 * Hash table of row locks keyed by (table_id, pk_key).
 * Each lock entry tracks the holder XID, lock mode, and a
 * condition variable for waiters.
 *
 * Thread-safe: all operations protected by a global mutex
 * (simple approach; per-partition locking can be added later).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/time.h>
#include "lock_mgr.h"

/* ================================================================
 *  Lock entry and hash table
 * ================================================================ */

#define LOCK_TABLE_SIZE  4096   /* hash buckets */
#define LOCK_KEY_MAX     256    /* max PK key length */

typedef struct LockEntry {
    uint32_t         table_id;
    char             pk_key[LOCK_KEY_MAX];
    uint32_t         holder_xid;     /* XID holding the lock */
    int              lock_mode;      /* LOCK_SHARED or LOCK_EXCLUSIVE */
    int              waiter_count;   /* number of threads waiting */
    pthread_cond_t   cond;           /* waiters sleep here */
    struct LockEntry *next;          /* hash chain */
} LockEntry;

static LockEntry      *g_lock_table[LOCK_TABLE_SIZE];
static pthread_mutex_t  g_lock_mutex = PTHREAD_MUTEX_INITIALIZER;
static int              g_lock_count = 0;

/* ================================================================
 *  Hash function
 * ================================================================ */
static uint32_t lock_hash(uint32_t table_id, const char *pk_key)
{
    uint32_t h = table_id * 2654435761u;  /* Knuth multiplicative hash */
    for (const char *p = pk_key; *p; p++)
        h = h * 31 + (uint8_t)*p;
    return h % LOCK_TABLE_SIZE;
}

/* ================================================================
 *  Internal helpers
 * ================================================================ */

/* Find a lock entry in the hash chain. Returns NULL if not found. */
static LockEntry *find_entry(uint32_t table_id, const char *pk_key,
                              uint32_t bucket)
{
    LockEntry *e = g_lock_table[bucket];
    while (e) {
        if (e->table_id == table_id && strcmp(e->pk_key, pk_key) == 0)
            return e;
        e = e->next;
    }
    return NULL;
}

/* Create and insert a new lock entry. */
static LockEntry *create_entry(uint32_t table_id, const char *pk_key,
                                uint32_t xid, int mode, uint32_t bucket)
{
    LockEntry *e = (LockEntry *)calloc(1, sizeof(LockEntry));
    if (!e) return NULL;
    e->table_id = table_id;
    strncpy(e->pk_key, pk_key, LOCK_KEY_MAX - 1);
    e->pk_key[LOCK_KEY_MAX - 1] = '\0';
    e->holder_xid = xid;
    e->lock_mode = mode;
    e->waiter_count = 0;
    pthread_cond_init(&e->cond, NULL);
    e->next = g_lock_table[bucket];
    g_lock_table[bucket] = e;
    g_lock_count++;
    return e;
}

/* Remove and free a lock entry from the hash chain. */
static void remove_entry(uint32_t table_id, const char *pk_key,
                          uint32_t bucket)
{
    LockEntry **pp = &g_lock_table[bucket];
    while (*pp) {
        LockEntry *e = *pp;
        if (e->table_id == table_id && strcmp(e->pk_key, pk_key) == 0) {
            *pp = e->next;
            pthread_cond_destroy(&e->cond);
            free(e);
            g_lock_count--;
            return;
        }
        pp = &e->next;
    }
}

/* Check if two lock modes conflict. */
static int modes_conflict(int held, int requested)
{
    if (held == LOCK_NONE || requested == LOCK_NONE) return 0;
    if (held == LOCK_SHARED && requested == LOCK_SHARED) return 0;
    return 1;  /* EXCLUSIVE conflicts with everything */
}

/* ================================================================
 *  Public API
 * ================================================================ */

void lock_mgr_init(void)
{
    memset(g_lock_table, 0, sizeof(g_lock_table));
    g_lock_count = 0;
}

void lock_mgr_shutdown(void)
{
    pthread_mutex_lock(&g_lock_mutex);
    for (int i = 0; i < LOCK_TABLE_SIZE; i++) {
        LockEntry *e = g_lock_table[i];
        while (e) {
            LockEntry *next = e->next;
            pthread_cond_destroy(&e->cond);
            free(e);
            e = next;
        }
        g_lock_table[i] = NULL;
    }
    g_lock_count = 0;
    pthread_mutex_unlock(&g_lock_mutex);
}

int lock_row_acquire(uint32_t table_id, const char *pk_key,
                     uint32_t xid, int mode)
{
    if (xid == 0 || !pk_key || !pk_key[0]) return LOCK_OK;

    uint32_t bucket = lock_hash(table_id, pk_key);

    pthread_mutex_lock(&g_lock_mutex);

    LockEntry *e = find_entry(table_id, pk_key, bucket);

    if (!e) {
        /* No existing lock — create one */
        create_entry(table_id, pk_key, xid, mode, bucket);
        pthread_mutex_unlock(&g_lock_mutex);
        return LOCK_OK;
    }

    /* Re-entrant: same XID already holds the lock */
    if (e->holder_xid == xid) {
        /* Upgrade SHARED → EXCLUSIVE if needed */
        if (mode == LOCK_EXCLUSIVE && e->lock_mode == LOCK_SHARED)
            e->lock_mode = LOCK_EXCLUSIVE;
        pthread_mutex_unlock(&g_lock_mutex);
        return LOCK_OK;
    }

    /* Conflict — need to wait */
    if (!modes_conflict(e->lock_mode, mode)) {
        /* No conflict (SHARED + SHARED) — add as co-holder.
         * Simplified: we only track one holder. For proper shared locks,
         * we'd need a list of holders. For now, SHARED is treated as
         * compatible but only one XID is tracked (last wins). */
        pthread_mutex_unlock(&g_lock_mutex);
        return LOCK_OK;
    }

    /* Wait for the lock to be released, with timeout */
    e->waiter_count++;

    struct timespec ts;
    {
        struct timeval tv;
        gettimeofday(&tv, NULL);
        ts.tv_sec = tv.tv_sec + LOCK_WAIT_TIMEOUT_MS / 1000;
        ts.tv_nsec = tv.tv_usec * 1000 +
                     (LOCK_WAIT_TIMEOUT_MS % 1000) * 1000000L;
        if (ts.tv_nsec >= 1000000000L) {
            ts.tv_sec++;
            ts.tv_nsec -= 1000000000L;
        }
    }

    int result = LOCK_OK;
    while (e->holder_xid != 0 && e->holder_xid != xid &&
           modes_conflict(e->lock_mode, mode)) {
        int rc = pthread_cond_timedwait(&e->cond, &g_lock_mutex, &ts);
        if (rc != 0) {
            /* Timeout or error */
            result = LOCK_TIMEOUT;
            break;
        }
        /* Re-check: the entry might have been freed and recreated */
        e = find_entry(table_id, pk_key, bucket);
        if (!e) {
            /* Lock was freed — create our own */
            create_entry(table_id, pk_key, xid, mode, bucket);
            pthread_mutex_unlock(&g_lock_mutex);
            return LOCK_OK;
        }
    }

    if (e) e->waiter_count--;

    if (result == LOCK_OK && e) {
        /* Lock acquired */
        if (e->holder_xid == 0) {
            e->holder_xid = xid;
            e->lock_mode = mode;
        }
    }

    pthread_mutex_unlock(&g_lock_mutex);
    return result;
}

void lock_row_release(uint32_t table_id, const char *pk_key, uint32_t xid)
{
    if (xid == 0 || !pk_key || !pk_key[0]) return;

    uint32_t bucket = lock_hash(table_id, pk_key);

    pthread_mutex_lock(&g_lock_mutex);

    LockEntry *e = find_entry(table_id, pk_key, bucket);
    if (e && e->holder_xid == xid) {
        if (e->waiter_count > 0) {
            /* Wake up waiters — they'll re-check and acquire */
            e->holder_xid = 0;
            e->lock_mode = LOCK_NONE;
            pthread_cond_broadcast(&e->cond);
        } else {
            /* No waiters — remove entry entirely */
            remove_entry(table_id, pk_key, bucket);
        }
    }

    pthread_mutex_unlock(&g_lock_mutex);
}

void lock_release_all(uint32_t xid)
{
    if (xid == 0) return;

    pthread_mutex_lock(&g_lock_mutex);

    for (int i = 0; i < LOCK_TABLE_SIZE; i++) {
        LockEntry *e = g_lock_table[i];
        while (e) {
            LockEntry *next = e->next;
            if (e->holder_xid == xid) {
                if (e->waiter_count > 0) {
                    e->holder_xid = 0;
                    e->lock_mode = LOCK_NONE;
                    pthread_cond_broadcast(&e->cond);
                } else {
                    remove_entry(e->table_id, e->pk_key, i);
                }
            }
            e = next;
        }
    }

    pthread_mutex_unlock(&g_lock_mutex);
}

int lock_row_check(uint32_t table_id, const char *pk_key, uint32_t *holder_xid)
{
    if (!pk_key || !pk_key[0]) return LOCK_NONE;

    uint32_t bucket = lock_hash(table_id, pk_key);

    pthread_mutex_lock(&g_lock_mutex);

    LockEntry *e = find_entry(table_id, pk_key, bucket);
    int mode = LOCK_NONE;
    if (e && e->holder_xid != 0) {
        mode = e->lock_mode;
        if (holder_xid) *holder_xid = e->holder_xid;
    }

    pthread_mutex_unlock(&g_lock_mutex);
    return mode;
}

int lock_mgr_count(void)
{
    return g_lock_count;
}
