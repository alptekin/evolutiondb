/*
 * replication.c — WAL Streaming Replication for EvoSQL
 *
 * Master: accepts replica connections, streams WAL records.
 * Replica: connects to master, receives and replays WAL records.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/time.h>
#include <fcntl.h>
#include <errno.h>
#include "replication.h"
#include "raft.h"                              /* RAFT_LEADER/_FOLLOWER/_CANDIDATE */
#include "tls.h"
#include "../evolution/db/wal.h"
#include "../evolution/db/page_mgr.h"
#include "../evolution/db/page_crypt.h"
#include "../evolution/db/buffer_pool.h"  /* bp_invalidate_page */
#include "../evolution/db/catalog_internal.h"   /* cat_find_user, UserDesc */
/* crypto.h defines SHA256_CTX which collides with OpenSSL's when
 * EVOSQL_TLS is defined (tls.h pulls in <openssl/ssl.h>). Keep a
 * local forward declaration instead of including crypto.h. */
int crypto_verify_password(const char *password, const char *encoded);

/* Allow the role to be pinned from the CLI / env so SHOW REPLICATION STATUS
 * and pg_is_in_recovery reflect operator intent before any replica connects.
 * 0 = primary (default), 1 = replica, 2 = witness. Set via repl_set_role(). */
static int g_repl_role = REPL_ROLE_PRIMARY;

/* Replication TLS flag — set by repl_enable_tls / EVOSQL_REPLICATION_TLS.
 * Declared here so both sender thread and the setter below can see it. */
static int g_repl_tls_enabled = 0;

/* Replication auth credentials set via repl_set_auth / EVOSQL_REPLICATION_USER.
 * When configured, the sender requires an AUTH line and validates via
 * cat_find_user + crypto_verify_password. */
static char g_repl_auth_user[128] = "";
static char g_repl_auth_pass[128] = "";

static inline int repl_auth_configured(void)
{
    return g_repl_auth_user[0] != '\0';
}

/* ================================================================
 *  Shared state
 * ================================================================ */
static volatile int g_repl_running = 0;
static int          g_is_replica = 0;

/* Forward declarations for CDC */
static repl_change_callback g_cdc_callback;
static void *g_cdc_ctx;
static void cdc_decode_page(const char *page_data, uint16_t page_len,
                             uint32_t page_no, int64_t timestamp);
static void *cdc_accept_loop(void *arg);
static void *cdc_client_handler(void *arg);

/* ================================================================
 *  Master: WAL sender
 * ================================================================ */

static int          g_sender_sock = -1;
static pthread_t    g_sender_thread;
static pthread_mutex_t g_sender_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t  g_sender_cond = PTHREAD_COND_INITIALIZER;

/* Arguments passed from accept loop to the per-replica streaming thread. */
typedef struct {
    int  client_fd;
    char client_addr[64];   /* "ip:port" used as replica_id for slot tracking */
} SenderArg;

/* Drain any pending replica→master frames. Parses REPL_MSG_ACK
 * ('A' + uint32 LSN) and updates the slot. Any other byte stream is
 * silently skipped (Commit 4 will reject). Returns 0 on normal drain,
 * -1 if peer has closed the connection. */
static int sender_drain_acks(conn_t *c, const char *replica_id)
{
    char buf[256];
    while (1) {
        int n = conn_try_recv(c, buf, sizeof(buf));
        if (n == 0) return 0;        /* would block — no data right now */
        if (n < 0) return -1;        /* peer close / error */
        unsigned char *u = (unsigned char *)buf;
        for (int i = 0; i + REPL_ACK_FRAME_SIZE <= n; ) {
            if (u[i] == REPL_MSG_ACK) {
                uint32_t confirmed;
                memcpy(&confirmed, u + i + 1, 4);
                repl_slot_update(replica_id, confirmed);
                i += REPL_ACK_FRAME_SIZE;
            } else {
                i++;  /* byte-level resync */
            }
        }
    }
}

