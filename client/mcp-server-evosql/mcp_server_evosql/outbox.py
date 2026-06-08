"""
outbox — the send/approval loop (read -> suggest -> APPROVE -> send).

This is the human-in-the-loop gate that turns a *suggestion* into an *action*.
A drafted reply is QUEUED here as a pending item; it does not leave the machine.
A separate, explicit approve_send is the only thing that can deliver it, and even
then delivery is a DRY-RUN unless a real transport is registered for the channel
AND EVOSQL_SEND_ENABLED is set. Nothing auto-sends, ever.

Lifecycle (status):

    pending ──approve_send──▶ sent       (a transport delivered it)
        │                 └─▶ approved   (dry-run / no transport — held, retriable)
        ├──reject────────────▶ rejected
    approved ──approve_send──▶ sent       (retry once a transport exists)

Idempotency: approve_send on a `sent` item is a no-op that returns the existing
result (never a second delivery); reject on a `sent` item errors. queue upserts
by loop_key, so re-drafting the same loop replaces its pending item rather than
stacking duplicates.

The connectors are read-only today (gmail.readonly, "cannot send mail"), so no
transport is wired and delivery always dry-runs. TRANSPORTS is the seam where a
real channel sender would register later, behind its own write-scope OAuth.
"""
from __future__ import annotations

import json
import os
import time
from datetime import datetime, timezone

# channel -> callable(item) -> dict; empty by design (connectors are read-only).
# A real sender registers here behind its own write-scope OAuth + consent.
TRANSPORTS: dict = {}

_PENDING = "pending"
_APPROVED = "approved"
_SENT = "sent"
_REJECTED = "rejected"

_seq = 0


def _now():
    return datetime.now(timezone.utc).isoformat()


def _new_id():
    global _seq
    _seq += 1
    return "ob_%d_%d" % (int(time.time() * 1000), _seq)


def _send_enabled():
    return os.environ.get("EVOSQL_SEND_ENABLED", "").strip().lower() in (
        "1", "true", "yes", "on")


# ---------------------------------------------------------------- persistence
def _save(backend, ns, item):
    from .server import _e
    backend._exec(f"MEMORY PUT INTO {backend.outbox_store} VALUES "
                  f"('{_e(ns)}','{_e(item['id'])}','{_e(json.dumps(item))}')")


def _load(backend, ns, item_id):
    from .server import _e
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.outbox_store} "
        f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = '{_e(item_id)}'") or []
    for (v,) in rows:
        try:
            return json.loads(v)
        except Exception:
            pass
    return None


def _all(backend, ns):
    from .server import _e
    out = []
    for row in backend._query(
            f"SELECT mem_value FROM __mem_{backend.outbox_store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []:
        try:
            out.append(json.loads(row[0]))
        except Exception:
            pass
    return out


def _record(item, status):
    item["status"] = status
    item.setdefault("history", []).append({"status": status, "at": _now()})


# ---------------------------------------------------------------- delivery
def _deliver(item) -> dict:
    """Hand the item to a registered transport. Dry-runs (delivers nothing) when
    sending is disabled or no transport is wired for the channel — the default,
    since the connectors are read-only."""
    channel = item.get("channel") or item.get("source") or "unknown"
    if not _send_enabled():
        return {"delivered": False, "dry_run": True,
                "reason": "send disabled (set EVOSQL_SEND_ENABLED=1 to enable)"}
    transport = TRANSPORTS.get(channel)
    if transport is None:
        return {"delivered": False, "dry_run": True,
                "reason": f"no transport wired for '{channel}' (connectors are "
                          f"read-only)"}
    try:
        res = transport(item) or {}
        res.setdefault("delivered", True)
        res.setdefault("dry_run", False)
        return res
    except Exception as exc:  # a transport failure must not lose the item
        return {"delivered": False, "dry_run": False, "error": str(exc)[:200]}


# ---------------------------------------------------------------- operations
def queue(backend, ns, loop_key, body, *, channel=None, to=None,
          source=None, subject=None):
    """Queue a drafted reply for approval. Upserts by loop_key so re-drafting the
    same loop replaces its pending item. Returns the pending item. Sends nothing."""
    body = (body or "").strip()
    if not body:
        raise ValueError("queue requires a non-empty body")
    # upsert: reuse the pending item for this loop if one exists
    existing = next((it for it in _all(backend, ns)
                     if it.get("loop_key") == loop_key
                     and it.get("status") in (_PENDING, _APPROVED)), None)
    if existing:
        existing.update({"body": body, "to": to or existing.get("to"),
                         "channel": channel or existing.get("channel"),
                         "source": source or existing.get("source"),
                         "subject": subject or existing.get("subject"),
                         "updated_at": _now()})
        _record(existing, _PENDING)            # editing re-arms approval
        _save(backend, ns, existing)
        return existing
    item = {"id": _new_id(), "loop_key": loop_key, "body": body,
            "to": to, "channel": channel or source, "source": source,
            "subject": subject, "status": _PENDING, "created_at": _now(),
            "history": [{"status": _PENDING, "at": _now()}]}
    _save(backend, ns, item)
    return item


def list_pending(backend, ns):
    """Items awaiting approval (pending or dry-run-held approved), newest first."""
    items = [it for it in _all(backend, ns)
             if it.get("status") in (_PENDING, _APPROVED)]
    items.sort(key=lambda it: it.get("created_at", ""), reverse=True)
    return items


def approve_send(backend, ns, item_id):
    """Approve a queued item and deliver it. The ONLY path that can send.
    Idempotent on an already-sent item (returns it, no second delivery)."""
    item = _load(backend, ns, item_id)
    if item is None:
        return {"ok": False, "error": f"no outbox item '{item_id}'"}
    if item["status"] == _SENT:
        return {"ok": True, "item": item, "note": "already sent (no re-send)"}
    if item["status"] == _REJECTED:
        return {"ok": False, "error": "item was rejected; re-queue to send"}
    item["approved_at"] = _now()
    result = _deliver(item)
    item["send_result"] = result
    if result.get("delivered"):
        item["sent_at"] = _now()
        _record(item, _SENT)
    else:
        _record(item, _APPROVED)               # approved but held (dry-run/failure)
    _save(backend, ns, item)
    return {"ok": True, "item": item,
            "sent": bool(result.get("delivered")),
            "dry_run": bool(result.get("dry_run")),
            "detail": result.get("reason") or result.get("error")}


def reject(backend, ns, item_id):
    """Cancel a queued item. Errors if it was already sent."""
    item = _load(backend, ns, item_id)
    if item is None:
        return {"ok": False, "error": f"no outbox item '{item_id}'"}
    if item["status"] == _SENT:
        return {"ok": False, "error": "item already sent; cannot reject"}
    item["rejected_at"] = _now()
    _record(item, _REJECTED)
    _save(backend, ns, item)
    return {"ok": True, "item": item}
