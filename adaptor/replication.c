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
#include <fcntl.h>
#include <errno.h>
#include "replication.h"
#include "../evolution/db/wal.h"
#include "../evolution/db/page_mgr.h"
#include "../evolution/db/page_crypt.h"

/* ================================================================
 *  Shared state
 * ================================================================ */
static volatile int g_repl_running = 0;
static int          g_is_replica = 0;

/* ================================================================
 *  Master: WAL sender
 * ================================================================ */

static int          g_sender_sock = -1;
static pthread_t    g_sender_thread;
static pthread_mutex_t g_sender_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t  g_sender_cond = PTHREAD_COND_INITIALIZER;

/* Handle a single replica connection: stream WAL records */
static void *sender_handle_replica(void *arg)
{
    int client_fd = *(int *)arg;
    free(arg);

    fprintf(stderr, "[REPL] Replica connected\n");

    /* Read handshake: "REPLICATE <last_lsn>\n" */
    char buf[256];
    int n = recv(client_fd, buf, sizeof(buf) - 1, 0);
    if (n <= 0) { close(client_fd); return NULL; }
    buf[n] = '\0';

    uint32_t start_lsn = 0;
    if (strncmp(buf, "REPLICATE ", 10) == 0)
        start_lsn = (uint32_t)atoi(buf + 10);

    fprintf(stderr, "[REPL] Replica requests WAL from LSN %u\n", start_lsn);

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
        send(client_fd, &msg_type, 1, 0);
        send(client_fd, &msg_len, 4, 0);
        send(client_fd, rec, rec_total, 0);
        free(rec);

        pos += rec_total;
    }
    close(wal_fd);

    /* Now stream live: wait for new WAL records */
    while (g_repl_running) {
        pthread_mutex_lock(&g_sender_lock);
        /* Wait for notification of new WAL records */
        struct timespec ts;
        clock_gettime(CLOCK_REALTIME, &ts);
        ts.tv_sec += 5;  /* 5 second heartbeat interval */
        pthread_cond_timedwait(&g_sender_cond, &g_sender_lock, &ts);
        pthread_mutex_unlock(&g_sender_lock);

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
            if (send(client_fd, &msg_type, 1, 0) <= 0 ||
                send(client_fd, &msg_len, 4, 0) <= 0 ||
                send(client_fd, rec, rec_total, 0) <= 0) {
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
            if (send(client_fd, &hb, 1, MSG_NOSIGNAL) <= 0)
                break;
        }
    }

disconnected:
    fprintf(stderr, "[REPL] Replica disconnected\n");
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

        int *fd_ptr = malloc(sizeof(int));
        *fd_ptr = client_fd;
        pthread_t t;
        pthread_create(&t, NULL, sender_handle_replica, fd_ptr);
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

static int recv_all(int fd, void *buf, size_t n)
{
    size_t got = 0;
    while (got < n) {
        ssize_t r = recv(fd, (char *)buf + got, n - got, 0);
        if (r <= 0) return -1;
        got += r;
    }
    return 0;
}

static void *receiver_loop(void *arg)
{
    int sock = *(int *)arg;
    int data_fd = *((int *)arg + 1);
    free(arg);

    fprintf(stderr, "[REPL] WAL receiver started, replaying to data file\n");

    int records = 0;
    while (g_repl_running) {
        /* Read message type */
        char msg_type;
        if (recv_all(sock, &msg_type, 1) < 0) break;

        if (msg_type == REPL_MSG_HEARTBEAT) continue;
        if (msg_type == REPL_MSG_END) { sleep(1); continue; }

        if (msg_type == REPL_MSG_WAL_DATA) {
            /* Read length + record */
            uint32_t msg_len;
            if (recv_all(sock, &msg_len, 4) < 0) break;

            char *rec = malloc(msg_len);
            if (!rec) break;
            if (recv_all(sock, rec, msg_len) < 0) { free(rec); break; }

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
                records++;

                if (records % 1000 == 0)
                    fprintf(stderr, "[REPL] Replayed %d records\n", records);
            }

            free(rec);
        }
    }

    fprintf(stderr, "[REPL] WAL receiver stopped after %d records\n", records);
    close(sock);
    return NULL;
}

int repl_start_receiver(const char *master_host, int master_port, int data_fd)
{
    g_is_replica = 1;
    g_repl_running = 1;

    /* Connect to master */
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        fprintf(stderr, "[REPL] Cannot create socket\n");
        return -1;
    }

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(master_port);

    struct hostent *he = gethostbyname(master_host);
    if (he) memcpy(&addr.sin_addr, he->h_addr, he->h_length);
    else addr.sin_addr.s_addr = inet_addr(master_host);

    if (connect(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        fprintf(stderr, "[REPL] Cannot connect to master %s:%d: %s\n",
                master_host, master_port, strerror(errno));
        close(sock);
        return -1;
    }

    fprintf(stderr, "[REPL] Connected to master %s:%d\n", master_host, master_port);

    /* Send handshake with last known LSN */
    char handshake[64];
    snprintf(handshake, sizeof(handshake), "REPLICATE 0\n");
    send(sock, handshake, strlen(handshake), 0);

    /* Start receiver thread */
    int *args = malloc(sizeof(int) * 2);
    args[0] = sock;
    args[1] = data_fd;
    pthread_create(&g_receiver_thread, NULL, receiver_loop, args);

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
