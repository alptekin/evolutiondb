/*
 * mvcc.c — Multi-Version Concurrency Control for EvoSQL
 *
 * Implements:
 *   - XID assignment via monotonic counter backed by FileHeader
 *   - Active transaction tracking (fixed array, up to 256 concurrent TXs)
 *   - Snapshot capture for snapshot isolation
 *   - CLOG (Commit Log): 2-bit per-XID status in dedicated pages
 *   - Tuple visibility predicate (xmin/xmax + snapshot + CLOG)
 *
 * CLOG page layout:
 *   [PageHeader: 16B][status bits: 4080B]
 *   Each byte stores 4 XIDs (2 bits each).
 *   One page covers (4096 - 16) * 4 = 16,320 XIDs.
 *   Pages are chained via PageHeader.next_page for overflow.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <pthread.h>
#include "mvcc.h"
#include "page_mgr.h"
#include "tuple_format.h"
#include "query_context.h"

/* ================================================================
 *  CLOG constants
 * ================================================================ */
#define CLOG_BITS_PER_XID   2
#define CLOG_XIDS_PER_BYTE  4
#define CLOG_XIDS_PER_PAGE  ((EVO_PAGE_SIZE - PAGE_HEADER_SIZE) * CLOG_XIDS_PER_BYTE)
/* = 4080 * 4 = 16,320 XIDs per CLOG page */

/* ================================================================
 *  XID counter — source of truth for transaction IDs
 *
 *  Initialised from FileHeader on mvcc_init(). Incremented atomically
 *  under g_xid_lock. g_highest_xid always equals the most recently
 *  assigned XID; snapshot xmax = g_highest_xid + 1.
 * ================================================================ */
static uint32_t        g_highest_xid = 0;

/* Startup XID: the first XID assigned after this server start.
 * Any IN_PROGRESS XID < g_startup_xid is from a crashed session. */
static uint32_t        g_startup_xid = 0;

/* Lock ordering invariant (always acquire in this order to prevent deadlock):
 *   g_active_lock > g_xid_lock > g_clog_lock > g_csn_lock
 * Never acquire a lower-ordered lock while holding a higher-ordered one.
 * mvcc_snapshot_take() is the only function that nests locks (active > xid > csn). */
static pthread_mutex_t g_xid_lock    = PTHREAD_MUTEX_INITIALIZER;

/* ================================================================
 *  Active transaction array
 * ================================================================ */
static uint32_t        g_active_txs[MVCC_MAX_ACTIVE];
static pthread_mutex_t g_active_lock  = PTHREAD_MUTEX_INITIALIZER;

/* ================================================================
 *  CLOG mutex
 * ================================================================ */
static pthread_mutex_t g_clog_lock = PTHREAD_MUTEX_INITIALIZER;

/* ================================================================
 *  CSN (Commit Sequence Number) cache
 *
 *  Ring buffer mapping XID → CSN for recently committed transactions.
 *  Used for O(1) visibility checks: if a tuple's xmin has a CSN
 *  <= snapshot_csn, it's visible without scanning the active list.
 * ================================================================ */
#define CSN_CACHE_SIZE 4096
static struct {
    uint32_t xid;
    uint32_t csn;
    /* Task 209 — commit wall-clock timestamp (unix seconds, UTC).
     * 0 means "never observed" / slot empty for this XID. */
    int64_t  commit_ts;
} g_csn_cache[CSN_CACHE_SIZE];
static pthread_mutex_t g_csn_lock = PTHREAD_MUTEX_INITIALIZER;
static uint32_t g_last_committed_csn = 0;

/* ----------------------------------------------------------------
 *  Forward declarations (internal helpers)
 * ---------------------------------------------------------------- */
static uint32_t clog_get_page(uint32_t xid);
static void     clog_set_status(uint32_t xid, int status);
static int      clog_get_status(uint32_t xid);
static int      xid_in_snapshot(uint32_t xid, const Snapshot *snap);

/* ================================================================
 *  XID assignment
 * ================================================================ */

