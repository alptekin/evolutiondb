/*
 * vmap.h — Visibility Map for EvoSQL
 *
 * Tracks "all-visible" status per heap page.  When a page's bit is set,
 * every tuple on that page is visible to all current and future snapshots
 * (all xmin committed, no xmax set).
 *
 * One VMAP page covers 32,640 heap pages (4080 usable bytes × 8 bits).
 * Pages are chained via PageHeader.next_page.
 * Root stored in pgm_get_catalog_root(CAT_SYS_VMAP).
 *
 * DML clears the bit for the affected page.
 * RECLAIM sets the bit after confirming a page is fully visible.
 */
#ifndef VMAP_H
#define VMAP_H

#include <stdint.h>

/* Number of heap pages tracked per VMAP page:
 * (EVO_PAGE_SIZE - PAGE_HEADER_SIZE) * 8 = 4080 * 8 = 32,640 */
#define VMAP_PAGES_PER_PAGE  ((4096 - 16) * 8)

/* Initialize the VMAP subsystem (allocate root page if needed).
 * Called once at server startup, after pgm_init(). */
void vmap_init(void);

/* Returns 1 if the heap page is marked all-visible, 0 otherwise. */
int  vmap_is_visible(uint32_t heap_page_no);

/* Mark a heap page as all-visible (set bit). */
void vmap_set_visible(uint32_t heap_page_no);

/* Clear the all-visible flag for a heap page (after DML modifies it). */
void vmap_clear(uint32_t heap_page_no);

#endif /* VMAP_H */
