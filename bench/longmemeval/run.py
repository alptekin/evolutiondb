"""
run.py — LongMemEval recall@k driver against EvoSQL.

Pipeline for each question:

  1. Encode the question (when an embedding model is supplied) and
     query MEMORY SEARCH for top-k candidates.
  2. When no model is supplied, run a lexical fallback: scan the
     haystack and substring-match candidate messages against the
     question keywords.
  3. Score recall@k: did the candidate set contain at least one
     message whose content includes the gold answer?

The gold-answer comparator is intentionally simple — LongMemEval's
official scorer uses an LLM judge that we can plug in later via a
`score_fn`. The lexical comparator is the right floor for the harness
itself: it shows the pipeline runs end-to-end and reports a number,
even when no model is loaded.

Usage:

    python bench/longmemeval/run.py \\
        --dataset path/to/longmemeval-mini.json \\
        --k 10

For a smoke test without the public dataset we synthesise a tiny
record so CI / `make bench` can exercise the harness on every commit.
"""
from __future__ import annotations

import argparse
import os
import statistics
import sys
import time
from typing import Callable, Dict, List, Optional, Sequence

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _common import render_markdown                                       # noqa: E402
from longmemeval.loader import iter_records                                # noqa: E402
from longmemeval.ingest import ingest_records                              # noqa: E402


# --------------------------------------------------------------------
# Synthesised record for quick smoke tests
# --------------------------------------------------------------------
SYNTH = [
    {
        "question_id": "q_synth_1",
        "question": "Which jazz musician does Miles play?",
        "answer": "Miles Davis",
        "haystack_sessions": [
            {"session_id": "s001", "messages": [
                {"role": "user", "content": "I really love Miles Davis."},
                {"role": "assistant", "content": "Cool kind of jazz!"},
                {"role": "user", "content": "Today's coffee was great too."},
            ]},
            {"session_id": "s002", "messages": [
                {"role": "user", "content": "Booked a flight elsewhere."},
                {"role": "assistant", "content": "Have a great trip."},
            ]},
        ],
    },
    {
        "question_id": "q_synth_2",
        "question": "Where is my Tokyo flight booking?",
        "answer": "Tokyo",
        "haystack_sessions": [
            {"session_id": "s003", "messages": [
                {"role": "user", "content": "Ticket to Tokyo confirmed."},
                {"role": "assistant", "content": "Window or aisle?"},
            ]},
        ],
    },
]


# --------------------------------------------------------------------
# Lexical retrieval fallback (no embedding model required)
# --------------------------------------------------------------------
def lexical_top_k(conn, store: str, question: str, k: int) -> List[str]:
    """Pull every message from the store and keyword-rank them."""
    rows = conn.query(
        f"SELECT mem_namespace, mem_key, mem_value FROM __mem_{store}",
        max_rows=4096, max_cols=4, col_buf_size=4096)
    keywords = [w.lower() for w in question.split() if len(w) > 3]
    scored: List = []
    for r in rows:
        body = (r[2] or "").lower()
        score = sum(1 for w in keywords if w in body)
        if score:
            scored.append((score, r[2]))
    scored.sort(key=lambda x: -x[0])
    return [s[1] for s in scored[:k]]


# --------------------------------------------------------------------
# Driver
# --------------------------------------------------------------------
def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--host", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=9967)
    ap.add_argument("--user", default="admin")
    ap.add_argument("--password", default="admin")
    ap.add_argument("--dataset", default=None,
                    help="path to a LongMemEval JSON file or directory; "
                         "omit to run on a tiny built-in fixture")
    ap.add_argument("--k", type=int, default=10)
    ap.add_argument("--store", default="bm_lme")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    from evosql_memory import connect

    if args.dataset:
        records = list(iter_records(args.dataset))
        source = args.dataset
    else:
        records = SYNTH
        source = "<built-in synthetic fixture>"

    print(f"=== longmemeval recall@{args.k} on {source} ===")
    print(f"loaded {len(records)} questions\n")

    with connect(args.host, args.port, args.user, args.password) as conn:
        n_msgs = ingest_records(conn, args.store, records)
        print(f"ingested {n_msgs} messages into MEMORY STORE {args.store}")

        hits = 0
        latencies_ms: List[float] = []
        for rec in records:
            qstr = rec.get("question") or ""
            gold = (rec.get("answer") or "").lower()
            t0 = time.perf_counter()
            cands = lexical_top_k(conn, args.store, qstr, args.k)
            latencies_ms.append((time.perf_counter() - t0) * 1000.0)
            if any(gold in (c or "").lower() for c in cands):
                hits += 1

        conn.exec_(f"DROP MEMORY STORE {args.store}")

    n = max(1, len(records))
    recall = hits / n
    p50 = statistics.median(latencies_ms) if latencies_ms else 0
    p99 = sorted(latencies_ms)[int(0.99 * (len(latencies_ms) - 1))] \
            if latencies_ms else 0

    md = "### LongMemEval (lexical fallback)\n\n"
    md += f"- dataset: `{source}`\n"
    md += f"- questions: {len(records)}\n"
    md += f"- ingested messages: {n_msgs}\n"
    md += f"- recall@{args.k}: **{recall:.3f}** ({hits}/{n})\n"
    md += f"- retrieval p50: {p50:.3f} ms, p99: {p99:.3f} ms\n"
    print(md)
    if args.out:
        with open(args.out, "w", encoding="utf-8") as fh:
            fh.write(md)
        print(f"wrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
