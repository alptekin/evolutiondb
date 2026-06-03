"""
test_learn — reward pipeline: feedback -> labelled IPS-weighted examples (step 24).

Unit: build_examples labels used=1 / unused=0, extracts the trace features, and
weights by inverse propensity (a use at a lower rank counts more); unlabelled
records are skipped.
Integration (skipped without a server): a real search -> log_query -> feedback
round-trip produces training examples.
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql.learn import build_examples, ips_weight, FEATURES

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    records = [{
        "used_keys": ["k1"],
        "trace": [
            {"key": "k1", "rank": 0, "scores": {"bge": 0.9, "kw": 0.5, "final": 0.8}},
            {"key": "k2", "rank": 3, "scores": {"bge": 0.3, "kw": 0.1, "final": 0.4}},
        ],
    }]
    ex = build_examples(records)
    assert len(ex) == 2
    e1 = next(e for e in ex if e["key"] == "k1")
    e2 = next(e for e in ex if e["key"] == "k2")
    assert e1["label"] == 1 and e2["label"] == 0
    assert e1["features"]["bge"] == 0.9 and e1["features"]["kw"] == 0.5
    assert all(f in e1["features"] for f in FEATURES)         # full feature vec
    # IPS: a lower rank (less examined) gets a higher weight
    assert ips_weight(3) > ips_weight(0)
    assert ips_weight(9) > ips_weight(3)
    assert e2["weight"] > e1["weight"]                        # rank 3 vs rank 0
    print("  ok  labels + features + IPS-by-rank weighting")

    # an unlabelled record (no used_keys) is skipped (not a bag of negatives)
    assert build_examples([{"used_keys": [], "trace": records[0]["trace"]}]) == []
    print("  ok  unlabelled records skipped")


def test_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"lrn_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_lrn{int(time.time())}")
    for i in range(5):
        b.save(ns, f"the quarterly revenue report for region {i}")
    res = b.search(ns, "quarterly revenue report region", limit=5)
    keys = [r["key"] for r in res]
    b.log_query(ns, "q1", "quarterly revenue report region", keys)
    b.feedback(ns, "q1", used_keys=[keys[0]])

    ex = build_examples(b._feedback_records(ns))
    assert ex, "no training examples from a real feedback round-trip"
    pos = [e for e in ex if e["label"] == 1]
    assert len(pos) == 1 and pos[0]["key"] == keys[0], pos
    assert any(e["label"] == 0 for e in ex), "should have negatives too"
    print(f"  ok  real round-trip -> {len(ex)} examples ({len(pos)} positive)")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 24 reward pipeline")
    return 0


if __name__ == "__main__":
    sys.exit(main())
