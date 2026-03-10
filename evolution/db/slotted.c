/*
 * slotted.c — Slotted Page Record Manager for EvoSQL
 *
 * Manages variable-length records within a 4KB page.
 * Layout:
 *   [PageHeader 16B][SlottedHeader 6B][Slot Directory ↓]
 *   [FREE SPACE]
 *   [Records packed from end of page ↑]
 */
#include <stdio.h>
#include <string.h>
#include "slotted.h"

/* ----------------------------------------------------------------
 *  Internal accessors
 * ---------------------------------------------------------------- */

static inline SlottedHeader *get_slotted_header(void *page_buf)
{
    return (SlottedHeader *)((char *)page_buf + PAGE_HEADER_SIZE);
}

static inline const SlottedHeader *get_slotted_header_const(const void *page_buf)
{
    return (const SlottedHeader *)((const char *)page_buf + PAGE_HEADER_SIZE);
}

static inline SlotEntry *get_slot(void *page_buf, uint16_t idx)
{
    char *base = (char *)page_buf + PAGE_HEADER_SIZE + SLOTTED_HEADER_SIZE;
    return (SlotEntry *)(base + idx * SLOT_ENTRY_SIZE);
}

static inline const SlotEntry *get_slot_const(const void *page_buf, uint16_t idx)
{
    const char *base = (const char *)page_buf + PAGE_HEADER_SIZE + SLOTTED_HEADER_SIZE;
    return (const SlotEntry *)(base + idx * SLOT_ENTRY_SIZE);
}

/* ----------------------------------------------------------------
 *  Public API
 * ---------------------------------------------------------------- */

void slot_page_init(void *page_buf, uint32_t page_no)
{
    memset(page_buf, 0, EVO_PAGE_SIZE);

    PageHeader *ph = (PageHeader *)page_buf;
    ph->page_type  = PAGE_DATA;
    ph->flags      = 0;
    ph->free_space = PAGE_USABLE - SLOTTED_HEADER_SIZE;
    ph->page_id    = page_no;
    ph->next_page  = 0;
    ph->prev_page  = 0;

    SlottedHeader *sh = get_slotted_header(page_buf);
    sh->num_slots   = 0;
    sh->free_offset = PAGE_HEADER_SIZE + SLOTTED_HEADER_SIZE;
    sh->free_end    = EVO_PAGE_SIZE;
}

int slot_insert(void *page_buf, const void *record, uint16_t rec_len)
{
    if (rec_len == 0 || rec_len > SLOT_MAX_RECORD)
        return -1;

    SlottedHeader *sh = get_slotted_header(page_buf);
    PageHeader *ph = (PageHeader *)page_buf;

    /* Check if there's a deleted slot we can reuse */
    int reuse_slot = -1;
    for (uint16_t i = 0; i < sh->num_slots; i++) {
        SlotEntry *se = get_slot(page_buf, i);
        if (se->offset == 0 && se->length == 0) {
            reuse_slot = (int)i;
            break;
        }
    }

    /* Calculate space needed */
    uint16_t slot_overhead = (reuse_slot >= 0) ? 0 : SLOT_ENTRY_SIZE;
    uint16_t total_needed = rec_len + slot_overhead;

    uint16_t available = sh->free_end - sh->free_offset;
    if (total_needed > available) {
        /* Try compaction */
        slot_compact(page_buf);
        available = sh->free_end - sh->free_offset;
        if (total_needed > available)
            return -1;  /* still no room */
    }

    /* Place record at end (growing upward) */
    uint16_t rec_offset = sh->free_end - rec_len;
    memcpy((char *)page_buf + rec_offset, record, rec_len);
    sh->free_end = rec_offset;

    /* Fill slot entry */
    int slot_idx;
    if (reuse_slot >= 0) {
        slot_idx = reuse_slot;
    } else {
        slot_idx = sh->num_slots;
        sh->num_slots++;
        sh->free_offset += SLOT_ENTRY_SIZE;
    }

    SlotEntry *se = get_slot(page_buf, slot_idx);
    se->offset = rec_offset;
    se->length = rec_len;

    /* Update free space in page header */
    ph->free_space = sh->free_end - sh->free_offset;

    return slot_idx;
}

