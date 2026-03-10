/*
 * slotted.h — Slotted Page Record Manager for EvoSQL
 *
 * Manages variable-length records within a 4KB page.
 * Layout:
 *   [PageHeader 16B][SlottedHeader 6B][Slot Directory ↓]
 *   [FREE SPACE]
 *   [Records packed from end of page ↑]
 *
 * Records are identified by (page_no, slot_index) = RowID.
 */
#ifndef SLOTTED_H
#define SLOTTED_H

#include <stdint.h>
#include <stddef.h>
#include "page_mgr.h"

/* ----------------------------------------------------------------
 *  Slotted Page Header — follows the common PageHeader
 * ---------------------------------------------------------------- */
typedef struct {
    uint16_t num_slots;     /* number of slot entries (including deleted) */
    uint16_t free_offset;   /* end of slot directory = start of free space */
    uint16_t free_end;      /* start of record area = end of free space */
} SlottedHeader;

#define SLOTTED_HEADER_SIZE 6

/* ----------------------------------------------------------------
 *  Slot Entry — 4 bytes each, grows downward from after SlottedHeader
 * ---------------------------------------------------------------- */
typedef struct {
    uint16_t offset;   /* offset within page (0 = deleted/empty slot) */
    uint16_t length;   /* record length in bytes */
} SlotEntry;

#define SLOT_ENTRY_SIZE 4

/* ----------------------------------------------------------------
 *  RowID — uniquely identifies a record
 * ---------------------------------------------------------------- */
#ifndef ROWID_DEFINED
#define ROWID_DEFINED
typedef struct {
    uint32_t page_no;
    uint16_t slot_idx;
} RowID;
#endif

#define ROWID_SIZE 6

/* Maximum record size that fits in a single page */
#define SLOT_MAX_RECORD  (EVO_PAGE_SIZE - PAGE_HEADER_SIZE - SLOTTED_HEADER_SIZE - SLOT_ENTRY_SIZE)

/* ----------------------------------------------------------------
 *  Slotted Page API
 * ---------------------------------------------------------------- */

/* Initialize a page buffer as an empty slotted data page.
 * The page buffer must be EVO_PAGE_SIZE bytes.
 * page_no is written into the PageHeader for self-check. */
void slot_page_init(void *page_buf, uint32_t page_no);

/* Insert a record into the page. Returns slot index on success, -1 if no room.
 * Does NOT write the page to disk — caller must call pgm_write_page(). */
int  slot_insert(void *page_buf, const void *record, uint16_t rec_len);

/* Read a record from the page. Copies into out_buf (max out_size bytes).
 * Returns actual record length, or -1 if slot is empty/deleted. */
int  slot_read(const void *page_buf, uint16_t slot_idx,
               void *out_buf, uint16_t out_size);

/* Delete a record by slot index. Marks slot as empty.
 * Returns 0 on success, -1 on error. */
int  slot_delete(void *page_buf, uint16_t slot_idx);

/* Update a record in-place if new data fits, otherwise returns -1
 * (caller should delete + insert elsewhere).
 * Returns 0 on success, -1 if record doesn't fit. */
int  slot_update(void *page_buf, uint16_t slot_idx,
                 const void *new_record, uint16_t new_len);

/* Get the number of free bytes available for a new record + slot entry. */
uint16_t slot_free_space(const void *page_buf);

/* Get the number of active (non-deleted) records in the page. */
uint16_t slot_active_count(const void *page_buf);

/* Compact the page: defragment records to reclaim space from deleted slots.
 * Preserves slot indices (does not renumber). */
void slot_compact(void *page_buf);

#endif /* SLOTTED_H */
