/*
 * page_mgr.c — Unified Page-Based Storage Manager for EvoSQL
 *
 * Manages a single global binary file with 4KB pages.
 * All I/O goes through the buffer pool (bp_read/bp_write).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <pthread.h>

#include "page_mgr.h"
#include "buffer_pool.h"
#include "page_crypt.h"

/* ----------------------------------------------------------------
 *  Global state (singleton — one global file per server)
 * ---------------------------------------------------------------- */
static int           g_global_fd   = -1;
static FileHeader    g_header;
static pthread_mutex_t g_pgm_lock = PTHREAD_MUTEX_INITIALIZER;
static int           g_header_dirty = 0;

/* ----------------------------------------------------------------
 *  Internal helpers
 * ---------------------------------------------------------------- */
static int read_header(void)
{
    if (bp_read(g_global_fd, &g_header, sizeof(FileHeader), 0) < 0)
        return -1;
    return 0;
}

static int write_header(void)
{
    if (bp_write(g_global_fd, &g_header, sizeof(FileHeader), 0) < 0)
        return -1;
    g_header_dirty = 0;
    return 0;
}

static void mark_header_dirty(void)
{
    g_header_dirty = 1;
}

static int flush_header_if_dirty(void)
{
    if (g_header_dirty)
        return write_header();
    return 0;
}

/* Zero-fill pages from start_page to start_page + count - 1,
 * chaining them into the free list. */
static int chain_free_pages(uint32_t start_page, uint32_t count)
{
    char zero_page[EVO_PAGE_SIZE];
    memset(zero_page, 0, EVO_PAGE_SIZE);

    for (uint32_t i = 0; i < count; i++) {
        uint32_t pno = start_page + i;
        PageHeader *ph = (PageHeader *)zero_page;

        ph->page_type  = PAGE_FREE;
        ph->flags      = 0;
        ph->free_space = PAGE_USABLE;
        ph->page_id    = pno;
        ph->prev_page  = 0;

        /* Chain: each page points to the next one, last points to old head */
        if (i + 1 < count)
            ph->next_page = pno + 1;
        else
            ph->next_page = g_header.free_list_head;

        off_t offset = (off_t)pno * EVO_PAGE_SIZE;
        if (bp_write(g_global_fd, zero_page, EVO_PAGE_SIZE, offset) < 0)
            return -1;
    }

    g_header.free_list_head = start_page;
    mark_header_dirty();
    return 0;
}

/* Grow the file by at least min_pages new pages. */
static int grow_file(uint32_t min_pages)
{
    uint32_t current = g_header.total_pages;
    /* Grow by 50% of current, minimum min_pages, minimum PGM_GROW_MIN */
    uint32_t grow = current / 2;
    if (grow < min_pages) grow = min_pages;
    if (grow < PGM_GROW_MIN) grow = PGM_GROW_MIN;

    uint32_t new_total = current + grow;

    /* Extend the file */
    off_t new_size = (off_t)new_total * EVO_PAGE_SIZE;
    if (ftruncate(g_global_fd, new_size) < 0)
        return -1;

    /* Chain new pages into free list */
    if (chain_free_pages(current, grow) < 0)
        return -1;

    g_header.total_pages = new_total;
    mark_header_dirty();
    return 0;
}

