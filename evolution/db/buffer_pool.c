/*
 * buffer_pool.c — Partitioned Clock Sweep Buffer Pool for EvoSQL
 *
 * Write-back cache with Clock Sweep eviction (PostgreSQL-style).
 * Partitioned mutexes: page_no % BP_NUM_PARTITIONS determines which
 * partition (and mutex) a page belongs to, allowing concurrent access
 * to pages in different partitions.
 */
#include "buffer_pool.h"
#include "page_crypt.h"
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

/* Number of partitions — each has its own mutex, hash table, clock hand */
#define BP_NUM_PARTITIONS 16

/* ================================================================
 *  Partition — each partition manages a subset of pages
 * ================================================================ */
typedef struct {
    BPPage       *pages;
    int           num_pages;
    int           clock_hand;
    int          *hash_table;
    int           hash_size;
    bp_mutex_t    lock;
    unsigned long hits, misses, evictions, flushes;
} BPPartition;

/* ================================================================
 *  Pool singleton — array of partitions
 * ================================================================ */
typedef struct {
    BPPartition   parts[BP_NUM_PARTITIONS];
    int           total_pages;
} BufferPool;

static BufferPool *g_pool = NULL;

/* Map a page_no to its partition index */
static inline int bp_part_idx(off_t page_no)
{
    return (int)((unsigned long)page_no % BP_NUM_PARTITIONS);
}

/* ================================================================
 *  Portable pread / pwrite
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

/* Global I/O mutex — used only for bp_write_append (lseek SEEK_END)
 * and Windows fallback. Normal reads/writes use pread/pwrite on POSIX. */
static bp_mutex_t g_io_lock;

#ifdef _WIN32
static ssize_t bp_pread_safe(int fd, void *buf, size_t count, off_t offset)
{
    ssize_t n;
    bp_mutex_lock(&g_io_lock);
    n = bp_pread(fd, buf, count, offset);
    bp_mutex_unlock(&g_io_lock);
    return n;
}
static ssize_t bp_pwrite_safe(int fd, const void *buf, size_t count, off_t offset)
{
    ssize_t n;
    bp_mutex_lock(&g_io_lock);
    n = bp_pwrite(fd, buf, count, offset);
    bp_mutex_unlock(&g_io_lock);
    return n;
}
#else
/* POSIX: pread/pwrite are atomic positioned I/O — no locking needed */
static ssize_t bp_pread_safe(int fd, void *buf, size_t count, off_t offset)
{
    return pread(fd, buf, count, offset);
}
static ssize_t bp_pwrite_safe(int fd, const void *buf, size_t count, off_t offset)
{
    return pwrite(fd, buf, count, offset);
}
#endif

/* ================================================================
 *  TDE helpers
 * ================================================================ */
static void bp_encrypt_and_write(int fd, const void *data, size_t len,
                                 off_t page_no)
{
    if (pcrypt_is_enabled() && page_no > 0) {
        uint8_t enc[BP_PAGE_SIZE];
        memcpy(enc, data, len);
        pcrypt_encrypt_page(enc, (uint32_t)page_no);
        bp_pwrite_safe(fd, enc, len, page_no * BP_PAGE_SIZE);
    } else {
        bp_pwrite_safe(fd, data, len, page_no * BP_PAGE_SIZE);
    }
}

/* Forward declaration for dirty page tracker */
void bp_track_dirty(uint32_t page_no);

static void bp_write_page_to_disk(BPPage *p)
{
    bp_encrypt_and_write(p->fd, p->data, (size_t)p->valid_len, p->page_no);
}

static ssize_t bp_read_page_from_disk(int fd, char *data, off_t page_no)
{
    ssize_t n = bp_pread_safe(fd, data, BP_PAGE_SIZE, page_no * BP_PAGE_SIZE);
    if (n > 0 && pcrypt_is_enabled() && page_no > 0) {
        pcrypt_decrypt_page((uint8_t *)data, (uint32_t)page_no);
    }
    return n;
}

/* ================================================================
 *  Per-partition hash table — open addressing, linear probing
 * ================================================================ */
static unsigned int bp_hash_key(int fd, off_t page_no)
{
    unsigned int h = (unsigned int)fd * 2654435761u
                   + (unsigned int)page_no * 2246822519u;
    return h;
}

