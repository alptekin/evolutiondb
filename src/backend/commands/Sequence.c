/*
 * Sequence.c — PostgreSQL-style sequence objects
 *
 * CREATE SEQUENCE / DROP SEQUENCE / NEXTVAL / CURRVAL / SETVAL / LASTVAL
 * Catalog operations (cat_*_sequence) live in catalog_internal.c
 */
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <pthread.h>
#include "database.h"
#include "catalog_internal.h"
#include "page_mgr.h"
#include "evosql_errcodes.h"

/* ── Mutex for atomic NEXTVAL ── */
static pthread_mutex_t g_seq_lock = PTHREAD_MUTEX_INITIALIZER;

/* ── Sequence operations ── */

int64_t evo_sequence_nextval(const char *seq_name, uint32_t schema_id)
{
    pthread_mutex_lock(&g_seq_lock);

    SequenceDesc sd;
    if (cat_find_sequence(schema_id, seq_name, &sd) != 0) {
        pthread_mutex_unlock(&g_seq_lock);
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "sequence \"%s\" does not exist", seq_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        return -1;
    }

    int64_t val;
    if (!sd.is_called) {
        val = sd.current_value;
        sd.is_called = 1;
    } else {
        val = sd.current_value + sd.increment;
        if (sd.increment > 0 && val > sd.max_value) {
            if (sd.cycle) {
                val = sd.min_value;
            } else {
                pthread_mutex_unlock(&g_seq_lock);
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "nextval: reached maximum value of sequence \"%s\" (%" PRId64 ")",
                         seq_name, sd.max_value);
                g_err.error = 1;
                return -1;
            }
        }
        if (sd.increment < 0 && val < sd.min_value) {
            if (sd.cycle) {
                val = sd.max_value;
            } else {
                pthread_mutex_unlock(&g_seq_lock);
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "nextval: reached minimum value of sequence \"%s\" (%" PRId64 ")",
                         seq_name, sd.min_value);
                g_err.error = 1;
                return -1;
            }
        }
        sd.current_value = val;
    }

    if (cat_update_sequence(&sd) != 0) {
        pthread_mutex_unlock(&g_seq_lock);
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to persist sequence \"%s\"", seq_name);
        g_err.error = 1;
        return -1;
    }
    pthread_mutex_unlock(&g_seq_lock);
    return val;
}

int64_t evo_sequence_setval(const char *seq_name, uint32_t schema_id,
                            int64_t value, int is_called)
{
    pthread_mutex_lock(&g_seq_lock);

    SequenceDesc sd;
    if (cat_find_sequence(schema_id, seq_name, &sd) != 0) {
        pthread_mutex_unlock(&g_seq_lock);
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "sequence \"%s\" does not exist", seq_name);
        g_err.error = 1;
        return -1;
    }

    sd.current_value = value;
    sd.is_called = is_called;
    if (cat_update_sequence(&sd) != 0) {
        pthread_mutex_unlock(&g_seq_lock);
        g_err.error = 1;
        return -1;
    }
    pthread_mutex_unlock(&g_seq_lock);
    return value;
}

/* ── DDL globals set by parser ── */

__thread char    g_seq_name[256];
__thread int64_t g_seq_start;
__thread int64_t g_seq_increment;
__thread int64_t g_seq_minvalue;
__thread int64_t g_seq_maxvalue;
__thread int     g_seq_cycle;
__thread int     g_seq_has_start;
__thread int     g_seq_if_not_exists;
__thread int     g_seq_if_exists;

void evo_seq_reset_params(void)
{
    g_seq_name[0] = '\0';
    g_seq_start = 1;
    g_seq_increment = 1;
    g_seq_minvalue = 1;
    g_seq_maxvalue = (int64_t)2147483647;
    g_seq_cycle = 0;
    g_seq_has_start = 0;
    g_seq_if_not_exists = 0;
    g_seq_if_exists = 0;
}

void evo_seq_set_name(const char *name) { strncpy(g_seq_name, name, 255); g_seq_name[255] = '\0'; }
void evo_seq_set_start(int64_t v) { g_seq_start = v; g_seq_has_start = 1; }
void evo_seq_set_increment(int64_t v) { g_seq_increment = v; }
void evo_seq_set_minvalue(int64_t v) { g_seq_minvalue = v; }
void evo_seq_set_maxvalue(int64_t v) { g_seq_maxvalue = v; }
void evo_seq_set_cycle(int v) { g_seq_cycle = v; }
void evo_seq_set_if_not_exists(void) { g_seq_if_not_exists = 1; }
void evo_seq_set_if_exists(void) { g_seq_if_exists = 1; }