/* Create a new global file with initial pages. */
static int create_new_file(const char *filepath)
{
    g_global_fd = open(filepath, O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (g_global_fd < 0)
        return -1;

    /* Initialize file header */
    memset(&g_header, 0, sizeof(FileHeader));
    g_header.magic       = EVO_MAGIC;
    g_header.version     = EVO_FILE_VERSION;
    g_header.page_size   = EVO_PAGE_SIZE;
    g_header.total_pages = PGM_INITIAL_PAGES;
    g_header.free_list_head = 0;  /* will be set by chain_free_pages */
    g_header.next_table_id  = 1;
    g_header.next_schema_id = 1;
    g_header.next_db_id     = 1;
    g_header.next_xid       = 2;  /* XID 1 = XID_FROZEN (reserved) */
    g_header.next_csn       = 1;

    /* Extend file to initial size */
    off_t file_size = (off_t)PGM_INITIAL_PAGES * EVO_PAGE_SIZE;
    if (ftruncate(g_global_fd, file_size) < 0) {
        close(g_global_fd);
        g_global_fd = -1;
        return -1;
    }

    /* Try to initialize encryption for new database */
    {
        const char *enc_key = getenv("EVOSQL_ENCRYPTION_KEY");
        if (enc_key && enc_key[0]) {
            if (pcrypt_init_new(g_header.encryption_salt,
                                g_header.wrapped_dek,
                                g_header.page_iv_prefix) == 0) {
                g_header.encryption_enabled = 1;
            } else {
                fprintf(stderr, "page_mgr: failed to initialize encryption\n");
                close(g_global_fd);
                g_global_fd = -1;
                return -1;
            }
        }
    }

    /* Write header to page 0 */
    if (bp_write(g_global_fd, &g_header, sizeof(FileHeader), 0) < 0) {
        close(g_global_fd);
        g_global_fd = -1;
        return -1;
    }

    /* Chain pages 1..N-1 into free list (page 0 is the header) */
    if (chain_free_pages(1, PGM_INITIAL_PAGES - 1) < 0) {
        close(g_global_fd);
        g_global_fd = -1;
        return -1;
    }

    /* Write updated header (free_list_head now points to page 1) */
    if (write_header() < 0) {
        close(g_global_fd);
        g_global_fd = -1;
        return -1;
    }

    return 0;
}

/* ----------------------------------------------------------------
 *  Public API
 * ---------------------------------------------------------------- */

int pgm_init(const char *filepath)
{
    pthread_mutex_lock(&g_pgm_lock);

    if (g_global_fd >= 0) {
        /* Already initialized */
        pthread_mutex_unlock(&g_pgm_lock);
        return 0;
    }

    /* Try to open existing file */
    g_global_fd = open(filepath, O_RDWR, 0644);
    if (g_global_fd >= 0) {
        /* Phase 1: Read header to get TDE state */
        int header_ok = 0;
        if (read_header() == 0 && g_header.magic == EVO_MAGIC)
            header_ok = 1;

        /* Phase 2: Initialize TDE if header is valid and encrypted */
        if (header_ok) {
            const char *enc_key = getenv("EVOSQL_ENCRYPTION_KEY");
            int has_key = (enc_key && enc_key[0]);
            if (g_header.encryption_enabled && has_key)
                pcrypt_init_existing(g_header.encryption_salt,
                                     g_header.wrapped_dek,
                                     g_header.page_iv_prefix);
        }

        /* Phase 3: WAL recovery — two-pass approach for TDE compatibility.
         * Pass 1 (inside wal_init): Replay page 0 (FileHeader, plaintext)
         * Then re-read header + re-init TDE from recovered data.
         * Pass 2 (wal_replay_remaining): Replay data pages with TDE. */
        {
            extern int wal_init(int data_fd);
            extern int wal_replay_remaining(void);
            extern void bp_invalidate_fd(int fd);
            int pass1 = wal_init(g_global_fd);
            if (pass1 > 0) {
                /* Page 0 was recovered — re-read header */
                bp_invalidate_fd(g_global_fd);
                pread(g_global_fd, &g_header, sizeof(FileHeader), 0);
                header_ok = (g_header.magic == EVO_MAGIC) ? 1 : 0;
                /* Re-init TDE from recovered header if encrypted */
                if (header_ok && g_header.encryption_enabled) {
                    const char *enc_key = getenv("EVOSQL_ENCRYPTION_KEY");
                    if (enc_key && enc_key[0] && !pcrypt_is_enabled())
                        pcrypt_init_existing(g_header.encryption_salt,
                                             g_header.wrapped_dek,
                                             g_header.page_iv_prefix);
                }
            }
            /* Pass 2: replay data pages (with TDE now active) */
            int pass2 = wal_replay_remaining();
            if (pass1 > 0 || pass2 > 0) {
                fprintf(stderr, "[WAL] Crash recovery: %d page(s) restored\n",
                        pass1 + pass2);
                bp_invalidate_fd(g_global_fd);
                pread(g_global_fd, &g_header, sizeof(FileHeader), 0);
                header_ok = (g_header.magic == EVO_MAGIC) ? 1 : 0;
            }
        }

        /* Phase 4: Validate header */
        if (!header_ok) {
            if (g_header.magic != EVO_MAGIC)
                fprintf(stderr, "page_mgr: invalid magic number 0x%08X\n",
                        g_header.magic);
            close(g_global_fd);
            g_global_fd = -1;
            pthread_mutex_unlock(&g_pgm_lock);
            return -1;
        }
        if (g_header.page_size != EVO_PAGE_SIZE) {
            fprintf(stderr, "page_mgr: incompatible page size %u\n",
                    g_header.page_size);
            close(g_global_fd);
            g_global_fd = -1;
            pthread_mutex_unlock(&g_pgm_lock);
            return -1;
        }

        /* --- Encryption state machine --- */
        {
            const char *enc_key = getenv("EVOSQL_ENCRYPTION_KEY");
            int has_key = (enc_key && enc_key[0]);

            if (g_header.encryption_enabled && has_key) {
                /* Encrypted DB + key provided → unlock
                 * (may already be init'd from Phase 2 above — pcrypt handles this) */
                if (!pcrypt_is_enabled() &&
                    pcrypt_init_existing(g_header.encryption_salt,
                                         g_header.wrapped_dek,
                                         g_header.page_iv_prefix) < 0) {
                    fprintf(stderr,
                        "FATAL: Wrong encryption key for this database.\n"
                        "The EVOSQL_ENCRYPTION_KEY does not match.\n");
                    close(g_global_fd);
                    g_global_fd = -1;
                    pthread_mutex_unlock(&g_pgm_lock);
                    return -1;
                }
            } else if (g_header.encryption_enabled && !has_key) {
                /* Encrypted DB + no key → cannot open */
                fprintf(stderr,
                    "FATAL: Database is encrypted but EVOSQL_ENCRYPTION_KEY "
                    "is not set.\nSet the environment variable to unlock.\n");
                close(g_global_fd);
                g_global_fd = -1;
                pthread_mutex_unlock(&g_pgm_lock);
                return -1;
            } else if (!g_header.encryption_enabled && has_key) {
                /* Unencrypted DB + key provided → warn and continue */
                fprintf(stderr,
                    "WARNING: EVOSQL_ENCRYPTION_KEY is set but database "
                    "is not encrypted.\nEncryption is only applied to new "
                    "databases. Continuing without encryption.\n");
            }
            /* else: no encryption, no key → normal operation */
        }

        g_header_dirty = 0;
        pthread_mutex_unlock(&g_pgm_lock);
        return 0;
    }

    /* File doesn't exist — create new */
    if (errno == ENOENT) {
        int ret = create_new_file(filepath);
        if (ret == 0) {
            /* Initialize WAL for new database */
            extern int wal_init(int data_fd);
            wal_init(g_global_fd);
        }
        pthread_mutex_unlock(&g_pgm_lock);
        return ret;
    }

    /* Other error */
    pthread_mutex_unlock(&g_pgm_lock);
    return -1;
}

void pgm_shutdown(void)
{
    pthread_mutex_lock(&g_pgm_lock);

    if (g_global_fd < 0) {
        pthread_mutex_unlock(&g_pgm_lock);
        return;
    }

    flush_header_if_dirty();
    bp_flush_all();
    pcrypt_shutdown();

    close(g_global_fd);
    g_global_fd = -1;

    pthread_mutex_unlock(&g_pgm_lock);
}

uint32_t pgm_alloc_page(uint8_t page_type)
{
    pthread_mutex_lock(&g_pgm_lock);

    /* If free list is empty, grow the file */
    if (g_header.free_list_head == 0) {
        if (grow_file(PGM_GROW_MIN) < 0) {
            pthread_mutex_unlock(&g_pgm_lock);
            return 0;
        }
    }

    /* Pop from free list */
    uint32_t page_no = g_header.free_list_head;
    char page_buf[EVO_PAGE_SIZE];

    off_t offset = (off_t)page_no * EVO_PAGE_SIZE;
    if (bp_read(g_global_fd, page_buf, EVO_PAGE_SIZE, offset) < 0) {
        pthread_mutex_unlock(&g_pgm_lock);
        return 0;
    }

    PageHeader *ph = (PageHeader *)page_buf;
    g_header.free_list_head = ph->next_page;

    /* Initialize the page with requested type */
    memset(page_buf, 0, EVO_PAGE_SIZE);
    ph = (PageHeader *)page_buf;
    ph->page_type  = page_type;
    ph->flags      = 0;
    ph->free_space = PAGE_USABLE;
    ph->page_id    = page_no;
    ph->next_page  = 0;
    ph->prev_page  = 0;

    if (bp_write(g_global_fd, page_buf, EVO_PAGE_SIZE, offset) < 0) {
        pthread_mutex_unlock(&g_pgm_lock);
        return 0;
    }

    mark_header_dirty();
    flush_header_if_dirty();

    pthread_mutex_unlock(&g_pgm_lock);
    return page_no;
}

void pgm_free_page(uint32_t page_no)
{
    if (page_no == 0) return;  /* never free page 0 (header) */

    pthread_mutex_lock(&g_pgm_lock);

    char page_buf[EVO_PAGE_SIZE];
    memset(page_buf, 0, EVO_PAGE_SIZE);

    PageHeader *ph = (PageHeader *)page_buf;
    ph->page_type  = PAGE_FREE;
    ph->flags      = 0;
    ph->free_space = PAGE_USABLE;
    ph->page_id    = page_no;
    ph->next_page  = g_header.free_list_head;
    ph->prev_page  = 0;

    off_t offset = (off_t)page_no * EVO_PAGE_SIZE;
    bp_write(g_global_fd, page_buf, EVO_PAGE_SIZE, offset);

    g_header.free_list_head = page_no;
    mark_header_dirty();
    flush_header_if_dirty();

    pthread_mutex_unlock(&g_pgm_lock);
}

int pgm_read_page(uint32_t page_no, void *buf)
{
    if (g_global_fd < 0) return -1;
    off_t offset = (off_t)page_no * EVO_PAGE_SIZE;
    return bp_read(g_global_fd, buf, EVO_PAGE_SIZE, offset);
}

int pgm_write_page(uint32_t page_no, const void *buf)
{
    if (g_global_fd < 0) return -1;
    off_t offset = (off_t)page_no * EVO_PAGE_SIZE;
    return bp_write(g_global_fd, buf, EVO_PAGE_SIZE, offset);
}

void pgm_flush(void)
{
    pthread_mutex_lock(&g_pgm_lock);
    flush_header_if_dirty();
    bp_flush_all();
    pthread_mutex_unlock(&g_pgm_lock);
}

uint32_t pgm_get_catalog_root(CatalogID id)
{
    if (id < 0 || id >= CATALOG_ROOT_SLOTS) return 0;
    return g_header.catalog_roots[id];
}

void pgm_set_catalog_root(CatalogID id, uint32_t page_no)
{
    if (id < 0 || id >= CATALOG_ROOT_SLOTS) return;

    pthread_mutex_lock(&g_pgm_lock);
    g_header.catalog_roots[id] = page_no;
    mark_header_dirty();
    flush_header_if_dirty();
    pthread_mutex_unlock(&g_pgm_lock);
}

uint32_t pgm_next_id(int id_type)
{
    uint32_t val;

    pthread_mutex_lock(&g_pgm_lock);

    switch (id_type) {
        case 0: val = g_header.next_table_id++;  break;
        case 1: val = g_header.next_schema_id++; break;
        case 2: val = g_header.next_db_id++;     break;
        default:
            pthread_mutex_unlock(&g_pgm_lock);
            return 0;
    }

    mark_header_dirty();
    flush_header_if_dirty();

    pthread_mutex_unlock(&g_pgm_lock);
    return val;
}

void pgm_reload_header(void)
{
    pthread_mutex_lock(&g_pgm_lock);
    read_header();
    g_header_dirty = 0;
    pthread_mutex_unlock(&g_pgm_lock);
}

uint32_t pgm_next_xid(void)
{
    uint32_t val;

    pthread_mutex_lock(&g_pgm_lock);
    val = g_header.next_xid++;
    mark_header_dirty();
    /* No flush here — deferred to pgm_flush()/pgm_shutdown() for performance.
     * On crash, next_xid may go backward, but unfinished XIDs show as
     * IN_PROGRESS in CLOG and are treated as aborted. */

    /* XID wraparound warning — log once when threshold is crossed */
    if (val == 2000000000u) {
        fprintf(stderr, "WARNING: transaction ID %u approaching wraparound limit. "
                "Run RECLAIM TABLE on all tables to freeze old XIDs.\n", val);
    }
    pthread_mutex_unlock(&g_pgm_lock);

    return val;
}

uint32_t pgm_peek_xid(void)
{
    uint32_t val;
    pthread_mutex_lock(&g_pgm_lock);
    val = g_header.next_xid;
    pthread_mutex_unlock(&g_pgm_lock);
    return val;
}

uint32_t pgm_next_csn(void)
{
    uint32_t val;

    pthread_mutex_lock(&g_pgm_lock);
    val = g_header.next_csn++;
    mark_header_dirty();
    /* Deferred flush — same rationale as pgm_next_xid(). */
    pthread_mutex_unlock(&g_pgm_lock);

    return val;
}

int pgm_get_fd(void)
{
    return g_global_fd;
}
