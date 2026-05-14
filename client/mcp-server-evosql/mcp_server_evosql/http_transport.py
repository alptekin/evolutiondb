"""
Streamable-HTTP transport for the MCP server.

The MCP spec (2025-03-26) defines two transports: stdio (used by
Claude Desktop, ChatGPT Desktop, Gemini CLI) and "streamable HTTP"
(used by chat.openai.com, gemini.google.com, and other web hosts
that cannot spawn a local process). This module is the second one.

Endpoint shape:

  POST /mcp                — client sends one JSON-RPC message;
                             server returns the response either as
                             JSON in the body or as a single-event
                             SSE stream, depending on Accept.
  GET  /mcp                — opens an SSE stream the server can push
                             on. We have no server-initiated events
                             so it returns 405 (Method Not Allowed)
                             with a Mcp-Allow-Methods hint.
  DELETE /mcp              — explicit session end; returns 200.
  OPTIONS /mcp             — CORS preflight for browser clients.

Security:
  - Bearer auth via EVOSQL_MCP_AUTH_TOKEN. When set, every request
    (except OPTIONS) must carry `Authorization: Bearer <token>`.
  - Origin header is validated against EVOSQL_MCP_ALLOWED_ORIGINS
    when the server binds to anything other than loopback. Default
    list covers chat.openai.com, claude.ai, gemini.google.com.
  - Bound to 127.0.0.1 by default. The CLI warns the user when
    --host is anything else.

The handler reuses MCPServer.handle() unchanged so stdio and HTTP
stay strictly equivalent; new tools or protocol bumps land in both
at the same time.
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import uuid
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from typing import List, Optional


DEFAULT_PORT = int(os.environ.get("EVOSQL_MCP_HTTP_PORT", "8970"))
DEFAULT_PATH = "/mcp"

DEFAULT_ORIGINS = (
    "https://chat.openai.com",
    "https://chatgpt.com",
    "https://claude.ai",
    "https://gemini.google.com",
)


def _allowed_origins() -> List[str]:
    raw = os.environ.get("EVOSQL_MCP_ALLOWED_ORIGINS", "").strip()
    if not raw:
        return list(DEFAULT_ORIGINS)
    return [o.strip() for o in raw.split(",") if o.strip()]


def _auth_token() -> Optional[str]:
    t = os.environ.get("EVOSQL_MCP_AUTH_TOKEN", "").strip()
    return t or None


# ---------------------------------------------------------------- #
#  Handler                                                          #
# ---------------------------------------------------------------- #
class _Handler(BaseHTTPRequestHandler):
    """Per-request handler. The wrapping HTTPServer carries an
    `mcp_server` attribute pointing at the shared MCPServer used to
    dispatch JSON-RPC. Each HTTP request is independent — sessions
    are advisory only since handle() is stateless across calls."""
    server_version = "evolutiondb-mcp-http/1.0"

    # Suppress the default access-log noise; turn on via
    # EVOSQL_MCP_HTTP_ACCESS_LOG=1 if you want to debug a tunnel.
    def log_message(self, fmt, *args):
        if os.environ.get("EVOSQL_MCP_HTTP_ACCESS_LOG"):
            super().log_message(fmt, *args)

    # ---------------------------------------------------------------- #
    #  Auth + origin gating                                             #
    # ---------------------------------------------------------------- #
    def _check_auth(self) -> bool:
        token = _auth_token()
        if not token:
            return True
        auth = self.headers.get("Authorization", "")
        if not auth.lower().startswith("bearer "):
            self._send_json(401, {"error": "missing bearer token"})
            return False
        if auth.split(" ", 1)[1].strip() != token:
            self._send_json(401, {"error": "invalid bearer token"})
            return False
        return True

    def _check_origin(self) -> bool:
        # Local connections are always trusted — that's the loopback
        # / SSH-tunnel / Cloudflare Tunnel case.
        if not self.server.public_facing:
            return True
        origin = self.headers.get("Origin", "")
        if not origin:
            # Native MCP clients connecting over HTTP may omit Origin.
            # Auth token (if any) is the real gate.
            return True
        allowed = self.server.allowed_origins
        if origin in allowed:
            return True
        self._send_json(403, {"error": f"origin {origin!r} not allowed"})
        return False

    # ---------------------------------------------------------------- #
    #  Response helpers                                                 #
    # ---------------------------------------------------------------- #
    def _cors_headers(self):
        origin = self.headers.get("Origin", "*")
        self.send_header("Access-Control-Allow-Origin",  origin)
        self.send_header("Access-Control-Allow-Methods",
                          "POST, GET, DELETE, OPTIONS")
        self.send_header("Access-Control-Allow-Headers",
                          "Content-Type, Authorization, Mcp-Session-Id")
        self.send_header("Access-Control-Expose-Headers",
                          "Mcp-Session-Id")
        self.send_header("Access-Control-Max-Age", "86400")

    def _send_json(self, code: int, data) -> None:
        body = json.dumps(data, ensure_ascii=False).encode("utf-8")
        self.send_response(code)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self._cors_headers()
        self.end_headers()
        self.wfile.write(body)

    def _send_sse(self, code: int, payload) -> None:
        """Single-event SSE response — we have no streaming tool yet,
        so one `data: <json>\\n\\n` line and close is enough to keep
        clients that insist on `text/event-stream` happy.

        We explicitly set `Connection: close` so the client knows
        the response is complete when the socket closes; keep-alive
        would hang the client waiting for the next event."""
        chunk = ("event: message\n"
                 "data: " + json.dumps(payload, ensure_ascii=False)
                 + "\n\n").encode("utf-8")
        self.send_response(code)
        self.send_header("Content-Type", "text/event-stream; charset=utf-8")
        self.send_header("Cache-Control", "no-cache")
        self.send_header("Connection",    "close")
        self._cors_headers()
        self.end_headers()
        self.wfile.write(chunk)
        self.wfile.flush()
        # Signal to BaseHTTPRequestHandler that the connection should
        # not be reused after this response.
        self.close_connection = True

    def _send_empty(self, code: int) -> None:
        self.send_response(code)
        self.send_header("Content-Length", "0")
        self._cors_headers()
        self.end_headers()

    # ---------------------------------------------------------------- #
    #  Routes                                                           #
    # ---------------------------------------------------------------- #
    def do_OPTIONS(self):
        if self.path != self.server.path:
            self._send_empty(404)
            return
        self._send_empty(204)

    def do_GET(self):
        if self.path != self.server.path:
            self._send_empty(404)
            return
        if not self._check_auth() or not self._check_origin():
            return
        # We do not push server-initiated events; respond with the
        # spec's "not allowed" hint so the client falls back to
        # request-response over POST.
        self.send_response(405)
        self.send_header("Allow", "POST, DELETE, OPTIONS")
        self._cors_headers()
        self.send_header("Content-Length", "0")
        self.end_headers()

    def do_DELETE(self):
        if self.path != self.server.path:
            self._send_empty(404)
            return
        if not self._check_auth() or not self._check_origin():
            return
        # Sessions are advisory — accept and ack.
        self._send_empty(200)

    def do_POST(self):
        if self.path != self.server.path:
            self._send_empty(404)
            return
        if not self._check_auth() or not self._check_origin():
            return

        length = int(self.headers.get("Content-Length", "0") or "0")
        if length <= 0 or length > 1_000_000:
            return self._send_json(400, {"error": "invalid body length"})
        raw = self.rfile.read(length)
        try:
            msg = json.loads(raw.decode("utf-8"))
        except (UnicodeDecodeError, json.JSONDecodeError) as exc:
            return self._send_json(400,
                                    {"error": f"bad JSON: {exc}"})

        # Dispatch through the shared MCPServer.
        mcp = self.server.mcp_server
        try:
            if isinstance(msg, list):
                # Batched request — handle each, drop None (notifications).
                replies = []
                for m in msg:
                    r = mcp.handle(m)
                    if r is not None:
                        replies.append(r)
                response = replies if replies else None
            else:
                response = mcp.handle(msg)
        except Exception as exc:
            import traceback
            traceback.print_exc(file=sys.stderr)
            return self._send_json(500, {"error": str(exc)})

        if response is None:
            # Notification with no reply — 202 Accepted.
            self._send_empty(202)
            return

        # Honour the client's Accept header. Browsers often send
        # `application/json, text/event-stream`; we prefer JSON when
        # both are listed because it round-trips through fewer proxies.
        accept = (self.headers.get("Accept") or "*/*").lower()
        wants_sse = ("text/event-stream" in accept
                     and "application/json" not in accept)

        # Echo / set the session id when the client initialised.
        if (isinstance(msg, dict)
                and msg.get("method") == "initialize"):
            session_id = (self.headers.get("Mcp-Session-Id")
                          or str(uuid.uuid4()))
            self.send_response(200)
            self.send_header("Mcp-Session-Id", session_id)
            body = json.dumps(response, ensure_ascii=False).encode("utf-8")
            self.send_header("Content-Type",
                              "application/json; charset=utf-8")
            self.send_header("Content-Length", str(len(body)))
            self._cors_headers()
            self.end_headers()
            self.wfile.write(body)
            return

        if wants_sse:
            self._send_sse(200, response)
        else:
            self._send_json(200, response)


# ---------------------------------------------------------------- #
#  Server wrapper                                                   #
# ---------------------------------------------------------------- #
class _MCPThreadingHTTPServer(ThreadingHTTPServer):
    """Carries the shared MCPServer + the resolved config so handler
    threads can read it without touching globals."""
    daemon_threads = True

    def __init__(self, addr, handler_cls, *, mcp_server,
                  path: str,
                  public_facing: bool,
                  allowed_origins: List[str]):
        super().__init__(addr, handler_cls)
        self.mcp_server      = mcp_server
        self.path            = path
        self.public_facing   = public_facing
        self.allowed_origins = allowed_origins


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(
        prog="evolutiondb-mcp-http",
        description="Serve the evolutiondb-memory MCP server over "
                    "streamable HTTP, so web hosts like chat.openai.com "
                    "and gemini.google.com can reach it through a tunnel.")
    parser.add_argument("--host", default="127.0.0.1",
        help="Bind address. Default 127.0.0.1; set to 0.0.0.0 only "
             "when fronted by a TLS-terminating tunnel (Cloudflare, "
             "ngrok) and EVOSQL_MCP_AUTH_TOKEN is set.")
    parser.add_argument("--port", type=int, default=DEFAULT_PORT,
        help=f"TCP port (default {DEFAULT_PORT}, "
             "env EVOSQL_MCP_HTTP_PORT)")
    parser.add_argument("--path", default=DEFAULT_PATH,
        help="HTTP path the endpoint lives at (default /mcp)")
    args = parser.parse_args(argv)

    # Import lazily so importing this module doesn't fire up
    # MCPServer's psycopg dependency tree.
    from .server import MCPServer

    mcp_server = MCPServer()

    public_facing = args.host not in ("127.0.0.1", "::1", "localhost")
    token = _auth_token()
    if public_facing and not token:
        print("[mcp-http] WARNING: binding to a non-loopback address "
              "without EVOSQL_MCP_AUTH_TOKEN set. Anyone on the "
              "network can call your memory tools.",
              file=sys.stderr, flush=True)

    srv = _MCPThreadingHTTPServer(
        (args.host, args.port), _Handler,
        mcp_server=mcp_server,
        path=args.path,
        public_facing=public_facing,
        allowed_origins=_allowed_origins(),
    )
    print(f"[mcp-http] listening on http://{args.host}:{args.port}"
          f"{args.path}", file=sys.stderr, flush=True)
    print(f"[mcp-http] auth: "
          f"{'token-protected' if token else 'open (loopback only)'}",
          file=sys.stderr, flush=True)
    if public_facing:
        print(f"[mcp-http] allowed origins: "
              f"{', '.join(srv.allowed_origins)}",
              file=sys.stderr, flush=True)
    try:
        srv.serve_forever()
    except KeyboardInterrupt:
        print("[mcp-http] shutting down", file=sys.stderr, flush=True)
    finally:
        srv.server_close()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
