"""
inbox_digest — a date-ranged summary of RECEIVED work email (gmail/outlook):
who wrote, the subject, the date, and whether the item is still OPEN or already
HANDLED, plus per-sender totals. The connectors already sync email (and the
conversational channels) into the primary memory store; this windows that store
to a date range and derives a handled/open status per email.

"Handled" is deliberately broad, because an email does not need ME to answer it:
a colleague may have replied, or the matter may have been settled on another
channel — Teams, a phone call, Zoom, WhatsApp — sometimes only *mentioned* in a
later message. So each received email gets one status from an ordered, evidenced
cascade (strongest wins):

  * replied_by_me        — I sent a later message in the same thread (the legacy
                           `replied` signal; the ONLY tier that sets replied=True)
  * replied_by_colleague — a different human replied later in the same thread
  * handled_elsewhere     — WEAK / needs confirmation: a cross-channel contact
                           with the same person after the email, OR a later
                           message that mentions an off-channel resolution
  * open                  — nothing indicates it was handled (the real nag list)

Every non-open status carries structured `evidence` (tier / by / channel / when /
phrase / note) so nothing is hidden and a wrong fuzzy match is auditable, never
silent. The weak tiers (handled_elsewhere) set maybe=True; they downgrade the
nag but never fully close an item. A false-OPEN (a possibly-unnecessary nag) is
always preferred over a false-HANDLED (a missed real email).

Read-only, deterministic, LLM-free. Returns STRUCTURED data so the caller (the
MCP host model or the standalone agent) can present it in the user's language +
requested format. Backward-compatible: `replied`/`unreplied` keep their exact
old meaning and formula (set only by replied_by_me).
"""
from __future__ import annotations

import json
import os
import re
from collections import Counter
from datetime import datetime, timedelta, timezone

from .open_loops import (_ts, _disp, _thread_key, _is_auto, is_nonhuman_sender,
                         _EMAIL_RE)

EMAIL_SOURCES = ("gmail", "outlook")

_ADDR_RE = re.compile(r"<([^>]+)>")
# REPLY (not forward) subject prefix (en + tr). Used ONLY for subject-keyed
# threads (Outlook), where the thread key is the normalized subject: two
# unrelated fresh emails that share a templated subject (a B2B notification,
# say) would otherwise look like a thread. A genuine reply-all carries a reply
# prefix; a coincidental same-subject fresh email does not — so we require it
# before crediting a different sender as a colleague reply. A FORWARD (Fwd:/Ilt:)
# is deliberately NOT accepted: forwarding a copy is not answering the original.
_REPLY_RE = re.compile(r"^\s*(re|yan(?:ıt)?|yn)\s*:", re.I)

# Quoted reply-history markers. An off-channel phrase buried in the quoted thread
# below a reply is OLD context, not what THIS message says, so we cut the body at
# the first quote boundary before scanning (en + tr; Outlook/Gmail/Apple shapes).
_QUOTE_CUT = re.compile(
    r"(?im)^\s*(>|-{2,}\s*original message|_{5,}|from:\s|gönderen:\s|sent:\s|"
    r"on\s.{0,90}\bwrote:|.{0,90}\starihinde.{0,60}\byazdı:)")


def _is_reply_subject(raw: str) -> bool:
    return bool(_REPLY_RE.match(raw or ""))


def _fold(s) -> str:
    """Turkish-stable case fold for identity comparison. Python's casefold maps
    'I'->'i' and 'İ'->'i̇' (with a combining dot), so 'IŞIK' and 'ışık' would not
    match; pin the dotted/dotless I pair first so the same person under either
    Turkish casing is recognised as the same party."""
    return (s or "").strip().replace("İ", "i").replace("I", "ı").casefold()


def _strip_quote(text: str) -> str:
    """Keep only the NEW top of a message — drop quoted reply history so a handoff
    phrase in the thread below cannot be mistaken for this message's content."""
    if not text:
        return ""
    out = []
    for line in text.splitlines():
        if _QUOTE_CUT.match(line):
            break
        out.append(line)
    return "\n".join(out).strip()


