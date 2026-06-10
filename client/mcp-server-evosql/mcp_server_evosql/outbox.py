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

from . import locales

# channel -> callable(item) -> dict; empty by design (connectors are read-only).
# A real sender registers here behind its own write-scope OAuth + consent.
TRANSPORTS: dict = {}

_PENDING = "pending"
_APPROVED = "approved"
_SCHEDULED = "scheduled"
_SENT = "sent"
_REJECTED = "rejected"

_seq = 0


def _undo_seconds():
    """The undo/grace window before a scheduled send actually goes out. 0 (the
    default) means approve_send delivers immediately — unchanged behavior."""
    try:
        return max(0, int(os.environ.get("EVOSQL_SEND_UNDO_SECONDS", "0")))
    except ValueError:
        return 0


def _rate_cap():
    """Max real sends per rolling hour per namespace. 0 (default) = unlimited."""
    try:
        return max(0, int(os.environ.get("EVOSQL_SEND_RATE_PER_HOUR", "0")))
    except ValueError:
        return 0


def _dedup_seconds():
    """Suppress a 2nd reply to the same loop within this window. 0 (default) =
    off. Guards against accidentally answering the same thread twice."""
    try:
        return max(0, int(os.environ.get("EVOSQL_SEND_DEDUP_SECONDS", "0")))
    except ValueError:
        return 0


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
    # dedup guard: refuse a fresh reply to a loop already answered recently, so a
    # re-run (or a retried suggestion) can't double-reply the same thread.
    dedup = _dedup_seconds()
    if dedup:
        for it in _all(backend, ns):
            if (it.get("loop_key") == loop_key and it.get("status") == _SENT
                    and (it.get("sent_ts") or 0) >= time.time() - dedup):
                ago = int(time.time() - it["sent_ts"])
                raise ValueError(
                    f"a reply to this loop was already sent {ago}s ago — "
                    f"duplicate suppressed (within the {dedup}s dedup window)")
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
    """Items not yet delivered — pending, dry-run-held approved, or scheduled
    (in their undo window). Newest first; these are the cancelable ones."""
    items = [it for it in _all(backend, ns)
             if it.get("status") in (_PENDING, _APPROVED, _SCHEDULED)]
    items.sort(key=lambda it: it.get("created_at", ""), reverse=True)
    return items


def preview(item):
    """What an approve_send would actually put on the wire — for a confirm step."""
    return {"id": item.get("id"), "channel": item.get("channel"),
            "to": item.get("to_email") or item.get("to"),
            "subject": item.get("subject"), "body": item.get("body"),
            "status": item.get("status"), "send_after": item.get("send_after")}


def _last_at(it):
    h = it.get("history") or [{}]
    return h[-1].get("at", it.get("created_at", ""))


def audit(backend, ns, *, limit=50):
    """The full send trail — every item incl. sent/rejected, newest transition
    first. Read-only accountability for what the assistant did or was asked to do."""
    items = sorted(_all(backend, ns), key=_last_at, reverse=True)
    out = []
    for it in items[:limit]:
        sr = it.get("send_result") or {}
        out.append({"id": it.get("id"), "channel": it.get("channel"),
                    "to": it.get("to_email") or it.get("to"),
                    "status": it.get("status"), "loop_key": it.get("loop_key"),
                    "created_at": it.get("created_at"), "sent_at": it.get("sent_at"),
                    "result": ("delivered" if it.get("status") == _SENT
                               else sr.get("reason") or sr.get("error"))})
    return out


def stats(backend, ns):
    """A one-line health view: counts by status + real sends in the last hour."""
    by = {}
    for it in _all(backend, ns):
        by[it.get("status", "?")] = by.get(it.get("status", "?"), 0) + 1
    return {"by_status": by, "sent_last_hour": _sent_in_window(backend, ns),
            "rate_cap": _rate_cap()}


def _sent_in_window(backend, ns, *, window=3600, now=None):
    now = time.time() if now is None else now
    return sum(1 for it in _all(backend, ns)
               if it.get("status") == _SENT
               and (it.get("sent_ts") or 0) >= now - window)


