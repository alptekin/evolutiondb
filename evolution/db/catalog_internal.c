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
#include "catalog_internal.h"
#include "table_api.h"

/* ----------------------------------------------------------------
 *  Internal state
 * ---------------------------------------------------------------- */
static BTree2   g_cat_trees[CAT_MAX];       /* B+ tree handles */
static uint32_t g_cat_data_pages[CAT_MAX];  /* current insertion pages */
static int      g_cat_initialized = 0;

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
    snprintf(buf, size, "%u;%u;%s;%u;%u;%d;%d;%d;%d;%d;%d;%d",
             t->table_id, t->schema_id, t->table_name,
             t->pk_root_page, t->heap_page,
             t->num_columns, t->pad_size,
             t->auto_inc_col, t->auto_inc_counter, t->auto_inc_step,
             t->is_temporary, t->on_commit_delete);
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
    (void)p;
}

/* --- Column --- */
static void serialize_column(const ColumnDesc *c, char *buf, int size)
{
    snprintf(buf, size, "%u;%d;%s;%d;%d;%d;%d;%s;%d;%s",
             c->table_id, c->col_ordinal, c->col_name,
             c->type_code, c->is_not_null, c->is_unique, c->is_pk,
             c->default_val,
             c->generated_mode,
             c->generated_expr[0] ? c->generated_expr : "");
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
    if (p && *p) {
        p = next_field(p, field, sizeof(field));
        c->generated_mode = atoi(field);
        if (p && *p)
            next_field(p, c->generated_expr, sizeof(c->generated_expr));
    }
}

/* --- Index --- */
static void serialize_index(const IndexDesc *idx, char *buf, int size)
{
    snprintf(buf, size, "%u;%s;%u;%s;%c;%s",
             idx->table_id, idx->index_name,
             idx->root_page, idx->col_list, idx->index_type,
             idx->expr_def[0] ? idx->expr_def : "");
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
        next_field(p, idx->expr_def, sizeof(idx->expr_def));
    }
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
    snprintf(buf, size, "%s", u->password_hash);
}

static void deserialize_user(const char *buf, const char *key, UserDesc *u)
{
    strncpy(u->username, key, CAT_MAX_NAME_LEN - 1);
    u->username[CAT_MAX_NAME_LEN - 1] = '\0';
    strncpy(u->password_hash, buf, CAT_MAX_HASH_LEN - 1);
    u->password_hash[CAT_MAX_HASH_LEN - 1] = '\0';
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

    /* Check if catalog already exists */
    uint32_t db_root = pgm_get_catalog_root(CAT_SYS_DATABASES);

    if (db_root != 0) {
        /* Load existing trees */
        for (int i = 0; i < CAT_MAX; i++) {
            g_cat_trees[i].root_page = pgm_get_catalog_root((CatalogID)i);
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
    if (is_temporary != 2) {
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
    t.on_commit_delete = (is_temporary == 2) ? on_commit_delete : 0;

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
    strncpy(u.username, username, CAT_MAX_NAME_LEN - 1);
    u.username[CAT_MAX_NAME_LEN - 1] = '\0';
    strncpy(u.password_hash, password_hash, CAT_MAX_HASH_LEN - 1);
    u.password_hash[CAT_MAX_HASH_LEN - 1] = '\0';

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

    UserDesc u;
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
    snprintf(buf, size, "%u;%lu;%u;%ld;%lu",
             ts->table_id, (unsigned long)ts->row_count,
             ts->page_count, (long)ts->last_analyzed,
             (unsigned long)ts->dml_since_analyze);
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
