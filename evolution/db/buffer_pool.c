/*
 * buffer_pool.c — Clock Sweep Buffer Pool for EvoSQL
 *
 * Write-back cache with Clock Sweep eviction (PostgreSQL-style).
 * Internal mutex for concurrency-readiness.
 */
#include "buffer_pool.h"
#include "apue.h"

#include <string.h>

#ifdef _WIN32
#include <windows.h>
typedef CRITICAL_SECTION bp_mutex_t;
#define bp_mutex_init(m)    InitializeCriticalSection(m)
#define bp_mutex_lock(m)    EnterCriticalSection(m)
#define bp_mutex_unlock(m)  LeaveCriticalSection(m)
#define bp_mutex_destroy(m) DeleteCriticalSection(m)
#else
#include <pthread.h>
#include <unistd.h>
typedef pthread_mutex_t bp_mutex_t;
#define bp_mutex_init(m)    pthread_mutex_init(m, NULL)
#define bp_mutex_lock(m)    pthread_mutex_lock(m)
#define bp_mutex_unlock(m)  pthread_mutex_unlock(m)
#define bp_mutex_destroy(m) pthread_mutex_destroy(m)
#endif

/* ================================================================
 *  Pool singleton
 * ================================================================ */
typedef struct {
    BPPage       *pages;
    int           num_pages;
    int           clock_hand;
    int          *hash_table;   /* open-addressing → page index (-1 = empty) */
    int           hash_size;    /* power of 2 */
    bp_mutex_t    lock;
    unsigned long hits, misses, evictions, flushes;
} BufferPool;

static BufferPool *g_pool = NULL;

/* ================================================================
 *  Portable pread / pwrite  (no SEEK_CUR dependency)
 *  Safe because pool mutex serialises all calls.
 * ================================================================ */
static ssize_t bp_pread(int fd, void *buf, size_t count, off_t offset)
{
    if (lseek(fd, offset, SEEK_SET) == (off_t)-1)
        return -1;
    return read(fd, buf, (unsigned int)count);
}

static ssize_t bp_pwrite(int fd, const void *buf, size_t count, off_t offset)
{
    if (lseek(fd, offset, SEEK_SET) == (off_t)-1)
        return -1;
    return write(fd, buf, (unsigned int)count);
}

/* ================================================================
 *  Hash table — open addressing, linear probing
 *  Key = (fd, page_no)  →  value = page index in pages[]
 * ================================================================ */
static unsigned int bp_hash_key(int fd, off_t page_no)
{
    unsigned int h = (unsigned int)fd * 2654435761u
                   + (unsigned int)page_no * 2246822519u;
    return h;
}

static int bp_hash_lookup(int fd, off_t page_no)
{
    unsigned int h = bp_hash_key(fd, page_no) & (unsigned)(g_pool->hash_size - 1);
    int i;
    for (i = 0; i < g_pool->hash_size; i++) {
        int slot = (int)((h + (unsigned)i) & (unsigned)(g_pool->hash_size - 1));
        int idx = g_pool->hash_table[slot];
        if (idx == -1)
            return -1;
        if (g_pool->pages[idx].fd == fd && g_pool->pages[idx].page_no == page_no)
            return idx;
    }
    return -1;
}

static void bp_hash_insert(int fd, off_t page_no, int page_idx)
{
    unsigned int h = bp_hash_key(fd, page_no) & (unsigned)(g_pool->hash_size - 1);
    int i;
    for (i = 0; i < g_pool->hash_size; i++) {
        int slot = (int)((h + (unsigned)i) & (unsigned)(g_pool->hash_size - 1));
        if (g_pool->hash_table[slot] == -1) {
            g_pool->hash_table[slot] = page_idx;
            return;
        }
    }
    /* Should never happen: hash_size >> num_pages */
}

