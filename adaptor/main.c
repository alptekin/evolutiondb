/*
 * EvoSQL Adaptor — Dual-Protocol Server
 *
 * Spawns two listener threads:
 *   • PG   protocol on port 5433 (default) — DBeaver / psql / JDBC
 *   • EVO  protocol on port 9967 (default) — evosql CLI
 *
 * Usage:
 *   evosql-server [--pg-port PORT] [--evo-port PORT]
 *                 [--replication-port PORT] [--replica HOST:PORT]
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platform.h"
#include "server.h"
#include "pg_handler.h"
#include "evo_protocol.h"
#include "replication.h"
#include "raft.h"
#include "distributed.h"
#include "tls.h"
#include "../evolution/db/version.h"
#include "../evolution/db/wal.h"
#include "../evolution/db/database.h"
#include "../evolution/db/page_mgr.h"

#define DEFAULT_PG_PORT   5433
#define DEFAULT_EVO_PORT  9967

/* Portable setenv: --bind / --data-dir are sugar over the EVOSQL_BIND /
 * EVOSQL_DATA_DIR env vars, read later by net.c and DatabaseMgmt.c. */
#ifdef _WIN32
  #define EVO_SETENV(k, v) _putenv_s((k), (v))
#else
  #define EVO_SETENV(k, v) setenv((k), (v), 1)
#endif

/* ---- Graceful shutdown on SIGTERM/SIGINT ---- */
#ifndef _WIN32
#include <signal.h>
#include <unistd.h>

static void shutdown_handler(int sig)
{
    (void)sig;
    const char msg[] = "\n[server] Signal received — shutting down...\n";
    (void)write(STDERR_FILENO, msg, sizeof(msg) - 1);
    server_cleanup();
    _exit(0);
}

/* Crash safety net for genuine fatal signals (segfault / bus / FPE / abort).
 * In server mode a bad QUERY is already recovered via setjmp/longjmp (the
 * engine does not abort), so this fires only on real memory corruption / a
 * NULL deref in C / an unexpected abort(). It MUST be async-signal-safe:
 * only write()/signal()/raise()/_exit() — NO server_cleanup (locks + stdio
 * could deadlock or corrupt inside a signal handler). We leave a breadcrumb,
 * then restore the default disposition and re-raise so a core dump is produced
 * and the process exits with a failure status the supervisor acts on
 * (docker restart:on-failure / systemd Restart=on-failure). Data already
 * committed is durable: every commit fsyncs the WAL before returning. */
static void fatal_signal_handler(int sig)
{
#define EVO_WMSG(s) (void)write(STDERR_FILENO, (s), sizeof(s) - 1)
    switch (sig) {
        case SIGSEGV: EVO_WMSG("\n[FATAL] SIGSEGV — crashing; supervisor should restart (committed data durable via WAL)\n"); break;
        case SIGBUS:  EVO_WMSG("\n[FATAL] SIGBUS — crashing; supervisor should restart (committed data durable via WAL)\n"); break;
        case SIGFPE:  EVO_WMSG("\n[FATAL] SIGFPE — crashing; supervisor should restart (committed data durable via WAL)\n"); break;
        default:      EVO_WMSG("\n[FATAL] fatal signal — crashing; supervisor should restart (committed data durable via WAL)\n"); break;
    }
#undef EVO_WMSG
    /* Restore the default disposition and UNBLOCK the signal (the kernel masks
     * it while we're in the handler), then re-raise so the process dies by the
     * signal — producing a core dump and a signal-accurate exit status the
     * supervisor treats as failure. sigemptyset/sigaddset/sigprocmask/signal/
     * raise/_exit are all async-signal-safe. */
    signal(sig, SIG_DFL);
    {
        sigset_t set;
        sigemptyset(&set);
        sigaddset(&set, sig);
        sigprocmask(SIG_UNBLOCK, &set, NULL);
    }
    raise(sig);
    _exit(70);              /* belt-and-suspenders if raise somehow returns */
}
#endif

/* ---- Thread param for listener ---- */
typedef struct {
    int                  port;
    const char          *label;
    protocol_handler_fn  handler;
} ListenerArg;

static THREAD_RETURN listener_thread(THREAD_PARAM param)
{
    ListenerArg *a = (ListenerArg *)param;
    server_listen(a->port, a->label, a->handler);
    return 0;
}

