/*
 * catalog_internal.c — System Catalog for EvoSQL Unified Storage
 *
 * Stores metadata in 8 B+ trees (one per CatalogID).
 * Records are semicolon-delimited strings stored on slotted pages.
 * B+ tree maps key -> RowID, RowID points to slotted page record.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <pthread.h>
#include "catalog_internal.h"
#include "table_api.h"
#include "database.h"

/* ----------------------------------------------------------------
 *  Internal state
 * ---------------------------------------------------------------- */
static BTree2   g_cat_trees[CAT_MAX];       /* B+ tree handles */
static uint32_t g_cat_data_pages[CAT_MAX];  /* current insertion pages */
static int      g_cat_initialized = 0;

/* Catalog-wide mutex for thread-safe access.
 * All catalog operations (find, list, create, update, delete) acquire
 * this mutex. Concurrent DML on different tables can proceed because
 * catalog access is brief (B+ tree lookup). */
static pthread_mutex_t g_cat_mutex = PTHREAD_MUTEX_INITIALIZER;

#define CAT_LOCK()   pthread_mutex_lock(&g_cat_mutex)
#define CAT_UNLOCK() pthread_mutex_unlock(&g_cat_mutex)

/* Constraint ordinal counter per table (simple approach: global counter) */
static int g_constraint_ordinal = 0;

/* ----------------------------------------------------------------
 *  Key format helpers — composite keys for B+ tree
 *
 *  Numeric IDs are zero-padded to 10 digits to ensure correct
 *  lexicographic ordering in the B+ tree for composite keys.
 * ---------------------------------------------------------------- */

static void make_id_prefix(uint32_t id, char *out, int size)
{
    snprintf(out, size, "%010u:", id);
}

static void make_schema_key(uint32_t db_id, const char *name,
                            char *out, int size)
{
    snprintf(out, size, "%010u:%s", db_id, name);
}

static void make_table_key(uint32_t schema_id, const char *name,
                           char *out, int size)
{
    snprintf(out, size, "%010u:%s", schema_id, name);
}

static void make_column_key(uint32_t table_id, int ordinal,
                            char *out, int size)
{
    snprintf(out, size, "%010u:%010d", table_id, ordinal);
}

static void make_index_key(uint32_t table_id, const char *name,
                           char *out, int size)
{
    snprintf(out, size, "%010u:%s", table_id, name);
}

static void make_constraint_key(uint32_t table_id, int ordinal,
                                char *out, int size)
{
    snprintf(out, size, "%010u:%010d", table_id, ordinal);
}

static void make_grant_key(const char *username, int scope_type,
                           const char *scope_name, char *out, int size)
{
    snprintf(out, size, "%s:%d:%s", username, scope_type, scope_name);
}

/* ----------------------------------------------------------------
 *  Record serialization / deserialization
 *
 *  Format: semicolon-delimited fields as strings.
 *  Example TableDesc: "table_id;schema_id;name;pk_root;heap;ncols;pad;ai_col;ai_cnt;ai_step"
 * ---------------------------------------------------------------- */

/* Helper: safe field extraction from semicolon-delimited record */
static const char *next_field(const char *p, char *field, int maxlen)
{
    if (!p) return NULL;
    int i = 0;
    while (*p && *p != ';' && i < maxlen - 1) {
        field[i++] = *p++;
    }
    field[i] = '\0';
    if (*p == ';') p++;
    return p;
}

/* --- Database --- */
static void serialize_database(const DatabaseDesc *d, char *buf, int size)
{
    snprintf(buf, size, "%u", d->db_id);
}

static void deserialize_database(const char *buf, const char *key,
                                 DatabaseDesc *d)
{
    char field[64];
    next_field(buf, field, sizeof(field));
    d->db_id = (uint32_t)atoi(field);
    strncpy(d->db_name, key, CAT_MAX_NAME_LEN - 1);
    d->db_name[CAT_MAX_NAME_LEN - 1] = '\0';
}

/* --- Schema --- */
static void serialize_schema(const SchemaDesc *s, char *buf, int size)
{
    snprintf(buf, size, "%u;%u;%s", s->schema_id, s->db_id, s->schema_name);
}

static void deserialize_schema(const char *buf, SchemaDesc *s)
{
    char field[CAT_MAX_NAME_LEN];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); s->schema_id = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); s->db_id = (uint32_t)atoi(field);
    p = next_field(p, s->schema_name, CAT_MAX_NAME_LEN);
    (void)p;
}

/* --- Table --- */
static void serialize_table(const TableDesc *t, char *buf, int size)
{
    snprintf(buf, size, "%u;%u;%s;%u;%u;%d;%d;%d;%d;%d;%d;%d;%u;%d;%s;%d;%u;%u;%u;%u",
             t->table_id, t->schema_id, t->table_name,
             t->pk_root_page, t->heap_page,
             t->num_columns, t->pad_size,
             t->auto_inc_col, t->auto_inc_counter, t->auto_inc_step,
             t->is_temporary, t->on_commit_delete,
             t->owner_node_id,
             t->shard_type,
             t->shard_key[0] ? t->shard_key : "",
             t->shard_count,
             t->parent_table_id,                  /* Task 92: INHERITS */
             (unsigned int)t->rls_enabled,        /* Task 93: RLS flag */
             (unsigned int)t->system_versioned,   /* Task 208: SYSTEM VERSIONING flag */
             t->history_table_id);                /* Task 208: shadow table id */
}

static void deserialize_table(const char *buf, TableDesc *t)
{
    char field[CAT_MAX_NAME_LEN];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); t->table_id = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); t->schema_id = (uint32_t)atoi(field);
    p = next_field(p, t->table_name, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field)); t->pk_root_page = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); t->heap_page = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); t->num_columns = atoi(field);
    p = next_field(p, field, sizeof(field)); t->pad_size = atoi(field);
    p = next_field(p, field, sizeof(field)); t->auto_inc_col = atoi(field);
    p = next_field(p, field, sizeof(field)); t->auto_inc_counter = atoi(field);
    p = next_field(p, field, sizeof(field)); t->auto_inc_step = atoi(field);
    /* is_temporary — optional field for backward compatibility */
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->is_temporary = atoi(field);
    } else {
        t->is_temporary = 0;
    }
    /* on_commit_delete — GTT only, optional */
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->on_commit_delete = atoi(field);
    } else {
        t->on_commit_delete = 1; /* default: DELETE ROWS */
    }
    /* owner_node_id — distributed placement, optional */
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->owner_node_id = (uint32_t)atoi(field);
    } else {
        t->owner_node_id = 0; /* default: local */
    }
    /* shard_type — optional */
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->shard_type = atoi(field);
    } else {
        t->shard_type = SHARD_NONE;
    }
    /* shard_key — optional */
    if (p && *p) {
        p = next_field(p, t->shard_key, CAT_MAX_NAME_LEN);
    } else {
        t->shard_key[0] = '\0';
    }
    /* shard_count — optional */
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->shard_count = atoi(field);
    } else {
        t->shard_count = 0;
    }
    /* parent_table_id — optional, Task 92 (INHERITS). Pre-2.0.7 rows
     * have no parent; zero is the sentinel for "no inheritance". */
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->parent_table_id = (uint32_t)atoi(field);
    } else {
        t->parent_table_id = 0;
    }
    /* rls_enabled — optional, Task 93. Pre-2.0.8 rows default to 0. */
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->rls_enabled = (uint8_t)atoi(field);
    } else {
        t->rls_enabled = 0;
    }
    /* system_versioned + history_table_id — optional, Task 208.
     * Pre-task rows default to 0 / 0. */
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->system_versioned = (uint8_t)atoi(field);
    } else {
        t->system_versioned = 0;
    }
    if (p && *p) {
        p = next_field(p, field, sizeof(field)); t->history_table_id = (uint32_t)atoi(field);
    } else {
        t->history_table_id = 0;
    }
    (void)p;
}

/* --- Column --- */
static void serialize_column(const ColumnDesc *c, char *buf, int size)
{
    snprintf(buf, size, "%u;%d;%s;%d;%d;%d;%d;%s;%d;%s;%d",
             c->table_id, c->col_ordinal, c->col_name,
             c->type_code, c->is_not_null, c->is_unique, c->is_pk,
             c->default_val,
             c->generated_mode,
             c->generated_expr[0] ? c->generated_expr : "",
             c->is_dropped);
}

static void deserialize_column(const char *buf, ColumnDesc *c)
{
    char field[CAT_MAX_DEFAULT_LEN];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); c->table_id = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); c->col_ordinal = atoi(field);
    p = next_field(p, c->col_name, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field)); c->type_code = atoi(field);
    p = next_field(p, field, sizeof(field)); c->is_not_null = atoi(field);
    p = next_field(p, field, sizeof(field)); c->is_unique = atoi(field);
    p = next_field(p, field, sizeof(field)); c->is_pk = atoi(field);
    p = next_field(p, c->default_val, CAT_MAX_DEFAULT_LEN);
    /* generated_mode — 9th field, may be absent in old records */
    c->generated_mode = 0;
    c->generated_expr[0] = '\0';
    c->is_dropped = 0;
    if (p && *p) {
        p = next_field(p, field, sizeof(field));
        c->generated_mode = atoi(field);
        if (p && *p) {
            p = next_field(p, c->generated_expr, sizeof(c->generated_expr));
            /* is_dropped — 11th field, may be absent in old records */
            if (p && *p) {
                next_field(p, field, sizeof(field));
                c->is_dropped = atoi(field);
            }
        }
    }
}

/* --- Index --- */
static void serialize_index(const IndexDesc *idx, char *buf, int size)
{
    snprintf(buf, size, "%u;%s;%u;%s;%c;%s;%d",
             idx->table_id, idx->index_name,
             idx->root_page, idx->col_list, idx->index_type,
             idx->expr_def[0] ? idx->expr_def : "",
             idx->is_ready);
}

static void deserialize_index(const char *buf, IndexDesc *idx)
{
    char field[CAT_MAX_NAME_LEN];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); idx->table_id = (uint32_t)atoi(field);
    p = next_field(p, idx->index_name, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field)); idx->root_page = (uint32_t)atoi(field);
    p = next_field(p, idx->col_list, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field));
    idx->index_type = field[0] ? field[0] : 'N';
    /* expr_def — 6th field, may be absent in old records */
    idx->expr_def[0] = '\0';
    if (p && *p) {
        p = next_field(p, idx->expr_def, sizeof(idx->expr_def));
    }
    /* is_ready — 7th field, default 1 for backward compatibility */
    if (p && *p) {
        p = next_field(p, field, sizeof(field));
        idx->is_ready = atoi(field);
    } else {
        idx->is_ready = IDX_READY;
    }
    (void)p;
}

/* --- Constraint --- */
static void serialize_constraint(const ConstraintDesc *c, char *buf, int size)
{
    snprintf(buf, size, "%u;%d;%c;%s;%u;%s;%s;%d;%d",
             c->table_id, c->ordinal, c->constraint_type,
             c->definition, c->ref_table_id, c->ref_columns,
             c->constraint_name, c->is_enabled, c->is_validated);
}

static void deserialize_constraint(const char *buf, ConstraintDesc *c)
{
    char field[1024];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); c->table_id = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); c->ordinal = atoi(field);
    p = next_field(p, field, sizeof(field)); c->constraint_type = field[0];
    p = next_field(p, c->definition, sizeof(c->definition));
    p = next_field(p, field, sizeof(field)); c->ref_table_id = (uint32_t)atoi(field);
    p = next_field(p, c->ref_columns, CAT_MAX_NAME_LEN);
    p = next_field(p, c->constraint_name, CAT_MAX_NAME_LEN);
    /* is_enabled, is_validated (default to 1 for backward compat) */
    c->is_enabled = 1;
    c->is_validated = 1;
    if (p && *p) {
        p = next_field(p, field, sizeof(field));
        c->is_enabled = atoi(field);
    }
    if (p && *p) {
        p = next_field(p, field, sizeof(field));
        c->is_validated = atoi(field);
    }
    (void)p;
}

/* --- User --- */
static void serialize_user(const UserDesc *u, char *buf, int size)
{
    snprintf(buf, size, "%s;%d", u->password_hash, u->is_role);
}

static void deserialize_user(const char *buf, const char *key, UserDesc *u)
{
    strncpy(u->username, key, CAT_MAX_NAME_LEN - 1);
    u->username[CAT_MAX_NAME_LEN - 1] = '\0';
    /* Backward-compatible: old format has no semicolon, default is_role=0 */
    const char *semi = strrchr(buf, ';');
    if (semi) {
        int hash_len = (int)(semi - buf);
        if (hash_len >= CAT_MAX_HASH_LEN) hash_len = CAT_MAX_HASH_LEN - 1;
        memcpy(u->password_hash, buf, hash_len);
        u->password_hash[hash_len] = '\0';
        u->is_role = atoi(semi + 1);
    } else {
        strncpy(u->password_hash, buf, CAT_MAX_HASH_LEN - 1);
        u->password_hash[CAT_MAX_HASH_LEN - 1] = '\0';
        u->is_role = 0;
    }
}

/* --- Grant --- */
static void serialize_grant(const GrantDesc *g, char *buf, int size)
{
    snprintf(buf, size, "%s;%d;%s;%s;%d",
             g->username, g->scope_type, g->scope_name,
             g->privileges, g->grant_option);
}

