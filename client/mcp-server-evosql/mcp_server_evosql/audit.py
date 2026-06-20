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

import hashlib
import itertools
import json
import threading
import time
from typing import Any, Dict, List, Optional

AUDIT_KEEP_PER_NS = 1000        # prune bound, enforced by the scheduler job

# Key suffix: a process-monotonic counter, so rows written within the same
# millisecond still sort in insertion order (the key is the sort key).
_SEQ = itertools.count()

# Tamper-evidence: each row carries prev = the previous row's hash and
# hash = sha256(prev + the row's content). Editing a row changes its hash;
# deleting/reordering breaks a prev->hash link. verify_chain() detects both.
# The chain is per (store, namespace); the head hash per chain is cached for
# this process and seeded from the last stored row so it survives a restart.
_GENESIS = "0" * 64
_CHAIN: Dict[str, str] = {}
_CHAIN_LOCK = threading.Lock()


def _chain_key(store: str, ns: str) -> str:
    return f"{store}\x1f{ns}"


def _content_hash(prev: str, rec: Dict[str, Any]) -> str:
    """Link hash for a row: covers the row's content (everything except the
    chain fields) plus the previous row's hash, so any edit changes it."""
    body = {k: v for k, v in rec.items() if k not in ("prev", "hash")}
    payload = prev + json.dumps(body, sort_keys=True, separators=(",", ":"))
    return hashlib.sha256(payload.encode("utf-8")).hexdigest()

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
    "create_template": lambda a: {"name": a.get("name"),
                                  "body_len": len(a.get("body") or ""),
                                  "channel": a.get("channel")},
    "apply_template":  lambda a: {"name": a.get("name"),
                                  "loop_key": a.get("loop_key"),
                                  "has_to": bool(a.get("to")),
                                  "var_count": len(a.get("variables") or {})},
    "delete_template": lambda a: {"name": a.get("name")},
    "create_rule":     lambda a: {"name": a.get("name"),
                                  "template": a.get("template"),
                                  "direction": a.get("direction"),
                                  "min_age_days": a.get("min_age_days"),
                                  "source": a.get("source")},
    "delete_rule":     lambda a: {"name": a.get("name")},
    "run_rules":       lambda a: {"dry_run": bool(a.get("dry_run"))},
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


def _identity_fields(ident) -> Dict[str, Any]:
    """The who-columns every row carries — identifiers only, never secrets."""
    return {
        "tenant": getattr(ident, "tenant_id", ""),
        "user": getattr(ident, "user_id", ""),
        "roles": list(getattr(ident, "roles", ()) or ()),
    }


def _last_stored_hash(backend, ns: str) -> str:
    """Hash of the newest already-stored row for ns, to continue the chain
    across a process restart; genesis if there are none."""
    try:
        recent = trail(backend, ns, limit=1)
        if recent and isinstance(recent[0], dict) and recent[0].get("hash"):
            return str(recent[0]["hash"])
    except Exception:
        pass
    return _GENESIS


