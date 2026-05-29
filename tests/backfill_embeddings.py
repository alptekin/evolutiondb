"""
tests/backfill_embeddings.py — minimal backfill CLI.

Recomputes the `emb` vector for every row in a user's memory store
using whichever provider EVOSQL_EMBEDDING_* points at, then writes
the record back via MEMORY PUT (upsert).

The grown-up version lands in Adım 10 (mcp-memory backfill-embeddings)
with batching, parallelism, throttling, and a resume cursor. This is
the minimum needed to gate Adım 4: a one-shot pass that fills `emb`
for the existing corpus so the upgraded model is actually queryable.

Usage:
    EVOSQL_EMBEDDING_PROVIDER=local \\
    EVOSQL_EMBEDDING_MODEL=BAAI/bge-m3 \\
    MCP_USER_ID=alptekin_topal \\
    python tests/backfill_embeddings.py --prefix mcp

    # Re-embed only rows missing the current model.
    python tests/backfill_embeddings.py --prefix mcp --only-missing

    # Limit pass for a quick smoke test.
    python tests/backfill_embeddings.py --prefix mcp --limit 50
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time
from pathlib import Path

_REPO_ROOT = Path(__file__).resolve().parents[1]
_MCP_PKG = _REPO_ROOT / "client" / "mcp-server-evosql"
if str(_MCP_PKG) not in sys.path:
    sys.path.insert(0, str(_MCP_PKG))

from mcp_server_evosql.server import MemoryBackend, _e  # noqa: E402
from mcp_server_evosql.embeddings import provider_from_env, encode_vec  # noqa: E402


def expected_model_tag(provider) -> str:
    name = getattr(provider, "model_name", "")
    return f"{provider.kind}:{name}" if name else provider.kind


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--prefix", default=os.environ.get("MCP_MEMORY_PREFIX",
                                                       "mcp"))
    p.add_argument("--user",   default=os.environ.get("MCP_USER_ID",
                                                       "alptekin_topal"))
    p.add_argument("--limit",  type=int, default=0,
                    help="Cap how many rows to process (0 = all).")
    p.add_argument("--only-missing", action="store_true",
                    help="Skip rows that already carry the current "
                         "provider+model tag.")
    p.add_argument("--progress-every", type=int, default=100)
    args = p.parse_args()

    provider = provider_from_env()
    if provider.kind == "noop":
        print("[backfill] EVOSQL_EMBEDDING_PROVIDER points at a no-op "
              "provider; nothing to backfill.", file=sys.stderr)
        return 2
    tag = expected_model_tag(provider)
    print(f"[backfill] target model tag: {tag}")

    backend = MemoryBackend(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "5433")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        database=os.environ.get("EVOSQL_DATABASE", "testdb"),
        prefix=args.prefix,
        embedder=provider,
    )

    rows = backend._query(
        f"SELECT mem_namespace, mem_key, mem_value FROM "
        f"__mem_{backend.memory} WHERE mem_namespace = "
        f"'{_e(args.user)}' LIMIT 1000000"
    )
    print(f"[backfill] candidates fetched: {len(rows)}")

    # First pass: parse rows, decide what needs embedding, collect
    # the texts. Second pass: batch-encode them. Third pass: write
    # back. This is what turns a multi-hour single-call backfill
    # into one that finishes in tens of minutes — the model can
    # parallelize across a batch but not across single calls.
    written = 0
    skipped = 0
    failed = 0
    pending: list = []  # list of (ns, key, rec, full_text)
    for r in rows:
        if args.limit and len(pending) >= args.limit:
            break
        ns, key, value = r[0], r[1], r[2]
        try:
            rec = json.loads(value) if value else {}
        except Exception:
            skipped += 1
            continue
        if not isinstance(rec, dict) or not rec.get("fact"):
            skipped += 1
            continue
        if args.only_missing and rec.get("emb_model") == tag and rec.get("emb"):
            skipped += 1
            continue
        text = rec.get("fact", "")
        tag_text = " ".join(rec.get("tags") or [])
        full_text = text if not tag_text else f"{text} {tag_text}"
        pending.append((ns, key, rec, full_text))

    print(f"[backfill] rows to embed: {len(pending)} (skipped {skipped})")
    started = time.time()

    embed_batch = getattr(provider, "embed_batch", None)
    chunk = 32

    def encode_chunk(texts):
        if embed_batch is not None:
            return embed_batch(texts, batch_size=chunk)
        return [provider.embed(t) for t in texts]

    for start in range(0, len(pending), chunk):
        block = pending[start:start + chunk]
        vecs = encode_chunk([t for _, _, _, t in block])
        for (ns, key, rec, _), vec in zip(block, vecs):
            if not vec:
                failed += 1
                continue
            rec["emb"] = encode_vec(vec)
            rec["emb_model"] = tag
            new_value = json.dumps(rec)
            try:
                backend._exec(
                    f"MEMORY PUT INTO {backend.memory} VALUES "
                    f"('{_e(ns)}','{_e(key)}','{_e(new_value)}')"
                )
                written += 1
            except Exception as exc:
                failed += 1
                print(f"[backfill] PUT failed for {key[:40]}…: {exc}",
                      file=sys.stderr)
        elapsed = time.time() - started
        rate = (written + failed) / max(elapsed, 0.001)
        print(f"[backfill] {start + len(block)}/{len(pending)} "
              f"(written={written} failed={failed}) "
              f"@ {rate:.1f} rows/s")

    elapsed = time.time() - started
    print(f"[backfill] done in {elapsed:.1f}s — "
          f"written={written} skipped={skipped} failed={failed}")
    return 0 if failed == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