static int part_hash_lookup(BPPartition *part, int fd, off_t page_no)
{
    unsigned int h = bp_hash_key(fd, page_no) & (unsigned)(part->hash_size - 1);
    int i;
    for (i = 0; i < part->hash_size; i++) {
        int slot = (int)((h + (unsigned)i) & (unsigned)(part->hash_size - 1));
        int idx = part->hash_table[slot];
        if (idx == -1)
            return -1;
        if (part->pages[idx].fd == fd && part->pages[idx].page_no == page_no)
            return idx;
    }
    return -1;
}

static void part_hash_insert(BPPartition *part, int fd, off_t page_no, int page_idx)
{
    unsigned int h = bp_hash_key(fd, page_no) & (unsigned)(part->hash_size - 1);
    int i;
    for (i = 0; i < part->hash_size; i++) {
        int slot = (int)((h + (unsigned)i) & (unsigned)(part->hash_size - 1));
        if (part->hash_table[slot] == -1) {
            part->hash_table[slot] = page_idx;
            return;
        }
    }
}

static void part_hash_remove(BPPartition *part, int fd, off_t page_no)
{
    unsigned int h = bp_hash_key(fd, page_no) & (unsigned)(part->hash_size - 1);
    int i;
    for (i = 0; i < part->hash_size; i++) {
        int slot = (int)((h + (unsigned)i) & (unsigned)(part->hash_size - 1));
        int idx = part->hash_table[slot];
        if (idx == -1)
            return;
        if (part->pages[idx].fd == fd && part->pages[idx].page_no == page_no) {
            int j;
            part->hash_table[slot] = -1;
            for (j = 1; j < part->hash_size; j++) {
                int next = (int)((h + (unsigned)(i + j)) & (unsigned)(part->hash_size - 1));
                int rehash_idx = part->hash_table[next];
                if (rehash_idx == -1)
                    break;
                part->hash_table[next] = -1;
                part_hash_insert(part, part->pages[rehash_idx].fd,
                                 part->pages[rehash_idx].page_no,
                                 rehash_idx);
            }
            return;
        }
    }
}

/* ================================================================
 *  Per-partition clock sweep
 * ================================================================ */
static int part_find_victim(BPPartition *part)
{
    int loops = 0;
    int max_loops = part->num_pages * (BP_MAX_USAGE + 2);

    while (loops < max_loops) {
        BPPage *p = &part->pages[part->clock_hand];
        if (atomic_load(&p->pin_count) == 0) {
            if (p->usage_count == 0 || p->fd == -1) {
                int victim = part->clock_hand;
                part->clock_hand = (part->clock_hand + 1) % part->num_pages;
                return victim;
            }
            p->usage_count--;
        }
        part->clock_hand = (part->clock_hand + 1) % part->num_pages;
        loops++;
    }
    return -1;
}

static void part_evict(BPPartition *part, int idx)
{
    BPPage *p = &part->pages[idx];
    if (p->fd >= 0) {
        if (p->dirty) {
            bp_write_page_to_disk(p);
            part->flushes++;
            p->dirty = 0;
        }
        part_hash_remove(part, p->fd, p->page_no);
        part->evictions++;
        p->fd = -1;
    }
}

static int part_load_page(BPPartition *part, int fd, off_t page_no)
{
    ssize_t n;
    BPPage *p;
    int idx = part_find_victim(part);
    if (idx == -1)
        return -1;

    part_evict(part, idx);

    p = &part->pages[idx];
    n = bp_read_page_from_disk(fd, p->data, page_no);
    if (n < 0) n = 0;

    p->fd          = fd;
    p->page_no     = page_no;
    p->valid_len   = (int)n;
    p->dirty       = 0;
    atomic_store(&p->pin_count, 0);
    atomic_store(&p->seq, 0);     /* seqlock: stable (even) after load */
    p->usage_count = 1;

    part_hash_insert(part, fd, page_no, idx);
    return idx;
}

static int part_get_page(BPPartition *part, int fd, off_t page_no)
{
    int idx = part_hash_lookup(part, fd, page_no);
    if (idx >= 0) {
        BPPage *p = &part->pages[idx];
        if (p->usage_count < BP_MAX_USAGE)
            p->usage_count++;
        part->hits++;
        return idx;
    }
    part->misses++;
    return part_load_page(part, fd, page_no);
}

/* ================================================================
 *  Public API — Lifecycle
 * ================================================================ */
