/*
 * toast.h — Row-overflow storage for tuples that exceed SLOT_MAX_RECORD.
 *
 * The slotted-page record format caps a single tuple at one 4 KB page minus
 * headers (SLOT_MAX_RECORD = 4070 bytes). Any tuple bigger than that —
 * common once a VARCHAR or TEXT column holds a multi-KB body — gets
 * rejected with a 54000/"row is too large" error.
 *
 * Mainstream engines hide this entirely (PostgreSQL TOAST, MySQL ROW_FORMAT
 * = DYNAMIC overflow page chain, SQLite overflow pages). This module
 * provides the EvolutionDB equivalent: when tup_build sees the binary tuple
 * is heading past the threshold, the entire tuple body gets written to a
 * chain of PAGE_OVERFLOW pages and the heap slot keeps a small fixed-size
 * "TOAST stub" pointing at the chain.
 *
 * Design choice — whole-tuple overflow (not per-field).
 *   The simpler PostgreSQL TOAST splits oversize *attributes* and leaves
 *   the rest of the tuple inline. That maximises read efficiency for
 *   queries hitting non-toasted columns, but every accessor needs to be
 *   teach to follow per-field references.
 *
 *   For the agent-memory workload — most queries SELECT * for a single
 *   row, and the corpus is mostly small rows with rare oversize ones —
 *   the simpler whole-row variant wins: the heap slot becomes a fixed
 *   33-byte stub that mimics the normal-tuple MVCC layout byte-for-byte,
 *   so visibility checks (xmin / xmax / flags) work without changes.
 *   The full tuple bytes — magic, header, MVCC, bitmap, fields — live
 *   in the overflow chain and are reassembled at read time.
 *
 * Stub layout (33 bytes when MVCC is present):
 *   offset 0       TOAST_STUB_MAGIC (0xE6)
 *   offset 1-4     table_id
 *   offset 5-6     body_len             (always 0 for stubs)
 *   offset 7       num_cols             (always 0 for stubs)
 *   offset 8       flags                (TUPLE_FLAG_MVCC mirrored from row)
 *   offset 9-12    xmin                 (mirrored)
 *   offset 13-16   xmax                 (mirrored, updated in place)
 *   offset 17-20   first_page (LE)      \
 *   offset 21-24   last_page  (LE)       |  ToastRef on disk
 *   offset 25-28   total_len  (LE)       |
 *   offset 29-32   crc32      (LE)      /
 *
 * The byte-for-byte alignment of magic/flags/xmin/xmax with TUPLE_MAGIC
 * tuples means tup_has_mvcc(), tup_get_xmin(), tup_get_xmax(),
 * tup_set_xmax(), tup_freeze_xmin() all work on stubs once they accept
 * the 0xE6 marker — no per-call branching.
 *
 * Chain page layout (PAGE_OVERFLOW):
 *   [PageHeader 16B]   page_type=PAGE_OVERFLOW, next_page = next chunk
 *                      or 0 for the last chunk, free_space = bytes unused
 *                      in this chunk (so payload_len = PAGE_USABLE -
 *                      free_space)
 *   [payload bytes]    up to PAGE_USABLE (4080) bytes of tuple body
 *
 * Limits & known gaps (v1)
 *   - No LZ4 compression yet. Adding compression only shrinks the chain;
 *     the on-disk format already has a version byte (stub offset is the
 *     `version` field below) that future code can switch on.
 *   - No explicit WAL records for toast_write / toast_free. The chain
 *     pages still go through the buffer pool, so dirty FPIs land in WAL
 *     naturally; replay re-creates the chain. The cost is that a crash
 *     in the middle of toast_write can leave orphan chain pages —
 *     RECLAIM will sweep those once it learns about overflow pages.
 *   - No RECLAIM integration yet. Deleting a row leaves its overflow
 *     chain on disk. Pages are tracked by the heap stub's MVCC fields,
 *     so when RECLAIM removes the heap tuple it can call toast_free
 *     synchronously; this hook lands in a follow-up.
 */
#ifndef EVO_TOAST_H
#define EVO_TOAST_H

#include <stdint.h>
#include "page_mgr.h"

