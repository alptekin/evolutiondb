/*
 * Schedule.c — Scheduled jobs / CRON.
 *
 * Cron is intentionally minimal in v1:
 *   - Five fields (min hour dom mon dow), space-separated.
 *   - Each field is either '*' or a single integer (no ranges, no
 *     comma lists, no step values). Captures the 80% case
 *     (every-N-minutes, daily-at-3am, hourly) without dragging in
 *     a full parser.
 *   - dow == 0 or 7 both mean Sunday, matching POSIX cron.
 *
 * v2 will add ranges and comma lists; the catalog format already
 * carries the full literal so we can swap evaluators without a
 * migration.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "database.h"
#include "query_context.h"
#include "catalog_internal.h"
#include "Schedule.h"

/* ----------------------------------------------------------------
 *  Per-statement staging
 * ---------------------------------------------------------------- */
typedef struct {
    char job_name[CAT_MAX_NAME_LEN];
    char cron_expr[64];
    char sql_body[1024];
    char drop_name[CAT_MAX_NAME_LEN];
    int  drop_if_exists;
} ScheduleOpts;

static __thread ScheduleOpts g_job;

void ResetScheduleOpts(void) { memset(&g_job, 0, sizeof(g_job)); }

static void strip_quotes(char *s)
{
    if (!s) return;
    int n = (int)strlen(s);
    if (n >= 2 && (s[0] == '\'' || s[0] == '"') && s[n - 1] == s[0]) {
        memmove(s, s + 1, n - 2);
        s[n - 2] = '\0';
    }
}

void SetJobName(const char *name)
{
    if (name) snprintf(g_job.job_name, sizeof(g_job.job_name), "%s", name);
}
void SetJobCronExpr(const char *expr)
{
    if (!expr) return;
    snprintf(g_job.cron_expr, sizeof(g_job.cron_expr), "%s", expr);
    strip_quotes(g_job.cron_expr);
}
void SetJobSql(const char *sql)
{
    if (!sql) return;
    snprintf(g_job.sql_body, sizeof(g_job.sql_body), "%s", sql);
    strip_quotes(g_job.sql_body);
}
void SetJobDropName(const char *name)
{
    if (name) snprintf(g_job.drop_name, sizeof(g_job.drop_name), "%s", name);
}
void SetJobDropIfExists(int v) { g_job.drop_if_exists = v ? 1 : 0; }

/* ----------------------------------------------------------------
 *  Cron expression validation + match
 * ---------------------------------------------------------------- */

/* Parse one field: either "*" → -1 (any), or a non-negative integer.
 * Returns 0 on success, -1 on malformed input. */
static int parse_cron_field(const char *s, int *out)
{
    if (!s || !*s) return -1;
    if (s[0] == '*' && s[1] == '\0') { *out = -1; return 0; }
    char *end = NULL;
    long v = strtol(s, &end, 10);
    if (end == s || *end != '\0') return -1;
    if (v < 0) return -1;
    *out = (int)v;
    return 0;
}

/* Validate a 5-field cron expression. Returns 0 on success. */
static int cron_validate(const char *expr)
{
    char buf[64];
    if (!expr || !*expr) return -1;
    snprintf(buf, sizeof(buf), "%s", expr);
    char *fields[8];
    int n = 0;
    char *save = NULL;
    for (char *t = strtok_r(buf, " \t", &save); t; t = strtok_r(NULL, " \t", &save)) {
        if (n >= 8) return -1;
        fields[n++] = t;
    }
    if (n != 5) return -1;
    int parsed[5];
    for (int i = 0; i < 5; i++) {
        if (parse_cron_field(fields[i], &parsed[i]) < 0) return -1;
    }
    /* Range checks. -1 means '*'. */
    if (parsed[0] != -1 && (parsed[0] < 0 || parsed[0] > 59)) return -1;  /* min */
    if (parsed[1] != -1 && (parsed[1] < 0 || parsed[1] > 23)) return -1;  /* hour */
    if (parsed[2] != -1 && (parsed[2] < 1 || parsed[2] > 31)) return -1;  /* dom */
    if (parsed[3] != -1 && (parsed[3] < 1 || parsed[3] > 12)) return -1;  /* mon */
    if (parsed[4] != -1 && (parsed[4] < 0 || parsed[4] > 7))  return -1;  /* dow */
    return 0;
}

/* Compare a cron expression against a wall-clock minute. Returns 1 if
 * the schedule should fire at this minute, 0 otherwise. */