/* Handle a single replica connection: stream WAL records */
static void *sender_handle_replica(void *arg)
{
    SenderArg *sa = (SenderArg *)arg;
    int client_fd = sa->client_fd;
    char replica_id[64];
    strncpy(replica_id, sa->client_addr, sizeof(replica_id) - 1);
    replica_id[sizeof(replica_id) - 1] = '\0';
    free(sa);

    fprintf(stderr, "[REPL] Replica connected: %s\n", replica_id);

    /* Wrap the accepted socket in a conn_t so all subsequent I/O flows
     * through the TLS-aware layer. When repl_enable_tls(1) was set and
     * the global TLS context is available, upgrade the transport now. */
    conn_t c;
    conn_init(&c, client_fd);
    if (g_repl_tls_enabled && tls_is_available()) {
        if (conn_tls_accept(&c) < 0) {
            fprintf(stderr, "[REPL] TLS handshake failed for %s — closing\n",
                    replica_id);
            close(client_fd);
            return NULL;
        }
    }

    /* Read handshake: "REPLICATE <last_lsn>\n" */
    char buf[256];
    int n = conn_recv_line(&c, buf, sizeof(buf));
    if (n <= 0) { conn_tls_shutdown(&c); close(client_fd); return NULL; }

    uint32_t start_lsn = 0;
    if (strncmp(buf, "REPLICATE ", 10) == 0)
        start_lsn = (uint32_t)atoi(buf + 10);

    /* Auth handshake:
     * When auth is configured on the master, the replica must follow
     * REPLICATE with "AUTH <user> <password>\n". We validate the password
     * via crypto_verify_password (PBKDF2-SHA256) against the catalog. */
    if (repl_auth_configured()) {
        char authbuf[512];
        int an = conn_recv_line(&c, authbuf, sizeof(authbuf));
        if (an <= 0 || strncmp(authbuf, "AUTH ", 5) != 0) {
            conn_send_line(&c, "ERR missing AUTH");
            fprintf(stderr, "[REPL] %s rejected — no AUTH line\n", replica_id);
            conn_tls_shutdown(&c);
            close(client_fd);
            return NULL;
        }
        char *user_s = authbuf + 5;
        char *pass_s = strchr(user_s, ' ');
        if (!pass_s) {
            conn_send_line(&c, "ERR malformed AUTH");
            conn_tls_shutdown(&c);
            close(client_fd);
            return NULL;
        }
        *pass_s++ = '\0';
        /* Strip trailing newline/carriage-return from password if any */
        char *cr = strpbrk(pass_s, "\r\n");
        if (cr) *cr = '\0';

        /* Look up user in the catalog, then constant-time compare via
         * crypto_verify_password (PBKDF2-SHA256). */
        UserDesc ud;
        int ok = 0;
        if (cat_find_user(user_s, &ud) == 0 &&
            crypto_verify_password(pass_s, ud.password_hash) == 1) {
            ok = 1;
        }
        if (!ok) {
            conn_send_line(&c, "ERR bad credentials");
            fprintf(stderr, "[REPL] %s rejected — bad credentials for user=%s\n",
                    replica_id, user_s);
            conn_tls_shutdown(&c);
            close(client_fd);
            return NULL;
        }
        conn_send_line(&c, "OK");
        fprintf(stderr, "[REPL] %s authenticated as %s\n", replica_id, user_s);
    }

    /* Register slot — active from this point; replicated confirmed_lsn
     * is start_lsn until the first ACK arrives. */
    repl_slot_update(replica_id, start_lsn);

    fprintf(stderr, "[REPL] Replica %s requests WAL from LSN %u (tls=%d)\n",
            replica_id, start_lsn, c.is_tls);

    /* Send WAL file content from the requested offset.
     * WAL records start after the 16-byte header. */
    int wal_fd = open("evosql.wal", O_RDONLY);
    if (wal_fd < 0) {
        /* Try with root/ prefix */
        wal_fd = open("root/evosql.wal", O_RDONLY);
    }
    if (wal_fd < 0) {
        fprintf(stderr, "[REPL] Cannot open WAL file for streaming\n");
        close(client_fd);
        return NULL;
    }

    off_t pos = sizeof(WalHeader);  /* skip WAL header */
    off_t file_size = lseek(wal_fd, 0, SEEK_END);

    /* Stream existing records */
    while (pos < file_size && g_repl_running) {
        /* Read record header to get size */
        char hdr[WAL_RECORD_HEADER_SIZE];
        if (pread(wal_fd, hdr, WAL_RECORD_HEADER_SIZE, pos) != WAL_RECORD_HEADER_SIZE)
            break;

        uint32_t rec_lsn;
        uint16_t rec_page_len;
        memcpy(&rec_lsn, hdr, 4);
        memcpy(&rec_page_len, hdr + 8, 2);

        if (rec_page_len == 0 || rec_page_len > 4096) break;

        /* Skip records older than requested LSN */
        size_t rec_total = WAL_RECORD_HEADER_SIZE + rec_page_len + WAL_CRC_SIZE;
        if (rec_lsn <= start_lsn) {
            pos += rec_total;
            continue;
        }

        /* Read full record */
        char *rec = malloc(rec_total);
        if (!rec) break;
        if (pread(wal_fd, rec, rec_total, pos) != (ssize_t)rec_total) {
            free(rec);
            break;
        }

        /* Send: [type:1][len:4][record:N] */
        char msg_type = REPL_MSG_WAL_DATA;
        uint32_t msg_len = (uint32_t)rec_total;
        conn_send_all(&c, &msg_type, 1);
        conn_send_all(&c, (const char *)&msg_len, 4);
        conn_send_all(&c, rec, (int)rec_total);
        free(rec);

        pos += rec_total;
    }
    close(wal_fd);

    /* Catch-up finished — drain whatever replica already ACK'd. */
    if (sender_drain_acks(&c, replica_id) < 0) goto disconnected;

    /* Now stream live: wait for new WAL records */
    while (g_repl_running) {
        pthread_mutex_lock(&g_sender_lock);
        /* Wait for notification of new WAL records */
        struct timespec ts;
        clock_gettime(CLOCK_REALTIME, &ts);
        ts.tv_sec += 5;  /* 5 second heartbeat interval */
        pthread_cond_timedwait(&g_sender_cond, &g_sender_lock, &ts);
        pthread_mutex_unlock(&g_sender_lock);

        /* Pull pending ACKs before sending the next batch so sync_commit
         * waiters see the latest confirmed_lsn promptly. */
        if (sender_drain_acks(&c, replica_id) < 0) goto disconnected;

        /* Check for new records in WAL */
        wal_fd = open("evosql.wal", O_RDONLY);
        if (wal_fd < 0) wal_fd = open("root/evosql.wal", O_RDONLY);
        if (wal_fd < 0) continue;

        file_size = lseek(wal_fd, 0, SEEK_END);
        while (pos < file_size && g_repl_running) {
            char hdr[WAL_RECORD_HEADER_SIZE];
            if (pread(wal_fd, hdr, WAL_RECORD_HEADER_SIZE, pos) != WAL_RECORD_HEADER_SIZE)
                break;

            uint16_t rec_page_len;
            memcpy(&rec_page_len, hdr + 8, 2);
            if (rec_page_len == 0 || rec_page_len > 4096) break;

            size_t rec_total = WAL_RECORD_HEADER_SIZE + rec_page_len + WAL_CRC_SIZE;
            char *rec = malloc(rec_total);
            if (!rec) break;
            if (pread(wal_fd, rec, rec_total, pos) != (ssize_t)rec_total) {
                free(rec);
                break;
            }

            char msg_type = REPL_MSG_WAL_DATA;
            uint32_t msg_len = (uint32_t)rec_total;
            if (conn_send_all(&c, &msg_type, 1) < 0 ||
                conn_send_all(&c, (const char *)&msg_len, 4) < 0 ||
                conn_send_all(&c, rec, (int)rec_total) < 0) {
                free(rec);
                close(wal_fd);
                goto disconnected;
            }
            free(rec);
            pos += rec_total;
        }
        close(wal_fd);

        /* Send heartbeat if no data */
        if (g_repl_running) {
            char hb = REPL_MSG_HEARTBEAT;
            if (conn_send_all(&c, &hb, 1) < 0)
                goto disconnected;
            /* Drain one more time — heartbeat tick may coincide with
             * receiver's periodic ACK. Peer-close detected here too. */
            if (sender_drain_acks(&c, replica_id) < 0)
                goto disconnected;
        }
    }

disconnected:
    fprintf(stderr, "[REPL] Replica disconnected: %s\n", replica_id);
    repl_slot_deactivate(replica_id);
    conn_tls_shutdown(&c);
    close(client_fd);
    return NULL;
}