void bp_init(int num_pages)
{
    int i, pages_per_part, hash_size;

    if (num_pages <= 0)
        num_pages = BP_DEFAULT_PAGES;

    g_pool = (BufferPool *)calloc(1, sizeof(BufferPool));
    if (!g_pool)
        err_dump("bp_init: calloc error");

    g_pool->total_pages = num_pages;
    pages_per_part = num_pages / BP_NUM_PARTITIONS;
    if (pages_per_part < 16) pages_per_part = 16;

    bp_mutex_init(&g_io_lock);

    for (i = 0; i < BP_NUM_PARTITIONS; i++) {
        BPPartition *part = &g_pool->parts[i];
        int j;

        part->num_pages = pages_per_part;
        part->pages = (BPPage *)calloc((size_t)pages_per_part, sizeof(BPPage));
        if (!part->pages)
            err_dump("bp_init: calloc error for partition pages");

        part->clock_hand = 0;

        for (j = 0; j < pages_per_part; j++)
            part->pages[j].fd = -1;

        /* Hash table: power-of-2, at least 4× partition pages */
        hash_size = 1;
        while (hash_size < pages_per_part * 4)
            hash_size <<= 1;
        part->hash_size  = hash_size;
        part->hash_table = (int *)malloc((size_t)hash_size * sizeof(int));
        if (!part->hash_table)
            err_dump("bp_init: malloc error for hash table");
        for (j = 0; j < hash_size; j++)
            part->hash_table[j] = -1;

        bp_mutex_init(&part->lock);
        part->hits = part->misses = part->evictions = part->flushes = 0;
    }
}

void bp_destroy(void)
{
    int i;
    if (!g_pool)
        return;
    bp_flush_all();
    for (i = 0; i < BP_NUM_PARTITIONS; i++) {
        BPPartition *part = &g_pool->parts[i];
        bp_mutex_destroy(&part->lock);
        free(part->pages);
        free(part->hash_table);
    }
    bp_mutex_destroy(&g_io_lock);
    free(g_pool);
    g_pool = NULL;
}

/* ================================================================
 *  Core I/O — partitioned locking
 * ================================================================ */
int bp_read(int fd, void *buf, size_t count, off_t offset)
{
    char  *dst = (char *)buf;
    size_t remaining = count;
    size_t buf_pos = 0;

    if (!g_pool) {
        ssize_t n;
        bp_mutex_lock(&g_io_lock);
        n = bp_pread(fd, buf, count, offset);
        bp_mutex_unlock(&g_io_lock);
        return (int)n;
    }

    while (remaining > 0) {
        off_t  page_no     = (offset + (off_t)buf_pos) / BP_PAGE_SIZE;
        int    page_offset = (int)((offset + (off_t)buf_pos) % BP_PAGE_SIZE);
        size_t avail, to_copy;
        BPPage *p;
        int    idx;

        int pi = bp_part_idx(page_no);
        BPPartition *part = &g_pool->parts[pi];

        bp_mutex_lock(&part->lock);

        idx = part_get_page(part, fd, page_no);
        if (idx < 0) {
            bp_mutex_unlock(&part->lock);
            return -1;
        }

        p = &part->pages[idx];
        atomic_fetch_add(&p->pin_count, 1);  /* pin: prevent eviction */

        avail = (size_t)(p->valid_len - page_offset);
        if ((int)avail <= 0) {
            atomic_fetch_sub(&p->pin_count, 1);
            bp_mutex_unlock(&part->lock);
            break;
        }
        to_copy = remaining < avail ? remaining : avail;
        to_copy = to_copy < (size_t)(BP_PAGE_SIZE - page_offset)
                    ? to_copy
                    : (size_t)(BP_PAGE_SIZE - page_offset);

        bp_mutex_unlock(&part->lock);  /* release lock BEFORE memcpy */

        /* Lock-free read with seqlock: memcpy runs without any lock.
         * Pin protects from eviction. Seqlock detects concurrent writes:
         * if seq changed during memcpy, a writer was modifying the page
         * and we may have a torn read — retry. */
        {
            int retries = 0;
            unsigned int seq0, seq1;
            do {
                seq0 = atomic_load(&p->seq);
                if (seq0 & 1) { /* writer in progress — spin briefly */
                    retries++;
                    continue;
                }
                atomic_thread_fence(memory_order_acquire);
                memcpy(dst + buf_pos, p->data + page_offset, to_copy);
                atomic_thread_fence(memory_order_acquire);
                seq1 = atomic_load(&p->seq);
            } while (seq0 != seq1 && retries++ < 100);
        }

        /* Atomic unpin — no lock needed (Oracle-style) */
        atomic_fetch_sub(&p->pin_count, 1);

        buf_pos   += to_copy;
        remaining -= to_copy;
    }

    return (int)buf_pos;
}