static void deserialize_grant(const char *buf, GrantDesc *g)
{
    char field[CAT_MAX_NAME_LEN];
    const char *p = buf;
    p = next_field(p, g->username, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field)); g->scope_type = atoi(field);
    p = next_field(p, g->scope_name, CAT_MAX_NAME_LEN);
    p = next_field(p, g->privileges, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field)); g->grant_option = atoi(field);
    (void)p;
}

/* ----------------------------------------------------------------
 *  Slotted page management for catalog records
 * ---------------------------------------------------------------- */

/* Insert a record into a catalog's data page. Returns RowID.
 * Allocates a new page if current page is full or uninitialized.
 * Returns {0,0} on error. */
static RowID cat_store_record(CatalogID cat_id, const char *record, int rec_len)
{
    RowID bad = {0, 0};
    char page_buf[EVO_PAGE_SIZE];

    /* Try current data page */
    if (g_cat_data_pages[cat_id] != 0) {
        pgm_read_page(g_cat_data_pages[cat_id], page_buf);
        int slot = slot_insert(page_buf, record, (uint16_t)rec_len);
        if (slot >= 0) {
            pgm_write_page(g_cat_data_pages[cat_id], page_buf);
            RowID rid = {g_cat_data_pages[cat_id], (uint16_t)slot};
            return rid;
        }
    }

    /* Allocate new data page */
    uint32_t new_page = pgm_alloc_page(PAGE_DATA);
    if (new_page == 0) return bad;

    slot_page_init(page_buf, new_page);
    int slot = slot_insert(page_buf, record, (uint16_t)rec_len);
    if (slot < 0) {
        pgm_free_page(new_page);
        return bad;
    }
    pgm_write_page(new_page, page_buf);
    g_cat_data_pages[cat_id] = new_page;

    RowID rid = {new_page, (uint16_t)slot};
    return rid;
}

/* Read a record from a slotted page via RowID.
 * Returns record length or -1 on error. */
static int cat_read_record(RowID rid, char *buf, int bufsize)
{
    if (rid.page_no == 0) return -1;
    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    int len = slot_read(page_buf, rid.slot_idx, buf, (uint16_t)bufsize);
    if (len > 0 && len < bufsize)
        buf[len] = '\0';
    return len;
}

/* Delete a record from a slotted page. */
static int cat_delete_record(RowID rid)
{
    if (rid.page_no == 0) return -1;
    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    int ret = slot_delete(page_buf, rid.slot_idx);
    if (ret == 0)
        pgm_write_page(rid.page_no, page_buf);
    return ret;
}

/* ----------------------------------------------------------------
 *  Lifecycle
 * ---------------------------------------------------------------- */

int cat_init(void)
{
    if (g_cat_initialized) return 0;

    /* Catalog mutex already statically initialized */

    /* Check if catalog already exists */
    uint32_t db_root = pgm_get_catalog_root(CAT_SYS_DATABASES);

    if (db_root != 0) {
        /* Load existing trees */
        for (int i = 0; i < CAT_MAX; i++) {
            g_cat_trees[i].root_page = pgm_get_catalog_root((CatalogID)i);
        }
        /* Lazy-create new catalog trees added after initial bootstrap */
        for (int i = 0; i < CAT_MAX; i++) {
            if (g_cat_trees[i].root_page == 0 && i >= CAT_SYS_VIEWS) {
                bt2_create(&g_cat_trees[i]);
                pgm_set_catalog_root((CatalogID)i, g_cat_trees[i].root_page);
            }
        }
        for (int i = 0; i < CAT_MAX; i++)
            g_cat_data_pages[i] = 0;  /* lazy alloc on first insert */
        g_cat_initialized = 1;
        return 0;
    }

    /* Fresh bootstrap: create 8 B+ trees */
    for (int i = 0; i < CAT_MAX; i++) {
        if (bt2_create(&g_cat_trees[i]) < 0)
            return -1;
        pgm_set_catalog_root((CatalogID)i, g_cat_trees[i].root_page);
    }

    for (int i = 0; i < CAT_MAX; i++)
        g_cat_data_pages[i] = 0;

    /* Insert default database "evosql" */
    cat_create_database("evosql");

    /* Insert default schema "default" under db_id=1 */
    cat_create_schema(1, "default");

    /* Insert admin user (empty hash — server init sets real password) */
    cat_create_user("admin", "");

    g_cat_initialized = 1;
    return 0;
}

void cat_shutdown(void)
{
    if (!g_cat_initialized) return;
    pgm_flush();
    g_cat_initialized = 0;
    memset(g_cat_trees, 0, sizeof(g_cat_trees));
    memset(g_cat_data_pages, 0, sizeof(g_cat_data_pages));
}

/* ----------------------------------------------------------------
 *  Database operations
 * ---------------------------------------------------------------- */

int cat_create_database(const char *name)
{
    /* Check duplicate */
    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_DATABASES], name, &existing) == 0)
        return -1;

    DatabaseDesc d;
    d.db_id = pgm_next_id(2);  /* id_type 2 = db */
    strncpy(d.db_name, name, CAT_MAX_NAME_LEN - 1);
    d.db_name[CAT_MAX_NAME_LEN - 1] = '\0';

    char record[CAT_MAX_RECORD_LEN];
    serialize_database(&d, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_DATABASES, record, rec_len);
    if (rid.page_no == 0) return -1;

    if (bt2_insert(&g_cat_trees[CAT_SYS_DATABASES], name, rid) != 0)
        return -1;

    return (int)d.db_id;
}

/* Public lock/unlock for callers that need catalog thread-safety */
void cat_lock(void)   { CAT_LOCK(); }
void cat_unlock(void) { CAT_UNLOCK(); }

int cat_find_database(const char *name, DatabaseDesc *out)
{
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_DATABASES], name, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_database(record, name, out);
    return 0;
}

int cat_drop_database(const char *name)
{
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_DATABASES], name, &rid) < 0)
        return -1;

    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_DATABASES], name);
    return 0;
}

int cat_list_databases(DatabaseDesc *out, int max)
{
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_DATABASES], &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_database(record, key, &out[count]);
            count++;
        }
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Schema operations
 * ---------------------------------------------------------------- */

int cat_create_schema(uint32_t db_id, const char *name)
{
    char key[CAT_MAX_KEY_LEN];
    make_schema_key(db_id, name, key, sizeof(key));

    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_SCHEMAS], key, &existing) == 0)
        return -1;

    SchemaDesc s;
    s.schema_id = pgm_next_id(1);  /* id_type 1 = schema */
    s.db_id = db_id;
    strncpy(s.schema_name, name, CAT_MAX_NAME_LEN - 1);
    s.schema_name[CAT_MAX_NAME_LEN - 1] = '\0';

    char record[CAT_MAX_RECORD_LEN];
    serialize_schema(&s, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_SCHEMAS, record, rec_len);
    if (rid.page_no == 0) return -1;

    if (bt2_insert(&g_cat_trees[CAT_SYS_SCHEMAS], key, rid) != 0)
        return -1;

    return (int)s.schema_id;
}

int cat_find_schema(uint32_t db_id, const char *name, SchemaDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_schema_key(db_id, name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SCHEMAS], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_schema(record, out);
    return 0;
}

int cat_drop_schema(uint32_t db_id, const char *name)
{
    char key[CAT_MAX_KEY_LEN];
    make_schema_key(db_id, name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SCHEMAS], key, &rid) < 0)
        return -1;

    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_SCHEMAS], key);
    return 0;
}

int cat_list_schemas(uint32_t db_id, SchemaDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(db_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_SCHEMAS], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_schema(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Table operations
 * ---------------------------------------------------------------- */

int cat_create_table(uint32_t schema_id, const char *name,
                     const ColumnDesc *cols, int ncols,
                     int pad_size, int auto_inc_col,
                     int auto_inc_start, int auto_inc_step,
                     int is_temporary, int on_commit_delete)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, name, key, sizeof(key));

    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &existing) == 0)
        return -1;

    /* Create data B+ tree for this table's primary index
     * GTT: skip — each session allocates lazily */
    BTree2 pk_tree = {0};
    if (is_temporary != TEMP_GLOBAL) {
        if (bt2_create(&pk_tree) < 0)
            return -1;
    }

    TableDesc t;
    memset(&t, 0, sizeof(t));
    t.table_id = pgm_next_id(0);  /* id_type 0 = table */
    t.schema_id = schema_id;
    strncpy(t.table_name, name, CAT_MAX_NAME_LEN - 1);
    t.table_name[CAT_MAX_NAME_LEN - 1] = '\0';
    t.pk_root_page = pk_tree.root_page;  /* 0 for GTT */
    t.heap_page = 0;  /* lazy alloc on first insert */
    t.num_columns = ncols;
    t.pad_size = pad_size;
    t.auto_inc_col = auto_inc_col;
    t.auto_inc_counter = auto_inc_start;
    t.auto_inc_step = auto_inc_step;
    t.is_temporary = is_temporary;
    t.on_commit_delete = (is_temporary == TEMP_GLOBAL) ? on_commit_delete : 0;

    /* Store table descriptor */
    char record[CAT_MAX_RECORD_LEN];
    serialize_table(&t, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_TABLES, record, rec_len);
    if (rid.page_no == 0) return -1;

    if (bt2_insert(&g_cat_trees[CAT_SYS_TABLES], key, rid) != 0)
        return -1;

    /* Store columns */
    for (int i = 0; i < ncols; i++) {
        ColumnDesc col = cols[i];
        col.table_id = t.table_id;
        col.col_ordinal = i;

        char col_key[CAT_MAX_KEY_LEN];
        make_column_key(t.table_id, i, col_key, sizeof(col_key));

        char col_record[CAT_MAX_RECORD_LEN];
        serialize_column(&col, col_record, sizeof(col_record));
        int col_len = (int)strlen(col_record) + 1;

        RowID col_rid = cat_store_record(CAT_SYS_COLUMNS, col_record, col_len);
        if (col_rid.page_no == 0) return -1;

        if (bt2_insert(&g_cat_trees[CAT_SYS_COLUMNS], col_key, col_rid) != 0)
            return -1;
    }

    return (int)t.table_id;
}

int cat_find_table(uint32_t schema_id, const char *name, TableDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_table(record, out);
    return 0;
}

int cat_find_table_by_id(uint32_t table_id, TableDesc *out)
{
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_TABLES], &cur) < 0)
        return -1;

    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            TableDesc t;
            deserialize_table(record, &t);
            if (t.table_id == table_id) {
                if (out) *out = t;
                return 0;
            }
        }
    }
    return -1;
}

int cat_rename_table(uint32_t table_id, uint32_t schema_id,
                     const char *old_name, const char *new_name)
{
    char old_key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, old_name, old_key, sizeof(old_key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], old_key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    TableDesc td;
    deserialize_table(record, &td);
    strncpy(td.table_name, new_name, CAT_MAX_NAME_LEN - 1);
    td.table_name[CAT_MAX_NAME_LEN - 1] = '\0';

    /* Delete old key, insert with new key */
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_TABLES], old_key);

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_table(&td, new_record, sizeof(new_record));
    int rec_len = (int)strlen(new_record) + 1;

    char new_key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, new_name, new_key, sizeof(new_key));

    RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, rec_len);
    if (new_rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_TABLES], new_key, new_rid) == 0 ? 0 : -1;
}

int cat_drop_table(uint32_t table_id)
{
    /* Find and delete the table record by scanning */
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_TABLES], &cur) < 0)
        return -1;

    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    int found = 0;
    while (bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            TableDesc t;
            deserialize_table(record, &t);
            if (t.table_id == table_id) {
                cat_delete_record(rid);
                bt2_delete(&g_cat_trees[CAT_SYS_TABLES], key);
                /* Note: caller (DropTableProcess) is responsible for
                 * destroying the PK B+ tree and freeing heap pages. */
                found = 1;
                break;
            }
        }
    }
    if (!found) return -1;

    /* Delete columns for this table */
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));

    /* Collect column keys to delete (can't delete during scan) */
    char col_keys[CAT_MAX_COLUMNS][CAT_MAX_KEY_LEN];
    RowID col_rids[CAT_MAX_COLUMNS];
    int col_count = 0;

    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_COLUMNS], prefix, &cur) == 0) {
        char ckey[BT2_MAX_KEY_LEN + 1];
        RowID crid;
        while (col_count < CAT_MAX_COLUMNS &&
               bt2_cursor_next(&cur, ckey, &crid) == 0) {
            if (strncmp(ckey, prefix, strlen(prefix)) != 0)
                break;
            strncpy(col_keys[col_count], ckey, CAT_MAX_KEY_LEN);
            col_rids[col_count] = crid;
            col_count++;
        }
    }
    for (int i = 0; i < col_count; i++) {
        cat_delete_record(col_rids[i]);
        bt2_delete(&g_cat_trees[CAT_SYS_COLUMNS], col_keys[i]);
    }

    /* Delete indexes for this table */
    char idx_keys[64][CAT_MAX_KEY_LEN];
    RowID idx_rids[64];
    int idx_count = 0;

    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_INDEXES], prefix, &cur) == 0) {
        char ikey[BT2_MAX_KEY_LEN + 1];
        RowID irid;
        while (idx_count < 64 &&
               bt2_cursor_next(&cur, ikey, &irid) == 0) {
            if (strncmp(ikey, prefix, strlen(prefix)) != 0)
                break;
            strncpy(idx_keys[idx_count], ikey, CAT_MAX_KEY_LEN);
            idx_rids[idx_count] = irid;
            idx_count++;
        }
    }
    for (int i = 0; i < idx_count; i++) {
        cat_delete_record(idx_rids[i]);
        bt2_delete(&g_cat_trees[CAT_SYS_INDEXES], idx_keys[i]);
    }

    /* Delete constraints for this table */
    char con_keys[64][CAT_MAX_KEY_LEN];
    RowID con_rids[64];
    int con_count = 0;

    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_CONSTRAINTS], prefix, &cur) == 0) {
        char ckey[BT2_MAX_KEY_LEN + 1];
        RowID crid;
        while (con_count < 64 &&
               bt2_cursor_next(&cur, ckey, &crid) == 0) {
            if (strncmp(ckey, prefix, strlen(prefix)) != 0)
                break;
            strncpy(con_keys[con_count], ckey, CAT_MAX_KEY_LEN);
            con_rids[con_count] = crid;
            con_count++;
        }
    }
    for (int i = 0; i < con_count; i++) {
        cat_delete_record(con_rids[i]);
        bt2_delete(&g_cat_trees[CAT_SYS_CONSTRAINTS], con_keys[i]);
    }

    /* Delete triggers for this table */
    {
        TriggerDesc trigs[32];
        int ntrigs = cat_list_triggers_for_table(table_id, trigs, 32);
        for (int i = 0; i < ntrigs; i++)
            cat_drop_trigger(table_id, trigs[i].trigger_name);
    }

    return 0;
}

