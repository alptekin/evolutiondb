/*
 * table_lock.h — Per-Table Mutex for Concurrent Multi-Table DML
 *
 * Provides table-level mutexes so DML on different tables can
 * execute concurrently. Same-table DML serializes.
 */
#ifndef TABLE_LOCK_H
#define TABLE_LOCK_H

#include <stdint.h>

/* Acquire mutex for a table (by name hash). Blocks if held. */
void table_lock_acquire(const char *table_name);

/* Release mutex for a table. */
void table_lock_release(const char *table_name);

/* Initialize table lock subsystem. */
void table_lock_init(void);

#endif /* TABLE_LOCK_H */
