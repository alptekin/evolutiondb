"""
templates — per-tenant message templates + apply-to-outbox (Phase 4 MVP).

Business templates (follow-ups, SLA nudges, standard replies) live in the
tenant's own ``{prefix}_templates`` store. ``apply_template`` renders one with
explicit variables (plus loop-derived ones when applied to an open loop) and
queues the result to the outbox as a DRAFT — ADR-004 is unchanged: nothing is
sent until a human approves, and the outbox's dedup/rate-cap/undo guards bound
runaway automation. The rule engine (trigger → template → queue) is a later
phase; this slice is the store + manual apply.

Rendering is strict and honest: ``{placeholders}`` are substituted only from
known variables; a missing variable is an ERROR naming what's missing — never
a silently blank message.
"""
from __future__ import annotations

import json
import re
import time
from typing import Any, Dict, List, Optional

_NAME_RE = re.compile(r"^[A-Za-z0-9][A-Za-z0-9_\-]{0,63}$")
_PLACEHOLDER_RE = re.compile(r"\{([A-Za-z0-9_]+)\}")


def _key(name: str) -> str:
    return f"tpl_{name}"


def valid_name(name: str) -> bool:
    return bool(name) and bool(_NAME_RE.match(name))


# ---------------------------------------------------------------- store
def create(backend, ns: str, name: str, body: str, *,
           channel: Optional[str] = None,
           subject: Optional[str] = None) -> Dict[str, Any]:
    """Create or update a template (upsert by name)."""
    from .server import _e
    if not valid_name(name):
        return {"error": "template name must be alphanumeric/dash/underscore "
                         "(max 64 chars)"}
    if not (body or "").strip():
        return {"error": "create_template requires a non-empty `body`"}
    existing = get(backend, ns, name)
    rec = {
        "name": name, "body": body,
        "channel": channel or (existing or {}).get("channel"),
        "subject": subject or (existing or {}).get("subject"),
        "placeholders": sorted(set(_PLACEHOLDER_RE.findall(body))),
        "created": (existing or {}).get("created") or time.time(),
        "updated": time.time(),
    }
    backend._exec(
        f"MEMORY PUT INTO {backend.templates_store} VALUES "
        f"('{_e(ns)}','{_key(name)}','{_e(json.dumps(rec, ensure_ascii=False))}')")
    return {"ok": True, "name": name, "placeholders": rec["placeholders"],
            "updated": existing is not None}


def get(backend, ns: str, name: str) -> Optional[Dict[str, Any]]:
    from .server import _e
    if not valid_name(name):
        return None
    try:
        rows = backend._query(
            f"SELECT mem_value FROM __mem_{backend.templates_store} "
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
            f"SELECT mem_value FROM __mem_{backend.templates_store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []
    except Exception:
        return []
    out = []
    for r in rows:
        try:
            rec = json.loads(r[0])
        except Exception:
            continue
        out.append({"name": rec.get("name"), "channel": rec.get("channel"),
                    "subject": rec.get("subject"),
                    "placeholders": rec.get("placeholders") or [],
                    "updated": rec.get("updated")})
    return sorted(out, key=lambda t: t.get("name") or "")


def delete(backend, ns: str, name: str) -> bool:
    from .server import _e, _valid_key
    k = _key(name)
    if not valid_name(name) or not _valid_key(k):
        return False
    if get(backend, ns, name) is None:
        return False
    try:
        backend._exec(f"MEMORY DELETE FROM {backend.templates_store} "
                      f"WHERE NS = '{_e(ns)}' AND KEY = '{_e(k)}'")
        return True
    except Exception:
        return False


# ---------------------------------------------------------------- render+apply
def render(body: str, variables: Dict[str, Any]) -> Dict[str, Any]:
    """Substitute {placeholders} strictly. Returns {text} or {error, missing}."""
    missing = [p for p in set(_PLACEHOLDER_RE.findall(body))
               if p not in variables or variables[p] in (None, "")]
    if missing:
        return {"error": f"missing template variables: {sorted(missing)}",
                "missing": sorted(missing)}
    text = _PLACEHOLDER_RE.sub(lambda m: str(variables[m.group(1)]), body)
    return {"text": text}


def apply(backend, ns: str, name: str, *,
          loop_key: Optional[str] = None,
          to: Optional[str] = None,
          variables: Optional[Dict[str, Any]] = None) -> Dict[str, Any]:
    """Render a template and queue the result as an outbox DRAFT.

    With ``loop_key`` the draft targets that open loop (channel/recipient/
    thread resolved exactly like queue_reply; the loop also contributes
    {counterparty}/{subject}/{what} variables). Without one, ``to`` is required
    and the template's own channel is used. Nothing is sent — a human approves
    (and the github-style channels still dry-run unless their transport is
    wired)."""
    tpl = get(backend, ns, name)
    if tpl is None:
        return {"error": f"no template named {name!r} — create_template first"}

    from . import outbox, suggest
    loop: Dict[str, Any] = {}
    if loop_key:
        loop = suggest._load_loops(backend, ns).get(loop_key) or {}
        if not loop:
            return {"error": f"no open loop {loop_key!r}"}

    merged: Dict[str, Any] = {}
    if loop:
        merged.update({"counterparty": loop.get("counterparty"),
                       "subject": loop.get("subject"),
                       "what": loop.get("what") or loop.get("snippet")})
    merged.update(variables or {})
    rendered = render(tpl["body"], merged)
    if "error" in rendered:
        return rendered

    if loop:
        rcpt = outbox.recipient_for(backend, ns, loop)
        to_val = to or rcpt["to"]
        to_email = (to if to and "@" in to else None) or rcpt["to_email"]
        channel = loop.get("source")
        thread_id = loop.get("thread_key")
        subject = tpl.get("subject") or loop.get("subject")
        item_key = loop_key
    else:
        if not (to or "").strip():
            return {"error": "apply_template without `loop_key` requires `to`"}
        channel = tpl.get("channel")
        if not channel:
            return {"error": "the template has no `channel` — set one on "
                             "create_template or apply it to a loop"}
        to_val, to_email = to, (to if "@" in to else None)
        thread_id = None
        subject = tpl.get("subject")
        item_key = f"tpl:{name}:{to}"
    try:
        item = outbox.queue(backend, ns, item_key, rendered["text"],
                            channel=channel, source=channel,
                            to=to_val, to_email=to_email,
                            thread_id=thread_id, subject=subject)
    except ValueError as exc:           # dedup guard etc.
        return {"error": str(exc)}
    return {"ok": True, "id": item["id"], "template": name,
            "channel": channel, "to": to_val, "body": rendered["text"],
            "note": "draft queued for approval — nothing sent. Use "
                    "list_pending_replies / approve_send."}
