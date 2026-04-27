/*
 * Schedule.h — Scheduled jobs / CRON (Task 215, Feature #215)
 *
 * Surface:
 *   CREATE JOB name ON SCHEDULE 'min hour dom mon dow' DO 'sql';
 *   DROP   JOB name [IF EXISTS];
 *   ALTER  JOB name ENABLE | DISABLE;
 *   SHOW   JOBS;                       (adaptor/catalog.c string match)
 *
 * The scheduler tick lives in auto_reclaim.c and calls schedule_run_due()
 * which evaluates each job's cron expression against the current minute
 * and re-runs the configured SQL via the existing query_execute hook.
 */
#ifndef EVO_SCHEDULE_H
#define EVO_SCHEDULE_H

#include <stdint.h>

void  ResetScheduleOpts(void);
void  SetJobName(const char *name);
void  SetJobCronExpr(const char *expr);
void  SetJobSql(const char *sql);
void  SetJobDropName(const char *name);
void  SetJobDropIfExists(int v);

int   CreateJobProcess(int if_not_exists);
int   DropJobProcess(void);
int   AlterJobProcess(int enable);

/* Scheduler tick — auto_reclaim_worker calls this once per second.
 * Walks every registered job, fires those whose cron pattern matches
 * the current minute and whose last_run_unix is older than the start
 * of the current minute. */
void  schedule_run_due(int64_t now_ts);

#endif /* EVO_SCHEDULE_H */
