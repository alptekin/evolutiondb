/*
 * table_lock.c — Per-Table Mutex for Concurrent Multi-Table DML
 *
 * Fixed-size array of mutexes (striped by table name hash).
 * Different tables map to different stripes → concurrent DML.
 * Same table maps to same stripe → serialized DML.
 */
#include <string.h>
#include <pthread.h>
#include "table_lock.h"

#define TABLE_LOCK_STRIPES 64

static pthread_mutex_t g_table_locks[TABLE_LOCK_STRIPES];

static unsigned int table_hash(const char *name)
{
    unsigned int h = 5381;
    for (const char *p = name; *p; p++)
        h = ((h << 5) + h) + (unsigned char)*p;
    return h % TABLE_LOCK_STRIPES;
}

void table_lock_init(void)
{
    for (int i = 0; i < TABLE_LOCK_STRIPES; i++)
        pthread_mutex_init(&g_table_locks[i], NULL);
}

void table_lock_acquire(const char *table_name)
{
    if (!table_name || !table_name[0]) return;
    pthread_mutex_lock(&g_table_locks[table_hash(table_name)]);
}

void table_lock_release(const char *table_name)
{
    if (!table_name || !table_name[0]) return;
    pthread_mutex_unlock(&g_table_locks[table_hash(table_name)]);
}
