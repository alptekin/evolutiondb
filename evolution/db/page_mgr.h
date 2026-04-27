/*
 * page_mgr.h — Unified Page-Based Storage Manager for EvoSQL
 *
 * Manages a single global binary file containing all databases,
 * tables, indexes, and system catalog data in 4KB pages.
 * All I/O goes through the existing buffer pool (buffer_pool.h).
 */
#ifndef PAGE_MGR_H
#define PAGE_MGR_H

#include <stdint.h>
#include <stddef.h>

/* ----------------------------------------------------------------
 *  Constants
 * ---------------------------------------------------------------- */
#define EVO_MAGIC        0x45564F44   /* "EVOD" */
/* File format version. Bumped when FileHeader layout changes — each bump
 * invalidates pre-existing evosql.db files (pgm_init rejects mismatches).
 *   1 — initial layout
 *   2 — Task 93: CAT_SYS_POLICIES slot added, catalog_roots[] widens to 19
 *   3 — Task 210: CAT_SYS_SUBSCRIPTIONS slot, catalog_roots[] widens to 22
 *   4 — Task 215: CAT_SYS_SCHEDULED_JOBS slot, catalog_roots[] widens to 23
 *   5 — Task 222: CAT_SYS_MESSAGE_LOGS slot, catalog_roots[] widens to 24
 *   6 — Task 223: CAT_SYS_DOCUMENT_STORES slot, catalog_roots[] widens to 25
 *   7 — Task 224: CAT_SYS_GRAPH_STORES slot, catalog_roots[] widens to 26
 *   8 — Task 225: CAT_SYS_ENTITY_STORES slot, catalog_roots[] widens to 27
 */
#define EVO_FILE_VERSION 8
#define EVO_PAGE_SIZE    4096

#define PGM_INITIAL_PAGES  64   /* 256KB initial file size */
#define PGM_GROW_MIN       16   /* minimum growth in pages */

/* ----------------------------------------------------------------
 *  Page Types
 * ---------------------------------------------------------------- */
typedef enum {
    PAGE_FREE       = 0,
    PAGE_DATA       = 1,   /* slotted page for row storage */
    PAGE_BTREE_INT  = 2,   /* B+ tree internal node */
    PAGE_BTREE_LEAF = 3,   /* B+ tree leaf node */
    PAGE_OVERFLOW   = 4,   /* overflow for large records */
    PAGE_HASH_DIR   = 5,   /* hash index directory page */
    PAGE_HASH_BKT   = 6,   /* hash index bucket page */
    PAGE_CLOG       = 7,   /* MVCC commit log page */
    PAGE_VMAP       = 8    /* visibility map page */
} PageType;

/* ----------------------------------------------------------------
 *  Common Page Header — first 16 bytes of every page
 * ---------------------------------------------------------------- */
typedef struct {
    uint8_t  page_type;    /* PageType enum */
    uint8_t  flags;        /* reserved, must be 0 */
    uint16_t free_space;   /* bytes of free space on this page */
    uint32_t page_id;      /* this page's number (self-check) */
    uint32_t next_page;    /* free list chain or leaf chain */
    uint32_t prev_page;    /* B+ tree leaf backward pointer */
} PageHeader;

#define PAGE_HEADER_SIZE  16
#define PAGE_USABLE       (EVO_PAGE_SIZE - PAGE_HEADER_SIZE)  /* 4080 */

/* ----------------------------------------------------------------
 *  File Header — stored in Page 0
 * ---------------------------------------------------------------- */
#define CATALOG_ROOT_SLOTS 27   /* max system catalog B+ trees */

typedef enum {
    CAT_SYS_DATABASES  = 0,
    CAT_SYS_SCHEMAS    = 1,
    CAT_SYS_TABLES     = 2,
    CAT_SYS_COLUMNS    = 3,
    CAT_SYS_INDEXES    = 4,
    CAT_SYS_CONSTRAINTS = 5,
    CAT_SYS_USERS      = 6,
    CAT_SYS_GRANTS     = 7,
    CAT_SYS_TABLE_STATS = 8,
    CAT_SYS_CLOG        = 9,
    CAT_SYS_VMAP         = 10,
    CAT_SYS_SHARDS       = 11,
    CAT_SYS_VIEWS        = 12,
    CAT_SYS_PROCEDURES   = 13,
    CAT_SYS_TRIGGERS     = 14,
    CAT_SYS_SEQUENCES    = 15,
    CAT_SYS_INHERITANCE  = 16,   /* Task 92: child_table_id -> parent_table_id */
    CAT_SYS_POLICIES     = 17,   /* Task 93: RLS — table_id:policy_name -> PolicyDesc */
    CAT_SYS_CHECKPOINT_STORES = 18,  /* Task 204: name -> CheckpointStoreDesc */
    CAT_SYS_MEMORY_STORES     = 19,  /* Task 205: name -> MemoryStoreDesc */
    CAT_SYS_SUBSCRIPTIONS     = 20,  /* Task 210: name -> SubscriptionDesc */
    CAT_SYS_SCHEDULED_JOBS    = 21,  /* Task 215: name -> ScheduledJobDesc */
    CAT_SYS_MESSAGE_LOGS      = 22,  /* Task 222: name -> MessageLogDesc */
    CAT_SYS_DOCUMENT_STORES   = 23,  /* Task 223: name -> DocumentStoreDesc */
    CAT_SYS_GRAPH_STORES      = 24,  /* Task 224: name -> GraphStoreDesc */
    CAT_SYS_ENTITY_STORES     = 25,  /* Task 225: name -> EntityStoreDesc */
    CAT_MAX              = 26
} CatalogID;

