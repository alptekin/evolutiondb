/*
 * toast.c — implementation of the row-overflow storage described in
 * toast.h. All I/O routes through pgm_read_page / pgm_write_page so
 * the buffer pool + WAL FPI replay get the chain pages for free.
 */
#include "toast.h"
#include "page_mgr.h"
#include "tuple_format.h"

#include <stdint.h>
#include <stdlib.h>
#include <string.h>


/* ----------------------------------------------------------------
 *  CRC32 — IEEE 802.3 polynomial, same table the WAL module uses.
 *  Duplicated here so toast.c stays self-contained; reconciling
 *  with wal.c into a shared helper is a follow-up cleanup.
 * ---------------------------------------------------------------- */
static const uint32_t toast_crc32_table[256] = {
    0x00000000,0x77073096,0xEE0E612C,0x990951BA,0x076DC419,0x706AF48F,
    0xE963A535,0x9E6495A3,0x0EDB8832,0x79DCB8A4,0xE0D5E91E,0x97D2D988,
    0x09B64C2B,0x7EB17CBD,0xE7B82D07,0x90BF1D91,0x1DB71064,0x6AB020F2,
    0xF3B97148,0x84BE41DE,0x1ADAD47D,0x6DDDE4EB,0xF4D4B551,0x83D385C7,
    0x136C9856,0x646BA8C0,0xFD62F97A,0x8A65C9EC,0x14015C4F,0x63066CD9,
    0xFA0F3D63,0x8D080DF5,0x3B6E20C8,0x4C69105E,0xD56041E4,0xA2677172,
    0x3C03E4D1,0x4B04D447,0xD20D85FD,0xA50AB56B,0x35B5A8FA,0x42B2986C,
    0xDBBBC9D6,0xACBCF940,0x32D86CE3,0x45DF5C75,0xDCD60DCF,0xABD13D59,
    0x26D930AC,0x51DE003A,0xC8D75180,0xBFD06116,0x21B4F4B5,0x56B3C423,
    0xCFBA9599,0xB8BDA50F,0x2802B89E,0x5F058808,0xC60CD9B2,0xB10BE924,
    0x2F6F7C87,0x58684C11,0xC1611DAB,0xB6662D3D,0x76DC4190,0x01DB7106,
    0x98D220BC,0xEFD5102A,0x71B18589,0x06B6B51F,0x9FBFE4A5,0xE8B8D433,
    0x7807C9A2,0x0F00F934,0x9609A88E,0xE10E9818,0x7F6A0DBB,0x086D3D2D,
    0x91646C97,0xE6635C01,0x6B6B51F4,0x1C6C6162,0x856530D8,0xF262004E,
    0x6C0695ED,0x1B01A57B,0x8208F4C1,0xF50FC457,0x65B0D9C6,0x12B7E950,
    0x8BBEB8EA,0xFCB9887C,0x62DD1DDF,0x15DA2D49,0x8CD37CF3,0xFBD44C65,
    0x4DB26158,0x3AB551CE,0xA3BC0074,0xD4BB30E2,0x4ADFA541,0x3DD895D7,
    0xA4D1C46D,0xD3D6F4FB,0x4369E96A,0x346ED9FC,0xAD678846,0xDA60B8D0,
    0x44042D73,0x33031DE5,0xAA0A4C5F,0xDD0D7CC9,0x5005713C,0x270241AA,
    0xBE0B1010,0xC90C2086,0x5768B525,0x206F85B3,0xB966D409,0xCE61E49F,
    0x5EDEF90E,0x29D9C998,0xB0D09822,0xC7D7A8B4,0x59B33D17,0x2EB40D81,
    0xB7BD5C3B,0xC0BA6CAD,0xEDB88320,0x9ABFB3B6,0x03B6E20C,0x74B1D29A,
    0xEAD54739,0x9DD277AF,0x04DB2615,0x73DC1683,0xE3630B12,0x94643B84,
    0x0D6D6A3E,0x7A6A5AA8,0xE40ECF0B,0x9309FF9D,0x0A00AE27,0x7D079EB1,
    0xF00F9344,0x8708A3D2,0x1E01F268,0x6906C2FE,0xF762575D,0x806567CB,
    0x196C3671,0x6E6B06E7,0xFED41B76,0x89D32BE0,0x10DA7A5A,0x67DD4ACC,
    0xF9B9DF6F,0x8EBEEFF9,0x17B7BE43,0x60B08ED5,0xD6D6A3E8,0xA1D1937E,
    0x38D8C2C4,0x4FDFF252,0xD1BB67F1,0xA6BC5767,0x3FB506DD,0x48B2364B,
    0xD80D2BDA,0xAF0A1B4C,0x36034AF6,0x41047A60,0xDF60EFC3,0xA867DF55,
    0x316E8EEF,0x4669BE79,0xCB61B38C,0xBC66831A,0x256FD2A0,0x5268E236,
    0xCC0C7795,0xBB0B4703,0x220216B9,0x5505262F,0xC5BA3BBE,0xB2BD0B28,
    0x2BB45A92,0x5CB36A04,0xC2D7FFA7,0xB5D0CF31,0x2CD99E8B,0x5BDEAE1D,
    0x9B64C2B0,0xEC63F226,0x756AA39C,0x026D930A,0x9C0906A9,0xEB0E363F,
    0x72076785,0x05005713,0x95BF4A82,0xE2B87A14,0x7BB12BAE,0x0CB61B38,
    0x92D28E9B,0xE5D5BE0D,0x7CDCEFB7,0x0BDBDF21,0x86D3D2D4,0xF1D4E242,
    0x68DDB3F8,0x1FDA836E,0x81BE16CD,0xF6B9265B,0x6FB077E1,0x18B74777,
    0x88085AE6,0xFF0F6A70,0x66063BCA,0x11010B5C,0x8F659EFF,0xF862AE69,
    0x616BFFD3,0x166CCF45,0xA00AE278,0xD70DD2EE,0x4E048354,0x3903B3C2,
    0xA7672661,0xD06016F7,0x4969474D,0x3E6E77DB,0xAED16A4A,0xD9D65ADC,
    0x40DF0B66,0x37D83BF0,0xA9BCAE53,0xDEBB9EC5,0x47B2CF7F,0x30B5FFE9,
    0xBDBDF21C,0xCABAC28A,0x53B39330,0x24B4A3A6,0xBAD03605,0xCDD70693,
    0x54DE5729,0x23D967BF,0xB3667A2E,0xC4614AB8,0x5D681B02,0x2A6F2B94,
    0xB40BBE37,0xC30C8EA1,0x5A05DF1B,0x2D02EF8D
};

