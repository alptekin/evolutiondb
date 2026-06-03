"""
tms — truth-maintenance: Type-II dependent retraction (roadmap step 39).

A derived memory (a semantic generalization, an episode summary, a reconciled
fact, a skill) records the source rows it was built from in `derived_from`. When
those sources are later retracted/superseded, the derived fact may have lost the
evidence it rested on — a classic justification-based truth-maintenance problem
(Doyle / de Kleer). This module walks the `derived_from` dependency closure from
the retracted set and marks any derived row whose support is fully gone as
'unsupported', so the validity gate stops it from ranking as if still grounded.

Conservative and OPT-IN (EVOSQL_TMS, default off): only a derived row with ALL
of its sources retracted is undermined (not merely some), nothing is deleted
(only its validity status flips, reversible), and an optional judge can CONFIRM
a row that still stands on independent grounds. The default path never runs it.

Pure core (`build_support_index`, `retract_closure`) is unit-testable without a
server; the I/O wrapper reads validity + the data stores and marks the closure.
"""
from __future__ import annotations

import json
import os
import time
from typing import Any, Callable, Dict, List, Optional, Sequence, Set, Tuple

# validity statuses that count as "support withdrawn"
_RETRACTED = ("stale", "retracted", "unsupported", "superseded")


def build_support_index(rows: List[Tuple[str, Dict[str, Any]]]
                        ) -> Dict[str, List[str]]:
    """{dependent_key: [source_keys]} from each row's derived_from/provenance.
    Rows with no provenance are omitted (they depend on nothing, so they can
    never become unsupported)."""
    idx: Dict[str, List[str]] = {}
    for k, rec in rows:
        if not isinstance(rec, dict):
            continue
        srcs: List[str] = []
        for field in ("derived_from", "provenance"):
            v = rec.get(field)
            if isinstance(v, list):
                srcs += [s for s in v if isinstance(s, str) and s]
        if srcs:
            idx[k] = sorted(set(srcs))
    return idx


def retract_closure(support_index: Dict[str, List[str]],
                    retracted: Sequence[str], *,
                    require_all: bool = True) -> Set[str]:
    """Type-II dependent retraction closure. Starting from `retracted`, a
    derived row is undermined when ALL its sources are retracted
    (require_all=True; conservative) or ANY is (require_all=False). A newly
    undermined row joins the frontier, so facts derived from IT are re-examined
    in turn (transitive). Returns the set of NEWLY unsupported keys — excluding
    the originally-retracted set and excluding any self-referential cycle that
    would otherwise retract a row by its own retraction."""
    retracted_set: Set[str] = {r for r in retracted if r}
    newly: Set[str] = set()
    changed = True
    while changed:
        changed = False
        for dep, srcs in support_index.items():
            if dep in retracted_set or not srcs:
                continue
            # a row can't be undermined purely by depending on itself
            ext = [s for s in srcs if s != dep]
            if not ext:
                continue
            gone = sum(1 for s in ext if s in retracted_set)
            undermined = (gone == len(ext)) if require_all else (gone > 0)
            if undermined:
                retracted_set.add(dep)
                newly.add(dep)
                changed = True
    return newly


# ----------------------------------------------------------------- #
#  I/O                                                               #
# ----------------------------------------------------------------- #
def tms_enabled() -> bool:
    return os.environ.get("EVOSQL_TMS", "0") not in (
        "0", "", "off", "false", "no")


def _all_rows(backend, ns: str) -> List[Tuple[str, Dict[str, Any]]]:
    """(key, rec) across the data stores that carry provenance — main memory,
    semantic, skill, episodes."""
    from .server import _e
    out: List[Tuple[str, Dict[str, Any]]] = []
    stores = [backend.memory]
    for attr in ("semantic_store", "skill_store", "episodes_store"):
        s = getattr(backend, attr, None)
        if s:
            stores.append(s)
    for store in stores:
        try:
            rows = backend._query(
                f"SELECT mem_key, mem_value FROM __mem_{store} "
                f"WHERE mem_namespace = '{_e(ns)}' LIMIT 1000000") or []
        except Exception:
            continue
        for k, v in rows:
            kk = k if isinstance(k, str) else str(k)
            try:
                rec = v if isinstance(v, dict) else (json.loads(v) if v else {})
            except Exception:
                rec = {}
            if isinstance(rec, dict):
                out.append((kk, rec))
    return out


def _retracted_keys(backend, ns: str) -> Set[str]:
    """Keys whose validity status counts as support-withdrawn."""
    from .server import _e
    out: Set[str] = set()
    try:
        rows = backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.validity_store} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT 1000000") or []
    except Exception:
        return out
    for k, v in rows:
        try:
            rec = json.loads(v) if v else {}
        except Exception:
            continue
        if isinstance(rec, dict) and rec.get("status") in _RETRACTED:
            out.add(k if isinstance(k, str) else str(k))
    return out


def reexamine(backend, ns: str, *, require_all: bool = True,
              judge: Optional[Callable[[Dict[str, Any], List[str]], str]] = None,
              mark: bool = True) -> List[str]:
    """Run Type-II dependent retraction over `ns`. Build the support index, find
    the retracted sources, compute the undermined closure, and (when mark) flip
    each undermined row's validity to 'unsupported' with an evidence note. An
    optional judge(dependent_rec, gone_sources) returning 'CONFIRM' keeps a row
    that still stands on independent grounds. OPT-IN: a no-op unless EVOSQL_TMS
    is set. Returns the list of keys marked unsupported."""
    if not tms_enabled():
        return []
    rows = _all_rows(backend, ns)
    index = build_support_index(rows)
    retracted = _retracted_keys(backend, ns)
    if not retracted or not index:
        return []
    closure = retract_closure(index, retracted, require_all=require_all)
    rec_by_key = {k: r for k, r in rows}
    affected: List[str] = []
    now = time.time()
    for dep in sorted(closure):
        gone = [s for s in index.get(dep, []) if s in retracted]
        if judge is not None:
            try:
                if (judge(rec_by_key.get(dep, {}), gone) or "").upper() == "CONFIRM":
                    continue                     # still supported on other grounds
            except Exception:
                pass                             # judge failure -> conservative mark
        if mark:
            try:
                backend._set_validity(ns, dep, valid_to=now, status="unsupported",
                                      superseded_by=gone)
            except Exception:
                continue
        affected.append(dep)
    return affected


def job_tms(backend, ns: str) -> int:
    """Scheduler hook: re-adjudicate the dependent closure for `ns`. No-op
    unless EVOSQL_TMS is enabled. Returns the count of rows marked unsupported."""
    return len(reexamine(backend, ns))
