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

SOURCES = (("gmail", "gmail"), ("teams", "teams_chat"), ("outlook", "outlook"))
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


def _ts(d):
    if d.get("internal_date_ms"):
        try:
            return float(d["internal_date_ms"]) / 1000.0
        except Exception:
            pass
    for k in ("sent_at", "created_at", "received_at", "modified_at"):
        if d.get(k):
            try:
                return datetime.fromisoformat(
                    str(d[k]).replace("Z", "+00:00")).timestamp()
            except Exception:
                pass
    return 0.0


def _disp(name):
    return ((name or "").split("<")[0].split("|")[0].strip().strip('"')) or "?"


def _is_auto(d):
    if _AUTO_FROM.search(d.get("from") or ""):
        return True
    lab = str(d.get("labels") or "")
    return any(x in lab for x in _AUTO_LABELS)


def _thread_key(d, source):
    if source == "gmail":
        return d.get("thread_id") or d.get("message_id")
    if source == "teams":
        return d.get("chat_id")
    subj = re.sub(r'(?i)^\s*(re|fwd|fw)\s*:\s*', '', d.get("subject") or "").strip()
    return subj or d.get("message_id")


def _detect_my_teams_id(teams_msgs):
    """'Me' is the sender_id present across the most distinct 1:1 chats — every
    counterparty appears in just their own chat, but you appear in all of yours."""
    from collections import defaultdict
    chats = defaultdict(set)
    for d in teams_msgs:
        if d.get("sender_id") and d.get("chat_id"):
            chats[d["sender_id"]].add(d["chat_id"])
    if not chats:
        return None
    return max(chats.items(), key=lambda kv: len(kv[1]))[0]


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


def job_open_loops(backend, ns: str) -> int:
    from .server import _e
    now = datetime.now(timezone.utc).timestamp()
    team = _team_names(backend, ns)

    # --- load conversational records, bucket into threads -----------------
    raw = {"gmail": [], "teams": [], "outlook": []}
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(ns)}' AND ("
        f"mem_key LIKE 'gmail%' OR mem_key LIKE 'teams_chat%' "
        f"OR mem_key LIKE 'outlook%') LIMIT 1000000") or []
    for (v,) in rows:
        try:
            d = json.loads(v)
        except Exception:
            continue
        src = d.get("source")
        if src in raw:
            raw[src].append(d)

    my_id = _detect_my_teams_id(raw["teams"])

    threads = {}   # (source, key) -> list[(ts, outbound, who, text)]
    for source in ("gmail", "teams", "outlook"):
        for d in raw[source]:
            if source == "teams":
                if d.get("chat_type") != "oneOnOne":
                    continue   # v0: 1:1 only; group "@-me" detection needs an LLM
                out = d.get("sender_id") == my_id
                who = _disp(d.get("chat_name"))
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
        if source != "teams" and not had_my_reply:
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
