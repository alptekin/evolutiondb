"""
scheduler — sleep-time compute scheduler (Step 18).

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
        # Keep the PUT statement under the engine's ~8 KB per-statement cap. A
        # handful of records have a body that, once the packed embedding and SQL
        # escaping are added, pushes the statement over — and a single oversized
        # PUT drops the connection and aborts the whole pass (rows=0). Truncate
        # the STORED fact for just those records; the embedding was already
        # computed from the full fact above, so semantic recall is preserved.
        def _stmt_len(r):
            return len(_e(json.dumps(r))) + len(_e(ns)) + len(_e(k)) + 64
        if _stmt_len(rec) > 7600:
            f = rec.get("fact", "")
            while _stmt_len(rec) > 7600 and len(f) > 200:
                f = f[: max(200, int(len(f) * 0.85))]
                rec["fact"] = f + " …[truncated]"
            if _stmt_len(rec) > 7600:
                continue  # still too big (pathological) — skip rather than break
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
    from . import decay, consolidation
    # Conservative forgetting brake (roadmap step 38): default-off; when
    # EVOSQL_FORGET_GATE is on and the last verdict says forgetting is running
    # away, skip the decay pass so it doesn't keep burying memory unattended.
    if not consolidation.decay_gate_open(backend):
        return 0
    res = decay.decay_pass(backend, ns)
    return res["archived"] + res["unarchived"]


def job_consolidation_health(backend, ns: str) -> int:
    """Consolidation health-gate + forgetting detector (roadmap step 38):
    snapshot the namespace, flag runaway forgetting / stalled abstraction
    against the recorded trend, record under job_runs. Returns unhealthy count."""
    from . import consolidation
    return consolidation.job_consolidation_health(backend, ns)


def job_tms(backend, ns: str) -> int:
    """Truth-maintenance: Type-II dependent retraction (roadmap step 39).
    Re-adjudicate the derived_from closure of retracted facts, marking rows that
    have lost all support 'unsupported'. No-op unless EVOSQL_TMS is enabled."""
    from . import tms
    return tms.job_tms(backend, ns)


def job_calibration(backend, ns: str) -> int:
    """Confidence calibration study (roadmap step 40): bin predicted source
    confidence against observed usage, score ECE/MCE, fit the calibrator, record
    under job_runs. Returns the count of labelled pairs (0 without feedback)."""
    from . import calibration
    return calibration.job_calibration(backend, ns)


def job_health(backend, ns: str) -> int:
    """Audit the derived stores' integrity (rows present vs rows that decode)
    and record it under job_runs. Returns the count of unhealthy stores."""
    from . import health
    return health.job_health(backend, ns)


def job_semanticize(backend, ns: str) -> int:
    """Episodic -> semantic abstraction: distill timeless generalizations across
    clusters of rows (opt-in LLM). No-op without EVOSQL_SEMANTIC_LLM."""
    from . import semanticize
    return semanticize.semanticize(backend, ns)


def job_intentions(backend, ns: str) -> int:
    """Prospective memory: fire time-based intentions whose due time has passed."""
    due = backend.due_intentions(ns)
    for it in due:
        backend.fire_intention(ns, it["key"])
    return len(due)


def job_open_loops(backend, ns: str) -> int:
    """Assistant: track open commitments — threads whose last message is inbound
    and unanswered ('who is waiting on me'). Deterministic, LLM-free."""
    from . import open_loops
    return open_loops.job_open_loops(backend, ns)


def job_self_model(backend, ns: str) -> int:
    """Assistant: synthesize the structured 'about me' dossier from the
    high-signal derived stores (+ open loops). Runs AFTER open_loops so its
    commitments section is fresh; its team list feeds the next open_loops run."""
    from . import self_model
    return self_model.job_self_model(backend, ns)


def job_retention(backend, ns: str) -> int:
    """Phase-3 governance: TTL hard-delete over the primary store. No-op
    unless EVOSQL_RETENTION_DAYS is set (the default)."""
    from . import retention
    return retention.job_retention(backend, ns)


def job_audit_prune(backend, ns: str) -> int:
    """Phase-3 governance: bound the per-namespace tool-audit trail."""
    from . import audit
    return audit.prune(backend, ns)


def job_rules(backend, ns: str) -> int:
    """Phase-4 automation: evaluate the user's rules — queue drafts for
    approval, never send. Inherently opt-in (no enabled rules -> no-op)."""
    from . import rules
    return rules.job_rules(backend, ns)


def job_brief_delivery(backend, ns: str) -> int:
    """Hermes-inspired: deliver the morning brief to the user's OWN address so
    they see what's on their plate without opening the host. Opt-in via
    EVOSQL_BRIEF_DELIVERY='channel:recipient' (e.g. 'gmail:me@example.com').

    Queues the brief as an outbox draft addressed to self (stable key, so a
    re-run upserts one pending brief, never a pile). The recipient IS the user,
    so ADR-004's 'a human approves before it reaches others' has no third party
    to protect — EVOSQL_BRIEF_AUTOSEND=1 lets the scheduler approve it for true
    unattended delivery, still bounded by the normal send gate (nothing leaves
    unless EVOSQL_SEND_ENABLED + a transport for the channel are wired)."""
    spec = (os.environ.get("EVOSQL_BRIEF_DELIVERY") or "").strip()
    if not spec or ":" not in spec:
        return 0
    channel, _, recipient = spec.partition(":")
    channel, recipient = channel.strip(), recipient.strip()
    if not channel or not recipient:
        return 0
    from . import brief, prefs, outbox
    data = brief.collect(backend, ns)
    lang, _was = prefs.get_language(backend, ns)
    text = brief.render(data, name=ns.split("_")[0], lang=lang)
    item = outbox.queue(backend, ns, "brief_delivery", text,
                        channel=channel, source=channel, to=recipient,
                        to_email=(recipient if "@" in recipient else None),
                        subject="Your daily brief")
    if (os.environ.get("EVOSQL_BRIEF_AUTOSEND") or "").strip().lower() in (
            "1", "true", "yes", "on"):
        res = outbox.approve_send(backend, ns, item["id"], approver="scheduler")
        return 1 if res.get("sent") else 0
    return 1


def job_outbox_flush(backend, ns: str) -> int:
    """Assistant action loop: deliver outbox replies whose undo window has
    elapsed (approve_send with EVOSQL_SEND_UNDO_SECONDS schedules instead of
    sending immediately). Frequent + cheap; a no-op when nothing is due."""
    from . import outbox
    return len(outbox.flush_scheduled(backend, ns))


JOBS: List[Job] = [
    Job("embed_missing",    "hourly",            job_embed_missing),
    Job("extract_entities", "hourly",            job_extract_entities),
    Job("salience",         "daily@03:00",       job_salience),
    Job("profile",          "daily@04:00",       job_profile),
    Job("decay",            "daily@05:00",       job_decay),
    Job("episodes",         "weekly@sun 02:00",  job_episodes),
    Job("health",           "daily@06:00",       job_health),
    Job("semanticize",      "daily@06:30",       job_semanticize),
    Job("consolidation",    "daily@06:45",       job_consolidation_health),
    Job("tms",              "daily@07:00",       job_tms),
    Job("calibration",      "daily@07:15",       job_calibration),
    Job("intentions",       "every:300",         job_intentions),
    # assistant layer — open_loops BEFORE self_model so the dossier sees fresh
    # commitments; self_model's team list feeds the next open_loops run.
    Job("open_loops",       "every:1800",        job_open_loops),
    Job("self_model",       "daily@05:30",       job_self_model),
    # action loop: deliver scheduled sends past their undo window, frequently.
    Job("outbox_flush",     "every:30",          job_outbox_flush),
    # governance (Phase 3): retention is a no-op without EVOSQL_RETENTION_DAYS;
    # audit pruning bounds the tool-audit trail per namespace.
    Job("retention",        "daily@05:45",       job_retention),
    Job("audit_prune",      "daily@06:15",       job_audit_prune),
    # automation (Phase 4): rules queue drafts for approval; no rules = no-op.
    # Hourly, AFTER the half-hourly open_loops refresh so ages are current.
    Job("rules",            "hourly",            job_rules),
    # morning brief delivery to self (no-op unless EVOSQL_BRIEF_DELIVERY set).
    Job("brief_delivery",   "daily@07:30",       job_brief_delivery),
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


AUDIT_KEEP_PER_JOB = 200   # bound the per-run audit history per job


def _prune_audit(backend, job: str, keep: int = AUDIT_KEEP_PER_JOB) -> None:
    """Keep only the most recent `keep` audit rows for `job`. _record writes one
    audit:{job}:{ts} row every run (every 30s for outbox_flush), which would
    otherwise grow without bound and force failure_ratio into an ever-larger
    full scan. The 'audit' namespace is owned solely by the scheduler, so this
    is safe. Best-effort — a prune failure must not break the run record."""
    from .server import _e
    try:
        rows = backend._query(
            f"SELECT mem_key FROM __mem_{backend.job_runs_store} "
            f"WHERE mem_namespace = 'audit' LIMIT 1000000") or []
    except Exception:
        return
    pfx = f"{job}:"
    mine = []
    for r in rows:
        k = str(r[0])
        if k.startswith(pfx):
            suf = k[len(pfx):]
            if suf.isdigit():
                mine.append((int(suf), k))
    if len(mine) <= keep:
        return
    mine.sort()   # oldest ts first
    for _, k in mine[:len(mine) - keep]:
        try:
            # engine grammar wants literal NS/KEY tokens (evoparser.y:2350) —
            # the old mem_namespace/mem_key form was a silent parse error, so
            # audit rows were never actually pruned against a real engine.
            backend._exec(
                f"MEMORY DELETE FROM {backend.job_runs_store} "
                f"WHERE NS = 'audit' AND KEY = '{_e(k)}'")
        except Exception:
            pass


def _record(backend, job: str, rec: dict, ts: float) -> None:
    from .server import _e
    backend._exec(f"MEMORY PUT INTO {backend.job_runs_store} VALUES "
                  f"('state','{_e(job)}','{_e(json.dumps(rec))}')")
    backend._exec(f"MEMORY PUT INTO {backend.job_runs_store} VALUES "
                  f"('audit','{_e(job)}:{int(ts)}','{_e(json.dumps(rec))}')")
    _prune_audit(backend, job)


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


# ---------------------------------------------------------------- #
#  multi-tenant orchestration                                      #
# ---------------------------------------------------------------- #
def discover_tenants(admin_backend) -> List[dict]:
    """Active tenants from the control-plane registry (read on the admin
    backend). Empty list when none provisioned."""
    from . import tenancy
    return [t for t in tenancy.Registry(admin_backend).list_tenants()
            if t.get("status", "active") == "active"]


def _tenant_backend(meta: dict):
    """A MemoryBackend connected as the tenant's DB user, USE'd into its
    database, with its store prefix — so run_due writes the tenant's job state
    into the TENANT's own database (engine-isolated), never the control DB."""
    from .server import MemoryBackend
    from .embeddings import provider_from_env
    from . import tenancy
    tid = meta["tenant_id"]
    ident = tenancy.for_tenant(tid, tid, ("admin",))
    return MemoryBackend(
        os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        int(os.environ.get("EVOSQL_PORT", "5433")),
        ident.db_user, ident.db_password, ident.db_name, ident.prefix,
        embedder=provider_from_env(),
        use_database=ident.db_name if ident.issue_use else None)


