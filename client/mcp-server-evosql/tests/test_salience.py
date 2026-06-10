"""
test_salience — Step 12 salience score + retrieval boost.

Covers the formula (recency decay, sender activity, thread depth, feedback
weight handling), the compute-and-store CLI, and the search() re-ranking
boost: with the boost on, a recent row from an active sender outranks an
older equal-keyword row; with the boost off, ranking is unchanged.
"""
from __future__ import annotations

import json
import os
import sys
import time

import psycopg
from mcp_server_evosql import salience as SAL
from mcp_server_evosql.server import _e, MemoryBackend

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5503"))
os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": str(PORT),
                   "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                   "EVOSQL_DATABASE": "evosql"})
PREFIX = f"mcp_sal{int(time.time())}"
NS = "saltest"


def _conn():
    return psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                           password="admin", dbname="evosql", autocommit=True)


def _put(cur, key, rec):
    cur.execute(f"MEMORY PUT INTO {PREFIX}_mem VALUES "
                f"('{_e(NS)}','{_e(key)}','{_e(json.dumps(rec))}')")


def _get(cur, key):
    cur.execute(f"SELECT mem_value FROM __mem_{PREFIX}_mem "
                f"WHERE mem_namespace='{_e(NS)}' AND mem_key='{_e(key)}'")
    row = cur.fetchone()
    if not row or not row[0]:
        return None
    return row[0] if isinstance(row[0], dict) else json.loads(row[0])


def _get_salience(cur, key):
    # salience lives in its own side store now (not on the main record)
    cur.execute(f"SELECT mem_value FROM __mem_{PREFIX}_salience "
                f"WHERE mem_namespace='{_e(NS)}' AND mem_key='{_e(key)}'")
    row = cur.fetchone()
    if not row or not row[0]:
        return None
    v = row[0] if isinstance(row[0], dict) else json.loads(row[0])
    return v.get("salience")


def test_formula():
    now = time.time()
    assert abs(SAL.recency_score({"created": now}, now) - 1.0) < 1e-6
    assert abs(SAL.recency_score({"created": now - 14 * 86400}, now) - 0.497) < 0.02
    assert SAL.depth_score({"reply_count": 50}) == 1.0
    assert SAL.depth_score({}) == 0.0
    sc = {"alice": 100, "bob": 1}
    assert SAL.activity_score({"from": "alice"}, sc, 100) == 1.0
    assert SAL.activity_score({"from": "bob"}, sc, 100) < 0.3
    # feedback weight active only when data present
    base = SAL.compute_salience({"created": now}, "k", now=now,
                                sender_counts={}, max_count=0, feedback_used={})
    withfb = SAL.compute_salience({"created": now}, "k", now=now,
                                  sender_counts={}, max_count=0,
                                  feedback_used={"k": 5})
    assert withfb > base, "feedback should raise salience when present"
    print("  ok  formula")


def _run_compute(argv):
    old = sys.argv
    sys.argv = ["salience"] + argv
    try:
        return SAL.main()
    finally:
        sys.argv = old


def test_compute_and_boost():
    now = time.time()
    conn = _conn()
    with conn.cursor() as cur:
        cur.execute(f"CREATE MEMORY STORE {PREFIX}_mem")
        # 5 noise rows from "alice" to make her the active sender
        for i in range(5):
            _put(cur, f"noise{i}",
                 {"fact": f"alice note {i}", "from": "alice", "created": now})
        # two rows that both match the query keyword "quarterly report"
        _put(cur, "hot", {"fact": "the quarterly report is due",
                          "from": "alice", "created": now, "reply_count": 12})
        _put(cur, "cold", {"fact": "old quarterly report draft",
                           "from": "nobody", "created": now - 120 * 86400})

    # compute salience
    _run_compute(["--namespace", NS, "--prefix", PREFIX])
    with conn.cursor() as cur:
        hot = _get_salience(cur, "hot")
        cold = _get_salience(cur, "cold")
    assert hot is not None and cold is not None, (hot, cold)
    assert hot > cold + 0.3, f"hot {hot} should dominate cold {cold}"
    print(f"  ok  compute: salience hot={hot} >> cold={cold}")

    # retrieval: boost OFF -> tie broken by key order (cold < hot lexically),
    # so cold comes first; boost ON -> hot (high salience) first.
    def _search(boost):
        os.environ["EVOSQL_SALIENCE_BOOST"] = str(boost)
        b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", PREFIX)
        return [r["key"] for r in b.search(NS, "quarterly report", limit=2)]

    off = _search(0.0)
    on = _search(0.6)
    assert "hot" in off and "cold" in off, f"both should match: {off}"
    assert on[0] == "hot", f"with boost, hot must rank first: {on}"
    print(f"  ok  boost: off={off}  on={on} (hot first under boost)")


def main() -> int:
    test_formula()
    test_compute_and_boost()
    print("OK — Step 12 salience: formula + compute job + retrieval boost")
    return 0


if __name__ == "__main__":
    sys.exit(main())
