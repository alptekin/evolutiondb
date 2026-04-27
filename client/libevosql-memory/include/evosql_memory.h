/*
 * evosql_memory.h — libevosql-memory public API (Task 216, Feature #216)
 *
 * Thin C client over the EVO text protocol with high-level wrappers for
 * the agent-memory primitives (CHECKPOINT STORE, MEMORY STORE, MESSAGE
 * LOG, ENTITY STORE). Sits at the top of the FFI stack — Python ctypes,
 * Go cgo, Rust bindgen, and Node node-ffi-napi all bind to this header.
 *
 * Threading: the connection itself is NOT thread-safe; one connection
 * per thread is the contract. Last-error storage is __thread, so an
 * error on one thread doesn't leak into another's evo_strerror().
 *
 *   evo_conn_t *c = evo_connect("127.0.0.1", 9967, "admin", "admin");
 *   if (!c) {
 *       fprintf(stderr, "%s\n", evo_strerror(NULL));
 *       return 1;
 *   }
 *   evo_memory_put(c, "users", "alice", "{\"role\":\"pm\"}");
 *   char value[1024];
 *   evo_memory_get(c, "users", "alice", value, sizeof(value));
 *   evo_close(c);
 */
#ifndef EVOSQL_MEMORY_H
#define EVOSQL_MEMORY_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Opaque connection handle. Allocate via evo_connect, free via evo_close. */
typedef struct evo_conn evo_conn_t;

/* Result codes returned by every evo_* call. 0 = success, negative =
 * error. evo_strerror() turns the last-error code on the calling thread
 * into a human-readable string. */
typedef enum {
    EVO_OK             =  0,
    EVO_ERR            = -1,   /* generic */
    EVO_ERR_CONNECT    = -2,
    EVO_ERR_AUTH       = -3,
    EVO_ERR_PROTOCOL   = -4,
    EVO_ERR_SQL        = -5,
    EVO_ERR_BUFFER     = -6,
    EVO_ERR_NOT_FOUND  = -7
} evo_error_t;

/* ----------------------------------------------------------------
 *  Connection lifecycle
 * ---------------------------------------------------------------- */

/* Open a connection to an EvoSQL server speaking EVO text protocol on
 * the given port. Returns NULL on failure; call evo_strerror(NULL) for
 * the reason. The default username/password is admin/admin. */
evo_conn_t *evo_connect(const char *host, int port,
                         const char *user, const char *password);

/* Close + free a connection. NULL-tolerant. */
void evo_close(evo_conn_t *conn);

/* ----------------------------------------------------------------
 *  Generic SQL exec — escape hatch for anything the typed wrappers
 *  below don't cover. The caller's row_buf is filled with at most
 *  `max_rows` rows, each row max_cols × col_buf_size bytes. The
 *  returned int is the number of rows on success, -1 on error.
 * ---------------------------------------------------------------- */
int evo_exec(evo_conn_t *conn, const char *sql);

/* SELECT helper. Caller passes a flat char buffer big enough for
 * (max_rows * max_cols * col_buf_size) bytes. Field at row r, col c
 * lives at out + (r * max_cols + c) * col_buf_size. NULL fields are
 * stored as the empty string. Returns row count on success or -1 on
 * error. cols_out (optional) receives the column count. */
int evo_query(evo_conn_t *conn, const char *sql,
              char *out, int max_rows, int max_cols, int col_buf_size,
              int *cols_out);

/* ----------------------------------------------------------------
 *  MEMORY STORE (Task 205)
 * ---------------------------------------------------------------- */

/* MEMORY PUT INTO <store> VALUES (ns, key, json [, embedding]).
 * embedding may be NULL — pass "[0.1,0.2,...]" otherwise. */
int evo_memory_put(evo_conn_t *conn,
                    const char *store,
                    const char *ns,
                    const char *key,
                    const char *value_json,
                    const char *embedding_or_null);

/* MEMORY GET FROM <store> WHERE NS=? AND KEY=?. Writes the value JSON
 * into out (NUL-terminated). Returns EVO_OK / EVO_ERR_NOT_FOUND. */
int evo_memory_get(evo_conn_t *conn,
                    const char *store,
                    const char *ns,
                    const char *key,
                    char *out_value, int out_size);

/* MEMORY DELETE FROM <store> WHERE NS=? AND KEY=?. */
int evo_memory_delete(evo_conn_t *conn,
                       const char *store,
                       const char *ns,
                       const char *key);

/* ----------------------------------------------------------------
 *  CHECKPOINT STORE (Task 204)
 * ---------------------------------------------------------------- */

/* CHECKPOINT PUT INTO <store> (thread, ns, id, values, metadata). */
int evo_checkpoint_put(evo_conn_t *conn,
                        const char *store,
                        const char *thread_id,
                        const char *checkpoint_ns,
                        const char *checkpoint_id,
                        const char *values_json,
                        const char *metadata_json);

/* CHECKPOINT GET FROM <store> WHERE THREAD=?. Latest by thread.
 * Writes the checkpoint values JSON into out. */
int evo_checkpoint_get_latest(evo_conn_t *conn,
                                const char *store,
                                const char *thread_id,
                                char *out_value, int out_size);

/* ----------------------------------------------------------------
 *  Vector helpers
 * ---------------------------------------------------------------- */

/* Format a float[] as the "[v1,v2,...]" literal EvoSQL accepts as a
 * VECTOR(N) value. Caller supplies the buffer; returns the number of
 * bytes written (excluding NUL) or -1 on overflow. */
int evo_vector_format(const float *vec, int n,
                       char *out, int out_size);

/* ----------------------------------------------------------------
 *  Error inspection
 * ---------------------------------------------------------------- */

/* Last error message on the calling thread. Returns a static string
 * pointer; never NULL. Pass `conn` for completeness — current
 * implementation reads thread-local state and ignores the argument. */
const char *evo_strerror(const evo_conn_t *conn);

/* SQLSTATE of the last error, or empty string if no error. */
const char *evo_sqlstate(const evo_conn_t *conn);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* EVOSQL_MEMORY_H */
