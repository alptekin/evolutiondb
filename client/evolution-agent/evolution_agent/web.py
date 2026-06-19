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

import hmac
import json
import os
import sys
import threading
import time
import urllib.parse
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

from .loop import AgentLoop

_STATIC = Path(__file__).resolve().parent.parent / "web" / "index.html"
_server_lock = threading.Lock()
_mcp = None            # shared MCPServer, built lazily on first request

# Per-client request rate limiting for the /api/* endpoints (the chat endpoint
# drives the LLM, so an open port must not be hammerable). In-memory sliding
# 60s window keyed by client IP, guarded by a lock (ThreadingHTTPServer).
_RATE_LOCK = threading.Lock()
_RATE: dict = {}


def _web_token() -> str:
    """Shared secret required on /api/* when set (EVOSQL_WEB_TOKEN). Empty =
    auth disabled — fine for the loopback default, NOT when exposed."""
    return os.environ.get("EVOSQL_WEB_TOKEN", "")


# -- OIDC / SSO bearer-token validation -------------------------------------
# When EVOSQL_OIDC_ISSUER is set, /api/* also accepts an `Authorization: Bearer
# <jwt>` access token from that OpenID Connect issuer: the operator logs in via
# their IdP (Keycloak, Microsoft Entra ID, Okta, Google, Auth0), which enforces
# MFA, and we verify the resulting JWT's signature (against the issuer's JWKS),
# issuer, audience, and expiry. The static EVOSQL_WEB_TOKEN stays as a
# machine-to-machine fallback. Validation is standards-based, so any compliant
# IdP works; MFA needs no code here (the IdP enforces it before issuing a token).
_OIDC_LOCK = threading.Lock()
_OIDC_JWKS_URI: dict = {}     # issuer -> jwks_uri (cached discovery)
_OIDC_CLIENTS: dict = {}      # jwks_uri -> PyJWKClient (caches signing keys)


def _oidc_issuer() -> str:
    return os.environ.get("EVOSQL_OIDC_ISSUER", "").rstrip("/")


def _oidc_enabled() -> bool:
    return bool(_oidc_issuer())


def _oidc_jwks_uri(issuer: str) -> str:
    """Resolve the issuer's jwks_uri from its OIDC discovery document (cached).
    EVOSQL_OIDC_JWKS_URI overrides discovery when set."""
    override = os.environ.get("EVOSQL_OIDC_JWKS_URI", "")
    if override:
        return override
    with _OIDC_LOCK:
        if issuer in _OIDC_JWKS_URI:
            return _OIDC_JWKS_URI[issuer]
    import urllib.request
    with urllib.request.urlopen(
            issuer + "/.well-known/openid-configuration", timeout=5) as r:
        doc = json.loads(r.read().decode())
    jwks_uri = doc.get("jwks_uri", "")
    with _OIDC_LOCK:
        _OIDC_JWKS_URI[issuer] = jwks_uri
    return jwks_uri


def _oidc_validate(token: str) -> bool:
    """Verify a bearer JWT against the configured OIDC issuer. True only on a
    fully valid token: RS256 signature (via the issuer's JWKS) + issuer +
    audience (when EVOSQL_OIDC_AUDIENCE is set) + expiry."""
    issuer = _oidc_issuer()
    if not issuer or not token:
        return False
    try:
        import jwt
        from jwt import PyJWKClient
    except ImportError:
        sys.stderr.write("WARNING: EVOSQL_OIDC_ISSUER is set but PyJWT is not "
                         "installed (pip install 'pyjwt[crypto]'); rejecting "
                         "OIDC tokens.\n")
        return False
    try:
        jwks_uri = _oidc_jwks_uri(issuer)
        if not jwks_uri:
            return False
        with _OIDC_LOCK:
            client = _OIDC_CLIENTS.get(jwks_uri)
            if client is None:
                client = PyJWKClient(jwks_uri)
                _OIDC_CLIENTS[jwks_uri] = client
        signing_key = client.get_signing_key_from_jwt(token)
        audience = os.environ.get("EVOSQL_OIDC_AUDIENCE", "") or None
        jwt.decode(token, signing_key.key, algorithms=["RS256"],
                   issuer=issuer, audience=audience,
                   options={"require": ["exp", "iss"],
                            "verify_aud": bool(audience)})
        return True
    except Exception:
        return False


