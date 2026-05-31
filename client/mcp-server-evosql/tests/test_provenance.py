"""
test_provenance — Adım 13 provenance schema, end-to-end via MCP JSON-RPC.

Verifies:
  - save_memory(derived_from=[...]) marks the row synthesized and stores the
    source keys, validated foreign-key style (non-existent keys dropped)
  - regenerable is true only when EVERY requested source exists
  - search_memory returns an evidence_chain resolving each source key to its
    fact (the eval-gate round-trip: sources -> summary -> trace back)
"""
from __future__ import annotations

import json
import os
import subprocess
import sys
import time
from typing import Any, Dict, Optional

PORT = os.environ.get("EVOSQL_PG_PORT", "5504")


def _spawn() -> subprocess.Popen:
    env = dict(os.environ)
    env.update({
        "EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": PORT,
        "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
        "EVOSQL_DATABASE": "evosql", "EVOSQL_EMBEDDING_PROVIDER": "none",
        "EVOSQL_EMBEDDING_MODEL_2": "",
        "MCP_STORE_PREFIX": f"mcp_pv{int(time.time())}",
        "MCP_USER_ID": f"pvtest_{int(time.time())}",
    })
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    return subprocess.Popen([sys.executable, "-m", "mcp_server_evosql"],
                            cwd=root, env=env, text=True,
                            stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                            stderr=subprocess.PIPE)


def _send(p, msg) -> Optional[Dict[str, Any]]:
    p.stdin.write(json.dumps(msg) + "\n"); p.stdin.flush()
    if msg.get("id") is None:
        return None
    line = p.stdout.readline()
    if not line:
        raise RuntimeError("server closed:\n" + p.stderr.read())
    return json.loads(line)


def _call(p, _id, name, args):
    r = _send(p, {"jsonrpc": "2.0", "id": _id, "method": "tools/call",
                  "params": {"name": name, "arguments": args}})
    return json.loads(r["result"]["content"][0]["text"])


def main() -> int:
    p = _spawn()
    try:
        _send(p, {"jsonrpc": "2.0", "id": 1, "method": "initialize", "params": {}})
        _send(p, {"jsonrpc": "2.0", "method": "notifications/initialized"})

        # 3 source memories
        src = []
        for f in ["meeting on monday about pricing",
                  "pricing model needs a discount tier",
                  "competitor undercut us on enterprise pricing"]:
            r = _call(p, 10, "save_memory", {"fact": f})
            assert r.get("ok"), r
            src.append(r["key"])

        # synthesized summary: one valid-source set + one bogus key
        syn = _call(p, 20, "save_memory", {
            "fact": "SUMMARY widgetco pricing strategy needs a discount tier",
            "tags": ["summary"],
            "derived_from": src + ["mem_does_not_exist"]})
        assert syn.get("ok"), syn
        syn_key = syn["key"]

        # find the synthesized row and inspect provenance + evidence_chain
        s = _call(p, 30, "search_memory", {"query": "widgetco pricing strategy", "limit": 5})
        row = next((x for x in s["results"] if x.get("key") == syn_key), None)
        assert row is not None, f"synthesized row not found: {[x['key'] for x in s['results']]}"
        assert row.get("synthesized") is True, row
        # bogus source dropped (FK validation); 3 real keys kept
        assert sorted(row.get("derived_from") or []) == sorted(src), row.get("derived_from")
        # not fully regenerable: one requested source was missing
        assert row.get("regenerable") is False, row.get("regenerable")
        assert row.get("synthesis_version") == 1, row.get("synthesis_version")
        chain = {c["key"]: c for c in (row.get("evidence_chain") or [])}
        assert set(chain) == set(src), f"evidence_chain keys: {list(chain)}"
        assert all(c["present"] and c["fact"] for c in chain.values()), chain

        # all-valid sources -> regenerable True
        syn2 = _call(p, 40, "save_memory", {
            "fact": "SUMMARY2 widgetco pricing recap", "derived_from": src})
        s2 = _call(p, 50, "search_memory", {"query": "widgetco pricing recap", "limit": 5})
        r2 = next(x for x in s2["results"] if x.get("key") == syn2["key"])
        assert r2.get("regenerable") is True, r2.get("regenerable")

        print("OK — Adım 13 provenance: derived_from FK-validation + "
              "synthesized/regenerable flags + search evidence_chain round-trip")
        return 0
    finally:
        try:
            p.stdin.close(); p.wait(timeout=5)
        except Exception:
            p.kill()


if __name__ == "__main__":
    sys.exit(main())
