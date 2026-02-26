#ifndef CATALOG_H
#define CATALOG_H

#include "result.h"

/*
 * Try to handle a query as a system catalog / internal query.
 * Returns 1 if handled (rs is filled), 0 if not a catalog query.
 *
 * Handles:
 *  - SELECT version()
 *  - SELECT current_database()
 *  - SELECT current_schema / current_schema()
 *  - SET ... (silently accepts)
 *  - SHOW ... (returns defaults)
 *  - BEGIN / COMMIT / ROLLBACK / DISCARD / DEALLOCATE / CLOSE / RESET
 *  - information_schema.tables
 *  - information_schema.columns
 *  - pg_catalog.* system table queries
 */
int catalog_try_handle(const char *sql, ResultSet *rs);

/* Scan current directory for .meta files and list tables */
int catalog_list_tables(ResultSet *rs);

/* Read column info from a table's .meta file */
int catalog_list_columns(const char *table_name, ResultSet *rs);

#endif /* CATALOG_H */