def _outbound(d) -> bool:
    """Did the USER send this message? gmail = SENT label; outlook = the
    connector's language-independent `is_sent` flag, with `"sent" in folder` as
    a fallback for older rows / English mailboxes (the Turkish sent folder is
    'Gönderilmiş Öğeler', which the folder test alone would miss)."""
    src = d.get("source")
    if src == "gmail":
        return "SENT" in str(d.get("labels") or "")
    if src == "outlook":
        return bool(d.get("is_sent")) or "sent" in str(d.get("folder") or "").lower()
    return False


def _addr(raw) -> str:
    """Lowercased email address inside <...>, or the whole token if it is bare
    email-shaped, else ''. Lets us tell the SAME person (different display name,
    same address) from a genuine other party in the colleague-reply check."""
    s = (raw or "").strip()
    m = _ADDR_RE.search(s)
    if m:
        return m.group(1).strip().lower()
    if _EMAIL_RE.search(s):
        return s.lower()
    return ""


def _domain(raw) -> str:
    """Lowercased email domain from a 'Name <local@domain>' / bare-address field
    ('' if none). Survives PII masking, which masks the local-part but keeps the
    domain intact ('Name <***@acme.com>')."""
    a = _addr(raw)
    return a.split("@", 1)[1] if "@" in a else ""


# Consumer freemail domains never count as a company's "internal" domain when we
# auto-derive it from the user's own outbound mail (a personal gmail address is
# not a colleague signal). An explicit EVOSQL_INTERNAL_DOMAINS overrides this.
_FREEMAIL = {"gmail.com", "googlemail.com", "outlook.com", "hotmail.com",
             "live.com", "yahoo.com", "icloud.com", "me.com", "proton.me"}


def _email_text(d) -> str:
    """NEW body text scanned for an off-channel mention, with quoted reply history
    stripped. gmail -> snippet; outlook -> snippet + body (Graph gives full body)."""
    if d.get("source") == "outlook":
        raw = ((d.get("snippet") or "") + "\n" + (d.get("body") or "")).strip()
    else:
        raw = (d.get("snippet") or "").strip()
    return _strip_quote(raw)


def _identified(dispn: str) -> bool:
    """Is this counterparty name specific enough to match across channels? A full
    name (has a space), an email-shaped token, or a handle-like token carrying a
    separator ('jane.doe', 'jane_doe') qualifies; a BARE single-token first name
    ('john') does NOT — it is the biggest cross-channel collision source, so we
    would rather miss the match (stay open) than mis-attribute it."""
    if not dispn:
        return False
    return (" " in dispn or "@" in dispn or "." in dispn or "_" in dispn)


def _day_start(dt: datetime) -> datetime:
    return dt.replace(hour=0, minute=0, second=0, microsecond=0)


def _day(ts) -> str:
    return (datetime.fromtimestamp(ts, timezone.utc).strftime("%Y-%m-%d")
            if ts else "")


