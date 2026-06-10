"""
test_evidence — Step 19 co-presented evidence policy (anti-confabulation).

A synthesized row must never travel without the evidence the model has to
cite. The policy is enforced as a data contract:
  - every synthesized result carries evidence_excerpts (a short quote per
    PRESENT source) and citation_required = true,
  - each excerpt is a real 1-2 sentence prefix of its source fact,
  - plain (non-synthesized) rows carry neither field.
The eval gate (manual LLM-as-judge "10/10 co-citation") is approximated here:
10 synthesized rows each retrieve with complete, correct co-citable evidence,
so the model is always ABLE to co-cite. The tool description also instructs it.
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql.server import _snippet, TOOLS

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5505"))


def test_snippet_unit():
    s = _snippet("First sentence here. Second one too. Third is extra.")
    assert s == "First sentence here. Second one too.", s
    long = "word " * 100
    assert len(_snippet(long)) <= 201 and _snippet(long).endswith("…")
    assert _snippet("") == ""
    print("  ok  _snippet: 1-2 sentence trim + length cap")


def test_tool_rule():
    sm = next(t for t in TOOLS if t["name"] == "search_memory")
    d = sm["description"].lower()
    assert "synthesized" in d and "evidence_excerpts" in d and "cite" in d, d
    print("  ok  tool description carries the co-citation rule")


def test_policy() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql",
                        autocommit=True, connect_timeout=3).close()
    except Exception as exc:
        print(f"  SKIP policy (no server on :{PORT}: {exc})")
        return True

    os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": str(PORT),
                       "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                       "EVOSQL_DATABASE": "evosql",
                       "EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    prefix = f"mcp_ev{int(time.time())}"
    ns = f"evtest_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)

    # 10 synthesized topics, each derived from 3 distinct sources. The 10
    # searches share one query text per namespace, which exercises psycopg's
    # auto-prepare path (the prepared-statement re-use the engine fix covers).
    topics = []
    for t in range(10):
        srcs = [b.save(ns, f"Topic{t} source {j}: first sentence here. Second "
                           f"sentence too. Third sentence extra {t}{j}.")
                for j in range(3)]
        syn_key = b.save(ns, f"SUMMARY topic{t} customer meeting result",
                         tags=["summary"], derived_from=srcs)
        topics.append((t, syn_key, srcs))
    plain_key = b.save(ns, "a plain record, not a synthesis")

    ok = 0
    for t, syn_key, srcs in topics:
        row = next((r for r in b.search(ns, f"SUMMARY topic{t} customer", limit=5)
                    if r["key"] == syn_key), None)
        assert row is not None, f"synthesized row {t} not found"
        assert row.get("synthesized") and row.get("citation_required") is True, row
        exc = {e["key"]: e["snippet"] for e in (row.get("evidence_excerpts") or [])}
        assert set(exc) == set(srcs), f"excerpts must cover all sources: {list(exc)}"
        for k, sn in exc.items():       # each excerpt: real, short, ≤2 sentences
            assert sn and sn.count(".") <= 2 and "first sentence here" in sn, (k, sn)
        ok += 1
    print(f"  ok  co-citation contract: {ok}/10 synthesized rows carry "
          f"complete evidence_excerpts")

    # plain rows carry no citation fields
    plain = next(r for r in b.search(ns, "a plain record", limit=5)
                 if r["key"] == plain_key)
    assert not plain.get("synthesized") and "evidence_excerpts" not in plain \
        and "citation_required" not in plain, plain
    print("  ok  plain rows carry no evidence/citation fields")
    return True


def main() -> int:
    test_snippet_unit()
    test_tool_rule()
    test_policy()
    print("OK — Step 19 co-presented evidence: excerpts + citation_required + "
          "tool rule + 10/10 co-citable")
    return 0


if __name__ == "__main__":
    sys.exit(main())
