"""
ingest.py — push every haystack message into a MEMORY STORE.

For each question record:

  - Each haystack session_id becomes one EvoSQL namespace.
  - Each message gets a sequential key under that namespace.
  - The message dict is stored verbatim as JSON.

Embeddings are computed by the caller (we don't ship a model in this
repo). When `embed_fn` is provided, each message's content is passed
through it and the resulting float[] is attached. When omitted the
ingest runs lexical-only — recall@k will fall back to substring match.
"""
from __future__ import annotations

import json
from typing import Callable, Iterable, List, Optional, Sequence


def ingest_records(conn, store_name: str, records: Iterable[dict],
                    embed_fn: Optional[Callable[[str], Sequence[float]]] = None,
                    embedding_dim: int = 0) -> int:
    """Insert every haystack message into store_name. Returns the
    number of messages ingested. The store is dropped + recreated."""
    conn.exec_(f"DROP MEMORY STORE IF EXISTS {store_name}")
    if embedding_dim > 0:
        conn.exec_(
            f"CREATE MEMORY STORE {store_name} "
            f"WITH (embedding_dim={int(embedding_dim)})")
    else:
        conn.exec_(f"CREATE MEMORY STORE {store_name}")

    n = 0
    for rec in records:
        sessions = rec.get("haystack_sessions") or []
        for sess in sessions:
            sid = sess.get("session_id") or "session"
            for i, msg in enumerate(sess.get("messages") or []):
                content = msg.get("content") or ""
                key = f"{sid}_{i}"
                emb = embed_fn(content) if embed_fn else None
                conn.memory_put(store_name, sid, key,
                                  json.dumps(msg),
                                  emb)
                n += 1
    return n
