/*
 * raft.c — Raft Consensus Protocol for EvoSQL
 *
 * Implements leader election + heartbeat + replication slot tracking.
 * WAL streaming (AppendEntries) reuses the existing replication infrastructure.
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
#include <errno.h>
#include <sys/time.h>
#include <fcntl.h>
#include "raft.h"

/* Persistence constants — Task 97 Commit 6. See raft_save_state below. */
#define RAFT_STATE_MAGIC   0x54464152   /* "RAFT" in LE */
#define RAFT_STATE_PATH    "root/raft.state"
#define RAFT_SNAPSHOT_PATH "root/raft.snapshot"
#define RAFT_COMPACTION_INTERVAL 10000  /* AppendEntries count */

/* ================================================================
 *  State
 * ================================================================ */
static int          g_my_id = -1;
static int          g_role = RAFT_FOLLOWER;
static uint32_t     g_current_term = 0;
static int          g_voted_for = -1;      /* who we voted for in current term */
static int          g_leader_id = -1;
static uint32_t     g_my_lsn = 0;          /* our last known LSN */

static RaftNode     g_nodes[RAFT_MAX_NODES];
static int          g_num_nodes = 0;

static volatile int g_raft_running = 0;
static pthread_t    g_election_thread;
static pthread_t    g_heartbeat_thread;
static pthread_t    g_listener_thread;
static pthread_mutex_t g_raft_lock = PTHREAD_MUTEX_INITIALIZER;

/* Role-transition callback (Task 97 Commit 5). Invoked whenever g_role
 * changes so the replication module can flip primary/replica without
 * polling. Callback MUST NOT acquire g_raft_lock or call back into
 * raft_* state mutators — it's invoked synchronously while the lock is
 * held, so reentrancy would deadlock. Pure side-effects
 * (repl_start_sender, repl_start_receiver) are fine. */
typedef void (*raft_role_cb_t)(int new_role, int leader_id);
static raft_role_cb_t g_role_callback = NULL;

/* Call with g_raft_lock held. Transitions g_role and fires callback if
 * role changed. */
static void raft_transition_role_locked(int new_role)
{
    int old_role = g_role;
    g_role = new_role;
    if (old_role != new_role && g_role_callback) {
        g_role_callback(new_role, g_leader_id);
    }
}

void raft_set_role_callback(void (*cb)(int new_role, int leader_id))
{
    g_role_callback = cb;
}

/* ================================================================
 *  Persistence (Task 97 Commit 6)
 *
 *  root/raft.state layout (12 bytes, little-endian):
 *    [magic:4B=0x52414654 "RAFT"][current_term:4B][voted_for:4B]
 *
 *  Atomic write: temp file + rename. fsync(fd) before rename so the
 *  state survives a crash. Called from under g_raft_lock so the
 *  in-memory values are consistent with the on-disk snapshot.
 * ================================================================ */
static void raft_save_state(void)
{
    char tmp[] = RAFT_STATE_PATH ".tmp";
    int fd = open(tmp, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd < 0) return;
    uint32_t magic = RAFT_STATE_MAGIC;
    uint32_t term = g_current_term;
    int32_t voted = g_voted_for;
    if (write(fd, &magic, 4) == 4 &&
        write(fd, &term,  4) == 4 &&
        write(fd, &voted, 4) == 4) {
        fsync(fd);
        close(fd);
        rename(tmp, RAFT_STATE_PATH);
    } else {
        close(fd);
        unlink(tmp);
    }
}

static void raft_load_state(void)
{
    int fd = open(RAFT_STATE_PATH, O_RDONLY);
    if (fd < 0) return;
    uint32_t magic = 0, term = 0;
    int32_t voted = -1;
    if (read(fd, &magic, 4) == 4 && magic == RAFT_STATE_MAGIC &&
        read(fd, &term,  4) == 4 &&
        read(fd, &voted, 4) == 4) {
        g_current_term = term;
        g_voted_for = voted;
        fprintf(stderr, "[RAFT] Loaded persisted state: term=%u voted_for=%d\n",
                term, voted);
    }
    close(fd);
}

/* Log compaction: every RAFT_COMPACTION_INTERVAL AppendEntries we
 * snapshot {my_lsn, term} to root/raft.snapshot. In this v1 Raft there
 * is no in-memory log to truncate — AppendEntries is heartbeat +
 * last_lsn advertisement — so the snapshot mainly documents the
 * high-water mark for operators + sets up space for future log-based
 * compaction without touching the disk format again. */
static uint32_t g_append_counter = 0;

