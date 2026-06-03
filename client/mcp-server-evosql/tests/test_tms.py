"""
test_tms — truth-maintenance: Type-II dependent retraction (roadmap step 39).

Unit: build_support_index reads derived_from; retract_closure undermines a
derived row only when ALL its sources are retracted (conservative) and
propagates transitively. Integration (skipped without a server): retracting the
sources of a semantic generalization, with EVOSQL_TMS on, marks it 'unsupported'
(and the validity gate then hides it); with TMS off it is a no-op.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.tms import build_support_index, retract_closure

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    rows = [("sem1", {"derived_from": ["s1", "s2"]}),
            ("sem2", {"derived_from": ["sem1"]}),       # depends on a derived row
            ("plain", {"fact": "no provenance"}),
            ("self", {"derived_from": ["self"]})]       # self-only -> never undermined
    idx = build_support_index(rows)
    assert idx == {"sem1": ["s1", "s2"], "sem2": ["sem1"], "self": ["self"]}, idx

    # ALL sources gone -> undermined; transitively undermines sem2 (sole source
    # sem1 just became unsupported)
    closure = retract_closure(idx, ["s1", "s2"])
    assert closure == {"sem1", "sem2"}, closure
    # only SOME sources gone -> conservative require_all keeps it supported
    assert retract_closure(idx, ["s1"]) == set(), retract_closure(idx, ["s1"])
    # aggressive mode: any source gone undermines
    assert retract_closure(idx, ["s1"], require_all=False) == {"sem1", "sem2"}
    # a row that only "depends on itself" is never undermined by its own retraction
    assert "self" not in retract_closure(idx, ["self"])
    print("  ok  closure: require_all conservative + transitive + self-safe")


def _backend(prefix):
    from mcp_server_evosql.server import MemoryBackend
    return MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)


def test_integration() -> bool:
    try:
        import psycopg
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    os.environ.pop("EVOSQL_TMS", None)
    from mcp_server_evosql.tms import reexamine, job_tms
    ns = f"tms_{int(time.time())}"
    b = _backend(f"mcp_tms{int(time.time())}")

    s1 = b.save(ns, "the standup is at 9am")
    s2 = b.save(ns, "the standup is on mondays")
    sk = b.save_semantic(ns, "the team meets monday mornings", derived_from=[s1, s2])

    # OFF by default: a no-op even though nothing is retracted yet
    assert reexamine(b, ns) == []
    print("  ok  TMS off -> no-op")

    os.environ["EVOSQL_TMS"] = "1"
    # only one source retracted -> conservative, semantic still supported
    b._set_validity(ns, s1, status="retracted")
    assert reexamine(b, ns) == []
    # both sources retracted -> the semantic generalization loses all support
    b._set_validity(ns, s2, status="retracted")
    affected = reexamine(b, ns)
    assert affected == [sk], affected
    vs = b._validity_map(ns, [sk]).get(sk)
    assert vs and vs["status"] == "unsupported", vs
    # evidence goes in unsupported_by, NOT the superseded_by chain that
    # reconsolidate's head-walk follows (must not point at a source key)
    assert set(vs.get("unsupported_by") or []) == {s1, s2}, vs
    assert not vs.get("superseded_by"), vs
    print("  ok  all sources retracted -> derived fact marked unsupported")

    # the validity gate now hides the unsupported semantic row
    kept = b._apply_validity_gate(ns, [{"key": sk}, {"key": "other"}])
    assert [x["key"] for x in kept] == ["other"], kept
    print("  ok  validity gate hides the now-unsupported derived fact")

    # a judge can CONFIRM a row that still stands on independent grounds
    b._set_validity(ns, sk, status="active")          # reset
    aff2 = reexamine(b, ns, judge=lambda rec, gone: "CONFIRM")
    assert aff2 == [], aff2
    assert b._validity_map(ns, [sk]).get(sk, {}).get("status") == "active"
    print("  ok  judge CONFIRM keeps a row despite lost support")

    # job wrapper returns the count; turn the flag off -> no-op
    b._set_validity(ns, sk, status="active")
    assert job_tms(b, ns) == 1
    os.environ.pop("EVOSQL_TMS", None)
    b._set_validity(ns, sk, status="active")
    assert job_tms(b, ns) == 0
    print("  ok  job_tms counts affected; off by default")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 39 TMS dependent retraction")
    return 0


if __name__ == "__main__":
    sys.exit(main())