def _append_row(backend, ident, rec: Dict[str, Any], ns: Optional[str] = None) -> None:
    """The single append path: stamp a process-unique, time-ordered key, link
    the row into the tamper-evident hash chain, and PUT one json row into the
    tenant's append-only audit store.

    Append-only by construction — the key is unique (ms + monotonic seq) so a
    write never overwrites a prior row, and there is no UPDATE/DELETE here. The
    value is ALWAYS the json.dumps of ``rec`` (no raw-string concatenation of
    caller-supplied content outside json), so the privacy/escaping contract is
    identical for every audit kind. Best-effort: the PUT is swallowed so an
    audit failure can never break the calling flow.

    ``ns`` overrides the namespace the row is filed under (default: the
    identity's user_id). The DSAR erasure receipt uses this to file under the
    compliance namespace ``DSAR_NS`` so the proof survives the subject's own
    erasure (the erase sweep deletes only the subject's namespace)."""
    from .server import _e
    if ns is None:
        ns = getattr(ident, "user_id", "") or ""
    key = f"audit_{int(rec['ts'] * 1000)}_{next(_SEQ):08d}"
    # Link into the per-(store,ns) hash chain under a lock so concurrent appends
    # stay correctly ordered. Best-effort: never let chaining break the audit.
    try:
        ck = _chain_key(backend.audit_store, ns)
        with _CHAIN_LOCK:
            prev = _CHAIN.get(ck)
            if prev is None:
                prev = _last_stored_hash(backend, ns)
            rec["prev"] = prev
            rec["hash"] = _content_hash(prev, rec)
            try:
                backend._exec(
                    f"MEMORY PUT INTO {backend.audit_store} VALUES "
                    f"('{_e(ns)}','{key}','{_e(json.dumps(rec))}')")
                _CHAIN[ck] = rec["hash"]   # advance head only on a successful write
            except Exception:
                pass
    except Exception:
        pass


