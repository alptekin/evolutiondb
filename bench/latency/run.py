"""
latency/run.py — single-process latency benchmark.

Drives N iterations of every primitive a long-term-memory agent
backend has to be fast at:

  - MEMORY PUT
  - MEMORY GET
  - CHECKPOINT PUT
  - CHECKPOINT GET (latest by thread)
  - MEMORY SEARCH (vector top-k)

Reports p50 / p95 / p99 in milliseconds, written to stdout as a
markdown table and (when invoked from run_all.py) appended to the
roll-up report.
"""
import argparse
import json
import os
import sys
import random

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _common import render_markdown, summarize, timed                  # noqa: E402


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--host", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=9967)
    ap.add_argument("--user", default="admin")
    ap.add_argument("--password", default="admin")
    ap.add_argument("--iters", type=int, default=500,
                    help="iterations per primitive (default 500)")
    ap.add_argument("--embedding-dim", type=int, default=64,
                    help="dim for the search benchmark")
    ap.add_argument("--out", default=None,
                    help="write markdown table to this file")
    args = ap.parse_args()

    from evosql_memory import connect, format_vector

    print(f"=== latency bench ({args.iters} iters / op) ===\n")
    with connect(args.host, args.port, args.user, args.password) as conn:
        # Fresh stores so the file is not contaminated.
        conn.exec_("DROP MEMORY STORE IF EXISTS bm_lat_kv")
        conn.exec_("DROP MEMORY STORE IF EXISTS bm_lat_vec")
        conn.exec_("DROP CHECKPOINT STORE IF EXISTS bm_lat_ck")
        conn.exec_("CREATE MEMORY STORE bm_lat_kv")
        conn.exec_(
            f"CREATE MEMORY STORE bm_lat_vec "
            f"WITH (embedding_dim={int(args.embedding_dim)})")
        conn.exec_("CREATE CHECKPOINT STORE bm_lat_ck")

        # ----- MEMORY PUT --------------------------------------------
        put_ms: list = []
        for i in range(args.iters):
            payload = json.dumps({"i": i, "tag": f"v{i}"})
            put_ms.append(timed(lambda i=i, payload=payload:
                                conn.memory_put("bm_lat_kv", "bench",
                                                f"k{i}", payload)))

        # ----- MEMORY GET --------------------------------------------
        get_ms: list = []
        for i in range(args.iters):
            get_ms.append(timed(lambda i=i:
                                conn.memory_get("bm_lat_kv", "bench",
                                                f"k{i}")))

        # ----- CHECKPOINT PUT ----------------------------------------
        ck_put_ms: list = []
        for i in range(args.iters):
            ck_put_ms.append(timed(lambda i=i:
                                    conn.checkpoint_put(
                                        "bm_lat_ck", "th-bench", "",
                                        f"cp{i}",
                                        json.dumps({"step": i}),
                                        "{}")))

        # ----- CHECKPOINT GET LATEST ---------------------------------
        ck_get_ms: list = []
        for _ in range(args.iters):
            ck_get_ms.append(timed(lambda:
                                    conn.checkpoint_get_latest(
                                        "bm_lat_ck", "th-bench")))

        # ----- MEMORY SEARCH (vector top-k) --------------------------
        # Seed the vector store with N points first.
        rng = random.Random(42)
        seed_n = min(1000, args.iters)
        for i in range(seed_n):
            vec = [rng.random() for _ in range(args.embedding_dim)]
            conn.memory_put("bm_lat_vec", "bench", f"vk{i}",
                              json.dumps({"i": i}), vec)

        search_ms: list = []
        for _ in range(args.iters):
            qv = [rng.random() for _ in range(args.embedding_dim)]
            vec_lit = format_vector(qv)
            search_ms.append(timed(lambda vec_lit=vec_lit:
                                    conn.query(
                                        f"MEMORY SEARCH bm_lat_vec "
                                        f"USING VECTOR '{vec_lit}' LIMIT 10",
                                        max_rows=10, max_cols=8,
                                        col_buf_size=512)))

        # Cleanup
        conn.exec_("DROP MEMORY STORE bm_lat_kv")
        conn.exec_("DROP MEMORY STORE bm_lat_vec")
        conn.exec_("DROP CHECKPOINT STORE bm_lat_ck")

    rows = [
        summarize("memory_put",            put_ms),
        summarize("memory_get",            get_ms),
        summarize("checkpoint_put",        ck_put_ms),
        summarize("checkpoint_get_latest", ck_get_ms),
        summarize("memory_search_top10",   search_ms),
    ]
    md = render_markdown(rows, title="Latency (single process)")
    print(md)
    if args.out:
        with open(args.out, "w", encoding="utf-8") as fh:
            fh.write(md)
        print(f"wrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