static uint32_t toast_crc32(const void *data, size_t len)
{
    const uint8_t *p = (const uint8_t *)data;
    uint32_t crc = 0xFFFFFFFF;
    for (size_t i = 0; i < len; i++)
        crc = toast_crc32_table[(crc ^ p[i]) & 0xFF] ^ (crc >> 8);
    return crc ^ 0xFFFFFFFF;
}


/* ----------------------------------------------------------------
 *  Little-endian helpers — the on-wire / on-disk format is LE so
 *  the stub is portable across CPUs.
 * ---------------------------------------------------------------- */
static void put_le32(uint8_t *p, uint32_t v)
{
    p[0] = (uint8_t)(v       & 0xff);
    p[1] = (uint8_t)(v >> 8  & 0xff);
    p[2] = (uint8_t)(v >> 16 & 0xff);
    p[3] = (uint8_t)(v >> 24 & 0xff);
}

static uint32_t get_le32(const uint8_t *p)
{
    return  (uint32_t)p[0]
          | (uint32_t)p[1] << 8
          | (uint32_t)p[2] << 16
          | (uint32_t)p[3] << 24;
}


/* ----------------------------------------------------------------
 *  Chain write — allocate as many PAGE_OVERFLOW pages as needed,
 *  link them via PageHeader.next_page. If any allocation or write
 *  fails midway, every page we already grabbed gets freed before we
 *  return so we don't leak orphan chains.
 * ---------------------------------------------------------------- */
