"""
backfill_emb2 — populate the second dense vector (e5) for the RRF
ensemble across an existing memory store.

The RRF search path fuses bge-m3 (`emb`) and e5 (`emb2`) rankings.
Rows written before the ensemble landed have only `emb`; this script
computes the missing `emb2` so the whole corpus competes fairly under
RRF (gold keys with emb2 against distractors without it would be a
rigged comparison).

Idempotent and restart-safe: rows that already carry `emb2` for the
current model are skipped, so a re-run only fills the gaps.

Usage:
  EVOSQL_HOST=... EVOSQL_PORT=... EVOSQL_USER=... EVOSQL_PASSWORD=... \\
  EVOSQL_DATABASE=evosql MCP_STORE_PREFIX=mcp \\
  EVOSQL_EMBEDDING_MODEL_2=intfloat/multilingual-e5-large \\
  python -m mcp_server_evosql.backfill_emb2 --namespace alptekin_topal
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time

from .embeddings import embedder2_from_env, encode_vec
from .server import _e


def _emb_text(rec: dict) -> str:
    fact = rec.get("fact") or ""
    tags = rec.get("tags") or []
    return fact if not tags else fact + " " + " ".join(tags)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--namespace", required=True)
    ap.add_argument("--prefix", default=os.environ.get("MCP_STORE_PREFIX", "mcp"))
    ap.add_argument("--batch", type=int, default=64)
    ap.add_argument("--limit", type=int, default=100000)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    e5 = embedder2_from_env()
    if e5.kind == "none":
        print("EVOSQL_EMBEDDING_MODEL_2 unset — nothing to do.", file=sys.stderr)
        return 2
    model_tag = f"{e5.kind}:{getattr(e5, 'model_name', '')}"

    import psycopg
    conn = psycopg.connect(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "5433")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        dbname=os.environ.get("EVOSQL_DATABASE", "evosql"),
        autocommit=True,
    )
    memory = f"{args.prefix}_mem"
    emb2_store = f"{args.prefix}_emb2"
    ns = args.namespace

    # Create the emb2 store if missing (idempotent).
    try:
        with conn.cursor() as cur:
            cur.execute(f"CREATE MEMORY STORE {emb2_store}")
    except Exception:
        pass

    def _as_rec(val):
        if isinstance(val, dict):
            return val
        try:
            return json.loads(val) if val else None
        except Exception:
            return None

    # Read the main store (for fact/tags → emb_text) and the existing
    # emb2 store (to skip rows already current). The main store is only
    # ever READ here — emb2 is written to its own store, so the primary
    # data can't be touched, let alone lost.
    with conn.cursor() as cur:
        cur.execute(
            f"SELECT mem_key, mem_value FROM __mem_{memory} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT {args.limit}"
        )
        rows = cur.fetchall()
        cur.execute(
            f"SELECT mem_key, mem_value FROM __mem_{emb2_store} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT {args.limit}"
        )
        e2existing = {}
        for k, v in cur.fetchall():
            r = _as_rec(v)
            if r:
                e2existing[k] = r.get("emb2_model")
    print(f"loaded {len(rows)} main rows, {len(e2existing)} existing emb2, ns={ns}")

    todo = []  # (key, emb_text)
    skip = 0
    for key, val in rows:
        rec = _as_rec(val)
        if not rec or not rec.get("fact"):
            continue
        if e2existing.get(key) == model_tag:
            skip += 1
            continue
        t = _emb_text(rec)
        if t.strip():
            todo.append((key, t))
    print(f"to backfill: {len(todo)}  already current: {skip}")
    if args.dry_run or not todo:
        return 0

    done = 0
    t0 = time.time()
    for i in range(0, len(todo), args.batch):
        chunk = todo[i:i + args.batch]
        vecs = e5.embed_batch([t for _, t in chunk], batch_size=args.batch)
        with conn.cursor() as cur:
            for (key, _), v in zip(chunk, vecs):
                if not v:
                    continue
                # emb2 store value is just the vector + model tag —
                # ~1.5KB, never near the 8KB cap, no oversize skips.
                e2val = json.dumps({"emb2": encode_vec(v),
                                    "emb2_model": model_tag})
                cur.execute(
                    f"MEMORY PUT INTO {emb2_store} VALUES "
                    f"('{_e(ns)}','{_e(key)}','{_e(e2val)}')"
                )
                done += 1
        rate = done / max(time.time() - t0, 1e-6)
        print(f"  {done}/{len(todo)}  ({rate:.1f} rows/s)", flush=True)
    print(f"done: {done} rows in {time.time()-t0:.0f}s")
    return 0


if __name__ == "__main__":
    sys.exit(main())
