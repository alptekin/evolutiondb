#include "apue.h"
#include "apue_db.h"
#include "buffer_pool.h"
#include <fcntl.h>
#include <stdarg.h>
#include <errno.h>

/*
 * Internal index file constants.
 */
#define IDXLEN_SZ      4   /* index record length (ASCII chars) */
#define SEP          ':'   /* separator char in index record */
#define SPACE        ' '   /* space character */
#define NEWLINE      '\n'  /* newline character */

/*
 * The following definitions are for hash chains and free
 * list chain in the index file.
 */
#define PTR_SZ         6   /* size of ptr field in hash chain */
#define PTR_MAX   999999   /* max file offset = 10**PTR_SZ - 1 */
#define NHASH_DEF    137   /* default hash table size */
#define FREE_OFF       0   /* free list offset in index file */
#define HASH_OFF  PTR_SZ   /* hash table offset in index file */

typedef unsigned long  DBHASH;
typedef unsigned long  COUNT;

/*
 * Library's private representation of the database.
 */
typedef struct {
    int    idxfd;
    int    datfd;
    char  *idxbuf;
    char  *datbuf;
    char  *name;
    off_t  idxoff;
    size_t idxlen;
    off_t  datoff;
    size_t datlen;
    off_t  ptrval;
    off_t  ptroff;
    off_t  chainoff;
    off_t  hashoff;
    DBHASH nhash;
    COUNT  cnt_delok;
    COUNT  cnt_delerr;
    COUNT  cnt_fetchok;
    COUNT  cnt_fetcherr;
    COUNT  cnt_nextrec;
    COUNT  cnt_stor1;
    COUNT  cnt_stor2;
    COUNT  cnt_stor3;
    COUNT  cnt_stor4;
    COUNT  cnt_storerr;
    off_t  seq_pos;      /* sequential scan position (replaces SEEK_CUR) */
    BPRing *scan_ring;   /* ring buffer for sequential scans */
} DB;

/*
 * Internal functions.
 */
static DB     *_db_alloc(int);
static void    _db_dodelete(DB *);
static int     _db_find_and_lock(DB *, const char *, int);
static int     _db_findfree(DB *, int, int);
static void    _db_free(DB *);
static DBHASH  _db_hash(DB *, const char *);
static char   *_db_readdat(DB *);
static off_t   _db_readidx(DB *, off_t);
static off_t   _db_readptr(DB *, off_t);
static void    _db_writedat(DB *, const char *, off_t, int);
static void    _db_writeidx(DB *, const char *, off_t, int, off_t);
static void    _db_writeptr(DB *, off_t, off_t);

/*
 * Open or create a database.
 */
DBHANDLE
db_open(const char *pathname, int oflag, ...)
{
    DB          *db;
    int          len, mode;
    size_t       i;
    char         asciiptr[PTR_SZ + 1],
                 hash[(NHASH_DEF + 1) * PTR_SZ + 2];
    struct stat  statbuff;

    len = (int)strlen(pathname);
    if ((db = _db_alloc(len)) == NULL)
        err_dump("db_open: _db_alloc error for DB");

    db->nhash   = NHASH_DEF;
    db->hashoff = HASH_OFF;
    strcpy(db->name, pathname);
    strcat(db->name, ".idx");

    if (oflag & O_CREAT) {
        va_list ap;
        va_start(ap, oflag);
        mode = va_arg(ap, int);
        va_end(ap);

#ifdef _WIN32
        db->idxfd = open(db->name, oflag | _O_BINARY, mode);
        strcpy(db->name + len, ".dat");
        db->datfd = open(db->name, oflag | _O_BINARY, mode);
#else
        db->idxfd = open(db->name, oflag, mode);
        strcpy(db->name + len, ".dat");
        db->datfd = open(db->name, oflag, mode);
#endif
    } else {
#ifdef _WIN32
        db->idxfd = open(db->name, oflag | _O_BINARY);
        strcpy(db->name + len, ".dat");
        db->datfd = open(db->name, oflag | _O_BINARY);
#else
        db->idxfd = open(db->name, oflag);
        strcpy(db->name + len, ".dat");
        db->datfd = open(db->name, oflag);
#endif
    }

    if (db->idxfd < 0 || db->datfd < 0) {
        _db_free(db);
        return(NULL);
    }

    if ((oflag & (O_CREAT | O_TRUNC)) == (O_CREAT | O_TRUNC)) {
        if (writew_lock(db->idxfd, 0, SEEK_SET, 0) < 0)
            err_dump("db_open: writew_lock error");

        if (fstat(db->idxfd, &statbuff) < 0)
            err_sys("db_open: fstat error");

        if (statbuff.st_size == 0) {
            snprintf(asciiptr, sizeof(asciiptr), "%*d", PTR_SZ, 0);
            hash[0] = 0;
            for (i = 0; i < NHASH_DEF + 1; i++)
                strcat(hash, asciiptr);
            strcat(hash, "\n");
            i = strlen(hash);
            if (write(db->idxfd, hash, (unsigned int)i) != (int)i)
                err_dump("db_open: index file init write error");
        }
        if (un_lock(db->idxfd, 0, SEEK_SET, 0) < 0)
            err_dump("db_open: un_lock error");
    }
    db_rewind(db);
    return(db);
}