static void bp_hash_remove(int fd, off_t page_no)
{
    unsigned int h = bp_hash_key(fd, page_no) & (unsigned)(g_pool->hash_size - 1);
    int i;
    for (i = 0; i < g_pool->hash_size; i++) {
        int slot = (int)((h + (unsigned)i) & (unsigned)(g_pool->hash_size - 1));
        int idx = g_pool->hash_table[slot];
        if (idx == -1)
            return;
        if (g_pool->pages[idx].fd == fd && g_pool->pages[idx].page_no == page_no) {
            /* Remove and re-hash subsequent cluster entries */
            int j;
            g_pool->hash_table[slot] = -1;
            for (j = 1; j < g_pool->hash_size; j++) {
                int next = (int)((h + (unsigned)(i + j)) & (unsigned)(g_pool->hash_size - 1));
                int rehash_idx = g_pool->hash_table[next];
                if (rehash_idx == -1)
                    break;
                g_pool->hash_table[next] = -1;
                bp_hash_insert(g_pool->pages[rehash_idx].fd,
                               g_pool->pages[rehash_idx].page_no,
                               rehash_idx);
            }
            return;
        }
    }
}

/* ================================================================
 *  Clock Sweep victim selection
 * ================================================================ */
static int bp_find_victim(void)
{
    int loops = 0;
    int max_loops = g_pool->num_pages * (BP_MAX_USAGE + 2);

    while (loops < max_loops) {
        BPPage *p = &g_pool->pages[g_pool->clock_hand];
        if (p->pin_count == 0) {
            if (p->usage_count == 0 || p->fd == -1) {
                int victim = g_pool->clock_hand;
                g_pool->clock_hand = (g_pool->clock_hand + 1) % g_pool->num_pages;
                return victim;
            }
            p->usage_count--;
        }
        g_pool->clock_hand = (g_pool->clock_hand + 1) % g_pool->num_pages;
        loops++;
    }
    return -1;  /* all pages pinned — shouldn't happen */
}

/* Evict a page: flush if dirty, remove from hash */
static void bp_evict(int idx)
{
    BPPage *p = &g_pool->pages[idx];
    if (p->fd >= 0) {
        if (p->dirty) {
            bp_pwrite(p->fd, p->data, p->valid_len,
                      p->page_no * BP_PAGE_SIZE);
            g_pool->flushes++;
            p->dirty = 0;
        }
        bp_hash_remove(p->fd, p->page_no);
        g_pool->evictions++;
        p->fd = -1;
    }
}

/* Load a page from disk into a victim slot */
static int bp_load_page(int fd, off_t page_no)
{
    ssize_t n;
    BPPage *p;
    int idx = bp_find_victim();
    if (idx == -1)
        return -1;

    bp_evict(idx);

    p = &g_pool->pages[idx];
    n = bp_pread(fd, p->data, BP_PAGE_SIZE, page_no * BP_PAGE_SIZE);
    if (n < 0) n = 0;

    p->fd          = fd;
    p->page_no     = page_no;
    p->valid_len   = (int)n;
    p->dirty       = 0;
    p->pin_count   = 0;
    p->usage_count = 1;

    bp_hash_insert(fd, page_no, idx);
    return idx;
}

/* Get or load a page, returns page index */
static int bp_get_page(int fd, off_t page_no)
{
    int idx = bp_hash_lookup(fd, page_no);
    if (idx >= 0) {
        BPPage *p = &g_pool->pages[idx];
        if (p->usage_count < BP_MAX_USAGE)
            p->usage_count++;
        g_pool->hits++;
        return idx;
    }
    g_pool->misses++;
    return bp_load_page(fd, page_no);
}

/* ================================================================
 *  Public API — Lifecycle
 * ================================================================ */
