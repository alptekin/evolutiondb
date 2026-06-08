"""
suggest — read -> SUGGEST: draft a reply for an open loop. The next step past the
brief: not just "Ulaş is waiting on you", but "here's a reply you could send".

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


def _index_threads(backend, ns):
    """Pull conversational records once; bucket recent messages per thread."""
    from .server import _e
    threads = {}
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(ns)}' AND ("
        f"mem_key LIKE 'gmail%' OR mem_key LIKE 'teams_chat%' "
        f"OR mem_key LIKE 'outlook%') LIMIT 1000000") or []
    parsed = {"gmail": [], "teams": [], "outlook": []}
    for (v,) in rows:
        try:
            d = json.loads(v)
        except Exception:
            continue
        if d.get("source") in parsed:
            parsed[d["source"]].append(d)
    my_id = ol._detect_my_teams_id(parsed["teams"])
    for source in ("gmail", "teams", "outlook"):
        for d in parsed[source]:
            if source == "teams":
                out = d.get("sender_id") == my_id
                text = d.get("text") or d.get("fact", "")
                who = ol._disp(d.get("chat_name"))
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
        return "(LLM kapalı — EVOSQL_LOOP_LLM=anthropic ayarla)"
    convo = _render_thread(thread_msgs, name)
    prompt = (
        f"You are drafting a reply that {name} ({self_role or 'the user'}) will "
        f"send. Below is a conversation; the other person is waiting for {name} "
        f"to respond. Draft a natural, concise reply in {language} that {name} "
        f"could send as-is, matching the thread's tone. If there isn't enough "
        f"information to answer substantively, draft a short holding reply "
        f"(acknowledge + say when you'll follow up). Return ONLY the reply text.\n\n"
        f"Conversation (most recent last):\n{convo}")
    try:
        import anthropic
        c = anthropic.Anthropic()
        msg = c.messages.create(
            model=os.environ.get("EVOSQL_LOOP_LLM_MODEL", "claude-haiku-4-5-20251001"),
            max_tokens=500, messages=[{"role": "user", "content": prompt}])
        return msg.content[0].text.strip()
    except Exception as exc:
        return f"(taslak üretilemedi: {str(exc)[:100]})"


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--top", type=int, default=3)
    ap.add_argument("--loop", help="a specific loop key")
    args = ap.parse_args()
    from . import scheduler, prefs
    prefix = os.environ.get("MCP_STORE_PREFIX", "mcp")
    backend = scheduler._backend(prefix)
    ns = os.environ.get("MCP_USER_ID") or (
        scheduler.discover_namespaces(backend) or ["default"])[0]
    name = ns.split("_")[0].capitalize()
    language, _ = prefs.get_language(backend, ns)

    from .server import _e
    loops = {}
    for row in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.loops_store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []:
        try:
            loops[row[0]] = json.loads(row[1])
        except Exception:
            pass

    # who am I, for grounding
    role = ""
    for row in backend._query(
            f"SELECT mem_value FROM __mem_{backend.selfmodel_store} "
            f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = 'self_role'") or []:
        try:
            c = json.loads(row[0]).get("content")
            role = c.get("summary") if isinstance(c, dict) else str(c)
        except Exception:
            pass

    want = []
    if args.loop:
        if args.loop in loops:
            want = [(args.loop, loops[args.loop])]
    else:
        cand = [(k, r) for k, r in loops.items()
                if r.get("status") == "open"
                and r.get("direction") == "awaiting_me"
                and r.get("actionable", True)
                and r.get("loop_type", "request") in ("request", "question")]
        cand.sort(key=lambda kr: (0 if kr[1].get("priority") == "high" else 1,
                                  kr[1].get("age_days", 999)))
        want = cand[:args.top]

    if not want:
        print("Taslak için açık döngü bulunamadı.")
        return 0

    threads = _index_threads(backend, ns)
    for k, r in want:
        tk = (r["source"], r["thread_key"])
        msgs = threads.get(tk, [])
        draft = draft_reply(msgs, r, role, name, language)
        print(f"\n{'='*68}")
        print(f"🔴 {r['counterparty']} · {r.get('age_days','?')}g · "
              f"{r.get('what') or r.get('snippet','')[:60]}")
        print(f"{'-'*68}")
        print("✍️  ÖNERİLEN CEVAP:\n")
        print(draft)
    print(f"\n{'='*68}")
    print("(öneri — gönderilmedi; kopyala/düzenle/gönder sende)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
