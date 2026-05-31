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


def decay_score(salience: float, last_accessed: float, now: float,
                lam: float = LAMBDA) -> float:
    idle_days = max(0.0, (now - last_accessed) / 86400.0)
    return float(salience) * math.exp(-lam * idle_days)


def _row_ts(rec: dict) -> float:
    for k in ("created", "ts"):
        v = rec.get(k)
        if isinstance(v, (int, float)):
            return float(v)
    return 0.0


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


def decay_pass(backend, user_id: str, *, threshold: float = THRESHOLD,
               lam: float = LAMBDA, dry_run: bool = False) -> Dict[str, int]:
    """Re-evaluate every row's decay_score and flip the archived flag when it
    crosses the threshold. Symmetric: a row that has been accessed again (its
    score back above threshold) is un-archived. Never deletes. Returns counts."""
    from .server import _e
    now = time.time()
    access = _access_map(backend, user_id)
    archived = unarchived = active = 0
    for k, v in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000000") or []:
        try:
            rec = json.loads(v) if v else {}
        except Exception:
            continue
        if not rec:
            continue
        sal = rec.get("salience")
        sal = float(sal) if isinstance(sal, (int, float)) else DEFAULT_SALIENCE
        la = access.get(k) or _row_ts(rec) or now
        ds = decay_score(sal, la, now, lam)
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
            backend._exec(f"MEMORY PUT INTO {backend.memory} VALUES "
                          f"('{_e(user_id)}','{_e(k)}','{_e(json.dumps(rec))}')")
    return {"archived": archived, "unarchived": unarchived, "active": active}


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