static void raft_write_snapshot(void)
{
    char tmp[] = RAFT_SNAPSHOT_PATH ".tmp";
    int fd = open(tmp, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd < 0) return;
    uint32_t magic = RAFT_STATE_MAGIC;
    uint32_t committed_lsn = g_my_lsn;
    uint32_t last_term = g_current_term;
    if (write(fd, &magic, 4) == 4 &&
        write(fd, &committed_lsn, 4) == 4 &&
        write(fd, &last_term, 4) == 4) {
        fsync(fd);
        close(fd);
        rename(tmp, RAFT_SNAPSHOT_PATH);
        fprintf(stderr, "[RAFT] Snapshot written: committed_lsn=%u term=%u\n",
                committed_lsn, last_term);
    } else {
        close(fd);
        unlink(tmp);
    }
}

static void raft_maybe_compact(void)
{
    g_append_counter++;
    if (g_append_counter >= RAFT_COMPACTION_INTERVAL) {
        g_append_counter = 0;
        raft_write_snapshot();
    }
}

/* Election timer */
static int64_t      g_last_heartbeat_ms = 0;
static int          g_election_timeout_ms = 0;

/* ================================================================
 *  Helpers
 * ================================================================ */
static int64_t now_ms(void)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (int64_t)tv.tv_sec * 1000LL + tv.tv_usec / 1000;
}

static int random_timeout(void)
{
    return RAFT_ELECTION_MIN_MS +
           (rand() % (RAFT_ELECTION_MAX_MS - RAFT_ELECTION_MIN_MS));
}

static int connect_to_node(RaftNode *node)
{
    if (node->sock >= 0) return 0;  /* already connected */

    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) return -1;

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(node->port);

    struct hostent *he = gethostbyname(node->host);
    if (he) memcpy(&addr.sin_addr, he->h_addr, he->h_length);
    else addr.sin_addr.s_addr = inet_addr(node->host);

    /* Non-blocking connect with timeout */
    struct timeval tv = { .tv_sec = 1, .tv_usec = 0 };
    setsockopt(sock, SOL_SOCKET, SO_SNDTIMEO, &tv, sizeof(tv));
    setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));

    if (connect(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        close(sock);
        return -1;
    }

    int nodelay = 1;
    setsockopt(sock, IPPROTO_TCP, TCP_NODELAY, &nodelay, sizeof(nodelay));

    node->sock = sock;
    node->connected = 1;
    return 0;
}

static int send_msg(RaftNode *node, const RaftMessage *msg)
{
    if (connect_to_node(node) < 0) return -1;
    ssize_t n = send(node->sock, msg, RAFT_MSG_SIZE, MSG_NOSIGNAL);
    if (n != (ssize_t)RAFT_MSG_SIZE) {
        close(node->sock);
        node->sock = -1;
        node->connected = 0;
        return -1;
    }
    return 0;
}

static int recv_msg(int sock, RaftMessage *msg)
{
    size_t got = 0;
    while (got < RAFT_MSG_SIZE) {
        ssize_t r = recv(sock, (char *)msg + got, RAFT_MSG_SIZE - got, 0);
        if (r <= 0) return -1;
        got += r;
    }
    return 0;
}

/* ================================================================
 *  Election
 * ================================================================ */
static void start_election(void)
{
    pthread_mutex_lock(&g_raft_lock);
    g_current_term++;
    g_voted_for = g_my_id;
    g_leader_id = -1;
    raft_transition_role_locked(RAFT_CANDIDATE);
    /* Persist term + vote before contacting peers — restart must not
     * grant a second vote in the same term. */
    raft_save_state();
    int term = g_current_term;
    int votes = 1;  /* vote for self */
    pthread_mutex_unlock(&g_raft_lock);

    fprintf(stderr, "[RAFT] Starting election for term %u\n", term);

    /* Send RequestVote to all other nodes */
    RaftMessage vote_req;
    memset(&vote_req, 0, sizeof(vote_req));
    vote_req.msg_type = RAFT_MSG_REQUEST_VOTE;
    vote_req.term = term;
    vote_req.node_id = g_my_id;
    vote_req.last_lsn = g_my_lsn;

    for (int i = 0; i < g_num_nodes; i++) {
        if (i == g_my_id) continue;
        if (send_msg(&g_nodes[i], &vote_req) == 0) {
            /* Try to receive vote response (with timeout) */
            RaftMessage resp;
            if (recv_msg(g_nodes[i].sock, &resp) == 0) {
                if (resp.msg_type == RAFT_MSG_VOTE_RESPONSE &&
                    resp.term == term && resp.vote_granted)
                    votes++;
            }
        }
    }

    int majority = g_num_nodes / 2 + 1;
    pthread_mutex_lock(&g_raft_lock);
    if (votes >= majority && g_role == RAFT_CANDIDATE && g_current_term == (uint32_t)term) {
        g_leader_id = g_my_id;
        raft_transition_role_locked(RAFT_LEADER);
        fprintf(stderr, "[RAFT] ★ Elected as LEADER (term %u, %d/%d votes)\n",
                term, votes, g_num_nodes);
    } else {
        raft_transition_role_locked(RAFT_FOLLOWER);
        fprintf(stderr, "[RAFT] Election failed (term %u, %d/%d votes)\n",
                term, votes, g_num_nodes);
    }
    pthread_mutex_unlock(&g_raft_lock);
}

