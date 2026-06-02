"""
health — derived-store integrity audit (roadmap step 1).

The derived layers (entities, graph edges, salience, mentions, episodes,
profile, ...) are rebuilt from the primary memory by the scheduler. A storage
fault once left several of them with their rows physically present but every
column reading back empty, which silently turned the retrieval boosts into
no-ops. This module audits each derived store — rows present vs rows that
actually decode — so that class of regression is caught and recorded in
`job_runs` instead of failing silently.

Pure evaluation (`eval_rows`) is separated from the I/O so it is unit-testable
without a server.
"""
from __future__ import annotations

import json
from typing import Any, Dict, List, Optional, Tuple


def _readable(value: Any) -> bool:
    """A row's value is readable if it is non-empty and decodes to JSON
    (dicts come back already-parsed; strings must parse)."""
    if value is None or value == "":
        return False
    if isinstance(value, dict):
        return True
    try:
        json.loads(value)
        return True
    except Exception:
        return False


def eval_rows(rows: List[Tuple[Any, Any]]) -> Dict[str, Any]:
    """Summarise (mem_key, mem_value) rows into a health record. An empty store
    is healthy; a store with rows whose values do not decode is NOT."""
    total = len(rows)
    readable = sum(1 for r in rows
                   if r and len(r) >= 2 and _readable(r[1]))
    return {
        "rows": total,
        "readable": readable,
        "ok": total == 0 or readable == total,
    }


def derived_stores(backend) -> List[Tuple[str, str]]:
    """(label, store-name) for every derived/side store on the backend.
    emb2 is included only when a second embedder is configured."""
    stores = [
        ("entities",       backend.entity_store),
        ("mentions",       backend.mention_store),
        ("graph_edges",    backend.graph_store),
        ("salience",       backend.salience_store),
        ("episodes",       backend.episodes_store),
        ("profile",        backend.profile_store),
        ("access",         backend.access_store),
        ("feedback",       backend.feedback_store),
    ]
    emb2 = getattr(backend, "embedder2", None)
    if emb2 is not None and getattr(emb2, "kind", "none") != "none":
        stores.append(("emb2", backend.emb2_store))
    return stores


def store_health(backend, ns: Optional[str] = None,
                 limit: int = 200000) -> Dict[str, Dict[str, Any]]:
    """Audit every derived store. When `ns` is given, scope to that namespace
    (the side stores are keyed by user_id); otherwise audit across namespaces."""
    from .server import _e
    report: Dict[str, Dict[str, Any]] = {}
    for label, store in derived_stores(backend):
        where = f"WHERE mem_namespace = '{_e(ns)}'" if ns else ""
        try:
            rows = backend._query(
                f"SELECT mem_key, mem_value FROM __mem_{store} "
                f"{where} LIMIT {limit}") or []
            report[label] = eval_rows(rows)
        except Exception as exc:
            report[label] = {"rows": 0, "readable": 0, "ok": False,
                             "error": f"{type(exc).__name__}: {exc}"}
    return report


def job_health(backend, ns: str) -> int:
    """Scheduler job: audit the derived stores for `ns`, record the report under
    job_runs ('health' namespace), and return the number of UNHEALTHY stores
    (0 = all good)."""
    from .server import _e
    rep = store_health(backend, ns)
    unhealthy = sum(1 for v in rep.values() if not v.get("ok"))
    try:
        backend._exec(
            f"MEMORY PUT INTO {backend.job_runs_store} VALUES "
            f"('health','{_e(ns)}','{_e(json.dumps(rep))}')")
    except Exception:
        pass
    return unhealthy
