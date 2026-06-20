"""
self_model — a structured, growing "about me" dossier (the heart of a personal
assistant: the system actually knows who you are).

It does NOT capture more raw data — the connectors already do that. It SYNTHESIZES
the highest-signal facts into a clean, grounded, queryable self-profile and keeps
it fresh. Two layers:

  * deterministic signals (trustworthy, free): closest people by 1:1 message
    volume, behaviour clusters (profile job), top organisations (entity job),
    browsing habits, and your open commitments (open_loops job → cross-feeding);
  * an LLM synthesis pass (anthropic) that turns those signals into a clean
    structured dossier and discards the entity-extraction noise (e.g. an email
    greeting mis-tagged as a person).

Each section is one record in <prefix>_self (key=self_<section>), carrying its
content, the signals it was grounded in, and updated_at. The open_loops job
reads self_team back to prioritise loops — so the two modules feed each other.
"""
from __future__ import annotations

import json
import os
import re
from collections import Counter
from datetime import datetime, timezone


def _disp(name):
    return ((name or "").split("<")[0].split("|")[0].strip().strip('"')) or "?"


def _llm(prompt: str) -> str:
    """One anthropic call. Model from EVOSQL_PROFILE_LLM_MODEL. Returns text."""
    from . import pii_egress, provider_policy
    # Residency / no-train gate before this direct SDK call (fail-closed when on).
    provider_policy.check("anthropic", endpoint=provider_policy.anthropic_endpoint())
    prompt = pii_egress.scrub(prompt)   # mask PII before this direct SDK call
    import anthropic
    c = anthropic.Anthropic()
    msg = c.messages.create(
        model=os.environ.get("EVOSQL_PROFILE_LLM_MODEL", "claude-sonnet-4-6"),
        max_tokens=1500,
        messages=[{"role": "user", "content": prompt}])
    return msg.content[0].text


# ---------------------------------------------------------------- signals
def _gather_signals(backend, ns: str):
    from .server import _e
    sig = {}

    # 1) closest people — Teams 1:1 message volume (most reliable relationship signal)
    one = Counter()
    for (v,) in backend._query(
            f"SELECT mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(ns)}' AND mem_key LIKE 'teams_chat%' "
            f"LIMIT 1000000") or []:
        try:
            d = json.loads(v)
        except Exception:
            continue
        if d.get("chat_type") == "oneOnOne" and d.get("chat_name"):
            one[_disp(d["chat_name"])] += 1
    sig["closest_people"] = [{"name": n, "messages": c}
                             for n, c in one.most_common(15)]

    # 2) behaviour clusters (profile job)
    sig["behaviour"] = []
    for (v,) in backend._query(
            f"SELECT mem_value FROM __mem_{backend.profile_store} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT 40") or []:
        try:
            d = json.loads(v)
            lab = d.get("label") or d.get("summary")
            if lab:
                sig["behaviour"].append(lab)
        except Exception:
            pass

    # 3) top organisations (entity job)
    orgs = []
    for (v,) in backend._query(
            f"SELECT mem_value FROM __mem_{backend.entity_store} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT 8000") or []:
        try:
            d = json.loads(v)
            if d.get("type") == "org" and d.get("canonical"):
                orgs.append((d["canonical"], d.get("mention_count") or 0))
        except Exception:
            pass
    sig["organisations"] = [n for n, _ in sorted(orgs, key=lambda x: -x[1])[:15]]

    # 4) browsing habits — top domains
    dom = Counter()
    for (v,) in backend._query(
            f"SELECT mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(ns)}' AND mem_key LIKE 'browser%' "
            f"LIMIT 1000000") or []:
        try:
            f = json.loads(v).get("fact", "")
            m = re.search(r'https?://([A-Za-z0-9.\-]+)', f)
            if m:
                # NB: a literal "www." prefix strip — NOT str.lstrip("www."),
                # which strips the CHARACTER SET {w, .} and would mangle
                # 'wize.com' -> 'ize.com' or 'www.wwf.org' -> 'f.org'.
                d = m.group(1).lower()
                if d.startswith("www."):
                    d = d[4:]
                dom[d] += 1
        except Exception:
            pass
    sig["top_domains"] = [d for d, _ in dom.most_common(15)]

    # 5) open commitments — from the open_loops job (cross-feeding)
    loops = []
    try:
        for (v,) in backend._query(
                f"SELECT mem_value FROM __mem_{backend.loops_store} "
                f"WHERE mem_namespace = '{_e(ns)}' LIMIT 5000") or []:
            d = json.loads(v)
            if d.get("status") == "open":
                loops.append(d)
    except Exception:
        pass
    sig["open_commitments_count"] = len(loops)
    sig["open_commitments_sample"] = [
        {"who": d["counterparty"], "what": d["snippet"], "age_days": d["age_days"]}
        for d in sorted(loops, key=lambda x: -x.get("age_days", 0))[:8]]
    return sig


_PROMPT = """You are building a concise, grounded "about me" dossier for a personal
assistant, from signals mined from the user's own messaging, email and browsing.
Use ONLY the signals; do not invent. Discard obvious noise (an email greeting or a
brand mis-listed as a person). Mark each fact "stated" if directly evidenced or
"inferred" if reasoned.

Return STRICT JSON:
{
 "identity":   {"summary": "...", "confidence": 0-1},
 "role":       {"summary": "...", "confidence": 0-1},
 "team":       ["Name", ...],            // real human colleagues only
 "projects":   ["...", ...],
 "habits":     ["...", ...],
 "interests":  ["...", ...]
}

SIGNALS:
"""


def job_self_model(backend, ns: str) -> int:
    from .server import _e
    sig = _gather_signals(backend, ns)
    now = datetime.now(timezone.utc).isoformat()

    written = 0

    def put(section, content, sources):
        nonlocal written
        rec = {"section": section, "content": content,
               "grounded_in": sources, "updated_at": now}
        key = "self_%s" % section
        backend._exec(f"MEMORY PUT INTO {backend.selfmodel_store} VALUES "
                      f"('{_e(ns)}','{_e(key)}','{_e(json.dumps(rec))}')")
        written += 1

    # commitments section is deterministic (straight from open_loops)
    put("commitments", {
        "open_count": sig["open_commitments_count"],
        "top": sig["open_commitments_sample"]}, ["open_loops"])

    # LLM synthesis for the narrative sections
    backend_llm = os.environ.get("EVOSQL_PROFILE_LLM", "").strip().lower()
    if backend_llm in ("anthropic", "sonnet"):
        from . import prefs
        lang, _set = prefs.get_language(backend, ns)
        try:
            txt = _llm(_PROMPT + f"Write every summary string in {lang}.\n\n"
                       + json.dumps(sig, ensure_ascii=False, indent=1))
            m = re.search(r'\{.*\}', txt, re.S)
            data = json.loads(m.group(0)) if m else {}
        except Exception as exc:
            data = {"_error": str(exc)[:200]}
        for section in ("identity", "role", "team", "projects", "habits", "interests"):
            if section in data:
                put(section, data[section],
                    ["teams_volume", "profile_clusters", "entities", "browser"])
    else:
        # no LLM: still persist the trustworthy deterministic signals
        put("team", [p["name"] for p in sig["closest_people"]], ["teams_volume"])
        put("habits", sig["top_domains"], ["browser"])
        put("behaviour", sig["behaviour"], ["profile_clusters"])

    return written
