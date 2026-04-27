/*
 * database_globals.c — Server-wide global variable definitions
 *
 * Query-scoped globals have moved to QueryContext (query_context.h/c).
 * Only truly server-wide globals remain here.
 */
#include <stddef.h>
#include <stdint.h>
#include <pthread.h>
#include "database.h"

/* Server-wide globals — set once at startup, read-only during queries */
int  g_gui_mode = 0;
char g_dbRoot[1024];

/* Metadata file mutex — protects users/grants/databases registry files
 * from concurrent writes (defense-in-depth alongside parser mutex). */
pthread_mutex_t g_metadata_lock = PTHREAD_MUTEX_INITIALIZER;

/* Snowflake ID state — protected by g_parse_lock in query_executor */
uint64_t g_snowflake_last_ms  = 0;
uint16_t g_snowflake_sequence = 0;
uint16_t g_snowflake_machine_id = 0;

/* LAST_INSERT_ID — per-session, synced via SessionCtx in query_executor */
char g_last_insert_id[64] = "";

/* Sequence support — per-session */
__thread uint32_t g_current_schema_id = 1; /* default schema */
__thread int64_t g_last_seq_value = 0;
__thread int     g_last_seq_valid = 0;
__thread char    g_last_seq_name[256] = "";

/* GTT override — per-session storage for global temporary tables */
GttOverride *g_gtt_overrides = NULL;
int g_gtt_override_count = 0;

/* Concurrent index build modification log */
ConcModLog g_conc_mod_log = {0};

/* Query cancellation flag — thread-local, set by watchdog or CancelRequest */
__thread volatile int g_query_cancelled = 0;

/* Lock wait timeout — thread-local, 0 = use default */
__thread int g_lock_timeout_ms = 0;

/* Task 209 — Temporal retention window (days). 0 = disabled (no
 * pruning, AS OF unbounded). Read from EVOSQL_SYSTEM_TIME_RETENTION_DAYS
 * at startup; runtime SET SYSTEM_TIME_RETENTION = N overrides. The
 * auto-RECLAIM worker reads this on every tick to prune
 * <name>_history rows whose valid_to fell outside the window. */
volatile int g_system_time_retention_days = 7;
