"""
rules — the Phase-4 rule engine: trigger -> template -> queued DRAFT.

A rule watches the open-loops store and, when a loop matches its trigger,
applies a template to it — which QUEUES an outbox draft. The approval gate is
untouched (ADR-004): rules never send; a human approves every draft, and even
approval dry-runs unless the operator wired a transport.

One trigger kind ships in this slice, the one the plan names (SLA nudges /
follow-ups) and the one the data honestly supports:

  ``loop_idle`` — an OPEN loop in the given direction whose ``age_days`` has
  reached ``min_age_days`` (optionally filtered by source/channel).

Runaway protection, layered:
  * a loop with a PENDING/APPROVED/SCHEDULED draft is skipped — re-queueing
    would re-arm approval and stomp a human's edits;
  * a loop whose draft was SENT or REJECTED within the rule's
    ``cooldown_days`` is skipped — a human saying "no" silences the rule for
    the cool-down, it does not re-nag next run;
  * the outbox's own dedup window and rate cap still apply underneath.

The scheduler job is inherently opt-in: no rules -> no-op.
"""
from __future__ import annotations

import json
import time
from datetime import datetime, timezone
from typing import Any, Dict, List, Optional

TRIGGER_KINDS = ("loop_idle",)
DIRECTIONS = ("awaiting_me", "awaiting_them", "i_owe_them")
DEFAULT_COOLDOWN_DAYS = 7.0

_BLOCKING_STATUSES = ("pending", "approved", "scheduled")
_COOLDOWN_STATUSES = ("sent", "rejected")


def _key(name: str) -> str:
    return f"rule_{name}"


# ---------------------------------------------------------------- store
def create(backend, ns: str, name: str, template: str,
           trigger: Dict[str, Any], *,
           enabled: bool = True,
           cooldown_days: float = DEFAULT_COOLDOWN_DAYS) -> Dict[str, Any]:
    """Create or update a rule (upsert by name). Validates the template exists
    and the trigger is well-formed before anything is stored."""
    from . import templates
    from .server import _e
    if not templates.valid_name(name):
        return {"error": "rule name must be alphanumeric/dash/underscore "
                         "(max 64 chars)"}
    if templates.get(backend, ns, template) is None:
        return {"error": f"no template named {template!r} — create_template first"}
    trigger = dict(trigger or {})
    kind = trigger.get("kind")
    if kind not in TRIGGER_KINDS:
        return {"error": f"unknown trigger kind {kind!r} "
                         f"(supported: {list(TRIGGER_KINDS)})"}
    direction = trigger.get("direction")
    if direction not in DIRECTIONS:
        return {"error": f"trigger.direction must be one of {list(DIRECTIONS)}"}
    try:
        min_age = float(trigger.get("min_age_days", 0))
    except (TypeError, ValueError):
        return {"error": "trigger.min_age_days must be a number"}
    if min_age < 0:
        return {"error": "trigger.min_age_days must be >= 0"}
    trigger["min_age_days"] = min_age

    existing = get(backend, ns, name)
    rec = {
        "name": name, "template": template, "trigger": trigger,
        "enabled": bool(enabled),
        "cooldown_days": max(0.0, float(cooldown_days)),
        "created": (existing or {}).get("created") or time.time(),
        "updated": time.time(),
    }
    backend._exec(
        f"MEMORY PUT INTO {backend.rules_store} VALUES "
        f"('{_e(ns)}','{_key(name)}','{_e(json.dumps(rec, ensure_ascii=False))}')")
    return {"ok": True, "name": name, "updated": existing is not None}


def get(backend, ns: str, name: str) -> Optional[Dict[str, Any]]:
    from . import templates
    from .server import _e
    if not templates.valid_name(name):
        return None
    try:
        rows = backend._query(
            f"SELECT mem_value FROM __mem_{backend.rules_store} "
            f"WHERE mem_namespace = '{_e(ns)}' "
            f"AND mem_key = '{_e(_key(name))}'") or []
    except Exception:
        return None
    for r in rows:
        try:
            return json.loads(r[0])
        except Exception:
            return None
    return None


