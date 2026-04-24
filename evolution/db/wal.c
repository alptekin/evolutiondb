/*
 * wal.c — Write-Ahead Log for EvoSQL
 *
 * Implements full-page-image (FPI) WAL for crash recovery.
 * Each WAL record contains a complete 4KB page image written
 * before the data page reaches disk.
 *
 * On crash, wal_replay() re-applies the logged page images to
 * the data file, ensuring no torn pages.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <pthread.h>
#include <sys/time.h>
#include "wal.h"
#include "page_mgr.h"
#include "page_crypt.h"

/* ================================================================
 *  CRC32 (IEEE polynomial, same as zlib/gzip)
 * ================================================================ */
static const uint32_t crc32_table[256] = {
    0x00000000,0x77073096,0xEE0E612C,0x990951BA,0x076DC419,0x706AF48F,
    0xE963A535,0x9E6495A3,0x0EDB8832,0x79DCB8A4,0xE0D5E91B,0x97D2D988,
    0x09B64C2B,0x7EB17CBB,0xE7B82D09,0x90BF1D91,0x1DB71064,0x6AB020F2,
    0xF3B97148,0x84BE41DE,0x1ADAD47D,0x6DDDE4EB,0xF4D4B551,0x83D385C7,
    0x136C9856,0x646BA8C0,0xFD62F97A,0x8A65C9EC,0x14015C4F,0x63066CD9,
    0xFA0F3D63,0x8D080DF5,0x3B6E20C8,0x4C69105E,0xD56041E4,0xA2677172,
    0x3C03E4D1,0x4B04D447,0xD20D85FD,0xA50AB56B,0x35B5A8FA,0x42B2986C,
    0xDBBBC9D6,0xACBCF940,0x32D86CE3,0x45DF5C75,0xDCD60DCF,0xABD13D59,
    0x26D930AC,0x51DE003A,0xC8D75180,0xBFD06116,0x21B4F0B5,0x56B3C423,
    0xCFBA9599,0xB8BDB511,0x28021D9F,0x5F058808,0xC60CD9B2,0xB10BE924,
    0x2F6F7C87,0x58684C11,0xC1611DAB,0xB6662D3D,0x76DC4190,0x01DB7106,
    0x98D220BC,0xEFD5102A,0x71B18589,0x06B6B51F,0x9FBFE4A5,0xE8B8D433,
    0x7807C9A2,0x0F00F934,0x9609A88E,0xE10E9818,0x7F6A0DBB,0x086D3D2D,
    0x91646C97,0xE6635C01,0x6B6B51F4,0x1C6C6162,0x856530D8,0xF262004E,
    0x6C0695ED,0x1B01A57B,0x8208F4C1,0xF50FC457,0x65B0D9C6,0x12B7E950,
    0x8BBEB8EA,0xFCB9887C,0x62DD1DDF,0x15DA2D49,0x8CD37CF3,0xFBD44C65,
    0x4DB26158,0x3AB551CE,0xA3BC0074,0xD4BB30E2,0x4ADFA541,0x3DD895D7,
    0xA4D1C46D,0xD3D6F4FB,0x4369E96A,0x346ED9FC,0xAD678846,0xDA60B8D0,
    0x44042D73,0x33031DE5,0xAA0A4C5F,0xDD0D7822,0x3B6E20C8,0x4C69105E,
    0xD56041E4,0xA2677172,0x3C03E4D1,0x4B04D447,0xD20D85FD,0xA50AB56B,
    0x35B5A8FA,0x42B2986C,0xDBBBC9D6,0xACBCF940,0x32D86CE3,0x45DF5C75,
    0xDCD60DCF,0xABD13D59,0x26D930AC,0x51DE003A,0xC8D75180,0xBFD06116,
    0x21B4F0B5,0x56B3C423,0xCFBA9599,0xB8BDB511,0x28021D9F,0x5F058808,
    0xC60CD9B2,0xB10BE924,0x2F6F7C87,0x58684C11,0xC1611DAB,0xB6662D3D,
    0x76DC4190,0x01DB7106,0x98D220BC,0xEFD5102A,0x71B18589,0x06B6B51F,
    0x9FBFE4A5,0xE8B8D433,0x7807C9A2,0x0F00F934,0x9609A88E,0xE10E9818,
    0x7F6A0DBB,0x086D3D2D,0x91646C97,0xE6635C01,0x6B6B51F4,0x1C6C6162,
    0x856530D8,0xF262004E,0x6C0695ED,0x1B01A57B,0x8208F4C1,0xF50FC457,
    0x65B0D9C6,0x12B7E950,0x8BBEB8EA,0xFCB9887C,0x62DD1DDF,0x15DA2D49,
    0x8CD37CF3,0xFBD44C65,0x4DB26158,0x3AB551CE,0xA3BC0074,0xD4BB30E2,
    0x4ADFA541,0x3DD895D7,0xA4D1C46D,0xD3D6F4FB,0x4369E96A,0x346ED9FC,
    0xAD678846,0xDA60B8D0,0x44042D73,0x33031DE5,0xAA0A4C5F,0xDD0D7822,
    0x90D8B8E8,0xE7D3A82E,0x7EDABB94,0x09DDCB02,0x97D0CBE1,0xE0D7FB77,
    0x79DECFCD,0x0ED9EF5B,0x9EE6BECA,0xE9E18EFC,0x70E82C46,0x07ED0CD0,
    0x9962E373,0xEE65D3E5,0x776CCD5F,0x006BC9C9,0x906B06D7,0xE76C3641,
    0x706736FB,0x076A066D,0x97040CAE,0xE0030B38,0x79026682,0x0E055614,
    0x9E3642A5,0xE9317233,0x70384A89,0x0730521F,0x993EDBBC,0xEE39CB2A,
    0x772E9B90,0x00299B06,0x96D27DC9,0xE1D50D5F,0x78DC3DE5,0x0FDB0D73,
    0x919B4AB0,0xE69C7A26,0x7F95499C,0x089CE30A,0x96994AA9,0xE19E7A3F,
    0x78975A85,0x0F906A13,0x9F3AC982,0xE83DF914,0x7134C9AE,0x06339938,
    0x926A259B,0xE56D150D,0x7C6405B7,0x0B633521,0xD80D2BDA,0xAF0A1B4C,
    0x36034AF6,0x41047A60,0xDF60EFC3,0xA8670955,0x316E79EF,0x466D0979
};