/*
 * Allocate & initialize a DB structure and its buffers.
 */
static DB *
_db_alloc(int namelen)
{
    DB *db;

    if ((db = (DB *)calloc(1, sizeof(DB))) == NULL)
        err_dump("_db_alloc: calloc error for DB");
    db->idxfd = db->datfd = -1;

    if ((db->name = (char *)malloc(namelen + 5)) == NULL)
        err_dump("_db_alloc: malloc error for name");

    if ((db->idxbuf = (char *)malloc(IDXLEN_MAX + 2)) == NULL)
        err_dump("_db_alloc: malloc error for index buffer");
    if ((db->datbuf = (char *)malloc(DATLEN_MAX + 2)) == NULL)
        err_dump("_db_alloc: malloc error for data buffer");
    db->seq_pos   = 0;
    db->scan_ring = bp_ring_alloc();
    return(db);
}

/*
 * Relinquish access to the database.
 */
void
db_close(DBHANDLE h)
{
    _db_free((DB *)h);
}

/*
 * Free up a DB structure and all buffers.
 */
static void
_db_free(DB *db)
{
    /* Flush & invalidate cached pages before closing fds */
    if (db->idxfd >= 0)
        bp_invalidate_fd(db->idxfd);
    if (db->datfd >= 0)
        bp_invalidate_fd(db->datfd);
    if (db->idxfd >= 0)
        close(db->idxfd);
    if (db->datfd >= 0)
        close(db->datfd);
    if (db->scan_ring != NULL)
        bp_ring_free(db->scan_ring);
    if (db->idxbuf != NULL)
        free(db->idxbuf);
    if (db->datbuf != NULL)
        free(db->datbuf);
    if (db->name != NULL)
        free(db->name);
    free(db);
}

/*
 * Fetch a record.
 */
char *
db_fetch(DBHANDLE h, const char *key)
{
    DB      *db = (DB *)h;
    char    *ptr;

    if (_db_find_and_lock(db, key, 0) < 0) {
        ptr = NULL;
        db->cnt_fetcherr++;
    } else {
        ptr = _db_readdat(db);
        db->cnt_fetchok++;
    }

    if (un_lock(db->idxfd, db->chainoff, SEEK_SET, 1) < 0)
        err_dump("db_fetch: un_lock error");
    return(ptr);
}

/*
 * Find the specified record.
 */
static int
_db_find_and_lock(DB *db, const char *key, int writelock)
{
    off_t offset, nextoffset;

    db->chainoff = (_db_hash(db, key) * PTR_SZ) + db->hashoff;
    db->ptroff = db->chainoff;

    if (writelock) {
        if (writew_lock(db->idxfd, db->chainoff, SEEK_SET, 1) < 0)
            err_dump("_db_find_and_lock: writew_lock error");
    } else {
        if (readw_lock(db->idxfd, db->chainoff, SEEK_SET, 1) < 0)
            err_dump("_db_find_and_lock: readw_lock error");
    }

    offset = _db_readptr(db, db->ptroff);
    while (offset != 0) {
        nextoffset = _db_readidx(db, offset);
        if (strcmp(db->idxbuf, key) == 0)
            break;
        db->ptroff = offset;
        offset = nextoffset;
    }

    return(offset == 0 ? -1 : 0);
}

/*
 * Calculate the hash value for a key.
 */
