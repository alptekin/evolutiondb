"""
test_scheduler — Adım 18 sleep-time compute scheduler.

Unit:
  - Schedule.due covers interval (hourly), time-of-day (daily), and weekly
    specs, and the once-per-period guard.

DB:
  - run_due(force) runs every job over the namespace, recording state + audit;
    a second un-forced run finds nothing due (idempotent, restart-safe).
  - the embed-missing and entity jobs actually process connector-inserted rows
    (no inline extraction) and are no-ops on a second pass.
  - a failing job is isolated: it is recorded as an error, the others still
    run, and the audit failure-ratio (the eval-gate metric) reflects it.
"""
from __future__ import annotations

import json
import math
import os
import sys
import time
from datetime import datetime, timezone

from mcp_server_evosql import scheduler as SCH

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5505"))
UTC = timezone.utc


class Stub:
    kind = "stub"; model_name = "stub"
    def embed(self, t):
        v = [0.0] * 4
        for i, w in enumerate((t or "").split()):
            v[i % 4] += 1.0
        if not any(v): v = [0.01] * 4
        n = math.sqrt(sum(x * x for x in v)) or 1.0
        return [x / n for x in v]
    def embed_query(self, t):   return self.embed(t)
    def embed_passage(self, t): return self.embed(t)


def test_schedule():
    now = datetime(2026, 5, 31, 4, 30, tzinfo=UTC)   # a Sunday, 04:30
    h = SCH.Schedule("hourly")
    assert h.due(now, None) and not h.due(now, now.timestamp() - 1800)
    assert h.due(now, now.timestamp() - 3700)
    d = SCH.Schedule("daily@03:00")
    assert d.due(now, None)
    assert not d.due(now, datetime(2026, 5, 31, 3, 10, tzinfo=UTC).timestamp())
    assert d.due(now, datetime(2026, 5, 30, 3, 10, tzinfo=UTC).timestamp())
    assert not d.due(datetime(2026, 5, 31, 2, 0, tzinfo=UTC), None)
    w = SCH.Schedule("weekly@sun 02:00")
    assert w.due(now, None)                          # Sunday, past 02:00
    assert not w.due(datetime(2026, 5, 30, 4, 0, tzinfo=UTC), None)  # Saturday
    assert SCH.Schedule("every:10").due(now, now.timestamp() - 11)
    print("  ok  schedule: interval + daily + weekly + once-per-period")


def _put(b, ns, key, rec):
    from mcp_server_evosql.server import _e
    b._exec(f"MEMORY PUT INTO {b.memory} VALUES "
            f"('{_e(ns)}','{_e(key)}','{_e(json.dumps(rec))}')")