static void *election_timer_thread(void *arg)
{
    (void)arg;
    g_election_timeout_ms = random_timeout();
    g_last_heartbeat_ms = now_ms();

    while (g_raft_running) {
        usleep(50 * 1000);  /* check every 50ms */

        pthread_mutex_lock(&g_raft_lock);
        int role = g_role;
        int64_t elapsed = now_ms() - g_last_heartbeat_ms;
        pthread_mutex_unlock(&g_raft_lock);

        if (role == RAFT_LEADER) continue;  /* leaders don't timeout */

        if (elapsed > g_election_timeout_ms) {
            start_election();
            g_election_timeout_ms = random_timeout();
            g_last_heartbeat_ms = now_ms();
        }
    }
    return NULL;
}

/* ================================================================
 *  Heartbeat (Leader only)
 * ================================================================ */
static void *heartbeat_thread(void *arg)
{
    (void)arg;

    while (g_raft_running) {
        usleep(RAFT_HEARTBEAT_MS * 1000);

        pthread_mutex_lock(&g_raft_lock);
        int role = g_role;
        uint32_t term = g_current_term;
        pthread_mutex_unlock(&g_raft_lock);

        if (role != RAFT_LEADER) continue;

        /* Send heartbeat (empty AppendEntries) to all followers */
        RaftMessage hb;
        memset(&hb, 0, sizeof(hb));
        hb.msg_type = RAFT_MSG_APPEND_ENTRIES;
        hb.term = term;
        hb.node_id = g_my_id;
        hb.last_lsn = g_my_lsn;
        hb.wal_data_len = 0;  /* empty = heartbeat */

        for (int i = 0; i < g_num_nodes; i++) {
            if (i == g_my_id) continue;
            if (send_msg(&g_nodes[i], &hb) == 0) {
                /* Read response */
                RaftMessage resp;
                if (recv_msg(g_nodes[i].sock, &resp) == 0) {
                    if (resp.msg_type == RAFT_MSG_APPEND_RESPONSE) {
                        g_nodes[i].last_confirmed_lsn = resp.last_lsn;
                        /* Step down if higher term discovered */
                        if (resp.term > term) {
                            pthread_mutex_lock(&g_raft_lock);
                            g_current_term = resp.term;
                            g_voted_for = -1;  /* new term: reset vote */
                            g_leader_id = -1;
                            raft_transition_role_locked(RAFT_FOLLOWER);
                            raft_save_state();
                            pthread_mutex_unlock(&g_raft_lock);
                            fprintf(stderr, "[RAFT] Stepping down: higher term %u\n",
                                    resp.term);
                            break;
                        }
                    }
                }
            }
        }
    }
    return NULL;
}

/* ================================================================
 *  Listener (handles incoming Raft messages)
 * ================================================================ */