int toast_write(const char *data, uint32_t len, ToastRef *ref_out)
{
    if (!data || !ref_out || len == 0) return -1;

    uint32_t crc = toast_crc32(data, len);

    /* Pass 1: figure out how many chunks we need and pre-allocate
     * every page. Doing it upfront lets us patch next_page links in
     * a single pass without re-reading earlier chunks. */
    uint32_t chunk_count = (len + TOAST_CHUNK_PAYLOAD - 1)
                          / TOAST_CHUNK_PAYLOAD;
    if (chunk_count == 0) return -1;

    uint32_t *pages = (uint32_t *)calloc(chunk_count, sizeof(uint32_t));
    if (!pages) return -1;

    for (uint32_t i = 0; i < chunk_count; i++) {
        uint32_t p = pgm_alloc_page(PAGE_OVERFLOW);
        if (p == 0) {
            for (uint32_t j = 0; j < i; j++) pgm_free_page(pages[j]);
            free(pages);
            return -1;
        }
        pages[i] = p;
    }

    /* Pass 2: write each chunk with the right next_page set. */
    char page_buf[EVO_PAGE_SIZE];
    uint32_t offset = 0;
    for (uint32_t i = 0; i < chunk_count; i++) {
        memset(page_buf, 0, sizeof(page_buf));
        PageHeader *ph = (PageHeader *)page_buf;
        ph->page_type = PAGE_OVERFLOW;
        ph->page_id   = pages[i];
        ph->next_page = (i + 1 < chunk_count) ? pages[i + 1] : 0;
        ph->prev_page = 0;

        uint32_t remaining = len - offset;
        uint32_t this_chunk = remaining > TOAST_CHUNK_PAYLOAD
                              ? TOAST_CHUNK_PAYLOAD : remaining;
        memcpy(page_buf + PAGE_HEADER_SIZE, data + offset, this_chunk);
        ph->free_space = (uint16_t)(PAGE_USABLE - this_chunk);

        if (pgm_write_page(pages[i], page_buf) < 0) {
            /* On write failure, free every allocated page including
             * this one — caller never sees a partial chain. */
            for (uint32_t j = 0; j < chunk_count; j++) pgm_free_page(pages[j]);
            free(pages);
            return -1;
        }
        offset += this_chunk;
    }

    ref_out->first_page = pages[0];
    ref_out->last_page  = pages[chunk_count - 1];
    ref_out->total_len  = len;
    ref_out->crc32      = crc;
    ref_out->version    = TOAST_REF_VERSION;

    free(pages);
    return 0;
}


/* ----------------------------------------------------------------
 *  Chain read — walks next_page links, accumulates payloads, then
 *  verifies CRC against the value stored in the ref.
 * ---------------------------------------------------------------- */
int toast_read(const ToastRef *ref, char *buf_out, uint32_t buf_size)
{
    if (!ref || !buf_out) return -1;
    if (ref->first_page == 0) return -1;
    if (ref->total_len > buf_size) return -1;

    char page_buf[EVO_PAGE_SIZE];
    uint32_t offset   = 0;
    uint32_t page_no  = ref->first_page;
    uint32_t safety   = 0;

    while (page_no != 0 && offset < ref->total_len) {
        if (pgm_read_page(page_no, page_buf) < 0) return -1;
        const PageHeader *ph = (const PageHeader *)page_buf;
        if (ph->page_type != PAGE_OVERFLOW) return -1;

        uint16_t this_chunk = (uint16_t)(PAGE_USABLE - ph->free_space);
        if ((uint32_t)this_chunk > ref->total_len - offset)
            this_chunk = (uint16_t)(ref->total_len - offset);
        memcpy(buf_out + offset,
               page_buf + PAGE_HEADER_SIZE, this_chunk);
        offset += this_chunk;

        page_no = ph->next_page;

        /* Cheap loop guard — a chain longer than total_len chunks
         * has to be corrupt. */
        if (++safety > (ref->total_len / 64) + 1024) return -1;
    }

    if (offset != ref->total_len) return -1;
    if (toast_crc32(buf_out, ref->total_len) != ref->crc32) return -1;
    return (int)ref->total_len;
}


/* ----------------------------------------------------------------
 *  Chain free — walks the chain, freeing each page back to the
 *  page manager's free list. Safe to call on an already-empty ref.
 * ---------------------------------------------------------------- */
int toast_free(const ToastRef *ref)
{
    if (!ref || ref->first_page == 0) return 0;

    char page_buf[EVO_PAGE_SIZE];
    uint32_t page_no = ref->first_page;
    uint32_t safety  = 0;

    while (page_no != 0) {
        if (pgm_read_page(page_no, page_buf) < 0) return -1;
        const PageHeader *ph = (const PageHeader *)page_buf;
        uint32_t next = (ph->page_type == PAGE_OVERFLOW)
                        ? ph->next_page : 0;
        pgm_free_page(page_no);
        page_no = next;
        if (++safety > (ref->total_len / 64) + 1024) break;
    }
    return 0;
}