/* Bytes available for tuple payload on a single PAGE_OVERFLOW page. */
#define TOAST_CHUNK_PAYLOAD   PAGE_USABLE          /* 4080 */

/* Heap-slot marker that distinguishes a TOAST stub from a regular
 * TUPLE_MAGIC (0xE7) tuple. */
#define TOAST_STUB_MAGIC      0xE6

/* On-disk size of the heap stub. Matches the byte offsets in tuple_format
 * so MVCC accessors work without branching on the marker. Bumped to 41
 * to carry the compression metadata (original_len + flags). */
#define TOAST_STUB_SIZE       41

/* The threshold at which tup_build hands its output to toast_write
 * instead of letting tapi_heap_insert reject it. Generous safety margin
 * below SLOT_MAX_RECORD so the slot bookkeeping always fits. */
#define TOAST_THRESHOLD       3800

/* Stub format version. Bumped if the stub layout changes — readers honour
 * older versions for backward compat. */
#define TOAST_REF_VERSION     2

/* ToastRef.flags bits. */
#define TOAST_REF_FLAG_LZ4    0x01    /* chain bytes are LZ4-compressed */

/* Compression decision threshold — keep the compressed form only when
 * it shaves at least 25% off the original. Anything tighter than this
 * means LZ4 found little redundancy (already-compressed data, random
 * bytes, base64 blobs) and the decompression cost on every read
 * isn't worth the marginal space saving. */
#define TOAST_COMPRESS_RATIO_NUM   3
#define TOAST_COMPRESS_RATIO_DEN   4


typedef struct {
    uint32_t first_page;
    uint32_t last_page;
    uint32_t chain_len;       /* bytes physically stored on the chain */
    uint32_t crc32;           /* CRC of the on-chain bytes              */
    uint32_t original_len;    /* bytes after decompression (== chain_len
                                 when uncompressed)                     */
    uint8_t  version;
    uint8_t  flags;           /* TOAST_REF_FLAG_*                       */
} ToastRef;


/* ----------------------------------------------------------------
 *  Chain operations
 * ---------------------------------------------------------------- */

/* Write `data` (len bytes) to a fresh overflow-page chain.
 * Fills `ref_out` with the chain pointer + integrity metadata.
 * Returns 0 on success, -1 on allocation or I/O failure (in which
 * case any pages already allocated are freed before returning). */
int toast_write(const char *data, uint32_t len, ToastRef *ref_out);

/* Read the chain identified by `ref` into `buf_out`. Returns the
 * number of bytes copied (== ref->total_len) on success, or -1 on
 * I/O error, buffer-too-small, or CRC mismatch. */
int toast_read(const ToastRef *ref, char *buf_out, uint32_t buf_size);

/* Free every page in the chain. No-op when first_page == 0. */
int toast_free(const ToastRef *ref);


/* ----------------------------------------------------------------
 *  Stub serialization
 * ---------------------------------------------------------------- */

/* Detect whether `rec` starts with a TOAST_STUB_MAGIC byte. Cheap —
 * just looks at the first byte. */
int toast_is_stub(const char *rec, int rec_len);

/* Build a TOAST stub in `out`. The stub copies the MVCC header
 * (flags, xmin, xmax) from the source full tuple so visibility
 * accessors work on the stub the same way they work on a normal
 * tuple. Returns bytes written (== TOAST_STUB_SIZE) or -1 if the
 * output buffer is too small. */
int toast_build_stub(uint32_t table_id,
                     const char *source_tuple, int source_len,
                     const ToastRef *ref,
                     char *out, int out_size);

/* Parse a TOAST stub into a ToastRef + table_id. Returns 0 on
 * success, -1 if `rec` is not a valid stub. */
int toast_parse_stub(const char *rec, int rec_len,
                     uint32_t *table_id_out,
                     ToastRef *ref_out);

/* If `rec` is a TOAST stub, parse it and free the underlying
 * overflow chain. Safe no-op on a normal tuple, NULL, or too-short
 * buffer. Returns the number of pages freed (0 on no-op, 1+ on
 * actual reclaim). Callers reach this from every physical
 * heap-slot removal site so a deleted / replaced oversize row
 * doesn't leak its chain pages. */
int toast_free_if_stub(const char *rec, int rec_len);

#endif /* EVO_TOAST_H */