int bp_write(int fd, const void *buf, size_t count, off_t offset)
{
    const char *src = (const char *)buf;
    size_t remaining = count;
    size_t buf_pos = 0;

    if (!g_pool) {
        ssize_t n;
        bp_mutex_lock(&g_io_lock);
        n = bp_pwrite(fd, buf, count, offset);
        bp_mutex_unlock(&g_io_lock);
        return (int)n;
    }

    while (remaining > 0) {
        off_t  page_no     = (offset + (off_t)buf_pos) / BP_PAGE_SIZE;
        int    page_offset = (int)((offset + (off_t)buf_pos) % BP_PAGE_SIZE);
        size_t to_write    = remaining < (size_t)(BP_PAGE_SIZE - page_offset)
                               ? remaining
                               : (size_t)(BP_PAGE_SIZE - page_offset);
        BPPage *p;
        int    idx;

        int pi = bp_part_idx(page_no);
        BPPartition *part = &g_pool->parts[pi];

        bp_mutex_lock(&part->lock);

        idx = part_hash_lookup(part, fd, page_no);
        if (idx >= 0) {
            p = &part->pages[idx];
            if (p->usage_count < BP_MAX_USAGE)
                p->usage_count++;
            part->hits++;
        } else {
            part->misses++;
            idx = part_load_page(part, fd, page_no);
            if (idx < 0) {
                bp_mutex_unlock(&part->lock);
                return -1;
            }
            p = &part->pages[idx];
        }

        /* Seqlock: increment to odd (write in progress) */
        atomic_fetch_add(&p->seq, 1);
        atomic_thread_fence(memory_order_release);

        memcpy(p->data + page_offset, src + buf_pos, to_write);
        if (!p->dirty) {
            p->dirty = 1;
            bp_track_dirty((uint32_t)p->page_no);
        }

        if (page_offset + (int)to_write > p->valid_len)
            p->valid_len = page_offset + (int)to_write;

        /* Seqlock: increment to even (write complete) */
        atomic_thread_fence(memory_order_release);
        atomic_fetch_add(&p->seq, 1);

        bp_mutex_unlock(&part->lock);

        buf_pos   += to_write;
        remaining -= to_write;
    }

    return (int)buf_pos;
}

