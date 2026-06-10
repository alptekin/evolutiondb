"""
open_loops — "who is waiting on me" / commitment tracking (the assistant wedge).

Deterministic thread-state analysis over the conversational sources (gmail,
teams, outlook): group messages by thread, find the last one, and flag a thread
whose last message is INBOUND (someone wrote to you and you have not replied
since) as an OPEN LOOP — something a person is waiting on you for.

Signal hygiene, all cheap and LLM-free:
  * two-way filter — a mail thread only counts if you have replied in it at
    least once (kills newsletters/automated mail you never answer);
  * closure heuristic — a short "thanks / done / çözüldü" inbound ack closes
    the loop rather than opening it;
  * automated-sender filter — noreply@, CATEGORY_PROMOTIONS, etc.

Cross-feeding: reads <prefix>_self (the self-model) to mark loops whose
counterparty is in your core team as higher priority. Emits one record per
loop into <prefix>_loops, and flips loops that are no longer open to
status="resolved" so a closed thread stops nagging.
"""
from __future__ import annotations

import json
import os
import re
from datetime import datetime, timezone

SOURCES = (("gmail", "gmail"), ("teams", "teams_chat"), ("outlook", "outlook"),
           ("slack", "slack"), ("imessage", "imessage"))
ACTIONABLE_DAYS = 90          # older than this = stale, kept but deprioritised
PROMISE_DAYS = 45             # a promise older than this is probably moot
_QUESTION = re.compile(r'\?|\bmi\b|\bmu\b|\bmı\b|\bmü\b|misin|musun|edebilir', re.I)
# things YOU said you'd do, in your OUTBOUND messages -> "promises I made"
_PROMISE = re.compile(
    r'(yapacağ|yapıca|gönderece|hallede|halledece|bakacağ|bakıca|ayarlayaca|'
    r'ekleyece|dönece|dönerim|iletece|yollayaca|yollarım|çözece|tamamlaya|'
    r'hazırlaya|paylaşaca|kontrol edece|halledeyim|bakayım|yapayım|'
    r"i will\b|i'll\b|going to|will do|will send|will check|let me)", re.I)

_CLOSE = re.compile(
    r'(çözüldü|düzelt|tamamd|teşekkür|halloldu|sağ ?ol|thank|done|eyvallah|'
    r'süper|harika|tamam abi|ok abi|abandon|👍|🙏|🙌|✅)', re.I)
_AUTO_FROM = re.compile(
    r'(noreply|no-reply|donotreply|notification|mailer|newsletter|bounce|'
    r'bülten|destek@|support@|info@|news@)', re.I)
_AUTO_LABELS = ("CATEGORY_PROMOTIONS", "CATEGORY_UPDATES",
                "CATEGORY_FORUMS", "CATEGORY_SOCIAL")
# Language-neutral automated/notification CONTENT markers: one-time / OTP /
# verification codes and unsubscribe footers that a machine sends and a person
# never "replies" to, so they must not open a loop. Deliberately NOT keyed on
# any single human language — the heavy lifting is the language-neutral sender
# heuristic (_is_shortcode_sender); this only adds the obvious cross-language
# machine markers. Kept specific enough not to fire on normal 1:1 conversation.
_AUTO_CONTENT = re.compile(
    r'(verification code|one[\s-]?time (?:code|password|pin|passcode)|\botp\b|'
    r'\bunsubscribe\b|do[\s-]?not[\s-]?reply|'
    r'\b(?:code|otp|pin)\b[:\s]+\d{3,8}\b|\b\d{4,8}\b\s+is your\b)', re.I)


def _is_shortcode_sender(name: str) -> bool:
    """An SMS/brand sender id, not a person: a short numeric short-code (a real
    phone has >= 10 digits) or an ALL-CAPS alphabetic brand id (e.g.
    'EXAMPLECO', 'WIDGET CORP'). Real contacts are stored proper-case
    (e.g. 'John Doe'), so this separates the two without an allow-list."""
    n = (name or "").strip()
    if len(n) < 3:
        return False
    has_alpha = any(c.isalpha() for c in n)
    if not has_alpha:                       # purely numeric/symbol sender
        digits = re.sub(r"\D", "", n)
        return bool(digits) and len(digits) <= 6      # short-code, not a phone
    return not any(c.islower() for c in n)            # ALL-CAPS brand id