def resolve_range(since, until=None, *, now: datetime = None):
    """(start_epoch, end_epoch, label). ``since`` accepts an ISO date
    (YYYY-MM-DD) or a keyword: today, yesterday, this_week, last_week,
    last_month. ``until`` (ISO, optional) defaults to now; the window is
    [start, end). ``now`` is injectable for deterministic tests."""
    now = now or datetime.now(timezone.utc)
    # Coerce defensively: a non-string `since` (int/list from a sloppy caller)
    # would crash .strip()/.lower(); degrade to ISO-parse-or-default instead.
    s = (str(since) if since is not None else "").strip().lower()
    start = end = None
    label = s or "last_week"
    if s in ("last_week", "geçen_hafta", "gecen_hafta"):
        this_mon = _day_start(now - timedelta(days=now.weekday()))
        start, end, label = this_mon - timedelta(days=7), this_mon, "last week"
    elif s == "this_week":
        start, end, label = _day_start(now - timedelta(days=now.weekday())), now, "this week"
    elif s == "last_month":
        start, end, label = _day_start(now) - timedelta(days=30), now, "last 30 days"
    elif s == "yesterday":
        d0 = _day_start(now - timedelta(days=1))
        start, end, label = d0, d0 + timedelta(days=1), "yesterday"
    elif s in ("today", ""):
        start, end, label = _day_start(now), now, "today"
    else:
        try:
            start = datetime.fromisoformat(s[:10]).replace(tzinfo=timezone.utc)
            label = s[:10]
        except Exception:
            start, label = _day_start(now) - timedelta(days=7), "last 7 days"
    if end is None:
        if until:
            try:
                end = (datetime.fromisoformat(str(until)[:10])
                       .replace(tzinfo=timezone.utc) + timedelta(days=1))
            except Exception:
                end = now
        else:
            end = now
    return start.timestamp(), end.timestamp(), label


def _empty(ok, label, since, until, error=None):
    out = {"ok": ok, "range": label, "since": since, "until": until,
           "total": 0, "replied": 0, "unreplied": 0, "handled": 0, "open": 0,
           "maybe_handled": 0, "open_external": 0, "open_to_me": 0,
           "internal_domains": [], "by_status": {}, "messages": [], "by_sender": []}
    if error is not None:
        out["error"] = error
    return out