static uint32_t wal_crc32(const void *data, size_t len)
{
    const uint8_t *p = (const uint8_t *)data;
    uint32_t crc = 0xFFFFFFFF;
    for (size_t i = 0; i < len; i++)
        crc = crc32_table[(crc ^ p[i]) & 0xFF] ^ (crc >> 8);
    return crc ^ 0xFFFFFFFF;
}

/* ================================================================
 *  WAL state
 * ================================================================ */
static int             g_wal_fd = -1;       /* WAL file descriptor */
static int             g_data_fd = -1;      /* data file fd (for replay) */
static WalHeader       g_wal_header;
static pthread_mutex_t g_wal_lock = PTHREAD_MUTEX_INITIALIZER;
static int             g_wal_active = 0;

/* WAL file path — derived from data file */
static char            g_wal_path[2048];

/* ================================================================
 *  Internal helpers
 * ================================================================ */

static void wal_flush_header(void)
{
    if (g_wal_fd < 0) return;
    pwrite(g_wal_fd, &g_wal_header, sizeof(WalHeader), 0);
    fsync(g_wal_fd);
}

/* Replay WAL records from checkpoint_lsn to end of file.
 * Applies full page images directly to the data file. */
/* Replay a single WAL record at the given offset.
 * If skip_page0 is 1, skips page 0 records.
 * If only_page0 is 1, only replays page 0 records.
 * Returns: 1 if replayed, 0 if skipped, -1 if error/end. */
