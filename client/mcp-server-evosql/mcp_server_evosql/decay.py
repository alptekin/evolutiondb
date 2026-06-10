"""
decay — Ebbinghaus decay + archival policy (Adım 20).

Old, unused memories should fade from retrieval without being deleted, so the
system stays usable for years instead of drowning in its own history.

    decay_score = salience · exp(-λ · idle_days)        (λ = 0.01, ~69-day half-life)

`idle_days` is measured from a row's last access (search refreshes it; falls
back to created_at). A daily pass flags rows whose decay_score drops below a
threshold as archived = true — never deleting them. Archived rows are skipped
by default search and returned only with include_archived; an explicit restore
clears the flag and refreshes the access time.

Access times live in a small <prefix>_access store keyed by mem_key, so a
search never rewrites the (possibly large) main record just to record a read.

CLI:
  python -m mcp_server_evosql.decay --namespace alptekin_topal [--dry-run]
  python -m mcp_server_evosql.decay --namespace alptekin_topal --show-archived [--since Y-M-D]
"""
from __future__ import annotations

import argparse
import json
import math
import os
import sys
import time
from datetime import datetime, timezone
from typing import Any, Dict, List, Optional

LAMBDA = 0.01            # ~100-day half-life
THRESHOLD = 0.05
DEFAULT_SALIENCE = 0.5   # rows the salience job has not scored yet
STABILITY_K = 0.5        # spaced-repetition: how much each retrieval slows decay


def effective_lambda(retrieval_count: int, base_lam: float = LAMBDA,
                     k: float = STABILITY_K) -> float:
    """Per-row decay rate (roadmap step 31). Each retrieval raises the row's
    stability (1 + k*ln(1+count)) and so divides the decay rate down — a
    well-rehearsed memory decays slower (FSRS / testing effect)."""
    stability = 1.0 + k * math.log1p(max(0, int(retrieval_count or 0)))
    return base_lam / stability


def decay_score(salience: float, last_accessed: float, now: float,
                lam: float = LAMBDA, rif_penalty: float = 0.0) -> float:
    """Decay score = salience * recency-decay * (1 - rif_penalty). The
    retrieval-induced-forgetting penalty (roadmap step 30) pushes a repeatedly
    out-competed near-duplicate down so it fades while the winner stays."""
    idle_days = max(0.0, (now - last_accessed) / 86400.0)
    rif = min(max(float(rif_penalty), 0.0), 0.95)
    return float(salience) * math.exp(-lam * idle_days) * (1.0 - rif)


def _row_ts(rec: dict) -> float:
    """Epoch seconds from whichever timestamp a connector wrote: save_memory
    `created`; browser `saved_at` (epoch) / `last_visited_at` (ISO); email
    `received_at` (ISO); some rows `ts`."""
    for k in ("created", "saved_at", "ts", "received_at",
              "last_visited_at", "date"):
        v = rec.get(k)
        if v is None:
            continue
        if isinstance(v, (int, float)):
            return float(v)
        try:
            s = str(v).strip().replace("Z", "+00:00")
            dt = datetime.fromisoformat(s)
            if dt.tzinfo is None:
                dt = dt.replace(tzinfo=timezone.utc)
            return dt.timestamp()
        except Exception:
            continue
    return 0.0


def _salience_map(backend, user_id: str) -> Dict[str, float]:
    """{mem_key: salience} from the side store (Adım 12 writes it there)."""
    from .server import _e
    out: Dict[str, float] = {}
    for r in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.salience_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000000") or []:
        try:
            v = json.loads(r[1]) if r[1] else {}
            if isinstance(v.get("salience"), (int, float)):
                out[r[0]] = float(v["salience"])
        except Exception:
            continue
    return out


def _access_map(backend, user_id: str) -> Dict[str, float]:
    from .server import _e
    out: Dict[str, float] = {}
    for r in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.access_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000000") or []:
        try:
            out[r[0]] = float(json.loads(r[1]).get("last_accessed") or 0)
        except Exception:
            continue
    return out


def _rif_map(backend, user_id: str) -> Dict[str, float]:
    """{mem_key: rif_penalty} from the access side store (roadmap step 30)."""
    from .server import _e
    out: Dict[str, float] = {}
    for r in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.access_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000000") or []:
        try:
            rp = json.loads(r[1]).get("rif_penalty")
            if isinstance(rp, (int, float)):
                out[r[0]] = float(rp)
        except Exception:
            continue
    return out


def _strength_map(backend, user_id: str) -> Dict[str, int]:
    """{mem_key: retrieval_count} from the access side store (roadmap step 31)."""
    from .server import _e
    out: Dict[str, int] = {}
    for r in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.access_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000000") or []:
        try:
            c = json.loads(r[1]).get("retrieval_count")
            if isinstance(c, (int, float)):
                out[r[0]] = int(c)
        except Exception:
            continue
    return out


def near_dup_competitors(winner_vec, cand_vecs: Dict[str, list],
                         thresh: float = 0.92) -> list:
    """Keys whose embedding is a near-duplicate of the winner (cosine > thresh)
    — the out-competed rows a retrieval should push down (roadmap step 30).
    Pure; the caller supplies decoded vectors."""
    from .embeddings import cosine
    if not winner_vec:
        return []
    out = []
    for k, v in (cand_vecs or {}).items():
        try:
            if v and cosine(winner_vec, v) > thresh:
                out.append(k)
        except Exception:
            continue
    return out