int cat_update_auto_inc(uint32_t table_id, const char *table_name,
                        uint32_t schema_id, int new_counter)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, table_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    TableDesc t;
    deserialize_table(record, &t);
    t.auto_inc_counter = new_counter;

    /* Re-serialize and try to update in place */
    char new_record[CAT_MAX_RECORD_LEN];
    serialize_table(&t, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    /* Doesn't fit in-place: delete old, insert new, update B+ tree */
    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
    return 0;
}

int cat_update_heap_page(uint32_t table_id, const char *table_name,
                         uint32_t schema_id, uint32_t heap_page)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, table_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    TableDesc t;
    deserialize_table(record, &t);
    t.heap_page = heap_page;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_table(&t, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
    return 0;
}

int cat_update_pk_root(uint32_t table_id, const char *table_name,
                       uint32_t schema_id, uint32_t pk_root_page)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, table_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    TableDesc t;
    deserialize_table(record, &t);
    t.pk_root_page = pk_root_page;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_table(&t, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
    return 0;
}

int cat_update_owner_node(uint32_t table_id, const char *table_name,
                          uint32_t schema_id, uint32_t owner_node_id)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, table_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    TableDesc t;
    deserialize_table(record, &t);
    t.owner_node_id = owner_node_id;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_table(&t, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
    return 0;
}

/* Task 92 — Feature #63: update a table's parent_table_id in the catalog. */
int cat_update_parent_table_id(uint32_t table_id, const char *table_name,
                                uint32_t schema_id, uint32_t parent_table_id)
{
    (void)table_id;
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, table_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    TableDesc t;
    deserialize_table(record, &t);
    t.parent_table_id = parent_table_id;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_table(&t, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
    return 0;
}

/* Task 93 — Feature #64: toggle RLS on a table. Scan all schemas until
 * we find the table_id — simpler than threading schema_id through every
 * ENABLE/DISABLE RLS caller (table_id is the stable key). */
int cat_update_table_rls_flag(uint32_t table_id, uint8_t rls_enabled)
{
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_TABLES], &cur) < 0)
        return -1;

    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) < 0) continue;

        TableDesc t;
        deserialize_table(record, &t);
        if (t.table_id != table_id) continue;

        t.rls_enabled = rls_enabled ? 1 : 0;

        char new_record[CAT_MAX_RECORD_LEN];
        serialize_table(&t, new_record, sizeof(new_record));
        int new_len = (int)strlen(new_record) + 1;

        char page_buf[EVO_PAGE_SIZE];
        pgm_read_page(rid.page_no, page_buf);
        if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
            pgm_write_page(rid.page_no, page_buf);
            return 0;
        }

        cat_delete_record(rid);
        RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
        if (new_rid.page_no == 0) return -1;
        bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
        return 0;
    }
    return -1;  /* table_id not found */
}

/* Task 208 — flip the SYSTEM VERSIONING flag on an existing table and
 * link its history shadow. Pass history_table_id = 0 to unlink. */
int cat_update_table_versioning(uint32_t table_id,
                                uint8_t system_versioned,
                                uint32_t history_table_id)
{
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_TABLES], &cur) < 0)
        return -1;

    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) < 0) continue;

        TableDesc t;
        deserialize_table(record, &t);
        if (t.table_id != table_id) continue;

        t.system_versioned  = system_versioned ? 1 : 0;
        t.history_table_id  = history_table_id;

        char new_record[CAT_MAX_RECORD_LEN];
        serialize_table(&t, new_record, sizeof(new_record));
        int new_len = (int)strlen(new_record) + 1;

        char page_buf[EVO_PAGE_SIZE];
        pgm_read_page(rid.page_no, page_buf);
        if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
            pgm_write_page(rid.page_no, page_buf);
            return 0;
        }

        cat_delete_record(rid);
        RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
        if (new_rid.page_no == 0) return -1;
        bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
        return 0;
    }
    return -1;
}

int cat_list_tables(uint32_t schema_id, TableDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(schema_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_TABLES], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_table(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Column operations
 * ---------------------------------------------------------------- */

int cat_find_columns(uint32_t table_id, ColumnDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_COLUMNS], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_column(record, &out[count]);
            count++;
        }
    }
    return count;
}

int cat_add_column(uint32_t table_id, const ColumnDesc *col)
{
    char key[CAT_MAX_KEY_LEN];
    make_column_key(table_id, col->col_ordinal, key, sizeof(key));

    /* Check if already exists */
    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_COLUMNS], key, &existing) == 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    serialize_column(col, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_COLUMNS, record, rec_len);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_COLUMNS], key, rid) == 0 ? 0 : -1;
}

/* Mark a column as dropped (lazy). Preserves type_code for binary decoding. */
int cat_drop_column(uint32_t table_id, int col_ordinal)
{
    char key[CAT_MAX_KEY_LEN];
    make_column_key(table_id, col_ordinal, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_COLUMNS], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    ColumnDesc col;
    deserialize_column(record, &col);
    col.is_dropped = 1;
    snprintf(col.col_name, CAT_MAX_NAME_LEN, "........dropped.%d........", col_ordinal);

    serialize_column(&col, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    /* Delete old + insert new (record size may differ) */
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_COLUMNS], key);

    RowID new_rid = cat_store_record(CAT_SYS_COLUMNS, record, rec_len);
    if (new_rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_COLUMNS], key, new_rid) == 0 ? 0 : -1;
}

/* Physically remove all dropped columns and renumber ordinals (Phase 2). */
int cat_remove_dropped_columns(uint32_t table_id)
{
    ColumnDesc all_cols[CAT_MAX_COLUMNS];
    int ncols = cat_find_columns(table_id, all_cols, CAT_MAX_COLUMNS);

    /* Check if any dropped */
    int has_dropped = 0;
    for (int i = 0; i < ncols; i++) {
        if (all_cols[i].is_dropped) { has_dropped = 1; break; }
    }
    if (!has_dropped) return 0;

    /* Delete ALL column records for this table */
    for (int i = 0; i < ncols; i++) {
        char key[CAT_MAX_KEY_LEN];
        make_column_key(table_id, all_cols[i].col_ordinal, key, sizeof(key));
        RowID rid;
        if (bt2_search(&g_cat_trees[CAT_SYS_COLUMNS], key, &rid) == 0) {
            cat_delete_record(rid);
            bt2_delete(&g_cat_trees[CAT_SYS_COLUMNS], key);
        }
    }

    /* Re-insert only active columns with renumbered ordinals */
    int new_ordinal = 0;
    for (int i = 0; i < ncols; i++) {
        if (all_cols[i].is_dropped) continue;
        all_cols[i].col_ordinal = new_ordinal++;
        cat_add_column(table_id, &all_cols[i]);
    }
    return new_ordinal;
}

/* Update a column's metadata in-place. */
int cat_update_column(uint32_t table_id, int col_ordinal, const ColumnDesc *updated)
{
    char key[CAT_MAX_KEY_LEN];
    make_column_key(table_id, col_ordinal, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_COLUMNS], key, &rid) < 0)
        return -1;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_column(updated, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    /* Try in-place update */
    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    /* Fallback: delete + reinsert + update B+ tree */
    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_COLUMNS, new_record, new_len);
    if (new_rid.page_no == 0) return -1;
    bt2_update(&g_cat_trees[CAT_SYS_COLUMNS], key, new_rid);
    return 0;
}

/* Update an index's col_list field (used by RENAME COLUMN). */
int cat_update_index_col_list(uint32_t table_id, const char *index_name,
                              const char *new_col_list)
{
    char key[CAT_MAX_KEY_LEN];
    make_index_key(table_id, index_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_INDEXES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    IndexDesc idx;
    deserialize_index(record, &idx);
    strncpy(idx.col_list, new_col_list, sizeof(idx.col_list) - 1);
    idx.col_list[sizeof(idx.col_list) - 1] = '\0';

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_index(&idx, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_INDEXES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;
    bt2_update(&g_cat_trees[CAT_SYS_INDEXES], key, new_rid);
    return 0;
}

/* Move a column from old_ordinal to new_ordinal, shifting others. */
int cat_reorder_column(uint32_t table_id, int old_ordinal, int new_ordinal)
{
    ColumnDesc all[CAT_MAX_COLUMNS];
    int n = cat_find_columns(table_id, all, CAT_MAX_COLUMNS);
    if (n <= 0) return -1;
    if (old_ordinal == new_ordinal) return 0;

    /* Find the column being moved */
    ColumnDesc moving;
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (all[i].col_ordinal == old_ordinal) {
            moving = all[i]; found = 1; break;
        }
    }
    if (!found) return -1;

    /* Delete all column records */
    for (int i = 0; i < n; i++) {
        char key[CAT_MAX_KEY_LEN];
        make_column_key(table_id, all[i].col_ordinal, key, sizeof(key));
        RowID rid;
        if (bt2_search(&g_cat_trees[CAT_SYS_COLUMNS], key, &rid) == 0) {
            cat_delete_record(rid);
            bt2_delete(&g_cat_trees[CAT_SYS_COLUMNS], key);
        }
    }

    /* Build reordered list: remove moving col, insert at new position */
    ColumnDesc reordered[CAT_MAX_COLUMNS];
    int ri = 0;
    for (int i = 0; i < n; i++) {
        if (all[i].col_ordinal == old_ordinal) continue;
        reordered[ri++] = all[i];
    }
    /* Insert moving at new_ordinal (clamped) */
    int insert_pos = new_ordinal;
    if (insert_pos > ri) insert_pos = ri;
    if (insert_pos < 0) insert_pos = 0;
    for (int i = ri; i > insert_pos; i--)
        reordered[i] = reordered[i - 1];
    reordered[insert_pos] = moving;
    ri++;

    /* Renumber and reinsert */
    for (int i = 0; i < ri; i++) {
        reordered[i].col_ordinal = i;
        cat_add_column(table_id, &reordered[i]);
    }
    return 0;
}

int cat_update_num_columns(uint32_t table_id, const char *table_name,
                           uint32_t schema_id, int new_count)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, table_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    TableDesc t;
    deserialize_table(record, &t);
    t.num_columns = new_count;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_table(&t, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
    return 0;
}

/* ----------------------------------------------------------------
 *  Index operations
 * ---------------------------------------------------------------- */

int cat_create_index_ex(uint32_t table_id, const char *name,
                        uint32_t root_page, const char *col_list,
                        char index_type, const char *expr_def)
{
    char key[CAT_MAX_KEY_LEN];
    make_index_key(table_id, name, key, sizeof(key));

    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_INDEXES], key, &existing) == 0)
        return -1;

    IndexDesc idx;
    memset(&idx, 0, sizeof(idx));
    idx.table_id = table_id;
    strncpy(idx.index_name, name, CAT_MAX_NAME_LEN - 1);
    idx.root_page = root_page;
    strncpy(idx.col_list, col_list, CAT_MAX_NAME_LEN - 1);
    idx.index_type = index_type;
    if (expr_def && expr_def[0])
        strncpy(idx.expr_def, expr_def, sizeof(idx.expr_def) - 1);
    idx.is_ready = IDX_READY;

    char record[CAT_MAX_RECORD_LEN];
    serialize_index(&idx, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_INDEXES, record, rec_len);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_INDEXES], key, rid) == 0 ? 0 : -1;
}

int cat_create_index(uint32_t table_id, const char *name,
                     uint32_t root_page, const char *col_list,
                     char index_type)
{
    return cat_create_index_ex(table_id, name, root_page, col_list, index_type, NULL);
}

int cat_find_index(uint32_t table_id, const char *name, IndexDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_index_key(table_id, name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_INDEXES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_index(record, out);
    return 0;
}

int cat_find_index_by_name(const char *name, IndexDesc *out)
{
    /* Full scan of sys_indexes B+ tree to find index by name */
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_INDEXES], &cur) < 0)
        return -1;

    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            IndexDesc tmp;
            deserialize_index(record, &tmp);
            if (strcasecmp(tmp.index_name, name) == 0) {
                if (out) *out = tmp;
                return 0;
            }
        }
    }
    return -1;
}

