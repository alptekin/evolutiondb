"""
test_reconcile — write-time contradiction detection + belief revision (step 20).

Unit: find_conflicts flags an existing edge with the same (subject, predicate)
but a different object.
Integration (skipped without a server): a new fact that conflicts with an
existing graph edge marks the superseded row stale (verdict UPDATE); opt-in
no-op without an adjudicator; default off.
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql.reconcile import find_conflicts

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_find_conflicts():
    cache = {
        "e_alp|related_to|e_wechip": {"subject_id": "e_alp",
            "predicate": "related_to", "object_id": "e_wechip",
            "source_rows": ["old1"]},
        "e_alp|worked_on|e_proj": {"subject_id": "e_alp",
            "predicate": "worked_on", "object_id": "e_proj",
            "source_rows": ["x"]},
    }
    # same (subject, predicate), different object -> conflict
    c = find_conflicts(cache, [("e_alp", "related_to", "e_emlak")])
    assert len(c) == 1 and c[0]["old_object"] == "e_wechip" \
        and c[0]["old_source_rows"] == ["old1"], c
    # same object -> no conflict
    assert find_conflicts(cache, [("e_alp", "related_to", "e_wechip")]) == []
    # different predicate -> no conflict
    assert find_conflicts(cache, [("e_alp", "manages", "e_emlak")]) == []
    print("  ok  find_conflicts: same (subj,pred) different object only")


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
    os.environ.pop("EVOSQL_RECONCILE_LLM", None)
    ns = f"rec_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_rec{int(time.time())}")
    assert b.reconcile_enabled is False, "reconcile must default off"

    alp = {"entity_id": "e_alp", "start": 0, "end": 8, "type": "person"}
    wechip = {"entity_id": "e_wechip", "start": 13, "end": 19, "type": "org"}
    emlak = {"entity_id": "e_emlak", "start": 13, "end": 18, "type": "org"}

    # existing fact -> graph edge (e_alp, related_to, e_wechip), source row old1
    g = b._graph(ns)
    g.add_edges_from_row("old1", [alp, wechip], "Alptekin and Wechip", time.time())
    g.flush()

    # new conflicting fact, with an injected UPDATE adjudicator
    n = b.reconcile_on_save(ns, "new1", "Alptekin and Emlak",
                            [alp, emlak], adjudicate=lambda new, old: "UPDATE")
    assert n == 1, f"expected 1 row marked stale, got {n}"
    ov = b._validity_map(ns, ["old1"]).get("old1")
    assert ov and ov["status"] == "stale" and ov["superseded_by"] == ["new1"], ov
    nv = b._validity_map(ns, ["new1"]).get("new1")
    assert nv and nv["supersedes"] == ["old1"], nv
    print("  ok  conflicting save marks the old row stale + links supersession")

    # NOOP verdict leaves it alone
    g.add_edges_from_row("old2", [alp, wechip], "Alptekin and Wechip", time.time())
    g.flush()
    n2 = b.reconcile_on_save(ns, "new2", "Alptekin and Emlak",
                             [alp, emlak], adjudicate=lambda new, old: "NOOP")
    # old2 still active (no validity record written)
    assert "old2" not in b._validity_map(ns, ["old2"]) or \
        b._validity_map(ns, ["old2"]).get("old2", {}).get("status") != "stale"
    print(f"  ok  NOOP verdict leaves the old row active (marked {n2})")

    # opt-in: no adjudicator + no env -> no revision
    assert b.reconcile_on_save(ns, "new3", "Alptekin and Emlak",
                               [alp, emlak], adjudicate=None) == 0
    print("  ok  no adjudicator -> no revision (opt-in)")
    return True


def main() -> int:
    test_find_conflicts()
    test_integration()
    print("OK — step 20 write-time contradiction reconciliation")
    return 0


if __name__ == "__main__":
    sys.exit(main())
