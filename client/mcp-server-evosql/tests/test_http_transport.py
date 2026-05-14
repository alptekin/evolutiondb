"""Unit tests for mcp_server_evosql.http_transport.

The HTTP server is exercised end-to-end against a real loopback
listener — no mocks. Uses urllib so the test stays in stdlib.
"""
from __future__ import annotations

import json
import os
import socket
import sys
import threading
import time
import unittest
import urllib.error
import urllib.request
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))


def _free_port() -> int:
    s = socket.socket()
    s.bind(("127.0.0.1", 0))
    port = s.getsockname()[1]
    s.close()
    return port


def _post(url, body, headers=None, timeout=5):
    data = json.dumps(body).encode("utf-8")
    h = {"Content-Type": "application/json"}
    if headers:
        h.update(headers)
    req = urllib.request.Request(url, data=data, method="POST", headers=h)
    try:
        with urllib.request.urlopen(req, timeout=timeout) as resp:
            return resp.status, resp.read().decode(), dict(resp.headers)
    except urllib.error.HTTPError as e:
        return e.code, e.read().decode(), dict(e.headers)


class _FakeMCPServer:
    """Minimal stand-in for the real MCPServer. Avoids pulling in
    psycopg / network dependencies for the transport tests."""

    def handle(self, msg):
        if msg.get("id") is None:
            return None
        method = msg.get("method")
        if method == "initialize":
            return {"jsonrpc": "2.0", "id": msg["id"],
                    "result": {"protocolVersion": "2024-11-05",
                                "capabilities": {},
                                "serverInfo": {"name": "fake",
                                                 "version": "0"}}}
        if method == "ping":
            return {"jsonrpc": "2.0", "id": msg["id"], "result": {}}
        return {"jsonrpc": "2.0", "id": msg["id"],
                "error": {"code": -32601, "message": "method not found"}}


class HttpTransportTests(unittest.TestCase):
    def setUp(self):
        # Save and clear auth env so it doesn't bleed between tests.
        self._saved_token = os.environ.pop("EVOSQL_MCP_AUTH_TOKEN", None)
        self._saved_origins = os.environ.pop(
            "EVOSQL_MCP_ALLOWED_ORIGINS", None)

    def tearDown(self):
        if self._saved_token is not None:
            os.environ["EVOSQL_MCP_AUTH_TOKEN"] = self._saved_token
        if self._saved_origins is not None:
            os.environ["EVOSQL_MCP_ALLOWED_ORIGINS"] = self._saved_origins

    def _spawn(self, *, token=None, public_facing=False) -> str:
        if token:
            os.environ["EVOSQL_MCP_AUTH_TOKEN"] = token
        else:
            os.environ.pop("EVOSQL_MCP_AUTH_TOKEN", None)

        from mcp_server_evosql.http_transport import (
            _MCPThreadingHTTPServer, _Handler, _allowed_origins,
        )
        port = _free_port()
        srv = _MCPThreadingHTTPServer(
            ("127.0.0.1", port), _Handler,
            mcp_server=_FakeMCPServer(),
            path="/mcp",
            public_facing=public_facing,
            allowed_origins=_allowed_origins(),
        )
        t = threading.Thread(target=srv.serve_forever, daemon=True)
        t.start()
        self.addCleanup(srv.shutdown)
        self.addCleanup(srv.server_close)
        time.sleep(0.05)
        return f"http://127.0.0.1:{port}/mcp"

    # ---- basic round-trip ----
    def test_initialize_sets_session_id(self):
        url = self._spawn()
        status, body, headers = _post(url, {
            "jsonrpc": "2.0", "id": 1, "method": "initialize",
            "params": {"protocolVersion": "2024-11-05"}})
        self.assertEqual(status, 200)
        self.assertIn("Mcp-Session-Id", headers)
        payload = json.loads(body)
        self.assertEqual(payload["id"], 1)
        self.assertEqual(payload["result"]["protocolVersion"],
                         "2024-11-05")

    def test_ping_round_trip(self):
        url = self._spawn()
        status, body, _ = _post(url, {
            "jsonrpc": "2.0", "id": 7, "method": "ping"})
        self.assertEqual(status, 200)
        self.assertEqual(json.loads(body), {
            "jsonrpc": "2.0", "id": 7, "result": {}})

    # ---- notifications ----
    def test_notification_returns_202(self):
        url = self._spawn()
        status, body, _ = _post(url, {
            "jsonrpc": "2.0", "method": "ping"})
        self.assertEqual(status, 202)
        self.assertEqual(body, "")

    # ---- auth ----
    def test_token_blocks_missing_auth(self):
        url = self._spawn(token="secret-xyz")
        status, _, _ = _post(url, {
            "jsonrpc": "2.0", "id": 1, "method": "ping"})
        self.assertEqual(status, 401)

    def test_token_accepts_correct_bearer(self):
        url = self._spawn(token="secret-xyz")
        status, _, _ = _post(url, {
            "jsonrpc": "2.0", "id": 1, "method": "ping"},
            headers={"Authorization": "Bearer secret-xyz"})
        self.assertEqual(status, 200)

    def test_token_rejects_wrong_bearer(self):
        url = self._spawn(token="secret-xyz")
        status, _, _ = _post(url, {
            "jsonrpc": "2.0", "id": 1, "method": "ping"},
            headers={"Authorization": "Bearer wrong"})
        self.assertEqual(status, 401)

    # ---- SSE ----
    def test_sse_response(self):
        url = self._spawn()
        status, body, headers = _post(url, {
            "jsonrpc": "2.0", "id": 9, "method": "ping"},
            headers={"Accept": "text/event-stream"})
        self.assertEqual(status, 200)
        self.assertIn("text/event-stream", headers.get("Content-Type", ""))
        self.assertIn("event: message", body)
        self.assertIn('"id": 9', body)

    # ---- batch ----
    def test_batch_request(self):
        url = self._spawn()
        status, body, _ = _post(url, [
            {"jsonrpc": "2.0", "id": 1, "method": "ping"},
            {"jsonrpc": "2.0", "id": 2, "method": "ping"},
        ])
        self.assertEqual(status, 200)
        payload = json.loads(body)
        self.assertEqual(len(payload), 2)
        self.assertEqual({r["id"] for r in payload}, {1, 2})


if __name__ == "__main__":
    unittest.main()
