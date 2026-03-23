/*
 * table_api.h — Table Data Operations for EvoSQL Unified Storage
 *
 * Provides heap page management and PK B+ tree operations.
 * All data stored as binary tuples in slotted pages, indexed by bt2 B+ trees.
 */
#ifndef TABLE_API_H
#define TABLE_API_H

#include "catalog_internal.h"
#include "btree2.h"
#include "slotted.h"
#include "tuple_format.h"

/* ----------------------------------------------------------------
 *  Table resolution — catalog lookup helpers
 * ---------------------------------------------------------------- */

/* Resolve a table name (or full path like "root/db/schema/table")
 * to a TableDesc + ColumnDesc array using current db/schema context.
 * Returns 0 on success, -1 if not found. */
int tapi_resolve(const char *name_or_path, TableDesc *td,
                 ColumnDesc *cols, int *ncols);

/* Extract base table name from a path, stripping directory and .dat */
void tapi_basename(const char *path, char *out, int out_size);

/* ----------------------------------------------------------------
 *  Heap page operations — record storage in slotted pages
 * ---------------------------------------------------------------- */

/* Insert a record into the table's heap pages.
 * Allocates new pages as needed and chains them.
 * Updates td->heap_page if a new page was allocated.
 * Returns RowID of inserted record, or {0,0} on error. */
RowID tapi_heap_insert(TableDesc *td, const char *record, uint16_t rec_len);

/* Read a record by RowID.
 * Returns record length on success, -1 on error.
 * The output buffer is null-terminated. */
int tapi_heap_read(RowID rid, char *buf, int bufsize);

/* Delete a record by RowID.
 * Returns 0 on success, -1 on error. */
int tapi_heap_delete(RowID rid);

/* MVCC soft-delete: set xmax on a heap tuple without physically deleting it.
 * The PK tree entry is preserved so concurrent readers can check visibility.
 * Returns 0 on success, -1 if not an MVCC tuple (caller should fall back
 * to physical delete). */
int tapi_heap_set_xmax(RowID rid, uint32_t xmax);

/* Update a record at RowID. If the new record doesn't fit in-place,
 * deletes old and inserts into a page with space.
 * Returns new RowID (may differ from old_rid). Returns {0,0} on error. */
RowID tapi_heap_update(TableDesc *td, RowID old_rid,
                       const char *new_record, uint16_t rec_len);

/* ----------------------------------------------------------------
 *  PK B+ tree helpers
 * ---------------------------------------------------------------- */

/* Build a PK B+ tree handle from a TableDesc. */
static inline BTree2 tapi_pk_tree(const TableDesc *td)
{
    BTree2 tree = { td->pk_root_page };
    return tree;
}

/* Build composite PK key string from a binary tuple record.
 * PK columns are identified by ColumnDesc.is_pk.
 * Format: "val1" for single PK, "val1|val2" for composite.
 * Returns 0 on success, -1 on error. */
int tapi_build_pk_key(const ColumnDesc *cols, int ncols,
                      const char *record, int record_len,
                      char *key_out, int key_size);

/* Same as above but from pre-parsed value array. */
int tapi_build_pk_key_from_vals(const ColumnDesc *cols, int ncols,
                                char **vals, int nvals,
                                char *key_out, int key_size);

/* Build PK key from extracted fields (char[][256] from tup_extract_fields). */
int tapi_build_pk_key_from_fields(const ColumnDesc *cols, int ncols,
                                  const char fields[][256], int nfields,
                                  char *key_out, int key_size);

/* Get PK column indices into an array. Returns count of PK columns. */
int tapi_get_pk_indices(const ColumnDesc *cols, int ncols,
                        int *indices, int max);

/* ----------------------------------------------------------------
 *  Full table scan via PK B+ tree
 * ---------------------------------------------------------------- */

typedef struct {
    BTree2Cursor bt_cursor;
    BTree2       tree;
    void        *ring;          /* BPRing* — anti-pollution ring buffer for sequential scan */
} TableScanCursor;

/* Begin a full scan over all records (ordered by PK).
 * Allocates a ring buffer for sequential I/O (anti-pollution).
 * Returns 0 on success, -1 if table is empty. */
int tapi_scan_begin(const TableDesc *td, TableScanCursor *cursor);

/* End a scan and free the ring buffer. Optional — only needed if
 * the caller breaks out of the scan loop early. */
void tapi_scan_end(TableScanCursor *cursor);

/* Get next record in scan.
 * Fills pk_key_out (null-terminated) and record_out (null-terminated).
 * Returns 0 on success, -1 when done. */
int tapi_scan_next(TableScanCursor *cursor,
                   char *pk_key_out, char *record_out, int rec_out_size);

/* ----------------------------------------------------------------
 *  MVCC-aware scan — skips tuples not visible to the snapshot
 * ---------------------------------------------------------------- */
struct Snapshot;  /* forward declaration — full definition in mvcc.h */

/* Get next visible record in scan, using MVCC visibility filtering.
 * Skips tuples whose xmin/xmax make them invisible to the snapshot.
 * Pre-MVCC tuples (no MVCC flag) are always visible.
 * Returns 0 on success, -1 when done. */
int tapi_scan_next_mvcc(TableScanCursor *cursor,
                        char *pk_key_out, char *record_out, int rec_out_size,
                        const struct Snapshot *snap);

/* ----------------------------------------------------------------
 *  HOT chain following — find newest version on same page
 * ---------------------------------------------------------------- */
struct Snapshot;

/* If the tuple at `rid` has HOT_UPDATED flag, scan the same page for
 * the newest visible version (HEAP_ONLY tuple with matching table_id).
 * Copies the newest visible record to out_rec and sets *out_rid.
 * Returns record length on success, -1 if no newer version found. */
int tapi_follow_hot_chain(RowID rid, const char *old_rec, int old_len,
                          const struct Snapshot *snap,
                          char *out_rec, int out_size, RowID *out_rid);

/* ----------------------------------------------------------------
 *  Free all heap pages (for DROP TABLE / TRUNCATE)
 * ---------------------------------------------------------------- */

/* Walk the heap page chain and free all pages. */
void tapi_free_heap_pages(const TableDesc *td);

/* GTT: Ensure session-private PK tree exists. Lazy alloc on first INSERT.
 * Updates g_gtt_overrides with new entry. Returns 0 ok, -1 error. */
int gtt_ensure_storage(TableDesc *td);

/* GTT: Update override entry after heap/pk changes (INSERT/UPDATE/DELETE). */
void gtt_update_override(uint32_t table_id, uint32_t pk_root_page,
                         uint32_t heap_page, int auto_inc_counter);

#endif /* TABLE_API_H */