def _deliver_and_record(backend, ns, item, *, now=None):
    """Deliver an approved item, record the outcome, and close its loop on a real
    send (dry-runs/failures leave it held). Shared by approve_send + flush.

    Rate guard: if the namespace already hit EVOSQL_SEND_RATE_PER_HOUR real sends
    this hour, the item is HELD (not delivered) and retried later — backpressure,
    never a dropped or doubled send."""
    cap = _rate_cap()
    if cap and _sent_in_window(backend, ns, now=now) >= cap:
        reason = f"rate limit {cap}/h reached — held, will retry"
        item["send_result"] = {"delivered": False, "rate_limited": True,
                               "reason": reason}
        if item.get("status") != _SCHEDULED:   # scheduled items stay due for flush
            _record(item, _APPROVED)
        _save(backend, ns, item)
        return {"ok": True, "item": item, "sent": False, "dry_run": False,
                "rate_limited": True, "loop_resolved": False, "detail": reason}
    result = _deliver(item)
    item["send_result"] = result
    loop_closed = False
    if result.get("delivered"):
        item["sent_at"] = _now()
        item["sent_ts"] = time.time()
        _record(item, _SENT)
        # the reply actually went out -> close the open loop it answered so the
        # brief stops showing it immediately. A close failure must not undo a send.
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
            "rate_limited": False,
            "loop_resolved": loop_closed,
            "detail": result.get("reason") or result.get("error")}


def approve_send(backend, ns, item_id, *, undo_seconds=None):
    """Approve a queued item. The ONLY path that can send. With an undo window
    (EVOSQL_SEND_UNDO_SECONDS or undo_seconds>0) it SCHEDULES the send instead of
    delivering now — the item sits in `scheduled` until the window elapses (a
    flush delivers it) or a reject cancels it. Idempotent on an already-sent item."""
    item = _load(backend, ns, item_id)
    if item is None:
        return {"ok": False, "error": f"no outbox item '{item_id}'"}
    if item["status"] == _SENT:
        return {"ok": True, "item": item, "note": "already sent (no re-send)"}
    if item["status"] == _REJECTED:
        return {"ok": False, "error": "item was rejected; re-queue to send"}
    undo = _undo_seconds() if undo_seconds is None else max(0, int(undo_seconds))
    # Open the undo window on first approval; approving an already-scheduled item
    # means "send it now" (skip the remaining wait).
    if undo > 0 and item["status"] != _SCHEDULED:
        item["approved_at"] = _now()
        item["send_after"] = time.time() + undo
        _record(item, _SCHEDULED)
        _save(backend, ns, item)
        return {"ok": True, "scheduled": True, "sent": False,
                "send_after": item["send_after"], "undo_seconds": undo, "item": item,
                "note": f"scheduled — sends in {undo}s unless you reject {item_id}"}
    item.setdefault("approved_at", _now())
    return _deliver_and_record(backend, ns, item)


def flush_scheduled(backend, ns, *, now=None):
    """Deliver every scheduled item whose undo window has elapsed. Run by the
    scheduler (job_outbox_flush) and available as `outbox flush`. Returns the
    delivery results."""
    now = time.time() if now is None else now
    out = []
    for it in _all(backend, ns):
        if it.get("status") == _SCHEDULED and (it.get("send_after") or 0) <= now:
            out.append(_deliver_and_record(backend, ns, it, now=now))
    return out


def reject(backend, ns, item_id):
    """Cancel a queued item (incl. one scheduled in its undo window). Errors if it
    was already sent."""
    item = _load(backend, ns, item_id)
    if item is None:
        return {"ok": False, "error": f"no outbox item '{item_id}'"}
    if item["status"] == _SENT:
        return {"ok": False, "error": "item already sent; cannot reject"}
    item["rejected_at"] = _now()
    _record(item, _REJECTED)
    _save(backend, ns, item)
    return {"ok": True, "item": item}


# De-ambiguated: the old `[\w.-]+\.\w+` domain had two adjacent classes both
# matching '.', causing O(n^2) backtracking on a long non-matching `from`
# (attacker-controlled header) — ~21s for 80 KB, and the global execution mutex
# means that stalls every request. The domain is now label(.label)+, so '.' is
# only ever consumed by the explicit `\.`.
_EMAIL = re.compile(r"[\w.+-]+@[\w-]+(?:\.[\w-]+)+")


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
        m = _EMAIL.search((d.get("from") or "")[:320])   # RFC max addr length
        if m:
            found = m.group(0)
    return found


def _resolve_imessage_handle(backend, ns, loop):
    """The handle (phone/email) of the inbound side of an imessage chat — that's
    where a reply is addressed (osascript sends to a buddy by handle, not chat_id)."""
    from . import open_loops as _ol
    from .server import _e
    found = None
    for (v,) in backend._query(
            f"SELECT mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(ns)}' AND mem_key LIKE 'imessage%' "
            f"LIMIT 1000000") or []:
        try:
            d = json.loads(v)
        except Exception:
            continue
        if _ol._thread_key(d, "imessage") != loop.get("thread_key"):
            continue
        if d.get("is_from_me"):
            continue                                  # inbound only
        if d.get("handle"):
            found = d["handle"]
    return found


