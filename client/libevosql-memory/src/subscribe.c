/*
 * subscribe.c — LISTEN/NOTIFY + CDC streaming workers.
 *
 * The SDK exposes one common abstraction (evo_subscription_t) on top
 * of two server-side surfaces:
 *
 *   - LISTEN/NOTIFY on the EVO protocol port (default 9967). The
 *     subscription opens a fresh authenticated connection, runs
 *     `LISTEN <channel>`, and reads frames of the form
 *         NOTIFY <sender_session_id> <channel> <payload_len>\n
 *         <payload>\n
 *     emitting one callback per NOTIFY.
 *
 *   - CDC on the dedicated CDC TCP port (default 9970). The server
 *     greets with `{"event":"ready"}\n` and then emits NDJSON rows
 *     `{"op":"I","table":"users","table_id":42,"xid":...,"pk":"alice","ts":...}`
 *     one per WAL change. We extract `table` and `xid` for the
 *     callback's channel + lsn arguments.
 *
 * Each subscription owns its socket, its worker thread, and its
 * callback-dispatch mutex. evo_unsubscribe shuts down everything
 * deterministically: flag → close socket → join thread → free.
 */
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

/* Windows / POSIX socket abstraction. MinGW-w64 ships a winpthreads
 * shim so <pthread.h> works on Windows too — the only thing we have
 * to switch is the socket headers and the close() name. */
#ifdef _WIN32
  #include <winsock2.h>
  #include <ws2tcpip.h>
  #include <windows.h>
  #pragma comment(lib, "ws2_32.lib")
  #include <pthread.h>
  #define EVO_CLOSE(s)    closesocket(s)
  #define EVO_SHUTDOWN(s) shutdown(s, SD_BOTH)
  /* MinGW's <errno.h> doesn't define EPROTO; pick a stand-in that
   * exists on every platform we ship to. */
  #ifndef EPROTO
    #define EPROTO ENOTRECOVERABLE
  #endif
  static void evo_winsock_startup_once_sub(void) {
      static int done = 0;
      if (done) return;
      WSADATA w;
      WSAStartup(MAKEWORD(2, 2), &w);
      done = 1;
  }
#else
  #include <unistd.h>
  #include <sys/socket.h>
  #include <netinet/in.h>
  #include <arpa/inet.h>
  #include <netdb.h>
  #include <pthread.h>
  #define EVO_CLOSE(s)    close(s)
  #define EVO_SHUTDOWN(s) shutdown(s, SHUT_RDWR)
  static inline void evo_winsock_startup_once_sub(void) {}
#endif

#include "../include/evosql_memory.h"

/* Forward decls from conn.c — the subscription opens its own raw
 * socket and re-implements the small handshake here so the public
 * conn_t struct stays opaque. */
extern void evo_set_error(int code, const char *fmt, ...);
extern void evo_set_sqlstate(const char *s);

/* ----------------------------------------------------------------
 *  Subscription struct
 * ---------------------------------------------------------------- */
typedef enum { SUB_NOTIFY = 1, SUB_CDC = 2 } sub_kind_t;

struct evo_subscription {
    sub_kind_t  kind;
    int         sock;

    pthread_t   worker;
    int         worker_started;

    pthread_mutex_t cb_lock;
    evo_event_callback_t cb;
    void               *ctx;

    /* Atomic-ish stop flag. The worker checks before every recv;
     * evo_unsubscribe sets it then closes the socket so the next
     * recv returns 0/-1. */
    volatile int should_stop;

    /* CDC ack cursor (last LSN the user has confirmed they've
     * processed). v1 only stores it locally — server-side ack arrives
     * with Task 211 v2. */
    uint64_t    last_ack_lsn;

    /* Read buffer. Subscription-private so the conn.c read buf doesn't
     * need to be shared. */
    char        rbuf[8192];
    int         rlen;
    int         rpos;
};

/* ----------------------------------------------------------------
 *  Local socket I/O — duplicated from conn.c so the worker doesn't
 *  share buffers with the main connection.
 * ---------------------------------------------------------------- */
static int sub_recv_line(evo_subscription_t *s, char *out, int out_size)
{
    int oi = 0;
    while (oi < out_size - 1) {
        if (s->rpos >= s->rlen) {
            int n = (int)recv(s->sock, s->rbuf, sizeof(s->rbuf), 0);
            if (n <= 0) return -1;
            s->rlen = n;
            s->rpos = 0;
        }
        char ch = s->rbuf[s->rpos++];
        if (ch == '\n') break;
        if (ch != '\r') out[oi++] = ch;
    }
    out[oi] = '\0';
    return oi;
}

