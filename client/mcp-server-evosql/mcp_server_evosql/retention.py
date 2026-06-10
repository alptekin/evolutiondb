"""
retention — TTL hard-delete for the primary memory store (Phase 3).

OFF by default: the job is a no-op unless ``EVOSQL_RETENTION_DAYS`` is set.

This is the FIRST destructive consumer in a deliberately delete-free
architecture (decay archives, TMS flips validity, reconsolidate keeps old
versions), so eligibility is conservative — a row is deleted only when ALL of:

  * its age exceeds the TTL (age = last access from the access store, falling
    back to the row's own timestamp; an unparsable timestamp means SKIP, never
    "infinitely old" — mirroring decay);
  * it has already faded out of life: ``archived`` (decay's signal) or its
    validity status is closed (stale/retracted/unsupported/superseded);
  * NOTHING references it: it appears in no other record's derived_from/
    provenance (TMS support, across mem/semantic/skills/episodes), no episode's
    source_row_keys/summary_key, and no validity record's chain lists
    (supersedes/superseded_by/unsupported_by) — deleting a referenced row would
    break evidence chains, episode drill-down, and reconsolidate's version walk;
  * it is not itself derived knowledge (``synthesized``/``is_episode``) and not
    a connector watermark/state row.

For each deleted key the sweep first writes a ``retracted`` validity record —
physical absence is invisible to TMS, an explicit retraction is not — then
removes the same-key sidecar rows (access/salience/emb2/gist) so nothing is
orphaned. Engine deletes are exact-key only; each delete is one statement,
best-effort, so one bad row never aborts the sweep.
"""
from __future__ import annotations

import json
import os
import time
from datetime import datetime, timezone
from typing import Any, Dict, Optional, Set

CLOSED_STATUSES = ("stale", "retracted", "unsupported", "superseded")
_WATERMARK_MARK = "_state_"          # connector sync watermarks (never delete)

# Connector rows lack the server's epoch `created`; decay._row_ts covers some
# fields, these ISO-or-epoch extras cover the rest (per inspector._TS_FIELDS).
_EXTRA_TS_FIELDS = ("created_at", "sent_at", "modified_at", "updated_at", "start")


def _parse_ts(val: Any) -> float:
    if isinstance(val, (int, float)):
        return float(val)
    try:
        dt = datetime.fromisoformat(str(val).replace("Z", "+00:00"))
        if dt.tzinfo is None:
            dt = dt.replace(tzinfo=timezone.utc)
        return dt.timestamp()
    except Exception:
        return 0.0


def _ts_of(rec: Dict[str, Any]) -> float:
    """The row's own timestamp: decay's parser first, then connector fields.
    0.0 = unparsable (the caller must SKIP such rows, not treat them as old)."""
    from . import decay
    ts = decay._row_ts(rec)
    if ts:
        return ts
    for f in _EXTRA_TS_FIELDS:
        if rec.get(f):
            ts = _parse_ts(rec[f])
            if ts:
                return ts
    return 0.0


def referenced_keys(backend, ns: str) -> Set[str]:
    """Every key some other record points at — the union of (A) TMS provenance
    across the four derived-knowledge stores, (B) episode source/summary keys,
    (C) validity chain links. Computed fresh per run (episode/semanticize jobs
    mint new references weekly)."""
    from . import tms
    refs: Set[str] = set()
    # (A) provenance / derived_from across mem, semantic, skills, episodes
    try:
        support = tms.build_support_index(tms._all_rows(backend, ns))
        for sources in support.values():
            refs.update(sources)
    except Exception:
        pass
    # (B) episode records: source_row_keys + summary_key
    try:
        for r in backend._query(
                f"SELECT mem_value FROM __mem_{backend.episodes_store} "
                f"WHERE mem_namespace = '{_e_(ns)}'") or []:
            try:
                rec = json.loads(r[0])
            except Exception:
                continue
            refs.update(rec.get("source_row_keys") or [])
            if rec.get("summary_key"):
                refs.add(rec["summary_key"])
    except Exception:
        pass
    # (C) validity chains: any key linked from a validity record
    try:
        for r in backend._query(
                f"SELECT mem_key, mem_value FROM __mem_{backend.validity_store} "
                f"WHERE mem_namespace = '{_e_(ns)}'") or []:
            try:
                rec = json.loads(r[1])
            except Exception:
                continue
            for f in ("supersedes", "superseded_by", "unsupported_by"):
                refs.update(rec.get(f) or [])
    except Exception:
        pass
    return refs


