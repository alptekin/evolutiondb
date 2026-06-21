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
# Cap the source keys stored as provenance. A cluster on a mature namespace can
# hold hundreds of rows; the whole list plus the embedding would blow the
# engine's 8 KB record cap. A deterministic first-N sample (by key) keeps the
# record small AND keeps the dedup stable as a topic grows (new rows append at
# the high-key end, so the first-N core is unchanged -> a re-run is a no-op).
MAX_PROVENANCE = 64
# A cluster is considered "already covered" when it shares at least this
# fraction (containment overlap) with an existing semantic row's provenance.
# Strict subset was unsound: as a topic grows, the new cluster is a SUPERSET of
# the old derived_from, so a subset test fails and re-mints a near-duplicate
# every run. Containment overlap absorbs growth + minor reclustering drift.
COVER_OVERLAP = 0.6


def _covered(cluster: set, seen: List[set], thresh: float = COVER_OVERLAP) -> bool:
    for s in seen:
        if not s:
            continue
        inter = len(cluster & s)
        if inter and inter / min(len(cluster), len(s)) >= thresh:
            return True
    return False


def _llm_generalize(facts: Sequence[str], backend: str) -> str:
    """Ask an LLM for ONE timeless generalization across `facts` (not a recap).
    Same opt-in shape as episodes._llm_summary (ollama | anthropic)."""
    prompt = ("These memory notes cluster together. State ONE timeless, general "
              "fact they imply about the user or their work — a generalization, "
              "NOT a recap of events. Answer in a single sentence.\n\n"
              + "\n".join(f"- {f}" for f in facts))
    backend = backend.lower()
    default = "claude-sonnet-4-6" if backend in ("anthropic", "sonnet") else "llama3.1"
    model = os.environ.get("EVOSQL_SEMANTIC_LLM_MODEL", default)
    from . import llm
    if not llm.available(backend):
        raise RuntimeError(f"unknown EVOSQL_SEMANTIC_LLM backend: {backend}")
    return (llm.chat(prompt, provider=backend, model=model, max_tokens=120)
            or "").strip()


def semanticize(backend, user_id: str, *,
                llm_fn: Optional[Callable[[Sequence[str]], str]] = None,
                min_cluster: int = MIN_CLUSTER, dry_run: bool = False) -> int:
    """Mint one semantic generalization per sufficiently-large cluster of the
    namespace's embedded rows. Returns the number of semantic rows written."""
    from .server import _e

    min_cluster = max(2, int(min_cluster or 0))     # guard 0/1/negative configs

    if llm_fn is None:
        be = os.environ.get("EVOSQL_SEMANTIC_LLM", "").strip().lower()
        if not be:
            return 0                      # opt-in: no LLM -> no abstraction
        llm_fn = lambda facts: _llm_generalize(facts, be)

    # ORDER BY mem_key makes the clustering input order reproducible (heap-scan
    # order is connection-dependent), which the idempotency design depends on:
    # k-means is deterministic only for a fixed seed AND a fixed input order.
    rows = backend._query(
        f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(user_id)}' ORDER BY mem_key "
        f"LIMIT 100000") or []
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
        # Provenance = a deterministic, capped first-N sample (by key). Building
        # the dedup set from the SAME capped list keeps a re-run a no-op even as
        # the cluster grows, and keeps the stored record under the 8 KB cap.
        ckeys = sorted(keys[i] for i in idxs)[:MAX_PROVENANCE]
        ckeyset = set(ckeys)
        if _covered(ckeyset, seen):
            continue
        cfacts = [facts[i] for i in idxs][:MAX_ROWS_PER]
        try:
            prop = (llm_fn(cfacts) or "").strip()
        except Exception:
            continue
        if not prop:
            continue
        if not dry_run:
            try:
                backend.save_semantic(user_id, prop, derived_from=ckeys,
                                      abstraction_level=1)
            except Exception:
                continue           # one cluster's write must not abort the rest
        seen.append(ckeyset)       # within-run dedup too (don't re-mint a cluster)
        written += 1
    return written