/* Read exactly `n` bytes (the NOTIFY payload, which may contain
 * arbitrary content including newlines). */
static int sub_recv_n(evo_subscription_t *s, char *out, int n)
{
    int got = 0;
    while (got < n) {
        if (s->rpos < s->rlen) {
            int avail = s->rlen - s->rpos;
            int take = (n - got < avail) ? n - got : avail;
            memcpy(out + got, s->rbuf + s->rpos, take);
            s->rpos += take;
            got += take;
            continue;
        }
        int r = (int)recv(s->sock, out + got, n - got, 0);
        if (r <= 0) return -1;
        got += r;
    }
    return got;
}

static int sub_send_all(int fd, const char *buf, int n)
{
    int off = 0;
    while (off < n) {
        int s = (int)send(fd, buf + off, n - off, 0);
        if (s <= 0) return -1;
        off += s;
    }
    return 0;
}

static int sub_send_line(int fd, const char *line)
{
    return sub_send_all(fd, line, (int)strlen(line));
}

/* Open + handshake + AUTH on the EVO port. Mirrors evo_connect's
 * plaintext path (subscriptions are intentionally TLS-blind in v1). */
static int evo_dial(const char *host, int port,
                     const char *user, const char *password)
{
    evo_winsock_startup_once_sub();
    struct addrinfo hints, *res = NULL;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family   = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    char ps[16]; snprintf(ps, sizeof(ps), "%d", port);
    if (getaddrinfo(host, ps, &hints, &res) != 0 || !res) {
        evo_set_error(-2, "subscribe: getaddrinfo(%s) failed", host);
        return -1;
    }
    int s = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (s < 0) {
        evo_set_error(-2, "subscribe: socket() failed: %s",
                      strerror(errno));
        freeaddrinfo(res);
        return -1;
    }
    if (connect(s, res->ai_addr, res->ai_addrlen) < 0) {
        evo_set_error(-2, "subscribe: connect(%s:%d) failed: %s",
                      host, port, strerror(errno));
        EVO_CLOSE(s);
        freeaddrinfo(res);
        return -1;
    }
    freeaddrinfo(res);

    /* Greeting + STARTTLS decline + AUTH_SCRAM advertisement +
     * legacy AUTH. */
    if (sub_send_line(s, "EVO\n") < 0) goto err;

    /* Use a tiny stack subscription for line reads during handshake
     * so we don't need to allocate the real one yet. */
    evo_subscription_t tmp; memset(&tmp, 0, sizeof(tmp));
    tmp.sock = s;
    char line[1024];
    if (sub_recv_line(&tmp, line, sizeof(line)) < 0) goto err;   /* HELLO */
    if (strncmp(line, "HELLO ", 6) != 0) { errno = EPROTO; goto err; }
    if (sub_recv_line(&tmp, line, sizeof(line)) < 0) goto err;
    if (strcmp(line, "STARTTLS") == 0) {
        if (sub_send_line(s, "NOTLS\n") < 0) goto err;
        if (sub_recv_line(&tmp, line, sizeof(line)) < 0) goto err;
    }
    if (strcmp(line, "AUTH_SCRAM") != 0) { errno = EPROTO; goto err; }

    char auth[1024];
    snprintf(auth, sizeof(auth), "AUTH %s %s\n", user, password);
    if (sub_send_line(s, auth) < 0) goto err;
    if (sub_recv_line(&tmp, line, sizeof(line)) < 0) goto err;
    if (strcmp(line, "AUTH_OK") != 0) {
        evo_set_error(-3, "subscribe: auth failed: %s", line);
        goto err;
    }
    return s;

err:
    EVO_CLOSE(s);
    return -1;
}

/* ----------------------------------------------------------------
 *  NOTIFY worker
 * ---------------------------------------------------------------- */
