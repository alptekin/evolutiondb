"""
test_bench_longmemeval — bench wired to the real MemoryBackend.search + a
pluggable answer judge (roadmap step 6).

Unit: make_judge('substring') is the recall floor; make_judge('llm') falls back
to substring when no LLM backend is wired.
Integration (skipped without a server on EVOSQL_PG_PORT, default 5520): the
LongMemEval driver runs end-to-end through MemoryBackend.search on the built-in
fixture and reports a recall number.
"""
from __future__ import annotations

import os
import subprocess
import sys

_REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_judge_unit():
    sys.path.insert(0, os.path.join(_REPO, "bench", "longmemeval"))
    sys.path.insert(0, os.path.join(_REPO, "bench"))
    from run import make_judge
    sub = make_judge("substring")
    assert sub("q", "Tokyo", ["Ticket to Tokyo confirmed."]) is True
    assert sub("q", "Berlin", ["Ticket to Tokyo confirmed."]) is False
    # llm judge with no backend wired -> graceful substring floor
    llm = make_judge("llm")
    assert llm("q", "Tokyo", ["fly to Tokyo"]) is True
    assert llm("q", "Mars", ["fly to Tokyo"]) is False
    print("  ok  make_judge: substring floor + llm graceful fallback")


def test_real_pipeline() -> bool:
    try:
        import psycopg
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    env = dict(os.environ, EVOSQL_EMBEDDING_PROVIDER="none",
               EVOSQL_EMBEDDING_MODEL_2="", EVOSQL_ENTITY_EXTRACT="0")
    r = subprocess.run(
        [sys.executable, os.path.join(_REPO, "bench", "longmemeval", "run.py"),
         "--retriever", "real", "--pg-port", str(PORT),
         "--judge", "substring", "--k", "10"],
        capture_output=True, text=True, env=env, cwd=_REPO, timeout=120)
    out = r.stdout + r.stderr
    assert r.returncode == 0, f"bench real run failed:\n{out}"
    assert "real search" in out and "recall@10" in out, out
    # the built-in fixture's golds are substrings of the ingested messages, so
    # the real search path must find at least one
    import re
    m = re.search(r"recall@10:\s*\*\*([0-9.]+)\*\*\s*\((\d+)/(\d+)\)", out)
    assert m, f"recall line not found:\n{out}"
    hits = int(m.group(2))
    assert hits >= 1, f"real search found nothing on the fixture: {out}"
    print(f"  ok  real MemoryBackend.search pipeline: recall {m.group(1)} "
          f"({hits}/{m.group(3)})")
    return True


def main() -> int:
    test_judge_unit()
    test_real_pipeline()
    print("OK — step 6 bench wired to real search + pluggable judge")
    return 0


if __name__ == "__main__":
    sys.exit(main())