def _rate_per_min() -> int:
    try:
        return max(0, int(os.environ.get("EVOSQL_WEB_RATE_PER_MIN", "60")))
    except ValueError:
        return 60


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

    # -- access control ---------------------------------------------------
    def _auth_ok(self) -> bool:
        """Gate /api/*. Accepts the static EVOSQL_WEB_TOKEN (constant-time
        compare, for machine-to-machine) OR, when EVOSQL_OIDC_ISSUER is set, a
        valid OIDC bearer JWT (operator SSO; MFA enforced by the IdP). The
        bearer arrives via `Authorization: Bearer <tok>` or `?token=<tok>` (the
        latter for the EventSource chat stream, which can't set headers). Open
        only when NEITHER auth method is configured (loopback-default dev)."""
        presented = ""
        hdr = self.headers.get("Authorization", "")
        if hdr.startswith("Bearer "):
            presented = hdr[7:]
        else:
            q = urllib.parse.parse_qs(urllib.parse.urlparse(self.path).query)
            presented = q.get("token", [""])[0]

        tok = _web_token()
        if tok and presented and hmac.compare_digest(presented, tok):
            return True
        if _oidc_enabled() and presented and _oidc_validate(presented):
            return True
        if not tok and not _oidc_enabled():
            return True  # nothing configured → loopback-default dev
        return False

    def _rate_ok(self) -> bool:
        limit = _rate_per_min()
        if limit <= 0:
            return True
        ip = self.client_address[0] if self.client_address else "?"
        now = time.monotonic()
        with _RATE_LOCK:
            bucket = [t for t in _RATE.get(ip, []) if now - t < 60.0]
            if len(bucket) >= limit:
                _RATE[ip] = bucket
                return False
            bucket.append(now)
            _RATE[ip] = bucket
        return True

    def _guard_api(self) -> bool:
        """Gate an /api/* request: rate-limit then auth. Sends 429/401 and
        returns False when blocked, else True."""
        if not self._rate_ok():
            self._json(429, {"error": "rate limit exceeded — slow down"})
            return False
        if not self._auth_ok():
            self._json(401, {"error": "unauthorized — set Authorization: Bearer "
                                      "<EVOSQL_WEB_TOKEN> or ?token="})
            return False
        return True

    # -- routes -----------------------------------------------------------
    def do_GET(self):
        parsed = urllib.parse.urlparse(self.path)
        path = parsed.path
        if path == "/" or path == "/index.html":
            return self._serve_index()           # the UI shell is not sensitive
        if path.startswith("/api/"):
            if not self._guard_api():
                return
        if path == "/api/pending":
            srv = _mcp_server()
            return self._json(200, srv._call_tool("list_pending_replies", {}))
        if path == "/api/chat":
            q = urllib.parse.parse_qs(parsed.query).get("q", [""])[0].strip()
            return self._chat_stream(q)
        return self._json(404, {"error": "not found"})

    def do_POST(self):
        parsed = urllib.parse.urlparse(self.path)
        if parsed.path.startswith("/api/"):
            if not self._guard_api():
                return
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
    if _oidc_enabled():
        auth = f"OIDC SSO ({_oidc_issuer()})" + (" + token" if _web_token() else "")
    elif _web_token():
        auth = "token-protected"
    else:
        auth = "OPEN (no EVOSQL_WEB_TOKEN / EVOSQL_OIDC_ISSUER)"
    print(f"evolution-agent web on http://{host}:{port}  ·  model: {model}  ·  api: {auth}",
          file=sys.stderr, flush=True)
    if not _web_token() and not _oidc_enabled() and host not in ("127.0.0.1", "localhost", "::1"):
        print(f"WARNING: bound to {host} with NO EVOSQL_WEB_TOKEN / EVOSQL_OIDC_ISSUER — "
              "the agent API is open to the network. Set one before exposing it.",
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