static void *notify_worker(void *arg)
{
    evo_subscription_t *s = (evo_subscription_t *)arg;
    char line[4096];

    while (!s->should_stop) {
        int n = sub_recv_line(s, line, sizeof(line));
        if (n < 0) break;

        /* NOTIFY frame: "NOTIFY <sid> <channel> <plen>" + payload */
        if (strncmp(line, "NOTIFY ", 7) == 0) {
            int sid = 0; char ch[256] = ""; int plen = 0;
            if (sscanf(line + 7, "%d %255s %d", &sid, ch, &plen) == 3) {
                char *payload = NULL;
                if (plen > 0) {
                    payload = (char *)malloc((size_t)plen + 1);
                    if (!payload) break;
                    if (sub_recv_n(s, payload, plen) != plen) {
                        free(payload);
                        break;
                    }
                    payload[plen] = '\0';
                    /* The server appends a trailing \n after payload — */
                    /* drain it. */
                    char nl[1];
                    sub_recv_n(s, nl, 1);
                } else {
                    /* Empty payload still has a trailing \n. */
                    char nl[1];
                    sub_recv_n(s, nl, 1);
                    payload = (char *)calloc(1, 1);
                }

                pthread_mutex_lock(&s->cb_lock);
                evo_event_callback_t cb = s->cb;
                void                *ctx = s->ctx;
                pthread_mutex_unlock(&s->cb_lock);
                if (cb && !s->should_stop) {
                    cb(ch, payload ? payload : "", 0, ctx);
                }
                free(payload);
            }
            continue;
        }

        /* READY / TAG / OK / RESULT — any framing the server emits
         * during LISTEN setup or ad-hoc keepalives. Ignore. */
        if (strcmp(line, "READY") == 0) continue;
        if (strncmp(line, "TAG ", 4) == 0) continue;
        if (strcmp(line, "OK") == 0) continue;
        /* ERR — surface once, then keep going. */
        if (strncmp(line, "ERR ", 4) == 0) continue;
    }
    return NULL;
}

evo_subscription_t *evo_subscribe(const char *host, int port,
                                   const char *user, const char *password,
                                   const char *channel,
                                   evo_event_callback_t callback,
                                   void *ctx)
{
    if (!host || !user || !password || !channel || !callback) {
        evo_set_error(-1, "evo_subscribe: missing arg");
        return NULL;
    }
    int sock = evo_dial(host, port, user, password);
    if (sock < 0) return NULL;

    evo_subscription_t *s = (evo_subscription_t *)calloc(1, sizeof(*s));
    if (!s) {
        evo_set_error(-6, "out of memory");
        EVO_CLOSE(sock);
        return NULL;
    }
    s->kind  = SUB_NOTIFY;
    s->sock  = sock;
    s->cb    = callback;
    s->ctx   = ctx;
    pthread_mutex_init(&s->cb_lock, NULL);

    /* LISTEN <channel> — same SQL framing as evo_exec, but we don't
     * use the conn.c helpers because we're working on a raw fd. */
    char sql[512];
    int sql_len = snprintf(sql, sizeof(sql), "LISTEN %s\n", channel);
    char hdr[64];
    int hl = snprintf(hdr, sizeof(hdr), "SQL %d\n", sql_len);
    if (sub_send_all(sock, hdr, hl) < 0 ||
        sub_send_all(sock, sql, sql_len) < 0) {
        evo_set_error(-4, "subscribe: SQL frame send failed");
        EVO_CLOSE(sock); pthread_mutex_destroy(&s->cb_lock); free(s);
        return NULL;
    }

    /* Drain the LISTEN response (OK / TAG / READY) before starting the
     * worker so a startup error surfaces synchronously. */
    char line[1024];
    int saw_ready = 0;
    for (int i = 0; i < 16 && !saw_ready; i++) {
        int n = sub_recv_line(s, line, sizeof(line));
        if (n < 0) break;
        if (strcmp(line, "READY") == 0) saw_ready = 1;
        else if (strncmp(line, "ERR ", 4) == 0) {
            evo_set_error(-5, "subscribe: %s", line + 4);
            EVO_CLOSE(sock); pthread_mutex_destroy(&s->cb_lock); free(s);
            return NULL;
        }
    }
    if (!saw_ready) {
        evo_set_error(-4, "subscribe: never saw READY after LISTEN");
        EVO_CLOSE(sock); pthread_mutex_destroy(&s->cb_lock); free(s);
        return NULL;
    }

    if (pthread_create(&s->worker, NULL, notify_worker, s) != 0) {
        evo_set_error(-1, "subscribe: pthread_create failed");
        EVO_CLOSE(sock); pthread_mutex_destroy(&s->cb_lock); free(s);
        return NULL;
    }
    s->worker_started = 1;
    return s;
}

/* ----------------------------------------------------------------
 *  CDC worker
 * ---------------------------------------------------------------- */
static void cdc_extract_field(const char *line, const char *key,
                               char *out, int out_size)
{
    out[0] = '\0';
    char pat[64];
    snprintf(pat, sizeof(pat), "\"%s\":", key);
    const char *p = strstr(line, pat);
    if (!p) return;
    p += strlen(pat);
    while (*p == ' ' || *p == '\t') p++;
    int oi = 0;
    if (*p == '"') {
        p++;
        while (*p && *p != '"' && oi < out_size - 1) out[oi++] = *p++;
    } else {
        /* numeric field */
        while (*p && *p != ',' && *p != '}' && oi < out_size - 1)
            out[oi++] = *p++;
    }
    out[oi] = '\0';
}