int slot_read(const void *page_buf, uint16_t slot_idx,
              void *out_buf, uint16_t out_size)
{
    const SlottedHeader *sh = get_slotted_header_const(page_buf);

    if (slot_idx >= sh->num_slots)
        return -1;

    const SlotEntry *se = get_slot_const(page_buf, slot_idx);
    if (se->offset == 0)
        return -1;  /* deleted */

    uint16_t copy_len = (se->length < out_size) ? se->length : out_size;
    memcpy(out_buf, (const char *)page_buf + se->offset, copy_len);

    return (int)se->length;
}

int slot_delete(void *page_buf, uint16_t slot_idx)
{
    SlottedHeader *sh = get_slotted_header(page_buf);
    PageHeader *ph = (PageHeader *)page_buf;

    if (slot_idx >= sh->num_slots)
        return -1;

    SlotEntry *se = get_slot(page_buf, slot_idx);
    if (se->offset == 0)
        return -1;  /* already deleted */

    /* Reclaim space if this was the last physical record */
    if (se->offset == sh->free_end) {
        sh->free_end += se->length;
    }

    /* Mark slot as deleted */
    se->offset = 0;
    se->length = 0;

    /* Update free space */
    ph->free_space = sh->free_end - sh->free_offset;

    return 0;
}

int slot_update(void *page_buf, uint16_t slot_idx,
                const void *new_record, uint16_t new_len)
{
    SlottedHeader *sh = get_slotted_header(page_buf);

    if (slot_idx >= sh->num_slots)
        return -1;

    SlotEntry *se = get_slot(page_buf, slot_idx);
    if (se->offset == 0)
        return -1;  /* deleted */

    if (new_len <= se->length) {
        /* Fits in existing space — overwrite */
        memcpy((char *)page_buf + se->offset, new_record, new_len);
        /* If shorter, we waste the tail — compaction reclaims it */
        se->length = new_len;
        return 0;
    }

    /* Doesn't fit — caller should delete + insert elsewhere */
    return -1;
}

uint16_t slot_free_space(const void *page_buf)
{
    const SlottedHeader *sh = get_slotted_header_const(page_buf);
    if (sh->free_end <= sh->free_offset)
        return 0;
    return sh->free_end - sh->free_offset;
}

uint16_t slot_active_count(const void *page_buf)
{
    const SlottedHeader *sh = get_slotted_header_const(page_buf);
    uint16_t count = 0;
    for (uint16_t i = 0; i < sh->num_slots; i++) {
        const SlotEntry *se = get_slot_const(page_buf, i);
        if (se->offset != 0)
            count++;
    }
    return count;
}

void slot_compact(void *page_buf)
{
    SlottedHeader *sh = get_slotted_header(page_buf);
    PageHeader *ph = (PageHeader *)page_buf;

    if (sh->num_slots == 0) return;

    /* Temporary buffer for compacted records */
    char temp[EVO_PAGE_SIZE];
    uint16_t write_pos = EVO_PAGE_SIZE;

    /* Compact: copy active records from end of page */
    for (uint16_t i = 0; i < sh->num_slots; i++) {
        SlotEntry *se = get_slot(page_buf, i);
        if (se->offset == 0)
            continue;  /* skip deleted */

        write_pos -= se->length;
        memcpy(temp + write_pos, (char *)page_buf + se->offset, se->length);
        se->offset = write_pos;
    }

    /* Copy compacted records back */
    memcpy((char *)page_buf + write_pos,
           temp + write_pos,
           EVO_PAGE_SIZE - write_pos);

    sh->free_end = write_pos;
    ph->free_space = sh->free_end - sh->free_offset;
}