typedef struct {
    uint32_t magic;                            /* EVO_MAGIC */
    uint16_t version;                          /* EVO_FILE_VERSION */
    uint16_t page_size;                        /* EVO_PAGE_SIZE (4096) */
    uint32_t total_pages;                      /* total pages in file */
    uint32_t free_list_head;                   /* first free page (0 = none) */
    uint32_t catalog_roots[CATALOG_ROOT_SLOTS];/* root pages for sys catalogs */
    uint32_t next_table_id;                    /* auto-increment for table IDs */
    uint32_t next_schema_id;                   /* auto-increment for schema IDs */
    uint32_t next_db_id;                       /* auto-increment for database IDs */
    uint32_t next_xid;                         /* MVCC: next transaction ID */
    uint32_t next_csn;                         /* MVCC: next commit sequence number */
    /* --- Transparent Data Encryption (TDE) fields --- */
    uint8_t  encryption_enabled;               /* 0=off, 1=AES-256 TDE active */
    uint8_t  encryption_salt[16];              /* PBKDF2 salt for MEK derivation */
    uint8_t  wrapped_dek[48];                  /* DEK encrypted with MEK (32 ct + 16 GCM tag) */
    uint8_t  page_iv_prefix[8];               /* fixed CTR IV prefix (never changes on rekey) */
    /* Size breakdown (must total exactly EVO_PAGE_SIZE = 4096):
     *   magic(4) + version(2) + page_size(2) + total_pages(4) + free_list_head(4) = 16
     *   catalog_roots[27] = 108        (Task 225 added CAT_SYS_ENTITY_STORES)
     *   next_table_id(4) + next_schema_id(4) + next_db_id(4) = 12
     *   next_xid(4) + next_csn(4) = 8
     *   encryption: enabled(1) + salt(16) + wrapped_dek(48) + iv_prefix(8) = 73
     *   TOTAL non-reserved = 16 + 108 + 12 + 8 + 73 = 217
     * reserved = 4096 - 217 = 3879 */
    uint8_t  reserved[EVO_PAGE_SIZE - 217];
} FileHeader;

/* Compile-time check: FileHeader must fit exactly in one page.
 * If this fails, the reserved[] size is wrong. */
_Static_assert(sizeof(FileHeader) == EVO_PAGE_SIZE,
               "FileHeader size must equal EVO_PAGE_SIZE (4096 bytes)");

/* ----------------------------------------------------------------
 *  Page Manager API
 * ---------------------------------------------------------------- */

/* Initialize the page manager. Opens or creates the global file.
 * Must be called once at server startup, AFTER bp_init(). */
int  pgm_init(const char *filepath);

/* Shut down: flush all dirty pages and close the file. */
void pgm_shutdown(void);

/* Allocate a new page of the given type. Returns page number.
 * Grows the file if the free list is empty. Returns 0 on error. */
uint32_t pgm_alloc_page(uint8_t page_type);

/* Free a page back to the free list. */
void pgm_free_page(uint32_t page_no);

/* Read a full page into buf (must be EVO_PAGE_SIZE bytes). */
int  pgm_read_page(uint32_t page_no, void *buf);

/* Write a full page from buf (must be EVO_PAGE_SIZE bytes). */
int  pgm_write_page(uint32_t page_no, const void *buf);

/* Flush all dirty pages to disk. */
void pgm_flush(void);

/* Get/set catalog root page numbers. */
uint32_t pgm_get_catalog_root(CatalogID id);
void     pgm_set_catalog_root(CatalogID id, uint32_t page_no);

/* Get/set auto-increment IDs. */
uint32_t pgm_next_id(int id_type); /* 0=table, 1=schema, 2=db */

/* Re-read FileHeader from disk (after WAL recovery invalidates buffer pool). */
void pgm_reload_header(void);

/* MVCC: atomically increment and return the next transaction ID. */
uint32_t pgm_next_xid(void);

/* MVCC: read the current next_xid without incrementing (for freeze age calc). */
uint32_t pgm_peek_xid(void);

/* MVCC: atomically increment and return the next commit sequence number. */
uint32_t pgm_next_csn(void);

/* Get the global file descriptor (for direct buffer pool access if needed). */
int  pgm_get_fd(void);

#endif /* PAGE_MGR_H */