def record(backend, ident, tool: str, outcome: str, *,
           args: Optional[Dict[str, Any]] = None,
           result: Any = None,
           duration_ms: Optional[int] = None,
           ref: Optional[str] = None) -> None:
    """Append one audit row. Best-effort by contract — callers wrap it, and it
    also swallows internally, so the hot path is one PUT that cannot fail the
    tool call."""
    rec: Dict[str, Any] = {
        "ts": time.time(),
        **_identity_fields(ident),
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
    _append_row(backend, ident, rec)


# ------------------------------------------------------------ auth / RBAC
# Auth + privilege changes do NOT pass through _call_tool, so without these
# thin wrappers they leave no tenant-visible trace (Faz 0 gap-closure). Both
# reuse _append_row — same store, same unique-key, same json-only value path,
# same append-only/best-effort contract as record(). The whitelist here is the
# row shape itself: identifiers + outcome + an OPTIONAL non-sensitive ref. A
# raw token/secret/recipient is NEVER passed in or stored — callers pass a
# token PREFIX-hash or an item id as ``ref`` at most.

# Fixed, small event vocabularies keep the store grep-able and bound what an
# auth/privilege row can ever say (no free-form content channel).
_AUTH_EVENTS = frozenset({"auth.denied", "auth.resolve", "connector.oauth_grant"})
_PRIV_ACTIONS = frozenset({"privilege.grant", "privilege.revoke"})
_AUTH_OUTCOMES = frozenset({"ok", "denied"})


def record_auth(backend, ident, event: str, outcome: str,
                ref: Optional[str] = None) -> None:
    """Append one auth-event row (denial / state change). ``event`` is one of
    ``_AUTH_EVENTS``; ``outcome`` is ``ok``|``denied``. ``ref`` is an OPTIONAL
    non-sensitive reference (a token PREFIX-hash or an item id) — NEVER the
    token/secret itself. Best-effort: any failure is swallowed so the auth flow
    is never blocked."""
    try:
        ev = event if event in _AUTH_EVENTS else "auth.resolve"
        oc = outcome if outcome in _AUTH_OUTCOMES else "denied"
        rec: Dict[str, Any] = {
            "ts": time.time(),
            **_identity_fields(ident),
            "kind": "auth",
            "event": ev,
            "outcome": oc,
        }
        if ref:
            rec["ref"] = str(ref)
        _append_row(backend, ident, rec)
    except Exception:
        pass


def record_privilege(backend, ident, action: str, target: str,
                     outcome: str = "ok") -> None:
    """Append one privilege-change row. ``action`` is one of ``_PRIV_ACTIONS``;
    ``target`` is a ROLE/USER identifier only (no secrets/content). Best-effort:
    any failure is swallowed so the privilege flow is never blocked."""
    try:
        act = action if action in _PRIV_ACTIONS else "privilege.grant"
        oc = outcome if outcome in _AUTH_OUTCOMES else "ok"
        rec: Dict[str, Any] = {
            "ts": time.time(),
            **_identity_fields(ident),
            "kind": "privilege",
            "action": act,
            "target": str(target) if target is not None else "",
            "outcome": oc,
        }
        _append_row(backend, ident, rec)
    except Exception:
        pass


# ------------------------------------------------------------ DSAR receipt
# A right-to-erasure (GDPR Art. 17) request must leave PROOF it was honored —
# but the proof cannot live in the erased user's own namespace (the sweep would
# delete it). So DSAR receipts are filed under this fixed COMPLIANCE namespace,
# in the same tamper-evident, append-only chain as every other audit row, and
# they survive the subject's erasure. The row names WHO ran it (operator) and
# WHOSE data (subject) plus the counts — never any erased content.
DSAR_NS = "__dsar__"
_DSAR_ACTIONS = frozenset({"dsar.export", "dsar.erase"})


def record_dsar(backend, operator, action: str, subject: str, *,
                counts: Optional[Dict[str, Any]] = None,
                ref: Optional[str] = None) -> None:
    """Append one DSAR receipt under the compliance namespace ``DSAR_NS``.
    ``operator`` is the Identity that ran the request (its tenant/user/roles are
    recorded); ``subject`` is the user whose data was exported/erased;
    ``action`` is one of ``_DSAR_ACTIONS``. Best-effort, like every audit write."""
    try:
        act = action if action in _DSAR_ACTIONS else "dsar.export"
        rec: Dict[str, Any] = {
            "ts": time.time(),
            **_identity_fields(operator),     # who ran it (operator)
            "kind": "dsar",
            "action": act,
            "subject": str(subject) if subject is not None else "",
        }
        if counts:
            rec["counts"] = counts
        if ref:
            rec["ref"] = ref
        _append_row(backend, operator, rec, ns=DSAR_NS)
    except Exception:
        pass


def dsar_receipts(backend, limit: int = 50) -> List[Dict[str, Any]]:
    """The newest DSAR receipts (read-only) — the compliance proof trail."""
    return trail(backend, DSAR_NS, limit=limit)


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


def verify_chain(backend, ns: str) -> Dict[str, Any]:
    """Recompute the tamper-evidence hash chain for a namespace, oldest-first.

    Returns {ok, rows, broken_at, reason}. ok=False with the offending row key
    when a row's content no longer matches its stored hash (``content-altered``)
    or a row's ``prev`` does not link to the previous present row
    (``link-broken`` — a delete or reorder). The FIRST present row's ``prev`` is
    accepted: the scheduler's prune drops the oldest rows, so the head of what
    remains legitimately references a pruned-away predecessor. Detects naive
    edits/deletes/reorders; a forger with write access would have to recompute
    every subsequent row's hash (export the head hash periodically for a
    stronger external anchor)."""
    from .server import _e
    try:
        rows = backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.audit_store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []
    except Exception:
        return {"ok": True, "rows": 0, "broken_at": None, "reason": None}

    items = []
    for r in rows:
        try:
            items.append((str(r[0]), json.loads(r[1]) if isinstance(r[1], str) else r[1]))
        except Exception:
            continue
    items.sort(key=lambda kv: kv[0])   # key embeds the ms timestamp -> oldest-first

    prev_hash = None
    for key, rec in items:
        if not isinstance(rec, dict):
            return {"ok": False, "rows": len(items), "broken_at": key, "reason": "unparseable"}
        if _content_hash(rec.get("prev", _GENESIS), rec) != rec.get("hash"):
            return {"ok": False, "rows": len(items), "broken_at": key, "reason": "content-altered"}
        if prev_hash is not None and rec.get("prev") != prev_hash:
            return {"ok": False, "rows": len(items), "broken_at": key, "reason": "link-broken"}
        prev_hash = rec.get("hash")
    return {"ok": True, "rows": len(items), "broken_at": None, "reason": None}


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
