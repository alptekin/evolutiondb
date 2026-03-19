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

/* GTT override — per-session storage for global temporary tables */
GttOverride *g_gtt_overrides = NULL;
int g_gtt_override_count = 0;
