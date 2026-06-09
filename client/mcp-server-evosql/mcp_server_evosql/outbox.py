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
import re
import sys
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
          to_email=None, source=None, subject=None, thread_id=None):
    """Queue a drafted reply for approval. Upserts by loop_key so re-drafting the
    same loop replaces its pending item. Returns the pending item. Sends nothing.

    to        — recipient display (shown in the outbox);
    to_email  — deliverable address the transport sends to (resolved upstream);
    thread_id — channel thread to reply within (e.g. gmail threadId)."""
    body = (body or "").strip()
    if not body:
        raise ValueError("queue requires a non-empty body")
    fields = {"body": body, "to": to, "to_email": to_email,
              "channel": channel or source, "source": source,
              "subject": subject, "thread_id": thread_id}
    # upsert: reuse the pending item for this loop if one exists
    existing = next((it for it in _all(backend, ns)
                     if it.get("loop_key") == loop_key
                     and it.get("status") in (_PENDING, _APPROVED)), None)
    if existing:
        for k, v in fields.items():
            if v is not None:
                existing[k] = v
        existing["updated_at"] = _now()
        _record(existing, _PENDING)            # editing re-arms approval
        _save(backend, ns, existing)
        return existing
    item = {"id": _new_id(), "loop_key": loop_key, "status": _PENDING,
            "created_at": _now(), "history": [{"status": _PENDING, "at": _now()}]}
    item.update(fields)
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
    loop_closed = False
    if result.get("delivered"):
        item["sent_at"] = _now()
        _record(item, _SENT)
        # the reply actually went out -> close the open loop it answered, so the
        # brief stops showing it immediately (dry-runs do NOT close it: nothing
        # was sent). A close failure must not undo a successful send.
        if item.get("loop_key"):
            try:
                from . import open_loops
                loop_closed = open_loops.mark_resolved(
                    backend, ns, item["loop_key"], reason="sent_reply")
            except Exception:
                loop_closed = False
    else:
        _record(item, _APPROVED)               # approved but held (dry-run/failure)
    _save(backend, ns, item)
    return {"ok": True, "item": item,
            "sent": bool(result.get("delivered")),
            "dry_run": bool(result.get("dry_run")),
            "loop_resolved": loop_closed,
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


_EMAIL = re.compile(r"[\w.+-]+@[\w.-]+\.\w+")


def _is_outbound(d, source):
    if source == "gmail":
        return "SENT" in str(d.get("labels") or "")
    if source == "outlook":
        return "sent" in (d.get("folder") or "").lower()
    return False


def resolve_recipient(backend, ns, loop):
    """Best-effort deliverable address for a mail loop: the email of the last
    inbound message in its thread. Works for gmail (thread keyed by thread_id)
    and outlook (keyed by normalised subject); returns None for chat channels
    (teams replies route by chat_id, not an address) or when unresolved — the
    caller then falls back to the counterparty display name (and the transport
    refuses a non-address)."""
    source = (loop or {}).get("source")
    if source not in ("gmail", "outlook"):
        return None
    from . import open_loops as _ol
    from .server import _e
    prefix = "gmail%" if source == "gmail" else "outlook%"
    found = None
    for (v,) in backend._query(
            f"SELECT mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(ns)}' AND mem_key LIKE '{prefix}' "
            f"LIMIT 1000000") or []:
        try:
            d = json.loads(v)
        except Exception:
            continue
        if _ol._thread_key(d, source) != loop.get("thread_key"):
            continue
        if _is_outbound(d, source):
            continue                          # inbound only — that's who we reply to
        m = _EMAIL.search(d.get("from") or "")
        if m:
            found = m.group(0)
    return found


# ---------------------------------------------------------------- CLI
def _fmt(it):
    st = it.get("status", "?")
    icon = {"pending": "🟡", "approved": "🟠", "sent": "🟢",
            "rejected": "⚪"}.get(st, "·")
    body = (it.get("body") or "").replace("\n", " ")
    return (f"{icon} {it['id']}  [{st}]  →{it.get('to') or '?'}\n"
            f"     {body[:80]}")


def _cli(backend, ns, argv) -> int:
    cmd = argv[0] if argv else "list"
    if cmd == "list":
        pend = list_pending(backend, ns)
        if not pend:
            print("Onay bekleyen yanıt yok.")
            return 0
        print(f"Onay bekleyen {len(pend)} yanıt:\n")
        for it in pend:
            print(_fmt(it))
        print("\nGöndermek için:  approve <id>   ·   iptal için:  reject <id>")
        return 0
    if cmd in ("approve", "reject") and len(argv) >= 2:
        fn = approve_send if cmd == "approve" else reject
        res = fn(backend, ns, argv[1])
        if not res.get("ok"):
            print(f"✗ {res.get('error')}")
            return 1
        if cmd == "approve":
            sent = res.get("sent")
            print(f"{'✓ gönderildi' if sent else '◐ onaylandı (dry-run — '
                  'gönderilmedi)'}: {argv[1]}"
                  + (f"  [{res.get('detail')}]" if not sent and res.get('detail')
                     else ""))
        else:
            print(f"⚪ iptal edildi: {argv[1]}")
        return 0
    print("kullanım: python -m mcp_server_evosql.outbox "
          "list | approve <id> | reject <id>", file=sys.stderr)
    return 2


def main() -> int:
    from . import scheduler
    prefix = os.environ.get("MCP_STORE_PREFIX", "mcp")
    backend = scheduler._backend(prefix)
    ns = os.environ.get("MCP_USER_ID") or (
        scheduler.discover_namespaces(backend) or ["default"])[0]
    return _cli(backend, ns, sys.argv[1:])


if __name__ == "__main__":
    sys.exit(main())