static void handle_raft_message(int client_fd)
{
    RaftMessage msg;
    while (recv_msg(client_fd, &msg) == 0) {
        RaftMessage resp;
        memset(&resp, 0, sizeof(resp));
        resp.node_id = g_my_id;

        pthread_mutex_lock(&g_raft_lock);

        /* Update term if sender has higher term */
        if (msg.term > g_current_term) {
            g_current_term = msg.term;
            g_voted_for = -1;
            g_leader_id = -1;
            raft_transition_role_locked(RAFT_FOLLOWER);
            raft_save_state();
        }

        switch (msg.msg_type) {
        case RAFT_MSG_REQUEST_VOTE:
            resp.msg_type = RAFT_MSG_VOTE_RESPONSE;
            resp.term = g_current_term;
            resp.vote_granted = 0;
            if (msg.term >= g_current_term &&
                (g_voted_for == -1 || g_voted_for == (int)msg.node_id) &&
                msg.last_lsn >= g_my_lsn) {
                g_voted_for = msg.node_id;
                resp.vote_granted = 1;
                g_last_heartbeat_ms = now_ms();  /* reset election timer */
                raft_save_state();  /* persist so restart doesn't revote */
                fprintf(stderr, "[RAFT] Voted for node %u (term %u)\n",
                        msg.node_id, msg.term);
            }
            pthread_mutex_unlock(&g_raft_lock);
            send(client_fd, &resp, RAFT_MSG_SIZE, MSG_NOSIGNAL);
            break;

        case RAFT_MSG_APPEND_ENTRIES:
            g_leader_id = msg.node_id;
            g_last_heartbeat_ms = now_ms();  /* reset election timer */
            if (g_role == RAFT_CANDIDATE || g_role == RAFT_LEADER)
                raft_transition_role_locked(RAFT_FOLLOWER);  /* new leader discovered */
            raft_maybe_compact();
            resp.msg_type = RAFT_MSG_APPEND_RESPONSE;
            resp.term = g_current_term;
            resp.last_lsn = g_my_lsn;
            pthread_mutex_unlock(&g_raft_lock);
            send(client_fd, &resp, RAFT_MSG_SIZE, MSG_NOSIGNAL);
            break;

        default:
            pthread_mutex_unlock(&g_raft_lock);
            break;
        }
    }
    close(client_fd);
}