int bp_write_append(int fd, const void *buf, size_t count, off_t *out_offset)
{
    off_t end_off;

    if (!g_pool) {
        bp_mutex_lock(&g_io_lock);
        end_off = lseek(fd, 0, SEEK_END);
        if (end_off == (off_t)-1) { bp_mutex_unlock(&g_io_lock); return -1; }
        if (out_offset) *out_offset = end_off;
        bp_pwrite(fd, buf, count, end_off);
        bp_mutex_unlock(&g_io_lock);
        return (int)count;
    }

    /* Flush all dirty pages for this fd across ALL partitions */
    {
        int pi;
        for (pi = 0; pi < BP_NUM_PARTITIONS; pi++) {
            BPPartition *part = &g_pool->parts[pi];
            int j;
            bp_mutex_lock(&part->lock);
            for (j = 0; j < part->num_pages; j++) {
                BPPage *p = &part->pages[j];
                if (p->fd == fd && p->dirty) {
                    bp_write_page_to_disk(p);
                    part->flushes++;
                    p->dirty = 0;
                }
            }
            bp_mutex_unlock(&part->lock);
        }
    }

    bp_mutex_lock(&g_io_lock);
    end_off = lseek(fd, 0, SEEK_END);
    if (end_off == (off_t)-1) {
        bp_mutex_unlock(&g_io_lock);
        return -1;
    }
    if (out_offset)
        *out_offset = end_off;

    /* Write through to disk */
    {
        off_t page_no = end_off / BP_PAGE_SIZE;
        if (pcrypt_is_enabled() && count == BP_PAGE_SIZE && page_no > 0) {
            uint8_t enc[BP_PAGE_SIZE];
            memcpy(enc, buf, count);
            pcrypt_encrypt_page(enc, (uint32_t)page_no);
            bp_pwrite(fd, enc, count, end_off);
        } else {
            bp_pwrite(fd, buf, count, end_off);
        }
    }
    bp_mutex_unlock(&g_io_lock);

    /* Cache the written data in appropriate partition */
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

            int pi = bp_part_idx(page_no);
            BPPartition *part = &g_pool->parts[pi];

            bp_mutex_lock(&part->lock);
            int idx = part_hash_lookup(part, fd, page_no);
            if (idx >= 0) {
                BPPage *p = &part->pages[idx];
                memcpy(p->data + page_offset, src + buf_pos, to_write);
                if (page_offset + (int)to_write > p->valid_len)
                    p->valid_len = page_offset + (int)to_write;
                p->dirty = 0;  /* already on disk */
                if (p->usage_count < BP_MAX_USAGE)
                    p->usage_count++;
            }
            bp_mutex_unlock(&part->lock);

            buf_pos   += to_write;
            remaining -= to_write;
        }
    }

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

        for (i = 0; i < BP_RING_SIZE; i++) {
            if (ring->pages[i].fd == fd && ring->pages[i].page_no == page_no) {
                p = &ring->pages[i];
                break;
            }
        }

        if (!p) {
            ssize_t n;
            p = &ring->pages[ring->next_slot];
            ring->next_slot = (ring->next_slot + 1) % BP_RING_SIZE;

            n = bp_read_page_from_disk(fd, p->data, page_no);
            if (n < 0) n = 0;
            p->fd        = fd;
            p->page_no   = page_no;
            p->valid_len = (int)n;
            p->dirty     = 0;
        }

        avail = (size_t)(p->valid_len - page_offset);
        if ((int)avail <= 0)
            break;
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
 *  Maintenance — iterate all partitions
 * ================================================================ */
void bp_flush_fd(int fd)
{
    int pi;
    if (!g_pool) return;

    for (pi = 0; pi < BP_NUM_PARTITIONS; pi++) {
        BPPartition *part = &g_pool->parts[pi];
        int i;
        bp_mutex_lock(&part->lock);
        for (i = 0; i < part->num_pages; i++) {
            BPPage *p = &part->pages[i];
            if (p->fd == fd && p->dirty) {
                bp_write_page_to_disk(p);
                part->flushes++;
                p->dirty = 0;
            }
        }
        bp_mutex_unlock(&part->lock);
    }
}

void bp_invalidate_fd(int fd)
{
    int pi;
    if (!g_pool) return;

    for (pi = 0; pi < BP_NUM_PARTITIONS; pi++) {
        BPPartition *part = &g_pool->parts[pi];
        int i;
        bp_mutex_lock(&part->lock);
        for (i = 0; i < part->num_pages; i++) {
            BPPage *p = &part->pages[i];
            if (p->fd == fd) {
                if (p->dirty) {
                    bp_write_page_to_disk(p);
                    part->flushes++;
                }
                part_hash_remove(part, p->fd, p->page_no);
                p->fd          = -1;
                p->dirty       = 0;
                atomic_store(&p->pin_count, 0);
                p->usage_count = 0;
            }
        }
        bp_mutex_unlock(&part->lock);
    }
}

void bp_invalidate_page(int fd, uint32_t page_no)
{
    int pi;
    if (!g_pool) return;
    for (pi = 0; pi < BP_NUM_PARTITIONS; pi++) {
        BPPartition *part = &g_pool->parts[pi];
        int i;
        bp_mutex_lock(&part->lock);
        for (i = 0; i < part->num_pages; i++) {
            BPPage *p = &part->pages[i];
            if (p->fd == fd && p->page_no == page_no) {
                /* Discard cached contents — next pin will re-read from
                 * disk. Used by WAL receiver after pwrite replaces the
                 * on-disk page. Don't write dirty back (the on-disk
                 * version is newer thanks to WAL replay). */
                part_hash_remove(part, p->fd, p->page_no);
                p->fd          = -1;
                p->dirty       = 0;
                atomic_store(&p->pin_count, 0);
                p->usage_count = 0;
                bp_mutex_unlock(&part->lock);
                return;
            }
        }
        bp_mutex_unlock(&part->lock);
    }
}