def list_all(backend, ns: str) -> List[Dict[str, Any]]:
    from .server import _e
    try:
        rows = backend._query(
            f"SELECT mem_value FROM __mem_{backend.rules_store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []
    except Exception:
        return []
    out = []
    for r in rows:
        try:
            out.append(json.loads(r[0]))
        except Exception:
            continue
    return sorted(out, key=lambda r: r.get("name") or "")


def delete(backend, ns: str, name: str) -> bool:
    from . import templates
    from .server import _e, _valid_key
    k = _key(name)
    if not templates.valid_name(name) or not _valid_key(k):
        return False
    if get(backend, ns, name) is None:
        return False
    try:
        backend._exec(f"MEMORY DELETE FROM {backend.rules_store} "
                      f"WHERE NS = '{_e(ns)}' AND KEY = '{_e(k)}'")
        return True
    except Exception:
        return False


# ---------------------------------------------------------------- engine
def _parse_iso(ts: Optional[str]) -> float:
    try:
        return datetime.fromisoformat(str(ts).replace("Z", "+00:00")).timestamp()
    except Exception:
        return 0.0


def _blocked_loops(backend, ns: str, cooldown_days: float) -> set:
    """loop_keys the engine must not touch: an open draft exists (a re-queue
    would re-arm approval over a human's edits), or a human dealt with one
    (sent/rejected) within the cool-down."""
    from . import outbox
    now = time.time()
    blocked = set()
    for it in outbox._all(backend, ns):
        lk = it.get("loop_key")
        if not lk:
            continue
        status = it.get("status")
        if status in _BLOCKING_STATUSES:
            blocked.add(lk)
        elif status in _COOLDOWN_STATUSES and cooldown_days > 0:
            acted = (it.get("sent_ts")
                     or _parse_iso(it.get("rejected_at"))
                     or _parse_iso(it.get("updated_at")))
            if acted and now - float(acted) < cooldown_days * 86400.0:
                blocked.add(lk)
    return blocked


def _matches(loop: Dict[str, Any], trigger: Dict[str, Any]) -> bool:
    if loop.get("status") != "open":
        return False
    if loop.get("direction") != trigger.get("direction"):
        return False
    src = trigger.get("source")
    if src and loop.get("source") != src:
        return False
    try:
        age = float(loop.get("age_days") or 0)
    except (TypeError, ValueError):
        return False
    return age >= float(trigger.get("min_age_days", 0))


def evaluate(backend, ns: str, *, dry_run: bool = False) -> Dict[str, Any]:
    """Run every enabled rule once. Returns what was queued (or would be,
    under ``dry_run``) and why the rest were skipped. Queues only — sends
    nothing, ever."""
    from . import suggest, templates
    enabled = [r for r in list_all(backend, ns) if r.get("enabled")]
    if not enabled:
        return {"fired": [], "skipped": 0, "rules": 0}

    loops = suggest._load_loops(backend, ns)
    fired: List[Dict[str, Any]] = []
    skipped = 0
    for rule in enabled:
        blocked = _blocked_loops(backend, ns,
                                 float(rule.get("cooldown_days") or 0))
        for lk, loop in loops.items():
            if not _matches(loop, rule.get("trigger") or {}):
                continue
            if lk in blocked:
                skipped += 1
                continue
            if dry_run:
                fired.append({"rule": rule["name"], "loop_key": lk,
                              "counterparty": loop.get("counterparty"),
                              "dry_run": True})
                continue
            res = templates.apply(backend, ns, rule["template"], loop_key=lk)
            if res.get("ok"):
                fired.append({"rule": rule["name"], "loop_key": lk,
                              "counterparty": loop.get("counterparty"),
                              "id": res["id"]})
            else:
                skipped += 1
    return {"fired": fired, "skipped": skipped, "rules": len(enabled)}


def job_rules(backend, ns: str) -> int:
    """Scheduler entrypoint. Inherently opt-in: no enabled rules -> no-op."""
    return len(evaluate(backend, ns)["fired"])