/* Parse size string: "128MB", "1GB", "32768" (pages), "512M" */
static int parse_buffer_size(const char *s)
{
    char *end;
    long val = strtol(s, &end, 10);
    if (val <= 0) return 0;
    /* Unit suffix → convert to 4KB pages */
    if (*end == 'G' || *end == 'g')      return (int)(val * 1024 * 1024 / 4);  /* GB → pages */
    else if (*end == 'M' || *end == 'm') return (int)(val * 1024 / 4);          /* MB → pages */
    else if (*end == 'K' || *end == 'k') return (int)(val / 4);                 /* KB → pages */
    return (int)val;  /* raw page count */
}

int main(int argc, char *argv[])
{
    int pg_port  = DEFAULT_PG_PORT;
    int evo_port = DEFAULT_EVO_PORT;
    int buffer_pool_pages = 0;  /* 0 = use default */
    int repl_port = 0;         /* 0 = replication disabled */
    int cdc_port  = 0;         /* Task 211: 0 = CDC streaming disabled */
    const char *replica_target = NULL;  /* --replica host:port */
    const char *cluster_nodes = NULL;   /* --cluster node1:port,node2:port,... */
    int node_id = -1;                   /* --node-id 0/1/2/... */
    int dist_port = 9969;              /* --dist-port (distributed query engine) */
    const char *role_str = NULL;       /* --role primary|replica|witness */
    const char *base_backup_path = NULL;  /* --base-backup PATH */
    int require_tls = 0;               /* --require-tls / EVOSQL_REQUIRE_TLS */
    long long recover_to_us = 0;       /* --recover-to <epoch_microseconds> */
    int recover_to_set = 0;            /* distinguishes target 0 from "unset" */
    int rekey_mode = 0;                /* --rekey (rotate encryption passphrase) */
    int i;

    /* Environment defaults (CLI flags below override).
     *   EVOSQL_REPLICATION_ROLE   = primary | replica | witness
     *   EVOSQL_PRIMARY_HOST       = upstream host for replicas
     *   EVOSQL_PRIMARY_PORT       = upstream port for replicas
     *   EVOSQL_REPLICATION_PORT   = primary listen port for WAL sender
     *   EVOSQL_REPLICATION_USER   = credential for auth handshake (Commit 4)
     *   EVOSQL_REPLICATION_PASSWORD
     */
    {
        const char *env_role = getenv("EVOSQL_REPLICATION_ROLE");
        const char *env_primary_host = getenv("EVOSQL_PRIMARY_HOST");
        const char *env_primary_port = getenv("EVOSQL_PRIMARY_PORT");
        const char *env_repl_port = getenv("EVOSQL_REPLICATION_PORT");
        const char *env_repl_user = getenv("EVOSQL_REPLICATION_USER");
        const char *env_repl_pass = getenv("EVOSQL_REPLICATION_PASSWORD");
        const char *env_repl_tls  = getenv("EVOSQL_REPLICATION_TLS");

        if (env_role && env_role[0])
            role_str = env_role;
        if (env_repl_port && env_repl_port[0])
            repl_port = atoi(env_repl_port);

        /* If role=replica and primary host given, build a target string. */
        if (env_role && strcasecmp(env_role, "replica") == 0 &&
            env_primary_host && env_primary_host[0]) {
            static char repl_target_buf[320];
            int pport = (env_primary_port && env_primary_port[0])
                ? atoi(env_primary_port) : REPL_DEFAULT_PORT;
            snprintf(repl_target_buf, sizeof(repl_target_buf), "%s:%d",
                     env_primary_host, pport);
            replica_target = repl_target_buf;
        }

        /* Pre-register auth creds — handshake validates them. */
        if (env_repl_user && env_repl_pass) {
            repl_set_auth(env_repl_user, env_repl_pass);
        }

        /* Enable TLS on the replication transport when EVOSQL_REPLICATION_TLS
         * is truthy. Uses the same cert/key as the PG-wire TLS context. */
        if (env_repl_tls && (env_repl_tls[0] == '1' || env_repl_tls[0] == 't' ||
                             env_repl_tls[0] == 'T' || env_repl_tls[0] == 'y' ||
                             env_repl_tls[0] == 'Y')) {
            repl_enable_tls(1);
        }
    }

    /* Parse CLI arguments (override env) */
    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--pg-port") == 0 && i + 1 < argc)
            pg_port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--evo-port") == 0 && i + 1 < argc)
            evo_port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--buffer-pool-size") == 0 && i + 1 < argc)
            buffer_pool_pages = parse_buffer_size(argv[++i]);
        else if (strcmp(argv[i], "--replication-port") == 0 && i + 1 < argc)
            repl_port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--cdc-port") == 0 && i + 1 < argc)
            cdc_port = atoi(argv[++i]);   /* Task 211 */
        else if (strcmp(argv[i], "--replica") == 0 && i + 1 < argc)
            replica_target = argv[++i];
        else if (strcmp(argv[i], "--cluster") == 0 && i + 1 < argc)
            cluster_nodes = argv[++i];
        else if (strcmp(argv[i], "--node-id") == 0 && i + 1 < argc)
            node_id = atoi(argv[++i]);
        else if (strcmp(argv[i], "--dist-port") == 0 && i + 1 < argc)
            dist_port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--role") == 0 && i + 1 < argc)
            role_str = argv[++i];
        else if (strcmp(argv[i], "--base-backup") == 0 && i + 1 < argc)
            base_backup_path = argv[++i];
        else if (strcmp(argv[i], "--recover-to") == 0 && i + 1 < argc) {
            recover_to_us = strtoll(argv[++i], NULL, 10);  /* epoch microseconds */
            recover_to_set = 1;
        }
        else if (strcmp(argv[i], "--rekey") == 0)
            rekey_mode = 1;            /* new passphrase via EVOSQL_ENCRYPTION_KEY_NEW */
        else if (strcmp(argv[i], "--bind") == 0 && i + 1 < argc)
            EVO_SETENV("EVOSQL_BIND", argv[++i]);   /* listener address; default loopback */
        else if (strcmp(argv[i], "--data-dir") == 0 && i + 1 < argc)
            EVO_SETENV("EVOSQL_DATA_DIR", argv[++i]);  /* must be set before server_init_ex */
        else if (strcmp(argv[i], "--require-tls") == 0)
            require_tls = 1;           /* reject non-loopback plaintext PG connections */
        else if (argv[i][0] >= '0' && argv[i][0] <= '9')
            pg_port = atoi(argv[i]);   /* backward compat: bare number = PG port */
    }

    /* Resolve role string to numeric (pins SHOW REPLICATION STATUS output
     * before any replica connects). */
    if (role_str) {
        if (strcasecmp(role_str, "replica") == 0) {
            repl_set_role(REPL_ROLE_REPLICA);
        } else if (strcasecmp(role_str, "witness") == 0) {
            repl_set_role(REPL_ROLE_WITNESS);
            repl_set_witness(1);
        } else if (strcasecmp(role_str, "primary") == 0) {
            repl_set_role(REPL_ROLE_PRIMARY);
        } else {
            fprintf(stderr, "[REPL] Unknown role '%s' — expected primary|replica|witness\n",
                    role_str);
        }
    }

    /* Environment variable override (MySQL-style: bytes or with suffix) */
    if (buffer_pool_pages == 0) {
        const char *env = getenv("EVOSQL_BUFFER_POOL_SIZE");
        if (env && env[0])
            buffer_pool_pages = parse_buffer_size(env);
    }

    /* Task 209 — Temporal retention window seed (default 7 days, 0
     * disables). Runtime SET SYSTEM_TIME_RETENTION = N overrides. */
    {
        extern volatile int g_system_time_retention_days;
        const char *env = getenv("EVOSQL_SYSTEM_TIME_RETENTION_DAYS");
        if (env && env[0]) {
            int n = atoi(env);
            if (n >= 0) g_system_time_retention_days = n;
        }
    }