def _ts(d):
    if d.get("internal_date_ms"):
        try:
            return float(d["internal_date_ms"]) / 1000.0
        except Exception:
            pass
    for k in ("sent_at", "created_at", "received_at", "modified_at"):
        if d.get(k):
            try:
                dt = datetime.fromisoformat(str(d[k]).replace("Z", "+00:00"))
                # A timezone-less timestamp would otherwise be read by
                # .timestamp() as LOCAL time, skewing age_days / staleness by
                # the host's UTC offset. Connector timestamps are UTC, so pin
                # naive values to UTC.
                if dt.tzinfo is None:
                    dt = dt.replace(tzinfo=timezone.utc)
                return dt.timestamp()
            except Exception:
                pass
    return 0.0


def _disp(name):
    return ((name or "").split("<")[0].split("|")[0].strip().strip('"')) or "?"


def _is_auto(d):
    # Channel-aware: gmail/outlook carry the sender in `from`; iMessage/SMS put
    # the brand/short-code in `chat`/`handle`. The two-way "did I ever reply"
    # filter is bypassed for teams/slack/imessage (so a first inbound still
    # counts), which is exactly why automated SMS senders leaked into the brief
    # as "waiting on you" — this filter is what stops them.
    sender = d.get("from") or d.get("chat") or d.get("handle") or ""
    if _AUTO_FROM.search(sender):
        return True
    lab = str(d.get("labels") or "")
    if any(x in lab for x in _AUTO_LABELS):
        return True
    content = " ".join(str(d.get(k) or "")
                       for k in ("text", "snippet", "fact", "subject"))
    if _AUTO_CONTENT.search(content):
        return True
    return _is_shortcode_sender(_disp(sender))


def _thread_key(d, source):
    if source == "gmail":
        return d.get("thread_id") or d.get("message_id")
    if source == "teams":
        return d.get("chat_id")
    if source == "slack":
        return d.get("channel_id")
    if source == "imessage":
        return d.get("chat_id") or d.get("handle")
    subj = re.sub(r'(?i)^\s*(re|fwd|fw)\s*:\s*', '', d.get("subject") or "").strip()
    return subj or d.get("message_id")


def _detect_my_id(msgs, key_field):
    """Best-effort 'me' sender_id for a channel that doesn't flag direction
    per-message. key_field is the per-conversation id (chat_id for teams,
    channel_id for slack DMs).

    1. If any message carries an explicit `is_from_me` flag, its sender_id IS
       me — trust that over any heuristic.
    2. Otherwise 'me' is the sender present across the most distinct 1:1
       conversations (every counterparty appears in just their own chat, but
       you appear in all of yours). Only trust this when the top sender is in
       STRICTLY more conversations than the runner-up. With a single shared
       conversation both sides tie at one, and guessing would INVERT every
       loop's direction (awaiting_them <-> awaiting_me), so return None
       (direction unknown) — callers then treat messages as inbound rather
       than mislabel your own as the counterparty's."""
    from collections import defaultdict
    for d in msgs:
        if d.get("is_from_me") and d.get("sender_id"):
            return d["sender_id"]
    convos = defaultdict(set)
    for d in msgs:
        if d.get("sender_id") and d.get(key_field):
            convos[d["sender_id"]].add(d[key_field])
    if not convos:
        return None
    ranked = sorted(convos.items(), key=lambda kv: len(kv[1]), reverse=True)
    if len(ranked) >= 2 and len(ranked[0][1]) > len(ranked[1][1]):
        return ranked[0][0]
    return None


def _detect_my_teams_id(teams_msgs):
    return _detect_my_id(teams_msgs, "chat_id")


