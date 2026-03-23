/*
 * wal.h — Write-Ahead Log for EvoSQL
 *
 * Provides crash recovery by logging full page images (FPI) to a
 * sequential WAL file before writing data pages to the main file.
 *
 * WAL record format:
 *   [lsn:4B][page_no:4B][page_len:2B][page_data:4096B][crc32:4B]
 *   Total: 4110 bytes per record
 *
 * WAL file format:
 *   [WAL_MAGIC:4B][version:2B][checkpoint_lsn:4B][next_lsn:4B][reserved:2B]
 *   = 16B header, followed by sequential records
 *
 * Write-ahead rule:
 *   WAL record must be fsync'd BEFORE the data page is written to disk.
 *   On crash, replay WAL from checkpoint_lsn to restore torn pages.
 *
 * Checkpoint:
 *   1. Flush all dirty buffer pool pages to disk
 *   2. Advance checkpoint_lsn to current next_lsn
 *   3. Truncate WAL file (remove replayed records)
 */
#ifndef WAL_H
#define WAL_H

#include <stdint.h>

/* WAL file magic and version */
#define WAL_MAGIC       0x57414C45  /* "WALE" */
#define WAL_VERSION     1

/* WAL file header (16 bytes) */
typedef struct {
    uint32_t magic;            /* WAL_MAGIC */
    uint16_t version;          /* WAL_VERSION */
    uint16_t reserved;
    uint32_t checkpoint_lsn;   /* all pages up to this LSN are on disk */
    uint32_t next_lsn;         /* next LSN to assign */
} WalHeader;

/* WAL record header: [lsn:4][page_no:4][page_len:2][timestamp:8] + page_data + crc:4 */
#define WAL_RECORD_HEADER_SIZE  18  /* lsn(4) + page_no(4) + page_len(2) + timestamp(8) */
#define WAL_CRC_SIZE             4

/* ----------------------------------------------------------------
 *  WAL API
 * ---------------------------------------------------------------- */

/* Initialize the WAL subsystem. Opens or creates the WAL file.
 * If pending WAL records exist (crash recovery), replays them
 * against the data file before returning.
 * Must be called after pgm_init() and bp_init().
 * data_fd: file descriptor of the main data file (evosql.db).
 * Returns number of pages recovered (0 = clean start, >0 = crash recovery). */
int wal_init(int data_fd);

/* Log a full page image to the WAL before writing to disk.
 * This is the write-ahead guarantee: the WAL record is fsync'd
 * before the caller writes the page to the data file.
 * Returns the assigned LSN, or 0 on error. */
uint32_t wal_log_page(uint32_t page_no, const void *page_data, uint16_t page_len);

/* Perform a checkpoint:
 * 1. Caller must flush all dirty buffer pool pages first
 * 2. Advances checkpoint_lsn to next_lsn
 * 3. Archives WAL to evosql.wal.archive (for time-travel recovery)
 * 4. Truncates active WAL file
 * Returns 0 on success, -1 on error. */
int wal_checkpoint(void);

/* Shut down WAL subsystem. Performs a final checkpoint and closes
 * the WAL file. */
void wal_shutdown(void);

/* Complete WAL recovery Pass 2: replay data pages (non-page-0).
 * Must be called AFTER TDE is initialized from the recovered FileHeader.
 * Checkpoints (truncates WAL) after replay. Returns pages replayed. */
int wal_replay_remaining(void);

/* Check if WAL is active (initialized and operational). */
int wal_is_active(void);

/* ----------------------------------------------------------------
 *  Time-Travel Recovery (EvoSQL Snapshot Restore)
 *
 *  Replays archived WAL records up to a target timestamp,
 *  restoring the database to that point in time.
 * ---------------------------------------------------------------- */

/* Restore the database to a specific point in time.
 * Replays WAL archive records with timestamp <= target_epoch.
 * The database file must be a base snapshot taken before the target time.
 * Returns number of pages restored, or -1 on error. */
int wal_restore_to_timestamp(int data_fd, int64_t target_epoch);

/* Get the timestamp range available in the WAL archive.
 * Returns 0 on success, -1 if no archive exists.
 * min_ts and max_ts are set to epoch seconds. */
int wal_archive_range(int64_t *min_ts, int64_t *max_ts);

#endif /* WAL_H */
