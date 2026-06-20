"""
suggest — read -> SUGGEST: draft a reply for an open loop. The next step past the
brief: not just "Ada is waiting on you", but "here's a reply you could send".

Strictly a draft. It writes nothing back to anyone and sends nothing — it prints
a suggestion the user copies, edits, sends. Grounds the draft in the actual
thread (recent messages, marked you/them), the self-model (who you are), and the
language preference.

  python -m mcp_server_evosql.suggest            # drafts for the top open loops
  python -m mcp_server_evosql.suggest --top 3
  python -m mcp_server_evosql.suggest --loop loop_teams_123
"""
from __future__ import annotations

import argparse
import json
import os
import sys

from . import open_loops as ol
from . import locales


def _index_threads(backend, ns):
    """Pull conversational records once; bucket recent messages per thread."""
    from .server import _e
    threads = {}
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(ns)}' AND ("
        f"mem_key LIKE 'gmail%' OR mem_key LIKE 'teams_chat%' "
        f"OR mem_key LIKE 'outlook%' OR mem_key LIKE 'slack%' "
        f"OR mem_key LIKE 'imessage%') LIMIT 1000000") or []
    parsed = {"gmail": [], "teams": [], "outlook": [], "slack": [], "imessage": []}
    for (v,) in rows:
        try:
            d = json.loads(v)
        except Exception:
            continue
        if d.get("source") in parsed:
            parsed[d["source"]].append(d)
    my_id = ol._detect_my_teams_id(parsed["teams"])
    my_slack_id = ol._detect_my_id(parsed["slack"], "channel_id")
    for source in ("gmail", "teams", "outlook", "slack", "imessage"):
        for d in parsed[source]:
            if source == "teams":
                out = d.get("sender_id") == my_id
                text = d.get("text") or d.get("fact", "")
                who = ol._disp(d.get("chat_name"))
            elif source == "slack":
                out = d.get("sender_id") == my_slack_id
                text = d.get("text") or d.get("fact", "")
                who = ol._disp(d.get("channel_name"))
            elif source == "imessage":
                out = bool(d.get("is_from_me"))
                text = d.get("text") or d.get("fact", "")
                who = ol._disp(d.get("chat"))
            elif source == "gmail":
                out = "SENT" in str(d.get("labels") or "")
                text = (d.get("subject") or "") + " — " + (d.get("snippet") or "")
                who = ol._disp(d.get("from"))
            else:
                out = "sent" in (d.get("folder") or "").lower()
                text = (d.get("subject") or "") + " — " + (d.get("snippet") or "")
                who = ol._disp(d.get("from"))
            tk = (source, ol._thread_key(d, source))
            threads.setdefault(tk, []).append((ol._ts(d), out, who, text))
    for v in threads.values():
        v.sort(key=lambda m: m[0])
    return threads


def _render_thread(msgs, name):
    lines = []
    for _t, out, who, text in msgs[-8:]:
        speaker = name if out else who
        lines.append(f"{speaker}: {(text or '').strip()[:300]}")
    return "\n".join(lines)


def draft_reply(thread_msgs, loop, self_role, name, language) -> str:
    be = os.environ.get("EVOSQL_LOOP_LLM", os.environ.get("EVOSQL_PROFILE_LLM", "")).strip().lower()
    if be not in ("anthropic", "sonnet"):
        return locales.t("llm_off", language)
    convo = _render_thread(thread_msgs, name)
    prompt = (
        f"You are drafting a reply that {name} ({self_role or 'the user'}) will "
        f"send. Below is a conversation; the other person is waiting for {name} "
        f"to respond. Draft a natural, concise reply that {name} could send as-is, "
        f"matching the thread's tone.\n"
        f"RULES:\n"
        f"1. NEVER invent concrete facts you don't have — times, dates, links, "
        f"numbers, names, or commitments to specifics. If answering needs "
        f"information you don't possess, write a short HOLDING reply: acknowledge "
        f"the ask and say you'll check and follow up (do NOT fabricate the answer "
        f"or claim you're attaching/sending something you don't have).\n"
        f"2. Write in the language the OTHER PERSON writes in (match their "
        f"messages). Only if their messages contain no real words, use "
        f"{language}. Never mix languages within the reply.\n"
        f"Return ONLY the reply text.\n\n"
        f"Conversation (most recent last):\n{convo}")
    try:
        from . import pii_egress, provider_policy
        provider_policy.check("anthropic", endpoint=provider_policy.anthropic_endpoint())
        prompt = pii_egress.scrub(prompt)
        import anthropic
        c = anthropic.Anthropic()
        msg = c.messages.create(
            model=os.environ.get("EVOSQL_LOOP_LLM_MODEL", "claude-haiku-4-5-20251001"),
            max_tokens=500, messages=[{"role": "user", "content": prompt}])
        return msg.content[0].text.strip()
    except Exception as exc:
        return f"(taslak üretilemedi: {str(exc)[:100]})"