static void *cdc_worker(void *arg)
{
    evo_subscription_t *s = (evo_subscription_t *)arg;
    char line[4096];

    while (!s->should_stop) {
        int n = sub_recv_line(s, line, sizeof(line));
        if (n < 0) break;
        if (n == 0) continue;

        /* Skip the greeting if it ever lands in the worker — we already
         * consumed it during handshake but be defensive. */
        if (strstr(line, "\"event\":\"ready\"")) continue;

        char tbl[256] = "";
        char xid_str[32] = "";
        cdc_extract_field(line, "table", tbl, sizeof(tbl));
        cdc_extract_field(line, "xid",   xid_str, sizeof(xid_str));
        uint64_t xid = (uint64_t)strtoull(xid_str, NULL, 10);

        pthread_mutex_lock(&s->cb_lock);
        evo_event_callback_t cb = s->cb;
        void                *ctx = s->ctx;
        pthread_mutex_unlock(&s->cb_lock);
        if (cb && !s->should_stop) {
            cb(tbl[0] ? tbl : "(unknown)", line, xid, ctx);
        }
    }
    return NULL;
}

evo_subscription_t *evo_cdc_subscribe(const char *host, int cdc_port,
                                       evo_event_callback_t callback,
                                       void *ctx,
                                       uint64_t from_lsn)
{
    (void)from_lsn;     /* reserved for v2 — server doesn't accept yet */

    if (!host || !callback || cdc_port <= 0) {
        evo_set_error(-1, "evo_cdc_subscribe: missing arg");
        return NULL;
    }

    evo_winsock_startup_once_sub();

    /* CDC port is plain TCP — no EVO handshake, no auth. */
    struct addrinfo hints, *res = NULL;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family   = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    char ps[16]; snprintf(ps, sizeof(ps), "%d", cdc_port);
    if (getaddrinfo(host, ps, &hints, &res) != 0 || !res) {
        evo_set_error(-2, "cdc_subscribe: getaddrinfo failed");
        return NULL;
    }
    int sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (sock < 0 ||
        connect(sock, res->ai_addr, res->ai_addrlen) < 0) {
        evo_set_error(-2, "cdc_subscribe: connect(%s:%d) failed: %s",
                      host, cdc_port, strerror(errno));
        if (sock >= 0) EVO_CLOSE(sock);
        freeaddrinfo(res);
        return NULL;
    }
    freeaddrinfo(res);

    evo_subscription_t *s = (evo_subscription_t *)calloc(1, sizeof(*s));
    if (!s) { EVO_CLOSE(sock); evo_set_error(-6, "OOM"); return NULL; }
    s->kind  = SUB_CDC;
    s->sock  = sock;
    s->cb    = callback;
    s->ctx   = ctx;
    pthread_mutex_init(&s->cb_lock, NULL);

    /* Drain the greeting line so the worker only sees real events. */
    char hello[256];
    sub_recv_line(s, hello, sizeof(hello));

    if (pthread_create(&s->worker, NULL, cdc_worker, s) != 0) {
        evo_set_error(-1, "cdc_subscribe: pthread_create failed");
        EVO_CLOSE(sock); pthread_mutex_destroy(&s->cb_lock); free(s);
        return NULL;
    }
    s->worker_started = 1;
    return s;
}

int evo_ack_up_to(evo_subscription_t *sub, uint64_t lsn)
{
    if (!sub) return -1;
    pthread_mutex_lock(&sub->cb_lock);
    if (lsn > sub->last_ack_lsn) sub->last_ack_lsn = lsn;
    pthread_mutex_unlock(&sub->cb_lock);
    return 0;   /* EVO_OK */
}

void evo_unsubscribe(evo_subscription_t *sub)
{
    if (!sub) return;

    /* Tell the worker to stop, then poke the socket so its blocking
     * recv returns. shutdown() is gentler than close() for this — it
     * unblocks readers without reusing the fd until we explicitly
     * close it below. */
    sub->should_stop = 1;
    if (sub->sock >= 0) EVO_SHUTDOWN(sub->sock);

    if (sub->worker_started) {
        pthread_join(sub->worker, NULL);
    }

    if (sub->sock >= 0) EVO_CLOSE(sub->sock);
    pthread_mutex_destroy(&sub->cb_lock);
    free(sub);
}