static void *listener_thread_fn(void *arg)
{
    (void)arg;
    if (g_my_id < 0 || g_my_id >= g_num_nodes) return NULL;

    int listen_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (listen_sock < 0) return NULL;

    int opt = 1;
    setsockopt(listen_sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(g_nodes[g_my_id].port);

    if (bind(listen_sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        fprintf(stderr, "[RAFT] Cannot bind port %d: %s\n",
                g_nodes[g_my_id].port, strerror(errno));
        close(listen_sock);
        return NULL;
    }

    listen(listen_sock, 8);
    fprintf(stderr, "[RAFT] Listening on port %d (node %d)\n",
            g_nodes[g_my_id].port, g_my_id);

    while (g_raft_running) {
        struct sockaddr_in client;
        socklen_t len = sizeof(client);
        int fd = accept(listen_sock, (struct sockaddr *)&client, &len);
        if (fd < 0) continue;

        /* Handle in separate thread */
        pthread_t t;
        int *fd_ptr = malloc(sizeof(int));
        *fd_ptr = fd;
        pthread_create(&t, NULL, (void *(*)(void *))handle_raft_message,
                       (void *)(long)fd);
        pthread_detach(t);
    }

    close(listen_sock);
    return NULL;
}

/* ================================================================
 *  Public API
 * ================================================================ */
int raft_init(const char *nodes_csv, int my_id)
{
    g_my_id = my_id;
    g_num_nodes = 0;
    memset(g_nodes, 0, sizeof(g_nodes));

    /* Parse "host1:port,host2:port,host3:port" */
    char buf[2048];
    strncpy(buf, nodes_csv, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';

    char *saveptr = NULL;
    char *token = strtok_r(buf, ",", &saveptr);
    while (token && g_num_nodes < RAFT_MAX_NODES) {
        char *colon = strchr(token, ':');
        if (colon) {
            *colon = '\0';
            strncpy(g_nodes[g_num_nodes].host, token, 255);
            g_nodes[g_num_nodes].port = atoi(colon + 1);
        } else {
            strncpy(g_nodes[g_num_nodes].host, token, 255);
            g_nodes[g_num_nodes].port = 9968;
        }
        g_nodes[g_num_nodes].sock = -1;
        g_nodes[g_num_nodes].connected = 0;
        g_nodes[g_num_nodes].last_confirmed_lsn = 0;
        g_num_nodes++;
        token = strtok_r(NULL, ",", &saveptr);
    }

    if (my_id < 0 || my_id >= g_num_nodes) {
        fprintf(stderr, "[RAFT] Invalid node-id %d (cluster has %d nodes)\n",
                my_id, g_num_nodes);
        return -1;
    }

    fprintf(stderr, "[RAFT] Cluster: %d nodes, this is node %d (%s:%d)\n",
            g_num_nodes, my_id, g_nodes[my_id].host, g_nodes[my_id].port);

    /* Load persisted term/voted_for so a restart doesn't revote in the
     * same term (split-brain safety). Silent no-op if file missing. */
    raft_load_state();
    return 0;
}

int raft_start(void)
{
    g_raft_running = 1;
    srand((unsigned int)(now_ms() + g_my_id * 1000));

    pthread_create(&g_listener_thread, NULL, listener_thread_fn, NULL);
    pthread_create(&g_election_thread, NULL, election_timer_thread, NULL);
    pthread_create(&g_heartbeat_thread, NULL, heartbeat_thread, NULL);

    return 0;
}

void raft_stop(void)
{
    g_raft_running = 0;
    /* Close all node connections */
    for (int i = 0; i < g_num_nodes; i++) {
        if (g_nodes[i].sock >= 0) {
            close(g_nodes[i].sock);
            g_nodes[i].sock = -1;
        }
    }
}

int raft_get_role(void)         { return g_role; }
uint32_t raft_get_term(void)    { return g_current_term; }
int raft_get_leader_id(void)    { return g_leader_id; }
int raft_is_leader(void)        { return g_role == RAFT_LEADER; }

int raft_replicate_wal(uint32_t lsn)
{
    g_my_lsn = lsn;
    if (g_role != RAFT_LEADER) return 0;

    /* Count nodes that have confirmed this LSN */
    int acks = 1;  /* self */
    for (int i = 0; i < g_num_nodes; i++) {
        if (i == g_my_id) continue;
        if (g_nodes[i].last_confirmed_lsn >= lsn) acks++;
    }

    int majority = g_num_nodes / 2 + 1;
    return (acks >= majority) ? 1 : 0;
}

/* Synchronous commit: wait until majority has ACK'd the given LSN.
 * Returns 1 if majority confirmed, 0 if timeout (500ms). */
int raft_sync_commit(uint32_t lsn)
{
    if (g_role != RAFT_LEADER || g_num_nodes <= 1) return 1;

    int majority = g_num_nodes / 2 + 1;
    int64_t deadline = now_ms() + 500;  /* 500ms timeout */

    while (now_ms() < deadline) {
        int acks = 1;  /* self */
        for (int i = 0; i < g_num_nodes; i++) {
            if (i == g_my_id) continue;
            if (g_nodes[i].last_confirmed_lsn >= lsn) acks++;
        }
        if (acks >= majority) return 1;
        usleep(10 * 1000);  /* poll every 10ms */
    }
    return 0;  /* timeout — async fallback */
}

void raft_get_lag(uint32_t *my_lsn, uint32_t lags[], int *num_nodes)
{
    *my_lsn = g_my_lsn;
    *num_nodes = g_num_nodes;
    for (int i = 0; i < g_num_nodes; i++) {
        if (i == g_my_id)
            lags[i] = 0;
        else
            lags[i] = g_my_lsn - g_nodes[i].last_confirmed_lsn;
    }
}

/* GAP-D8: Online member add */
int raft_add_member(const char *host, int port)
{
    pthread_mutex_lock(&g_raft_lock);
    if (g_num_nodes >= RAFT_MAX_NODES) {
        pthread_mutex_unlock(&g_raft_lock);
        return -1;
    }
    int idx = g_num_nodes++;
    strncpy(g_nodes[idx].host, host, 255);
    g_nodes[idx].port = port;
    g_nodes[idx].sock = -1;
    g_nodes[idx].connected = 0;
    g_nodes[idx].last_confirmed_lsn = 0;
    pthread_mutex_unlock(&g_raft_lock);
    fprintf(stderr, "[RAFT] Added member %s:%d (node %d)\n", host, port, idx);
    return idx;
}

/* GAP-D8: Online member remove */
int raft_remove_member(int node_id)
{
    pthread_mutex_lock(&g_raft_lock);
    if (node_id < 0 || node_id >= g_num_nodes || node_id == g_my_id) {
        pthread_mutex_unlock(&g_raft_lock);
        return -1;
    }
    if (g_nodes[node_id].sock >= 0)
        close(g_nodes[node_id].sock);
    /* Shift remaining nodes */
    for (int i = node_id; i < g_num_nodes - 1; i++)
        g_nodes[i] = g_nodes[i + 1];
    g_num_nodes--;
    if (g_my_id > node_id) g_my_id--;
    pthread_mutex_unlock(&g_raft_lock);
    fprintf(stderr, "[RAFT] Removed member %d (cluster now %d nodes)\n",
            node_id, g_num_nodes);
    return 0;
}

/* ----------------------------------------------------------------
 *  Distributed query engine: node info accessors
 * ---------------------------------------------------------------- */

int raft_get_num_nodes(void)   { return g_num_nodes; }
int raft_get_my_node_id(void)  { return g_my_id; }

int raft_get_node_host_port(int node_id, char *host, int host_size, int *port)
{
    if (node_id < 0 || node_id >= g_num_nodes) return -1;
    strncpy(host, g_nodes[node_id].host, host_size - 1);
    host[host_size - 1] = '\0';
    *port = g_nodes[node_id].port;
    return 0;
}
