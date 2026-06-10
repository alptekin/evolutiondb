"""
test_decay — Step 20 Ebbinghaus decay + archival policy.

Unit:
  - decay_score = salience · exp(-λ·idle_days); fresh = salience, ~69-day
    half-life at λ=0.01.

Eval gate (the plan's 6-month simulation): a corpus of mostly old, unused rows
plus a few fresh/important ones. After one decay pass the active (non-archived)
set is <= 30% of the original, and every archived row is 100% restorable.

Search integration (decay on): archived rows are skipped by default, returned
with include_archived, a read refreshes last_accessed, and restore_memory
brings an archived row back into normal search. Nothing is ever deleted.
"""
from __future__ import annotations

import json
import math
import os
import sys
import time

from mcp_server_evosql import decay as D

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5505"))
DAY = 86400.0


def test_score():
    assert abs(D.decay_score(0.7, 0, 0) - 0.7) < 1e-9          # fresh = salience
    assert abs(D.decay_score(1.0, 0, 69.3 * DAY) - 0.5) < 0.01  # half-life
    assert D.decay_score(0.3, 0, 250 * DAY) < 0.05             # old+low -> faded
    assert D.decay_score(0.6, 0, 10 * DAY) > 0.05              # fresh -> alive
    print("  ok  decay_score: fresh=salience, ~69d half-life, fade threshold")


def _put(b, ns, key, rec):
    from mcp_server_evosql.server import _e
    b._exec(f"MEMORY PUT INTO {b.memory} VALUES "
            f"('{_e(ns)}','{_e(key)}','{_e(json.dumps(rec))}')")
    # salience lives in its own side store now (Step 12 / 8KB fix); decay
    # reads it from there, so seed it there too.
    if "salience" in rec:
        b._exec(f"MEMORY PUT INTO {b.salience_store} VALUES "
                f"('{_e(ns)}','{_e(key)}',"
                f"'{_e(json.dumps({'salience': rec['salience']}))}')")


def test_eval_gate() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql",
                        autocommit=True, connect_timeout=3).close()
    except Exception as exc:
        print(f"  SKIP eval gate (no server on :{PORT}: {exc})")
        return True

    os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": str(PORT),
                       "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                       "EVOSQL_DATABASE": "evosql",
                       "EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_ENTITY_EXTRACT": "0", "EVOSQL_DECAY": "1"})
    prefix = f"mcp_dk{int(time.time())}"
    ns = f"dktest_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)

    now = time.time()
    # 75 cold rows (old + low salience -> fade) + 25 hot (fresh + important).
    cold = set()
    for i in range(75):
        k = f"cold{i}"
        cold.add(k)
        _put(b, ns, k, {"fact": f"old record {i}", "salience": 0.3,
                        "created": now - 250 * DAY})
    for i in range(25):
        _put(b, ns, f"hot{i}", {"fact": f"fresh important record {i}",
                                "salience": 0.6, "created": now - 10 * DAY})

    res = D.decay_pass(b, ns)
    active = res["active"] + res["unarchived"]
    total = 100
    print(f"  decay pass: archived={res['archived']} active={active}/{total}")
    assert res["archived"] >= 70, f"expected >=70 archived, got {res['archived']}"
    assert active <= 0.30 * total, f"active {active} > 30% of {total}"

    # 100% restorable: every archived row can be brought back.
    arch = D.show_archived(b, ns)
    assert len(arch) == res["archived"], (len(arch), res["archived"])
    restored = sum(1 for a in arch if b.restore(ns, a["key"]))
    assert restored == len(arch), f"restorability {restored}/{len(arch)}"
    print(f"  ok  6-month sim: {res['archived']}% archived, active {active}% "
          f"(<=30%), restorability {restored}/{len(arch)} (100%)")
    return True


def test_search_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql",
                        autocommit=True, connect_timeout=3).close()
    except Exception as exc:
        print(f"  SKIP search integ (no server on :{PORT}: {exc})")
        return True

    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_ENTITY_EXTRACT": "0", "EVOSQL_DECAY": "1"})
    prefix = f"mcp_dk2{int(time.time())}"
    ns = f"dk2_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)
    now = time.time()
    _put(b, ns, "live", {"fact": "card integration live record",
                         "salience": 0.6, "created": now})
    _put(b, ns, "old", {"fact": "card integration old record",
                        "salience": 0.3, "created": now - 300 * DAY})
    D.decay_pass(b, ns)

    keys = lambda res: {r["key"] for r in res}
    default = keys(b.search(ns, "card integration", limit=10))
    witharch = keys(b.search(ns, "card integration", limit=10,
                             include_archived=True))
    assert "old" not in default and "live" in default, default
    assert "old" in witharch, witharch
    # a read refreshes access time (Ebbinghaus): touch store now has 'live'
    acc = D._access_map(b, ns)
    assert acc.get("live"), "search must refresh last_accessed"
    # restore brings 'old' back into default search
    assert b.restore(ns, "old")
    default2 = keys(b.search(ns, "card integration", limit=10))
    assert "old" in default2, f"restored row must be searchable: {default2}"
    print("  ok  search: archived skipped, include_archived shows, "
          "last_accessed refreshed, restore re-activates")
    return True


def main() -> int:
    test_score()
    test_eval_gate()
    test_search_integration()
    print("OK — Step 20 decay: score + 6-month archival (<=30% active, "
          "100% restorable) + search skip/include/restore")
    return 0


if __name__ == "__main__":
    sys.exit(main())