int evo_create_sequence_process(void)
{
    extern __thread uint32_t g_current_schema_id;

    SequenceDesc existing;
    if (cat_find_sequence(g_current_schema_id, g_seq_name, &existing) == 0) {
        if (g_seq_if_not_exists) {
            printf("sequence \"%s\" already exists, skipping\n", g_seq_name);
            return 0;
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "sequence \"%s\" already exists", g_seq_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DUPLICATE_OBJECT);
        return -1;
    }

    SequenceDesc sd;
    memset(&sd, 0, sizeof(sd));
    sd.seq_id = pgm_next_id(0);
    sd.schema_id = g_current_schema_id;
    strncpy(sd.seq_name, g_seq_name, CAT_MAX_NAME_LEN - 1);
    sd.increment = g_seq_increment;
    sd.min_value = g_seq_minvalue;
    sd.max_value = g_seq_maxvalue;
    sd.start_value = g_seq_has_start ? g_seq_start : sd.min_value;
    sd.current_value = sd.start_value;
    sd.cycle = g_seq_cycle;
    sd.is_called = 0;

    if (cat_create_sequence(&sd) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to create sequence \"%s\"", g_seq_name);
        g_err.error = 1;
        return -1;
    }

    printf("CREATE SEQUENCE %s\n", g_seq_name);
    return 0;
}

int evo_drop_sequence_process(void)
{
    extern __thread uint32_t g_current_schema_id;

    SequenceDesc existing;
    if (cat_find_sequence(g_current_schema_id, g_seq_name, &existing) != 0) {
        if (g_seq_if_exists) {
            printf("sequence \"%s\" does not exist, skipping\n", g_seq_name);
            return 0;
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "sequence \"%s\" does not exist", g_seq_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        return -1;
    }

    if (cat_drop_sequence(g_current_schema_id, g_seq_name) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to drop sequence \"%s\"", g_seq_name);
        g_err.error = 1;
        return -1;
    }

    printf("DROP SEQUENCE %s\n", g_seq_name);
    return 0;
}

int evo_alter_sequence_process(void)
{
    extern __thread uint32_t g_current_schema_id;

    SequenceDesc sd;
    if (cat_find_sequence(g_current_schema_id, g_seq_name, &sd) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "sequence \"%s\" does not exist", g_seq_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        return -1;
    }

    /* Apply changed options */
    if (g_seq_increment != 1) sd.increment = g_seq_increment;
    if (g_seq_minvalue != 1) sd.min_value = g_seq_minvalue;
    if (g_seq_maxvalue != (int64_t)2147483647) sd.max_value = g_seq_maxvalue;
    if (g_seq_has_start) sd.start_value = g_seq_start;
    sd.cycle = g_seq_cycle;

    if (cat_update_sequence(&sd) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to alter sequence \"%s\"", g_seq_name);
        g_err.error = 1;
        return -1;
    }

    printf("ALTER SEQUENCE %s\n", g_seq_name);
    return 0;
}

int evo_restart_sequence_process(void)
{
    extern __thread uint32_t g_current_schema_id;

    SequenceDesc sd;
    if (cat_find_sequence(g_current_schema_id, g_seq_name, &sd) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "sequence \"%s\" does not exist", g_seq_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        return -1;
    }

    sd.current_value = g_seq_has_start ? g_seq_start : sd.start_value;
    sd.is_called = 0;

    if (cat_update_sequence(&sd) != 0) {
        g_err.error = 1;
        return -1;
    }

    printf("ALTER SEQUENCE %s RESTART\n", g_seq_name);
    return 0;
}

int evo_rename_sequence_process(const char *new_name)
{
    extern __thread uint32_t g_current_schema_id;

    SequenceDesc sd;
    if (cat_find_sequence(g_current_schema_id, g_seq_name, &sd) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "sequence \"%s\" does not exist", g_seq_name);
        g_err.error = 1;
        return -1;
    }

    /* Check new name doesn't exist */
    SequenceDesc existing;
    if (cat_find_sequence(g_current_schema_id, new_name, &existing) == 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "sequence \"%s\" already exists", new_name);
        g_err.error = 1;
        return -1;
    }

    if (cat_drop_sequence(g_current_schema_id, g_seq_name) != 0) {
        g_err.error = 1;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to rename sequence \"%s\"", g_seq_name);
        return -1;
    }
    strncpy(sd.seq_name, new_name, CAT_MAX_NAME_LEN - 1);
    sd.seq_name[CAT_MAX_NAME_LEN - 1] = '\0';
    if (cat_create_sequence(&sd) != 0) {
        g_err.error = 1;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to rename sequence \"%s\"", g_seq_name);
        return -1;
    }

    printf("ALTER SEQUENCE %s RENAME TO %s\n", g_seq_name, new_name);
    return 0;
}