def collect(backend, ns, *, since="last_week", until=None,
            sources=EMAIL_SOURCES, now: datetime = None,
            internal_domains=None, user_display=None,
            noise_domains=None) -> dict:
    """Window the primary store's email rows to [since, until) and classify each
    RECEIVED one as replied_by_me / replied_by_colleague / handled_elsewhere /
    open, with structured evidence + per-sender totals. ``ok`` False only on a
    hard backend error; an empty inbox returns ok=True with total 0.

    ``internal_domains`` makes "answered" company-aware: when set (or via
    EVOSQL_INTERNAL_DOMAINS, or auto-derived from the user's own outbound
    domain), a colleague reply only counts when it comes from one of these
    domains — i.e. someone at the user's company answered, which is what closes a
    CUSTOMER email even if the user personally didn't. ``user_display`` (or
    EVOSQL_USER_DISPLAY, or the synced self_profile) flags mail addressed TO the
    user (in the To field) vs only CC'd."""
    from .server import _e
    from . import locales
    start, end, label = resolve_range(since, until, now=now)
    H = locales.heuristics()

    rows = []
    try:
        for row in backend._query(
                f"SELECT mem_value FROM __mem_{backend.memory} "
                f"WHERE mem_namespace = '{_e(ns)}' LIMIT 1000000") or []:
            try:
                rows.append(json.loads(row[0]))
            except Exception:
                pass
    except Exception as exc:   # noqa: BLE001
        return _empty(False, label, since, until, error=str(exc)[:200])

    emails = [d for d in rows if d.get("source") in sources]

    # --- "internal" (own-company) domains -----------------------------------
    # Explicit arg > EVOSQL_INTERNAL_DOMAINS env > auto-derived from the domains
    # the user themselves SENDS from (outbound mail), minus consumer freemail.
    # Empty -> a colleague reply is any different human (generic behaviour).
    raw_id = (internal_domains if internal_domains is not None
              else os.environ.get("EVOSQL_INTERNAL_DOMAINS", ""))
    if isinstance(raw_id, str):
        idoms = {x.strip().lower() for x in raw_id.split(",") if x.strip()}
    else:
        idoms = {str(x).strip().lower() for x in (raw_id or []) if str(x).strip()}
    if not idoms:
        idoms = {dm for dm in (_domain(d.get("from")) for d in emails if _outbound(d))
                 if dm and dm not in _FREEMAIL}

    # --- user's display name for the "addressed to me" (To vs CC) flag -------
    udisp = user_display or os.environ.get("EVOSQL_USER_DISPLAY") or ""
    if not udisp:
        try:
            for row in backend._query(
                    f"SELECT mem_value FROM __mem_{backend.memory} WHERE "
                    f"mem_namespace = '{_e(ns)}' AND mem_key LIKE '%self_profile%' "
                    f"LIMIT 1") or []:
                udisp = json.loads(row[0]).get("display_name") or ""
        except Exception:
            udisp = ""
    udispn = _fold(udisp.split("|")[0]) if udisp else ""   # drop a " | Org" suffix

    # --- noise domains (operator config; NO brand names in source) -----------
    # Notification/newsletter sender domains the operator wants treated as
    # automated (e.g. a PR/chat notification service, an HR mailer). Brand-
    # specific values live in EVOSQL_NOISE_DOMAINS, never hardcoded here.
    raw_nd = (noise_domains if noise_domains is not None
              else os.environ.get("EVOSQL_NOISE_DOMAINS", ""))
    if isinstance(raw_nd, str):
        ndoms = {x.strip().lower() for x in raw_nd.split(",") if x.strip()}
    else:
        ndoms = {str(x).strip().lower() for x in (raw_nd or []) if str(x).strip()}

    def _automated(d):
        dm = _domain(d.get("from"))
        return (_is_auto(d) or is_nonhuman_sender(_disp(d.get("from")))
                or (bool(ndoms) and (dm in ndoms
                    or any(dm.endswith("." + nd) or dm == nd for nd in ndoms))))

    # --- email thread index: (source, thread_key) -> [msg-info] sorted by ts --
    # Each entry knows WHO sent it (disp/addr), whether it was outbound (mine),
    # its text (for off-channel mention scan), and whether it is automated — so
    # the colleague / off-channel tiers can reason about it.
    threads: dict = {}
    for d in emails:
        src = d.get("source")
        disp = _disp(d.get("from"))
        threads.setdefault((src, _thread_key(d, src)), []).append({
            "ts": _ts(d), "out": _outbound(d), "disp": disp,
            "dispn": _fold(disp), "addr": _addr(d.get("from")),
            "internal": _outbound(d) or (_domain(d.get("from")) in idoms),
            "text": _email_text(d), "auto": _is_auto(d),
            "reply_subj": _is_reply_subject(d.get("subject")),
        })
    for v in threads.values():
        v.sort(key=lambda m: m["ts"])

    # --- cross-channel contact index: counterparty-name -> [contact] ----------
    # 1:1 teams/slack + iMessage messages grouped by the OTHER party's display
    # name. name_to_ids records the distinct identities seen per name so a name
    # shared by two different people ABSTAINS instead of mis-matching.
    contacts: dict = {}        # dispn -> [{ts, text, channel}]
    name_to_ids: dict = {}     # dispn -> set((channel, id))
    for d in rows:
        src = d.get("source")
        if src == "teams":
            if d.get("chat_type") != "oneOnOne":
                continue
            who, cid = _disp(d.get("chat_name")), d.get("chat_id")
        elif src == "slack":
            if d.get("channel_type") != "im":
                continue
            who, cid = _disp(d.get("channel_name")), d.get("channel_id")
        elif src == "imessage":
            who = _disp(d.get("chat") or d.get("handle"))
            cid = d.get("chat_id") or d.get("handle")
        else:
            continue
        whon = _fold(who)
        if not whon or whon == "?":
            continue
        contacts.setdefault(whon, []).append({
            "ts": _ts(d), "channel": src,
            "text": (d.get("text") or d.get("fact") or "").strip()})
        # Always register a distinct identity per contact row: a real id when we
        # have one, else a per-row sentinel. A duplicate-named row that lacks an
        # id must still raise the collision count and force an abstain, never
        # silently look like one more message from the SAME person.
        name_to_ids.setdefault(whon, set()).add(
            (src, str(cid)) if cid else ("?", id(d)))
    for v in contacts.values():
        v.sort(key=lambda c: c["ts"])

    def _mention(text):
        """Matched off-channel handoff phrase, or None. Vetoed when the same text
        asks a question ('can we get on a call?' — a future proposal), makes a
        fresh request, or says something is still outstanding ('please send…',
        'still waiting', 'hâlâ bekliyorum') — none of which is a PAST resolution."""
        if (not text or H.question.search(text)
                or H.handoff_veto.search(text)):
            return None
        m = H.handoff.search(text)
        return m.group(0) if m else None

    def classify(d):
        """(status, evidence) for one received email via the ordered cascade."""
        src = d.get("source")
        ts0 = _ts(d)
        thread = threads.get((src, _thread_key(d, src)), [])
        in_disp = _disp(d.get("from"))
        in_dispn = _fold(in_disp)
        in_addr = _addr(d.get("from"))
        # gmail threads on a real thread_id; outlook (and any default source) on
        # the normalized subject, which can collide across unrelated emails — so a
        # later message there must look like an actual reply/forward, not a fresh
        # same-subject mail, before it can close this one.
        subj_keyed = src != "gmail"

        # S0 — I replied in-thread (== legacy _replied). Only tier setting replied.
        mine = [m["ts"] for m in thread if m["out"] and m["ts"] >= ts0]
        if mine:
            at = _day(min(mine))
            return "replied_by_me", {
                "tier": "replied_by_me", "by": "you", "channel": src, "at": at,
                "phrase": None, "note": f"you replied in-thread {at}"}

        # S1 — a colleague replied in-thread: strictly later, IN-WINDOW, inbound,
        # human, a DIFFERENT party (neither display nor address matches the sender,
        # so a same-person chaser / alias address never counts), and ANSWERING
        # rather than asking (a later "?" is a chaser/question, not a resolution).
        for m in thread:
            if m["ts"] <= ts0 or m["ts"] >= end or m["out"] or m["auto"]:
                continue
            if subj_keyed and not m["reply_subj"]:
                continue                     # fresh / forwarded same-subject mail
            same = (m["dispn"] == in_dispn
                    or (m["addr"] and in_addr and m["addr"] == in_addr))
            if (same or is_nonhuman_sender(m["disp"])
                    or H.question.search(m["text"] or "")):
                continue
            if idoms and not m["internal"]:
                continue          # only an OWN-COMPANY reply answers a customer;
                                  # another external party writing does not.
            at = _day(m["ts"])
            note = f"{m['disp']} replied in-thread {at}"
            if src == "outlook":
                note += " (subject-matched thread)"
            return "replied_by_colleague", {
                "tier": "replied_by_colleague", "by": m["disp"], "channel": src,
                "at": at, "phrase": None, "note": note}

        # Weak tier needs an identified, human counterparty and no name collision.
        weak_ok = (_identified(in_dispn)
                   and not is_nonhuman_sender(in_disp) and not _is_auto(d)
                   and len(name_to_ids.get(in_dispn, ())) <= 1)

        # (There is deliberately NO bare cross-channel "we chatted" tier: merely
        # having a 1:1 message with someone of the same name after the email is no
        # evidence THIS email was the topic, and you talk to colleagues constantly.
        # An email is only marked handled-elsewhere when a message actually MENTIONS
        # an off-channel resolution — S3 below.)

        # S3 — a later message mentions an off-channel resolution. In-thread first
        # (a same-party "we sorted it on the phone" note), then same-counterparty
        # cross-channel. Scoped to this thread / this contact — never a global scan.
        for m in thread:
            if m["ts"] <= ts0 or m["ts"] >= end or m["auto"]:
                continue
            if subj_keyed and not m["reply_subj"]:
                continue                     # fresh same-subject mail, not a reply
            ph = _mention(m["text"])
            if ph:
                at = _day(m["ts"])
                return "handled_elsewhere", {
                    "tier": "handled_elsewhere", "by": m["disp"] or in_disp,
                    "channel": "off_channel", "at": at, "phrase": ph,
                    "note": f'off-channel handling mentioned: "{ph}" {at} (confirm)'}
        if weak_ok:
            for c in contacts.get(in_dispn, []):
                if not (ts0 < c["ts"] < end):
                    continue
                ph = _mention(c["text"])
                if ph:
                    at = _day(c["ts"])
                    return "handled_elsewhere", {
                        "tier": "handled_elsewhere", "by": in_disp,
                        "channel": c["channel"], "at": at, "phrase": ph,
                        "note": (f'off-channel handling mentioned on '
                                 f'{c["channel"]}: "{ph}" {at} (confirm)')}

        return "open", {}

    msgs = []
    for d in emails:
        if _outbound(d):
            continue                       # received only
        ts = _ts(d)
        if ts and not (start <= ts < end):
            continue                       # dated, but outside the window
        # An undated received email (ts == 0; no parseable timestamp) cannot be
        # windowed — include it as 'open' rather than silently drop it, so a real
        # message is never lost from the nag list (errs toward over-nagging).
        if not ts:
            status, ev = "open", {}
        else:
            status, ev = classify(d)
        # maybe = the handled call leaned on a HEURISTIC and wants confirmation:
        # the weak cross-channel / off-channel tiers always, AND a colleague reply
        # found via Outlook's subject-keyed threading (no real conversation id, so
        # a same-subject collision is possible). A Gmail thread_id colleague reply
        # and my own reply are confident (maybe=False).
        maybe = (status == "handled_elsewhere"
                 or (status == "replied_by_colleague" and d.get("source") != "gmail"))
        msgs.append({
            "date": _day(ts),
            "from": _disp(d.get("from")),
            "subject": ((d.get("subject") or "").strip()[:140] or "(no subject)"),
            "replied": status == "replied_by_me",
            "status": status,
            "handled": status != "open",
            "maybe": maybe,
            "by_whom": ev.get("by"),
            "via_channel": ev.get("channel"),
            "evidence": ev,
            "source": d.get("source"),
            # company / addressee facets (meaningful when internal_domains known):
            "from_internal": _domain(d.get("from")) in idoms,
            "automated": _automated(d),
            "addressed_to_me": bool(udispn) and udispn in _fold(d.get("to") or ""),
            "_ts": ts,
        })
    msgs.sort(key=lambda m: m["_ts"])
    for m in msgs:
        m.pop("_ts", None)

    by = {}
    for m in msgs:
        b = by.setdefault(m["from"], {"sender": m["from"], "count": 0,
                                      "replied": 0, "handled": 0})
        b["count"] += 1
        b["replied"] += 1 if m["replied"] else 0
        b["handled"] += 1 if m["handled"] else 0
    by_sender = sorted(by.values(), key=lambda x: (-x["count"], x["sender"]))
    for b in by_sender:
        b["unreplied"] = b["count"] - b["replied"]   # legacy meaning preserved
        b["open"] = b["count"] - b["handled"]

    return {
        "ok": True,
        "range": label, "since": since, "until": until,
        "total": len(msgs),
        "replied": sum(1 for m in msgs if m["replied"]),
        "unreplied": sum(1 for m in msgs if not m["replied"]),
        "handled": sum(1 for m in msgs if m["handled"]),
        "open": sum(1 for m in msgs if m["status"] == "open"),
        "maybe_handled": sum(1 for m in msgs if m["maybe"]),
        # open_external = the real "customer is waiting, nobody at the company has
        # replied" list (external human sender, still open). open_to_me = open mail
        # addressed TO the user (vs only CC'd).
        "open_external": sum(1 for m in msgs if m["status"] == "open"
                             and not m["from_internal"] and not m["automated"]),
        "open_to_me": sum(1 for m in msgs if m["status"] == "open"
                          and m["addressed_to_me"]),
        "internal_domains": sorted(idoms),
        "by_status": dict(Counter(m["status"] for m in msgs)),
        "messages": msgs,
        "by_sender": by_sender,
    }
