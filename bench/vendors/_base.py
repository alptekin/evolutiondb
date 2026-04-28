"""Shared base class + import-skip helper for vendor drivers."""
from __future__ import annotations

import os
import statistics
import time
from typing import Iterable, List, Optional, Sequence, Tuple


class VendorDriver:
    """Common interface every driver must implement."""
    name: str = "(unknown)"

    def is_available(self) -> bool:
        return False

    def setup(self) -> None: ...
    def teardown(self) -> None: ...

    def memory_put(self, ns: str, key: str, value: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        raise NotImplementedError

    def memory_get(self, ns: str, key: str) -> str:
        raise NotImplementedError


def safe_import(module: str):
    """Try `import <module>`; return the module on success, None
    otherwise. Drivers wrap their vendor SDK import in this so a
    missing pip package doesn't crash the runner."""
    try:
        return __import__(module)
    except ImportError:
        return None


def percentiles(samples: Sequence[float],
                 ps: Sequence[float] = (50, 95, 99)) -> dict:
    if not samples:
        return {p: 0.0 for p in ps}
    s = sorted(samples)
    out: dict = {}
    for p in ps:
        idx = max(0, min(len(s) - 1,
                          int(round((p / 100.0) * (len(s) - 1)))))
        out[p] = s[idx]
    return out


def summarize_ms(samples_ms: Sequence[float]) -> dict:
    if not samples_ms:
        return {"n": 0, "p50": 0, "p95": 0, "p99": 0,
                "mean": 0, "min": 0, "max": 0}
    pct = percentiles(samples_ms)
    return {
        "n":    len(samples_ms),
        "p50":  pct[50],
        "p95":  pct[95],
        "p99":  pct[99],
        "mean": statistics.fmean(samples_ms),
        "min":  min(samples_ms),
        "max":  max(samples_ms),
    }


def time_op(fn, iters: int) -> List[float]:
    """Run fn() iters times; collect millisecond samples."""
    samples: List[float] = []
    for _ in range(iters):
        t0 = time.perf_counter()
        fn()
        samples.append((time.perf_counter() - t0) * 1000.0)
    return samples
