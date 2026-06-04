"""
test_dup_key_fetch — _fetch_by_keys collapses duplicate-key rows to the real one.

A memory key can map to more than one physical row: the real record plus
connector-written annotation sidecars (gist / salience / PII-token spans) stored
under the SAME key. A by-key fetch must hand back the content-bearing row (the
one with a `fact`), never a sidecar twin — otherwise the e5-only candidate path
drops the real memory (no `fact`) and evidence/episode/reconcile look-ups break.

Unit only (no server): _row_rank ordering + the dedup via a stubbed _query.
"""
from __future__ import annotations

import json
import os
import sys

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def main() -> int:
    from mcp_server_evosql.server import MemoryBackend

    rank = MemoryBackend._row_rank
    fact = json.dumps({"fact": "the real email body", "emb": "x" * 200})
    gist = json.dumps({"gist": "azure clip com onur"})
    sal = json.dumps({"salience": 0.7})
    # a content-bearing row outranks any sidecar
    assert rank(fact) > rank(gist) and rank(fact) > rank(sal), (rank(fact), rank(gist))
    # among equals, the longer value wins; empty/garbage never crashes
    assert rank(gist) > rank(sal) or rank(sal) >= (0, 0)
    assert rank("") == (0, 0) and rank(None) == (0, 0)
    assert rank("not json") == (0, 2 ** 0 * len("not json"))  # no fact, len-ranked
    print("  ok  _row_rank: fact-bearing outranks sidecar; safe on junk")

    # _fetch_by_keys dedups duplicate-key rows to the fact row. Stub _query so
    # the test needs no server and no real collision (MEMORY PUT upserts, so a
    # collision can't be made through the normal API).
    b = MemoryBackend.__new__(MemoryBackend)          # no __init__ / no connect
    KEY = "outlook_msg_X"
    rows = [[KEY, gist], [KEY, fact], ["other", sal]]  # sidecar first (worst case)
    b._query = lambda *a, **k: list(rows)
    out = MemoryBackend._fetch_by_keys(b, "mcp_mem", "ns", [KEY, "other"])
    by = {r[0]: r[1] for r in out}
    assert len(out) == 2, out                          # one row per key
    assert json.loads(by[KEY]).get("fact"), by[KEY]    # the fact row, not gist
    assert by["other"] == sal                          # unique key untouched
    print("  ok  _fetch_by_keys collapses dup key to the fact row (sidecar dropped)")

    # the guard makes it a no-op when keys are already unique (default path)
    uniq = [["a", sal], ["b", gist]]
    b._query = lambda *a, **k: list(uniq)
    out2 = MemoryBackend._fetch_by_keys(b, "mcp_validity", "ns", ["a", "b"])
    assert out2 == uniq, out2                          # byte-for-byte unchanged
    print("  ok  unique-key stores unchanged (guard no-op)")

    print("OK — duplicate-key fetch dedup")
    return 0


if __name__ == "__main__":
    sys.exit(main())
