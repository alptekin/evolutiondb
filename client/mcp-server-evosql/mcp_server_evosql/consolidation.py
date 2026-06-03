"""
consolidation — consolidation health-gate + forgetting detector (roadmap step 38).

The decay / semanticize / episode jobs are the memory's "sleep-time
consolidation". Two failure modes hurt silently: runaway FORGETTING (a decay
run that buries an abnormal slice of the corpus) and STALLED consolidation (the
abstraction jobs produce nothing while the corpus keeps growing). This module
snapshots the live namespace each run, keeps a short history under job_runs, and
flags either condition against that trend — recorded in the audit log instead of
failing silently. An optional, default-off gate pauses the decay job when the
last verdict says forgetting is running away (a conservative brake).

The detector core (`forgetting_verdict`, `consolidation_stalled`) is pure and
unit-testable without a server; the I/O wrappers snapshot + record.
"""
from __future__ import annotations

import json
import math
import os
from typing import Any, Dict, List, Optional, Tuple

# How many trailing snapshots form the baseline, and how far the latest must
# deviate before we call it runaway forgetting.
BASELINE_WINDOW = int(os.environ.get("EVOSQL_FORGET_WINDOW", "10"))
RUNAWAY_Z = float(os.environ.get("EVOSQL_FORGET_Z", "3.0"))
RUNAWAY_ABS_JUMP = float(os.environ.get("EVOSQL_FORGET_JUMP", "0.15"))
RUNAWAY_FLOOR = float(os.environ.get("EVOSQL_FORGET_FLOOR", "0.05"))
# Stall: corpus grew by at least this many rows over the window but the
# abstraction (semantic) layer did not grow at all.
STALL_GROWTH = int(os.environ.get("EVOSQL_STALL_GROWTH", "25"))


def _mean_std(xs: List[float]) -> Tuple[float, float]:
    n = len(xs)
    if n == 0:
        return 0.0, 0.0
    m = sum(xs) / n
    if n == 1:
        return m, 0.0
    var = sum((x - m) ** 2 for x in xs) / (n - 1)
    return m, math.sqrt(max(0.0, var))


def archived_fraction(rows: List[Tuple[Any, Any]]) -> Dict[str, float]:
    """(archived count, total, fraction) over (mem_key, mem_value-json) rows.
    A row is archived when its decoded record has a truthy `archived` flag."""
    total = archived = 0
    for r in rows:
        if not r or len(r) < 2:
            continue
        total += 1
        v = r[1]
        try:
            rec = v if isinstance(v, dict) else (json.loads(v) if v else {})
        except Exception:
            rec = {}
        if isinstance(rec, dict) and rec.get("archived"):
            archived += 1
    return {"archived": archived, "total": total,
            "frac": (archived / total) if total else 0.0}


def forgetting_verdict(series: List[Dict[str, Any]], *,
                       window: int = BASELINE_WINDOW, z: float = RUNAWAY_Z,
                       abs_jump: float = RUNAWAY_ABS_JUMP,
                       floor: float = RUNAWAY_FLOOR) -> Dict[str, Any]:
    """Flag RUNAWAY forgetting from a chronological list of snapshots (each with
    an `archived_frac`). The latest snapshot is runaway when its archived
    fraction sits both z standard deviations above the trailing baseline AND a
    minimum absolute jump above the baseline mean (so a single noisy run can't
    trip it, but a real burial spike does). Needs at least 2 baseline points;
    below that it reports not-runaway (cold start)."""
    fracs = [float(s.get("archived_frac", s.get("frac", 0.0))) for s in series]
    if len(fracs) < 3:
        return {"runaway": False, "latest_frac": fracs[-1] if fracs else 0.0,
                "baseline_mean": 0.0, "baseline_std": 0.0, "n": len(fracs),
                "reason": "cold-start (need >=3 snapshots)"}
    latest = fracs[-1]
    baseline = fracs[-(window + 1):-1]            # trailing window, excl. latest
    mean, std = _mean_std(baseline)
    over_z = latest > mean + z * std
    over_jump = latest - mean >= abs_jump
    runaway = bool(over_z and over_jump and latest >= floor)
    return {"runaway": runaway, "latest_frac": round(latest, 4),
            "baseline_mean": round(mean, 4), "baseline_std": round(std, 4),
            "n": len(fracs),
            "reason": ("archival fraction spiked above the trailing baseline"
                       if runaway else "within trend")}