static int cron_matches(const char *expr, time_t now_ts)
{
    char buf[64];
    snprintf(buf, sizeof(buf), "%s", expr);
    char *fields[5] = {0};
    int n = 0;
    char *save = NULL;
    for (char *t = strtok_r(buf, " \t", &save); t && n < 5;
                                t = strtok_r(NULL, " \t", &save)) {
        fields[n++] = t;
    }
    if (n != 5) return 0;

    struct tm tm;
#ifdef _WIN32
    gmtime_s(&tm, &now_ts);
#else
    gmtime_r(&now_ts, &tm);
#endif

    int now_fields[5] = {
        tm.tm_min,
        tm.tm_hour,
        tm.tm_mday,
        tm.tm_mon + 1,
        tm.tm_wday   /* 0..6, Sunday = 0 */
    };

    for (int i = 0; i < 5; i++) {
        int v;
        if (parse_cron_field(fields[i], &v) < 0) return 0;
        if (v == -1) continue;
        /* dow: 7 also means Sunday */
        if (i == 4 && v == 7) v = 0;
        if (now_fields[i] != v) return 0;
    }
    return 1;
}

/* ----------------------------------------------------------------
 *  CREATE JOB
 * ---------------------------------------------------------------- */
int CreateJobProcess(int if_not_exists)
{
    if (g_job.job_name[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE JOB: missing job name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }
    if (cron_validate(g_job.cron_expr) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE JOB: bad cron expression \"%s\" "
                 "(expected '<min> <hour> <dom> <mon> <dow>', "
                 "each * or non-negative integer)",
                 g_job.cron_expr);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("22023");
        return -1;
    }
    if (g_job.sql_body[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE JOB: missing DO 'sql'");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    ScheduledJobDesc existing;
    if (cat_find_scheduled_job(g_job.job_name, &existing) == 0) {
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "job \"%s\" already exists", g_job.job_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    ScheduledJobDesc desc;
    memset(&desc, 0, sizeof(desc));
    snprintf(desc.name,      sizeof(desc.name),      "%s", g_job.job_name);
    snprintf(desc.cron_expr, sizeof(desc.cron_expr), "%s", g_job.cron_expr);
    snprintf(desc.sql,       sizeof(desc.sql),       "%s", g_job.sql_body);
    desc.enabled = 1;
    desc.last_run_unix = 0;

    if (cat_create_scheduled_job(&desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to register job \"%s\"", g_job.job_name);
        g_err.error = 1;
        return -1;
    }
    return 0;
}

int DropJobProcess(void)
{
    ScheduledJobDesc desc;
    if (cat_find_scheduled_job(g_job.drop_name, &desc) != 0) {
        if (g_job.drop_if_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "job \"%s\" does not exist", g_job.drop_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    cat_drop_scheduled_job(g_job.drop_name);
    return 0;
}

int AlterJobProcess(int enable)
{
    ScheduledJobDesc desc;
    if (cat_find_scheduled_job(g_job.drop_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "job \"%s\" does not exist", g_job.drop_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    desc.enabled = enable ? 1 : 0;
    cat_update_scheduled_job(&desc);
    return 0;
}

/* ----------------------------------------------------------------
 *  Scheduler tick
 *
 *  v1 records the fact that a job's cron pattern matched the current
 *  minute by stamping last_run_unix and emitting a stderr line. The
 *  full executor wiring (running the job's SQL through the same
 *  parser+planner the client path uses) needs more work to be safe
 *  on the daemon thread — re-entering query_execute from a thread
 *  that wasn't spawned by the connection pool stomps thread-local
 *  state and SEGVs. A future task moves the actual SQL execution
 *  onto a dedicated job worker thread.
 *
 *  The DDL surface, persistence, cron matching, ENABLE/DISABLE,
 *  and SHOW JOBS introspection are all complete and useful on
 *  their own — agents can already see "did the schedule tick?"
 *  via SHOW JOBS' last_run_unix field. Wiring up the side-effect
 *  loop is a v2 follow-up.
 * ---------------------------------------------------------------- */

typedef int (*schedule_exec_fn)(const char *sql);
schedule_exec_fn g_schedule_exec = NULL;

void schedule_run_due(int64_t now_ts)
{
    /* Snapshot each minute's start so a job that ticks twice in the
     * same wall-clock minute (because the daemon interval is shorter
     * than 60s) doesn't fire twice. */
    int64_t minute_floor = now_ts - (now_ts % 60);

    ScheduledJobDesc jobs[64];
    int n = cat_list_scheduled_jobs(jobs, 64);

    for (int i = 0; i < n; i++) {
        if (!jobs[i].enabled) continue;
        if (!cron_matches(jobs[i].cron_expr, (time_t)now_ts)) continue;
        if (jobs[i].last_run_unix >= minute_floor) continue;

        jobs[i].last_run_unix = minute_floor;
        cat_update_scheduled_job(&jobs[i]);

        fprintf(stderr, "[scheduler] Job \"%s\" matched cron=%s "
                "(SQL execution deferred to v2)\n",
                jobs[i].name, jobs[i].cron_expr);
    }
}