static int replay_one_record(off_t pos, off_t file_size,
                              int only_page0, int skip_page0,
                              off_t *next_pos)
{
    char page_buf[EVO_PAGE_SIZE];
    uint32_t rec_lsn, rec_page_no;
    uint16_t rec_page_len;

    if (pread(g_wal_fd, &rec_lsn, 4, pos) != 4) return -1;
    if (pread(g_wal_fd, &rec_page_no, 4, pos + 4) != 4) return -1;
    if (pread(g_wal_fd, &rec_page_len, 2, pos + 8) != 2) return -1;
    if (rec_page_len == 0 || rec_page_len > EVO_PAGE_SIZE) return -1;

    *next_pos = pos + WAL_RECORD_HEADER_SIZE + rec_page_len + WAL_CRC_SIZE;

    /* Filter by page number */
    if (only_page0 && rec_page_no != 0) return 0;
    if (skip_page0 && rec_page_no == 0) return 0;

    /* Read page data */
    if (pread(g_wal_fd, page_buf, rec_page_len, pos + WAL_RECORD_HEADER_SIZE)
        != (ssize_t)rec_page_len)
        return -1;

    /* Verify CRC */
    uint32_t stored_crc;
    if (pread(g_wal_fd, &stored_crc, 4,
              pos + WAL_RECORD_HEADER_SIZE + rec_page_len) != 4)
        return -1;
    size_t crc_len = WAL_RECORD_HEADER_SIZE + rec_page_len;
    char *crc_buf = (char *)malloc(crc_len);
    if (!crc_buf) return -1;
    pread(g_wal_fd, crc_buf, crc_len, pos);
    uint32_t computed_crc = wal_crc32(crc_buf, crc_len);
    free(crc_buf);
    if (computed_crc != stored_crc) return -1;

    /* Only replay records past checkpoint */
    if (rec_lsn <= g_wal_header.checkpoint_lsn) return 0;

    /* XA records: don't write to data file — handle in-memory */
    if (rec_page_no >= 0xFFFFFFFC) {
        /* XA PREPARE/COMMIT/ROLLBACK record — handled by xa_init after replay */
        return 1;  /* counted as replayed but no disk write */
    }

    /* Write to data file (with TDE encryption for pages > 0) */
    off_t data_offset = (off_t)rec_page_no * EVO_PAGE_SIZE;
    if (pcrypt_is_enabled() && rec_page_no > 0) {
        uint8_t enc_buf[EVO_PAGE_SIZE];
        memcpy(enc_buf, page_buf, rec_page_len);
        pcrypt_encrypt_page(enc_buf, rec_page_no);
        pwrite(g_data_fd, enc_buf, rec_page_len, data_offset);
    } else {
        pwrite(g_data_fd, page_buf, rec_page_len, data_offset);
    }
    return 1;
}

/* Check if there are pending WAL records to replay */
static int wal_has_pending(void)
{
    off_t file_size = lseek(g_wal_fd, 0, SEEK_END);
    return (file_size > (off_t)sizeof(WalHeader)) ? 1 : 0;
}

/* Pass 1: Replay only page 0 (FileHeader) — always plaintext.
 * Returns number of page-0 records replayed. */
static int wal_replay_page0(void)
{
    if (g_wal_fd < 0 || g_data_fd < 0) return 0;
    off_t file_size = lseek(g_wal_fd, 0, SEEK_END);
    int replayed = 0;
    off_t pos = sizeof(WalHeader);
    while (pos < file_size) {
        off_t next;
        int r = replay_one_record(pos, file_size, 1, 0, &next);
        if (r < 0) break;
        if (r > 0) replayed++;
        pos = next;
    }
    if (replayed > 0) fsync(g_data_fd);
    return replayed;
}

/* Pass 2: Replay all non-page-0 records (with TDE encryption).
 * Must be called AFTER TDE is initialized from the recovered header. */
static int wal_replay_data(void)
{
    if (g_wal_fd < 0 || g_data_fd < 0) return 0;
    off_t file_size = lseek(g_wal_fd, 0, SEEK_END);
    int replayed = 0;
    off_t pos = sizeof(WalHeader);
    while (pos < file_size) {
        off_t next;
        int r = replay_one_record(pos, file_size, 0, 1, &next);
        if (r < 0) break;
        if (r > 0) replayed++;
        pos = next;
    }
    if (replayed > 0) fsync(g_data_fd);
    return replayed;

    return replayed;
}

/* ================================================================
 *  Public API
 * ================================================================ */