void bp_init(int num_pages)
{
    int i, hash_size;

    if (num_pages <= 0)
        num_pages = BP_DEFAULT_PAGES;

    g_pool = (BufferPool *)calloc(1, sizeof(BufferPool));
    if (!g_pool)
        err_dump("bp_init: calloc error");

    g_pool->pages = (BPPage *)calloc((size_t)num_pages, sizeof(BPPage));
    if (!g_pool->pages)
        err_dump("bp_init: calloc error for pages");

    g_pool->num_pages  = num_pages;
    g_pool->clock_hand = 0;

    for (i = 0; i < num_pages; i++)
        g_pool->pages[i].fd = -1;

    /* Hash table: power-of-2, at least 4× num_pages */
    hash_size = 1;
    while (hash_size < num_pages * 4)
        hash_size <<= 1;
    g_pool->hash_size  = hash_size;
    g_pool->hash_table = (int *)malloc((size_t)hash_size * sizeof(int));
    if (!g_pool->hash_table)
        err_dump("bp_init: malloc error for hash table");
    for (i = 0; i < hash_size; i++)
        g_pool->hash_table[i] = -1;

    bp_mutex_init(&g_pool->lock);

    g_pool->hits = g_pool->misses = g_pool->evictions = g_pool->flushes = 0;
}

void bp_destroy(void)
{
    if (!g_pool)
        return;
    bp_flush_all();
    bp_mutex_destroy(&g_pool->lock);
    free(g_pool->pages);
    free(g_pool->hash_table);
    free(g_pool);
    g_pool = NULL;
}

/* ================================================================
 *  Core I/O
 * ================================================================ */
int bp_read(int fd, void *buf, size_t count, off_t offset)
{
    char  *dst = (char *)buf;
    size_t remaining = count;
    size_t buf_pos = 0;

    if (!g_pool) {
        /* Fallback: direct I/O if pool not initialized */
        return (int)bp_pread(fd, buf, count, offset);
    }

    bp_mutex_lock(&g_pool->lock);

    while (remaining > 0) {
        off_t  page_no     = (offset + (off_t)buf_pos) / BP_PAGE_SIZE;
        int    page_offset = (int)((offset + (off_t)buf_pos) % BP_PAGE_SIZE);
        size_t avail, to_copy;
        BPPage *p;
        int    idx;

        idx = bp_get_page(fd, page_no);
        if (idx < 0) {
            bp_mutex_unlock(&g_pool->lock);
            return -1;
        }

        p = &g_pool->pages[idx];
        avail = (size_t)(p->valid_len - page_offset);
        if ((int)avail <= 0)
            break;  /* EOF */
        to_copy = remaining < avail ? remaining : avail;
        to_copy = to_copy < (size_t)(BP_PAGE_SIZE - page_offset)
                    ? to_copy
                    : (size_t)(BP_PAGE_SIZE - page_offset);
        memcpy(dst + buf_pos, p->data + page_offset, to_copy);
        buf_pos   += to_copy;
        remaining -= to_copy;
    }

    bp_mutex_unlock(&g_pool->lock);
    return (int)buf_pos;
}

int bp_write(int fd, const void *buf, size_t count, off_t offset)
{
    const char *src = (const char *)buf;
    size_t remaining = count;
    size_t buf_pos = 0;

    if (!g_pool)
        return (int)bp_pwrite(fd, buf, count, offset);

    bp_mutex_lock(&g_pool->lock);

    while (remaining > 0) {
        off_t  page_no     = (offset + (off_t)buf_pos) / BP_PAGE_SIZE;
        int    page_offset = (int)((offset + (off_t)buf_pos) % BP_PAGE_SIZE);
        size_t to_write    = remaining < (size_t)(BP_PAGE_SIZE - page_offset)
                               ? remaining
                               : (size_t)(BP_PAGE_SIZE - page_offset);
        BPPage *p;
        int    idx;

        idx = bp_hash_lookup(fd, page_no);
        if (idx >= 0) {
            /* Page in cache — update it */
            p = &g_pool->pages[idx];
            if (p->usage_count < BP_MAX_USAGE)
                p->usage_count++;
            g_pool->hits++;
        } else {
            /* Load page first (may be partial overwrite) */
            g_pool->misses++;
            idx = bp_load_page(fd, page_no);
            if (idx < 0) {
                bp_mutex_unlock(&g_pool->lock);
                return -1;
            }
            p = &g_pool->pages[idx];
        }

        memcpy(p->data + page_offset, src + buf_pos, to_write);
        p->dirty = 1;

        /* Extend valid_len if writing past current end */
        if (page_offset + (int)to_write > p->valid_len)
            p->valid_len = page_offset + (int)to_write;

        buf_pos   += to_write;
        remaining -= to_write;
    }

    bp_mutex_unlock(&g_pool->lock);
    return (int)buf_pos;
}