def _e_(s):
    from .server import _e
    return _e(s)


def _delete_row(backend, store: str, ns: str, key: str) -> bool:
    """One exact-key engine delete (literal NS/KEY tokens — evoparser.y:2350).
    Best-effort; missing store (42704) and any other failure are non-fatal."""
    from .server import _e, _valid_key
    if not _valid_key(key):
        return False
    try:
        backend._exec(f"MEMORY DELETE FROM {store} "
                      f"WHERE NS = '{_e(ns)}' AND KEY = '{_e(key)}'")
        return True
    except Exception:
        return False


def sweep(backend, ns: str, *, ttl_days: float,
          dry_run: bool = False) -> Dict[str, int]:
    """One retention pass over the primary store. Returns counters."""
    from . import decay
    now = time.time()
    cutoff = now - float(ttl_days) * 86400.0

    rows = backend._query(
        f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e_(ns)}' LIMIT 1000000") or []
    if not rows:
        return {"scanned": 0, "deleted": 0, "skipped": 0}

    refs = referenced_keys(backend, ns)
    keys = [str(r[0]) for r in rows]
    validity = backend._validity_map(ns, keys) or {}
    access = {}
    try:
        access = decay._access_map(backend, ns) or {}
    except Exception:
        pass

    counters = {"scanned": len(rows), "deleted": 0, "skipped": 0}
    for r in rows:
        key = str(r[0])
        try:
            rec = json.loads(r[1])
        except Exception:
            counters["skipped"] += 1
            continue
        v = validity.get(key) or {}
        status = v.get("status")

        # ---- eligibility (every rule must hold) ----
        faded = bool(rec.get("archived")) or status in CLOSED_STATUSES
        ts = _ts_of(rec)
        last_seen = max(float(access.get(key) or 0.0), ts)
        if (not faded
                or key in refs
                or rec.get("synthesized") or rec.get("is_episode")
                or _WATERMARK_MARK in key
                or last_seen <= 0.0          # unparsable age -> never delete
                or last_seen > cutoff):
            counters["skipped"] += 1
            continue

        if dry_run:
            counters["deleted"] += 1
            continue
        # retract FIRST: physical absence is invisible to TMS; an explicit
        # retraction propagates to dependents on the next tms pass.
        try:
            backend._set_validity(ns, key, status="retracted")
        except Exception:
            pass
        if not _delete_row(backend, backend.memory, ns, key):
            counters["skipped"] += 1
            continue
        for store in (backend.access_store, backend.salience_store,
                      backend.emb2_store, backend.gist_store):
            _delete_row(backend, store, ns, key)
        counters["deleted"] += 1
    return counters


def ttl_days() -> Optional[float]:
    """The configured TTL, or None when retention is disabled (the default)."""
    raw = (os.environ.get("EVOSQL_RETENTION_DAYS") or "").strip()
    if not raw:
        return None
    try:
        days = float(raw)
    except ValueError:
        return None
    return days if days > 0 else None


def job_retention(backend, ns: str) -> int:
    """Scheduler entrypoint: no-op unless EVOSQL_RETENTION_DAYS is set."""
    days = ttl_days()
    if days is None:
        return 0
    return sweep(backend, ns, ttl_days=days)["deleted"]
