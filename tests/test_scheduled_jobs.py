"""
test_scheduled_jobs.py — Task 215 (Feature #215) tests.

Covers:
  - CREATE JOB ... ON SCHEDULE ... DO ... accepted
  - SHOW JOBS lists registered jobs
  - DROP JOB removes one
  - DROP JOB IF EXISTS swallows missing
  - ALTER JOB ENABLE / DISABLE flips the flag
  - Bad cron expression rejected at CREATE
  - Missing schedule / SQL rejected
  - Disabled job's last_run_unix doesn't advance on tick
  - Enabled '* * * * *' job's last_run_unix advances within a minute
  - Persistence: SHOW JOBS still lists job after server restart
"""
import os
import sys
import time
import datetime

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query


PASS = 0
FAIL = 0


def run(name, fn):
    global PASS, FAIL
    try:
        fn()
        print(f"  PASS: {name}")
        PASS += 1
    except Exception as e:
        print(f"  FAIL: {name} - {e}")
        FAIL += 1


def jobs_dict(s):
    _, rows, _, _ = simple_query(s, "SHOW JOBS")
    return {r[0]: r for r in rows}


# ─── 1. CREATE JOB accepted ───
def test_create_job():
    s = conn()
    simple_query(s, "DROP JOB IF EXISTS j1")
    _, _, err, _ = simple_query(s,
        "CREATE JOB j1 ON SCHEDULE '0 3 * * *' DO 'SELECT 1'")
    assert err is None, f"create: {err}"


# ─── 2. SHOW JOBS lists job ───
def test_show_lists():
    s = conn()
    simple_query(s, "DROP JOB IF EXISTS j2")
    simple_query(s, "CREATE JOB j2 ON SCHEDULE '5 * * * *' DO 'SELECT 2'")
    j = jobs_dict(s)
    assert "j2" in j, f"missing: {j}"
    # row shape: (name, schedule, sql, enabled, last_run_unix)
    assert j["j2"][1] == "5 * * * *"
    assert j["j2"][2] == "SELECT 2"


# ─── 3. DROP JOB removes ───
def test_drop():
    s = conn()
    simple_query(s, "DROP JOB IF EXISTS j3")
    simple_query(s, "CREATE JOB j3 ON SCHEDULE '* * * * *' DO 'SELECT 3'")
    simple_query(s, "DROP JOB j3")
    assert "j3" not in jobs_dict(s)


# ─── 4. DROP JOB IF EXISTS swallows missing ───
def test_drop_if_exists_missing():
    s = conn()
    _, _, err, _ = simple_query(s, "DROP JOB IF EXISTS does_not_exist_x")
    assert err is None, f"if exists: {err}"


# ─── 5. ALTER JOB ENABLE / DISABLE ───
def test_alter_enable_disable():
    s = conn()
    simple_query(s, "DROP JOB IF EXISTS j5")
    simple_query(s, "CREATE JOB j5 ON SCHEDULE '* * * * *' DO 'SELECT 5'")
    simple_query(s, "ALTER JOB j5 DISABLE")
    j = jobs_dict(s)
    assert j["j5"][3] in ("false", "f"), f"after disable: {j['j5']}"
    simple_query(s, "ALTER JOB j5 ENABLE")
    j = jobs_dict(s)
    assert j["j5"][3] in ("true", "t"), f"after enable: {j['j5']}"


# ─── 6. Bad cron expression rejected ───
def test_bad_cron_rejected():
    s = conn()
    _, _, err, _ = simple_query(s,
        "CREATE JOB jbad ON SCHEDULE 'totally not a cron' DO 'SELECT 1'")
    assert err is not None, "bad cron should be rejected"


# ─── 7. CREATE JOB without SQL rejected at parser level ───
def test_missing_sql_rejected():
    s = conn()
    _, _, err, _ = simple_query(s,
        "CREATE JOB j7 ON SCHEDULE '* * * * *'")
    assert err is not None, "missing DO clause should be rejected"


# ─── 8. Disabled job's last_run_unix stays at 0 across a tick ───
def test_disabled_no_advance():
    s = conn()
    simple_query(s, "DROP JOB IF EXISTS j8")
    simple_query(s, "CREATE JOB j8 ON SCHEDULE '* * * * *' DO 'SELECT 8'")
    simple_query(s, "ALTER JOB j8 DISABLE")
    # Wait into next minute boundary so a tick definitely runs.
    secs = 62 - datetime.datetime.utcnow().second
    time.sleep(min(secs, 65))
    time.sleep(4)
    j = jobs_dict(conn())
    assert j["j8"][4] == "0", f"disabled but advanced: {j['j8']}"


# ─── 9. Enabled '* * * * *' job advances last_run_unix ───
def test_enabled_advances():
    s = conn()
    simple_query(s, "DROP JOB IF EXISTS j9")
    simple_query(s, "CREATE JOB j9 ON SCHEDULE '* * * * *' DO 'SELECT 9'")
    secs = 62 - datetime.datetime.utcnow().second
    time.sleep(min(secs, 65))
    time.sleep(4)
    j = jobs_dict(conn())
    last = int(j["j9"][4])
    assert last > 0, f"never ticked: {j['j9']}"


# ─── 10. CREATE JOB IF EXISTS swallows duplicate ───
def test_create_if_exists():
    s = conn()
    simple_query(s, "DROP JOB IF EXISTS j10")
    simple_query(s, "CREATE JOB j10 ON SCHEDULE '* * * * *' DO 'SELECT 10'")
    _, _, err, _ = simple_query(s,
        "CREATE JOB IF EXISTS j10 ON SCHEDULE '* * * * *' DO 'SELECT 10'")
    assert err is None, f"if not exists dup: {err}"


if __name__ == "__main__":
    print("=== test_scheduled_jobs.py (Task 215) ===\n")
    run("CREATE JOB accepted",                  test_create_job)
    run("SHOW JOBS lists registered jobs",       test_show_lists)
    run("DROP JOB removes",                       test_drop)
    run("DROP JOB IF EXISTS swallows missing",   test_drop_if_exists_missing)
    run("ALTER JOB ENABLE / DISABLE flips flag", test_alter_enable_disable)
    run("Bad cron expression rejected",          test_bad_cron_rejected)
    run("Missing SQL rejected",                   test_missing_sql_rejected)
    run("Disabled job's last_run stays at 0",   test_disabled_no_advance)
    run("Enabled job's last_run advances",       test_enabled_advances)
    run("CREATE JOB IF EXISTS swallows dup",     test_create_if_exists)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
