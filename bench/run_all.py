"""
run_all.py — orchestrator for the agent-memory benchmark suite.

Runs the latency, reactive, temporal, and longmemeval (synth) benches
in sequence and concatenates each one's markdown output into a single
report at docs/benchmarks/v1.md.

The orchestrator deliberately uses subprocess.run rather than calling
each bench's main() in-process — every bench should be reproducible
on its own, and the SDK opens raw sockets / threads that benefit from
process isolation between runs.
"""
import argparse
import datetime
import os
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
DOCS = os.path.join(REPO, "docs", "benchmarks")


BENCHES = [
    {"name": "latency",     "path": "bench/latency/run.py",
     "args": ["--iters", "200"]},
    {"name": "reactive",    "path": "bench/reactive/run.py",
     "args": ["--iters", "150", "--poll-interval-ms", "1000"]},
    {"name": "temporal",    "path": "bench/temporal/run.py",
     "args": ["--rows", "200", "--iters", "150"]},
    {"name": "longmemeval", "path": "bench/longmemeval/run.py",
     "args": []},
]


def run_one(bench: dict) -> str:
    """Invoke a bench script with --out <tmpfile> and return its
    markdown output."""
    with tempfile.NamedTemporaryFile("r", suffix=".md", delete=False) as fh:
        out_path = fh.name
    cmd = [sys.executable, bench["path"], "--out", out_path] + bench["args"]
    subprocess.run(cmd, check=True, cwd=REPO)
    with open(out_path, "r", encoding="utf-8") as fh:
        body = fh.read()
    os.unlink(out_path)
    return body


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join(DOCS, "v1.md"))
    args = ap.parse_args()

    os.makedirs(os.path.dirname(args.out), exist_ok=True)

    parts = []
    parts.append("# EvolutionDB Agent-Memory Benchmarks (v1)\n")
    parts.append(f"_run at {datetime.datetime.utcnow().isoformat()}Z_\n")
    parts.append(
        "These numbers are produced by `bench/run_all.py` against a "
        "single EvolutionDB process on `127.0.0.1:9967` (default Docker "
        "compose). Latencies are wall-clock from the Python ctypes "
        "client — they include the EVO text protocol round-trip.\n")

    for bench in BENCHES:
        print(f"\n--- {bench['name']} ---")
        try:
            body = run_one(bench)
            parts.append(body + "\n")
        except subprocess.CalledProcessError as e:
            parts.append(
                f"### {bench['name']}\n_(failed: exit {e.returncode})_\n")

    parts.append(
        "## Notes\n"
        "- The reactive bench compares EvoSQL's NOTIFY push against a "
        "polling loop at the chosen interval — push p99 should land "
        "well under 10 ms while polling worst-case is bounded by the "
        "interval (1000 ms by default).\n"
        "- The LongMemEval row uses the built-in synthetic fixture by "
        "default. For the full public dataset run "
        "`bench/longmemeval/run.py --dataset path/to/longmemeval.json` "
        "and supply an embedding model via the `embed_fn` parameter.\n"
        "- Cross-vendor comparison rows (Zep / Mem0 / langgraph-store-"
        "mongodb / Pinecone) are deferred to v2 — those backends ship "
        "as separate Docker images and the runner will sweep them once "
        "the official compatibility test harness (Task 220) lands.\n")

    out_text = "\n".join(parts)
    with open(args.out, "w", encoding="utf-8") as fh:
        fh.write(out_text)
    print(f"\nwrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