static DBHASH
_db_hash(DB *db, const char *key)
{
    DBHASH hval = 0;
    char   c;
    int    i;

    for (i = 1; (c = *key++) != 0; i++)
        hval += c * i;
    return(hval % db->nhash);
}

/*
 * Read a chain ptr field from the index file.
 */
static off_t
_db_readptr(DB *db, off_t offset)
{
    char asciiptr[PTR_SZ + 1];

    if (bp_read(db->idxfd, asciiptr, PTR_SZ, offset) != PTR_SZ)
        err_dump("_db_readptr: read error of ptr field");
    asciiptr[PTR_SZ] = 0;
    return(atol(asciiptr));
}

/*
 * Read the next index record.
 * Uses two sequential read() calls instead of readv() for portability.
 */
static off_t
_db_readidx(DB *db, off_t offset)
{
    int      n1, n2;
    int      total;
    char    *ptr1, *ptr2;
    char     asciiptr[PTR_SZ + 1], asciilen[IDXLEN_SZ + 1];
    off_t    read_off;

    /*
     * When offset==0 the old code used SEEK_CUR for sequential scan.
     * Now we use db->seq_pos instead.
     */
    if (offset == 0)
        read_off = db->seq_pos;
    else
        read_off = offset;
    db->idxoff = read_off;

    n1 = bp_read(db->idxfd, asciiptr, PTR_SZ, read_off);
    n2 = bp_read(db->idxfd, asciilen, IDXLEN_SZ, read_off + PTR_SZ);
    total = n1 + n2;

    if (total != PTR_SZ + IDXLEN_SZ) {
        if (total == 0 && offset == 0)
            return(-1);
        err_dump("_db_readidx: read error of index record");
    }

    asciiptr[PTR_SZ] = 0;
    db->ptrval = atol(asciiptr);

    asciilen[IDXLEN_SZ] = 0;
    if ((db->idxlen = atoi(asciilen)) < IDXLEN_MIN ||
      db->idxlen > IDXLEN_MAX)
        err_dump("_db_readidx: invalid length");

    if (bp_read(db->idxfd, db->idxbuf, (unsigned int)db->idxlen,
                read_off + PTR_SZ + IDXLEN_SZ) != (int)db->idxlen)
        err_dump("_db_readidx: read error of index record");
    if (db->idxbuf[db->idxlen-1] != NEWLINE)
        err_dump("_db_readidx: missing newline");
    db->idxbuf[db->idxlen-1] = 0;

    /* Advance sequential scan position past this record */
    db->seq_pos = read_off + PTR_SZ + IDXLEN_SZ + db->idxlen;

    if ((ptr1 = strchr(db->idxbuf, SEP)) == NULL)
        err_dump("_db_readidx: missing first separator");
    *ptr1++ = 0;

    if ((ptr2 = strchr(ptr1, SEP)) == NULL)
        err_dump("_db_readidx: missing second separator");
    *ptr2++ = 0;

    if (strchr(ptr2, SEP) != NULL)
        err_dump("_db_readidx: too many separators");

    if ((db->datoff = atol(ptr1)) < 0)
        err_dump("_db_readidx: starting offset < 0");
    if ((db->datlen = atol(ptr2)) <= 0 || db->datlen > DATLEN_MAX)
        err_dump("_db_readidx: invalid length");
    return(db->ptrval);
}

/*
 * Read the current data record into the data buffer.
 */
static char *
_db_readdat(DB *db)
{
    if (bp_read(db->datfd, db->datbuf, (unsigned int)db->datlen, db->datoff)
        != (int)db->datlen)
        err_dump("_db_readdat: read error");
    if (db->datbuf[db->datlen-1] != NEWLINE)
        err_dump("_db_readdat: missing newline");
    db->datbuf[db->datlen-1] = 0;
    return(db->datbuf);
}

/* Read data using ring buffer (for sequential scans — anti-pollution) */
static char *
_db_readdat_seq(DB *db)
{
    if (bp_read_seq(db->datfd, db->datbuf, (unsigned int)db->datlen,
                    db->datoff, db->scan_ring) != (int)db->datlen)
        err_dump("_db_readdat_seq: read error");
    if (db->datbuf[db->datlen-1] != NEWLINE)
        err_dump("_db_readdat_seq: missing newline");
    db->datbuf[db->datlen-1] = 0;
    return(db->datbuf);
}

