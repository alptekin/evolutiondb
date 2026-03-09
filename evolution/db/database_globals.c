/*
 * database_globals.c — Server-wide global variable definitions
 *
 * Query-scoped globals have moved to QueryContext (query_context.h/c).
 * Only truly server-wide globals remain here.
 */
#include <stddef.h>
#include "database.h"

/* Server-wide globals — set once at startup, read-only during queries */
int  g_gui_mode = 0;
char g_dbRoot[1024];

/* Database/Schema context — per-session in the future, global for now.
 * These persist across queries within a connection. */
char g_currentDatabase[256];
char g_currentSchema[256];
