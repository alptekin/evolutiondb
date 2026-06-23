/*
 * dml_profile.c — implementation of the DML inner-loop profiler.
 * See dml_profile.h for rationale and usage.
 *
 * Output routing: the query executor redirects stdout/stderr to
 * /dev/null while yyparse() runs (query_executor.c:5066-5076), so a
 * straight fprintf(stderr) from inside DeleteProcess/UpdateProcess
 * would be discarded. We open a dedicated log file at begin_stmt
 * time and write profile blocks there — bypasses the redirect and
 * gives the user a stable path to tail.
 *
 * Path comes from EVOSQL_DML_PROFILE_LOG, defaulting to
 * /tmp/evosql_dml_profile.log. The file is opened once per process
 * and reused by all threads (writes are line-buffered + fflush).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include "dml_profile.h"

__thread DMLProfile g_dml_prof = {0};

static FILE          *g_dml_prof_file = NULL;
static pthread_mutex_t g_dml_prof_mu   = PTHREAD_MUTEX_INITIALIZER;

static FILE *dml_prof_open_log(void)
{
    if (g_dml_prof_file) return g_dml_prof_file;
    pthread_mutex_lock(&g_dml_prof_mu);
    if (!g_dml_prof_file) {
        const char *path = getenv("EVOSQL_DML_PROFILE_LOG");
        if (!path || !*path) path = "/tmp/evosql_dml_profile.log";
        g_dml_prof_file = fopen(path, "a");
        if (g_dml_prof_file) {
            setvbuf(g_dml_prof_file, NULL, _IOLBF, 0);
            fprintf(g_dml_prof_file,
                    "\n==== dml_profile session start (pid=%d) ====\n",
                    (int)getpid());
            fflush(g_dml_prof_file);
        }
    }
    pthread_mutex_unlock(&g_dml_prof_mu);
    return g_dml_prof_file;
}

/* Slot lookup: linear scan over a tiny fixed array. Name identity is
 * by pointer (literal strings dedupe via the compiler's string pool).
 * Returns NULL if the table is full (silently — we'd rather under-
 * report a helper than crash the query path). */
DMLProfEntry *dml_prof_slot(const char *name)
{
    for (int i = 0; i < g_dml_prof.count; i++) {
        if (g_dml_prof.entries[i].name == name)
            return &g_dml_prof.entries[i];
    }
    if (g_dml_prof.count >= DML_PROF_MAX_ENTRIES)
        return NULL;
    DMLProfEntry *e = &g_dml_prof.entries[g_dml_prof.count++];
    e->name     = name;
    e->calls    = 0;
    e->total_ns = 0;
    return e;
}

void dml_prof_begin_stmt(const char *kind)
{
    /* Cheap runtime gate — single getenv() per DML statement. */
    g_dml_prof.enabled = getenv("EVOSQL_DML_PROFILE") != NULL;
    if (!g_dml_prof.enabled) return;

    g_dml_prof.count        = 0;
    g_dml_prof.row_count    = 0;
    g_dml_prof.stmt_kind    = kind;
    g_dml_prof.stmt_start_ns = dml_prof_now_ns();
    memset(g_dml_prof.entries, 0, sizeof(g_dml_prof.entries));
}

static int cmp_by_total_ns_desc(const void *a, const void *b)
{
    uint64_t ta = ((const DMLProfEntry *)a)->total_ns;
    uint64_t tb = ((const DMLProfEntry *)b)->total_ns;
    if (tb > ta) return 1;
    if (tb < ta) return -1;
    return 0;
}

void dml_prof_end_stmt(uint64_t matched_rows)
{
    if (!g_dml_prof.enabled) return;

    uint64_t stmt_total_ns = dml_prof_now_ns() - g_dml_prof.stmt_start_ns;

    FILE *out = dml_prof_open_log();
    if (!out) { g_dml_prof.enabled = 0; return; }

    /* Extract the loop_body_total sentinel (if present) for %loop
     * column, then sort the rest by total_ns descending. */
    uint64_t loop_total_ns = 0;
    for (int i = 0; i < g_dml_prof.count; i++) {
        if (g_dml_prof.entries[i].name &&
            strcmp(g_dml_prof.entries[i].name, "loop_body_total") == 0) {
            loop_total_ns = g_dml_prof.entries[i].total_ns;
            break;
        }
    }

    /* Copy + sort for presentation only; leave the live table alone
     * in case another statement starts before we return. */
    DMLProfEntry sorted[DML_PROF_MAX_ENTRIES];
    memcpy(sorted, g_dml_prof.entries,
           sizeof(DMLProfEntry) * g_dml_prof.count);
    qsort(sorted, g_dml_prof.count, sizeof(DMLProfEntry),
          cmp_by_total_ns_desc);

    pthread_mutex_lock(&g_dml_prof_mu);

    fprintf(out,
            "[DML-PROF] %s %llu rows  stmt_total=%.2f ms  loop_total=%.2f ms\n",
            g_dml_prof.stmt_kind ? g_dml_prof.stmt_kind : "?",
            (unsigned long long)matched_rows,
            stmt_total_ns / 1e6,
            loop_total_ns / 1e6);
    fprintf(out,
            "  %-20s %8s %12s %10s %8s\n",
            "slot", "calls", "total_ms", "avg_us", "%loop");

    uint64_t sum_except_loop_ns = 0;
    for (int i = 0; i < g_dml_prof.count; i++) {
        const DMLProfEntry *e = &sorted[i];
        if (!e->name) continue;
        double total_ms = e->total_ns / 1e6;
        double avg_us   = e->calls ? (e->total_ns / 1000.0 / e->calls) : 0.0;
        double pct_loop = loop_total_ns
                        ? (100.0 * e->total_ns / (double)loop_total_ns)
                        : 0.0;
        fprintf(out,
                "  %-20s %8llu %12.2f %10.2f %7.1f\n",
                e->name,
                (unsigned long long)e->calls,
                total_ms, avg_us, pct_loop);
        if (strcmp(e->name, "loop_body_total") != 0)
            sum_except_loop_ns += e->total_ns;
    }

    if (loop_total_ns > sum_except_loop_ns) {
        uint64_t unaccounted_ns = loop_total_ns - sum_except_loop_ns;
        double   pct = 100.0 * unaccounted_ns / (double)loop_total_ns;
        fprintf(out,
                "  %-20s %8s %12.2f %10s %7.1f\n",
                "[unaccounted]", "-",
                unaccounted_ns / 1e6, "-", pct);
    }
    fprintf(out, "\n");
    fflush(out);

    pthread_mutex_unlock(&g_dml_prof_mu);

    g_dml_prof.enabled = 0;  /* reset for next stmt */
}
