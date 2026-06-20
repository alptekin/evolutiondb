"""
reconcile — write-time Type-I contradiction detection + belief revision
(roadmap step 20).

Append-only memory lets a stale fact ("I live in Portland") coexist forever with
its successor ("I moved to Seattle") and out-rank the truth. On save, this finds
co-referential conflicts — an existing knowledge-graph edge with the SAME
(subject, predicate) but a DIFFERENT object than the new fact — and asks a cheap
LLM adjudicator for a Mem0-style verdict (ADD / UPDATE / DELETE / NOOP). On
UPDATE/DELETE the superseded rows are marked stale in the validity store so the
active gate (step 21) stops them out-ranking the current fact.

find_conflicts is pure (operates on a graph edge cache); the orchestration +
the opt-in LLM live on the backend. Default off (EVOSQL_RECONCILE).
"""
from __future__ import annotations

import os
from typing import Callable, Dict, List, Optional, Sequence, Tuple

VERDICTS = ("ADD", "UPDATE", "DELETE", "NOOP")


def find_conflicts(edge_cache: Dict[str, dict],
                   new_triples: Sequence[Tuple[str, str, str]]) -> List[dict]:
    """Pure conflict detection. edge_cache maps edge_key (subject|predicate|
    object) -> edge dict (with source_rows). For each new (subject, predicate,
    object), return existing edges that share (subject, predicate) but name a
    DIFFERENT object — the co-referential contradictions."""
    by_sp: Dict[Tuple[str, str], List[Tuple[str, List[str]]]] = {}
    for k, e in (edge_cache or {}).items():
        s = e.get("subject_id"); p = e.get("predicate"); o = e.get("object_id")
        if s is None or p is None or o is None:
            parts = k.split("|")
            if len(parts) != 3:
                continue
            s, p, o = parts
        by_sp.setdefault((s, p), []).append((o, list(e.get("source_rows") or [])))

    conflicts: List[dict] = []
    for (s, p, o) in new_triples:
        for (o2, rows) in by_sp.get((s, p), []):
            if o2 != o:
                conflicts.append({"subject": s, "predicate": p,
                                  "new_object": o, "old_object": o2,
                                  "old_source_rows": rows})
    return conflicts


def llm_adjudicate(new_fact: str, old_fact: str, backend: str) -> str:
    """Ask an LLM whether `new_fact` supersedes `old_fact`. Returns one of
    VERDICTS. Same opt-in shape as episodes/semanticize (ollama | anthropic)."""
    prompt = ("Two memories may conflict.\nOLD: " + old_fact + "\nNEW: " +
              new_fact + "\nIf NEW updates/replaces OLD answer UPDATE; if NEW "
              "makes OLD false/obsolete answer DELETE; if they are about "
              "different things answer ADD; if identical answer NOOP. Reply with "
              "exactly one word: ADD, UPDATE, DELETE, or NOOP.")
    backend = backend.lower()
    if backend == "ollama":
        import requests
        host = os.environ.get("OLLAMA_HOST", "http://127.0.0.1:11434")
        model = os.environ.get("EVOSQL_RECONCILE_LLM_MODEL", "llama3.1")
        from . import pii_egress, provider_policy
        provider_policy.check("ollama", endpoint=host)
        prompt = pii_egress.scrub(prompt)
        r = requests.post(f"{host}/api/generate",
                          json={"model": model, "prompt": prompt,
                                "stream": False}, timeout=60)
        word = (r.json().get("response") or "").strip().upper()
    elif backend in ("anthropic", "sonnet"):
        from . import pii_egress, provider_policy
        provider_policy.check("anthropic", endpoint=provider_policy.anthropic_endpoint())
        prompt = pii_egress.scrub(prompt)
        import anthropic
        c = anthropic.Anthropic()
        m = c.messages.create(
            model=os.environ.get("EVOSQL_RECONCILE_LLM_MODEL", "claude-sonnet-4-6"),
            max_tokens=8, messages=[{"role": "user", "content": prompt}])
        word = m.content[0].text.strip().upper()
    else:
        raise RuntimeError(f"unknown EVOSQL_RECONCILE_LLM backend: {backend}")
    for v in VERDICTS:
        if v in word:
            return v
    return "NOOP"


RECONSOLIDATE_VERDICTS = ("CONFIRM", "REFINE", "CONTRADICT")


def llm_reconsolidate(old_fact: str, correction: str, backend: str) -> str:
    """Judge whether a correction REFINEs / CONTRADICTs / CONFIRMs an old fact
    on recall (roadmap step 29). Returns one of RECONSOLIDATE_VERDICTS."""
    prompt = ("A remembered fact was just recalled with new context.\nOLD: " +
              old_fact + "\nNEW CONTEXT: " + correction + "\nIf the new context "
              "corrects/sharpens OLD answer REFINE; if it makes OLD wrong answer "
              "CONTRADICT; if it just agrees answer CONFIRM. One word: CONFIRM, "
              "REFINE, or CONTRADICT.")
    backend = backend.lower()
    if backend == "ollama":
        import requests
        host = os.environ.get("OLLAMA_HOST", "http://127.0.0.1:11434")
        model = os.environ.get("EVOSQL_RECONSOLIDATE_LLM_MODEL", "llama3.1")
        from . import pii_egress, provider_policy
        provider_policy.check("ollama", endpoint=host)
        prompt = pii_egress.scrub(prompt)
        r = requests.post(f"{host}/api/generate",
                          json={"model": model, "prompt": prompt,
                                "stream": False}, timeout=60)
        word = (r.json().get("response") or "").strip().upper()
    elif backend in ("anthropic", "sonnet"):
        from . import pii_egress, provider_policy
        provider_policy.check("anthropic", endpoint=provider_policy.anthropic_endpoint())
        prompt = pii_egress.scrub(prompt)
        import anthropic
        c = anthropic.Anthropic()
        m = c.messages.create(
            model=os.environ.get("EVOSQL_RECONSOLIDATE_LLM_MODEL", "claude-sonnet-4-6"),
            max_tokens=8, messages=[{"role": "user", "content": prompt}])
        word = m.content[0].text.strip().upper()
    else:
        raise RuntimeError(f"unknown EVOSQL_RECONSOLIDATE_LLM backend: {backend}")
    for v in RECONSOLIDATE_VERDICTS:
        if v in word:
            return v
    return "CONFIRM"
