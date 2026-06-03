"""
calibration — confidence calibration study + layer (roadmap step 40).

The system assigns a memory a confidence by how it was acquired (source_class ->
source_reliability: asserted 1.0 / observed 0.7 / inferred 0.4). That table is a
prior, not a measurement: are observed-class memories ACTUALLY useful 70% of the
time? This module bins predicted confidence against the observed outcome (a
returned memory the caller actually used = correct) into a reliability diagram,
scores the miscalibration (ECE / MCE), and fits a monotone calibrator
(pool-adjacent-violators isotonic regression) that remaps raw confidence to the
empirically-observed rate.

The calibrator feeds an OPT-IN layer (EVOSQL_CALIBRATE, default off) that maps
source_reliability through the fitted curve before the abstain gate, so the gate
abstains on what is empirically unreliable rather than on a hard-coded prior. The
default path uses the raw prior, byte-for-byte unchanged.

The study core (`reliability_bins`, `ece`, `mce`, `fit_calibrator`,
`apply_calibration`) is pure and unit-testable without a server.
"""
from __future__ import annotations

import json
import os
from typing import Any, Dict, List, Optional, Sequence, Tuple


def reliability_bins(pairs: Sequence[Tuple[float, float]],
                     n_bins: int = 10) -> List[Dict[str, Any]]:
    """Bin (predicted_confidence in [0,1], outcome in {0,1}) pairs into a
    reliability diagram: per equal-width bin, the mean predicted confidence, the
    mean observed outcome, and the count."""
    n_bins = max(1, int(n_bins))
    bins = [{"lo": i / n_bins, "hi": (i + 1) / n_bins,
             "sum_pred": 0.0, "sum_obs": 0.0, "count": 0} for i in range(n_bins)]
    for p, o in pairs:
        p = min(max(float(p), 0.0), 1.0)
        idx = min(int(p * n_bins), n_bins - 1)
        b = bins[idx]
        b["sum_pred"] += p
        b["sum_obs"] += float(o)
        b["count"] += 1
    for b in bins:
        c = b["count"]
        b["mean_pred"] = (b["sum_pred"] / c) if c else 0.0
        b["mean_obs"] = (b["sum_obs"] / c) if c else 0.0
    return bins


def ece(bins: List[Dict[str, Any]], total: Optional[int] = None) -> float:
    """Expected Calibration Error: count-weighted mean |confidence - accuracy|."""
    total = total if total is not None else sum(b["count"] for b in bins)
    if not total:
        return 0.0
    return sum((b["count"] / total) * abs(b["mean_pred"] - b["mean_obs"])
               for b in bins if b["count"])


def mce(bins: List[Dict[str, Any]]) -> float:
    """Maximum Calibration Error: the worst per-bin gap."""
    gaps = [abs(b["mean_pred"] - b["mean_obs"]) for b in bins if b["count"]]
    return max(gaps) if gaps else 0.0


def _pav(values: List[float], weights: List[float]) -> List[float]:
    """Isotonic regression (non-decreasing) by pool-adjacent-violators. Returns
    the fitted value for each input position; adjacent out-of-order means are
    pooled into their weighted average until the sequence is monotone."""
    blocks: List[List[float]] = []          # [value, weight_sum, size]
    for val, wt in zip(values, weights):
        blocks.append([float(val), float(wt), 1.0])
        while len(blocks) >= 2 and blocks[-2][0] > blocks[-1][0]:
            v2, w2, s2 = blocks.pop()
            v1, w1, s1 = blocks.pop()
            nw = w1 + w2
            nv = (v1 * w1 + v2 * w2) / nw if nw > 0 else (v1 + v2) / 2
            blocks.append([nv, nw, s1 + s2])
    out: List[float] = []
    for v, _, s in blocks:
        out.extend([v] * int(s))
    return out


def fit_calibrator(pairs: Sequence[Tuple[float, float]],
                   n_bins: int = 10) -> Dict[str, Any]:
    """Fit a monotone confidence->accuracy calibrator from (pred, outcome)
    pairs. Bins the pairs, isotonic-regresses the per-bin observed rates against
    predicted confidence, and returns the calibration points plus the ECE/MCE of
    the RAW (pre-calibration) diagram. An empty/degenerate sample yields an
    identity calibrator (apply_calibration returns the input unchanged)."""
    bins = reliability_bins(pairs, n_bins)
    nonempty = [b for b in bins if b["count"] > 0]
    total = sum(b["count"] for b in bins)
    if not nonempty:
        return {"points": [], "n": 0, "ece": 0.0, "mce": 0.0, "n_bins": n_bins}
    order = sorted(nonempty, key=lambda b: b["mean_pred"])
    preds = [b["mean_pred"] for b in order]
    obs = [b["mean_obs"] for b in order]
    cnts = [float(b["count"]) for b in order]
    fitted = _pav(obs, cnts)
    points = [[round(p, 6), round(f, 6)] for p, f in zip(preds, fitted)]
    return {"points": points, "n": total,
            "ece": round(ece(bins, total), 6), "mce": round(mce(bins), 6),
            "n_bins": n_bins}