int cat_list_indexes(uint32_t table_id, IndexDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_INDEXES], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_index(record, &out[count]);
            count++;
        }
    }
    return count;
}

int cat_drop_index(uint32_t table_id, const char *name)
{
    char key[CAT_MAX_KEY_LEN];
    make_index_key(table_id, name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_INDEXES], key, &rid) < 0)
        return -1;

    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_INDEXES], key);
    return 0;
}

int cat_update_index_root(uint32_t table_id, const char *name,
                          uint32_t new_root_page)
{
    char key[CAT_MAX_KEY_LEN];
    make_index_key(table_id, name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_INDEXES], key, &rid) < 0)
        return -1;

    /* Read, update root_page, write back */
    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    IndexDesc idx;
    deserialize_index(record, &idx);
    idx.root_page = new_root_page;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_index(&idx, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    /* Try in-place update */
    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    /* Delete old, insert new, update B+ tree */
    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_INDEXES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_INDEXES], key, new_rid);
    return 0;
}

int cat_update_index_ready(uint32_t table_id, const char *index_name,
                           int is_ready)
{
    char key[CAT_MAX_KEY_LEN];
    make_index_key(table_id, index_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_INDEXES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    IndexDesc idx;
    deserialize_index(record, &idx);
    idx.is_ready = is_ready;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_index(&idx, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_INDEXES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_INDEXES], key, new_rid);
    return 0;
}

/* ----------------------------------------------------------------
 *  Constraint operations
 * ---------------------------------------------------------------- */

int cat_add_constraint(uint32_t table_id, char type, const char *name,
                       const char *definition,
                       uint32_t ref_table_id, const char *ref_columns)
{
    return cat_add_constraint_ex(table_id, type, name, definition,
                                 ref_table_id, ref_columns, 1, 1);
}

int cat_add_constraint_ex(uint32_t table_id, char type, const char *name,
                          const char *definition,
                          uint32_t ref_table_id, const char *ref_columns,
                          int is_enabled, int is_validated)
{
    int ordinal = g_constraint_ordinal++;

    char key[CAT_MAX_KEY_LEN];
    make_constraint_key(table_id, ordinal, key, sizeof(key));

    ConstraintDesc c;
    memset(&c, 0, sizeof(c));
    c.table_id = table_id;
    c.ordinal = ordinal;
    c.constraint_type = type;
    strncpy(c.constraint_name, name ? name : "", CAT_MAX_NAME_LEN - 1);
    strncpy(c.definition, definition ? definition : "",
            sizeof(c.definition) - 1);
    c.ref_table_id = ref_table_id;
    strncpy(c.ref_columns, ref_columns ? ref_columns : "",
            CAT_MAX_NAME_LEN - 1);
    c.is_enabled = is_enabled;
    c.is_validated = is_validated;

    char record[CAT_MAX_RECORD_LEN];
    serialize_constraint(&c, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_CONSTRAINTS, record, rec_len);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_CONSTRAINTS], key, rid) == 0 ? 0 : -1;
}

int cat_list_constraints(uint32_t table_id, ConstraintDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_CONSTRAINTS], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_constraint(record, &out[count]);
            count++;
        }
    }
    return count;
}

int cat_list_referencing_fks(uint32_t ref_table_id, ConstraintDesc *out, int max)
{
    /* Full scan of constraint B+ tree to find FKs referencing this table */
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_CONSTRAINTS], &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            ConstraintDesc desc;
            deserialize_constraint(record, &desc);
            if (desc.constraint_type == 'F' &&
                desc.ref_table_id == ref_table_id) {
                out[count++] = desc;
            }
        }
    }
    return count;
}

int cat_find_constraint_by_name(uint32_t table_id, const char *name,
                                ConstraintDesc *out)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_CONSTRAINTS], prefix, &cur) < 0)
        return -1;

    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            ConstraintDesc desc;
            deserialize_constraint(record, &desc);
            if (strcasecmp(desc.constraint_name, name) == 0) {
                if (out) *out = desc;
                return 0;
            }
        }
    }
    return -1;
}

int cat_drop_constraint(uint32_t table_id, int ordinal)
{
    char key[CAT_MAX_KEY_LEN];
    make_constraint_key(table_id, ordinal, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_CONSTRAINTS], key, &rid) < 0)
        return -1;

    tapi_heap_delete(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_CONSTRAINTS], key);
    return 0;
}

int cat_update_constraint(uint32_t table_id, int ordinal, const ConstraintDesc *updated)
{
    char key[CAT_MAX_KEY_LEN];
    make_constraint_key(table_id, ordinal, key, sizeof(key));

    RowID old_rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_CONSTRAINTS], key, &old_rid) < 0)
        return -1;

    tapi_heap_delete(old_rid);

    char record[CAT_MAX_RECORD_LEN];
    serialize_constraint(updated, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID new_rid = cat_store_record(CAT_SYS_CONSTRAINTS, record, rec_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_CONSTRAINTS], key, new_rid);
    return 0;
}

/* ----------------------------------------------------------------
 *  User operations
 * ---------------------------------------------------------------- */

int cat_create_user(const char *username, const char *password_hash)
{
    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_USERS], username, &existing) == 0)
        return -1;

    UserDesc u;
    memset(&u, 0, sizeof(u));
    strncpy(u.username, username, CAT_MAX_NAME_LEN - 1);
    u.username[CAT_MAX_NAME_LEN - 1] = '\0';
    strncpy(u.password_hash, password_hash, CAT_MAX_HASH_LEN - 1);
    u.password_hash[CAT_MAX_HASH_LEN - 1] = '\0';
    u.is_role = 0;

    char record[CAT_MAX_RECORD_LEN];
    serialize_user(&u, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_USERS, record, rec_len);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_USERS], username, rid) == 0 ? 0 : -1;
}

int cat_find_user(const char *username, UserDesc *out)
{
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_USERS], username, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_user(record, username, out);
    return 0;
}

int cat_update_user(const char *username, const char *new_hash)
{
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_USERS], username, &rid) < 0)
        return -1;

    /* Read existing descriptor to preserve is_role (and any other fields
     * that aren't derived from the password). Previously this function
     * built a fresh UserDesc on the stack and forgot to zero is_role,
     * so ALTER USER PASSWORD would flip the user into whatever garbage
     * was on the stack — AuthenticateUser then saw is_role != 0 and
     * rejected every login, including with the just-set password. */
    UserDesc u;
    memset(&u, 0, sizeof(u));
    {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0)
            deserialize_user(record, username, &u);
    }
    strncpy(u.username, username, CAT_MAX_NAME_LEN - 1);
    u.username[CAT_MAX_NAME_LEN - 1] = '\0';
    strncpy(u.password_hash, new_hash, CAT_MAX_HASH_LEN - 1);
    u.password_hash[CAT_MAX_HASH_LEN - 1] = '\0';

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_user(&u, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    /* Try in-place update */
    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    /* Delete old, insert new, update B+ tree */
    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_USERS, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_USERS], username, new_rid);
    return 0;
}

int cat_drop_user(const char *username)
{
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_USERS], username, &rid) < 0)
        return -1;

    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_USERS], username);
    return 0;
}

int cat_list_users(UserDesc *out, int max)
{
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_USERS], &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_user(record, key, &out[count]);
            count++;
        }
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Role operations (roles stored in CAT_SYS_USERS with is_role=1)
 * ---------------------------------------------------------------- */

int cat_create_role(const char *rolename)
{
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_USERS], rolename, &rid) == 0)
        return -1; /* already exists (user or role) */

    UserDesc u;
    memset(&u, 0, sizeof(u));
    strncpy(u.username, rolename, CAT_MAX_NAME_LEN - 1);
    u.password_hash[0] = '\0'; /* roles have no password */
    u.is_role = 1;

    char record[CAT_MAX_RECORD_LEN];
    serialize_user(&u, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    rid = cat_store_record(CAT_SYS_USERS, record, rec_len);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_USERS], rolename, rid) == 0 ? 0 : -1;
}

int cat_list_roles(UserDesc *out, int max)
{
    UserDesc all[64];
    int total = cat_list_users(all, 64);
    int count = 0;
    for (int i = 0; i < total && count < max; i++) {
        if (all[i].is_role) {
            out[count++] = all[i];
        }
    }
    return count;
}

int cat_is_role(const char *name)
{
    UserDesc ud;
    if (cat_find_user(name, &ud) < 0) return 0;
    return ud.is_role ? 1 : 0;
}

/* ----------------------------------------------------------------
 *  Grant operations
 * ---------------------------------------------------------------- */

int cat_create_grant(const char *username, int scope_type,
                     const char *scope_name, const char *privileges,
                     int grant_option)
{
    char key[CAT_MAX_KEY_LEN];
    make_grant_key(username, scope_type, scope_name, key, sizeof(key));

    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_GRANTS], key, &existing) == 0)
        return -1;

    GrantDesc g;
    memset(&g, 0, sizeof(g));
    strncpy(g.username, username, CAT_MAX_NAME_LEN - 1);
    g.scope_type = scope_type;
    strncpy(g.scope_name, scope_name, CAT_MAX_NAME_LEN - 1);
    strncpy(g.privileges, privileges, CAT_MAX_NAME_LEN - 1);
    g.grant_option = grant_option;

    char record[CAT_MAX_RECORD_LEN];
    serialize_grant(&g, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_GRANTS, record, rec_len);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_GRANTS], key, rid) == 0 ? 0 : -1;
}

int cat_find_grant(const char *username, int scope_type,
                   const char *scope_name, GrantDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_grant_key(username, scope_type, scope_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_GRANTS], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_grant(record, out);
    return 0;
}

int cat_drop_grant(const char *username, int scope_type,
                   const char *scope_name)
{
    char key[CAT_MAX_KEY_LEN];
    make_grant_key(username, scope_type, scope_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_GRANTS], key, &rid) < 0)
        return -1;

    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_GRANTS], key);
    return 0;
}

int cat_list_grants_for_user(const char *username, GrantDesc *out, int max)
{
    /* Grants are keyed "username:scope_type:scope_name".
     * Prefix scan with "username:" */
    char prefix[CAT_MAX_KEY_LEN];
    snprintf(prefix, sizeof(prefix), "%s:", username);

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_GRANTS], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_grant(record, &out[count]);
            count++;
        }
    }
    return count;
}

int cat_drop_all_grants_for_user(const char *username)
{
    char prefix[CAT_MAX_KEY_LEN];
    snprintf(prefix, sizeof(prefix), "%s:", username);

    /* Collect keys first */
    char keys[64][CAT_MAX_KEY_LEN];
    RowID rids[64];
    int count = 0;

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_GRANTS], prefix, &cur) == 0) {
        char key[BT2_MAX_KEY_LEN + 1];
        RowID rid;
        while (count < 64 && bt2_cursor_next(&cur, key, &rid) == 0) {
            if (strncmp(key, prefix, strlen(prefix)) != 0)
                break;
            strncpy(keys[count], key, CAT_MAX_KEY_LEN);
            rids[count] = rid;
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        cat_delete_record(rids[i]);
        bt2_delete(&g_cat_trees[CAT_SYS_GRANTS], keys[i]);
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  Table statistics (ANALYZE TABLE)
 * ---------------------------------------------------------------- */

static void make_table_stats_key(uint32_t table_id, char *out, int size)
{
    snprintf(out, size, "%010u:_", table_id);
}

static void make_col_stats_key(uint32_t table_id, const char *col_name,
                               char *out, int size)
{
    snprintf(out, size, "%010u:%s", table_id, col_name);
}

static void serialize_table_stats(const TableStatsDesc *ts, char *buf, int size)
{
    snprintf(buf, size, "%u;%lu;%u;%ld;%lu;%lu;%u;%u",
             ts->table_id, (unsigned long)ts->row_count,
             ts->page_count, (long)ts->last_analyzed,
             (unsigned long)ts->dml_since_analyze,
             (unsigned long)ts->dead_tuple_count,
             ts->last_reclaim_xid,
             ts->frozen_xid);
}

static void deserialize_table_stats(const char *buf, TableStatsDesc *ts)
{
    char field[64];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); ts->table_id = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); ts->row_count = (uint64_t)strtoul(field, NULL, 10);
    p = next_field(p, field, sizeof(field)); ts->page_count = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); ts->last_analyzed = (time_t)strtol(field, NULL, 10);
    p = next_field(p, field, sizeof(field)); ts->dml_since_analyze = (uint64_t)strtoul(field, NULL, 10);
    /* New fields — backward compatible: default to 0 if missing */
    ts->dead_tuple_count = 0;
    ts->last_reclaim_xid = 0;
    ts->frozen_xid = 0;
    if (p && *p) {
        p = next_field(p, field, sizeof(field));
        ts->dead_tuple_count = (uint64_t)strtoul(field, NULL, 10);
    }
    if (p && *p) {
        p = next_field(p, field, sizeof(field));
        ts->last_reclaim_xid = (uint32_t)strtoul(field, NULL, 10);
    }
    if (p && *p) {
        p = next_field(p, field, sizeof(field));
        ts->frozen_xid = (uint32_t)strtoul(field, NULL, 10);
    }
    (void)p;
}

static void serialize_column_stats(const ColumnStatsDesc *cs, char *buf, int size)
{
    snprintf(buf, size, "%u;%s;%lu;%lu;%s;%s;%d",
             cs->table_id, cs->col_name,
             (unsigned long)cs->null_count, (unsigned long)cs->distinct_count,
             cs->min_value, cs->max_value, cs->avg_width);
}