def _team_names(backend, ns):
    """Core-team names from the self-model, if it has run yet (cross-feeding)."""
    from .server import _e
    try:
        rows = backend._query(
            f"SELECT mem_value FROM __mem_{backend.selfmodel_store} "
            f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = 'self_team'") or []
        for (v,) in rows:
            d = json.loads(v)
            return {(_disp(x)).lower() for x in (d.get("content") or [])}
    except Exception:
        pass
    return set()


def _classify(open_now, language="english"):
    """Single anthropic call over the inbound ('awaiting_me') loops: label each
    request / question / fyi / social / closure and give a clean one-line 'what'.
    The deterministic pass over-includes (FYI/emotional messages); this trims to
    what actually needs an answer. Opt-in via EVOSQL_LOOP_LLM=anthropic; on any
    error the deterministic records stand unchanged."""
    be = os.environ.get("EVOSQL_LOOP_LLM", "").strip().lower()
    items = [(k, r) for k, r in open_now.items() if r.get("direction") == "awaiting_me"]
    if be not in ("anthropic", "sonnet") or not items:
        return
    payload = [{"id": k, "from": r["counterparty"], "msg": r["snippet"]}
               for k, r in items]
    prompt = (
        "Each item is the LAST message in a thread where someone wrote to the "
        "user and the user hasn't replied. Classify what it needs from the user.\n"
        "type: 'request' (asks the user to do something), 'question' (asks for an "
        "answer), 'fyi' (informational, no reply needed), 'social' (chit-chat/"
        "emotional), 'closure' (says it's already done/thanks). 'what' = a 6-10 "
        f"word summary of what's owed, written in {language}.\n"
        "Return STRICT JSON: [{\"id\":\"...\",\"type\":\"...\",\"what\":\"...\"}]\n\n"
        + json.dumps(payload, ensure_ascii=False))
    try:
        import anthropic
        c = anthropic.Anthropic()
        msg = c.messages.create(
            model=os.environ.get("EVOSQL_LOOP_LLM_MODEL", "claude-haiku-4-5-20251001"),
            max_tokens=2000, messages=[{"role": "user", "content": prompt}])
        m = re.search(r'\[.*\]', msg.content[0].text, re.S)
        for d in (json.loads(m.group(0)) if m else []):
            r = open_now.get(d.get("id"))
            if r:
                r["loop_type"] = d.get("type", "request")
                if d.get("what"):
                    r["what"] = d["what"][:120]
    except Exception as exc:
        for _, r in items:
            r["classify_error"] = str(exc)[:120]


def mark_resolved(backend, ns: str, loop_key: str, *, reason: str = "sent_reply"):
    """Close an open loop because the user acted on it (e.g. approve_send
    delivered a reply). Flips the stored record to status='resolved' so the brief
    stops nagging immediately, rather than waiting for the next open_loops run to
    notice the thread moved. No-op (returns False) if the key isn't a stored loop
    or it's already resolved."""
    from .server import _e
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.loops_store} "
        f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = '{_e(loop_key)}'") or []
    if not rows or not rows[0] or not rows[0][0]:
        return False
    try:
        rec = json.loads(rows[0][0])
    except Exception:
        return False
    if rec.get("status") == "resolved":
        return False
    rec["status"] = "resolved"
    rec["resolved_by"] = reason
    rec["refreshed_at"] = datetime.now(timezone.utc).isoformat()
    backend._exec(f"MEMORY PUT INTO {backend.loops_store} VALUES "
                  f"('{_e(ns)}','{_e(loop_key)}','{_e(json.dumps(rec))}')")
    return True


