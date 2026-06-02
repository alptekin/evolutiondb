"""
test_activation — ACT-R base-level activation B_i (roadmap step 9).

Unit: base_level rewards recency AND frequency, uses Petrov's tail when the true
count exceeds the kept history, and floors a never-used row.
Integration (skipped without a server): a key retrieved more times scores a
higher B_i than one retrieved once.
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql.activation import base_level, B_FLOOR

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))
NOW = 1_000_000.0


def test_unit():
    # recency: a more recent access scores higher
    assert base_level([NOW - 10], 1, NOW) > base_level([NOW - 10000], 1, NOW)
    # frequency: more accesses at the same age score higher
    once = base_level([NOW - 100], 1, NOW)
    many = base_level([NOW - 100, NOW - 100, NOW - 100], 3, NOW)
    assert many > once, (once, many)
    # Petrov tail: a high total count over a lifetime beats the same kept uses
    no_tail = base_level([NOW - 50, NOW - 100], 2, NOW)
    with_tail = base_level([NOW - 50, NOW - 100], 50, NOW,
                           lifetime_start=NOW - 100000)
    assert with_tail > no_tail, (no_tail, with_tail)
    # never used -> floor
    assert base_level([], 0, NOW) == B_FLOOR
    assert base_level([], 5, NOW) == B_FLOOR
    print("  ok  base_level: recency + frequency + Petrov tail + floor")


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
    os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "none"
    os.environ["EVOSQL_EMBEDDING_MODEL_2"] = ""
    ns = f"act_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_act{int(time.time())}")
    b._touch_access(ns, ["k1"])
    for _ in range(5):
        b._touch_access(ns, ["k2"])
    m = b._base_level_map(ns, ["k1", "k2"])
    assert "k1" in m and "k2" in m, m
    assert m["k2"] > m["k1"], f"more-retrieved key must have higher B_i: {m}"
    # a never-touched key is simply absent
    assert "k3" not in b._base_level_map(ns, ["k3"])
    print(f"  ok  integration: B(k2,5x)={m['k2']:.3f} > B(k1,1x)={m['k1']:.3f}")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 9 ACT-R base-level activation")
    return 0


if __name__ == "__main__":
    sys.exit(main())