def _load_loops(backend, ns):
    from .server import _e
    out = {}
    for row in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.loops_store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []:
        try:
            out[row[0]] = json.loads(row[1])
        except Exception:
            pass
    return out


def _self_role(backend, ns):
    """The user's role summary from the self-model, for grounding the draft."""
    from .server import _e
    for row in backend._query(
            f"SELECT mem_value FROM __mem_{backend.selfmodel_store} "
            f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = 'self_role'") or []:
        try:
            c = json.loads(row[0]).get("content")
            return c.get("summary") if isinstance(c, dict) else str(c)
        except Exception:
            pass
    return ""


def _select(loops, *, top=3, loop_key=None):
    """Open loops worth drafting for: awaiting_me, actionable, a real
    request/question — ranked high-priority first then oldest. A specific
    loop_key (e.g. from daily_brief) overrides the ranked top-N."""
    if loop_key:
        return [(loop_key, loops[loop_key])] if loop_key in loops else []
    cand = [(k, r) for k, r in loops.items()
            if r.get("status") == "open"
            and r.get("direction") == "awaiting_me"
            and r.get("actionable", True)
            and r.get("loop_type", "request") in ("request", "question")]
    cand.sort(key=lambda kr: (0 if kr[1].get("priority") == "high" else 1,
                              kr[1].get("age_days", 999)))
    return cand[:max(1, top)]


def suggest_replies(backend, ns, *, top=3, loop_key=None, name=None):
    """Draft replies for the open loops waiting on the user (read -> suggest).

    Returns {"language", "role", "suggestions": [...]} where each suggestion is
    {loop_key, counterparty, age_days, what, source, thread, draft}. `thread` is
    the grounding transcript (speaker/text, last 8 turns) so a caller that would
    rather draft the reply itself — e.g. the MCP host model — has exactly the
    context the in-process drafter used. `draft` is that in-process draft (or the
    LLM-off note when no drafting backend is configured). Sends nothing."""
    from . import prefs
    language, _ = prefs.get_language(backend, ns)
    name = name or ns.split("_")[0].capitalize()
    role = _self_role(backend, ns)
    want = _select(_load_loops(backend, ns), top=top, loop_key=loop_key)
    if not want:
        return {"language": language, "role": role, "suggestions": []}
    threads = _index_threads(backend, ns)
    out = []
    for k, r in want:
        msgs = threads.get((r["source"], r["thread_key"]), [])
        out.append({
            "loop_key": k,
            "counterparty": r.get("counterparty"),
            "age_days": r.get("age_days"),
            "what": r.get("what") or (r.get("snippet") or "")[:120],
            "source": r.get("source"),
            "thread": [{"speaker": (name if o else who),
                        "text": (t or "").strip()[:300]}
                       for _t, o, who, t in msgs[-8:]],
            "draft": draft_reply(msgs, r, role, name, language),
        })
    return {"language": language, "role": role, "suggestions": out}


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--top", type=int, default=3)
    ap.add_argument("--loop", help="a specific loop key")
    args = ap.parse_args()
    from . import scheduler
    prefix = os.environ.get("MCP_STORE_PREFIX", "mcp")
    backend = scheduler._backend(prefix)
    ns = os.environ.get("MCP_USER_ID") or (
        scheduler.discover_namespaces(backend) or ["default"])[0]

    res = suggest_replies(backend, ns, top=args.top, loop_key=args.loop)
    lang = res.get("language")
    if not res["suggestions"]:
        print(locales.t("no_loop_for_draft", lang))
        return 0
    for s in res["suggestions"]:
        print(f"\n{'='*68}")
        print(f"🔴 {s['counterparty']} · {s.get('age_days','?')}g · "
              f"{s['what'][:60]}")
        print(f"{'-'*68}")
        print(locales.t("suggested_reply", lang) + "\n")
        print(s["draft"])
    print(f"\n{'='*68}")
    print(locales.t("draft_note", lang))
    return 0


if __name__ == "__main__":
    sys.exit(main())