static void deserialize_column_stats(const char *buf, ColumnStatsDesc *cs)
{
    char field[256];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); cs->table_id = (uint32_t)atoi(field);
    p = next_field(p, cs->col_name, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field)); cs->null_count = (uint64_t)strtoul(field, NULL, 10);
    p = next_field(p, field, sizeof(field)); cs->distinct_count = (uint64_t)strtoul(field, NULL, 10);
    p = next_field(p, cs->min_value, sizeof(cs->min_value));
    p = next_field(p, cs->max_value, sizeof(cs->max_value));
    p = next_field(p, field, sizeof(field)); cs->avg_width = atoi(field);
    (void)p;
}

/* Upsert helper: delete old entry if exists, then insert new. */
static int cat_upsert_stats(const char *key, const char *record, int rec_len)
{
    RowID old_rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLE_STATS], key, &old_rid) == 0) {
        cat_delete_record(old_rid);
        bt2_delete(&g_cat_trees[CAT_SYS_TABLE_STATS], key);
    }

    RowID rid = cat_store_record(CAT_SYS_TABLE_STATS, record, rec_len);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_TABLE_STATS], key, rid) == 0 ? 0 : -1;
}

int cat_store_table_stats(const TableStatsDesc *ts)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_stats_key(ts->table_id, key, sizeof(key));

    char record[CAT_MAX_RECORD_LEN];
    serialize_table_stats(ts, record, sizeof(record));

    return cat_upsert_stats(key, record, (int)strlen(record) + 1);
}

int cat_get_table_stats(uint32_t table_id, TableStatsDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_stats_key(table_id, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLE_STATS], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_table_stats(record, out);
    return 0;
}

int cat_store_column_stats(const ColumnStatsDesc *cs)
{
    char key[CAT_MAX_KEY_LEN];
    make_col_stats_key(cs->table_id, cs->col_name, key, sizeof(key));

    char record[CAT_MAX_RECORD_LEN];
    serialize_column_stats(cs, record, sizeof(record));

    return cat_upsert_stats(key, record, (int)strlen(record) + 1);
}

int cat_get_column_stats(uint32_t table_id, const char *col_name,
                         ColumnStatsDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_col_stats_key(table_id, col_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLE_STATS], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_column_stats(record, out);
    return 0;
}

int cat_list_column_stats(uint32_t table_id, ColumnStatsDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_TABLE_STATS], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        /* Skip the table-level stats entry (key ends with ":_") */
        int klen = (int)strlen(key);
        if (klen >= 2 && key[klen - 1] == '_' && key[klen - 2] == ':')
            continue;
        /* Skip index stats entries (key contains ":I:") */
        if (strstr(key, ":I:") != NULL)
            continue;
        /* Skip histogram entries (key contains ":H:") */
        if (strstr(key, ":H:") != NULL)
            continue;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_column_stats(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Index statistics (per-index B+ tree stats)
 * ---------------------------------------------------------------- */

static void make_idx_stats_key(uint32_t table_id, const char *index_name,
                               char *out, int size)
{
    snprintf(out, size, "%010u:I:%s", table_id, index_name);
}

static void serialize_index_stats(const IndexStatsDesc *ist, char *buf, int size)
{
    snprintf(buf, size, "%u;%s;%d;%u;%lu;%d",
             ist->table_id, ist->index_name,
             ist->tree_depth, ist->leaf_pages,
             (unsigned long)ist->total_entries,
             ist->avg_entries_per_leaf);
}

static void deserialize_index_stats(const char *buf, IndexStatsDesc *ist)
{
    char field[256];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); ist->table_id = (uint32_t)atoi(field);
    p = next_field(p, ist->index_name, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field)); ist->tree_depth = atoi(field);
    p = next_field(p, field, sizeof(field)); ist->leaf_pages = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); ist->total_entries = (uint64_t)strtoul(field, NULL, 10);
    p = next_field(p, field, sizeof(field)); ist->avg_entries_per_leaf = atoi(field);
    (void)p;
}

int cat_store_index_stats(const IndexStatsDesc *ist)
{
    char key[CAT_MAX_KEY_LEN];
    make_idx_stats_key(ist->table_id, ist->index_name, key, sizeof(key));

    char record[CAT_MAX_RECORD_LEN];
    serialize_index_stats(ist, record, sizeof(record));

    return cat_upsert_stats(key, record, (int)strlen(record) + 1);
}

int cat_get_index_stats(uint32_t table_id, const char *index_name,
                        IndexStatsDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_idx_stats_key(table_id, index_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLE_STATS], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_index_stats(record, out);
    return 0;
}

int cat_list_index_stats(uint32_t table_id, IndexStatsDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    snprintf(prefix, sizeof(prefix), "%010u:I:", table_id);

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_TABLE_STATS], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[CAT_MAX_RECORD_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_index_stats(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Histograms (Task 99 — Feature #101)
 *
 *  Key format "%010u:H:%s" — shares CAT_SYS_TABLE_STATS with table
 *  stats (":_"), column stats (plain), and index stats (":I:").
 *
 *  Serialization (semicolon-delimited, uses `|` inside bucket list
 *  to avoid collision with bound values that contain ';'):
 *
 *    table_id;col_name;type;num_buckets;total_rows;b1|c1|b2|c2|...
 *
 *  A 100-bucket histogram with 32-byte bounds and uint64 counts
 *  fits in ~5 KB — larger than CAT_MAX_RECORD_LEN (2048), so we use
 *  a local 8 KB serialization buffer and pass the explicit length to
 *  cat_store_record (slotted storage accepts up to SLOT_MAX_RECORD).
 * ---------------------------------------------------------------- */

#define HIST_RECORD_BUF_LEN 8192

static void make_histogram_key(uint32_t table_id, const char *col_name,
                               char *out, int size)
{
    snprintf(out, size, "%010u:H:%s", table_id, col_name);
}

static int serialize_histogram(const HistogramDesc *h, char *buf, int size)
{
    int n = snprintf(buf, size, "%u;%s;%c;%d;%lu;",
                     h->table_id, h->col_name, h->histogram_type,
                     h->num_buckets, (unsigned long)h->total_rows);
    if (n < 0 || n >= size) return -1;

    for (int i = 0; i < h->num_buckets; i++) {
        int m = snprintf(buf + n, size - n, "%s|%lu%s",
                         h->bucket_bounds[i],
                         (unsigned long)h->bucket_counts[i],
                         (i + 1 < h->num_buckets) ? "|" : "");
        if (m < 0 || m >= size - n) return -1;
        n += m;
    }
    return n;
}

static void deserialize_histogram(const char *buf, HistogramDesc *h)
{
    char field[64];
    const char *p = buf;
    memset(h, 0, sizeof(*h));

    p = next_field(p, field, sizeof(field)); h->table_id = (uint32_t)atoi(field);
    p = next_field(p, h->col_name, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field));
    h->histogram_type = field[0] ? field[0] : 'E';
    p = next_field(p, field, sizeof(field)); h->num_buckets = atoi(field);
    p = next_field(p, field, sizeof(field));
    h->total_rows = (uint64_t)strtoul(field, NULL, 10);

    /* Remaining payload is `bound|count|bound|count|...` (no trailing `;`). */
    if (h->num_buckets > HIST_MAX_BUCKETS) h->num_buckets = HIST_MAX_BUCKETS;
    for (int i = 0; i < h->num_buckets; i++) {
        /* Read bound up to `|` */
        int bi = 0;
        while (*p && *p != '|' && bi < HIST_MAX_BOUND_LEN - 1)
            h->bucket_bounds[i][bi++] = *p++;
        h->bucket_bounds[i][bi] = '\0';
        if (*p == '|') p++;

        /* Read count up to `|` or end */
        char cnt[32];
        int ci = 0;
        while (*p && *p != '|' && ci < (int)sizeof(cnt) - 1)
            cnt[ci++] = *p++;
        cnt[ci] = '\0';
        h->bucket_counts[i] = (uint64_t)strtoul(cnt, NULL, 10);
        if (*p == '|') p++;
    }
}

int cat_store_histogram(const HistogramDesc *h)
{
    if (!h || h->num_buckets < 0 || h->num_buckets > HIST_MAX_BUCKETS)
        return -1;

    char key[CAT_MAX_KEY_LEN];
    make_histogram_key(h->table_id, h->col_name, key, sizeof(key));

    char record[HIST_RECORD_BUF_LEN];
    int rec_len = serialize_histogram(h, record, sizeof(record));
    if (rec_len < 0) return -1;

    RowID old_rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLE_STATS], key, &old_rid) == 0) {
        cat_delete_record(old_rid);
        bt2_delete(&g_cat_trees[CAT_SYS_TABLE_STATS], key);
    }

    RowID rid = cat_store_record(CAT_SYS_TABLE_STATS, record, rec_len + 1);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_TABLE_STATS], key, rid) == 0 ? 0 : -1;
}

int cat_get_histogram(uint32_t table_id, const char *col_name,
                      HistogramDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_histogram_key(table_id, col_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLE_STATS], key, &rid) < 0)
        return -1;

    char record[HIST_RECORD_BUF_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    if (out) deserialize_histogram(record, out);
    return 0;
}

int cat_drop_histogram(uint32_t table_id, const char *col_name)
{
    char key[CAT_MAX_KEY_LEN];
    make_histogram_key(table_id, col_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLE_STATS], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_TABLE_STATS], key);
    return 0;
}

int cat_list_histograms(uint32_t table_id, HistogramDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    snprintf(prefix, sizeof(prefix), "%010u:H:", table_id);

    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_TABLE_STATS], prefix, &cur) < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0)
            break;
        char record[HIST_RECORD_BUF_LEN];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_histogram(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ----------------------------------------------------------------
 *  DML counter for auto-analyze tracking
 * ---------------------------------------------------------------- */

int cat_increment_dml_counter(uint32_t table_id)
{
    TableStatsDesc ts;
    if (cat_get_table_stats(table_id, &ts) < 0)
        return 0;  /* no stats yet, nothing to track */
    ts.dml_since_analyze++;
    return cat_store_table_stats(&ts);
}

int cat_increment_dead_tuples(uint32_t table_id, int count)
{
    TableStatsDesc ts;
    if (cat_get_table_stats(table_id, &ts) < 0) {
        /* No stats record yet — create one */
        memset(&ts, 0, sizeof(ts));
        ts.table_id = table_id;
    }
    ts.dead_tuple_count += count;
    return cat_store_table_stats(&ts);
}

/* ----------------------------------------------------------------
 *  Convenience
 * ---------------------------------------------------------------- */

int cat_resolve_table(const char *db_name, const char *schema_name,
                      const char *table_name, TableDesc *out)
{
    DatabaseDesc db;
    if (cat_find_database(db_name, &db) < 0)
        return -1;

    SchemaDesc schema;
    if (cat_find_schema(db.db_id, schema_name, &schema) < 0)
        return -1;

    return cat_find_table(schema.schema_id, table_name, out);
}

/* ================================================================
 *  Shard operations (CAT_SYS_SHARDS)
 * ================================================================ */

static void make_shard_key(uint32_t table_id, int ordinal,
                           char *out, int size)
{
    snprintf(out, size, "%010u:%010d", table_id, ordinal);
}

static void serialize_shard(const ShardDesc *s, char *buf, int size)
{
    snprintf(buf, size, "%u;%d;%s;%d;%s",
             s->table_id, s->shard_ordinal, s->shard_name,
             s->owner_node_id, s->range_bound);
}

static void deserialize_shard(const char *buf, ShardDesc *s)
{
    char field[256];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); s->table_id = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); s->shard_ordinal = atoi(field);
    p = next_field(p, s->shard_name, CAT_MAX_NAME_LEN);
    p = next_field(p, field, sizeof(field)); s->owner_node_id = atoi(field);
    p = next_field(p, s->range_bound, sizeof(s->range_bound));
    (void)p;
}

int cat_create_shard(const ShardDesc *sd)
{
    char key[CAT_MAX_KEY_LEN];
    make_shard_key(sd->table_id, sd->shard_ordinal, key, sizeof(key));

    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_SHARDS], key, &existing) == 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    serialize_shard(sd, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;

    RowID rid = cat_store_record(CAT_SYS_SHARDS, record, rec_len);
    if (rid.page_no == 0) return -1;

    return bt2_insert(&g_cat_trees[CAT_SYS_SHARDS], key, rid) == 0 ? 0 : -1;
}