int wal_init(int data_fd)
{
    g_data_fd = data_fd;

    /* Derive WAL path from data file path */
    /* The data file is "evosql.db", WAL is "evosql.wal" */
    snprintf(g_wal_path, sizeof(g_wal_path), "evosql.wal");

    /* Open or create WAL file */
    g_wal_fd = open(g_wal_path, O_RDWR | O_CREAT, 0644);
    if (g_wal_fd < 0) {
        fprintf(stderr, "[WAL] Cannot open WAL file: %s\n", g_wal_path);
        return -1;
    }

    off_t file_size = lseek(g_wal_fd, 0, SEEK_END);

    if (file_size >= (off_t)sizeof(WalHeader)) {
        /* Read existing header */
        pread(g_wal_fd, &g_wal_header, sizeof(WalHeader), 0);

        if (g_wal_header.magic != WAL_MAGIC) {
            /* Corrupted or wrong file — reinitialize */
            fprintf(stderr, "[WAL] Invalid WAL header, reinitializing\n");
            goto init_new;
        }

        /* Two-pass crash recovery:
         *   Pass 1: Replay page 0 (FileHeader, always plaintext)
         *   → caller re-reads header + inits TDE from recovered data
         *   Pass 2: Replay data pages (with TDE encryption) */
        int recovered = 0;
        if (wal_has_pending()) {
            recovered += wal_replay_page0();
            /* TDE may not be active yet — Pass 2 is deferred to
             * wal_replay_remaining() called by pgm_init after TDE init */
        }
        g_wal_active = 1;
        fprintf(stderr, "[WAL] Initialized (checkpoint_lsn=%u, next_lsn=%u)\n",
                g_wal_header.checkpoint_lsn, g_wal_header.next_lsn);
        return recovered;
    } else {
init_new:
        /* Initialize new WAL */
        memset(&g_wal_header, 0, sizeof(WalHeader));
        g_wal_header.magic = WAL_MAGIC;
        g_wal_header.version = WAL_VERSION;
        g_wal_header.checkpoint_lsn = 0;
        g_wal_header.next_lsn = 1;

        ftruncate(g_wal_fd, sizeof(WalHeader));
        wal_flush_header();
    }

    g_wal_active = 1;
    fprintf(stderr, "[WAL] Initialized (checkpoint_lsn=%u, next_lsn=%u)\n",
            g_wal_header.checkpoint_lsn, g_wal_header.next_lsn);
    return 0;
}

void wal_fsync(void)
{
    if (!g_wal_active || g_wal_fd < 0) return;
    fsync(g_wal_fd);
}

int wal_replay_remaining(void)
{
    if (!g_wal_active || g_wal_fd < 0) return 0;
    if (!wal_has_pending()) return 0;

    int recovered = wal_replay_data();
    if (recovered > 0)
        fprintf(stderr, "[WAL] Pass 2: replayed %d data page(s)\n", recovered);

    /* Checkpoint: clear WAL after full recovery */
    g_wal_header.checkpoint_lsn = g_wal_header.next_lsn;
    ftruncate(g_wal_fd, sizeof(WalHeader));
    wal_flush_header();

    return recovered;
}

uint32_t wal_log_page(uint32_t page_no, const void *page_data, uint16_t page_len)
{
    if (!g_wal_active || g_wal_fd < 0) return 0;

    pthread_mutex_lock(&g_wal_lock);

    uint32_t lsn = g_wal_header.next_lsn++;

    /* Build record: [lsn:4][page_no:4][page_len:2][timestamp:8][page_data][crc:4] */
    size_t rec_size = WAL_RECORD_HEADER_SIZE + page_len + WAL_CRC_SIZE;
    char *rec = (char *)malloc(rec_size);
    if (!rec) {
        pthread_mutex_unlock(&g_wal_lock);
        return 0;
    }

    memcpy(rec, &lsn, 4);
    memcpy(rec + 4, &page_no, 4);
    memcpy(rec + 8, &page_len, 2);
    {
        struct timeval tv;
        gettimeofday(&tv, NULL);
        int64_t epoch_us = (int64_t)tv.tv_sec * 1000000LL + tv.tv_usec;
        memcpy(rec + 10, &epoch_us, 8);
    }
    memcpy(rec + WAL_RECORD_HEADER_SIZE, page_data, page_len);

    /* CRC covers header + page data */
    uint32_t crc = wal_crc32(rec, WAL_RECORD_HEADER_SIZE + page_len);
    memcpy(rec + WAL_RECORD_HEADER_SIZE + page_len, &crc, 4);

    /* Append to WAL file */
    off_t wal_end = lseek(g_wal_fd, 0, SEEK_END);
    ssize_t written = write(g_wal_fd, rec, rec_size);
    free(rec);

    if (written != (ssize_t)rec_size) {
        fprintf(stderr, "[WAL] Write failed for page %u\n", page_no);
        pthread_mutex_unlock(&g_wal_lock);
        return 0;
    }

    /* Notify replication sender of new WAL data (non-blocking). */
    { extern void repl_notify_new_wal(void); repl_notify_new_wal(); }

    /* NOTE: fsync deferred to wal_fsync() at commit time for batching.
     * Multiple pages are written sequentially, then a single fsync
     * flushes them all — ~100x faster than per-page fsync. */

    pthread_mutex_unlock(&g_wal_lock);
    return lsn;
}

