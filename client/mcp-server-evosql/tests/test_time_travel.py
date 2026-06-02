"""
test_time_travel — as-of queries over the validity store (roadmap step 22).

A superseded (stale) fact is dropped from present-time search but KEPT for an
as-of query whose timestamp falls inside the fact's validity window. Skipped
without a server on EVOSQL_PG_PORT (default 5520).
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql.server import _parse_as_of

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_parse():
    assert _parse_as_of(None) is None and _parse_as_of("") is None
    assert _parse_as_of(1700000000) == 1700000000.0
    assert _parse_as_of("2023-11-14T22:13:20Z") == 1700000000.0
    assert _parse_as_of("not a date") is None
    print("  ok  _parse_as_of: epoch / ISO-8601 / junk")


def test_time_travel() -> bool:
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
                       "EVOSQL_EMBEDDING_MODEL_2": "",
                       "EVOSQL_VALIDITY_GATE": "1"})
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_tt{int(time.time())}")
    ns = f"tt_{int(time.time())}"
    k1 = b.save(ns, "the user lives in portland city")
    k2 = b.save(ns, "the user lives in seattle city")

    now = time.time()
    t0, t1 = now - 1000, now - 100        # k1 was valid in [t0, t1)
    b._set_validity(ns, k1, valid_from=t0, valid_to=t1, status="stale",
                    superseded_by=[k2])

    def keys(as_of=None):
        return [r["key"] for r in b.search(ns, "user lives city",
                                           limit=10, as_of=as_of)]

    assert k1 not in keys(), "present-time query must drop the superseded fact"
    assert k1 in keys(as_of=t0 + 1), "as-of inside the window must keep it"
    assert k1 not in keys(as_of=t1 + 1), "as-of after valid_to must drop it"
    assert k2 in keys() and k2 in keys(as_of=t0 + 1), "current fact always present"
    print("  ok  present drops superseded; as-of inside window keeps it; "
          "after window drops it")

    os.environ.pop("EVOSQL_VALIDITY_GATE", None)
    return True


def main() -> int:
    test_parse()
    test_time_travel()
    print("OK — step 22 as-of time travel")
    return 0


if __name__ == "__main__":
    sys.exit(main())