uint32_t mvcc_assign_xid(void)
{
    /* pgm_next_xid() atomically increments and persists the XID counter
     * in the FileHeader. */
    uint32_t xid = pgm_next_xid();

    pthread_mutex_lock(&g_xid_lock);
    if (xid > g_highest_xid)
        g_highest_xid = xid;
    pthread_mutex_unlock(&g_xid_lock);

    return xid;
}

uint32_t mvcc_ensure_xid(uint32_t *xid_ptr)
{
    if (*xid_ptr == 0) {
        *xid_ptr = mvcc_assign_xid();
        mvcc_register_tx(*xid_ptr);
    }
    return *xid_ptr;
}

/* ================================================================
 *  Active transaction tracking
 * ================================================================ */

void mvcc_register_tx(uint32_t xid)
{
    pthread_mutex_lock(&g_active_lock);
    int registered = 0;
    for (int i = 0; i < MVCC_MAX_ACTIVE; i++) {
        if (g_active_txs[i] == 0) {
            g_active_txs[i] = xid;
            registered = 1;
            break;
        }
    }
    if (!registered)
        fprintf(stderr, "MVCC WARNING: active transaction array full (%d), "
                "XID %u not tracked — visibility may be incorrect\n",
                MVCC_MAX_ACTIVE, xid);
    pthread_mutex_unlock(&g_active_lock);
}

void mvcc_unregister_tx(uint32_t xid)
{
    pthread_mutex_lock(&g_active_lock);
    for (int i = 0; i < MVCC_MAX_ACTIVE; i++) {
        if (g_active_txs[i] == xid) {
            g_active_txs[i] = 0;
            break;
        }
    }
    pthread_mutex_unlock(&g_active_lock);
}

uint32_t mvcc_get_oldest_active(void)
{
    uint32_t oldest = UINT32_MAX;
    pthread_mutex_lock(&g_active_lock);
    for (int i = 0; i < MVCC_MAX_ACTIVE; i++) {
        if (g_active_txs[i] != 0 && g_active_txs[i] < oldest)
            oldest = g_active_txs[i];
    }
    pthread_mutex_unlock(&g_active_lock);
    return oldest;
}

/* ================================================================
 *  Snapshot
 * ================================================================ */

void mvcc_snapshot_take(Snapshot *out)
{
    memset(out, 0, sizeof(Snapshot));

    pthread_mutex_lock(&g_active_lock);

    /* xmax = first XID not yet assigned = one past highest assigned */
    pthread_mutex_lock(&g_xid_lock);
    out->xmax = g_highest_xid + 1;
    pthread_mutex_unlock(&g_xid_lock);

    /* Copy active XIDs and compute xmin (lowest active XID) */
    out->xmin   = out->xmax;     /* default: if no active TXs, xmin == xmax */
    out->nactive = 0;

    for (int i = 0; i < MVCC_MAX_ACTIVE; i++) {
        if (g_active_txs[i] != 0) {
            out->active_xids[out->nactive++] = g_active_txs[i];
            if (g_active_txs[i] < out->xmin)
                out->xmin = g_active_txs[i];
        }
    }

    /* CSN: record the highest committed CSN at snapshot time */
    pthread_mutex_lock(&g_csn_lock);
    out->snapshot_csn = g_last_committed_csn;
    pthread_mutex_unlock(&g_csn_lock);

    pthread_mutex_unlock(&g_active_lock);
}

/* ----------------------------------------------------------------
 *  Task 207 — temporal query helpers
 *
 *  mvcc_snapshot_at_xid builds a synthetic snapshot that sees the
 *  database as it was right after `at_xid` committed: every committed
 *  XID <= at_xid is visible, anything assigned after is invisible.
 *  No active list — the historical view doesn't track concurrency.
 * ---------------------------------------------------------------- */
void mvcc_snapshot_at_xid(uint32_t at_xid, Snapshot *out)
{
    memset(out, 0, sizeof(Snapshot));
    if (at_xid == 0) {
        mvcc_snapshot_take(out);
        return;
    }
    out->xmin = at_xid + 1;     /* nothing in-progress in the past view */
    out->xmax = at_xid + 1;     /* anything >= xmax is "future" → invisible */
    out->nactive = 0;
    out->my_xid = 0;
    out->snapshot_csn = clog_get_csn(at_xid);
}

