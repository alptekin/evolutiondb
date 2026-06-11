"""
evolution-agent web — a minimal browser chat over the standalone agent loop.

Pure stdlib (http.server + SSE), no web framework, so the package gains no new
runtime dependency. Serves a single-page chat that streams the agent's tool
timeline live and surfaces the ADR-004 approval gate: drafts the agent queues
show up in a "pending approvals" panel with an Approve button — and approving
calls `approve_send`, which stays dry-run unless the operator opted in.

    evolution-agent-web                 # http://127.0.0.1:8800
    EVOSQL_EMBEDDED=1 evolution-agent-web

Connects to EvolutionDB the same way the MCP server does (EVOSQL_HOST/PORT/...
or EVOSQL_EMBEDDED). Needs the `anthropic` SDK + ANTHROPIC_API_KEY for the live
model; without them the chat endpoint returns a clear, streamed error.
"""
from __future__ import annotations

import json
import os
import sys
import threading
import urllib.parse
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

from .loop import AgentLoop

_STATIC = Path(__file__).resolve().parent.parent / "web" / "index.html"
_server_lock = threading.Lock()
_mcp = None            # shared MCPServer, built lazily on first request


def _mcp_server():
    global _mcp
    with _server_lock:
        if _mcp is None:
            from mcp_server_evosql.server import MCPServer
            _mcp = MCPServer()
        return _mcp


def _have_model() -> bool:
    if not os.environ.get("ANTHROPIC_API_KEY"):
        return False
    try:
        import anthropic  # noqa: F401
        return True
    except Exception:
        return False


class Handler(BaseHTTPRequestHandler):
    server_version = "evolution-agent-web"

    def log_message(self, *a):  # quiet by default
        pass

    # -- helpers ----------------------------------------------------------
    def _json(self, code: int, obj) -> None:
        body = json.dumps(obj, ensure_ascii=False, default=str).encode()
        self.send_response(code)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def _sse_open(self) -> None:
        # The stream has no Content-Length, so the connection MUST close at the
        # end — otherwise an HTTP/1.1 keep-alive client (curl, fetch) blocks
        # waiting for more bytes after the final event.
        self.close_connection = True
        self.send_response(200)
        self.send_header("Content-Type", "text/event-stream; charset=utf-8")
        self.send_header("Cache-Control", "no-cache")
        self.send_header("Connection", "close")
        self.end_headers()

    def _sse(self, kind: str, payload: dict) -> None:
        frame = "data: " + json.dumps({"kind": kind, **payload},
                                      ensure_ascii=False, default=str) + "\n\n"
        try:
            self.wfile.write(frame.encode())
            self.wfile.flush()
        except (BrokenPipeError, ConnectionResetError):
            raise

    # -- routes -----------------------------------------------------------
    def do_GET(self):
        parsed = urllib.parse.urlparse(self.path)
        path = parsed.path
        if path == "/" or path == "/index.html":
            return self._serve_index()
        if path == "/api/pending":
            srv = _mcp_server()
            return self._json(200, srv._call_tool("list_pending_replies", {}))
        if path == "/api/chat":
            q = urllib.parse.parse_qs(parsed.query).get("q", [""])[0].strip()
            return self._chat_stream(q)
        return self._json(404, {"error": "not found"})

    def do_POST(self):
        parsed = urllib.parse.urlparse(self.path)
        if parsed.path == "/api/approve":
            n = int(self.headers.get("Content-Length") or 0)
            body = json.loads(self.rfile.read(n) or "{}") if n else {}
            rid = body.get("id") or body.get("item_id") or ""
            if not rid:
                return self._json(400, {"error": "id required"})
            srv = _mcp_server()
            return self._json(200,
                              srv._call_tool("approve_send", {"item_id": rid}))
        return self._json(404, {"error": "not found"})

    def _serve_index(self):
        try:
            html = _STATIC.read_bytes()
        except OSError:
            html = b"<h1>evolution-agent</h1><p>UI file missing.</p>"
        self.send_response(200)
        self.send_header("Content-Type", "text/html; charset=utf-8")
        self.send_header("Content-Length", str(len(html)))
        self.end_headers()
        self.wfile.write(html)

    def _chat_stream(self, q: str):
        self._sse_open()
        if not q:
            self._sse("error", {"message": "empty prompt"})
            return
        if not _have_model():
            self._sse("error", {"message": "no model configured — set "
                       "ANTHROPIC_API_KEY and `pip install anthropic`"})
            self._sse("done", {})
            return
        try:
            srv = _mcp_server()
            # Bound a single chat's model cost — a public port must never allow
            # an unbounded LLM bill. Override with EVOSQL_AGENT_TOKEN_BUDGET=0
            # for unlimited (not recommended when exposed).
            budget = int(os.environ.get("EVOSQL_AGENT_TOKEN_BUDGET", "60000"))
            agent = AgentLoop(srv, on_event=lambda k, p: self._sse(k, p),
                              token_budget=(budget or None))
            out = agent.run(q)
            self._sse("final", {"text": out.get("final_text", ""),
                                "turns": out.get("turns"),
                                "stop_reason": out.get("stop_reason"),
                                "usage": out.get("usage")})
        except (BrokenPipeError, ConnectionResetError):
            return  # client navigated away mid-stream
        except Exception as e:  # pragma: no cover
            self._sse("error", {"message": f"agent error: {e}"})
        finally:
            try:
                self._sse("done", {})
            except Exception:
                pass


def main() -> int:
    host = os.environ.get("EVOSQL_WEB_HOST", "127.0.0.1")
    port = int(os.environ.get("EVOSQL_WEB_PORT", "8800"))
    httpd = ThreadingHTTPServer((host, port), Handler)
    model = "ready" if _have_model() else "NOT configured (set ANTHROPIC_API_KEY)"
    print(f"evolution-agent web on http://{host}:{port}  ·  model: {model}",
          file=sys.stderr, flush=True)
    print("nothing is ever sent — drafts queue for approval (ADR-004)",
          file=sys.stderr, flush=True)
    try:
        httpd.serve_forever()
    except KeyboardInterrupt:
        pass
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
