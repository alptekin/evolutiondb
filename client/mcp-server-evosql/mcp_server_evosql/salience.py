"""
salience — per-memory importance score (Adım 12).

    salience = α·recency + β·sender_activity + γ·thread_depth + δ·feedback

  - recency        = exp(-λ·age_days)                      (λ=0.05, half-life ~14d)
  - sender_activity= log1p(sender_count_90d)/log1p(max)    (0 when no sender)
  - thread_depth   = min(reply_count, 20)/20               (0 when not threaded)
  - feedback       = min(used_count, cap)/cap              (Adım 11 signal)

Weights default to α=0.3, β=0.25, γ=0.2, δ=0.25. δ only contributes once
feedback data exists; with an empty feedback corpus the δ weight is dropped
and α/β/γ are renormalized to sum 1, so undated/unsourced rows still get a
meaningful 0-1 score instead of being capped at 0.75.

The score is precomputed into each record's `salience` field by the
`compute` CLI (run daily, before the Adım 18 scheduler exists), and read by
the retrieval boost in server.search() — keeping the hot path allocation-free.

CLI:
  python -m mcp_server_evosql.salience --namespace alptekin_topal [--dry-run]
"""
from __future__ import annotations

import argparse
import json
import math
import os
import sys
import time
from datetime import datetime, timezone
from typing import Any, Dict, Optional

LAMBDA = 0.05
FEEDBACK_CAP = 5
DEFAULT_WEIGHTS = {"recency": 0.30, "activity": 0.25, "depth": 0.20, "feedback": 0.25}


def _row_ts(rec: dict) -> Optional[float]:
    """Best-effort epoch seconds from whichever timestamp field a connector
    wrote: save_memory uses `created`; emails use `received_at` (ISO); some
    rows carry `ts`."""
    for k in ("created", "ts", "received_at", "date"):
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
    return None


def _sender(rec: dict) -> str:
    return str(rec.get("sender") or rec.get("from") or rec.get("author") or "").strip().lower()


def recency_score(rec: dict, now: float) -> float:
    ts = _row_ts(rec)
    if ts is None:
        return 0.5  # undated → neutral, neither boosted nor buried
    age_days = max(0.0, (now - ts) / 86400.0)
    return math.exp(-LAMBDA * age_days)


def activity_score(rec: dict, sender_counts: Dict[str, int], max_count: int) -> float:
    s = _sender(rec)
    if not s or max_count <= 0:
        return 0.0
    return math.log1p(sender_counts.get(s, 0)) / math.log1p(max_count)


def depth_score(rec: dict) -> float:
    rc = rec.get("reply_count")
    if rc is None:
        rc = rec.get("thread_depth")
    try:
        rc = int(rc or 0)
    except (TypeError, ValueError):
        rc = 0
    return min(max(rc, 0), 20) / 20.0


def feedback_score(key: str, feedback_used: Dict[str, int]) -> float:
    return min(feedback_used.get(key, 0), FEEDBACK_CAP) / FEEDBACK_CAP


def compute_salience(rec: dict, key: str, *, now: float,
                     sender_counts: Dict[str, int], max_count: int,
                     feedback_used: Dict[str, int],
                     weights: Dict[str, float] = DEFAULT_WEIGHTS) -> float:
    r = recency_score(rec, now)
    a = activity_score(rec, sender_counts, max_count)
    d = depth_score(rec)
    f = feedback_score(key, feedback_used)
    w = dict(weights)
    if not feedback_used:                       # δ inactive until Adım 11 data lands
        tot = w["recency"] + w["activity"] + w["depth"]
        if tot > 0:
            w = {"recency": w["recency"] / tot, "activity": w["activity"] / tot,
                 "depth": w["depth"] / tot, "feedback": 0.0}
    s = (w["recency"] * r + w["activity"] * a +
         w["depth"] * d + w["feedback"] * f)
    return max(0.0, min(1.0, s))


# ---------------------------------------------------------------- #
#  daily compute-and-store job                                      #
# ---------------------------------------------------------------- #
def _as_rec(val) -> Optional[dict]:
    if isinstance(val, dict):
        return val
    try:
        return json.loads(val) if val else None
    except Exception:
        return None


def _connect():
    import psycopg
    return psycopg.connect(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "5433")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        dbname=os.environ.get("EVOSQL_DATABASE", "evosql"),
        autocommit=True,
    )


def main() -> int:
    from .server import _e

    ap = argparse.ArgumentParser()
    ap.add_argument("--namespace", required=True)
    ap.add_argument("--prefix", default=os.environ.get("MCP_STORE_PREFIX", "mcp"))
    ap.add_argument("--limit", type=int, default=100000)
    ap.add_argument("--window-days", type=int, default=90,
                    help="Sender-activity window.")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    memory = f"{args.prefix}_mem"
    feedback_store = f"{args.prefix}_feedback"
    ns = args.namespace
    now = time.time()
    window = args.window_days * 86400.0
    conn = _connect()

    with conn.cursor() as cur:
        cur.execute(
            f"SELECT mem_key, mem_value FROM __mem_{memory} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT {args.limit}"
        )
        rows = cur.fetchall()

    # sender activity within the window
    sender_counts: Dict[str, int] = {}
    recs: Dict[str, dict] = {}
    for key, val in rows:
        rec = _as_rec(val)
        if not rec:
            continue
        recs[key] = rec
        s = _sender(rec)
        if s:
            ts = _row_ts(rec)
            if ts is None or (now - ts) <= window:
                sender_counts[s] = sender_counts.get(s, 0) + 1
    max_count = max(sender_counts.values(), default=0)

    # feedback usage counts (Adım 11): how often each key was actually used
    feedback_used: Dict[str, int] = {}
    try:
        with conn.cursor() as cur:
            cur.execute(
                f"SELECT mem_value FROM __mem_{feedback_store} "
                f"WHERE mem_namespace = '{_e(ns)}' LIMIT {args.limit}"
            )
            for (fv,) in cur.fetchall():
                fr = _as_rec(fv)
                for k in ((fr or {}).get("used_keys") or []):
                    feedback_used[k] = feedback_used.get(k, 0) + 1
    except Exception:
        pass  # feedback store may not exist yet

    print(f"ns={ns}: {len(recs)} rows, {len(sender_counts)} senders "
          f"(max {max_count}), {len(feedback_used)} keys with feedback")

    changed = 0
    with conn.cursor() as cur:
        for key, rec in recs.items():
            sal = round(compute_salience(
                rec, key, now=now, sender_counts=sender_counts,
                max_count=max_count, feedback_used=feedback_used), 4)
            if rec.get("salience") == sal:
                continue
            rec["salience"] = sal
            changed += 1
            if not args.dry_run:
                cur.execute(
                    f"MEMORY PUT INTO {memory} VALUES "
                    f"('{_e(ns)}','{_e(key)}','{_e(json.dumps(rec))}')"
                )
    print(f"{'would update' if args.dry_run else 'updated'} salience on "
          f"{changed} row(s)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
