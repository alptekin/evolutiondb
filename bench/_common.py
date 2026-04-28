"""
_common.py — shared helpers for the agent-memory benchmark harness.

Provides:
  - SDK auto-import (adds the in-tree Python client to sys.path)
  - timing helpers (timed, percentiles, summary stats)
  - markdown table renderer
"""
from __future__ import annotations

import os
import statistics
import sys
import time
from typing import Callable, Dict, Iterable, List, Sequence, Tuple

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PY_SDK    = os.path.join(REPO_ROOT, "client", "python-evosql-memory")
if PY_SDK not in sys.path:
    sys.path.insert(0, PY_SDK)


def percentiles(samples: Sequence[float],
                 ps: Sequence[float] = (50, 95, 99)) -> Dict[float, float]:
    """Return percentile values from a sample list. Empty list → 0.0."""
    if not samples:
        return {p: 0.0 for p in ps}
    s = sorted(samples)
    out: Dict[float, float] = {}
    for p in ps:
        idx = max(0, min(len(s) - 1,
                          int(round((p / 100.0) * (len(s) - 1)))))
        out[p] = s[idx]
    return out


def summarize(name: str, samples_ms: Sequence[float]) -> Dict[str, float]:
    if not samples_ms:
        return {"name": name, "n": 0, "p50": 0, "p95": 0, "p99": 0,
                "mean": 0, "min": 0, "max": 0}
    pct = percentiles(samples_ms)
    return {
        "name": name,
        "n":    len(samples_ms),
        "p50":  pct[50],
        "p95":  pct[95],
        "p99":  pct[99],
        "mean": statistics.fmean(samples_ms),
        "min":  min(samples_ms),
        "max":  max(samples_ms),
    }


def timed(fn: Callable[[], None]) -> float:
    """Run fn() once and return elapsed milliseconds."""
    t0 = time.perf_counter()
    fn()
    return (time.perf_counter() - t0) * 1000.0


def render_markdown(rows: List[Dict[str, float]],
                     title: str = "") -> str:
    if not rows:
        return f"### {title}\n_(no samples)_\n"
    out: List[str] = []
    if title:
        out.append(f"### {title}\n")
    out.append("| op | n | mean | p50 | p95 | p99 | min | max |")
    out.append("|----|---|------|-----|-----|-----|-----|-----|")
    for r in rows:
        out.append(
            f"| {r['name']} | {int(r['n'])} | "
            f"{r['mean']:.3f} | {r['p50']:.3f} | "
            f"{r['p95']:.3f} | {r['p99']:.3f} | "
            f"{r['min']:.3f} | {r['max']:.3f} |"
        )
    out.append("")
    out.append("_units: milliseconds_")
    return "\n".join(out) + "\n"