def run_due_all(admin_backend, *, now: Optional[datetime] = None,
                only: Optional[str] = None, force: bool = False,
                tenant_backends: Optional[Dict[str, Any]] = None
                ) -> Dict[str, List[dict]]:
    """Run due jobs for EVERY tenant when multi-tenant is enabled, else just for
    the given (default/admin) backend. Returns {tenant_id|'default': records}.
    Each tenant's jobs run in its own engine-isolated database. A pre-built
    ``tenant_backends`` dict is reused as a per-tenant connection cache across
    ticks. One tenant's failure is isolated and never stops the others."""
    from . import tenancy
    if not tenancy.multitenant_enabled():
        return {"default": run_due(admin_backend, now=now, only=only, force=force)}
    cache = tenant_backends if tenant_backends is not None else {}
    out: Dict[str, List[dict]] = {}
    for meta in discover_tenants(admin_backend):
        tid = meta["tenant_id"]
        try:
            b = cache.get(tid)
            if b is None:
                b = _tenant_backend(meta)
                cache[tid] = b
            out[tid] = run_due(b, now=now, only=only, force=force)
        except Exception as exc:           # isolate per-tenant failure
            print(f"[scheduler] tenant {tid} tick error: {exc}",
                  file=sys.stderr, flush=True)
            out[tid] = []
            cache.pop(tid, None)           # drop poisoned backend; rebuilt next tick
    return out


