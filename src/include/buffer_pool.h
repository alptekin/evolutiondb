/*
 * buffer_pool.h — Clock Sweep Buffer Pool Manager for EvoSQL
 *
 * Caches file pages in memory to reduce disk I/O.
 * Uses Clock Sweep eviction (same as PostgreSQL).
 * Write-back: dirty pages flushed on eviction or explicit flush.
 * Concurrency-ready with internal mutex (for future QueryContext refactor).
 */
#ifndef BUFFER_POOL_H
#define BUFFER_POOL_H

#include <sys/types.h>
#include <stdint.h>
#include <stdatomic.h>

#define BP_PAGE_SIZE     4096
#define BP_DEFAULT_PAGES 32768  /* 128MB default pool (32768 × 4KB pages) */
#define BP_RING_SIZE     8      /* sequential scan ring buffer */
#define BP_MAX_USAGE     5      /* max usage_count (matches PostgreSQL) */

/* ----------------------------------------------------------------
 *  Cached page descriptor
 * ---------------------------------------------------------------- */
typedef struct {
    int      fd;            /* file descriptor (-1 = free slot) */
    off_t    page_no;       /* page index = file_offset / BP_PAGE_SIZE */
    char     data[BP_PAGE_SIZE];
    int      valid_len;     /* bytes actually loaded (< PAGE_SIZE near EOF) */
    int      dirty;         /* modified since load? */
    atomic_int pin_count;   /* >0 = in use, cannot evict (atomic for lock-free unpin) */
    int      usage_count;   /* 0..BP_MAX_USAGE, clock sweep counter */
    atomic_uint seq;        /* seqlock: odd = write in progress, even = stable */
} BPPage;

/* ----------------------------------------------------------------
 *  Ring buffer for sequential scans (anti-pollution)
 *  Sequential scans use this instead of the main pool,
 *  preventing large scans from evicting hot pages.
 * ---------------------------------------------------------------- */
typedef struct {
    BPPage   pages[BP_RING_SIZE];
    int      next_slot;
} BPRing;

/* ----------------------------------------------------------------
 *  Statistics
 * ---------------------------------------------------------------- */
typedef struct {
    unsigned long hits;
    unsigned long misses;
    unsigned long evictions;
    unsigned long flushes;
} BPStats;

/* ----------------------------------------------------------------
 *  Lifecycle
 * ---------------------------------------------------------------- */
void bp_init(int num_pages);
void bp_destroy(void);

/* ----------------------------------------------------------------
 *  Core I/O — drop-in replacement for lseek+read / lseek+write
 *  All offsets are absolute (no SEEK_CUR / SEEK_END).
 *  Cross-page reads/writes are handled transparently.
 * ---------------------------------------------------------------- */
int  bp_read(int fd, void *buf, size_t count, off_t offset);
int  bp_write(int fd, const void *buf, size_t count, off_t offset);

/* Append to end of file.  Flushes dirty pages for fd first to
 * ensure lseek(SEEK_END) returns the correct size.
 * Stores the offset written at *out_offset. */
int  bp_write_append(int fd, const void *buf, size_t count, off_t *out_offset);

/* Sequential scan read — uses a private ring buffer instead
 * of the main pool, preventing scan pollution. */
int  bp_read_seq(int fd, void *buf, size_t count, off_t offset, BPRing *ring);

/* ----------------------------------------------------------------
 *  Maintenance
 * ---------------------------------------------------------------- */
void bp_flush_fd(int fd);       /* write all dirty pages for fd */
void bp_invalidate_fd(int fd);  /* drop all pages for fd (flush first) */
void bp_invalidate_page(int fd, uint32_t page_no); /* drop single page (WAL replay) */
void bp_flush_all(void);        /* write all dirty pages */
void bp_wal_flush_dirty(int fd);/* log dirty pages to WAL + single fsync */
void bp_track_dirty(uint32_t page_no); /* track page for efficient WAL flush */

/* ----------------------------------------------------------------
 *  Statistics
 * ---------------------------------------------------------------- */
void bp_get_stats(BPStats *out);
void bp_reset_stats(void);

/* ----------------------------------------------------------------
 *  Ring buffer helpers
 * ---------------------------------------------------------------- */
BPRing *bp_ring_alloc(void);
void    bp_ring_free(BPRing *ring);

#endif /* BUFFER_POOL_H */
