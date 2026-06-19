"""
test_web — the web layer's routing + approval mapping, with no DB or model.

A FakeServer is injected as the shared MCPServer, the stdlib ThreadingHTTPServer
is started on an ephemeral port, and routes are hit over real HTTP via urllib.
The SSE chat path needs a live model and is verified manually / end-to-end, not
here; this pins the cheap, regressable glue: static serving, /api/pending, and
that /api/approve forwards the id as `item_id` (the param approve_send wants).
"""
from __future__ import annotations

import json
import os
import sys
import threading
import urllib.request
from http.server import ThreadingHTTPServer

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from evolution_agent import web


class FakeServer:
    def __init__(self):
        self.calls = []

    def _call_tool(self, name, args, identity=None):
        self.calls.append((name, args))
        if name == "list_pending_replies":
            return {"ok": True, "pending": [
                {"id": "ob_1", "status": "pending", "loop_key": "alice",
                 "body": "draft to alice"}]}
        if name == "approve_send":
            return {"ok": True, "status": "approved", "sent": False}
        return {"ok": True}


def _serve(fake):
    web._mcp = fake                      # inject; skip the lazy MCPServer build
    httpd = ThreadingHTTPServer(("127.0.0.1", 0), web.Handler)
    threading.Thread(target=httpd.serve_forever, daemon=True).start()
    return httpd, httpd.server_address[1]


def _get(port, path):
    with urllib.request.urlopen(f"http://127.0.0.1:{port}{path}", timeout=5) as r:
        return r.status, r.read().decode()


def _post(port, path, obj):
    data = json.dumps(obj).encode()
    req = urllib.request.Request(f"http://127.0.0.1:{port}{path}", data=data,
                                 headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=5) as r:
        return r.status, json.loads(r.read().decode())


def test_index_served():
    httpd, port = _serve(FakeServer())
    try:
        code, body = _get(port, "/")
        assert code == 200 and "<title>evolution-agent</title>" in body
    finally:
        httpd.shutdown()


def test_pending_endpoint():
    fake = FakeServer()
    httpd, port = _serve(fake)
    try:
        code, body = _get(port, "/api/pending")
        d = json.loads(body)
        assert code == 200 and d["pending"][0]["id"] == "ob_1"
        assert fake.calls[-1] == ("list_pending_replies", {})
    finally:
        httpd.shutdown()


def test_approve_forwards_item_id():
    fake = FakeServer()
    httpd, port = _serve(fake)
    try:
        # the UI posts {"id": ...}; the server must call approve_send with the
        # tool's actual param name, item_id — not id (the bug this guards).
        code, d = _post(port, "/api/approve", {"id": "ob_1"})
        assert code == 200 and d["status"] == "approved" and d["sent"] is False
        assert ("approve_send", {"item_id": "ob_1"}) in fake.calls
    finally:
        httpd.shutdown()


def _code(port, path, headers=None):
    import urllib.error
    req = urllib.request.Request(f"http://127.0.0.1:{port}{path}", headers=headers or {})
    try:
        with urllib.request.urlopen(req, timeout=5) as r:
            return r.status
    except urllib.error.HTTPError as e:
        return e.code


def test_api_requires_token_when_set():
    os.environ["EVOSQL_WEB_TOKEN"] = "sek"
    web._RATE.clear()
    httpd, port = _serve(FakeServer())
    try:
        assert _code(port, "/api/pending") == 401                 # no token
        assert _code(port, "/api/pending?token=wrong") == 401      # wrong token
        assert _code(port, "/api/pending?token=sek") == 200        # query token
        assert _code(port, "/api/pending",
                     {"Authorization": "Bearer sek"}) == 200       # header token
        assert _code(port, "/") == 200                             # UI shell stays open
    finally:
        httpd.shutdown()
        os.environ.pop("EVOSQL_WEB_TOKEN", None)
        web._RATE.clear()


def test_rate_limit_returns_429():
    os.environ.pop("EVOSQL_WEB_TOKEN", None)
    os.environ["EVOSQL_WEB_RATE_PER_MIN"] = "3"
    web._RATE.clear()
    httpd, port = _serve(FakeServer())
    try:
        codes = [_code(port, "/api/pending") for _ in range(5)]
        assert codes[:3] == [200, 200, 200]      # under the limit
        assert 429 in codes[3:]                  # then rate-limited
    finally:
        httpd.shutdown()
        os.environ.pop("EVOSQL_WEB_RATE_PER_MIN", None)
        web._RATE.clear()


def test_approve_requires_id():
    httpd, port = _serve(FakeServer())
    try:
        _post(port, "/api/approve", {})
        assert False, "expected 400"
    except urllib.error.HTTPError as e:
        assert e.code == 400
        assert "id" in json.loads(e.read().decode())["error"]
    finally:
        httpd.shutdown()


def test_unknown_route_404():
    httpd, port = _serve(FakeServer())
    try:
        try:
            _get(port, "/nope")
            assert False, "expected 404"
        except urllib.error.HTTPError as e:
            assert e.code == 404
    finally:
        httpd.shutdown()


def test_have_model_env(monkeypatch):
    monkeypatch.delenv("ANTHROPIC_API_KEY", raising=False)
    assert web._have_model() is False