int cat_list_shards(uint32_t table_id, ShardDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    int seek_rc = bt2_cursor_seek(&g_cat_trees[CAT_SYS_SHARDS], prefix, &cur);
    if (seek_rc < 0)
        return 0;

    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max) {
        int next_rc = bt2_cursor_next(&cur, key, &rid);
        if (next_rc != 0) break;
        if (strncmp(key, prefix, strlen(prefix)) != 0) break;
        char record[CAT_MAX_RECORD_LEN];
        int rr = cat_read_record(rid, record, sizeof(record));
        if (rr > 0) {
            deserialize_shard(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* Task 88: Walk shard records for the partitioned table, decode the
 * range_bound as "low|high", and return the shard whose bounds contain
 * col_value. Bounds are compared lexicographically — works for ints
 * padded to uniform width or for strings; numeric comparison falls back
 * to atoll when both sides parse as integers. */
int cat_find_partition_by_value(uint32_t table_id, const char *col_value,
                                ShardDesc *out)
{
    if (!col_value || !out) return -1;
    /* Heap-allocate the shard list — EVO_MAX_PARTITIONS * sizeof(ShardDesc)
     * is ~384 KB, too large for non-main-thread stacks on macOS (512 KB
     * default). This path runs on every INSERT route, so stack pressure
     * matters. */
    ShardDesc *shards = malloc(EVO_MAX_PARTITIONS * sizeof(ShardDesc));
    if (!shards) return -1;
    int n = cat_list_shards(table_id, shards, EVO_MAX_PARTITIONS);
    long long vnum = atoll(col_value);
    /* Accept '-' only as the leading sign so "5-10" doesn't masquerade
     * as numeric (atoll would then return 0 — silent mis-routing). */
    int v_is_num = (col_value[0] != '\0');
    for (const char *p = col_value; *p; p++) {
        int leading_minus = (p == col_value && *p == '-' && *(p + 1) != '\0');
        if (!isdigit((unsigned char)*p) && !leading_minus) {
            v_is_num = 0;
            break;
        }
    }
    int rc = -1;
    for (int i = 0; i < n; i++) {
        const char *bar = strchr(shards[i].range_bound, '|');
        if (!bar) continue;
        char low[128], high[128];
        size_t ll = (size_t)(bar - shards[i].range_bound);
        if (ll >= sizeof(low)) ll = sizeof(low) - 1;
        memcpy(low, shards[i].range_bound, ll);  low[ll] = '\0';
        strncpy(high, bar + 1, sizeof(high) - 1); high[sizeof(high) - 1] = '\0';

        int in_range;
        if (v_is_num) {
            long long lo = atoll(low), hi = atoll(high);
            in_range = (vnum >= lo && vnum < hi);
        } else {
            in_range = (strcmp(col_value, low) >= 0 &&
                        strcmp(col_value, high) < 0);
        }
        if (in_range) { *out = shards[i]; rc = 0; break; }
    }
    free(shards);
    return rc;
}

int cat_find_shard(uint32_t table_id, int ordinal, ShardDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_shard_key(table_id, ordinal, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SHARDS], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    deserialize_shard(record, out);
    return 0;
}

int cat_drop_shards(uint32_t table_id)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));

    BTree2Cursor cur;
    char keys[64][BT2_MAX_KEY_LEN + 1];
    RowID rids[64];
    int count = 0;

    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_SHARDS], prefix, &cur) == 0) {
        char key[BT2_MAX_KEY_LEN + 1];
        RowID rid;
        while (count < 64 && bt2_cursor_next(&cur, key, &rid) == 0) {
            if (strncmp(key, prefix, strlen(prefix)) != 0) break;
            strncpy(keys[count], key, BT2_MAX_KEY_LEN);
            keys[count][BT2_MAX_KEY_LEN] = '\0';
            rids[count] = rid;
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        cat_delete_record(rids[i]);
        bt2_delete(&g_cat_trees[CAT_SYS_SHARDS], keys[i]);
    }
    return count;
}

int cat_update_shard_owner(uint32_t table_id, int ordinal, int new_owner)
{
    char key[CAT_MAX_KEY_LEN];
    make_shard_key(table_id, ordinal, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SHARDS], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    ShardDesc sd;
    deserialize_shard(record, &sd);
    sd.owner_node_id = new_owner;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_shard(&sd, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_SHARDS, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_SHARDS], key, new_rid);
    return 0;
}

int cat_update_shard_info(uint32_t table_id, const char *table_name,
                          uint32_t schema_id, int shard_type,
                          const char *shard_key, int shard_count)
{
    char key[CAT_MAX_KEY_LEN];
    make_table_key(schema_id, table_name, key, sizeof(key));

    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TABLES], key, &rid) < 0)
        return -1;

    char record[CAT_MAX_RECORD_LEN];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;

    TableDesc t;
    deserialize_table(record, &t);
    t.shard_type = shard_type;
    strncpy(t.shard_key, shard_key, CAT_MAX_NAME_LEN - 1);
    t.shard_key[CAT_MAX_NAME_LEN - 1] = '\0';
    t.shard_count = shard_count;

    char new_record[CAT_MAX_RECORD_LEN];
    serialize_table(&t, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_TABLES, new_record, new_len);
    if (new_rid.page_no == 0) return -1;

    bt2_update(&g_cat_trees[CAT_SYS_TABLES], key, new_rid);
    return 0;
}

/* ================================================================
 *  View operations
 * ================================================================ */

static void make_view_key(uint32_t schema_id, const char *name,
                          char *out, int size)
{
    snprintf(out, size, "%010u:%s", schema_id, name);
}

static void serialize_view(const ViewDesc *v, char *buf, int size)
{
    /* Format: "view_id;db_id;schema_id;view_name;is_materialized;view_sql".
     * is_materialized sits between view_name and view_sql so the SQL — which
     * may contain ';' — remains the trailing "rest of buffer" field.
     * Legacy records without the flag decode cleanly via the fall-through
     * branch in deserialize_view. */
    snprintf(buf, size, "%u;%u;%u;%s;%d;%s",
             v->view_id, v->db_id, v->schema_id, v->view_name,
             v->is_materialized, v->view_sql);
}

static void deserialize_view(const char *buf, ViewDesc *v)
{
    char field[128];
    const char *p = buf;
    p = next_field(p, field, sizeof(field)); v->view_id = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); v->db_id = (uint32_t)atoi(field);
    p = next_field(p, field, sizeof(field)); v->schema_id = (uint32_t)atoi(field);
    p = next_field(p, v->view_name, CAT_MAX_NAME_LEN);
    v->check_option = 0;
    v->is_materialized = 0;
    /* Legacy records have view_sql directly after view_name; new records
     * insert is_materialized (single digit followed by ';'). Detect by
     * peeking at the next field: if it is purely digits and followed by
     * another ';', treat it as the flag. */
    if (p && *p) {
        const char *sc = strchr(p, ';');
        int numeric = (sc != NULL);
        for (const char *q = p; numeric && q < sc; q++) {
            if (*q < '0' || *q > '9') numeric = 0;
        }
        if (numeric && sc) {
            char flag[16];
            p = next_field(p, flag, sizeof(flag));
            v->is_materialized = atoi(flag);
        }
        strncpy(v->view_sql, p ? p : "", sizeof(v->view_sql) - 1);
        v->view_sql[sizeof(v->view_sql) - 1] = '\0';
    } else {
        v->view_sql[0] = '\0';
    }
}

static int cat_create_view_ex(uint32_t db_id, uint32_t schema_id,
                              const char *name, const char *sql,
                              int is_materialized)
{
    char key[CAT_MAX_KEY_LEN];
    make_view_key(schema_id, name, key, sizeof(key));
    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_VIEWS], key, &existing) == 0)
        return -1;
    ViewDesc v;
    memset(&v, 0, sizeof(v));
    v.view_id = pgm_next_id(0);
    v.db_id = db_id;
    v.schema_id = schema_id;
    v.is_materialized = is_materialized;
    strncpy(v.view_name, name, CAT_MAX_NAME_LEN - 1);
    strncpy(v.view_sql, sql, sizeof(v.view_sql) - 1);
    char record[8192];
    serialize_view(&v, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_VIEWS, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_VIEWS], key, rid) == 0 ? 0 : -1;
}

int cat_create_view(uint32_t db_id, uint32_t schema_id,
                    const char *name, const char *sql)
{
    return cat_create_view_ex(db_id, schema_id, name, sql, 0);
}

int cat_create_matview(uint32_t db_id, uint32_t schema_id,
                       const char *name, const char *sql)
{
    return cat_create_view_ex(db_id, schema_id, name, sql, 1);
}

int cat_find_view(uint32_t db_id, uint32_t schema_id,
                  const char *name, ViewDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_view_key(schema_id, name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_VIEWS], key, &rid) < 0)
        return -1;
    char record[8192];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;
    deserialize_view(record, out);
    return 0;
}

int cat_drop_view(uint32_t db_id, uint32_t schema_id, const char *name)
{
    char key[CAT_MAX_KEY_LEN];
    make_view_key(schema_id, name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_VIEWS], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_VIEWS], key);
    return 0;
}

int cat_list_views(uint32_t schema_id, ViewDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(schema_id, prefix, sizeof(prefix));
    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_VIEWS], prefix, &cur) < 0)
        return 0;
    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0) break;
        char record[8192];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_view(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ================================================================
 *  Procedure / Function catalog operations
 * ================================================================ */

static void make_procedure_key(uint32_t schema_id, const char *name,
                               char *out, int size)
{
    snprintf(out, size, "%010u:%s", schema_id, name);
}

static void serialize_procedure(const ProcedureDesc *p, char *buf, int size)
{
    /* Fields: proc_id;db_id;schema_id;proc_name;param_list;return_type;is_function;body
     * Body may contain semicolons, so it must be the LAST field (read to end). */
    snprintf(buf, size, "%u;%u;%u;%s;%s;%s;%d;%s",
             p->proc_id, p->db_id, p->schema_id, p->proc_name,
             p->param_list, p->return_type, p->is_function, p->body);
}

static void deserialize_procedure(const char *buf, ProcedureDesc *p)
{
    char field[256];
    const char *ptr = buf;
    ptr = next_field(ptr, field, sizeof(field)); p->proc_id   = (uint32_t)atoi(field);
    ptr = next_field(ptr, field, sizeof(field)); p->db_id     = (uint32_t)atoi(field);
    ptr = next_field(ptr, field, sizeof(field)); p->schema_id = (uint32_t)atoi(field);
    ptr = next_field(ptr, p->proc_name, CAT_MAX_NAME_LEN);
    ptr = next_field(ptr, p->param_list, sizeof(p->param_list));
    ptr = next_field(ptr, p->return_type, sizeof(p->return_type));
    ptr = next_field(ptr, field, sizeof(field)); p->is_function = atoi(field);
    /* Body is last field — may contain semicolons, read remainder */
    if (ptr && *ptr) {
        strncpy(p->body, ptr, sizeof(p->body) - 1);
        p->body[sizeof(p->body) - 1] = '\0';
    } else {
        p->body[0] = '\0';
    }
}

int cat_create_procedure(uint32_t db_id, uint32_t schema_id,
                         const char *name, const char *param_list,
                         const char *return_type, int is_function,
                         const char *body)
{
    char key[CAT_MAX_KEY_LEN];
    make_procedure_key(schema_id, name, key, sizeof(key));
    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_PROCEDURES], key, &existing) == 0)
        return -1; /* already exists */

    ProcedureDesc p;
    memset(&p, 0, sizeof(p));
    p.proc_id   = pgm_next_id(0);
    p.db_id     = db_id;
    p.schema_id = schema_id;
    strncpy(p.proc_name, name, CAT_MAX_NAME_LEN - 1);
    if (param_list) strncpy(p.param_list, param_list, sizeof(p.param_list) - 1);
    if (return_type) strncpy(p.return_type, return_type, sizeof(p.return_type) - 1);
    p.is_function = is_function;
    if (body) strncpy(p.body, body, sizeof(p.body) - 1);

    char record[16384];
    serialize_procedure(&p, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_PROCEDURES, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_PROCEDURES], key, rid) == 0 ? 0 : -1;
}

int cat_find_procedure(uint32_t db_id, uint32_t schema_id,
                       const char *name, ProcedureDesc *out)
{
    (void)db_id;
    char key[CAT_MAX_KEY_LEN];
    make_procedure_key(schema_id, name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_PROCEDURES], key, &rid) < 0)
        return -1;
    char record[16384];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;
    deserialize_procedure(record, out);
    return 0;
}

int cat_drop_procedure(uint32_t db_id, uint32_t schema_id, const char *name)
{
    (void)db_id;
    char key[CAT_MAX_KEY_LEN];
    make_procedure_key(schema_id, name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_PROCEDURES], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_PROCEDURES], key);
    return 0;
}

