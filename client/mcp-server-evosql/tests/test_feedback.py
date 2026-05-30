"""
test_feedback — Adım 11 implicit-feedback wiring, end-to-end through the
MCP server over JSON-RPC stdio (no embedding provider needed; substring
search returns results and the feedback log is captured regardless).

Verifies:
  - search_memory returns a `query_id`
  - feedback(query_id, used_keys) records the used subset
  - used_keys not in the original result set are ignored (data-quality gate)
  - feedback on an unknown query_id errors cleanly
"""
from __future__ import annotations

import json
import os
import subprocess
import sys
import time
from typing import Any, Dict, Optional

PORT = os.environ.get("EVOSQL_PG_PORT", "5502")


def _spawn() -> subprocess.Popen:
    env = dict(os.environ)
    env.update({
        "EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": PORT,
        "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
        "EVOSQL_DATABASE": "evosql",
        "EVOSQL_EMBEDDING_PROVIDER": "none",
        "EVOSQL_EMBEDDING_MODEL_2": "",
        "MCP_STORE_PREFIX": f"mcp_fb{int(time.time())}",
        "MCP_USER_ID": f"fbtest_{int(time.time())}",
    })
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    return subprocess.Popen(
        [sys.executable, "-m", "mcp_server_evosql"],
        cwd=root, env=env, text=True,
        stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)


def _send(p: subprocess.Popen, msg: Dict[str, Any]) -> Optional[Dict[str, Any]]:
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

        # feedback tool advertised?
        tl = _send(p, {"jsonrpc": "2.0", "id": 2, "method": "tools/list", "params": {}})
        names = {t["name"] for t in tl["result"]["tools"]}
        assert "feedback" in names, f"feedback tool missing: {names}"

        # seed memories sharing a keyword for substring search
        keys = []
        for fact in ["the alpha widget ships monday",
                     "the beta widget ships friday",
                     "unrelated note about coffee"]:
            r = _call(p, 10, "save_memory", {"fact": fact})
            assert r.get("ok"), r
            keys.append(r["key"])

        # search -> must carry query_id + results
        s = _call(p, 20, "search_memory", {"query": "widget", "limit": 5})
        assert s.get("ok"), s
        qid = s.get("query_id")
        assert qid, f"search_memory missing query_id: {s}"
        rkeys = [x.get("key") for x in s.get("results", [])]
        assert rkeys, f"no results: {s}"

        # feedback: report one real key used + one bogus key (must be ignored)
        used_real = rkeys[0]
        fb = _call(p, 30, "feedback",
                   {"query_id": qid,
                    "used_keys": [used_real, "mem_bogus_999"],
                    "rating": 5})
        assert fb.get("ok"), fb
        assert fb["recorded_used"] == 1, f"expected 1 used, got {fb}"
        assert "mem_bogus_999" in fb["ignored_not_returned"], fb

        # unknown query_id errors cleanly
        bad = _call(p, 40, "feedback", {"query_id": "deadbeef", "used_keys": []})
        assert bad.get("error"), f"unknown query_id should error: {bad}"

        print("OK — Adım 11 feedback: query_id + feedback recording + "
              "used⊆returned validation + unknown-id error")
        return 0
    finally:
        try:
            p.stdin.close(); p.wait(timeout=5)
        except Exception:
            p.kill()


if __name__ == "__main__":
    sys.exit(main())