/* Parser-side helper for the temporal SELECT grammar. Stores the
 * requested as-of XID in the active QueryContext; query_executor reads
 * it back when constructing the snapshot for the SELECT it's about to
 * run, then resets it so the next statement starts fresh. */
void SetAsOfXid(uint32_t at_xid)
{
    if (g_qctx) g_qctx->asof_xid = at_xid;
}

/* ================================================================
 *  CLOG — Commit Log
 *
 *  2 bits per XID packed into pages chained via PageHeader.next_page.
 *  The root page number is stored in pgm_get_catalog_root(CAT_SYS_CLOG).
 * ================================================================ */

/* CLOG page chain cache: maps chain index → page number.
 * Eliminates O(N) linked-list walk on every CLOG lookup. */
#define CLOG_CHAIN_CACHE_SIZE 1024
static uint32_t g_clog_chain[CLOG_CHAIN_CACHE_SIZE];
static int      g_clog_chain_count = 0;

/*
 * clog_get_page — locate (or allocate) the CLOG page that holds
 * the status bits for the given XID.
 * Uses cached chain to avoid re-walking the linked list.
 * Caller must hold g_clog_lock.
 */
static uint32_t clog_get_page(uint32_t xid)
{
    uint32_t page_idx = xid / CLOG_XIDS_PER_PAGE;

    /* Fast path: return from cache */
    if (page_idx < (uint32_t)g_clog_chain_count && g_clog_chain[page_idx] != 0)
        return g_clog_chain[page_idx];

    uint32_t root = pgm_get_catalog_root(CAT_SYS_CLOG);

    /* Allocate root page on first access */
    if (root == 0) {
        root = pgm_alloc_page(PAGE_CLOG);
        if (root == 0) return 0;

        char buf[EVO_PAGE_SIZE];
        pgm_read_page(root, buf);
        memset(buf + PAGE_HEADER_SIZE, 0, PAGE_USABLE);
        PageHeader *ph = (PageHeader *)buf;
        ph->next_page = 0;
        pgm_write_page(root, buf);

        pgm_set_catalog_root(CAT_SYS_CLOG, root);
    }

    /* Walk chain to the page_idx-th CLOG page */
    uint32_t cur = root;
    char buf[EVO_PAGE_SIZE];

    for (uint32_t i = 0; i < page_idx; i++) {
        pgm_read_page(cur, buf);
        PageHeader *ph = (PageHeader *)buf;

        if (ph->next_page == 0) {
            /* Allocate a new CLOG page and chain it */
            uint32_t new_page = pgm_alloc_page(PAGE_CLOG);
            if (new_page == 0) return 0;

            char new_buf[EVO_PAGE_SIZE];
            pgm_read_page(new_page, new_buf);
            memset(new_buf + PAGE_HEADER_SIZE, 0, PAGE_USABLE);
            PageHeader *new_ph = (PageHeader *)new_buf;
            new_ph->next_page = 0;
            pgm_write_page(new_page, new_buf);

            /* Chain from current page */
            ph->next_page = new_page;
            pgm_write_page(cur, buf);

            cur = new_page;
        } else {
            cur = ph->next_page;
        }
    }

    /* Cache the result */
    if (page_idx < CLOG_CHAIN_CACHE_SIZE) {
        g_clog_chain[page_idx] = cur;
        if ((int)(page_idx + 1) > g_clog_chain_count)
            g_clog_chain_count = (int)(page_idx + 1);
    }

    return cur;
}

/*
 * clog_set_status — write the 2-bit status for a single XID.
 *
 * Bit layout within a byte (LSB first):
 *   bits [1:0] = XID at offset 0
 *   bits [3:2] = XID at offset 1
 *   bits [5:4] = XID at offset 2
 *   bits [7:6] = XID at offset 3
 */