int bp_write_append(int fd, const void *buf, size_t count, off_t *out_offset)
{
    off_t end_off;

    if (!g_pool) {
        end_off = lseek(fd, 0, SEEK_END);
        if (end_off == (off_t)-1) return -1;
        if (out_offset) *out_offset = end_off;
        return (int)bp_pwrite(fd, buf, count, end_off);
    }

    bp_mutex_lock(&g_pool->lock);

    /* Flush dirty pages for this fd so lseek(SEEK_END) is accurate */
    {
        int i;
        for (i = 0; i < g_pool->num_pages; i++) {
            BPPage *p = &g_pool->pages[i];
            if (p->fd == fd && p->dirty) {
                bp_pwrite(p->fd, p->data, p->valid_len,
                          p->page_no * BP_PAGE_SIZE);
                g_pool->flushes++;
                p->dirty = 0;
            }
        }
    }

    end_off = lseek(fd, 0, SEEK_END);
    if (end_off == (off_t)-1) {
        bp_mutex_unlock(&g_pool->lock);
        return -1;
    }
    if (out_offset)
        *out_offset = end_off;

    /* Write through to disk */
    bp_pwrite(fd, buf, count, end_off);

    /* Cache the written data */
    {
        const char *src = (const char *)buf;
        size_t remaining = count;
        size_t buf_pos = 0;

        while (remaining > 0) {
            off_t  page_no     = (end_off + (off_t)buf_pos) / BP_PAGE_SIZE;
            int    page_offset = (int)((end_off + (off_t)buf_pos) % BP_PAGE_SIZE);
            size_t to_write    = remaining < (size_t)(BP_PAGE_SIZE - page_offset)
                                   ? remaining
                                   : (size_t)(BP_PAGE_SIZE - page_offset);
            int idx = bp_hash_lookup(fd, page_no);

            if (idx >= 0) {
                BPPage *p = &g_pool->pages[idx];
                memcpy(p->data + page_offset, src + buf_pos, to_write);
                if (page_offset + (int)to_write > p->valid_len)
                    p->valid_len = page_offset + (int)to_write;
                p->dirty = 0;  /* already on disk */
                if (p->usage_count < BP_MAX_USAGE)
                    p->usage_count++;
            }
            /* If page not in cache, skip caching — it'll be loaded on demand */

            buf_pos   += to_write;
            remaining -= to_write;
        }
    }

    bp_mutex_unlock(&g_pool->lock);
    return (int)count;
}

/* ================================================================
 *  Sequential scan — ring buffer (anti-pollution)
 * ================================================================ */
int bp_read_seq(int fd, void *buf, size_t count, off_t offset, BPRing *ring)
{
    char  *dst = (char *)buf;
    size_t remaining = count;
    size_t buf_pos = 0;

    if (!ring)
        return bp_read(fd, buf, count, offset);

    while (remaining > 0) {
        off_t  page_no     = (offset + (off_t)buf_pos) / BP_PAGE_SIZE;
        int    page_offset = (int)((offset + (off_t)buf_pos) % BP_PAGE_SIZE);
        size_t avail, to_copy;
        BPPage *p = NULL;
        int    i;

        /* Search ring for cached page */
        for (i = 0; i < BP_RING_SIZE; i++) {
            if (ring->pages[i].fd == fd && ring->pages[i].page_no == page_no) {
                p = &ring->pages[i];
                break;
            }
        }

        if (!p) {
            /* Load into next ring slot (round-robin) */
            ssize_t n;
            p = &ring->pages[ring->next_slot];
            ring->next_slot = (ring->next_slot + 1) % BP_RING_SIZE;

            n = bp_pread(fd, p->data, BP_PAGE_SIZE, page_no * BP_PAGE_SIZE);
            if (n < 0) n = 0;
            p->fd        = fd;
            p->page_no   = page_no;
            p->valid_len = (int)n;
            p->dirty     = 0;
        }

        avail = (size_t)(p->valid_len - page_offset);
        if ((int)avail <= 0)
            break;  /* EOF */
        to_copy = remaining < avail ? remaining : avail;
        to_copy = to_copy < (size_t)(BP_PAGE_SIZE - page_offset)
                    ? to_copy
                    : (size_t)(BP_PAGE_SIZE - page_offset);
        memcpy(dst + buf_pos, p->data + page_offset, to_copy);
        buf_pos   += to_copy;
        remaining -= to_copy;
    }

    return (int)buf_pos;
}

