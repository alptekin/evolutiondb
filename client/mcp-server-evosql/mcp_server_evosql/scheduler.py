"""
scheduler — sleep-time compute scheduler (Adım 18).

Runs the background jobs that keep the memory's derived layers fresh, so the
system "learns while you sleep": new rows get embedded and entity-extracted,
the salience scores and interest profile refresh nightly, and episodes get
re-segmented weekly. Dependency-free: a simple tick loop checks each job's
schedule against its last run, instead of APScheduler.

Every run is idempotent and audited. Job state lives in <prefix>_job_runs:
  state:<job>          -> {job, last_run, last_status, last_rows, last_error,
                           last_duration}
  audit:<job>:<ts>     -> one record per run (kept for the audit log / status)
On restart the scheduler reads state:<job> to decide what is due, so it never
double-runs a job it already did this period.

Run modes:
  python -m mcp_server_evosql.scheduler run            # forever (tick loop)
  python -m mcp_server_evosql.scheduler once           # run due jobs once, exit
  python -m mcp_server_evosql.scheduler once --job NAME --force
  python -m mcp_server_evosql.scheduler status         # last run of each job
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time
from datetime import datetime, timezone
from typing import Any, Callable, Dict, List, Optional

# ---------------------------------------------------------------- #
#  schedules                                                       #
# ---------------------------------------------------------------- #
_DOW = {"mon": 0, "tue": 1, "wed": 2, "thu": 3, "fri": 4, "sat": 5, "sun": 6}


class Schedule:
    """A tiny cron-ish schedule. Specs:
        "hourly"               -> every hour
        "every:<seconds>"      -> fixed interval
        "daily@HH:MM"          -> once per day at HH:MM (UTC)
        "weekly@<dow> HH:MM"   -> once per week on dow at HH:MM (UTC)
    """
    def __init__(self, spec: str):
        self.spec = spec
        self.kind = "interval"
        self.interval = 3600.0
        self.hour = self.minute = 0
        self.dow: Optional[int] = None
        if spec == "hourly":
            self.interval = 3600.0
        elif spec.startswith("every:"):
            self.interval = float(spec.split(":", 1)[1])
        elif spec.startswith("daily@"):
            self.kind = "daily"
            self.hour, self.minute = (int(x) for x in spec[6:].split(":"))
        elif spec.startswith("weekly@"):
            self.kind = "weekly"
            dow, hm = spec[7:].split(" ")
            self.dow = _DOW[dow.lower()]
            self.hour, self.minute = (int(x) for x in hm.split(":"))
        else:
            raise ValueError(f"bad schedule spec: {spec}")

    def due(self, now: datetime, last_run: Optional[float]) -> bool:
        if self.kind == "interval":
            return last_run is None or (now.timestamp() - last_run) >= self.interval
        # time-of-day jobs: due once the target moment has passed today/this
        # week and we haven't run since the previous occurrence.
        if now.hour < self.hour or (now.hour == self.hour and now.minute < self.minute):
            return False
        if self.kind == "weekly" and now.weekday() != self.dow:
            return False
        if last_run is None:
            return True
        last = datetime.fromtimestamp(last_run, timezone.utc)
        return last.date() != now.date()


class Job:
    def __init__(self, name: str, schedule: str,
                 fn: Callable[[Any, str], int], enabled: bool = True):
        self.name = name
        self.schedule = Schedule(schedule)
        self.fn = fn
        self.enabled = enabled


# ---------------------------------------------------------------- #
#  job implementations (reuse the already-tested modules)           #
# ---------------------------------------------------------------- #
def job_embed_missing(backend, ns: str) -> int:
    """Embed rows a connector inserted without a vector (save() embeds inline,
    so this is a backfill). No-op when no embedder is configured."""
    from .server import _e, encode_vec, decode_vec
    emb = backend.embedder
    if emb is None or getattr(emb, "kind", "none") == "none":
        return 0
    done = 0
    for k, v in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT 100000") or []:
        try:
            rec = json.loads(v) if v else {}
        except Exception:
            continue
        if rec.get("is_episode") or decode_vec(rec.get("emb")) or not rec.get("fact"):
            continue
        vec = emb.embed(rec["fact"])
        if not vec:
            continue
        rec["emb"] = encode_vec(vec)
        backend._exec(f"MEMORY PUT INTO {backend.memory} VALUES "
                      f"('{_e(ns)}','{_e(k)}','{_e(json.dumps(rec))}')")
        done += 1
    return done


def job_extract_entities(backend, ns: str) -> int:
    """Entity-extract (and graph-wire) rows that have no mention record yet.
    save() does this inline; this catches connector-inserted rows. Skipping
    already-mentioned keys keeps it idempotent (no mention_count inflation)."""
    from .server import _e
    seen = set()
    for r in backend._query(
            f"SELECT mem_value FROM __mem_{backend.mention_store} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT 500000") or []:
        try:
            seen.add(json.loads(r[0])["mem_key"])
        except Exception:
            pass
    es, g = backend._entities(ns), backend._graph(ns)
    done = 0
    for k, v in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT 100000") or []:
        if k in seen:
            continue
        try:
            rec = json.loads(v) if v else {}
        except Exception:
            continue
        if rec.get("is_episode"):
            continue
        # extract over whatever text field a connector wrote, not only `fact`
        text = " ".join(str(rec.get(f) or "") for f in
                        ("fact", "text", "subject", "snippet", "body"))
        if not text.strip():
            continue
        ts = rec.get("created") or rec.get("saved_at") or rec.get("ts")
        try:
            ts = float(ts)
        except (TypeError, ValueError):
            ts = time.time()
        # flush=False batches the entity writes for the whole job (one write
        # per entity at the end) instead of rewriting per mention.
        ext = es.process(k, text, ts, flush=False)
        if ext:
            g.add_edges_from_row(k, ext, text, ts)
        done += 1
    es.flush()
    g.flush()       # one write per unique edge (was per co-occurrence)
    return done


def job_salience(backend, ns: str) -> int:
    from . import salience
    return salience.recompute(backend, ns)


def job_profile(backend, ns: str) -> int:
    return len(backend.build_profile(ns))


def job_episodes(backend, ns: str) -> int:
    return len(backend.build_episodes(ns))


def job_decay(backend, ns: str) -> int:
    from . import decay
    res = decay.decay_pass(backend, ns)
    return res["archived"] + res["unarchived"]


JOBS: List[Job] = [
    Job("embed_missing",    "hourly",            job_embed_missing),
    Job("extract_entities", "hourly",            job_extract_entities),
    Job("salience",         "daily@03:00",       job_salience),
    Job("profile",          "daily@04:00",       job_profile),
    Job("decay",            "daily@05:00",       job_decay),
    Job("episodes",         "weekly@sun 02:00",  job_episodes),
]


# ---------------------------------------------------------------- #
#  runner                                                          #
# ---------------------------------------------------------------- #
def discover_namespaces(backend) -> List[str]:
    from .server import _to_str
    out = set()
    for r in backend._query(
            f"SELECT mem_namespace FROM __mem_{backend.memory} "
            f"LIMIT 1000000") or []:
        ns = _to_str(r[0])
        if ns:
            out.add(ns)
    return sorted(out)


def _state(backend, job: str) -> Optional[dict]:
    from .server import _e
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.job_runs_store} "
        f"WHERE mem_namespace = 'state' AND mem_key = '{_e(job)}'")
    if not rows or not rows[0] or not rows[0][0]:
        return None
    try:
        return json.loads(rows[0][0])
    except Exception:
        return None


def _record(backend, job: str, rec: dict, ts: float) -> None:
    from .server import _e
    backend._exec(f"MEMORY PUT INTO {backend.job_runs_store} VALUES "
                  f"('state','{_e(job)}','{_e(json.dumps(rec))}')")
    backend._exec(f"MEMORY PUT INTO {backend.job_runs_store} VALUES "
                  f"('audit','{_e(job)}:{int(ts)}','{_e(json.dumps(rec))}')")


def run_due(backend, *, now: Optional[datetime] = None,
            only: Optional[str] = None, force: bool = False) -> List[dict]:
    """Run every job that is due (or `only` when forced), over all namespaces.
    Each job is isolated: a failure is caught, recorded, and does not stop the
    others. Returns the run records."""
    now = now or datetime.now(timezone.utc)
    namespaces = discover_namespaces(backend)
    results: List[dict] = []
    for job in JOBS:
        if only and job.name != only:
            continue
        if not job.enabled:
            continue
        st = _state(backend, job.name)
        last_run = (st or {}).get("last_run")
        # A job whose last run errored is due again on the next tick — a
        # failure must not count as "ran this period" (otherwise a daily job
        # that failed sits idle until tomorrow). It retries until it succeeds.
        last_failed = bool(st and st.get("last_status") == "error")
        if not force and not last_failed and not job.schedule.due(now, last_run):
            continue
        start = time.time()
        rows, errors, errmsg = 0, 0, None
        for ns in namespaces:
            try:
                rows += int(job.fn(backend, ns) or 0)
            except Exception as exc:           # isolate per-namespace failure
                errors += 1
                errmsg = f"{type(exc).__name__}: {exc}"
        rec = {"job": job.name, "last_run": start,
               "last_status": "ok" if errors == 0 else "error",
               "last_rows": rows, "namespaces": len(namespaces),
               "errors": errors, "last_error": errmsg,
               "last_duration": round(time.time() - start, 3)}
        _record(backend, job.name, rec, start)
        results.append(rec)
    return results


def status(backend) -> List[dict]:
    return [s for s in (_state(backend, j.name) for j in JOBS) if s]


def failure_ratio(backend, limit_per_job: int = 1000) -> float:
    """Audit-log failure ratio across all recorded runs (the eval-gate metric)."""
    from .server import _e
    total = bad = 0
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.job_runs_store} "
        f"WHERE mem_namespace = 'audit' LIMIT 1000000") or []
    for r in rows:
        try:
            rec = json.loads(r[0])
        except Exception:
            continue
        total += 1
        if rec.get("last_status") != "ok":
            bad += 1
    return (bad / total) if total else 0.0


def run_forever(backend, *, tick: float = 60.0) -> None:
    print(f"[scheduler] started; {len(JOBS)} jobs, tick {tick:.0f}s",
          file=sys.stderr, flush=True)
    while True:
        try:
            ran = run_due(backend)
            for r in ran:
                print(f"[scheduler] {r['job']}: {r['last_status']} "
                      f"rows={r['last_rows']} ns={r['namespaces']} "
                      f"{r['last_duration']}s", file=sys.stderr, flush=True)
        except Exception as exc:
            print(f"[scheduler] tick error: {exc}", file=sys.stderr, flush=True)
        time.sleep(tick)


# ---------------------------------------------------------------- #
#  CLI                                                             #
# ---------------------------------------------------------------- #
def _backend(prefix: str):
    from .server import MemoryBackend
    from .embeddings import provider_from_env
    return MemoryBackend(
        os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        int(os.environ.get("EVOSQL_PORT", "5433")),
        os.environ.get("EVOSQL_USER", "admin"),
        os.environ.get("EVOSQL_PASSWORD", "admin"),
        os.environ.get("EVOSQL_DATABASE", "evosql"),
        prefix, embedder=provider_from_env())


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("mode", choices=["run", "once", "status"])
    ap.add_argument("--prefix", default=os.environ.get("MCP_STORE_PREFIX", "mcp"))
    ap.add_argument("--job", default=None, help="Only this job.")
    ap.add_argument("--force", action="store_true", help="Ignore the schedule.")
    ap.add_argument("--tick", type=float, default=60.0)
    args = ap.parse_args()
    b = _backend(args.prefix)

    if args.mode == "status":
        for s in status(b):
            ts = datetime.fromtimestamp(s["last_run"], timezone.utc).isoformat()
            print(f"  {s['job']:<16} {s['last_status']:<6} rows={s['last_rows']} "
                  f"errors={s.get('errors', 0)} {s['last_duration']}s  @ {ts}")
        print(f"  failure ratio: {failure_ratio(b)*100:.2f}%")
        return 0
    if args.mode == "once":
        ran = run_due(b, only=args.job, force=args.force)
        for r in ran:
            print(f"  {r['job']}: {r['last_status']} rows={r['last_rows']} "
                  f"ns={r['namespaces']} errors={r['errors']} {r['last_duration']}s")
        if not ran:
            print("  no jobs due")
        return 0
    run_forever(b, tick=args.tick)
    return 0


if __name__ == "__main__":
    sys.exit(main())