/*
 * Delete the specified record.
 */
int
db_delete(DBHANDLE h, const char *key)
{
    DB  *db = (DB *)h;
    int  rc = 0;

    if (_db_find_and_lock(db, key, 1) == 0) {
        _db_dodelete(db);
        db->cnt_delok++;
    } else {
        rc = -1;
        db->cnt_delerr++;
    }
    if (un_lock(db->idxfd, db->chainoff, SEEK_SET, 1) < 0)
        err_dump("db_delete: un_lock error");
    return(rc);
}

/*
 * Delete the current record.
 */
static void
_db_dodelete(DB *db)
{
    int     i;
    char   *ptr;
    off_t   freeptr, saveptr;
    char    delkey[IDXLEN_MAX + 1];   /* separate buffer for deleted key */

    for (ptr = db->datbuf, i = 0; i < (int)db->datlen - 1; i++)
        *ptr++ = SPACE;
    *ptr = 0;

    /* Build space-filled key in a SEPARATE buffer to avoid
     * undefined behavior from snprintf(buf, ..., "%s", buf)
     * in _db_writeidx when key == db->idxbuf. */
    ptr = db->idxbuf;
    i = 0;
    while (*ptr) {
        delkey[i++] = SPACE;
        ptr++;
    }
    delkey[i] = 0;

    if (writew_lock(db->idxfd, FREE_OFF, SEEK_SET, 1) < 0)
        err_dump("_db_dodelete: writew_lock error");

    _db_writedat(db, db->datbuf, db->datoff, SEEK_SET);
    freeptr = _db_readptr(db, FREE_OFF);
    saveptr = db->ptrval;

    _db_writeidx(db, delkey, db->idxoff, SEEK_SET, freeptr);
    _db_writeptr(db, FREE_OFF, db->idxoff);
    _db_writeptr(db, db->ptroff, saveptr);

    if (un_lock(db->idxfd, FREE_OFF, SEEK_SET, 1) < 0)
        err_dump("_db_dodelete: un_lock error");
}

/*
 * Write a data record.
 * Uses two sequential write() calls instead of writev() for portability.
 */
static void
_db_writedat(DB *db, const char *data, off_t offset, int whence)
{
    char    writebuf[DATLEN_MAX + 2];
    size_t  datalen;

    if (whence == SEEK_END)
        if (writew_lock(db->datfd, 0, SEEK_SET, 0) < 0)
            err_dump("_db_writedat: writew_lock error");

    db->datlen = strlen(data) + 1;
    datalen = db->datlen;

    /* Coalesce data + newline into a single write */
    memcpy(writebuf, data, datalen - 1);
    writebuf[datalen - 1] = NEWLINE;

    if (whence == SEEK_END) {
        off_t new_off;
        if (bp_write_append(db->datfd, writebuf, (unsigned int)datalen,
                            &new_off) != (int)datalen)
            err_dump("_db_writedat: write error of data record");
        db->datoff = new_off;
    } else {
        db->datoff = offset;
        if (bp_write(db->datfd, writebuf, (unsigned int)datalen,
                     offset) != (int)datalen)
            err_dump("_db_writedat: write error of data record");
    }

    if (whence == SEEK_END)
        if (un_lock(db->datfd, 0, SEEK_SET, 0) < 0)
            err_dump("_db_writedat: un_lock error");
}

/*
 * Write an index record.
 * Uses two sequential write() calls instead of writev() for portability.
 */
