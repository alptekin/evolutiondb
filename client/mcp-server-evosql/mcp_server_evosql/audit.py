"""
audit — tenant-scoped, append-only audit of mutating tool calls (Phase 3).

One small row per invocation of a mutating tool (the ``_MUTATING_TOOLS`` set),
written into the TENANT's own ``{prefix}_audit`` store — so the trail inherits
the engine's per-tenant DB isolation, and dropping a tenant erases its audit
with it. The outbox already records each item's lifecycle and the scheduler
its job runs; this layer adds the missing dimension: WHO (tenant/user/roles)
invoked WHICH mutating tool WHEN, with WHAT outcome — including RBAC denials
and exceptions, which previously left no tenant-visible trace.

Privacy: the record stores an explicit per-tool WHITELIST of identifiers and
lengths only — never message bodies, fact text, query text, or recipient
addresses. Writes are best-effort: an audit failure must never break the tool.
"""
from __future__ import annotations

import itertools
import json
import time
from typing import Any, Dict, List, Optional

AUDIT_KEEP_PER_NS = 1000        # prune bound, enforced by the scheduler job

# Key suffix: a process-monotonic counter, so rows written within the same
# millisecond still sort in insertion order (the key is the sort key).
_SEQ = itertools.count()

# Per-tool argument whitelist: identifiers + sizes only, no content/PII.
_ARG_FIELDS = {
    "save_memory":    lambda a: {"tags": a.get("tags"),
                                 "fact_len": len(a.get("fact") or ""),
                                 "derived_from_count":
                                     len(a.get("derived_from") or [])},
    "forget":         lambda a: {"key": a.get("key")},
    "restore_memory": lambda a: {"key": a.get("key")},
    "set_language":   lambda a: {"language": a.get("language")},
    "feedback":       lambda a: {"query_id": a.get("query_id"),
                                 "used_count": len(a.get("used_keys") or []),
                                 "unused_count": len(a.get("unused_keys") or []),
                                 "rating": a.get("rating")},
    "queue_reply":    lambda a: {"loop_key": a.get("loop_key"),
                                 "body_len": len(a.get("body") or ""),
                                 "has_to": bool(a.get("to"))},
    "approve_send":   lambda a: {"item_id": a.get("item_id")},
    "reject_reply":   lambda a: {"item_id": a.get("item_id")},
    "send_scheduled": lambda a: {},
    "review_pr":      lambda a: {"pr": a.get("pr"),
                                 "diff_len": len(a.get("diff") or "")},
}


def _keep(v: Any) -> bool:
    """Drop empty/absent values (None/False/''/[]) but keep a genuine 0."""
    return not (v is None or v is False or v == "" or v == [])


def _summarize_args(tool: str, args: Optional[Dict[str, Any]]) -> Dict[str, Any]:
    fn = _ARG_FIELDS.get(tool)
    if fn is None or not isinstance(args, dict):
        return {}
    try:
        return {k: v for k, v in fn(args).items() if _keep(v)}
    except Exception:
        return {}


def _summarize_result(result: Any) -> Dict[str, Any]:
    """Tiny outcome facts only (ids/flags), never content."""
    if not isinstance(result, dict):
        return {}
    out: Dict[str, Any] = {}
    for k in ("key", "id", "pr", "day"):
        if result.get(k) is not None:
            out[k] = result[k]
    for k in ("sent", "dry_run", "queued", "delivered"):
        if k in result:
            out[k] = bool(result[k])
    return out


def record(backend, ident, tool: str, outcome: str, *,
           args: Optional[Dict[str, Any]] = None,
           result: Any = None,
           duration_ms: Optional[int] = None,
           ref: Optional[str] = None) -> None:
    """Append one audit row. Best-effort by contract — callers wrap it, and it
    also swallows internally, so the hot path is one PUT that cannot fail the
    tool call."""
    from .server import _e
    rec: Dict[str, Any] = {
        "ts": time.time(),
        "tenant": getattr(ident, "tenant_id", ""),
        "user": getattr(ident, "user_id", ""),
        "roles": list(getattr(ident, "roles", ()) or ()),
        "tool": tool,
        "outcome": outcome,            # ok | error | denied | exception
        "args": _summarize_args(tool, args),
    }
    if result is not None:
        rs = _summarize_result(result)
        if rs:
            rec["result"] = rs
    if duration_ms is not None:
        rec["duration_ms"] = int(duration_ms)
    if ref:
        rec["ref"] = ref
    key = f"audit_{int(rec['ts'] * 1000)}_{next(_SEQ):08d}"
    try:
        backend._exec(
            f"MEMORY PUT INTO {backend.audit_store} VALUES "
            f"('{_e(ident.user_id)}','{key}','{_e(json.dumps(rec))}')")
    except Exception:
        pass


def trail(backend, ns: str, limit: int = 50) -> List[Dict[str, Any]]:
    """The newest audit rows for a namespace (read-only projection)."""
    from .server import _e
    try:
        rows = backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.audit_store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []
    except Exception:
        return []
    out = []
    for r in rows:
        try:
            out.append((str(r[0]), json.loads(r[1])))
        except Exception:
            continue
    out.sort(key=lambda kv: kv[0], reverse=True)   # key embeds the ms timestamp
    return [rec for _, rec in out[:max(1, int(limit))]]


def prune(backend, ns: str, keep: int = AUDIT_KEEP_PER_NS) -> int:
    """Keep only the newest ``keep`` audit rows per namespace. Engine deletes
    are exact-key only, so this enumerates and loops (the scheduler's bounded-
    audit pattern). Returns the number of rows deleted."""
    from .server import _e, _valid_key
    try:
        rows = backend._query(
            f"SELECT mem_key FROM __mem_{backend.audit_store} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT 1000000") or []
    except Exception:
        return 0
    keys = sorted(str(r[0]) for r in rows
                  if str(r[0]).startswith("audit_"))
    excess = keys[:-keep] if len(keys) > keep else []
    deleted = 0
    for k in excess:
        if not _valid_key(k):
            continue
        try:
            # engine grammar: literal NS/KEY tokens (evoparser.y:2350)
            backend._exec(
                f"MEMORY DELETE FROM {backend.audit_store} "
                f"WHERE NS = '{_e(ns)}' AND KEY = '{_e(k)}'")
            deleted += 1
        except Exception:
            continue
    return deleted
