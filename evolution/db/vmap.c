/*
 * vmap.c — Visibility Map for EvoSQL
 *
 * 1 bit per heap page: "all-visible" flag.
 * One VMAP page (4080 usable bytes) covers 32,640 heap pages.
 * VMAP pages are chained via PageHeader.next_page.
 * Root page stored in pgm_get_catalog_root(CAT_SYS_VMAP).
 */

#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include "vmap.h"
#include "page_mgr.h"

/* VMAP catalog slot — defined in page_mgr.h as CAT_SYS_VMAP = 10 */

static pthread_mutex_t g_vmap_lock = PTHREAD_MUTEX_INITIALIZER;

/* ----------------------------------------------------------------
 *  Internal: locate or allocate the VMAP page for a given heap page
 * ---------------------------------------------------------------- */
static uint32_t vmap_get_page(uint32_t heap_page_no)
{
    uint32_t page_idx = heap_page_no / VMAP_PAGES_PER_PAGE;
    uint32_t root = pgm_get_catalog_root(CAT_SYS_VMAP);

    /* Allocate root page on first access */
    if (root == 0) {
        root = pgm_alloc_page(PAGE_VMAP);
        if (root == 0) return 0;

        char buf[EVO_PAGE_SIZE];
        pgm_read_page(root, buf);
        memset(buf + PAGE_HEADER_SIZE, 0, PAGE_USABLE);
        ((PageHeader *)buf)->next_page = 0;
        pgm_write_page(root, buf);
        pgm_set_catalog_root(CAT_SYS_VMAP, root);
    }

    /* Walk chain to page_idx-th VMAP page */
    uint32_t cur = root;
    char buf[EVO_PAGE_SIZE];

    for (uint32_t i = 0; i < page_idx; i++) {
        pgm_read_page(cur, buf);
        PageHeader *ph = (PageHeader *)buf;

        if (ph->next_page == 0) {
            /* Allocate a new VMAP page and chain it */
            uint32_t new_page = pgm_alloc_page(PAGE_VMAP);
            if (new_page == 0) return 0;

            char new_buf[EVO_PAGE_SIZE];
            pgm_read_page(new_page, new_buf);
            memset(new_buf + PAGE_HEADER_SIZE, 0, PAGE_USABLE);
            ((PageHeader *)new_buf)->next_page = 0;
            pgm_write_page(new_page, new_buf);

            ph->next_page = new_page;
            pgm_write_page(cur, buf);

            cur = new_page;
        } else {
            cur = ph->next_page;
        }
    }

    return cur;
}

/* ----------------------------------------------------------------
 *  Public API
 * ---------------------------------------------------------------- */

void vmap_init(void)
{
    pthread_mutex_lock(&g_vmap_lock);
    uint32_t root = pgm_get_catalog_root(CAT_SYS_VMAP);
    if (root == 0) {
        root = pgm_alloc_page(PAGE_VMAP);
        if (root != 0) {
            char buf[EVO_PAGE_SIZE];
            pgm_read_page(root, buf);
            memset(buf + PAGE_HEADER_SIZE, 0, PAGE_USABLE);
            ((PageHeader *)buf)->next_page = 0;
            pgm_write_page(root, buf);
            pgm_set_catalog_root(CAT_SYS_VMAP, root);
        }
    }
    pthread_mutex_unlock(&g_vmap_lock);
}

int vmap_is_visible(uint32_t heap_page_no)
{
    pthread_mutex_lock(&g_vmap_lock);

    uint32_t vmap_page = vmap_get_page(heap_page_no);
    if (vmap_page == 0) {
        pthread_mutex_unlock(&g_vmap_lock);
        return 0;
    }

    uint32_t offset_in_page = heap_page_no % VMAP_PAGES_PER_PAGE;
    uint32_t byte_off = PAGE_HEADER_SIZE + offset_in_page / 8;
    int      bit_off  = offset_in_page % 8;

    char buf[EVO_PAGE_SIZE];
    pgm_read_page(vmap_page, buf);

    int result = ((uint8_t)buf[byte_off] >> bit_off) & 1;

    pthread_mutex_unlock(&g_vmap_lock);
    return result;
}

void vmap_set_visible(uint32_t heap_page_no)
{
    pthread_mutex_lock(&g_vmap_lock);

    uint32_t vmap_page = vmap_get_page(heap_page_no);
    if (vmap_page == 0) {
        pthread_mutex_unlock(&g_vmap_lock);
        return;
    }

    uint32_t offset_in_page = heap_page_no % VMAP_PAGES_PER_PAGE;
    uint32_t byte_off = PAGE_HEADER_SIZE + offset_in_page / 8;
    int      bit_off  = offset_in_page % 8;

    char buf[EVO_PAGE_SIZE];
    pgm_read_page(vmap_page, buf);

    ((uint8_t *)buf)[byte_off] |= (1 << bit_off);

    pgm_write_page(vmap_page, buf);
    pthread_mutex_unlock(&g_vmap_lock);
}

void vmap_clear(uint32_t heap_page_no)
{
    pthread_mutex_lock(&g_vmap_lock);

    uint32_t vmap_page = vmap_get_page(heap_page_no);
    if (vmap_page == 0) {
        pthread_mutex_unlock(&g_vmap_lock);
        return;
    }

    uint32_t offset_in_page = heap_page_no % VMAP_PAGES_PER_PAGE;
    uint32_t byte_off = PAGE_HEADER_SIZE + offset_in_page / 8;
    int      bit_off  = offset_in_page % 8;

    char buf[EVO_PAGE_SIZE];
    pgm_read_page(vmap_page, buf);

    ((uint8_t *)buf)[byte_off] &= ~(1 << bit_off);

    pgm_write_page(vmap_page, buf);
    pthread_mutex_unlock(&g_vmap_lock);
}