static void
_db_writeidx(DB *db, const char *key,
             off_t offset, int whence, off_t ptrval)
{
    char asciiptrlen[PTR_SZ + IDXLEN_SZ + 1];
    char writebuf[PTR_SZ + IDXLEN_SZ + IDXLEN_MAX + 2];
    int  len, total;

    if ((db->ptrval = ptrval) < 0 || ptrval > PTR_MAX)
        err_quit("_db_writeidx: invalid ptr: %ld", (long)ptrval);

    snprintf(db->idxbuf, IDXLEN_MAX + 2, "%s%c%ld%c%d\n", key, SEP,
            (long)db->datoff, SEP, (int)db->datlen);

    if ((len = (int)strlen(db->idxbuf)) < IDXLEN_MIN || len > IDXLEN_MAX)
        err_dump("_db_writeidx: invalid length");
    snprintf(asciiptrlen, sizeof(asciiptrlen), "%*ld%*d", PTR_SZ, (long)ptrval, IDXLEN_SZ, len);

    if (whence == SEEK_END)
        if (writew_lock(db->idxfd, ((db->nhash+1)*PTR_SZ)+1,
          SEEK_SET, 0) < 0)
            err_dump("_db_writeidx: writew_lock error");

    /* Coalesce header + record into a single write */
    memcpy(writebuf, asciiptrlen, PTR_SZ + IDXLEN_SZ);
    memcpy(writebuf + PTR_SZ + IDXLEN_SZ, db->idxbuf, len);
    total = PTR_SZ + IDXLEN_SZ + len;

    if (whence == SEEK_END) {
        off_t new_off;
        if (bp_write_append(db->idxfd, writebuf, total, &new_off) != total)
            err_dump("_db_writeidx: write error of index record");
        db->idxoff = new_off;
    } else {
        db->idxoff = offset;
        if (bp_write(db->idxfd, writebuf, total, offset) != total)
            err_dump("_db_writeidx: write error of index record");
    }

    if (whence == SEEK_END)
        if (un_lock(db->idxfd, ((db->nhash+1)*PTR_SZ)+1,
          SEEK_SET, 0) < 0)
            err_dump("_db_writeidx: un_lock error");
}

/*
 * Write a chain ptr field.
 */
static void
_db_writeptr(DB *db, off_t offset, off_t ptrval)
{
    char asciiptr[PTR_SZ + 1];

    if (ptrval < 0 || ptrval > PTR_MAX)
        err_quit("_db_writeptr: invalid ptr: %ld", (long)ptrval);
    snprintf(asciiptr, sizeof(asciiptr), "%*ld", PTR_SZ, (long)ptrval);

    if (bp_write(db->idxfd, asciiptr, PTR_SZ, offset) != PTR_SZ)
        err_dump("_db_writeptr: write error of ptr field");
}

/*
 * Store a record in the database.
 */
int
db_store(DBHANDLE h, const char *key, const char *data, int flag)
{
    DB     *db = (DB *)h;
    int     rc, keylen, datlen;
    off_t   ptrval;

    if (flag != DB_INSERT && flag != DB_REPLACE &&
      flag != DB_STORE) {
        errno = EINVAL;
        return(-1);
    }
    keylen = (int)strlen(key);
    datlen = (int)strlen(data) + 1;
    if (datlen < DATLEN_MIN || datlen > DATLEN_MAX)
        err_dump("db_store: invalid data length");

    if (_db_find_and_lock(db, key, 1) < 0) {
        if (flag == DB_REPLACE) {
            rc = -1;
            db->cnt_storerr++;
            errno = ENOENT;
            goto doreturn;
        }

        ptrval = _db_readptr(db, db->chainoff);

        if (_db_findfree(db, keylen, datlen) < 0) {
            _db_writedat(db, data, 0, SEEK_END);
            _db_writeidx(db, key, 0, SEEK_END, ptrval);
            _db_writeptr(db, db->chainoff, db->idxoff);
            db->cnt_stor1++;
        } else {
            _db_writedat(db, data, db->datoff, SEEK_SET);
            _db_writeidx(db, key, db->idxoff, SEEK_SET, ptrval);
            _db_writeptr(db, db->chainoff, db->idxoff);
            db->cnt_stor2++;
        }
    } else {
        if (flag == DB_INSERT) {
            rc = 1;
            db->cnt_storerr++;
            goto doreturn;
        }

        if (datlen != (int)db->datlen) {
            _db_dodelete(db);
            ptrval = _db_readptr(db, db->chainoff);
            _db_writedat(db, data, 0, SEEK_END);
            _db_writeidx(db, key, 0, SEEK_END, ptrval);
            _db_writeptr(db, db->chainoff, db->idxoff);
            db->cnt_stor3++;
        } else {
            _db_writedat(db, data, db->datoff, SEEK_SET);
            db->cnt_stor4++;
        }
    }
    rc = 0;

doreturn:
    if (un_lock(db->idxfd, db->chainoff, SEEK_SET, 1) < 0)
        err_dump("db_store: un_lock error");
    return(rc);
}

/*
 * Try to find a free index record.
 */
