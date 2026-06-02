"""
test_semanticize — episodic -> semantic abstraction job (roadmap step 16).

Clusters embedded rows and mints one generalization per cluster via an injected
LLM stub, with derived_from provenance; idempotent on re-run; a no-op without an
LLM. Skipped without a server on EVOSQL_PG_PORT (default 5520).
"""
from __future__ import annotations

import json
import os
import sys
import time

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def main() -> int:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend, _e
        from mcp_server_evosql.embeddings import encode_vec
        from mcp_server_evosql.semanticize import semanticize
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP (no server on :{PORT}: {exc})")
        return 0
    os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "none"
    os.environ["EVOSQL_EMBEDDING_MODEL_2"] = ""
    os.environ.pop("EVOSQL_SEMANTIC_LLM", None)
    ns = f"smz_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_smz{int(time.time())}")

    def put(k, fact, vec):
        rec = {"fact": fact, "created": time.time(), "emb": encode_vec(vec)}
        b._exec(f"MEMORY PUT INTO {b.memory} VALUES "
                f"('{_e(ns)}','{_e(k)}','{_e(json.dumps(rec))}')")

    # two clearly-separated clusters (orthogonal directions)
    for i in range(5):
        put(f"a{i}", f"alpha note {i}", [1.0, 0.0, 0.0, 0.02 * i, 0, 0, 0, 0])
    for i in range(5):
        put(f"b{i}", f"beta note {i}", [0.0, 1.0, 0.0, 0.02 * i, 0, 0, 0, 0])

    calls = []
    def stub(facts):
        calls.append(list(facts))
        return f"a general fact distilled across {len(facts)} notes"

    written = semanticize(b, ns, llm_fn=stub, min_cluster=4)
    assert written == 2, f"expected 2 generalizations, got {written}"

    # each semantic row's provenance is exactly one source cluster
    dfs = []
    for v in b._query(f"SELECT mem_value FROM __mem_{b.semantic_store} "
                      f"WHERE mem_namespace = '{_e(ns)}'") or []:
        dfs.append(frozenset(json.loads(v[0]).get("derived_from") or []))
    want = {frozenset({f"a{i}" for i in range(5)}),
            frozenset({f"b{i}" for i in range(5)})}
    assert set(dfs) == want, f"clusters not faithfully traced: {dfs}"
    print(f"  ok  2 clusters -> 2 semantic generalizations with exact provenance")

    # idempotent: a re-run covers the same clusters, writes nothing
    assert semanticize(b, ns, llm_fn=stub, min_cluster=4) == 0, "not idempotent"
    print("  ok  idempotent on re-run")

    # opt-in: no LLM (env unset, no injected fn) -> no-op
    assert semanticize(b, ns, llm_fn=None, min_cluster=4) == 0
    print("  ok  no LLM configured -> no abstraction (opt-in)")

    print("OK — step 16 episodic->semantic abstraction job")
    return 0


if __name__ == "__main__":
    sys.exit(main())