def job_open_loops(backend, ns: str) -> int:
    from .server import _e
    now = datetime.now(timezone.utc).timestamp()
    team = _team_names(backend, ns)

    # --- load conversational records, bucket into threads -----------------
    raw = {"gmail": [], "teams": [], "outlook": [], "slack": [], "imessage": []}
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(ns)}' AND ("
        f"mem_key LIKE 'gmail%' OR mem_key LIKE 'teams_chat%' "
        f"OR mem_key LIKE 'outlook%' OR mem_key LIKE 'slack%' "
        f"OR mem_key LIKE 'imessage%') LIMIT 1000000") or []
    for (v,) in rows:
        try:
            d = json.loads(v)
        except Exception:
            continue
        src = d.get("source")
        if src in raw:
            raw[src].append(d)

    my_id = _detect_my_teams_id(raw["teams"])
    my_slack_id = _detect_my_id(raw["slack"], "channel_id")

    threads = {}   # (source, key) -> list[(ts, outbound, who, text)]
    for source in ("gmail", "teams", "outlook", "slack", "imessage"):
        for d in raw[source]:
            if source == "teams":
                if d.get("chat_type") != "oneOnOne":
                    continue   # v0: 1:1 only; group "@-me" detection needs an LLM
                out = d.get("sender_id") == my_id
                who = _disp(d.get("chat_name"))
                text = d.get("text") or d.get("fact", "")
                subj = ""
            elif source == "slack":
                if d.get("channel_type") != "im":
                    continue   # v0: DMs only; channel "@-me" detection needs an LLM
                out = d.get("sender_id") == my_slack_id
                who = _disp(d.get("channel_name"))
                text = d.get("text") or d.get("fact", "")
                subj = ""
            elif source == "imessage":
                out = bool(d.get("is_from_me"))   # the DB flags direction directly
                who = _disp(d.get("chat"))
                text = d.get("text") or d.get("fact", "")
                subj = ""
            elif source == "gmail":
                out = "SENT" in str(d.get("labels") or "")
                who = _disp(d.get("from"))
                subj = d.get("subject") or ""
                text = d.get("snippet") or ""
            else:  # outlook
                out = "sent" in (d.get("folder") or "").lower()
                who = _disp(d.get("from"))
                subj = d.get("subject") or ""
                text = d.get("snippet") or ""
            tk = (source, _thread_key(d, source))
            if not tk[1]:
                continue
            threads.setdefault(tk, []).append(
                (_ts(d), out, who, subj, text, _is_auto(d)))

    # --- decide open loops ------------------------------------------------
    open_now = {}      # loop_key -> record
    for (source, key), msgs in threads.items():
        msgs.sort(key=lambda m: m[0])
        t, out, who, subj, text, auto = msgs[-1]
        if t == 0 or auto:
            continue
        had_my_reply = any(m[1] for m in msgs)
        had_their_msg = any(not m[1] for m in msgs)
        age = int((now - t) / 86400)
        loop_key = "loop_%s_%s" % (source, abs(hash(key)) % (10 ** 12))
        base = {
            "kind": "open_loop", "source": source, "counterparty": who,
            "thread_key": str(key),
            "last_ts": datetime.fromtimestamp(t, timezone.utc).isoformat(),
            "age_days": age, "subject": subj[:120],
            "snippet": (subj + " " + text).strip()[:200] if subj else (text or "")[:200],
            "status": "open",
            "actionable": age <= ACTIONABLE_DAYS,
            "priority": "high" if who.lower() in team else "normal",
            "refreshed_at": datetime.fromtimestamp(now, timezone.utc).isoformat(),
        }
        if out:
            # I sent last — only a loop if I ASKED something and they haven't replied
            if had_their_msg and _QUESTION.search(text or ""):
                # counterparty is the person I'm waiting on, not me. For mail the
                # last (outbound) message's "from" is my own address; pick the
                # other party from the inbound side (same fix as the promise path).
                inbound_who = [m[2] for m in msgs if not m[1]]
                if inbound_who:
                    base["counterparty"] = inbound_who[-1]
                base["direction"] = "awaiting_them"
                open_now[loop_key] = base
            continue
        # last message inbound -> someone is waiting on me
        if source not in ("teams", "slack", "imessage") and not had_my_reply:
            continue                                   # one-way mail (newsletter)
        if bool(_CLOSE.search(text or "")) and len((text or "")) < 70:
            continue                                   # short ack -> closed
        base["direction"] = "awaiting_me"
        open_now[loop_key] = base

    # --- promises: things YOU said you'd do, not obviously closed since -----
    for (source, key), msgs in threads.items():
        mine = [m for m in msgs if m[1] and _PROMISE.search(m[4] or "")]
        if not mine:
            continue
        t, out, who, subj, text, auto = mine[-1]      # your most recent promise
        age = int((now - t) / 86400)
        if age > PROMISE_DAYS:
            continue
        # a later inbound "thanks/done" implies it got handled
        if any(m[0] > t and (not m[1]) and _CLOSE.search(m[4] or "") for m in msgs):
            continue
        inbound_who = [m[2] for m in msgs if not m[1]]
        cp = inbound_who[-1] if inbound_who else who    # the other party, not me
        pk = "loop_iowe_%s_%s" % (source, abs(hash(key)) % (10 ** 12))
        open_now[pk] = {
            "kind": "open_loop", "direction": "i_owe_them", "source": source,
            "counterparty": cp, "thread_key": str(key),
            "last_ts": datetime.fromtimestamp(t, timezone.utc).isoformat(),
            "age_days": age, "subject": "", "snippet": (text or "")[:200],
            "what": (text or "")[:120], "status": "open", "loop_type": "promise",
            "actionable": age <= ACTIONABLE_DAYS,
            "priority": "high" if cp.lower() in team else "normal",
            "refreshed_at": datetime.fromtimestamp(now, timezone.utc).isoformat(),
        }

    # --- LLM classifier: request vs question vs FYI/closure (opt-in, 1 call) ---
    from . import prefs
    lang, _set = prefs.get_language(backend, ns)
    _classify(open_now, lang)

    # --- close loops that are no longer open (cross-run resolution) -------
    existing = {}
    for row in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.loops_store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []:
        try:
            existing[row[0]] = json.loads(row[1])
        except Exception:
            pass
    for k, rec in existing.items():
        if rec.get("status") == "open" and k not in open_now:
            rec["status"] = "resolved"
            rec["refreshed_at"] = datetime.fromtimestamp(now, timezone.utc).isoformat()
            backend._exec(f"MEMORY PUT INTO {backend.loops_store} VALUES "
                          f"('{_e(ns)}','{_e(k)}','{_e(json.dumps(rec))}')")

    # --- write current open loops ----------------------------------------
    for k, rec in open_now.items():
        backend._exec(f"MEMORY PUT INTO {backend.loops_store} VALUES "
                      f"('{_e(ns)}','{_e(k)}','{_e(json.dumps(rec))}')")
    return len(open_now)