static int
_db_findfree(DB *db, int keylen, int datlen)
{
    int    rc;
    off_t  offset, nextoffset, saveoffset;

    if (writew_lock(db->idxfd, FREE_OFF, SEEK_SET, 1) < 0)
        err_dump("_db_findfree: writew_lock error");

    saveoffset = FREE_OFF;
    offset = _db_readptr(db, saveoffset);

    while (offset != 0) {
        nextoffset = _db_readidx(db, offset);
        if (strlen(db->idxbuf) == (size_t)keylen && (int)db->datlen == datlen)
            break;
        saveoffset = offset;
        offset = nextoffset;
    }

    if (offset == 0) {
        rc = -1;
    } else {
        _db_writeptr(db, saveoffset, db->ptrval);
        rc = 0;
    }

    if (un_lock(db->idxfd, FREE_OFF, SEEK_SET, 1) < 0)
        err_dump("_db_findfree: un_lock error");
    return(rc);
}

/*
 * Rewind the index file for db_nextrec.
 */
void
db_rewind(DBHANDLE h)
{
    DB     *db = (DB *)h;

    /* Position sequential scan at first index record (after hash table + newline) */
    db->seq_pos = (db->nhash + 1) * PTR_SZ + 1;
    db->idxoff  = db->seq_pos;
}

/*
 * Return the next sequential record.
 */
char *
db_nextrec(DBHANDLE h, char *key)
{
    DB   *db = (DB *)h;
    char  c;
    char *ptr;

    if (readw_lock(db->idxfd, FREE_OFF, SEEK_SET, 1) < 0)
        err_dump("db_nextrec: readw_lock error");

    do {
        if (_db_readidx(db, 0) < 0) {
            ptr = NULL;
            goto doreturn;
        }
        ptr = db->idxbuf;
        while ((c = *ptr++) != 0 && c == SPACE)
            ;
    } while (c == 0);

    if (key != NULL)
        strcpy(key, db->idxbuf);
    ptr = _db_readdat_seq(db);  /* use ring buffer to prevent scan pollution */
    db->cnt_nextrec++;

doreturn:
    if (un_lock(db->idxfd, FREE_OFF, SEEK_SET, 1) < 0)
        err_dump("db_nextrec: un_lock error");
    return(ptr);
}

/*
 * File locking implementation.
 * On Windows: uses LockFileEx/UnlockFileEx.
 * On POSIX: uses fcntl().
 */
int
lock_reg(int fd, int cmd, int type, off_t offset, int whence, off_t len)
{
#ifdef _WIN32
    HANDLE hFile;
    OVERLAPPED ovlp;
    DWORD flags = 0;
    LARGE_INTEGER li_offset, li_len;
    BOOL result;
    long curpos;

    (void)cmd;

    hFile = (HANDLE)_get_osfhandle(fd);
    if (hFile == INVALID_HANDLE_VALUE)
        return -1;

    /* Calculate absolute offset based on whence */
    if (whence == SEEK_CUR) {
        curpos = _lseek(fd, 0, SEEK_CUR);
        if (curpos == -1) return -1;
        offset += curpos;
    } else if (whence == SEEK_END) {
        curpos = _lseek(fd, 0, SEEK_END);
        if (curpos == -1) return -1;
        offset += curpos;
    }

    memset(&ovlp, 0, sizeof(ovlp));
    li_offset.QuadPart = offset;
    ovlp.Offset = li_offset.LowPart;
    ovlp.OffsetHigh = li_offset.HighPart;

    if (len == 0) {
        li_len.QuadPart = 0x7FFFFFFFLL;
    } else {
        li_len.QuadPart = len;
    }

    if (type == F_UNLCK) {
        result = UnlockFileEx(hFile, 0, li_len.LowPart, li_len.HighPart, &ovlp);
        return result ? 0 : -1;
    }

    if (type == F_WRLCK)
        flags = LOCKFILE_EXCLUSIVE_LOCK;
    if (cmd == F_SETLK)
        flags |= LOCKFILE_FAIL_IMMEDIATELY;

    result = LockFileEx(hFile, flags, 0, li_len.LowPart, li_len.HighPart, &ovlp);
    return result ? 0 : -1;
#else
    struct flock lock;
    lock.l_type = type;
    lock.l_start = offset;
    lock.l_whence = whence;
    lock.l_len = len;
    return(fcntl(fd, cmd, &lock));
#endif
}