static void clog_set_status(uint32_t xid, int status)
{
    if (xid == 0) return;

    pthread_mutex_lock(&g_clog_lock);

    uint32_t page_no = clog_get_page(xid);
    if (page_no == 0) {
        pthread_mutex_unlock(&g_clog_lock);
        return;
    }

    uint32_t offset_in_page = xid % CLOG_XIDS_PER_PAGE;
    uint32_t byte_off       = PAGE_HEADER_SIZE + offset_in_page / CLOG_XIDS_PER_BYTE;
    int      bit_off        = (offset_in_page % CLOG_XIDS_PER_BYTE) * CLOG_BITS_PER_XID;

    char buf[EVO_PAGE_SIZE];
    pgm_read_page(page_no, buf);

    uint8_t *byte_ptr = (uint8_t *)&buf[byte_off];
    *byte_ptr &= ~(0x03 << bit_off);              /* clear 2 bits */
    *byte_ptr |= ((uint8_t)(status & 0x03)) << bit_off;  /* set new status */

    pgm_write_page(page_no, buf);

    pthread_mutex_unlock(&g_clog_lock);
}

/*
 * clog_get_status — read the 2-bit status for a single XID.
 *
 * XID 0 is treated as committed (pre-MVCC sentinel).
 */
static int clog_get_status(uint32_t xid)
{
    if (xid == 0) return CLOG_COMMITTED;

    pthread_mutex_lock(&g_clog_lock);

    uint32_t page_no = clog_get_page(xid);
    if (page_no == 0) {
        pthread_mutex_unlock(&g_clog_lock);
        return CLOG_IN_PROGRESS;
    }

    uint32_t offset_in_page = xid % CLOG_XIDS_PER_PAGE;
    uint32_t byte_off       = PAGE_HEADER_SIZE + offset_in_page / CLOG_XIDS_PER_BYTE;
    int      bit_off        = (offset_in_page % CLOG_XIDS_PER_BYTE) * CLOG_BITS_PER_XID;

    char buf[EVO_PAGE_SIZE];
    pgm_read_page(page_no, buf);

    uint8_t byte_val = (uint8_t)buf[byte_off];
    int status = (byte_val >> bit_off) & 0x03;

    pthread_mutex_unlock(&g_clog_lock);
    return status;
}

/* ---- Public CLOG API ---- */

void clog_init(void)
{
    pthread_mutex_lock(&g_clog_lock);

    uint32_t root = pgm_get_catalog_root(CAT_SYS_CLOG);
    if (root == 0) {
        root = pgm_alloc_page(PAGE_CLOG);
        if (root != 0) {
            char buf[EVO_PAGE_SIZE];
            pgm_read_page(root, buf);
            memset(buf + PAGE_HEADER_SIZE, 0, PAGE_USABLE);
            PageHeader *ph = (PageHeader *)buf;
            ph->next_page = 0;
            pgm_write_page(root, buf);
            pgm_set_catalog_root(CAT_SYS_CLOG, root);
        }
    }

    pthread_mutex_unlock(&g_clog_lock);
}

void clog_set_committed(uint32_t xid) { clog_set_status(xid, CLOG_COMMITTED); }

void clog_set_committed_csn(uint32_t xid, uint32_t csn)
{
    clog_set_status(xid, CLOG_COMMITTED);

    /* Task 209 — capture wall-clock alongside CSN so AS OF can decide
     * whether the requested XID still falls within the retention
     * window. Non-fatal if time() returns -1 — the retention check
     * just treats commit_ts==0 as "unknown". */
    int64_t ts = (int64_t)time(NULL);

    pthread_mutex_lock(&g_csn_lock);
    g_csn_cache[xid % CSN_CACHE_SIZE].xid = xid;
    g_csn_cache[xid % CSN_CACHE_SIZE].csn = csn;
    g_csn_cache[xid % CSN_CACHE_SIZE].commit_ts = ts;
    if (csn > g_last_committed_csn)
        g_last_committed_csn = csn;
    pthread_mutex_unlock(&g_csn_lock);
}

/* Task 209 — return the commit wall-clock for an XID if the ring still
 * holds the slot for it; 0 if evicted or never recorded. Used by the
 * AS OF retention bound check. */
int64_t clog_get_commit_ts(uint32_t xid)
{
    if (xid == 0) return 0;
    pthread_mutex_lock(&g_csn_lock);
    int64_t ts = 0;
    if (g_csn_cache[xid % CSN_CACHE_SIZE].xid == xid)
        ts = g_csn_cache[xid % CSN_CACHE_SIZE].commit_ts;
    pthread_mutex_unlock(&g_csn_lock);
    return ts;
}