/* ----------------------------------------------------------------
 *  Stub serialization. The stub mirrors a normal-tuple MVCC layout
 *  byte-for-byte (magic / table_id / body_len / num_cols / flags /
 *  xmin / xmax), then appends our 17-byte ref payload.
 * ---------------------------------------------------------------- */
int toast_is_stub(const char *rec, int rec_len)
{
    if (rec_len < 1) return 0;
    return ((unsigned char)rec[0]) == TOAST_STUB_MAGIC;
}

int toast_build_stub(uint32_t table_id,
                     const char *source_tuple, int source_len,
                     const ToastRef *ref,
                     char *out, int out_size)
{
    if (!source_tuple || !ref || !out) return -1;
    if (out_size < TOAST_STUB_SIZE) return -1;
    if (source_len < TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE) return -1;
    if ((unsigned char)source_tuple[0] != TUPLE_MAGIC) return -1;

    uint8_t *p = (uint8_t *)out;
    memset(p, 0, TOAST_STUB_SIZE);

    p[0] = TOAST_STUB_MAGIC;
    put_le32(p + 1, table_id);

    /* body_len(0..1) and num_cols(2) stay at zero. The flags byte
     * (3) plus the optional 8-byte MVCC header (xmin + xmax) get
     * copied verbatim from the source tuple so visibility accessors
     * see the same values they would have seen on the un-toasted
     * row. */
    uint8_t src_flags = (uint8_t)source_tuple[TUPLE_PREFIX_SIZE + 3];
    p[5 + 0] = 0;             /* body_len lo */
    p[5 + 1] = 0;             /* body_len hi */
    p[5 + 2] = 0;             /* num_cols */
    p[5 + 3] = src_flags;     /* flags */

    if (src_flags & TUPLE_FLAG_MVCC) {
        /* xmin / xmax start at TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE
         * in the source tuple — bytes 9..16. Copy 8 bytes straight
         * into the same offset in the stub. */
        memcpy(p + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE,
               source_tuple + TUPLE_PREFIX_SIZE + TUPLE_HEADER_SIZE,
               8);
    }

    /* Ref payload starts after the mirrored MVCC area: 5 + 4 + 8 = 17. */
    put_le32(p + 17, ref->first_page);
    put_le32(p + 21, ref->last_page);
    put_le32(p + 25, ref->total_len);
    put_le32(p + 29, ref->crc32);
    /* version byte sits in the last reserved slot — currently unused
     * because TOAST_STUB_SIZE is fixed at 33; a v2 layout that grows
     * the stub will pick this up. */

    return TOAST_STUB_SIZE;
}

int toast_parse_stub(const char *rec, int rec_len,
                     uint32_t *table_id_out,
                     ToastRef *ref_out)
{
    if (!toast_is_stub(rec, rec_len)) return -1;
    if (rec_len < TOAST_STUB_SIZE) return -1;
    if (!ref_out) return -1;

    const uint8_t *p = (const uint8_t *)rec;
    if (table_id_out) *table_id_out = get_le32(p + 1);

    ref_out->first_page = get_le32(p + 17);
    ref_out->last_page  = get_le32(p + 21);
    ref_out->total_len  = get_le32(p + 25);
    ref_out->crc32      = get_le32(p + 29);
    ref_out->version    = TOAST_REF_VERSION;
    return 0;
}


int toast_free_if_stub(const char *rec, int rec_len)
{
    if (!toast_is_stub(rec, rec_len)) return 0;
    ToastRef ref;
    if (toast_parse_stub(rec, rec_len, NULL, &ref) != 0) return 0;
    if (ref.first_page == 0) return 0;
    /* toast_free walks the chain and counts pages via its own
     * safety counter; here we just want a "non-zero on actual
     * reclaim" signal so callers can log / track it. */
    uint32_t chunks = (ref.total_len + TOAST_CHUNK_PAYLOAD - 1)
                      / TOAST_CHUNK_PAYLOAD;
    toast_free(&ref);
    return (int)chunks;
}