def apply_calibration(cal: Optional[Dict[str, Any]], conf: float) -> float:
    """Map a raw confidence through the fitted calibrator (piecewise-linear over
    the calibration points, clamped at the ends). An empty/missing calibrator is
    the identity, so an un-fitted system is unchanged."""
    if not cal:
        return float(conf)
    pts = cal.get("points") or []
    if not pts:
        return float(conf)
    c = float(conf)
    if c <= pts[0][0]:
        return float(pts[0][1])
    if c >= pts[-1][0]:
        return float(pts[-1][1])
    for (x0, y0), (x1, y1) in zip(pts, pts[1:]):
        if x0 <= c <= x1:
            if x1 == x0:
                return float(y1)
            t = (c - x0) / (x1 - x0)
            return float(y0 + t * (y1 - y0))
    return c


# ----------------------------------------------------------------- #
#  I/O                                                               #
# ----------------------------------------------------------------- #
def confidence_outcome_pairs(backend, ns: str) -> List[Tuple[float, float]]:
    """(predicted source-reliability, observed outcome) for every labelled
    (query, returned-key) feedback pair. Predicted = source_reliability of the
    memory's source_class; outcome = 1 if the caller used that key, else 0. Only
    feedback records that actually received a feedback() call are counted (an
    unlabelled search is not a stream of negatives)."""
    from .server import source_reliability
    fbs = backend._feedback_records(ns)
    labelled = [fb for fb in fbs
                if "feedback_ts" in fb or fb.get("used_keys") or
                fb.get("rating") is not None]
    keys = set()
    for fb in labelled:
        keys.update(fb.get("returned_keys") or [])
    src: Dict[str, Optional[str]] = {}
    try:
        for k, v in backend._fetch_by_keys(backend.memory, ns, list(keys)):
            try:
                rec = json.loads(v) if v else {}
            except Exception:
                rec = {}
            src[k] = rec.get("source_class") if isinstance(rec, dict) else None
    except Exception:
        pass
    pairs: List[Tuple[float, float]] = []
    for fb in labelled:
        used = set(fb.get("used_keys") or [])
        for k in (fb.get("returned_keys") or []):
            pairs.append((source_reliability(src.get(k)), 1.0 if k in used else 0.0))
    return pairs


def calibration_report(backend, ns: str, n_bins: int = 10) -> Dict[str, Any]:
    """Build the reliability diagram + ECE/MCE + fitted calibrator for `ns`.
    Read-only."""
    pairs = confidence_outcome_pairs(backend, ns)
    bins = reliability_bins(pairs, n_bins)
    cal = fit_calibrator(pairs, n_bins)
    return {"pairs": len(pairs),
            "diagram": [{"mean_pred": round(b["mean_pred"], 4),
                         "mean_obs": round(b["mean_obs"], 4),
                         "count": b["count"]} for b in bins if b["count"]],
            "ece": cal["ece"], "mce": cal["mce"], "calibrator": cal}


def load_calibrator(backend, ns: str) -> Optional[Dict[str, Any]]:
    """The fitted calibrator recorded for `ns`, or None if calibration has not
    run. Used by the opt-in calibrate layer."""
    from .server import _e
    try:
        rows = backend._query(
            f"SELECT mem_value FROM __mem_{backend.job_runs_store} "
            f"WHERE mem_namespace = 'calibration' AND mem_key = '{_e(ns)}'")
        if rows and rows[0] and rows[0][0]:
            rep = json.loads(rows[0][0])
            return rep.get("calibrator")
    except Exception:
        return None
    return None


def job_calibration(backend, ns: str) -> int:
    """Scheduler job: compute the calibration report for `ns` and record it
    under job_runs ('calibration'). Returns the number of labelled pairs that
    fed the study (0 when there is no feedback yet)."""
    from .server import _e
    rep = calibration_report(backend, ns)
    try:
        backend._exec(
            f"MEMORY PUT INTO {backend.job_runs_store} VALUES "
            f"('calibration','{_e(ns)}','{_e(json.dumps(rep))}')")
    except Exception:
        pass
    return int(rep.get("pairs", 0))