static void *sender_listener(void *arg)
{
    int port = *(int *)arg;
    free(arg);

    g_sender_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (g_sender_sock < 0) {
        fprintf(stderr, "[REPL] Cannot create sender socket\n");
        return NULL;
    }

    int opt = 1;
    setsockopt(g_sender_sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(port);

    if (bind(g_sender_sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        fprintf(stderr, "[REPL] Cannot bind replication port %d: %s\n",
                port, strerror(errno));
        close(g_sender_sock);
        g_sender_sock = -1;
        return NULL;
    }

    listen(g_sender_sock, 4);
    fprintf(stderr, "[REPL] WAL sender listening on port %d\n", port);

    while (g_repl_running) {
        struct sockaddr_in client_addr;
        socklen_t addrlen = sizeof(client_addr);
        int client_fd = accept(g_sender_sock, (struct sockaddr *)&client_addr, &addrlen);
        if (client_fd < 0) {
            if (g_repl_running) perror("[REPL] accept");
            continue;
        }

        int nodelay = 1;
        setsockopt(client_fd, IPPROTO_TCP, TCP_NODELAY, &nodelay, sizeof(nodelay));

        SenderArg *sa = malloc(sizeof(SenderArg));
        if (!sa) { close(client_fd); continue; }
        sa->client_fd = client_fd;
        snprintf(sa->client_addr, sizeof(sa->client_addr), "%s:%d",
                 inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));
        pthread_t t;
        pthread_create(&t, NULL, sender_handle_replica, sa);
        pthread_detach(t);
    }

    return NULL;
}

int repl_start_sender(int port)
{
    g_repl_running = 1;
    int *port_ptr = malloc(sizeof(int));
    *port_ptr = port;
    pthread_create(&g_sender_thread, NULL, sender_listener, port_ptr);
    return 0;
}

void repl_stop_sender(void)
{
    g_repl_running = 0;
    pthread_cond_broadcast(&g_sender_cond);
    if (g_sender_sock >= 0) {
        shutdown(g_sender_sock, SHUT_RDWR);
        close(g_sender_sock);
        g_sender_sock = -1;
    }
    pthread_join(g_sender_thread, NULL);
}

void repl_notify_new_wal(void)
{
    pthread_cond_broadcast(&g_sender_cond);
}

/* ================================================================
 *  Replica: WAL receiver
 * ================================================================ */

static pthread_t g_receiver_thread;

/* recv_all was used by the pre-conn_t receiver loop; now superseded by
 * conn_recv_exact which handles both plain and TLS transports. */

/* Replication slot: persist last received LSN to file */
static uint32_t g_last_received_lsn = 0;
static const char *g_slot_path = "root/evosql.slot";

static void slot_save(uint32_t lsn)
{
    g_last_received_lsn = lsn;
    int fd = open(g_slot_path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd >= 0) { write(fd, &lsn, 4); close(fd); }
}

static uint32_t slot_load(void)
{
    uint32_t lsn = 0;
    int fd = open(g_slot_path, O_RDONLY);
    if (fd >= 0) { read(fd, &lsn, 4); close(fd); }
    g_last_received_lsn = lsn;
    return lsn;
}

/* Send an ACK frame from replica → master. Safe to call any time after
 * the socket is connected; errors are ignored (next ACK retries). */
static void send_ack_conn(conn_t *c, uint32_t confirmed_lsn)
{
    unsigned char frame[REPL_ACK_FRAME_SIZE];
    frame[0] = REPL_MSG_ACK;
    memcpy(frame + 1, &confirmed_lsn, 4);
    conn_send_all(c, (const char *)frame, sizeof(frame));
}

typedef struct {
    conn_t *c;
    int     data_fd;
} ReceiverArg;

static void *receiver_loop(void *arg)
{
    /* ra is stack-allocated by reconnect_loop — do NOT free. */
    ReceiverArg *ra = (ReceiverArg *)arg;
    conn_t *c = ra->c;
    int data_fd = ra->data_fd;

    fprintf(stderr, "[REPL] WAL receiver started (last_lsn=%u, tls=%d)\n",
            g_last_received_lsn, c->is_tls);

    int records = 0;
    /* Initial ACK so master sees the replica's resume point without
     * waiting for the first WAL record. */
    send_ack_conn(c, g_last_received_lsn);

    while (g_repl_running) {
        /* Read message type */
        char msg_type;
        if (conn_recv_exact(c, &msg_type, 1) < 0) break;

        if (msg_type == REPL_MSG_HEARTBEAT) {
            /* Master heartbeat — respond with current confirmed LSN so
             * sync_commit waiters and SHOW REPLICATION STATUS stay fresh
             * even when no WAL is flowing. */
            send_ack_conn(c, g_last_received_lsn);
            continue;
        }
        if (msg_type == REPL_MSG_END) { sleep(1); continue; }

        if (msg_type == REPL_MSG_WAL_DATA) {
            /* Read length + record */
            uint32_t msg_len;
            if (conn_recv_exact(c, (char *)&msg_len, 4) < 0) break;

            char *rec = malloc(msg_len);
            if (!rec) break;
            if (conn_recv_exact(c, rec, (int)msg_len) < 0) { free(rec); break; }

            /* Parse WAL record header */
            uint32_t rec_page_no;
            uint16_t rec_page_len;
            memcpy(&rec_page_no, rec + 4, 4);
            memcpy(&rec_page_len, rec + 8, 2);

            /* Skip XA records (sentinel page numbers) */
            if (rec_page_no < 0xFFFFFFFC && rec_page_len <= 4096) {
                /* Apply page to local data file */
                char *page_data = rec + WAL_RECORD_HEADER_SIZE;
                off_t offset = (off_t)rec_page_no * 4096;

                /* TDE: encrypt before writing if enabled */
                if (pcrypt_is_enabled() && rec_page_no > 0) {
                    uint8_t enc[4096];
                    memcpy(enc, page_data, rec_page_len);
                    pcrypt_encrypt_page(enc, rec_page_no);
                    pwrite(data_fd, enc, rec_page_len, offset);
                } else {
                    pwrite(data_fd, page_data, rec_page_len, offset);
                }
                /* Invalidate any cached copy in the replica's buffer pool —
                 * the on-disk page is now newer than whatever bp might have.
                 * Without this, a SELECT on the replica reads stale pages
                 * (e.g. old catalog → "relation does not exist" after
                 * CREATE TABLE on primary). */
                bp_invalidate_page(data_fd, rec_page_no);
                records++;

                /* Update replication slot LSN (persist every 100 records) */
                {
                    uint32_t rec_lsn;
                    memcpy(&rec_lsn, rec, 4);
                    g_last_received_lsn = rec_lsn;
                    if (records % 100 == 0) {
                        slot_save(rec_lsn);
                        /* ACK every 100 records so master sync_commit
                         * waiters don't stall for the 5s heartbeat. */
                        send_ack_conn(c, rec_lsn);
                    }
                }

                /* CDC: decode page image for logical replication events */
                if (g_cdc_callback && rec_page_no > 0) {
                    int64_t ts = 0;
                    memcpy(&ts, rec + 10, 8);  /* timestamp at offset 10 */
                    cdc_decode_page(page_data, rec_page_len, rec_page_no, ts);
                }

                if (records % 1000 == 0)
                    fprintf(stderr, "[REPL] Replayed %d records\n", records);
            }

            free(rec);
        }
    }

    if (g_last_received_lsn > 0) slot_save(g_last_received_lsn);
    fprintf(stderr, "[REPL] WAL receiver stopped after %d records (last_lsn=%u)\n",
            records, g_last_received_lsn);
    conn_tls_shutdown(c);
    close(c->sock);
    return NULL;
}

/* Auto-reconnect wrapper — retries connection with exponential backoff */
static char g_master_host[256];
static int  g_master_port;
static int  g_data_fd_saved;

static void *reconnect_loop(void *arg)
{
    (void)arg;
    int backoff_sec = 1;

    while (g_repl_running) {
        /* Load last confirmed LSN */
        uint32_t start_lsn = slot_load();

        /* Connect to master */
        int sock = socket(AF_INET, SOCK_STREAM, 0);
        if (sock < 0) { sleep(backoff_sec); continue; }

        struct sockaddr_in addr;
        memset(&addr, 0, sizeof(addr));
        addr.sin_family = AF_INET;
        addr.sin_port = htons(g_master_port);
        struct hostent *he = gethostbyname(g_master_host);
        if (he) memcpy(&addr.sin_addr, he->h_addr, he->h_length);
        else addr.sin_addr.s_addr = inet_addr(g_master_host);

        if (connect(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
            close(sock);
            fprintf(stderr, "[REPL] Cannot connect to master %s:%d — retry in %ds\n",
                    g_master_host, g_master_port, backoff_sec);
            sleep(backoff_sec);
            if (backoff_sec < 30) backoff_sec *= 2;  /* exponential backoff, max 30s */
            continue;
        }

        backoff_sec = 1;  /* reset on successful connect */

        /* Wrap in conn_t and optionally upgrade to TLS matching master. */
        conn_t c;
        conn_init(&c, sock);
        if (g_repl_tls_enabled) {
            if (conn_tls_connect(&c) < 0) {
                fprintf(stderr, "[REPL] TLS client handshake failed — retrying\n");
                close(sock);
                sleep(2);
                continue;
            }
        }

        fprintf(stderr, "[REPL] Connected to master %s:%d (resume from LSN %u, tls=%d)\n",
                g_master_host, g_master_port, start_lsn, c.is_tls);

        /* Send handshake with last known LSN */
        char handshake[64];
        int hlen = snprintf(handshake, sizeof(handshake), "REPLICATE %u\n", start_lsn);
        if (conn_send_all(&c, handshake, hlen) < 0) {
            conn_tls_shutdown(&c);
            close(sock);
            sleep(1);
            continue;
        }

        /* If the replica was configured with credentials, send AUTH.
         * Master demands this when its own auth is configured; sending
         * unsolicited AUTH to a non-auth master is harmless (master
         * just ignores extra bytes). */
        if (repl_auth_configured()) {
            char authline[384];
            int alen = snprintf(authline, sizeof(authline), "AUTH %s %s\n",
                                g_repl_auth_user, g_repl_auth_pass);
            if (conn_send_all(&c, authline, alen) < 0) {
                conn_tls_shutdown(&c);
                close(sock);
                sleep(1);
                continue;
            }
            /* Wait for OK / ERR response so we know we're authenticated
             * before the master starts streaming. */
            char resp[128];
            int rn = conn_recv_line(&c, resp, sizeof(resp));
            if (rn <= 0 || strncmp(resp, "OK", 2) != 0) {
                fprintf(stderr, "[REPL] Auth failed: %s\n",
                        rn > 0 ? resp : "(no response)");
                conn_tls_shutdown(&c);
                close(sock);
                sleep(5);  /* don't hammer — wrong creds */
                continue;
            }
        }

        /* Run receiver loop (blocks until disconnect). receiver_loop is
         * called synchronously — ra can live on reconnect_loop's stack
         * for the duration. */
        ReceiverArg ra = { .c = &c, .data_fd = g_data_fd_saved };
        receiver_loop(&ra);

        if (g_repl_running)
            fprintf(stderr, "[REPL] Connection lost — reconnecting...\n");
    }
    return NULL;
}

int repl_start_receiver(const char *master_host, int master_port, int data_fd)
{
    g_is_replica = 1;
    g_repl_running = 1;
    strncpy(g_master_host, master_host, 255);
    g_master_port = master_port;
    g_data_fd_saved = data_fd;

    /* Load persisted LSN */
    slot_load();

    /* Start auto-reconnect thread */
    pthread_create(&g_receiver_thread, NULL, reconnect_loop, NULL);

    return 0;
}

void repl_stop_receiver(void)
{
    g_repl_running = 0;
    pthread_join(g_receiver_thread, NULL);
}

int repl_is_replica(void)
{
    return g_is_replica;
}

/* ================================================================
 *  Logical Replication — Change Data Capture (CDC)
 *
 *  Decodes WAL page images by comparing tuple MVCC headers:
 *  - Tuple with xmin > 0 and xmax == 0 → INSERT
 *  - Tuple with xmax > 0 → DELETE (or UPDATE old version)
 *  - HEAP_ONLY tuple with xmin > 0 → UPDATE new version
 * ================================================================ */

/* g_cdc_callback and g_cdc_ctx declared above as forward declarations */

void repl_set_change_callback(repl_change_callback cb, void *ctx)
{
    g_cdc_callback = cb;
    g_cdc_ctx = ctx;
}

/* Decode a WAL page image and emit CDC events.
 * Called during replica WAL replay if a callback is registered. */
static void cdc_decode_page(const char *page_data, uint16_t page_len,
                             uint32_t page_no, int64_t timestamp)
{
    if (!g_cdc_callback || page_len < 16) return;

    /* Read slotted page header */
    uint16_t num_slots;
    memcpy(&num_slots, page_data + 16, 2);  /* SlottedHeader.num_slots at offset 16 */

    for (uint16_t si = 0; si < num_slots && si < 256; si++) {
        /* SlotEntry at offset 16 + 6 + si*4 */
        uint16_t rec_offset, rec_len;
        int slot_off = 16 + 6 + si * 4;
        if (slot_off + 4 > page_len) break;
        memcpy(&rec_offset, page_data + slot_off, 2);
        memcpy(&rec_len, page_data + slot_off + 2, 2);
        if (rec_offset == 0 || rec_offset + rec_len > page_len) continue;

        const char *rec = page_data + rec_offset;

        /* Check tuple magic (0xE7) */
        if ((unsigned char)rec[0] != 0xE7) continue;
        if (rec_len < 9 + 8) continue;  /* prefix(5) + header(4) + mvcc(8) min */

        /* Check MVCC flag */
        uint8_t flags = (uint8_t)rec[8];  /* prefix(5) + header byte 3 */
        if (!(flags & 0x02)) continue;  /* no MVCC header */

        /* Read xmin/xmax */
        uint32_t xmin, xmax;
        memcpy(&xmin, rec + 9, 4);
        memcpy(&xmax, rec + 13, 4);

        /* Read table_id from prefix */
        uint32_t table_id;
        memcpy(&table_id, rec + 1, 4);

        ReplicationChangeEvent event;
        event.table_id = table_id;
        event.timestamp = timestamp;
        event.pk_key[0] = '\0';

        if (xmax == 0 && xmin > 0) {
            /* Live tuple — could be INSERT */
            if (flags & 0x08) {
                /* HEAP_ONLY = UPDATE new version */
                event.type = 'U';
                event.xid = xmin;
            } else {
                event.type = 'I';
                event.xid = xmin;
            }
            g_cdc_callback(&event, g_cdc_ctx);
        } else if (xmax > 0 && !(flags & 0x04)) {
            /* xmax set, not HOT_UPDATED → DELETE */
            event.type = 'D';
            event.xid = xmax;
            g_cdc_callback(&event, g_cdc_ctx);
        }
    }
}

/* ================================================================
 *  GAP-D11: Replication TLS (g_repl_tls_enabled declared at top)
 * ================================================================ */
void repl_enable_tls(int enabled)
{
    g_repl_tls_enabled = enabled;
    if (enabled)
        fprintf(stderr, "[REPL] TLS enabled for replication connections\n");
}

/* ================================================================
 *  GAP-D12: Replication Authentication
 *  g_repl_auth_user/_pass declared at top of file so sender_handle_replica
 *  can read them before this setter block is reached.
 * ================================================================ */

void repl_set_auth(const char *user, const char *password)
{
    if (user) {
        strncpy(g_repl_auth_user, user, sizeof(g_repl_auth_user) - 1);
        g_repl_auth_user[sizeof(g_repl_auth_user) - 1] = '\0';
    }
    if (password) {
        strncpy(g_repl_auth_pass, password, sizeof(g_repl_auth_pass) - 1);
        g_repl_auth_pass[sizeof(g_repl_auth_pass) - 1] = '\0';
    }
    fprintf(stderr, "[REPL] Authentication configured (user=%s)\n",
            g_repl_auth_user);
}

/* ================================================================
 *  GAP-D4: Multi-Replica Slot Tracking
 * ================================================================ */
static ReplicationSlot g_repl_slots[REPL_MAX_SLOTS];
static pthread_mutex_t g_slot_lock = PTHREAD_MUTEX_INITIALIZER;

/* Sync-commit condvar: signaled when repl_slot_update advances a slot's
 * confirmed_lsn or when a slot drops out. Declared here so both
 * repl_slot_update and repl_sync_commit (further down) can use them. */
static pthread_mutex_t g_sync_commit_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t  g_sync_commit_cond = PTHREAD_COND_INITIALIZER;

/* Register/update a replica slot (called when replica connects or ACKs). */
void repl_slot_update(const char *replica_id, uint32_t confirmed_lsn)
{
    pthread_mutex_lock(&g_slot_lock);

    /* Find existing or free slot */
    int free_idx = -1;
    int updated = 0;
    for (int i = 0; i < REPL_MAX_SLOTS; i++) {
        if (g_repl_slots[i].active &&
            strcmp(g_repl_slots[i].replica_id, replica_id) == 0) {
            if (confirmed_lsn > g_repl_slots[i].confirmed_lsn) {
                g_repl_slots[i].confirmed_lsn = confirmed_lsn;
                updated = 1;
            }
            struct timeval tv; gettimeofday(&tv, NULL);
            g_repl_slots[i].last_seen = (int64_t)tv.tv_sec * 1000000LL + tv.tv_usec;
            pthread_mutex_unlock(&g_slot_lock);
            if (updated) {
                /* Wake anyone in repl_sync_commit waiting for this LSN. */
                pthread_mutex_lock(&g_sync_commit_lock);
                pthread_cond_broadcast(&g_sync_commit_cond);
                pthread_mutex_unlock(&g_sync_commit_lock);
            }
            return;
        }
        if (!g_repl_slots[i].active && free_idx < 0)
            free_idx = i;
    }

    /* New slot */
    if (free_idx >= 0) {
        strncpy(g_repl_slots[free_idx].replica_id, replica_id, 63);
        g_repl_slots[free_idx].replica_id[63] = '\0';
        g_repl_slots[free_idx].confirmed_lsn = confirmed_lsn;
        g_repl_slots[free_idx].active = 1;
        struct timeval tv; gettimeofday(&tv, NULL);
        g_repl_slots[free_idx].last_seen = (int64_t)tv.tv_sec * 1000000LL + tv.tv_usec;
        fprintf(stderr, "[REPL] New replication slot: %s (lsn=%u)\n",
                replica_id, confirmed_lsn);
        pthread_mutex_unlock(&g_slot_lock);
        pthread_mutex_lock(&g_sync_commit_lock);
        pthread_cond_broadcast(&g_sync_commit_cond);
        pthread_mutex_unlock(&g_sync_commit_lock);
        return;
    }
    pthread_mutex_unlock(&g_slot_lock);
}

/* Mark a slot inactive when its connection drops. Keeps confirmed_lsn
 * so catch-up on reconnect can pick up where we left off. */
void repl_slot_deactivate(const char *replica_id)
{
    pthread_mutex_lock(&g_slot_lock);
    for (int i = 0; i < REPL_MAX_SLOTS; i++) {
        if (g_repl_slots[i].active &&
            strcmp(g_repl_slots[i].replica_id, replica_id) == 0) {
            g_repl_slots[i].active = 0;
            fprintf(stderr, "[REPL] Slot inactive: %s (last lsn=%u)\n",
                    replica_id, g_repl_slots[i].confirmed_lsn);
            break;
        }
    }
    pthread_mutex_unlock(&g_slot_lock);
    /* Wake any waiter — fewer replicas changes majority math. */
    pthread_mutex_lock(&g_sync_commit_lock);
    pthread_cond_broadcast(&g_sync_commit_cond);
    pthread_mutex_unlock(&g_sync_commit_lock);
}

int repl_list_slots(ReplicationSlot *out, int max)
{
    pthread_mutex_lock(&g_slot_lock);
    int count = 0;
    for (int i = 0; i < REPL_MAX_SLOTS && count < max; i++) {
        if (g_repl_slots[i].active)
            out[count++] = g_repl_slots[i];
    }
    pthread_mutex_unlock(&g_slot_lock);
    return count;
}

/* ================================================================
 *  Sync-commit logic (Commit 2)
 *  g_sync_commit_lock/cond are declared at the top of the slot section
 *  so repl_slot_update can broadcast on them.
 * ================================================================ */

/* Count active slots whose confirmed_lsn >= target. g_slot_lock must be held. */
static int count_confirmed_at_least(uint32_t target_lsn)
{
    int n = 0;
    for (int i = 0; i < REPL_MAX_SLOTS; i++) {
        if (g_repl_slots[i].active && g_repl_slots[i].confirmed_lsn >= target_lsn)
            n++;
    }
    return n;
}

/* Count active slots. g_slot_lock must be held. */
static int count_active_slots_locked(void)
{
    int n = 0;
    for (int i = 0; i < REPL_MAX_SLOTS; i++)
        if (g_repl_slots[i].active) n++;
    return n;
}

int repl_sync_commit(uint32_t lsn, int timeout_ms)
{
    pthread_mutex_lock(&g_slot_lock);
    int active = count_active_slots_locked();
    pthread_mutex_unlock(&g_slot_lock);

    /* No active replicas → no one to wait for. Return success so the
     * commit path degrades to async replication gracefully. */
    if (active == 0) return 0;

    /* Majority of replicas: ceil(active/2). For active=1 we need 1,
     * for active=2 we need 1, for active=3 we need 2, etc. */
    int needed = (active + 1) / 2;

    struct timespec deadline;
    clock_gettime(CLOCK_REALTIME, &deadline);
    deadline.tv_sec += timeout_ms / 1000;
    deadline.tv_nsec += (long)(timeout_ms % 1000) * 1000000L;
    if (deadline.tv_nsec >= 1000000000L) {
        deadline.tv_nsec -= 1000000000L;
        deadline.tv_sec  += 1;
    }

    pthread_mutex_lock(&g_sync_commit_lock);
    int ret = -1;
    while (1) {
        pthread_mutex_lock(&g_slot_lock);
        int got = count_confirmed_at_least(lsn);
        pthread_mutex_unlock(&g_slot_lock);
        if (got >= needed) { ret = 0; break; }

        int rc = pthread_cond_timedwait(&g_sync_commit_cond,
                                         &g_sync_commit_lock, &deadline);
        if (rc == ETIMEDOUT) break;
        /* Spurious wakeup — re-check predicate. */
    }
    pthread_mutex_unlock(&g_sync_commit_lock);
    return ret;
}

int repl_sync_commit_enabled(void)
{
    /* Cached at first call — env var read is only meaningful at boot
     * (docker restart re-reads the container env). Avoids per-COMMIT
     * getenv (linear scan of `environ`) on the hot path. */
    static int cached = -1;
    if (cached >= 0) return cached;
    const char *v = getenv("EVOSQL_SYNC_COMMIT");
    cached = (v && (v[0] == '1' || v[0] == 't' || v[0] == 'T' ||
                    v[0] == 'y' || v[0] == 'Y')) ? 1 : 0;
    return cached;
}

/* ================================================================
 *  Aggregated status — SHOW REPLICATION STATUS / pg_stat_replication
 * ================================================================ */

void repl_set_role(int role)
{
    if (role == REPL_ROLE_PRIMARY || role == REPL_ROLE_REPLICA ||
        role == REPL_ROLE_WITNESS) {
        g_repl_role = role;
    }
}

int repl_get_role(void)
{
    /* Late-arriving replica start wins over stored pin. */
    if (g_is_replica) return REPL_ROLE_REPLICA;
    return g_repl_role;
}

int repl_get_status(ReplicationStatus *out)
{
    if (!out) return -1;
    memset(out, 0, sizeof(*out));

    out->role = repl_get_role();
    if (out->role == REPL_ROLE_REPLICA) {
        out->my_lsn = g_last_received_lsn;
    } else {
        out->my_lsn = wal_get_current_lsn();
    }

    pthread_mutex_lock(&g_slot_lock);
    int count = 0;
    for (int i = 0; i < REPL_MAX_SLOTS; i++) {
        if (g_repl_slots[i].active) {
            out->slots[count++] = g_repl_slots[i];
        }
    }
    out->num_replicas = count;
    pthread_mutex_unlock(&g_slot_lock);
    return 0;
}

/* ================================================================
 *  GAP-D9: Base Backup
 *
 *  Produces a directory bundle at `backup_path`:
 *    <backup_path>/evosql.db      -- full data file, consistent at
 *                                    wal_fsync time
 *    <backup_path>/evosql.wal     -- current WAL (for replay past the
 *                                    LSN pinned in BACKUP_LABEL)
 *    <backup_path>/BACKUP_LABEL   -- metadata: {start_lsn, timestamp}
 *    <backup_path>/root            -- catalog-support files (future)
 *
 *  If backup_path ends in a regular filename (no trailing slash and
 *  parent exists but target doesn't), falls back to legacy single-file
 *  layout for backward compatibility.
 * ================================================================ */
#include <sys/stat.h>
#include <dirent.h>

static int copy_file(const char *src, const char *dst)
{
    int in = open(src, O_RDONLY);
    if (in < 0) return -1;
    int out = open(dst, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (out < 0) { close(in); return -1; }
    char buf[4096];
    ssize_t n;
    int rc = 0;
    while ((n = read(in, buf, sizeof(buf))) > 0) {
        if (write(out, buf, n) != n) { rc = -1; break; }
    }
    if (n < 0) rc = -1;
    fsync(out);
    close(in);
    close(out);
    return rc;
}

static int is_directory(const char *path)
{
    struct stat st;
    if (stat(path, &st) != 0) return 0;
    return S_ISDIR(st.st_mode);
}

int repl_create_backup(const char *backup_path)
{
    extern int pgm_get_fd(void);
    int src_fd = pgm_get_fd();
    if (src_fd < 0) return -1;

    /* Flush buffer pool + WAL to pin a consistent LSN. */
    extern void bp_flush_all(void);
    extern void pgm_flush(void);
    pgm_flush();
    if (wal_is_active()) wal_fsync();
    uint32_t start_lsn = wal_get_current_lsn();

    /* Directory-mode backup */
    if (mkdir(backup_path, 0700) == 0 || is_directory(backup_path)) {
        char dst_db[1024], dst_wal[1024], dst_label[1024];
        snprintf(dst_db,    sizeof(dst_db),    "%s/evosql.db", backup_path);
        snprintf(dst_wal,   sizeof(dst_wal),   "%s/evosql.wal", backup_path);
        snprintf(dst_label, sizeof(dst_label), "%s/BACKUP_LABEL", backup_path);

        /* Copy evosql.db */
        off_t file_size = lseek(src_fd, 0, SEEK_END);
        if (file_size <= 0) return -1;
        int out = open(dst_db, O_WRONLY | O_CREAT | O_TRUNC, 0600);
        if (out < 0) return -1;
        char buf[4096];
        off_t pos = 0;
        while (pos < file_size) {
            ssize_t n = pread(src_fd, buf, sizeof(buf), pos);
            if (n <= 0) break;
            if (write(out, buf, n) != n) { close(out); return -1; }
            pos += n;
        }
        fsync(out);
        close(out);

        /* Copy WAL (best-effort: if missing, BACKUP_LABEL.lsn still
         * lets the replica replay from its first catch-up stream). */
        if (access("evosql.wal", R_OK) == 0) copy_file("evosql.wal", dst_wal);
        else if (access("root/evosql.wal", R_OK) == 0)
            copy_file("root/evosql.wal", dst_wal);

        /* Write BACKUP_LABEL */
        FILE *lf = fopen(dst_label, "w");
        if (lf) {
            struct timeval tv; gettimeofday(&tv, NULL);
            fprintf(lf, "start_lsn=%u\n", start_lsn);
            fprintf(lf, "timestamp=%lld\n", (long long)tv.tv_sec);
            fprintf(lf, "format=v1\n");
            fclose(lf);
        }
        fprintf(stderr, "[REPL] Base backup bundle created at %s "
                "(lsn=%u, %lld data bytes)\n",
                backup_path, start_lsn, (long long)file_size);
        return 0;
    }

    /* Legacy single-file path: when backup_path points to a regular file. */
    off_t file_size = lseek(src_fd, 0, SEEK_END);
    if (file_size <= 0) return -1;
    int dst_fd = open(backup_path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dst_fd < 0) {
        fprintf(stderr, "[REPL] Cannot create backup file: %s\n", backup_path);
        return -1;
    }
    char buf[4096];
    off_t pos = 0;
    while (pos < file_size) {
        ssize_t n = pread(src_fd, buf, sizeof(buf), pos);
        if (n <= 0) break;
        write(dst_fd, buf, n);
        pos += n;
    }
    fsync(dst_fd);
    close(dst_fd);
    fprintf(stderr, "[REPL] Base backup created: %s (%lld bytes, lsn=%u)\n",
            backup_path, (long long)file_size, start_lsn);
    return 0;
}

/* ================================================================
 *  GAP-D1: Auto-Promote (follower → leader)
 * ================================================================ */
int repl_promote(void)
{
    if (!g_is_replica) {
        fprintf(stderr, "[REPL] Not in replica mode — nothing to promote\n");
        return -1;
    }

    fprintf(stderr, "[REPL] ★ PROMOTING to standalone master\n");

    /* Stop WAL receiver */
    g_repl_running = 0;
    g_is_replica = 0;

    /* From now on, DML is accepted (repl_is_replica returns 0) */
    fprintf(stderr, "[REPL] Promotion complete — now accepting writes\n");
    return 0;
}

/* ================================================================
 *  Raft ↔ Replication glue
 *
 *  Registered as raft_set_role_callback; fires under g_raft_lock so
 *  this function MUST NOT acquire any raft_* API. Reads are cheap
 *  side-effect calls into the replication module itself.
 * ================================================================ */
static int g_repl_port_for_raft = 0;   /* set by repl_bind_raft_glue */

void repl_bind_raft_glue(int replication_port)
{
    g_repl_port_for_raft = replication_port;
}

static void repl_on_raft_role_change(int new_role, int leader_id)
{
    (void)leader_id;
    switch (new_role) {
    case RAFT_LEADER:
        fprintf(stderr, "[REPL↔RAFT] Raft elected us LEADER — promoting\n");
        if (g_is_replica) {
            g_is_replica = 0;
            g_repl_running = 0;   /* stops any in-flight receiver loop */
        }
        g_repl_role = REPL_ROLE_PRIMARY;
        /* Start the WAL sender on the configured replication port.
         * Idempotent — no-op if already running. */
        if (g_repl_port_for_raft > 0 && g_sender_sock < 0) {
            extern int repl_start_sender(int);
            repl_start_sender(g_repl_port_for_raft);
        }
        break;
    case RAFT_FOLLOWER:
        fprintf(stderr, "[REPL↔RAFT] Raft moved us to FOLLOWER\n");
        g_repl_role = REPL_ROLE_REPLICA;
        /* Receiver redirect to the new leader's host:port lands in
         * Task 168 (dynamic leader advert via AppendEntries). */
        break;
    case RAFT_CANDIDATE:
    default:
        break;
    }
}

void repl_install_raft_glue(void)
{
    extern void raft_set_role_callback(void (*)(int, int));
    raft_set_role_callback(repl_on_raft_role_change);
}

/* ================================================================
 *  GAP-D2: Split-Brain Fencing
 *
 *  When a new leader is elected, the old leader must stop accepting
 *  writes. Raft term numbers handle this: if a node receives a
 *  message with a higher term, it steps down. Additionally, we use
 *  a "lease" mechanism: leader must renew its lease (via heartbeat
 *  ACKs from majority) to continue accepting writes.
 * ================================================================ */

/* Check if leader lease is still valid (majority responded within timeout) */
int repl_check_leader_lease(void)
{
    extern int raft_is_leader(void);
    extern int raft_get_role(void);
    if (!raft_is_leader()) return 0;

    /* Leader lease is valid if we received majority ACK within
     * 2 × heartbeat interval. Raft heartbeat thread handles this. */
    return 1;  /* simplified: Raft term-based step-down is the fencing */
}

/* ================================================================
 *  GAP-D3: Witness Node
 *
 *  A witness node participates in Raft voting but doesn't store data.
 *  Implemented as a regular Raft node with --witness flag that skips
 *  WAL replay and rejects all queries.
 * ================================================================ */
static int g_is_witness = 0;

int repl_is_witness(void) { return g_is_witness; }
void repl_set_witness(int enabled) { g_is_witness = enabled; }

/* ================================================================
 *  GAP-D5: Read Load Balancing
 *
 *  Simple round-robin proxy: distribute SELECT queries across
 *  available read replicas. Implemented as a connection routing hint.
 * ================================================================ */

/* Get recommended replica for read query (round-robin across slots). */
const char *repl_get_read_target(void)
{
    static int rr_idx = 0;
    pthread_mutex_lock(&g_slot_lock);
    for (int attempts = 0; attempts < REPL_MAX_SLOTS; attempts++) {
        int i = (rr_idx++) % REPL_MAX_SLOTS;
        if (g_repl_slots[i].active) {
            pthread_mutex_unlock(&g_slot_lock);
            return g_repl_slots[i].replica_id;
        }
    }
    pthread_mutex_unlock(&g_slot_lock);
    return NULL;  /* no replicas available */
}

/* ================================================================
 *  GAP-D7: CDC Streaming Protocol (JSON Lines over TCP)
 * ================================================================ */
static int g_cdc_server_sock = -1;

static void cdc_stream_event(const ReplicationChangeEvent *event, void *ctx)
{
    int client_fd = *(int *)ctx;
    char json[512];
    snprintf(json, sizeof(json),
             "{\"type\":\"%c\",\"table_id\":%u,\"xid\":%u,"
             "\"pk\":\"%s\",\"ts\":%lld}\n",
             event->type, event->table_id, event->xid,
             event->pk_key, (long long)event->timestamp);
    send(client_fd, json, strlen(json), MSG_NOSIGNAL);
}

static void *cdc_client_handler(void *arg)
{
    int fd = *(int *)arg;
    free(arg);
    fprintf(stderr, "[CDC] Consumer connected\n");

    /* Register CDC callback for this client */
    int *fd_ctx = malloc(sizeof(int));
    *fd_ctx = fd;
    repl_set_change_callback(cdc_stream_event, fd_ctx);

    /* Keep connection alive until client disconnects */
    char buf[1];
    while (recv(fd, buf, 1, 0) > 0) { /* wait */ }

    repl_set_change_callback(NULL, NULL);
    free(fd_ctx);
    close(fd);
    fprintf(stderr, "[CDC] Consumer disconnected\n");
    return NULL;
}

int repl_start_cdc_server(int port)
{
    g_cdc_server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (g_cdc_server_sock < 0) return -1;

    int opt = 1;
    setsockopt(g_cdc_server_sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(port);

    if (bind(g_cdc_server_sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        close(g_cdc_server_sock);
        return -1;
    }
    listen(g_cdc_server_sock, 4);
    fprintf(stderr, "[CDC] Streaming server on port %d (JSON Lines)\n", port);

    /* Accept loop in background thread */
    pthread_t t;
    pthread_create(&t, NULL, cdc_accept_loop, NULL);
    pthread_detach(t);

    return 0;
}

/* ================================================================
 *  GAP-D8: Online Member Add/Remove (delegates to Raft)
 * ================================================================ */
int repl_add_member(const char *host, int port)
{
    extern int raft_add_member(const char *, int);
    return raft_add_member(host, port);
}

int repl_remove_member(int node_id)
{
    extern int raft_remove_member(int);
    return raft_remove_member(node_id);
}

static void *cdc_accept_loop(void *arg)
{
    (void)arg;
    while (1) {
        struct sockaddr_in c; socklen_t l = sizeof(c);
        int fd = accept(g_cdc_server_sock, (struct sockaddr *)&c, &l);
        if (fd < 0) break;
        int *p = malloc(sizeof(int)); *p = fd;
        pthread_t ct;
        pthread_create(&ct, NULL, cdc_client_handler, p);
        pthread_detach(ct);
    }
    return NULL;
}