uint32_t clog_get_csn(uint32_t xid)
{
    if (xid == 0) return 0;

    pthread_mutex_lock(&g_csn_lock);
    uint32_t csn = 0;
    if (g_csn_cache[xid % CSN_CACHE_SIZE].xid == xid)
        csn = g_csn_cache[xid % CSN_CACHE_SIZE].csn;
    pthread_mutex_unlock(&g_csn_lock);

    return csn;
}

void clog_set_aborted(uint32_t xid)   { clog_set_status(xid, CLOG_ABORTED);   }

int clog_is_committed(uint32_t xid)   { return clog_get_status(xid) == CLOG_COMMITTED;   }
int clog_is_aborted(uint32_t xid)     { return clog_get_status(xid) == CLOG_ABORTED;     }
int clog_is_in_progress(uint32_t xid) { return clog_get_status(xid) == CLOG_IN_PROGRESS; }

/* ================================================================
 *  Tuple visibility predicate
 *
 *  Determines whether a heap tuple is visible to the given snapshot.
 *
 *  Pre-MVCC tuples (no MVCC flag in the tuple header) are
 *  unconditionally visible for backward compatibility.
 *
 *  Algorithm (PostgreSQL-style):
 *
 *  1. If xmin == my_xid → our own insert:
 *       visible unless we also deleted it (xmax == my_xid).
 *
 *  2. xmin must satisfy ALL of:
 *       - committed in CLOG
 *       - < snapshot xmax (assigned before snapshot)
 *       - not in snapshot active list (was finished at snapshot time)
 *
 *  3. If xmax == 0 → not deleted → visible.
 *
 *  4. If xmax == my_xid → we deleted it → not visible.
 *
 *  5. xmax committed AND visible in snapshot → tuple is dead.
 *     Otherwise → tuple is still visible.
 * ================================================================ */

static int xid_in_snapshot(uint32_t xid, const Snapshot *snap)
{
    for (int i = 0; i < snap->nactive; i++) {
        if (snap->active_xids[i] == xid)
            return 1;
    }
    return 0;
}

int mvcc_is_visible(const char *tuple_data, int tuple_len, const Snapshot *snap)
{
    /*
     * Pre-MVCC tuples: if the tuple doesn't carry the MVCC flag
     * (or is too short to have MVCC fields), treat as always visible.
     * tup_has_mvcc() checks TUPLE_FLAG_MVCC in the tuple header.
     */
    if (tuple_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE)
        return 1;
    uint8_t flags = (uint8_t)tuple_data[TUPLE_PREFIX_SIZE + 3];
    if (!(flags & TUPLE_FLAG_MVCC))
        return 1;

    uint32_t xmin, xmax;
    memcpy(&xmin, tuple_data + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE, 4);
    memcpy(&xmax, tuple_data + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE + 4, 4);

    /* ---- Frozen xmin fast-path ----
     * XID_FROZEN means "committed long ago" — always visible for xmin,
     * skip all CLOG/CSN checks. Only need to check xmax. */
    if (xmin == XID_FROZEN)
        goto xmin_visible;

    /* ---- Check inserting transaction (xmin) ---- */

    if (xmin == snap->my_xid) {
        if (xmax == 0)              return 1;
        if (xmax == snap->my_xid)   return 0;
        return 1;
    }

    /* Hint bit fast-path: if XMIN_COMMITTED flag is already set in the
     * tuple header, skip CLOG + CSN lookup entirely (~15μs savings). */
    if (flags & TUPLE_FLAG_XMIN_COMMITTED) {
        /* xmin is known committed — just check snapshot range */
        if (xmin >= snap->xmax)        return 0;
        if (xid_in_snapshot(xmin, snap)) return 0;
        goto xmin_visible;
    }
    if (flags & TUPLE_FLAG_XMIN_ABORTED)
        return 0;  /* known aborted */

    /* CSN fast-path */
    {
        uint32_t xmin_csn = clog_get_csn(xmin);
        if (xmin_csn > 0 && snap->snapshot_csn > 0 &&
            xmin_csn <= snap->snapshot_csn) {
            goto xmin_visible;
        }
    }

    /* Slow path: CLOG page lookup */
    if (!clog_is_committed(xmin))
        return 0;

    if (xmin >= snap->xmax)
        return 0;

    if (xid_in_snapshot(xmin, snap))
        return 0;

xmin_visible:

    /* ---- Check deleting transaction (xmax) ---- */

    if (xmax == 0)
        return 1;   /* not deleted */

    if (xmax == snap->my_xid)
        return 0;   /* we deleted it */

    /* If deleter has not committed, tuple is still visible */
    if (!clog_is_committed(xmax))
        return 1;

    /* If deleter committed after our snapshot, still visible */
    if (xmax >= snap->xmax)
        return 1;

    /* If deleter was in-progress at snapshot time, still visible */
    if (xid_in_snapshot(xmax, snap))
        return 1;

    /* Deleter committed and visible in our snapshot — tuple is dead */
    return 0;
}