uint32_t wal_log_xa_prepare(const char *xa_xid, uint32_t mvcc_xid)
{
    /* Build payload: [xa_xid_len:2][xa_xid:N][mvcc_xid:4] */
    uint16_t xid_len = (uint16_t)strlen(xa_xid);
    uint16_t payload_len = 2 + xid_len + 4;
    char payload[256];
    memcpy(payload, &xid_len, 2);
    memcpy(payload + 2, xa_xid, xid_len);
    memcpy(payload + 2 + xid_len, &mvcc_xid, 4);
    return wal_log_page(WAL_PAGE_XA_PREPARE, payload, payload_len);
}

uint32_t wal_log_xa_resolve(const char *xa_xid, int commit)
{
    uint16_t xid_len = (uint16_t)strlen(xa_xid);
    uint16_t payload_len = 2 + xid_len;
    char payload[256];
    memcpy(payload, &xid_len, 2);
    memcpy(payload + 2, xa_xid, xid_len);
    uint32_t page_no = commit ? WAL_PAGE_XA_COMMIT : WAL_PAGE_XA_ROLLBACK;
    return wal_log_page(page_no, payload, payload_len);
}

int wal_checkpoint(void)
{
    if (!g_wal_active || g_wal_fd < 0) return -1;

    pthread_mutex_lock(&g_wal_lock);

    /* Archive: append current WAL records to archive file before truncating.
     * This enables Time-Travel Recovery (restore to a past timestamp). */
    {
        off_t wal_size = lseek(g_wal_fd, 0, SEEK_END);
        if (wal_size > (off_t)sizeof(WalHeader)) {
            char archive_path[2048];
            snprintf(archive_path, sizeof(archive_path), "%s.archive", g_wal_path);
            int afd = open(archive_path, O_WRONLY | O_CREAT | O_APPEND, 0644);
            if (afd >= 0) {
                /* Copy records (skip WAL header) to archive */
                off_t src = sizeof(WalHeader);
                char copy_buf[8192];
                while (src < wal_size) {
                    ssize_t n = pread(g_wal_fd, copy_buf, sizeof(copy_buf), src);
                    if (n <= 0) break;
                    write(afd, copy_buf, n);
                    src += n;
                }
                fsync(afd);
                close(afd);
            }
        }
    }

    /* Advance checkpoint to current position */
    g_wal_header.checkpoint_lsn = g_wal_header.next_lsn - 1;

    /* Truncate active WAL file (remove all records, keep header) */
    ftruncate(g_wal_fd, sizeof(WalHeader));
    wal_flush_header();

    /* GAP-A fix: Re-write active PREPARE records to the new WAL.
     * Without this, prepared TXs would be lost after checkpoint. */
    {
        extern int xa_list_prepared(void *, int);
        typedef struct { char xid[128]; uint32_t mvcc_xid; int active; } XARec;
        XARec recs[64];
        int n = xa_list_prepared(recs, 64);
        if (n > 0) {
            pthread_mutex_unlock(&g_wal_lock);
            for (int i = 0; i < n; i++)
                wal_log_xa_prepare(recs[i].xid, recs[i].mvcc_xid);
            pthread_mutex_lock(&g_wal_lock);
        }
    }

    pthread_mutex_unlock(&g_wal_lock);
    return 0;
}

void wal_shutdown(void)
{
    if (!g_wal_active) return;

    /* Final checkpoint: all dirty pages should already be flushed
     * by pgm_shutdown() before this is called. */
    wal_checkpoint();

    g_wal_active = 0;
    if (g_wal_fd >= 0) {
        close(g_wal_fd);
        g_wal_fd = -1;
    }
}

int wal_is_active(void)
{
    return g_wal_active;
}

uint32_t wal_get_current_lsn(void)
{
    if (!g_wal_active) return 0;
    return g_wal_header.next_lsn;
}

/* ================================================================
 *  Time-Travel Recovery — restore to a past timestamp
 * ================================================================ */

