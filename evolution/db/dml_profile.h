/*
 * dml_profile.h — Per-helper timing harness for DELETE/UPDATE inner loop
 *
 * Minimal, thread-local, zero-overhead-when-off profiling primitive for
 * measuring the real cost of each helper called during the DML inner
 * loop (after matchKeys is collected).
 *
 * Activation: set environment variable EVOSQL_DML_PROFILE=1 before
 * starting the server. When unset, DML_PROF(...) costs ~1 predictable
 * branch per call and the timing code path is dead.
 *
 * Output: on dml_prof_end_stmt(), dumps one block per DML statement to
 * stderr with calls / total_ms / avg_us / %loop_total per helper slot.
 */
#ifndef EVOLUTIONDB_DML_PROFILE_H
#define EVOLUTIONDB_DML_PROFILE_H

#include <stdint.h>
#include <time.h>

#define DML_PROF_MAX_ENTRIES 24

typedef struct {
    const char *name;      /* stable literal pointer used as identity */
    uint64_t    calls;
    uint64_t    total_ns;
} DMLProfEntry;

typedef struct {
    int          enabled;           /* cached at stmt begin */
    int          count;             /* active entries */
    DMLProfEntry entries[DML_PROF_MAX_ENTRIES];
    uint64_t     row_count;         /* rows affected (passed at end) */
    const char  *stmt_kind;         /* "DELETE" / "UPDATE" */
    uint64_t     stmt_start_ns;
} DMLProfile;

extern __thread DMLProfile g_dml_prof;

void          dml_prof_begin_stmt(const char *kind);
void          dml_prof_end_stmt(uint64_t matched_rows);
DMLProfEntry *dml_prof_slot(const char *name);

static inline uint64_t dml_prof_now_ns(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ULL + (uint64_t)ts.tv_nsec;
}

/* DML_PROF(name_literal, call_expression)
 *
 * Wrap a function call to accumulate its time under a named slot.
 * `name` MUST be a literal string (we use pointer identity for O(1)
 * slot lookup). Off mode: call_expr runs directly, branch is dead.
 *
 * Statement form — discards any return value:
 */
#define DML_PROF(name, call_expr) do {                      \
    if (!g_dml_prof.enabled) { (call_expr); break; }        \
    uint64_t _dml_t0 = dml_prof_now_ns();                   \
    (call_expr);                                            \
    DMLProfEntry *_dml_e = dml_prof_slot((name));           \
    if (_dml_e) {                                           \
        _dml_e->calls++;                                    \
        _dml_e->total_ns += dml_prof_now_ns() - _dml_t0;    \
    }                                                       \
} while (0)

/* Expression form — returns the value of `expr`. Requires GCC
 * statement-expression and __typeof__ extensions (already used
 * elsewhere in the codebase). Usage:
 *     if (DML_PROF_EXPR("bt2_search",
 *                       bt2_search(&pk, key, &rid)) == 0) { ... }
 */
#define DML_PROF_EXPR(name, expr)                                  \
    (g_dml_prof.enabled                                            \
     ? ({ uint64_t _dml_t0 = dml_prof_now_ns();                    \
          __typeof__(expr) _dml_r = (expr);                        \
          DMLProfEntry *_dml_e = dml_prof_slot((name));             \
          if (_dml_e) {                                            \
              _dml_e->calls++;                                     \
              _dml_e->total_ns += dml_prof_now_ns() - _dml_t0;     \
          }                                                        \
          _dml_r; })                                               \
     : (expr))

#endif /* EVOLUTIONDB_DML_PROFILE_H */