int cat_list_procedures(uint32_t schema_id, ProcedureDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(schema_id, prefix, sizeof(prefix));
    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_PROCEDURES], prefix, &cur) < 0)
        return 0;
    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0) break;
        char record[16384];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_procedure(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ================================================================
 *  Trigger catalog operations
 * ================================================================ */

static void make_trigger_key(uint32_t table_id, const char *name,
                             char *out, int size)
{
    snprintf(out, size, "%010u:%s", table_id, name);
}

static void serialize_trigger(const TriggerDesc *t, char *buf, int size)
{
    /* Fields: trigger_id;table_id;db_id;schema_id;trigger_name;table_name;event;timing;body
     * Body is last field (may contain semicolons). */
    snprintf(buf, size, "%u;%u;%u;%u;%s;%s;%c;%c;%d;%s",
             t->trigger_id, t->table_id, t->db_id, t->schema_id,
             t->trigger_name, t->table_name, t->event, t->timing,
             t->enabled, t->body);
}

static void deserialize_trigger(const char *buf, TriggerDesc *t)
{
    char field[256];
    const char *ptr = buf;
    ptr = next_field(ptr, field, sizeof(field)); t->trigger_id = (uint32_t)atoi(field);
    ptr = next_field(ptr, field, sizeof(field)); t->table_id   = (uint32_t)atoi(field);
    ptr = next_field(ptr, field, sizeof(field)); t->db_id      = (uint32_t)atoi(field);
    ptr = next_field(ptr, field, sizeof(field)); t->schema_id  = (uint32_t)atoi(field);
    ptr = next_field(ptr, t->trigger_name, CAT_MAX_NAME_LEN);
    ptr = next_field(ptr, t->table_name, CAT_MAX_NAME_LEN);
    ptr = next_field(ptr, field, sizeof(field)); t->event  = field[0];
    ptr = next_field(ptr, field, sizeof(field)); t->timing = field[0];
    ptr = next_field(ptr, field, sizeof(field)); t->enabled = atoi(field);
    if (t->enabled == 0 && field[0] != '0') t->enabled = 1; /* backward compat */
    /* Body is last field — may contain semicolons */
    if (ptr && *ptr) {
        strncpy(t->body, ptr, sizeof(t->body) - 1);
        t->body[sizeof(t->body) - 1] = '\0';
    } else {
        t->body[0] = '\0';
    }
}

int cat_create_trigger(uint32_t db_id, uint32_t schema_id,
                       uint32_t table_id, const char *table_name,
                       const char *trigger_name, char event, char timing,
                       const char *body)
{
    char key[CAT_MAX_KEY_LEN];
    make_trigger_key(table_id, trigger_name, key, sizeof(key));
    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_TRIGGERS], key, &existing) == 0)
        return -1; /* already exists */

    TriggerDesc t;
    memset(&t, 0, sizeof(t));
    t.trigger_id = pgm_next_id(0);
    t.table_id   = table_id;
    t.db_id      = db_id;
    t.schema_id  = schema_id;
    strncpy(t.trigger_name, trigger_name, CAT_MAX_NAME_LEN - 1);
    strncpy(t.table_name, table_name, CAT_MAX_NAME_LEN - 1);
    t.event  = event;
    t.timing = timing;
    t.enabled = 1;
    if (body) strncpy(t.body, body, sizeof(t.body) - 1);

    char record[16384];
    serialize_trigger(&t, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_TRIGGERS, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_TRIGGERS], key, rid) == 0 ? 0 : -1;
}

int cat_find_trigger(uint32_t table_id, const char *trigger_name,
                     TriggerDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_trigger_key(table_id, trigger_name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TRIGGERS], key, &rid) < 0)
        return -1;
    char record[16384];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;
    deserialize_trigger(record, out);
    return 0;
}

int cat_drop_trigger(uint32_t table_id, const char *trigger_name)
{
    char key[CAT_MAX_KEY_LEN];
    make_trigger_key(table_id, trigger_name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TRIGGERS], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_TRIGGERS], key);
    return 0;
}

int cat_list_triggers_for_table(uint32_t table_id, TriggerDesc *out, int max)
{
    char prefix[CAT_MAX_KEY_LEN];
    make_id_prefix(table_id, prefix, sizeof(prefix));
    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_TRIGGERS], prefix, &cur) < 0)
        return 0;
    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0) break;
        char record[16384];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_trigger(record, &out[count]);
            count++;
        }
    }
    return count;
}

int cat_update_trigger_enabled(uint32_t table_id, const char *trigger_name, int enabled)
{
    char key[CAT_MAX_KEY_LEN];
    make_trigger_key(table_id, trigger_name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_TRIGGERS], key, &rid) < 0)
        return -1;
    char record[16384];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;
    TriggerDesc t;
    deserialize_trigger(record, &t);
    t.enabled = enabled;
    char new_record[16384];
    serialize_trigger(&t, new_record, sizeof(new_record));
    int new_len = (int)strlen(new_record) + 1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_TRIGGERS], key);
    RowID new_rid = cat_store_record(CAT_SYS_TRIGGERS, new_record, new_len);
    if (new_rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_TRIGGERS], key, new_rid) == 0 ? 0 : -1;
}

/* ================================================================
 *  Sequence Catalog Operations
 * ================================================================ */

static int serialize_sequence(const SequenceDesc *s, char *buf, int size)
{
    return snprintf(buf, size,
        "%u;%u;%s;%lld;%lld;%lld;%lld;%lld;%d;%d",
        s->seq_id, s->schema_id, s->seq_name,
        (long long)s->current_value, (long long)s->increment,
        (long long)s->min_value, (long long)s->max_value,
        (long long)s->start_value, s->cycle, s->is_called);
}

static int deserialize_sequence(const char *rec, SequenceDesc *s)
{
    char f[256];
    const char *p = rec;
    p = next_field(p, f, sizeof(f)); s->seq_id = (uint32_t)atoi(f);
    p = next_field(p, f, sizeof(f)); s->schema_id = (uint32_t)atoi(f);
    p = next_field(p, s->seq_name, CAT_MAX_NAME_LEN);
    p = next_field(p, f, sizeof(f)); s->current_value = strtoll(f, NULL, 10);
    p = next_field(p, f, sizeof(f)); s->increment = strtoll(f, NULL, 10);
    p = next_field(p, f, sizeof(f)); s->min_value = strtoll(f, NULL, 10);
    p = next_field(p, f, sizeof(f)); s->max_value = strtoll(f, NULL, 10);
    p = next_field(p, f, sizeof(f)); s->start_value = strtoll(f, NULL, 10);
    p = next_field(p, f, sizeof(f)); s->cycle = atoi(f);
    p = next_field(p, f, sizeof(f)); s->is_called = atoi(f);
    return 0;
}

static void make_seq_key(uint32_t schema_id, const char *name,
                         char *key, int size)
{
    snprintf(key, size, "%010u:%s", schema_id, name);
}

int cat_create_sequence(const SequenceDesc *seq)
{
    char key[300], record[512];
    make_seq_key(seq->schema_id, seq->seq_name, key, sizeof(key));
    serialize_sequence(seq, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_SEQUENCES, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_SEQUENCES], key, rid) == 0 ? 0 : -1;
}

int cat_find_sequence(uint32_t schema_id, const char *seq_name, SequenceDesc *out)
{
    char key[300];
    make_seq_key(schema_id, seq_name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SEQUENCES], key, &rid) < 0)
        return -1;
    char record[512];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;
    return deserialize_sequence(record, out);
}

int cat_update_sequence(const SequenceDesc *seq)
{
    char key[300], record[512];
    make_seq_key(seq->schema_id, seq->seq_name, key, sizeof(key));
    RowID old_rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SEQUENCES], key, &old_rid) < 0)
        return -1;
    cat_delete_record(old_rid);
    bt2_delete(&g_cat_trees[CAT_SYS_SEQUENCES], key);
    serialize_sequence(seq, record, sizeof(record));
    int rec_len = (int)strlen(record) + 1;
    RowID new_rid = cat_store_record(CAT_SYS_SEQUENCES, record, rec_len);
    if (new_rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_SEQUENCES], key, new_rid) == 0 ? 0 : -1;
}

int cat_drop_sequence(uint32_t schema_id, const char *seq_name)
{
    char key[300];
    make_seq_key(schema_id, seq_name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SEQUENCES], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_SEQUENCES], key);
    return 0;
}

int cat_list_sequences(uint32_t schema_id, SequenceDesc *out, int max)
{
    char prefix[32];
    snprintf(prefix, sizeof(prefix), "%010u:", schema_id);
    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_SEQUENCES], prefix, &cur) < 0)
        return 0;
    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, strlen(prefix)) != 0) break;
        char record[512];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_sequence(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ================================================================
 *  Inheritance map (CAT_SYS_INHERITANCE) — Task 92, Feature #63
 *
 *  Key format: zero-padded 10-digit child_table_id ("0000000042").
 *  Record format: zero-padded 10-digit parent_table_id ("0000000007").
 *
 *  Fixed-width keys/records keep the B+ tree compact and let
 *  cat_list_all_inheritance sequence-scan without a prefix match.
 * ================================================================ */

static void make_inherit_key(uint32_t child_id, char *out, int out_size)
{
    snprintf(out, out_size, "%010u", child_id);
}

int cat_add_inheritance(uint32_t child_table_id, uint32_t parent_table_id)
{
    if (child_table_id == 0 || parent_table_id == 0) return -1;
    char key[16], record[16];
    make_inherit_key(child_table_id, key, sizeof(key));
    snprintf(record, sizeof(record), "%010u", parent_table_id);
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_INHERITANCE, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_INHERITANCE], key, rid) == 0 ? 0 : -1;
}

int cat_find_parent(uint32_t child_table_id, uint32_t *parent_id_out)
{
    if (parent_id_out) *parent_id_out = 0;
    if (child_table_id == 0) return -1;
    char key[16];
    make_inherit_key(child_table_id, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_INHERITANCE], key, &rid) < 0)
        return -1;
    char record[16];
    if (cat_read_record(rid, record, sizeof(record)) < 0)
        return -1;
    if (parent_id_out) *parent_id_out = (uint32_t)atoi(record);
    return 0;
}

int cat_list_children(uint32_t parent_table_id, uint32_t *out, int max)
{
    if (!out || max <= 0 || parent_table_id == 0) return 0;
    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_INHERITANCE], "", &cur) < 0)
        return 0;
    int count = 0;
    char key[32];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[16];
        if (cat_read_record(rid, record, sizeof(record)) < 0) continue;
        uint32_t pid = (uint32_t)atoi(record);
        if (pid == parent_table_id) {
            out[count++] = (uint32_t)atoi(key);
        }
    }
    return count;
}

int cat_remove_inheritance(uint32_t child_table_id)
{
    if (child_table_id == 0) return 0;
    char key[16];
    make_inherit_key(child_table_id, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_INHERITANCE], key, &rid) < 0)
        return 0;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_INHERITANCE], key);
    return 1;
}

int cat_list_all_inheritance(InheritPair *out, int max)
{
    if (!out || max <= 0) return 0;
    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_INHERITANCE], "", &cur) < 0)
        return 0;
    int count = 0;
    char key[32];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[16];
        if (cat_read_record(rid, record, sizeof(record)) < 0) continue;
        out[count].child_id  = (uint32_t)atoi(key);
        out[count].parent_id = (uint32_t)atoi(record);
        count++;
    }
    return count;
}

/* ================================================================
 *  Row-Level Security Policies (CAT_SYS_POLICIES) — Task 93
 *
 *  Key format: zero-padded 10-digit table_id + ':' + policy_name,
 *  giving us per-table prefix scans (cat_list_policies_for_table).
 *
 *  Record format:
 *    table_id ; policy_name ; command ; permissive ; role_count ;
 *    role0 ; role1 ; ... ; <pad to CAT_MAX_POLICY_ROLES> ;
 *    <using_b64> ; <check_b64>
 *
 *  Expressions are Base16-hex-escaped so the raw serialized AST (which
 *  may contain ';') survives the delimiter-based splitter. Each expr
 *  field is capped at CAT_MAX_POLICY_EXPR characters — same cap
 *  constraint.c uses for CHECK expressions. The encoder is simple and
 *  inlined below since we don't have a shared escape helper.
 * ================================================================ */

static void policy_hex_encode(const char *in, char *out, int out_size)
{
    static const char *hex = "0123456789abcdef";
    int oi = 0;
    if (out_size <= 0) return;
    for (int i = 0; in[i] != '\0' && oi + 2 < out_size; i++) {
        unsigned char b = (unsigned char)in[i];
        out[oi++] = hex[(b >> 4) & 0xF];
        out[oi++] = hex[b & 0xF];
    }
    out[oi] = '\0';
}

static void policy_hex_decode(const char *in, char *out, int out_size)
{
    int oi = 0;
    if (out_size <= 0) return;
    for (int i = 0; in[i] != '\0' && in[i + 1] != '\0' && oi + 1 < out_size; i += 2) {
        int hi, lo;
        char c;
        c = in[i];
        hi = (c >= '0' && c <= '9') ? c - '0'
           : (c >= 'a' && c <= 'f') ? c - 'a' + 10
           : (c >= 'A' && c <= 'F') ? c - 'A' + 10 : 0;
        c = in[i + 1];
        lo = (c >= '0' && c <= '9') ? c - '0'
           : (c >= 'a' && c <= 'f') ? c - 'a' + 10
           : (c >= 'A' && c <= 'F') ? c - 'A' + 10 : 0;
        out[oi++] = (char)((hi << 4) | lo);
    }
    out[oi] = '\0';
}

static void make_policy_key(uint32_t table_id, const char *policy_name,
                            char *out, int out_size)
{
    snprintf(out, out_size, "%010u:%s", table_id, policy_name);
}

static int serialize_policy(const PolicyDesc *p, char *buf, int size)
{
    char using_hex[CAT_MAX_POLICY_EXPR * 2 + 2];
    char check_hex[CAT_MAX_POLICY_EXPR * 2 + 2];
    policy_hex_encode(p->using_expr, using_hex, sizeof(using_hex));
    policy_hex_encode(p->check_expr, check_hex, sizeof(check_hex));

    /* Start with fixed prefix, then pack roles[] (always CAT_MAX_POLICY_ROLES
     * slots — empty strings for unused — so deserialize doesn't have to
     * trust a count). */
    int n = snprintf(buf, size, "%u;%s;%c;%u;%d",
                     p->table_id,
                     p->policy_name,
                     p->command,
                     (unsigned)p->permissive,
                     p->role_count);
    if (n < 0 || n >= size) return -1;
    int pos = n;
    for (int i = 0; i < CAT_MAX_POLICY_ROLES; i++) {
        int k = snprintf(buf + pos, size - pos, ";%s",
                         (i < p->role_count && p->roles[i][0]) ? p->roles[i] : "");
        if (k < 0 || pos + k >= size) return -1;
        pos += k;
    }
    int k = snprintf(buf + pos, size - pos, ";%s;%s", using_hex, check_hex);
    if (k < 0 || pos + k >= size) return -1;
    return pos + k;
}