/* ================================================================
 *  Maintenance
 * ================================================================ */
void bp_flush_fd(int fd)
{
    int i;
    if (!g_pool) return;

    bp_mutex_lock(&g_pool->lock);
    for (i = 0; i < g_pool->num_pages; i++) {
        BPPage *p = &g_pool->pages[i];
        if (p->fd == fd && p->dirty) {
            bp_pwrite(p->fd, p->data, p->valid_len,
                      p->page_no * BP_PAGE_SIZE);
            g_pool->flushes++;
            p->dirty = 0;
        }
    }
    bp_mutex_unlock(&g_pool->lock);
}

void bp_invalidate_fd(int fd)
{
    int i;
    if (!g_pool) return;

    bp_mutex_lock(&g_pool->lock);
    for (i = 0; i < g_pool->num_pages; i++) {
        BPPage *p = &g_pool->pages[i];
        if (p->fd == fd) {
            if (p->dirty) {
                bp_pwrite(p->fd, p->data, p->valid_len,
                          p->page_no * BP_PAGE_SIZE);
                g_pool->flushes++;
            }
            bp_hash_remove(p->fd, p->page_no);
            p->fd          = -1;
            p->dirty       = 0;
            p->pin_count   = 0;
            p->usage_count = 0;
        }
    }
    bp_mutex_unlock(&g_pool->lock);
}

void bp_flush_all(void)
{
    int i;
    if (!g_pool) return;

    bp_mutex_lock(&g_pool->lock);
    for (i = 0; i < g_pool->num_pages; i++) {
        BPPage *p = &g_pool->pages[i];
        if (p->fd >= 0 && p->dirty) {
            bp_pwrite(p->fd, p->data, p->valid_len,
                      p->page_no * BP_PAGE_SIZE);
            g_pool->flushes++;
            p->dirty = 0;
        }
    }
    bp_mutex_unlock(&g_pool->lock);
}

/* ================================================================
 *  Statistics
 * ================================================================ */
void bp_get_stats(BPStats *out)
{
    if (!g_pool) {
        memset(out, 0, sizeof(*out));
        return;
    }
    bp_mutex_lock(&g_pool->lock);
    out->hits       = g_pool->hits;
    out->misses     = g_pool->misses;
    out->evictions  = g_pool->evictions;
    out->flushes    = g_pool->flushes;
    bp_mutex_unlock(&g_pool->lock);
}

void bp_reset_stats(void)
{
    if (!g_pool) return;
    bp_mutex_lock(&g_pool->lock);
    g_pool->hits = g_pool->misses = g_pool->evictions = g_pool->flushes = 0;
    bp_mutex_unlock(&g_pool->lock);
}

/* ================================================================
 *  Ring buffer helpers
 * ================================================================ */
BPRing *bp_ring_alloc(void)
{
    int i;
    BPRing *r = (BPRing *)calloc(1, sizeof(BPRing));
    if (!r) return NULL;
    r->next_slot = 0;
    for (i = 0; i < BP_RING_SIZE; i++)
        r->pages[i].fd = -1;
    return r;
}

void bp_ring_free(BPRing *ring)
{
    free(ring);
}