def test_run() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql",
                        autocommit=True, connect_timeout=3).close()
    except Exception as exc:
        print(f"  SKIP run (no server on :{PORT}: {exc})")
        return True

    os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": str(PORT),
                       "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                       "EVOSQL_DATABASE": "evosql",
                       "EVOSQL_EMBEDDING_PROVIDER": "none"})
    prefix = f"mcp_jb{int(time.time())}"
    ns = f"jbtest_{int(time.time())}"
    # entity extraction is normally inline on save(); turn it off so the
    # scheduler job is the thing that does it (that is what we are testing).
    os.environ["EVOSQL_ENTITY_EXTRACT"] = "0"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix,
                      embedder=Stub())

    now = time.time()
    # connector-style rows inserted WITHOUT going through save(): no emb, no
    # entities — exactly what the hourly jobs are supposed to backfill.
    for i in range(22):
        _put(b, ns, f"row{i}", {
            "fact": f"Acme A.Ş. ile gorusme {i} yapildi",
            "created": now - i * 1800})

    # run every job once (forced)
    ran = SCH.run_due(b, force=True)
    names = {r["job"]: r for r in ran}
    assert set(names) >= {"embed_missing", "extract_entities", "salience",
                          "profile", "episodes"}, list(names)
    assert all(r["last_status"] == "ok" for r in ran), ran
    assert names["embed_missing"]["last_rows"] == 22, names["embed_missing"]
    assert names["extract_entities"]["last_rows"] == 22, names["extract_entities"]
    assert SCH.failure_ratio(b) == 0.0
    print(f"  ok  forced run: " +
          ", ".join(f"{r['job']}={r['last_rows']}" for r in ran))

    # idempotent / restart-safe: nothing is due again right away
    again = SCH.run_due(b)
    assert again == [], f"jobs should not be due immediately: {again}"
    # and the entity/embed jobs are no-ops on a second forced pass
    e2 = SCH.run_due(b, only="extract_entities", force=True)
    assert e2[0]["last_rows"] == 0, e2
    print("  ok  idempotent: re-run due=none, entity re-pass processes 0")

    # error isolation: a job that raises is recorded, others unaffected
    orig = SCH.job_salience
    SCH.job_salience = lambda backend, n: (_ for _ in ()).throw(RuntimeError("boom"))
    # rebind in the JOBS table
    for j in SCH.JOBS:
        if j.name == "salience":
            j.fn = SCH.job_salience
    try:
        bad = SCH.run_due(b, only="salience", force=True)
    finally:
        SCH.job_salience = orig
        for j in SCH.JOBS:
            if j.name == "salience":
                j.fn = orig
    assert bad and bad[0]["last_status"] == "error" and bad[0]["errors"] >= 1, bad
    fr = SCH.failure_ratio(b)
    assert 0.0 < fr < 1.0, f"failure ratio should reflect one bad run: {fr}"
    st = {s["job"]: s for s in SCH.status(b)}
    assert st["episodes"]["last_status"] == "ok"
    print(f"  ok  error isolation: salience=error, others ok, "
          f"failure_ratio={fr*100:.1f}%")

    # retry-on-fail: salience is a daily job that just "ran" (with an error),
    # so the schedule alone would skip it — but a failed run must retry on the
    # next (un-forced) tick. The fn is restored now, so it succeeds.
    retry = SCH.run_due(b)
    rsal = next((r for r in retry if r["job"] == "salience"), None)
    assert rsal is not None, f"failed salience must be due again: {[r['job'] for r in retry]}"
    assert rsal["last_status"] == "ok", rsal
    assert SCH.failure_ratio(b) == 0.0, "retry should clear the failure"
    print("  ok  retry-on-fail: errored daily job re-ran next tick + succeeded")
    return True


def test_large_record() -> bool:
    """A row too big to rewrite (over the engine's 8 KB statement cap) must
    not kill any job. Salience goes to a side store (never rewrites the big
    row); entity/edge records are size-bounded; decay skips the oversized row
    rather than erroring."""
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql",
                        autocommit=True, connect_timeout=3).close()
    except Exception as exc:
        print(f"  SKIP large-record (no server on :{PORT}: {exc})")
        return True

    os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": str(PORT),
                       "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                       "EVOSQL_DATABASE": "evosql",
                       "EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_ENTITY_EXTRACT": "0"})
    prefix = f"mcp_big{int(time.time())}"
    ns = f"bigtest_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)
    now = time.time()
    # a row near the 8 KB cap: seedable as-is, but adding a salience field (the
    # pre-fix behaviour) would have tipped it over and killed the job. ~7.2 KB.
    huge = "Acme A.Ş. " + "veri " * 1440
    _put(b, ns, "huge", {"fact": huge, "saved_at": now - 400 * 86400})
    for i in range(6):
        _put(b, ns, f"ok{i}", {"fact": f"Acme A.Ş. gorusme {i}", "saved_at": now})

    ran = {r["job"]: r for r in SCH.run_due(b, force=True)}
    for j in ("extract_entities", "salience", "decay"):
        assert ran[j]["last_status"] == "ok" and ran[j]["errors"] == 0, \
            f"{j} should not error on the oversized row: {ran[j]}"
    # the big row was NOT rewritten by salience (salience lives in side store)
    from mcp_server_evosql.server import _e
    s = b._query(f"SELECT mem_value FROM __mem_{prefix}_salience "
                 f"WHERE mem_namespace='{_e(ns)}' AND mem_key='ok0'")
    assert s and s[0] and s[0][0], "salience must be written to the side store"
    print(f"  ok  >8KB record handled: extract/salience/decay all ok "
          f"(decay skipped={ran['decay'].get('last_rows')})")
    return True


def main() -> int:
    test_schedule()
    test_run()
    test_large_record()
    print("OK — Adım 18 scheduler: schedules + idempotent runs + audit log "
          "+ error isolation + failure ratio + 8KB-safe writes")
    return 0


if __name__ == "__main__":
    sys.exit(main())
