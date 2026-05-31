"""
rebuild_embeddings — downtime-free re-embedding / model migration for the
primary memory store's `emb` vector (Adım 10).

Re-embeds rows whose stored `emb_model` differs from the target model. To
avoid touching live data mid-run, the new vector is written to a STAGING
field on the same record (`emb_staging` + `emb_staging_model`), leaving the
serving `emb` untouched — so old and new vectors sit side by side and can be
A/B compared. A separate, atomic per-row `--commit` then swaps staging into
`emb`; `--rollback` discards staging. Restart-safe: a row already staged for
the target model is skipped, so a re-run resumes from where it stopped, and a
checkpoint row in `__mem_<prefix>_migration_state` records progress.

Phases:
  (default)    stage    — embed stale rows into emb_staging (resumable)
  --commit                — swap emb_staging -> emb for fully-staged rows
  --rollback              — drop emb_staging from all rows (keep emb)
  --dry-run               — report counts, write nothing

Usage:
  EVOSQL_HOST=... EVOSQL_PORT=5433 EVOSQL_USER=admin EVOSQL_PASSWORD=admin \\
  EVOSQL_DATABASE=evosql MCP_STORE_PREFIX=mcp \\
  python -m mcp_server_evosql.rebuild_embeddings \\
      --namespace alptekin_topal --model BAAI/bge-m3 --batch-size 100
  # then, after validating the staged vectors:
  python -m mcp_server_evosql.rebuild_embeddings --namespace alptekin_topal --commit
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time
from typing import Dict, List, Optional

from .embeddings import provider_from_env, encode_vec
from .server import _e


def _emb_text(rec: dict) -> str:
    fact = rec.get("fact") or ""
    tags = rec.get("tags") or []
    return fact if not tags else fact + " " + " ".join(tags)


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


def _put(cur, store: str, ns: str, key: str, rec: dict) -> None:
    cur.execute(
        f"MEMORY PUT INTO {store} VALUES "
        f"('{_e(ns)}','{_e(key)}','{_e(json.dumps(rec))}')"
    )


def _write_checkpoint(cur, state_store: str, ns: str, payload: dict) -> None:
    try:
        _put(cur, state_store, ns, ns, payload)
    except Exception:
        pass  # checkpoint is advisory; the per-row staging marker is truth


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--namespace", required=True)
    ap.add_argument("--model", default=None,
                    help="Target embedding model; sets EVOSQL_EMBEDDING_MODEL "
                         "(provider local) when given.")
    ap.add_argument("--prefix", default=os.environ.get("MCP_STORE_PREFIX", "mcp"))
    ap.add_argument("--batch-size", type=int, default=64)
    ap.add_argument("--limit", type=int, default=100000)
    ap.add_argument("--rpm", type=int, default=0,
                    help="Max embed requests/min (remote providers). 0 = unlimited.")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--commit", action="store_true",
                    help="Swap staged emb_staging -> emb for fully-staged rows.")
    ap.add_argument("--rollback", action="store_true",
                    help="Discard emb_staging from all rows (keep emb).")
    args = ap.parse_args()

    if args.commit and args.rollback:
        print("--commit and --rollback are mutually exclusive", file=sys.stderr)
        return 2

    prefix = args.prefix
    memory = f"{prefix}_mem"
    state_store = f"{prefix}_migration_state"
    ns = args.namespace
    conn = _connect()
    with conn.cursor() as cur:
        try:
            cur.execute(f"CREATE MEMORY STORE {state_store}")
        except Exception:
            pass

    # ---- load main store ----
    with conn.cursor() as cur:
        cur.execute(
            f"SELECT mem_key, mem_value FROM __mem_{memory} "
            f"WHERE mem_namespace = '{_e(ns)}' LIMIT {args.limit}"
        )
        rows = cur.fetchall()
    print(f"loaded {len(rows)} rows, ns={ns}, prefix={prefix}")

    # ---- COMMIT phase: swap emb_staging -> emb ----
    if args.commit:
        swapped = 0
        with conn.cursor() as cur:
            for key, val in rows:
                rec = _as_rec(val)
                if not rec or not rec.get("emb_staging"):
                    continue
                rec["emb"] = rec.pop("emb_staging")
                rec["emb_model"] = rec.pop("emb_staging_model", rec.get("emb_model"))
                _put(cur, memory, ns, key, rec)
                swapped += 1
            _write_checkpoint(cur, state_store, ns,
                              {"phase": "committed", "swapped": swapped,
                               "ts": time.time()})
        print(f"committed: swapped {swapped} staged vector(s) into emb")
        return 0

    # ---- ROLLBACK phase: drop staging ----
    if args.rollback:
        cleared = 0
        with conn.cursor() as cur:
            for key, val in rows:
                rec = _as_rec(val)
                if not rec or "emb_staging" not in rec:
                    continue
                rec.pop("emb_staging", None)
                rec.pop("emb_staging_model", None)
                _put(cur, memory, ns, key, rec)
                cleared += 1
            _write_checkpoint(cur, state_store, ns,
                              {"phase": "rolledback", "cleared": cleared,
                               "ts": time.time()})
        print(f"rolled back: cleared staging from {cleared} row(s)")
        return 0

    # ---- STAGE phase (default) ----
    if args.model:
        os.environ["EVOSQL_EMBEDDING_PROVIDER"] = \
            os.environ.get("EVOSQL_EMBEDDING_PROVIDER", "local")
        os.environ["EVOSQL_EMBEDDING_MODEL"] = args.model
    embedder = provider_from_env()
    if embedder is None or embedder.kind == "none":
        print("no embedding provider configured (set EVOSQL_EMBEDDING_PROVIDER "
              "or pass --model)", file=sys.stderr)
        return 2
    model_name = getattr(embedder, "model_name", "")
    target = f"{embedder.kind}:{model_name}" if model_name else embedder.kind
    print(f"target model: {target}")

    todo: List[tuple] = []  # (key, rec, emb_text)
    skip_current = 0
    skip_staged = 0
    for key, val in rows:
        rec = _as_rec(val)
        if not rec or not rec.get("fact"):
            continue
        if rec.get("emb_model") == target:
            skip_current += 1            # already serving the target model
            continue
        if rec.get("emb_staging_model") == target:
            skip_staged += 1             # already staged in a prior run (resume)
            continue
        t = _emb_text(rec)
        if t.strip():
            todo.append((key, rec, t))
    print(f"to (re)embed: {len(todo)}   already-current: {skip_current}   "
          f"already-staged: {skip_staged}")
    if args.dry_run:
        return 0
    if not todo:
        print("nothing to stage.")
        return 0

    done = 0
    t0 = time.time()
    bs = max(1, args.batch_size)
    min_batch_interval = (bs * 60.0 / args.rpm) if args.rpm > 0 else 0.0
    for i in range(0, len(todo), bs):
        batch_start = time.time()
        chunk = todo[i:i + bs]
        if hasattr(embedder, "embed_batch"):
            vecs = embedder.embed_batch([t for _, _, t in chunk], batch_size=bs)
        else:
            vecs = [embedder.embed(t) for _, _, t in chunk]
        with conn.cursor() as cur:
            for (key, rec, _), v in zip(chunk, vecs):
                if not v:
                    continue
                rec["emb_staging"] = encode_vec(v)
                rec["emb_staging_model"] = target
                _put(cur, memory, ns, key, rec)   # preserves serving emb
                done += 1
            _write_checkpoint(cur, state_store, ns,
                              {"phase": "staging", "target": target,
                               "staged": done, "total": len(todo),
                               "ts": time.time()})
        rate = done / max(time.time() - t0, 1e-6)
        print(f"  staged {done}/{len(todo)}  ({rate:.1f} rows/s)", flush=True)
        if min_batch_interval:
            slack = min_batch_interval - (time.time() - batch_start)
            if slack > 0:
                time.sleep(slack)
    print(f"staged {done} row(s) in {time.time()-t0:.0f}s. "
          f"Validate, then run with --commit to swap into emb "
          f"(or --rollback to discard).")
    return 0


if __name__ == "__main__":
    sys.exit(main())
