"""
brief — the morning brief: turns the open_loops + self_model stores into a short
human read. "Here's who's waiting on you, what you're waiting on, and the day's
context." Read-only.

  python -m mcp_server_evosql.brief              # prints the brief for MCP_USER_ID
  python -m mcp_server_evosql.brief --json       # machine-readable
"""
from __future__ import annotations

import argparse
import json
import os
import sys
from datetime import datetime, timezone

from . import locales


def _load(backend, store, ns):
    from .server import _e
    out = []
    for row in backend._query(
            f"SELECT mem_value FROM __mem_{store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []:
        try:
            out.append(json.loads(row[0]))
        except Exception:
            pass
    return out


# sources that count as "activity" in the yesterday recap (calendar shown
# separately as meetings, so gcal is intentionally excluded here)
_INGEST_SRC = ("gmail", "outlook", "slack", "teams", "imessage",
               "notes", "browser", "github", "youtube", "azure")

# activity-count nouns, by locale code, English fallback. Kept here (not in the
# locale files) so the recap's plural nouns stay next to the counting logic.
SRC_LABEL = {
    "en": {"gmail": "emails", "outlook": "emails", "slack": "Slack messages",
           "teams": "Teams messages", "imessage": "iMessages", "notes": "notes",
           "browser": "pages", "github": "GitHub items", "youtube": "videos",
           "azure": "Azure DevOps items"},
    "tr": {"gmail": "e-posta", "outlook": "e-posta", "slack": "Slack mesajı",
           "teams": "Teams mesajı", "imessage": "iMessage", "notes": "not",
           "browser": "sayfa", "github": "GitHub öğesi", "youtube": "video",
           "azure": "Azure DevOps öğesi"},
}


def _primary_rows(backend, ns):
    """Every row in the primary memory store (the ingested feed)."""
    from .server import _e
    out = []
    for row in backend._query(
            f"SELECT mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []:
        try:
            out.append(json.loads(row[0]))
        except Exception:
            pass
    return out


def _row_day(rec):
    """The day (YYYY-MM-DD) a synced row belongs to, taken from whichever ISO
    timestamp field its connector wrote (gmail=sent_at, slack=created_at, ...),
    else '' when none is present."""
    for f in ("created_at", "sent_at", "when", "date", "timestamp"):
        v = rec.get(f)
        if isinstance(v, str) and len(v) >= 10:
            return v[:10]
    return ""


def collect(backend, ns):
    loops = _load(backend, backend.loops_store, ns)
    selfm = {d.get("section"): d.get("content")
             for d in _load(backend, backend.selfmodel_store, ns)}

    openl = [d for d in loops if d.get("status") == "open"]

    def needs_reply(d):
        # if classified, keep only real requests/questions; else keep all
        lt = d.get("loop_type")
        return lt in (None, "request", "question")

    from . import open_loops
    _dismissed = open_loops.load_dismissed(backend, ns)

    def human(d):
        # drop service/automated senders (bank/OTP/brand SMS ids, masked
        # numbers) that slipped into the loop store before the sender filter —
        # so the brief shows people, not notifications.
        return not open_loops.is_nonhuman_sender(d.get("counterparty"),
                                                 d.get("source"))

    def shown(d):
        # honour the user's hand dismissals ("this isn't a loop, stop showing it")
        return not open_loops.is_dismissed(_dismissed, d)

    waiting_me = [d for d in openl
                  if d.get("direction") == "awaiting_me"
                  and d.get("actionable", True) and needs_reply(d)
                  and human(d) and shown(d)]
    waiting_them = [d for d in openl if d.get("direction") == "awaiting_them"
                    and d.get("actionable", True) and human(d) and shown(d)]
    promises = [d for d in openl if d.get("direction") == "i_owe_them"
                and d.get("actionable", True) and human(d) and shown(d)]
    stale = [d for d in openl
             if shown(d) and (not d.get("actionable", True) or not human(d))]

    # priority high first, then most recent
    waiting_me.sort(key=lambda d: (0 if d.get("priority") == "high" else 1,
                                   d.get("age_days", 999)))
    waiting_them.sort(key=lambda d: d.get("age_days", 999))
    promises.sort(key=lambda d: d.get("age_days", 999))

    # day context: yesterday's activity recap + today's schedule, from any
    # calendar source (Google "gcal" or Outlook/M365 "outlook") and the
    # ingested feed, in one pass over the store.
    from . import meeting
    today = meeting.resolve_day("today")
    yday = meeting.resolve_day("yesterday")
    rows = _primary_rows(backend, ns)

    def _evday(rec):
        s = rec.get("start") or ""
        return s[:10] if len(s) >= 10 else ""

    events = [r for r in rows
              if r.get("source") in meeting.CAL_SOURCES
              and r.get("kind") == "event"]
    today_events = sorted([e for e in events if _evday(e) == today],
                          key=lambda e: (e.get("start") or ""))
    yest_meetings = sorted([e for e in events if _evday(e) == yday],
                           key=lambda e: (e.get("start") or ""))
    y_counts = {}
    for r in rows:
        src = r.get("source")
        if src in _INGEST_SRC and _row_day(r) == yday:
            y_counts[src] = y_counts.get(src, 0) + 1

    # authoritative role: a Graph /me job title (source of truth) beats the
    # LLM-inferred self-model summary, so the brief states the real title.
    prof = next((r for r in rows
                 if r.get("kind") == "self_profile"
                 and (r.get("role_summary") or r.get("job_title"))), None)
    if prof:
        selfm = dict(selfm)
        selfm["role"] = {"summary": prof.get("role_summary") or prof.get("job_title"),
                         "confidence": 1.0, "source": prof.get("source") or "profile"}

    return {"self": selfm, "waiting_me": waiting_me, "waiting_them": waiting_them,
            "promises": promises, "stale": stale,
            "today_events": today_events,
            "yesterday": {"date": yday, "counts": y_counts,
                          "meetings": yest_meetings}}


def _line(d):
    what = d.get("what") or d.get("snippet") or ""
    star = "⭐" if d.get("priority") == "high" else "  "
    return f"   {star} {d['counterparty'][:22]:22} · {d.get('age_days','?'):>3}g · {what[:60]}"


def render(data, name="", lang_set=True, lang="english") -> str:
    U = locales.ui(lang)
    sm = data["self"]
    role = ""
    r = sm.get("role")
    if isinstance(r, dict):
        role = r.get("summary", "")
    today = datetime.now(timezone.utc).strftime("%d %b %Y")
    L = []
    L.append(f"☀️  {U['good_morning']}{(' ' + name.upper()) if name else ''} — {today}")
    if role:
        L.append(f"    {role[:96]}")
    L.append("")

    # ---- yesterday recap ----
    labels = SRC_LABEL.get(locales.normalize_lang(lang), SRC_LABEL["en"])
    yd = data.get("yesterday") or {}
    L.append(f"📆 {U.get('yesterday_header', 'YESTERDAY')} · {yd.get('date', '')}")
    counts = yd.get("counts") or {}
    parts = [f"{counts[s]} {labels.get(s, s)}" for s in _INGEST_SRC if counts.get(s)]
    if parts:
        L.append("    " + "  ·  ".join(parts))
    ym = yd.get("meetings") or []
    if ym:
        titles = ", ".join((m.get("summary") or "—")[:28] for m in ym[:4])
        L.append(f"    🕒 {len(ym)} {U.get('meetings_word', 'meetings')}: {titles}")
    if not parts and not ym:
        L.append("    " + U.get("quiet_day", "A quiet day."))
    L.append("")

    # ---- today's schedule ----
    te = data.get("today_events") or []
    L.append(f"📅 {U.get('today_schedule', 'TODAY')} ({len(te)})")
    if not te:
        L.append("    " + U.get("no_meetings_today", "No meetings scheduled."))
    for m in te[:8]:
        start = m.get("start") or ""
        when = (U.get("all_day", "all day") if m.get("all_day")
                else (start[11:16] if "T" in start and len(start) >= 16 else ""))
        L.append(f"    🕒 {when:5}  {(m.get('summary') or '—')[:60]}")
    L.append("")

    L.append(f"🔴 {U['waiting_on_you']} ({len(data['waiting_me'])})")
    if not data["waiting_me"]:
        L.append(U["waiting_on_you_empty"])
    for d in data["waiting_me"][:15]:
        L.append(_line(d))
    L.append("")
    L.append(f"🟡 {U['you_are_waiting']} ({len(data['waiting_them'])})")
    for d in data["waiting_them"][:8]:
        L.append(_line(d))
    if not data["waiting_them"]:
        L.append(U["none"])
    L.append("")
    L.append(f"🟢 {U['promises']} ({len(data.get('promises', []))})")
    for d in data.get("promises", [])[:8]:
        L.append(_line(d))
    if not data.get("promises"):
        L.append(U["none"])
    com = sm.get("commitments") or {}
    oc = com.get("open_count") if isinstance(com, dict) else None
    L.append("")
    tail = f"📋 {U['open_commitments']}: {oc if oc is not None else len(data['waiting_me'])}"
    if data["stale"]:
        tail += f"  ·  {len(data['stale'])} {U['stale_suffix']}"
    L.append(tail)
    if not lang_set:
        L.append("")
        L.append(U["lang_hint"])
    return "\n".join(L)


def queue_drafts(backend, ns, *, top, name=None):
    """Draft replies for the top waiting-on-you loops and QUEUE them as pending
    outbox items — the brief's one-command bridge into the action loop. Returns
    the queued items. Sends nothing; each still needs approve_send."""
    from . import suggest, outbox
    loops = suggest._load_loops(backend, ns)
    res = suggest.suggest_replies(backend, ns, top=top, name=name)
    queued = []
    for s in res["suggestions"]:
        loop = loops.get(s["loop_key"], {})
        rcpt = outbox.recipient_for(backend, ns, loop)
        try:
            queued.append(outbox.queue(
                backend, ns, s["loop_key"], s["draft"],
                channel=loop.get("source"), source=loop.get("source"),
                to=rcpt["to"], to_email=rcpt["to_email"],
                thread_id=loop.get("thread_key"), subject=loop.get("subject")))
        except ValueError:
            continue            # e.g. dedup-suppressed (already replied recently)
    return queued


def approve_queued(backend, ns, item_id=None):
    """Approve a queued reply by id, or every pending one when id is None.
    Returns the approve_send results (delivery dry-runs unless sending is on)."""
    from . import outbox
    if item_id:
        return [outbox.approve_send(backend, ns, item_id)]
    return [outbox.approve_send(backend, ns, it["id"])
            for it in outbox.list_pending(backend, ns)]


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--language", metavar="LANG",
                    help="set the summary language (the /language command), "
                         "e.g. türkçe / english")
    ap.add_argument("--draft", type=int, nargs="?", const=3, metavar="N",
                    help="also draft a reply for the top N waiting-on-you loops")
    ap.add_argument("--queue", type=int, nargs="?", const=3, metavar="N",
                    help="draft AND queue replies for the top N waiting-on-you "
                         "loops (pending approval — nothing is sent)")
    ap.add_argument("--approve", nargs="?", const="all", metavar="ID",
                    help="approve a queued reply by id (or all pending if no id); "
                         "delivers only when sending is enabled, else dry-run")
    args = ap.parse_args()
    from . import scheduler, prefs
    prefix = os.environ.get("MCP_STORE_PREFIX", "mcp")
    backend = scheduler._backend(prefix)
    ns = os.environ.get("MCP_USER_ID") or (
        scheduler.discover_namespaces(backend) or ["default"])[0]
    lang, was_set = prefs.get_language(backend, ns)

    if args.language:
        lang = prefs.set_language(backend, ns, args.language)
        print(locales.t("lang_set", lang, lang=lang))
        return 0

    if args.approve is not None:
        results = approve_queued(backend, ns,
                                 None if args.approve == "all" else args.approve)
        if not results:
            print(locales.t("no_pending_approval", lang))
            return 0
        for r in results:
            if not r.get("ok"):
                print(f"✗ {r.get('error')}")
                continue
            it = r.get("item", {})
            tag = (locales.t("sent", lang) if r.get("sent")
                   else locales.t("approved_dryrun", lang))
            extra = (locales.t("loop_closed", lang) if r.get("loop_resolved")
                     else "")
            detail = (f"  [{r.get('detail')}]"
                      if not r.get("sent") and r.get("detail") else "")
            print(f"{tag}: {it.get('id')} →{it.get('to') or '?'}{detail}{extra}")
        return 0

    if args.queue is not None:
        name = ns.split("_")[0].capitalize()
        items = queue_drafts(backend, ns, top=args.queue, name=name)
        if not items:
            print(locales.t("no_loop_to_queue", lang))
            return 0
        print(f"{'='*68}\n{locales.t('queued_header', lang, n=len(items))}")
        for it in items:
            print(f"   {it['id']}  →{it.get('to') or '?'}\n"
                  f"     {(it.get('body') or '')[:80]}")
        print("\n" + locales.t("queue_send_hint", lang))
        return 0

    data = collect(backend, ns)
    if args.json:
        print(json.dumps(data, ensure_ascii=False, indent=2))
        return 0
    print(render(data, name=ns.split("_")[0], lang_set=was_set, lang=lang))

    if args.draft:
        from . import suggest
        name = ns.split("_")[0].capitalize()
        role = ""
        r = data["self"].get("role")
        if isinstance(r, dict):
            role = r.get("summary", "")
        threads = suggest._index_threads(backend, ns)
        print("\n" + "=" * 68 + "\n" + locales.t("draft_replies", lang))
        for d in data["waiting_me"][:args.draft]:
            msgs = threads.get((d["source"], d["thread_key"]), [])
            draft = suggest.draft_reply(msgs, d, role, name, lang)
            print(f"\n🔴 {d['counterparty']} · {d.get('age_days','?')}g · "
                  f"{d.get('what') or d.get('snippet','')[:50]}\n   ↳ {draft}")
        print("\n" + locales.t("draft_note", lang))
    return 0


if __name__ == "__main__":
    sys.exit(main())
