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


# ---------------------------------------------------------------- #
#  Per-row utility (roadmap step 25)                                #
# ---------------------------------------------------------------- #
UTILITY_ALPHA = 0.2       # ACT-R utility learning rate
UTILITY_PRIOR = 0.5       # neutral starting utility


def update_utility(u_prev: float, reward: float,
                   alpha: float = UTILITY_ALPHA) -> float:
    """ACT-R utility delta rule: U <- U + alpha*(R - U). R=1 for a used row,
    0 for a returned-but-unused row. Converges to the row's hit rate."""
    return float(u_prev) + alpha * (float(reward) - float(u_prev))


def accumulate_utilities(records: Sequence[Dict[str, Any]], *,
                         alpha: float = UTILITY_ALPHA,
                         prior: Dict[str, float] = None,
                         centroid_fn=None) -> Dict[str, float]:
    """Fold a feedback corpus into per-(context, row) utilities. The utility key
    is `<centroid>:<mem_key>`, so credit is QUERY-CONDITIONED by the query's
    nearest interest centroid (centroid_fn(record) -> id; "g" = global when no
    profile). Returns {utility_key: U in [0,1]}. Repeated use drives U -> 1,
    repeated skip -> 0; an unseen row is neutral at UTILITY_PRIOR."""
    U: Dict[str, float] = dict(prior or {})
    for rec in records or []:
        used = set(rec.get("used_keys") or [])
        if not used:
            continue
        cid = (centroid_fn(rec) if centroid_fn else "g") or "g"
        for t in rec.get("trace") or []:
            key = t.get("key")
            if not key:
                continue
            r = 1.0 if key in used else 0.0
            uk = f"{cid}:{key}"
            U[uk] = round(update_utility(U.get(uk, UTILITY_PRIOR), r, alpha), 4)
    return U


# ---------------------------------------------------------------- #
#  Learned ranker (roadmap step 26)                                #
# ---------------------------------------------------------------- #
def _sigmoid(z: float) -> float:
    if z >= 0:
        return 1.0 / (1.0 + math.exp(-z))
    e = math.exp(z)
    return e / (1.0 + e)


def fit_logistic(examples: Sequence[Dict[str, Any]], *, iters: int = 300,
                 lr: float = 0.1, l2: float = 1e-3) -> Dict[str, Any]:
    """Fit a tiny logistic ranker on the IPS-weighted examples (roadmap step 26).
    Minimizes weighted log-loss by SGD; returns {weights:{feature:w}, bias, n}.
    The learned weights replace the hand-tuned 0.7/0.3 blend + the EVOSQL_*_BOOST
    constants — the only mechanism that makes the system improve from USE."""
    w = {f: 0.0 for f in FEATURES}
    b = 0.0
    exs = [e for e in (examples or []) if e.get("features") is not None]
    if not exs:
        return {"weights": w, "bias": 0.0, "n": 0}
    for _ in range(iters):
        for ex in exs:
            x = ex["features"]; y = float(ex["label"])
            sw = float(ex.get("weight", 1.0))
            z = b + sum(w[f] * float(x.get(f, 0.0)) for f in FEATURES)
            g = sw * (_sigmoid(z) - y)               # weighted log-loss gradient
            for f in FEATURES:
                w[f] -= lr * (g * float(x.get(f, 0.0)) + l2 * w[f])
            b -= lr * g
    return {"weights": {f: round(w[f], 6) for f in FEATURES},
            "bias": round(b, 6), "n": len(exs)}


def predict(model: Dict[str, Any], features: Dict[str, Any]) -> float:
    """Learned-ranker score in (0,1) for a candidate's feature vector."""
    if not model:
        return 0.0
    w = model.get("weights") or {}
    z = float(model.get("bias", 0.0)) + sum(
        float(w.get(f, 0.0)) * float(features.get(f, 0.0)) for f in FEATURES)
    return _sigmoid(z)


# ---------------------------------------------------------------- #
#  Closed-loop guardrails (roadmap step 27)                        #
# ---------------------------------------------------------------- #
def guarded_score(learned: float, base_norm: float, *, trust: float = 1.0,
                  epsilon: float = 0.0, rng=None) -> float:
    """Apply the closed-loop guardrails to a learned score.

    trust   feedback-loop DAMPENING: blend the learned score with the
            (min-max normalized) base score, trust*learned + (1-trust)*base, so a
            mis-fit ranker can't fully take over (trust=1 = pure learned).
    epsilon EXPLORATION: add uniform[0,epsilon) noise so the system occasionally
            surfaces rows outside the learned top-K and gathers feedback on them,
            breaking the self-reinforcing 'only what I already show gets used'
            loop. epsilon=0 = exploit only.
    (IPS weight clipping — the variance cap — happens in ips_weight.)"""
    s = trust * learned + (1.0 - trust) * base_norm
    if epsilon > 0.0:
        import random as _random
        r = rng or _random
        s += r.uniform(0.0, epsilon)
    return s