static void deserialize_policy(const char *buf, PolicyDesc *p)
{
    char field[CAT_MAX_POLICY_EXPR * 2 + 2];
    const char *q = buf;
    q = next_field(q, field, sizeof(field)); p->table_id   = (uint32_t)atoi(field);
    q = next_field(q, p->policy_name, CAT_MAX_NAME_LEN);
    q = next_field(q, field, sizeof(field)); p->command    = field[0] ? field[0] : POLICY_CMD_ALL;
    q = next_field(q, field, sizeof(field)); p->permissive = (uint8_t)atoi(field);
    q = next_field(q, field, sizeof(field)); p->role_count = atoi(field);
    if (p->role_count < 0) p->role_count = 0;
    if (p->role_count > CAT_MAX_POLICY_ROLES) p->role_count = CAT_MAX_POLICY_ROLES;
    for (int i = 0; i < CAT_MAX_POLICY_ROLES; i++) {
        q = next_field(q, p->roles[i], CAT_MAX_NAME_LEN);
    }
    /* Decode hex-escaped expression blobs. */
    char using_hex[CAT_MAX_POLICY_EXPR * 2 + 2] = "";
    char check_hex[CAT_MAX_POLICY_EXPR * 2 + 2] = "";
    q = next_field(q, using_hex, sizeof(using_hex));
    q = next_field(q, check_hex, sizeof(check_hex));
    policy_hex_decode(using_hex, p->using_expr, sizeof(p->using_expr));
    policy_hex_decode(check_hex, p->check_expr, sizeof(p->check_expr));
    (void)q;
}

int cat_create_policy(const PolicyDesc *pd)
{
    if (!pd || pd->policy_name[0] == '\0' || pd->table_id == 0) return -1;
    char key[CAT_MAX_KEY_LEN];
    make_policy_key(pd->table_id, pd->policy_name, key, sizeof(key));

    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_POLICIES], key, &existing) == 0)
        return -1;  /* duplicate */

    char record[CAT_MAX_POLICY_EXPR * 4 + 512];
    if (serialize_policy(pd, record, sizeof(record)) < 0) return -1;
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_POLICIES, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_POLICIES], key, rid) == 0 ? 0 : -1;
}

int cat_find_policy(uint32_t table_id, const char *policy_name, PolicyDesc *out)
{
    char key[CAT_MAX_KEY_LEN];
    make_policy_key(table_id, policy_name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_POLICIES], key, &rid) < 0)
        return -1;
    char record[CAT_MAX_POLICY_EXPR * 4 + 512];
    if (cat_read_record(rid, record, sizeof(record)) < 0) return -1;
    if (out) deserialize_policy(record, out);
    return 0;
}

int cat_drop_policy(uint32_t table_id, const char *policy_name)
{
    char key[CAT_MAX_KEY_LEN];
    make_policy_key(table_id, policy_name, key, sizeof(key));
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_POLICIES], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_POLICIES], key);
    return 0;
}

int cat_list_policies_for_table(uint32_t table_id, PolicyDesc *out, int max)
{
    if (!out || max <= 0 || table_id == 0) return 0;
    char prefix[32];
    snprintf(prefix, sizeof(prefix), "%010u:", table_id);
    BTree2Cursor cur;
    if (bt2_cursor_seek(&g_cat_trees[CAT_SYS_POLICIES], prefix, &cur) < 0)
        return 0;
    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    int plen = (int)strlen(prefix);
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        if (strncmp(key, prefix, plen) != 0) break;
        char record[CAT_MAX_POLICY_EXPR * 4 + 512];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_policy(record, &out[count]);
            count++;
        }
    }
    return count;
}

int cat_drop_all_policies_for_table(uint32_t table_id)
{
    if (table_id == 0) return 0;
    /* Collect first, drop second — bt2_cursor state isn't stable across
     * deletes from the same tree. */
    PolicyDesc all[64];
    int n = cat_list_policies_for_table(table_id, all, 64);
    for (int i = 0; i < n; i++) {
        cat_drop_policy(table_id, all[i].policy_name);
    }
    return n;
}

/* ================================================================
 *  Checkpoint stores (Task 204 — Feature #204)
 *
 *  Key   : lowercased store name (NAME-character set, max CAT_MAX_NAME_LEN)
 *  Value : "name;backing_table_id;retention" (3 ;-delimited fields)
 *  Stores live in CAT_SYS_CHECKPOINT_STORES.
 * ================================================================ */

static int serialize_checkpoint_store(const CheckpointStoreDesc *d,
                                       char *buf, int size)
{
    int n = snprintf(buf, size, "%s;%u;%s",
                     d->name, d->backing_table_id, d->retention);
    return (n < 0 || n >= size) ? -1 : n;
}

static void deserialize_checkpoint_store(const char *buf, CheckpointStoreDesc *d)
{
    char field[256];
    const char *q = buf;
    q = next_field(q, d->name, CAT_MAX_NAME_LEN);
    q = next_field(q, field, sizeof(field));
    d->backing_table_id = (uint32_t)strtoul(field, NULL, 10);
    q = next_field(q, d->retention, CAT_MAX_CKSTORE_RETENTION);
    (void)q;
}

int cat_create_checkpoint_store(const CheckpointStoreDesc *desc)
{
    if (!desc || desc->name[0] == '\0') return -1;
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", desc->name);

    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_CHECKPOINT_STORES], key, &existing) == 0)
        return -1;

    char record[512];
    if (serialize_checkpoint_store(desc, record, sizeof(record)) < 0) return -1;
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_CHECKPOINT_STORES, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_CHECKPOINT_STORES], key, rid) == 0 ? 0 : -1;
}

int cat_find_checkpoint_store(const char *name, CheckpointStoreDesc *out)
{
    if (!name || !*name) return -1;
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", name);
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_CHECKPOINT_STORES], key, &rid) < 0)
        return -1;
    char record[512];
    if (cat_read_record(rid, record, sizeof(record)) < 0) return -1;
    if (out) deserialize_checkpoint_store(record, out);
    return 0;
}

int cat_drop_checkpoint_store(const char *name)
{
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", name);
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_CHECKPOINT_STORES], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_CHECKPOINT_STORES], key);
    return 0;
}

int cat_list_checkpoint_stores(CheckpointStoreDesc *out, int max)
{
    if (!out || max <= 0) return 0;
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_CHECKPOINT_STORES], &cur) < 0)
        return 0;
    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[512];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_checkpoint_store(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ================================================================
 *  Memory stores (Task 205 — Feature #205)
 *
 *  Key   : lowercased store name
 *  Value : "name;backing_table_id;embedding_dim;distance_kind"
 *  Stores live in CAT_SYS_MEMORY_STORES.
 * ================================================================ */

static int serialize_memory_store(const MemoryStoreDesc *d,
                                   char *buf, int size)
{
    int n = snprintf(buf, size, "%s;%u;%d;%d",
                     d->name, d->backing_table_id,
                     d->embedding_dim, d->distance_kind);
    return (n < 0 || n >= size) ? -1 : n;
}

static void deserialize_memory_store(const char *buf, MemoryStoreDesc *d)
{
    char field[256];
    const char *q = buf;
    q = next_field(q, d->name, CAT_MAX_NAME_LEN);
    q = next_field(q, field, sizeof(field));
    d->backing_table_id = (uint32_t)strtoul(field, NULL, 10);
    q = next_field(q, field, sizeof(field));
    d->embedding_dim = atoi(field);
    q = next_field(q, field, sizeof(field));
    d->distance_kind = atoi(field);
    (void)q;
}

int cat_create_memory_store(const MemoryStoreDesc *desc)
{
    if (!desc || desc->name[0] == '\0') return -1;
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", desc->name);

    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_MEMORY_STORES], key, &existing) == 0)
        return -1;

    char record[512];
    if (serialize_memory_store(desc, record, sizeof(record)) < 0) return -1;
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_MEMORY_STORES, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_MEMORY_STORES], key, rid) == 0 ? 0 : -1;
}

int cat_find_memory_store(const char *name, MemoryStoreDesc *out)
{
    if (!name || !*name) return -1;
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", name);
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_MEMORY_STORES], key, &rid) < 0)
        return -1;
    char record[512];
    if (cat_read_record(rid, record, sizeof(record)) < 0) return -1;
    if (out) deserialize_memory_store(record, out);
    return 0;
}

int cat_drop_memory_store(const char *name)
{
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", name);
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_MEMORY_STORES], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_MEMORY_STORES], key);
    return 0;
}

int cat_list_memory_stores(MemoryStoreDesc *out, int max)
{
    if (!out || max <= 0) return 0;
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_MEMORY_STORES], &cur) < 0)
        return 0;
    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[512];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_memory_store(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* ================================================================
 *  Subscriptions (Task 210 — Feature #210)
 *
 *  Key   : lowercased subscription name
 *  Value : "name;channel;backing_table_id;last_ack_seq;next_seq;ttl_days"
 * ================================================================ */
static int serialize_subscription(const SubscriptionDesc *d,
                                   char *buf, int size)
{
    int n = snprintf(buf, size, "%s;%s;%u;%lld;%lld;%d",
                     d->name, d->channel, d->backing_table_id,
                     (long long)d->last_ack_seq,
                     (long long)d->next_seq,
                     d->ttl_days);
    return (n < 0 || n >= size) ? -1 : n;
}

static void deserialize_subscription(const char *buf, SubscriptionDesc *d)
{
    char field[256];
    const char *q = buf;
    q = next_field(q, d->name,    CAT_MAX_NAME_LEN);
    q = next_field(q, d->channel, CAT_MAX_NAME_LEN);
    q = next_field(q, field, sizeof(field));
    d->backing_table_id = (uint32_t)strtoul(field, NULL, 10);
    q = next_field(q, field, sizeof(field));
    d->last_ack_seq = (int64_t)strtoll(field, NULL, 10);
    q = next_field(q, field, sizeof(field));
    d->next_seq = (int64_t)strtoll(field, NULL, 10);
    q = next_field(q, field, sizeof(field));
    d->ttl_days = atoi(field);
    (void)q;
}

int cat_create_subscription(const SubscriptionDesc *desc)
{
    if (!desc || desc->name[0] == '\0') return -1;
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", desc->name);
    RowID existing;
    if (bt2_search(&g_cat_trees[CAT_SYS_SUBSCRIPTIONS], key, &existing) == 0)
        return -1;
    char record[512];
    if (serialize_subscription(desc, record, sizeof(record)) < 0) return -1;
    int rec_len = (int)strlen(record) + 1;
    RowID rid = cat_store_record(CAT_SYS_SUBSCRIPTIONS, record, rec_len);
    if (rid.page_no == 0) return -1;
    return bt2_insert(&g_cat_trees[CAT_SYS_SUBSCRIPTIONS], key, rid) == 0 ? 0 : -1;
}

int cat_find_subscription(const char *name, SubscriptionDesc *out)
{
    if (!name || !*name) return -1;
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", name);
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SUBSCRIPTIONS], key, &rid) < 0)
        return -1;
    char record[512];
    if (cat_read_record(rid, record, sizeof(record)) < 0) return -1;
    if (out) deserialize_subscription(record, out);
    return 0;
}

int cat_drop_subscription(const char *name)
{
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", name);
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SUBSCRIPTIONS], key, &rid) < 0)
        return -1;
    cat_delete_record(rid);
    bt2_delete(&g_cat_trees[CAT_SYS_SUBSCRIPTIONS], key);
    return 0;
}

int cat_list_subscriptions(SubscriptionDesc *out, int max)
{
    if (!out || max <= 0) return 0;
    BTree2Cursor cur;
    if (bt2_cursor_first(&g_cat_trees[CAT_SYS_SUBSCRIPTIONS], &cur) < 0)
        return 0;
    int count = 0;
    char key[BT2_MAX_KEY_LEN + 1];
    RowID rid;
    while (count < max && bt2_cursor_next(&cur, key, &rid) == 0) {
        char record[512];
        if (cat_read_record(rid, record, sizeof(record)) >= 0) {
            deserialize_subscription(record, &out[count]);
            count++;
        }
    }
    return count;
}

/* The seq counters and last_ack_seq mutate on every NOTIFY / ACK, so
 * an in-place rewrite avoids the delete + re-insert round-trip on the
 * hot path. Falls back to delete+insert if slot_update can't widen the
 * record (rare — sizes match on the same record format). */
int cat_update_subscription(const SubscriptionDesc *desc)
{
    if (!desc || desc->name[0] == '\0') return -1;
    char key[CAT_MAX_KEY_LEN];
    snprintf(key, sizeof(key), "%s", desc->name);
    RowID rid;
    if (bt2_search(&g_cat_trees[CAT_SYS_SUBSCRIPTIONS], key, &rid) < 0)
        return -1;

    char new_record[512];
    if (serialize_subscription(desc, new_record, sizeof(new_record)) < 0)
        return -1;
    int new_len = (int)strlen(new_record) + 1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    if (slot_update(page_buf, rid.slot_idx, new_record, (uint16_t)new_len) == 0) {
        pgm_write_page(rid.page_no, page_buf);
        return 0;
    }

    cat_delete_record(rid);
    RowID new_rid = cat_store_record(CAT_SYS_SUBSCRIPTIONS, new_record, new_len);
    if (new_rid.page_no == 0) return -1;
    return bt2_update(&g_cat_trees[CAT_SYS_SUBSCRIPTIONS], key, new_rid);
}