int wal_restore_to_timestamp(int data_fd, int64_t target_epoch_us)
{
    char archive_path[2048];
    snprintf(archive_path, sizeof(archive_path), "%s.archive", g_wal_path);

    int afd = open(archive_path, O_RDONLY);
    if (afd < 0) {
        fprintf(stderr, "[WAL] No archive file found at %s\n", archive_path);
        return -1;
    }

    off_t file_size = lseek(afd, 0, SEEK_END);
    off_t pos = 0;
    int restored = 0;
    char page_buf[EVO_PAGE_SIZE];

    while (pos < file_size) {
        uint32_t rec_lsn;
        uint32_t rec_page_no;
        uint16_t rec_page_len;
        int64_t  rec_timestamp;

        if (pread(afd, &rec_lsn, 4, pos) != 4) break;
        if (pread(afd, &rec_page_no, 4, pos + 4) != 4) break;
        if (pread(afd, &rec_page_len, 2, pos + 8) != 2) break;
        if (pread(afd, &rec_timestamp, 8, pos + 10) != 8) break;

        if (rec_page_len == 0 || rec_page_len > EVO_PAGE_SIZE) break;

        /* Stop if record is past the target timestamp */
        if (rec_timestamp > target_epoch_us) break;

        /* Read page data */
        if (pread(afd, page_buf, rec_page_len, pos + WAL_RECORD_HEADER_SIZE)
            != (ssize_t)rec_page_len)
            break;

        /* Verify CRC */
        uint32_t stored_crc;
        off_t crc_off = pos + WAL_RECORD_HEADER_SIZE + rec_page_len;
        if (pread(afd, &stored_crc, 4, crc_off) != 4) break;

        size_t crc_len = WAL_RECORD_HEADER_SIZE + rec_page_len;
        char *crc_buf = (char *)malloc(crc_len);
        if (!crc_buf) break;
        pread(afd, crc_buf, crc_len, pos);
        uint32_t computed_crc = wal_crc32(crc_buf, crc_len);
        free(crc_buf);

        if (computed_crc != stored_crc) break;

        /* Apply page to data file (with TDE encryption if needed) */
        off_t data_offset = (off_t)rec_page_no * EVO_PAGE_SIZE;
        if (pcrypt_is_enabled() && rec_page_no > 0) {
            uint8_t enc_buf[EVO_PAGE_SIZE];
            memcpy(enc_buf, page_buf, rec_page_len);
            pcrypt_encrypt_page(enc_buf, rec_page_no);
            pwrite(data_fd, enc_buf, rec_page_len, data_offset);
        } else {
            pwrite(data_fd, page_buf, rec_page_len, data_offset);
        }
        restored++;

        pos += WAL_RECORD_HEADER_SIZE + rec_page_len + WAL_CRC_SIZE;
    }

    if (restored > 0) fsync(data_fd);
    close(afd);

    fprintf(stderr, "[WAL] Time-Travel Recovery: restored %d page(s) to target timestamp\n",
            restored);
    return restored;
}

int wal_archive_range(int64_t *min_ts, int64_t *max_ts)
{
    char archive_path[2048];
    snprintf(archive_path, sizeof(archive_path), "%s.archive", g_wal_path);

    int afd = open(archive_path, O_RDONLY);
    if (afd < 0) return -1;

    off_t file_size = lseek(afd, 0, SEEK_END);
    if (file_size < (off_t)WAL_RECORD_HEADER_SIZE) {
        close(afd);
        return -1;
    }

    /* Read first record's timestamp */
    int64_t first_ts = 0;
    pread(afd, &first_ts, 8, 10);  /* offset 10 = after lsn(4)+page_no(4)+len(2) */

    /* Scan to last record's timestamp */
    off_t pos = 0;
    int64_t last_ts = first_ts;
    while (pos < file_size) {
        uint16_t rec_page_len;
        int64_t rec_ts;
        if (pread(afd, &rec_page_len, 2, pos + 8) != 2) break;
        if (pread(afd, &rec_ts, 8, pos + 10) != 8) break;
        if (rec_page_len == 0 || rec_page_len > EVO_PAGE_SIZE) break;
        last_ts = rec_ts;
        pos += WAL_RECORD_HEADER_SIZE + rec_page_len + WAL_CRC_SIZE;
    }

    close(afd);
    if (min_ts) *min_ts = first_ts;
    if (max_ts) *max_ts = last_ts;
    return 0;
}
