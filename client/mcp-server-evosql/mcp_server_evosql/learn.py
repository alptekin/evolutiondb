"""
learn — closed-loop learned retrieval controller (roadmap steps 24-26).

The system already LOGS the signal it needs (server.log_query writes a per-query
trace of every candidate's feature scores; the feedback tool fills in which keys
were actually used) but throws it away. This turns that log into supervised
training data and fits a tiny ranker whose weights replace the hand-tuned
0.7/0.3 blend + the EVOSQL_*_BOOST constants — so the memory improves from USE,
not from a human editing a config.

This module (step 24) builds the labelled, position-debiased examples; the
utility update (25) and the fitted ranker (26) build on it. All pure +
unit-testable; the backend only supplies the feedback records.

A used key is a positive (label 1); a returned-but-unused key is a negative
(label 0). Position bias is corrected with inverse-propensity weighting: a use
at a low-examination rank is rarer and so more informative.
"""
from __future__ import annotations

import math
from typing import Any, Dict, List, Sequence

# Feature channels logged in the trace (server._last_scores). The learned ranker
# fits a weight per channel; FEATURES is the canonical order.
FEATURES = ["bge", "e5", "kw", "hybrid", "psim", "graph", "final", "activation"]

_IPS_CLIP = 10.0          # cap inverse-propensity weights (variance control)


def position_propensity(rank: int) -> float:
    """Examination propensity of a result at 0-indexed `rank`: a DCG-style
    decay, 1.0 at the top, ~0.29 by rank 9. Lower-ranked results are examined
    less, so a use there carries more counterfactual signal."""
    return 1.0 / math.log2(int(rank) + 2)


def ips_weight(rank: int) -> float:
    """Inverse-propensity weight (clipped) to debias position."""
    return min(_IPS_CLIP, 1.0 / max(position_propensity(rank), 1e-3))


def build_examples(records: Sequence[Dict[str, Any]]) -> List[Dict[str, Any]]:
    """Turn feedback records into labelled, IPS-weighted training examples.

    Each record is {trace: [{key, rank, scores}], used_keys: [...]}. Only
    records that carry feedback (a non-empty used_keys) contribute — an
    un-acted-on search is unlabelled, not a set of negatives. Returns one example
    per (query, candidate): {key, features, label (1=used), weight, rank}."""
    examples: List[Dict[str, Any]] = []
    for rec in records or []:
        used = set(rec.get("used_keys") or [])
        if not used:
            continue
        for t in rec.get("trace") or []:
            key = t.get("key")
            if not key:
                continue
            rank = int(t.get("rank", 0) or 0)
            scores = t.get("scores") or {}
            label = 1 if key in used else 0
            examples.append({
                "key": key,
                "features": {f: float(scores.get(f, 0.0)) for f in FEATURES},
                "label": label,
                "weight": round(ips_weight(rank), 4),
                "rank": rank,
            })
    return examples