void bp_flush_all(void)
{
    int pi;
    if (!g_pool) return;

    for (pi = 0; pi < BP_NUM_PARTITIONS; pi++) {
        BPPartition *part = &g_pool->parts[pi];
        int i;
        bp_mutex_lock(&part->lock);
        for (i = 0; i < part->num_pages; i++) {
            BPPage *p = &part->pages[i];
            if (p->fd >= 0 && p->dirty) {
                bp_write_page_to_disk(p);
                part->flushes++;
                p->dirty = 0;
            }
        }
        bp_mutex_unlock(&part->lock);
    }
}

/* ── Dirty page tracker for efficient WAL flush ──
 * Instead of scanning 32K buffer pool pages, track which pages
 * were dirtied since the last WAL flush. Max 256 tracked pages;
 * if overflow, falls back to full scan. */
#define DIRTY_TRACK_MAX 256
static uint32_t g_dirty_pages[DIRTY_TRACK_MAX];
static int      g_dirty_count = 0;
static int      g_dirty_overflow = 0;  /* 1 = too many, need full scan */

void bp_track_dirty(uint32_t page_no)
{
    if (g_dirty_overflow) return;
    if (g_dirty_count >= DIRTY_TRACK_MAX) {
        g_dirty_overflow = 1;
        return;
    }
    /* Avoid duplicates (simple linear scan — max 256 entries) */
    for (int i = 0; i < g_dirty_count; i++)
        if (g_dirty_pages[i] == page_no) return;
    g_dirty_pages[g_dirty_count++] = page_no;
}

void bp_wal_flush_dirty(int fd)
{
    extern uint32_t wal_log_page(uint32_t, const void *, uint16_t);
    extern void wal_fsync(void);
    extern int wal_is_active(void);
    if (!g_pool || !wal_is_active()) return;

    if (!g_dirty_overflow && g_dirty_count > 0) {
        /* Fast path: only log tracked dirty pages */
        for (int d = 0; d < g_dirty_count; d++) {
            uint32_t pno = g_dirty_pages[d];
            int pi = bp_part_idx((off_t)pno);
            BPPartition *part = &g_pool->parts[pi];
            bp_mutex_lock(&part->lock);
            int idx = part_hash_lookup(part, fd, (off_t)pno);
            if (idx >= 0) {
                BPPage *p = &part->pages[idx];
                if (p->dirty)
                    wal_log_page(pno, p->data, (uint16_t)p->valid_len);
            }
            bp_mutex_unlock(&part->lock);
        }
    } else if (g_dirty_overflow) {
        /* Fallback: full scan (rare — only if >256 pages dirtied in one TX) */
        int pi;
        for (pi = 0; pi < BP_NUM_PARTITIONS; pi++) {
            BPPartition *part = &g_pool->parts[pi];
            bp_mutex_lock(&part->lock);
            for (int i = 0; i < part->num_pages; i++) {
                BPPage *p = &part->pages[i];
                if (p->fd == fd && p->dirty)
                    wal_log_page((uint32_t)p->page_no, p->data,
                                 (uint16_t)p->valid_len);
            }
            bp_mutex_unlock(&part->lock);
        }
    }

    /* Single fsync for all logged pages */
    wal_fsync();

    /* Reset tracker */
    g_dirty_count = 0;
    g_dirty_overflow = 0;
}

/* ================================================================
 *  Statistics — aggregate across all partitions
 * ================================================================ */
void bp_get_stats(BPStats *out)
{
    int pi;
    if (!g_pool) {
        memset(out, 0, sizeof(*out));
        return;
    }
    out->hits = out->misses = out->evictions = out->flushes = 0;
    for (pi = 0; pi < BP_NUM_PARTITIONS; pi++) {
        BPPartition *part = &g_pool->parts[pi];
        bp_mutex_lock(&part->lock);
        out->hits      += part->hits;
        out->misses    += part->misses;
        out->evictions += part->evictions;
        out->flushes   += part->flushes;
        bp_mutex_unlock(&part->lock);
    }
}

void bp_reset_stats(void)
{
    int pi;
    if (!g_pool) return;
    for (pi = 0; pi < BP_NUM_PARTITIONS; pi++) {
        BPPartition *part = &g_pool->parts[pi];
        bp_mutex_lock(&part->lock);
        part->hits = part->misses = part->evictions = part->flushes = 0;
        bp_mutex_unlock(&part->lock);
    }
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