def _fetch_current(backend, user_id: str, k: str, esc) -> Optional[dict]:
    """Re-read a single memory row's current value, so a decay rewrite patches
    the live record instead of a stale scan snapshot. Returns the parsed record
    or None if the row is gone / unreadable."""
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{esc(user_id)}' AND mem_key = '{esc(k)}' "
        f"LIMIT 1") or []
    if not rows or not rows[0] or rows[0][0] is None:
        return None
    try:
        v = rows[0][0]
        return v if isinstance(v, dict) else json.loads(v)
    except Exception:
        return None


def decay_pass(backend, user_id: str, *, threshold: float = THRESHOLD,
               lam: float = LAMBDA, dry_run: bool = False) -> Dict[str, int]:
    """Re-evaluate every row's decay_score and flip the archived flag when it
    crosses the threshold. Symmetric: a row that has been accessed again (its
    score back above threshold) is un-archived. Never deletes. Returns counts."""
    from .server import _e
    now = time.time()
    access = _access_map(backend, user_id)
    salience = _salience_map(backend, user_id)   # side store, not main record
    rif = _rif_map(backend, user_id)             # retrieval-induced forgetting
    strength = _strength_map(backend, user_id)   # spaced-repetition stability
    archived = unarchived = active = skipped = 0
    for k, v in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000000") or []:
        try:
            rec = json.loads(v) if v else {}
        except Exception:
            continue
        if not rec:
            continue
        sal = salience.get(k, DEFAULT_SALIENCE)
        la = access.get(k) or _row_ts(rec) or now
        lam_k = effective_lambda(strength.get(k, 0), lam)   # rehearsed -> slower
        ds = decay_score(sal, la, now, lam_k, rif.get(k, 0.0))
        want = ds < threshold
        have = bool(rec.get("archived"))
        if want and not have:
            rec["archived"] = True
            archived += 1
        elif not want and have:
            rec["archived"] = False
            unarchived += 1
        else:
            if not want:
                active += 1
            continue
        if not dry_run:
            # Re-read the row immediately before writing and patch ONLY the
            # archived flag onto the CURRENT record. decay runs in the
            # scheduler process while save()/reconsolidate run in the MCP
            # server process; the row snapshot taken by the SELECT above can be
            # stale by now. Rewriting the whole stale `rec` would clobber a
            # concurrent fact/tags/emb update (silent data loss). Re-reading
            # narrows the read-modify-write window to a single statement.
            fresh = _fetch_current(backend, user_id, k, _e)
            if fresh is None:
                # row vanished or unreadable since the scan — do not resurrect a
                # stale copy; just drop this decay update.
                skipped += 1
                if want:
                    archived -= 1
                else:
                    unarchived -= 1
                continue
            fresh["archived"] = rec["archived"]
            value = json.dumps(fresh)
            # Guard the 8 KB statement cap: a record too big to rewrite is
            # left as-is rather than killing the connection. Rare (only very
            # large rows), and decay is a soft signal.
            if len(value) + len(k) + len(user_id) > 7000:
                skipped += 1
                if want:
                    archived -= 1
                else:
                    unarchived -= 1
                continue
            backend._exec(f"MEMORY PUT INTO {backend.memory} VALUES "
                          f"('{_e(user_id)}','{_e(k)}','{_e(value)}')")
    return {"archived": archived, "unarchived": unarchived,
            "active": active, "skipped": skipped}


def show_archived(backend, user_id: str,
                  since: Optional[float] = None) -> List[dict]:
    from .server import _e
    out = []
    for k, v in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000000") or []:
        try:
            rec = json.loads(v) if v else {}
        except Exception:
            continue
        if not rec.get("archived"):
            continue
        if since is not None and _row_ts(rec) < since:
            continue
        out.append({"key": k, "fact": rec.get("fact", ""),
                    "created": rec.get("created")})
    return out


def _connect_backend(prefix: str):
    from .server import MemoryBackend
    from .embeddings import provider_from_env
    return MemoryBackend(
        os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        int(os.environ.get("EVOSQL_PORT", "5433")),
        os.environ.get("EVOSQL_USER", "admin"),
        os.environ.get("EVOSQL_PASSWORD", "admin"),
        os.environ.get("EVOSQL_DATABASE", "evosql"),
        prefix, embedder=provider_from_env())


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--namespace", required=True)
    ap.add_argument("--prefix", default=os.environ.get("MCP_STORE_PREFIX", "mcp"))
    ap.add_argument("--threshold", type=float, default=THRESHOLD)
    ap.add_argument("--show-archived", action="store_true")
    ap.add_argument("--since", default=None, help="YYYY-MM-DD")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()
    b = _connect_backend(args.prefix)

    if args.show_archived:
        since = None
        if args.since:
            dt = datetime.fromisoformat(args.since).replace(tzinfo=timezone.utc)
            since = dt.timestamp()
        rows = show_archived(b, args.namespace, since)
        print(f"ns={args.namespace}: {len(rows)} archived row(s)")
        for r in rows[:50]:
            print(f"  {r['key']}: {str(r['fact'])[:70]}")
        return 0

    res = decay_pass(b, args.namespace, threshold=args.threshold,
                     dry_run=args.dry_run)
    print(f"ns={args.namespace}: archived={res['archived']} "
          f"unarchived={res['unarchived']} active={res['active']}"
          + (" (dry-run)" if args.dry_run else ""))
    return 0


if __name__ == "__main__":
    sys.exit(main())
