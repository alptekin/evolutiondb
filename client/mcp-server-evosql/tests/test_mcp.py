"""
test_mcp.py — end-to-end test of mcp_server_evosql.

We don't import the server in-process; we spawn it the same way Claude
Desktop does (subprocess + stdio + JSON-RPC over newline-delimited
JSON), drive the protocol from the test, and assert on responses.
This catches stdio framing bugs that an in-process unit test would
miss.
"""
from __future__ import annotations

import json
import os
import subprocess
import sys
import time
import unittest
from typing import Any, Dict, Optional


HERE = os.path.dirname(os.path.abspath(__file__))
PKG  = os.path.dirname(HERE)


def _spawn(env_extra: Optional[Dict[str, str]] = None) -> subprocess.Popen:
    env = os.environ.copy()
    env["EVOSQL_HOST"]      = env.get("EVOSQL_HOST",      "127.0.0.1")
    env["EVOSQL_PORT"]      = env.get("EVOSQL_PORT",      "9967")
    env["EVOSQL_USER"]      = env.get("EVOSQL_USER",      "admin")
    env["EVOSQL_PASSWORD"]  = env.get("EVOSQL_PASSWORD",  "admin")
    env["MCP_USER_ID"]      = "test_user_" + str(int(time.time()))
    env["MCP_STORE_PREFIX"] = "mcp_test"
    if env_extra:
        env.update(env_extra)
    return subprocess.Popen(
        [sys.executable, "-m", "mcp_server_evosql"],
        cwd=PKG,
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        env=env,
        text=True,
    )


def _send(p: subprocess.Popen, msg: Dict[str, Any]) -> Optional[Dict[str, Any]]:
    p.stdin.write(json.dumps(msg) + "\n")
    p.stdin.flush()
    if msg.get("id") is None:
        return None
    line = p.stdout.readline()
    if not line:
        err = p.stderr.read()
        raise RuntimeError(f"server closed stdin without responding. stderr:\n{err}")
    return json.loads(line.strip())


class MCPServerTests(unittest.TestCase):
    def setUp(self) -> None:
        self.p = _spawn()
        # Per-test user_id so runs don't collide.
        # Pull what the server actually loaded (it stamps a unique one).
        # Initialize handshake.
        resp = _send(self.p, {
            "jsonrpc": "2.0", "id": 1, "method": "initialize",
            "params": {"protocolVersion": "2024-11-05",
                          "capabilities": {}},
        })
        self.assertEqual(resp["result"]["serverInfo"]["name"],
                          "evolutiondb-memory")

        # Notification
        _send(self.p, {"jsonrpc": "2.0",
                          "method": "notifications/initialized"})

    def tearDown(self) -> None:
        try:
            self.p.stdin.close()
        except Exception:
            pass
        try:
            self.p.wait(timeout=5)
        except subprocess.TimeoutExpired:
            self.p.kill()

    # ------------------------------------------------------------------ #
    def _call(self, name: str, args: Dict[str, Any]) -> Dict[str, Any]:
        resp = _send(self.p, {
            "jsonrpc": "2.0", "id": int(time.time() * 1000),
            "method":  "tools/call",
            "params":  {"name": name, "arguments": args},
        })
        self.assertIn("result", resp,
                       f"server returned an error: {resp.get('error')}")
        body = resp["result"]
        text = body["content"][0]["text"]
        return json.loads(text)

    # ---- tests -------------------------------------------------------- #
    def test_initialize_lists_tools(self) -> None:
        resp = _send(self.p, {
            "jsonrpc": "2.0", "id": 2, "method": "tools/list",
        })
        names = [t["name"] for t in resp["result"]["tools"]]
        for required in ("save_memory", "search_memory",
                            "recent_memories", "forget", "list_tags"):
            self.assertIn(required, names)

    def test_save_then_search_round_trip(self) -> None:
        save = self._call("save_memory", {
            "fact": "The user prefers single-shot espresso, no sugar.",
            "tags": ["preference", "coffee"],
        })
        self.assertTrue(save["ok"])
        self.assertTrue(save["key"].startswith("mem_"))

        search = self._call("search_memory", {"query": "espresso"})
        self.assertTrue(search["ok"])
        self.assertTrue(any("espresso" in r["fact"].lower()
                              for r in search["results"]))

    def test_search_with_tag_filter(self) -> None:
        self._call("save_memory", {
            "fact": "Lives in Edirne, Türkiye.",
            "tags": ["location"],
        })
        self._call("save_memory", {
            "fact": "Drinks 3 espressos a day.",
            "tags": ["coffee"],
        })

        tagged = self._call("search_memory", {
            "query": "lives", "tag": "location",
        })
        self.assertTrue(any("edirne" in r["fact"].lower()
                              for r in tagged["results"]))

        # Tag mismatch returns empty.
        empty = self._call("search_memory", {
            "query": "lives", "tag": "coffee",
        })
        self.assertEqual([r for r in empty["results"]
                            if "edirne" in r["fact"].lower()], [])

    def test_recent_memories_orders_by_creation(self) -> None:
        self._call("save_memory", {"fact": "first thing"})
        time.sleep(0.05)
        self._call("save_memory", {"fact": "second thing"})
        recent = self._call("recent_memories", {"limit": 5})
        self.assertTrue(recent["ok"])
        # First returned is the most recently saved.
        self.assertIn("second", recent["results"][0]["fact"])

    def test_forget_removes_a_fact(self) -> None:
        s = self._call("save_memory", {"fact": "doomed"})
        key = s["key"]

        f = self._call("forget", {"key": key})
        self.assertTrue(f["ok"])

        # Search no longer finds it.
        out = self._call("search_memory", {"query": "doomed"})
        self.assertEqual([r for r in out["results"]
                            if r.get("key") == key], [])

    def test_list_tags_aggregates(self) -> None:
        self._call("save_memory", {"fact": "a", "tags": ["x", "y"]})
        self._call("save_memory", {"fact": "b", "tags": ["x"]})
        self._call("save_memory", {"fact": "c", "tags": ["z"]})

        tags = self._call("list_tags", {})
        d = {t["tag"]: t["count"] for t in tags["tags"]}
        self.assertEqual(d.get("x"), 2)
        self.assertEqual(d.get("y"), 1)
        self.assertEqual(d.get("z"), 1)

    def test_user_id_is_server_pinned(self) -> None:
        """Even if the LLM somehow snuck a user_id arg, server uses
        MCP_USER_ID from env. We don't expose user_id in the tool
        schema — but assert the server's behaviour stays correct
        when extra args land in `arguments`."""
        s = self._call("save_memory", {
            "fact":    "isolation marker",
            "tags":    ["isolation"],
            "user_id": "ATTACKER",       # ignored by the server
        })
        self.assertTrue(s["ok"])
        self.assertNotEqual(s["user_id"], "ATTACKER")

        out = self._call("search_memory", {"query": "isolation marker"})
        self.assertTrue(any("isolation marker" in r["fact"]
                              for r in out["results"]))

    def test_unknown_tool_is_an_error(self) -> None:
        try:
            r = self._call("does_not_exist", {})
        except AssertionError:
            return    # tool/call returned isError → fine

        self.assertIn("error", r)


if __name__ == "__main__":
    unittest.main(verbosity=2)