def consolidation_stalled(series: List[Dict[str, Any]], *,
                          window: int = BASELINE_WINDOW,
                          growth: int = STALL_GROWTH) -> Dict[str, Any]:
    """Flag STALLED abstraction: across the trailing window the primary corpus
    grew by >= `growth` rows but the semantic layer did not grow at all. A
    no-semantic-configured backend (semantic_total stays 0 throughout) is not a
    stall — only a layer that was producing and then flat-lined while input
    kept arriving counts."""
    win = series[-(window + 1):]
    if len(win) < 3:
        return {"stalled": False, "reason": "cold-start", "mem_growth": 0,
                "semantic_growth": 0}
    mem = [int(s.get("mem_total", 0)) for s in win]
    sem = [int(s.get("semantic_total", 0)) for s in win]
    mem_growth = mem[-1] - mem[0]
    sem_growth = sem[-1] - sem[0]
    # only meaningful if the semantic layer is in use (ever produced anything)
    sem_active = any(s > 0 for s in sem)
    stalled = bool(sem_active and mem_growth >= growth and sem_growth <= 0)
    return {"stalled": stalled, "mem_growth": mem_growth,
            "semantic_growth": sem_growth,
            "reason": ("corpus grew but the semantic layer did not"
                       if stalled else "within trend")}


# ----------------------------------------------------------------- #
#  I/O wrappers                                                      #
# ----------------------------------------------------------------- #
def _snapshot(backend, ns: str) -> Dict[str, Any]:
    """Live snapshot of the namespace: archived fraction + corpus/semantic
    sizes. Read-only; safe to call any time."""
    from .server import _e
    rows = backend._query(
        f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(ns)}' LIMIT 1000000") or []
    af = archived_fraction(rows)
    sem_total = 0
    store = getattr(backend, "semantic_store", None)
    if store:
        try:
            sr = backend._query(
                f"SELECT mem_key FROM __mem_{store} "
                f"WHERE mem_namespace = '{_e(ns)}' LIMIT 1000000") or []
            sem_total = len(sr)
        except Exception:
            sem_total = 0
    return {"archived": af["archived"], "mem_total": af["total"],
            "archived_frac": af["frac"], "semantic_total": sem_total}


def _history(backend, ns: str, limit: int = 64) -> List[Dict[str, Any]]:
    """The recorded consolidation snapshots for `ns`, chronological. Stored
    under job_runs namespace 'consolidation', key '<ns>:<ts>'."""
    from .server import _e
    out: List[Tuple[float, Dict[str, Any]]] = []
    rows = backend._query(
        f"SELECT mem_key, mem_value FROM __mem_{backend.job_runs_store} "
        f"WHERE mem_namespace = 'consolidation' LIMIT 100000") or []
    prefix = f"{ns}:"
    for k, v in rows:
        kk = k if isinstance(k, str) else str(k)
        if not kk.startswith(prefix):
            continue
        try:
            rec = json.loads(v) if v else {}
            ts = float(kk[len(prefix):])
        except Exception:
            continue
        out.append((ts, rec))
    out.sort(key=lambda t: t[0])
    return [r for _, r in out[-limit:]]


def consolidation_health(backend, ns: str) -> Dict[str, Any]:
    """Snapshot the namespace, fold it into the recorded history, and return the
    forgetting + stall verdict (without recording — `job_consolidation_health`
    records). Read-only."""
    snap = _snapshot(backend, ns)
    series = _history(backend, ns) + [snap]
    fv = forgetting_verdict(series)
    sv = consolidation_stalled(series)
    return {"snapshot": snap, "forgetting": fv, "consolidation": sv,
            "healthy": not (fv["runaway"] or sv["stalled"])}


def decay_gate_open(backend) -> bool:
    """Conservative forgetting brake (default OFF via EVOSQL_FORGET_GATE). When
    enabled, the decay job is paused while the last recorded verdict for ANY
    namespace says forgetting is running away — so a runaway pass does not keep
    burying memory unattended. Default-off path always returns True (decay runs
    exactly as before)."""
    if os.environ.get("EVOSQL_FORGET_GATE", "0") in ("0", "", "off", "false", "no"):
        return True
    try:
        from .server import _e
        rows = backend._query(
            f"SELECT mem_value FROM __mem_{backend.job_runs_store} "
            f"WHERE mem_namespace = 'consolidation_state' LIMIT 100000") or []
        for r in rows:
            try:
                rec = json.loads(r[0]) if r[0] else {}
            except Exception:
                continue
            if rec.get("forgetting", {}).get("runaway"):
                return False
    except Exception:
        return True
    return True


def job_consolidation_health(backend, ns: str) -> int:
    """Scheduler job: snapshot + verdict, record both under job_runs, and return
    1 when the namespace is unhealthy (runaway forgetting or stalled
    consolidation), else 0. The snapshot is appended to the history series; the
    latest verdict is kept under 'consolidation_state' for the gate."""
    from .server import _e
    rep = consolidation_health(backend, ns)
    snap = rep["snapshot"]
    import time as _t
    ts = _t.time()
    try:
        backend._exec(
            f"MEMORY PUT INTO {backend.job_runs_store} VALUES "
            f"('consolidation','{_e(ns)}:{ts}','{_e(json.dumps(snap))}')")
        backend._exec(
            f"MEMORY PUT INTO {backend.job_runs_store} VALUES "
            f"('consolidation_state','{_e(ns)}',"
            f"'{_e(json.dumps({'forgetting': rep['forgetting'], 'consolidation': rep['consolidation']}))}')")
    except Exception:
        pass
    return 0 if rep["healthy"] else 1