/* ================================================================
 *  Hint bits — set XMIN_COMMITTED on heap tuple to skip future CLOG
 * ================================================================ */
void mvcc_set_hint_committed(uint32_t page_no, uint16_t slot_idx)
{
    char page_buf[EVO_PAGE_SIZE];
    if (pgm_read_page(page_no, page_buf) < 0) return;

    /* Locate the slot entry to find the record offset */
    uint16_t num_slots;
    memcpy(&num_slots, page_buf + PAGE_HEADER_SIZE, 2);
    if (slot_idx >= num_slots) return;

    uint16_t rec_offset;
    memcpy(&rec_offset, page_buf + PAGE_HEADER_SIZE + 6 + slot_idx * 4, 2);
    if (rec_offset == 0) return;  /* deleted slot */

    /* Check magic + MVCC flag */
    char *rec = page_buf + rec_offset;
    if ((unsigned char)rec[0] != TUPLE_MAGIC) return;
    uint8_t *flags = (uint8_t *)&rec[TUPLE_PREFIX_SIZE + 3];
    if (!(*flags & TUPLE_FLAG_MVCC)) return;
    if (*flags & TUPLE_FLAG_XMIN_COMMITTED) return;  /* already set */

    *flags |= TUPLE_FLAG_XMIN_COMMITTED;
    pgm_write_page(page_no, page_buf);
}

/* ================================================================
 *  Lifecycle
 * ================================================================ */

void mvcc_init(void)
{
    /* Clear active transaction array */
    memset(g_active_txs, 0, sizeof(g_active_txs));

    /*
     * g_highest_xid starts at 0 and gets updated as XIDs are assigned
     * via mvcc_assign_xid().  pgm_next_xid() in page_mgr.c is the
     * authoritative source — it reads/persists from FileHeader.next_xid.
     */
    g_highest_xid = 0;

    /* Initialize g_highest_xid from persistent XID counter so snapshots
     * taken before the first DML have correct xmax after restart.
     * Also record g_startup_xid for crash recovery: any IN_PROGRESS XID
     * below this value is from a previous (crashed) session. */
    {
        uint32_t current = pgm_next_xid();  /* returns next available, increments counter */
        g_highest_xid = current;  /* current is now the highest assigned */
        g_startup_xid = current;  /* crash recovery boundary */
    }

    /* Clear CSN cache and CLOG chain cache */
    memset(g_csn_cache, 0, sizeof(g_csn_cache));
    g_last_committed_csn = 0;
    memset(g_clog_chain, 0, sizeof(g_clog_chain));
    g_clog_chain_count = 0;

    /* Ensure CLOG root page exists */
    clog_init();
}

/* ================================================================
 *  Crash recovery helpers
 * ================================================================ */

uint32_t mvcc_get_startup_xid(void)
{
    return g_startup_xid;
}

int mvcc_xid_is_crashed(uint32_t xid)
{
    if (xid == 0 || xid == XID_FROZEN) return 0;
    if (xid >= g_startup_xid) return 0;  /* assigned this session */
    return clog_is_in_progress(xid);
}

void mvcc_shutdown(void)
{
    /*
     * XID persistence is handled by pgm_next_xid() which writes to
     * the FileHeader on every call.  Nothing extra needed here.
     * CLOG pages are flushed as part of the normal buffer pool flush.
     */
}