#ifndef _WIN32
    signal(SIGPIPE, SIG_IGN);
    signal(SIGTERM, shutdown_handler);
    signal(SIGINT,  shutdown_handler);
    /* Crash safety net: log + re-raise on a real fatal signal so the process
     * fails cleanly and the supervisor restarts it (committed data is durable
     * via the WAL). Query-level errors never reach here — they longjmp. */
    signal(SIGSEGV, fatal_signal_handler);
    signal(SIGBUS,  fatal_signal_handler);
    signal(SIGFPE,  fatal_signal_handler);
    signal(SIGABRT, fatal_signal_handler);
#endif

    printf("EvolutionDB v%s\n", EVODB_VERSION);
    fflush(stdout);

    /* Initialise engine, locks, socket subsystem */
    server_init_ex(buffer_pool_pages);

    /* --base-backup mode: run the copy and exit
     * without binding listener sockets. Scripted replica bootstrap
     * uses this to clone a fresh data directory from primary. */
    if (base_backup_path) {
        int rc = repl_create_backup(base_backup_path);
        server_cleanup();
        return rc == 0 ? 0 : 1;
    }

    /* --recover-to <epoch_us> mode: rewind the database to a past point in time
     * from the continuous WAL archive (EVOSQL_WAL_ARCHIVE), then exit. Runs here
     * — right after engine init, before any listener or background thread — so
     * the data file is mutated out-of-band with nothing else touching it.
     *
     * WARNING: this rewrites the data file in place (the live tail past the last
     * archived checkpoint is discarded). Stop the server cleanly first (a clean
     * shutdown archives the final WAL) and copy the data dir if you may still
     * need the current state. The reconstruction is validated and swapped in
     * atomically, so a FAILED recovery leaves the original intact. */
    if (recover_to_set) {
        /* Quiesce the background mutators server_init_ex started, so neither the
         * auto-reclaimer nor the checkpointer writes while we rebuild the file. */
        auto_reclaim_stop();
        wal_checkpointer_stop();

        int restored = wal_pitr_recover(db_get_root(), (int64_t)recover_to_us);
        fflush(stdout);
        fflush(stderr);
        /* Bypass server_cleanup(): pgm_shutdown would flush the stale in-memory
         * FileHeader (still the pre-rewind state) back over the recovered page 0.
         * The recovered file is already fsync'd and swapped in. */
        _exit(restored < 0 ? 1 : 0);
    }

    /* --rekey mode: rotate the at-rest encryption passphrase, then exit. The
     * CURRENT passphrase comes from EVOSQL_ENCRYPTION_KEY (server_init_ex used
     * it to load the DEK); the NEW one from EVOSQL_ENCRYPTION_KEY_NEW (an env
     * var, never argv, so it does not leak via the process list). Only the
     * FileHeader's key wrapping changes — data pages are untouched. */
    if (rekey_mode) {
        auto_reclaim_stop();
        wal_checkpointer_stop();

        const char *newp = getenv("EVOSQL_ENCRYPTION_KEY_NEW");
        if (!newp || !newp[0]) {
            fprintf(stderr, "[REKEY] Set EVOSQL_ENCRYPTION_KEY_NEW to the new "
                    "passphrase and EVOSQL_ENCRYPTION_KEY to the current one.\n");
            fflush(stderr);
            _exit(1);
        }
        int rc = pgm_rekey(newp);
        if (rc != 0) {
            fprintf(stderr, "[REKEY] Failed. The database must be encrypted and "
                    "EVOSQL_ENCRYPTION_KEY must be the current passphrase.\n");
            fflush(stderr);
            _exit(1);
        }
        fprintf(stderr, "[REKEY] Encryption passphrase rotated. Restart with "
                "EVOSQL_ENCRYPTION_KEY set to the new passphrase.\n");
        fflush(stdout);
        fflush(stderr);
        /* Bypass server_cleanup(): the new header is already flushed + fsync'd;
         * a second flush is harmless but unnecessary. */
        _exit(0);
    }

    /* Task 91: LISTEN/NOTIFY registry */
    {
        extern void notify_registry_init(void);
        notify_registry_init();
    }

    /* TLS initialisation — read cert/key paths from environment */
    {
        const char *cert = getenv("EVOSQL_TLS_CERT");
        const char *key  = getenv("EVOSQL_TLS_KEY");
        if (cert && key) {
            if (tls_global_init(cert, key) == 0) {
                printf("[TLS] Server TLS enabled\n");
            } else {
                fprintf(stderr, "[TLS] Failed to initialise — continuing without TLS\n");
            }
        } else {
            printf("[TLS] No EVOSQL_TLS_CERT / EVOSQL_TLS_KEY set — TLS disabled\n");
        }
    }

    /* Require-TLS gate for non-loopback PG connections. Env fallback, then a
     * hard startup guard: enabling it without TLS available would refuse every
     * remote SSLRequest and then reject the plaintext fallback — locking out
     * all remote clients. Fail fast instead of starting in that trap. */
    {
        extern int g_pg_require_tls;
        if (!require_tls) {
            const char *e = getenv("EVOSQL_REQUIRE_TLS");
            if (e && (e[0] == '1' || e[0] == 't' || e[0] == 'T' ||
                      e[0] == 'y' || e[0] == 'Y'))
                require_tls = 1;
        }
        if (require_tls && !tls_is_available()) {
            fprintf(stderr,
                "[FATAL] require-tls is set but TLS is unavailable. Build with "
                "TLS=1 and set EVOSQL_TLS_CERT / EVOSQL_TLS_KEY, or unset "
                "EVOSQL_REQUIRE_TLS. Refusing to start to avoid locking out "
                "remote clients.\n");
            server_cleanup();
            return 1;
        }
        g_pg_require_tls = require_tls;
        if (require_tls)
            printf("[TLS] require-tls: non-loopback PG connections must use TLS\n");
    }

    /* Banner */
    printf("==============================================\n");
    printf("                __                            \n");
    printf("               / _)                           \n");
    printf("      _.----._/ /                             \n");
    printf("     /         /                              \n");
    printf("  __/ (  | (  |                               \n");
    printf(" /__.-'|_|--|_|                               \n");
    printf("==============================================\n");
    printf("  EvoSQL Adaptor Server (dual-protocol)\n");
    printf("  PG  protocol on port %d\n", pg_port);
    printf("  EVO protocol on port %d\n", evo_port);
    printf("  TLS: %s\n", tls_is_available() ? "enabled" : "disabled");
    printf("  Max connections: %d\n", get_max_connections());
    if (repl_port > 0)
        printf("  Replication: sender on port %d\n", repl_port);
    if (replica_target)
        printf("  Replication: replica of %s\n", replica_target);
    /* Task 211 — env fallback for CDC port matches the rest of the
     * server's "CLI flag wins, env fills in" pattern. */
    if (cdc_port == 0) {
        const char *env = getenv("EVOSQL_CDC_PORT");
        if (env && env[0]) cdc_port = atoi(env);
    }
    if (cdc_port > 0)
        printf("  CDC streaming on port %d (JSON Lines)\n", cdc_port);
    printf("==============================================\n");
    fflush(stdout);

    /* Start replication sender if configured */
    if (repl_port > 0) {
        repl_start_sender(repl_port);
    }

    /* Task 211 — start the CDC streaming server. The connect-time
     * subscriber registry lives in replication.c so the same WAL
     * decoder feeds both replica replay and primary push. */
    if (cdc_port > 0) {
        extern int repl_start_cdc_server(int);
        if (repl_start_cdc_server(cdc_port) != 0) {
            fprintf(stderr, "[CDC] Failed to bind on port %d\n", cdc_port);
        }
    }

    /* Start replica receiver if configured */
    if (replica_target) {
        char host[256] = "127.0.0.1";
        int rport = REPL_DEFAULT_PORT;
        /* Parse host:port */
        const char *colon = strchr(replica_target, ':');
        if (colon) {
            int hlen = (int)(colon - replica_target);
            if (hlen > 0 && hlen < 255) {
                strncpy(host, replica_target, hlen);
                host[hlen] = '\0';
            }
            rport = atoi(colon + 1);
        } else {
            strncpy(host, replica_target, 255);
        }
        extern int pgm_get_fd(void);   /* engine-internal, no public header */
        repl_start_receiver(host, rport, pgm_get_fd());
    }

    /* Start Raft consensus if cluster configured */
    if (cluster_nodes && node_id >= 0) {
        if (raft_init(cluster_nodes, node_id) == 0) {
            /* Wire Raft role transitions into the
             * replication module before starting — so the first
             * election already flips primary/replica automatically. */
            repl_bind_raft_glue(repl_port > 0 ? repl_port : REPL_DEFAULT_PORT);
            repl_install_raft_glue();
            raft_start();
        }
    }

    /* Start distributed query engine if cluster configured */
    if (cluster_nodes && node_id >= 0) {
        dist_init(node_id, pg_port);
        /* Register all cluster nodes for distributed routing */
        {
            int nn = raft_get_num_nodes();
            for (int ni = 0; ni < nn; ni++) {
                char host[256];
                int rport;
                if (raft_get_node_host_port(ni, host, sizeof(host), &rport) == 0) {
                    /* Compute PG port for each node: base pg_port + (node_id - my_id) offset
                     * Default assumption: pg_port increments by 1 per node */
                    int node_pg_port = pg_port + (ni - node_id);
                    int node_dist_port = dist_port + (ni - node_id);
                    dist_register_node(ni, host, node_pg_port, node_dist_port);
                }
            }
        }
        /* Start distributed listener thread */
        static ListenerArg dist_arg;
        dist_arg.port    = dist_port;
        dist_arg.label   = "DIST";
        dist_arg.handler = dist_handle_client;
        thread_create(listener_thread, (THREAD_PARAM)&dist_arg);
        printf("  DIST engine on port %d (node %d)\n", dist_port, node_id);
    }

    /* Start EVO listener in a background thread */
    static ListenerArg evo_arg;
    evo_arg.port    = evo_port;
    evo_arg.label   = "EVO";
    evo_arg.handler = evo_handle_client;
    thread_create(listener_thread, (THREAD_PARAM)&evo_arg);

    /* Run PG listener on the main thread (blocks forever) */
    server_listen(pg_port, "PG", pg_handle_client);

    tls_global_cleanup();
    server_cleanup();
    return 0;
}