def run_forever(backend, *, tick: float = 60.0) -> None:
    from . import tenancy
    multi = tenancy.multitenant_enabled()
    print(f"[scheduler] started; {len(JOBS)} jobs, tick {tick:.0f}s, "
          f"mode={'multi-tenant' if multi else 'single'}",
          file=sys.stderr, flush=True)
    cache: Dict[str, Any] = {}
    while True:
        try:
            by_tenant = run_due_all(backend, tenant_backends=cache)
            for tid, ran in by_tenant.items():
                for r in ran:
                    print(f"[scheduler] [{tid}] {r['job']}: {r['last_status']} "
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

    from . import tenancy
    multi = tenancy.multitenant_enabled()

    def _print_status(label, be):
        if label:
            print(f"[{label}]")
        for s in status(be):
            ts = datetime.fromtimestamp(s["last_run"], timezone.utc).isoformat()
            print(f"  {s['job']:<16} {s['last_status']:<6} rows={s['last_rows']} "
                  f"errors={s.get('errors', 0)} {s['last_duration']}s  @ {ts}")
        print(f"  failure ratio: {failure_ratio(be)*100:.2f}%")

    if args.mode == "status":
        if multi:
            for meta in discover_tenants(b):
                _print_status(meta["tenant_id"], _tenant_backend(meta))
        else:
            _print_status("", b)
        return 0
    if args.mode == "once":
        by_tenant = run_due_all(b, only=args.job, force=args.force)
        any_ran = False
        for tid, ran in by_tenant.items():
            for r in ran:
                any_ran = True
                tag = "" if tid == "default" else f"[{tid}] "
                print(f"  {tag}{r['job']}: {r['last_status']} rows={r['last_rows']} "
                      f"ns={r['namespaces']} errors={r['errors']} {r['last_duration']}s")
        if not any_ran:
            print("  no jobs due")
        return 0
    run_forever(b, tick=args.tick)
    return 0


if __name__ == "__main__":
    sys.exit(main())
