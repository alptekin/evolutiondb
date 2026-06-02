"""
semanticize — episodic -> semantic abstraction (roadmap step 16).

Episodes summarize WHAT happened; this distills timeless GENERALIZATIONS across
many rows (Tulving semanticization; CLS slow neocortical interleaving as a batch
job; Generative-Agents reflection). It clusters the namespace's embedded rows
(reusing the dependency-free spherical k-means from profile.py) and, for each
sufficiently-large cluster, asks an opt-in LLM for the one general fact the
cluster implies — NOT a recap. Each generalization is written via
backend.save_semantic with derived_from = the cluster's keys (provenance), so it
is retrievable and traceable, and re-derived only when new evidence accrues.

Opt-in: no LLM configured (EVOSQL_SEMANTIC_LLM unset, no injected llm_fn) -> the
job is a no-op. Idempotent: a cluster already covered by an existing semantic
row's derived_from is skipped.
"""
from __future__ import annotations

import json
import os
from typing import Callable, Dict, List, Optional, Sequence

from .embeddings import decode_vec
from .profile import kmeans

MIN_CLUSTER = int(os.environ.get("EVOSQL_SEMANTIC_MIN_CLUSTER", "4"))
MAX_ROWS_PER = 12          # rows fed to the LLM per cluster (token budget)
MAX_K = 16


def _llm_generalize(facts: Sequence[str], backend: str) -> str:
    """Ask an LLM for ONE timeless generalization across `facts` (not a recap).
    Same opt-in shape as episodes._llm_summary (ollama | anthropic)."""
    prompt = ("These memory notes cluster together. State ONE timeless, general "
              "fact they imply about the user or their work — a generalization, "
              "NOT a recap of events. Answer in a single sentence.\n\n"
              + "\n".join(f"- {f}" for f in facts))
    backend = backend.lower()
    if backend == "ollama":
        import requests
        host = os.environ.get("OLLAMA_HOST", "http://127.0.0.1:11434")
        model = os.environ.get("EVOSQL_SEMANTIC_LLM_MODEL", "llama3.1")
        r = requests.post(f"{host}/api/generate",
                          json={"model": model, "prompt": prompt,
                                "stream": False}, timeout=90)
        return (r.json().get("response") or "").strip()
    if backend in ("anthropic", "sonnet"):
        import anthropic
        c = anthropic.Anthropic()
        m = c.messages.create(
            model=os.environ.get("EVOSQL_SEMANTIC_LLM_MODEL", "claude-sonnet-4-6"),
            max_tokens=120, messages=[{"role": "user", "content": prompt}])
        return m.content[0].text.strip()
    raise RuntimeError(f"unknown EVOSQL_SEMANTIC_LLM backend: {backend}")


def semanticize(backend, user_id: str, *,
                llm_fn: Optional[Callable[[Sequence[str]], str]] = None,
                min_cluster: int = MIN_CLUSTER, dry_run: bool = False) -> int:
    """Mint one semantic generalization per sufficiently-large cluster of the
    namespace's embedded rows. Returns the number of semantic rows written."""
    from .server import _e

    if llm_fn is None:
        be = os.environ.get("EVOSQL_SEMANTIC_LLM", "").strip().lower()
        if not be:
            return 0                      # opt-in: no LLM -> no abstraction
        llm_fn = lambda facts: _llm_generalize(facts, be)

    rows = backend._query(
        f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 100000") or []
    keys: List[str] = []
    vecs: List[List[float]] = []
    facts: List[str] = []
    for k, v in rows:
        try:
            rec = json.loads(v) if v else {}
        except Exception:
            continue
        if rec.get("is_episode") or rec.get("tier") == "semantic":
            continue
        vec = decode_vec(rec.get("emb"))
        f = rec.get("fact") or rec.get("text")
        if vec and f:
            keys.append(k)
            vecs.append(vec)
            facts.append(f)
    if len(vecs) < min_cluster:
        return 0

    kk = max(2, min(len(vecs) // min_cluster, MAX_K))
    labels, _ = kmeans(vecs, kk)
    clusters: Dict[int, List[int]] = {}
    for i, lab in enumerate(labels):
        clusters.setdefault(lab, []).append(i)

    # idempotency: a cluster already covered by an existing semantic row's
    # derived_from is skipped (k-means is deterministic, so a re-run reproduces
    # the same clusters and writes nothing new).
    seen: List[set] = []
    for v in backend._query(
            f"SELECT mem_value FROM __mem_{backend.semantic_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 100000") or []:
        try:
            seen.append(set(json.loads(v[0]).get("derived_from") or []))
        except Exception:
            continue

    written = 0
    for _lab, idxs in clusters.items():
        if len(idxs) < min_cluster:
            continue
        ckeys = [keys[i] for i in idxs]
        ckeyset = set(ckeys)
        if any(ckeyset <= s for s in seen):
            continue
        cfacts = [facts[i] for i in idxs][:MAX_ROWS_PER]
        try:
            prop = (llm_fn(cfacts) or "").strip()
        except Exception:
            continue
        if not prop:
            continue
        if not dry_run:
            backend.save_semantic(user_id, prop, derived_from=ckeys,
                                  abstraction_level=1)
        written += 1
    return written