def recipient_for(backend, ns, loop):
    """Resolve how a reply to this loop is addressed, per channel:
      * gmail/outlook → {to: display, to_email: <resolved address>}  (sendMail)
      * imessage      → {to: <handle>, to_email: None}               (osascript buddy)
      * teams/slack   → {to: display, to_email: None}                (routed by thread_id)
    Centralises the channel routing knowledge so queue_reply stays channel-agnostic."""
    src = (loop or {}).get("source")
    cp = (loop or {}).get("counterparty")
    if src in ("gmail", "outlook"):
        return {"to": cp, "to_email": resolve_recipient(backend, ns, loop)}
    if src == "imessage":
        return {"to": _resolve_imessage_handle(backend, ns, loop) or cp,
                "to_email": None}
    return {"to": cp, "to_email": None}               # teams / slack route by thread_id


# ---------------------------------------------------------------- CLI
def _fmt(it):
    st = it.get("status", "?")
    icon = {"pending": "🟡", "approved": "🟠", "scheduled": "⏳", "sent": "🟢",
            "rejected": "⚪"}.get(st, "·")
    body = (it.get("body") or "").replace("\n", " ")
    when = ""
    if st == _SCHEDULED and it.get("send_after"):
        left = int(it["send_after"] - time.time())
        when = f"  (sends in {left}s — reject to cancel)" if left > 0 else "  (due)"
    return (f"{icon} {it['id']}  [{st}]{when}  →{it.get('to') or '?'}\n"
            f"     {body[:80]}")


def _approve_line(item_id, res, lang=None):
    if res.get("scheduled"):
        return locales.t("outbox_scheduled", lang, id=item_id,
                         note=res.get("note", ""))
    if res.get("sent"):
        return locales.t("outbox_sent", lang, id=item_id)
    return (locales.t("outbox_approved_dryrun", lang, id=item_id)
            + (f"  [{res.get('detail')}]" if res.get("detail") else ""))


def _cli(backend, ns, argv) -> int:
    from . import prefs
    lang, _ = prefs.get_language(backend, ns)
    cmd = argv[0] if argv else "list"
    if cmd == "list":
        pend = list_pending(backend, ns)
        if not pend:
            print(locales.t("no_pending_approval", lang))
            return 0
        print(locales.t("outbox_pending_header", lang, n=len(pend)) + "\n")
        for it in pend:
            print(_fmt(it))
        print("\n" + locales.t("outbox_list_hint", lang))
        return 0
    if cmd == "show" and len(argv) >= 2:
        it = _load(backend, ns, argv[1])
        if it is None:
            print(f"✗ no outbox item '{argv[1]}'")
            return 1
        p = preview(it)
        print(f"{'='*60}\n{locales.t('outbox_preview_header', lang)}\n{'-'*60}")
        print(f"{locales.t('outbox_lbl_channel', lang)} : {p['channel']}\n"
              f"{locales.t('outbox_lbl_to', lang)} : {p['to']}")
        if p.get("subject"):
            print(f"{locales.t('outbox_lbl_subject', lang)} : {p['subject']}")
        print(f"{locales.t('outbox_lbl_status', lang)} : {p['status']}\n"
              f"{'-'*60}\n{p['body']}\n{'='*60}")
        return 0
    if cmd == "flush":
        results = flush_scheduled(backend, ns)
        if not results:
            print(locales.t("outbox_no_scheduled_due", lang))
            return 0
        for r in results:
            print(_approve_line(r.get("item", {}).get("id", "?"), r, lang))
        return 0
    if cmd == "audit":
        rows = audit(backend, ns)
        s = stats(backend, ns)
        cap = f"{s['rate_cap']}/h" if s["rate_cap"] else "∞"
        print(locales.t("outbox_audit_header", lang, by_status=s["by_status"],
                        n=s["sent_last_hour"], cap=cap) + "\n")
        icon = {"pending": "🟡", "approved": "🟠", "scheduled": "⏳", "sent": "🟢",
                "rejected": "⚪"}
        for r in rows:
            line = (f"{icon.get(r['status'], '·')} {r['id']}  [{r['status']}]  "
                    f"→{r['to'] or '?'}")
            if r["result"]:
                line += f"  · {r['result']}"
            print(line)
        return 0
    if cmd in ("approve", "reject") and len(argv) >= 2:
        res = (approve_send if cmd == "approve" else reject)(backend, ns, argv[1])
        if not res.get("ok"):
            print(f"✗ {res.get('error')}")
            return 1
        print(_approve_line(argv[1], res, lang) if cmd == "approve"
              else locales.t("outbox_rejected", lang, id=argv[1]))
        return 0
    print(locales.t("outbox_usage", lang), file=sys.stderr)
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
