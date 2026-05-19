"""
OAuth 2.1 proxy in front of `mcp_server_evosql.http_transport`.

ChatGPT's "Custom MCP" connector requires the server to implement
OAuth 2.1 + PKCE + Dynamic Client Registration per the MCP HTTP
authorization spec. The underlying http_transport only supports a
shared bearer token, which ChatGPT refuses. This proxy adds the
OAuth surface, then forwards authenticated `/mcp` requests to the
upstream MCP server with the shared bearer.

For a personal hub there is no real consent decision to make — the
single human running it is always the owner. Consent is therefore
auto-approved and tokens are long-lived. State is in-memory and
re-created on restart; ChatGPT re-registers on demand.

Endpoints
---------
  GET    /.well-known/oauth-protected-resource     RFC 9728
  GET    /.well-known/oauth-authorization-server   RFC 8414
  POST   /register                                 RFC 7591
  GET    /authorize                                code+PKCE, auto-approves
  POST   /token                                    code → access_token
  *      /mcp                                       proxied to upstream
  *      /                                          OPTIONS preflight, /health

Environment
-----------
  EVOSQL_MCP_UPSTREAM         default http://127.0.0.1:8970/mcp
  EVOSQL_MCP_AUTH_TOKEN       bearer the upstream expects (empty = none)
  EVOSQL_OAUTH_PROXY_PORT     default 8972
"""
from __future__ import annotations

import argparse
import base64
import hashlib
import json
import os
import secrets
import sys
import threading
import time
import urllib.error
import urllib.parse
import urllib.request
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from typing import Dict, List, Optional


UPSTREAM_URL   = os.environ.get("EVOSQL_MCP_UPSTREAM",
                                  "http://127.0.0.1:8970/mcp")
UPSTREAM_TOKEN = os.environ.get("EVOSQL_MCP_AUTH_TOKEN", "")
LISTEN_PORT    = int(os.environ.get("EVOSQL_OAUTH_PROXY_PORT", "8972"))

ACCESS_TOKEN_TTL_SEC = 365 * 24 * 3600   # 1 year — refresh story is out of scope
CODE_TTL_SEC         = 600               # 10 min — RFC-recommended max

_lock = threading.Lock()


# ---------------------------------------------------------------- #
#  Persistence                                                      #
# ---------------------------------------------------------------- #
def _e(s: str) -> str:
    """Escape single quotes for SQL literal embedding."""
    return str(s).replace("'", "''")


class _Store:
    """Persistent state for the OAuth proxy, stored as memory rows in
    the same EvolutionDB instance the upstream MCP server uses.

    Keys are prefixed so a single physical store holds three logical
    namespaces:
        client:<client_id>   registration metadata
        code:<code>          one-time authorization codes
        token:<access_token> issued access tokens

    Falls back to an in-memory dict if EvolutionDB is unreachable,
    so a brief DB outage doesn't bring the public OAuth flow down —
    the proxy keeps serving cached state until the next restart."""

    _STORE_NAME = "mcp_oauth"

    def __init__(self) -> None:
        self._mem: Dict[str, Dict] = {}
        self._psycopg = None
        self._conn = None
        self._store_ready = False
        self._namespace = os.environ.get("MCP_USER_ID",
                                          "default_user")
        self._kwargs = dict(
            host     = os.environ.get("EVOSQL_HOST",     "127.0.0.1"),
            port     = int(os.environ.get("EVOSQL_PORT", "5433")),
            user     = os.environ.get("EVOSQL_USER",     "admin"),
            password = os.environ.get("EVOSQL_PASSWORD", "admin"),
            dbname   = os.environ.get("EVOSQL_DATABASE", "evosql"),
            autocommit = True,
        )

    def _conn_or_none(self):
        if self._psycopg is False:
            return None
        if self._psycopg is None:
            try:
                import psycopg
                self._psycopg = psycopg
            except ImportError:
                self._psycopg = False
                return None
        if self._conn is not None:
            return self._conn
        try:
            self._conn = self._psycopg.connect(**self._kwargs)
            if not self._store_ready:
                with self._conn.cursor() as cur:
                    try:
                        cur.execute(
                            f"CREATE MEMORY STORE {self._STORE_NAME}")
                    except Exception:
                        # Already exists or insufficient privilege —
                        # either is fine; subsequent ops will surface
                        # a clearer error if the store really isn't
                        # there.
                        pass
                self._store_ready = True
            return self._conn
        except Exception as exc:
            print(f"[oauth-proxy] DB unavailable, using in-memory "
                  f"fallback: {exc}", file=sys.stderr, flush=True)
            self._conn = None
            return None

    def _run(self, fn):
        for attempt in range(2):
            conn = self._conn_or_none()
            if conn is None:
                return None
            try:
                with conn.cursor() as cur:
                    return fn(cur)
            except Exception:
                try:
                    self._conn.close()
                except Exception:
                    pass
                self._conn = None
                if attempt == 1:
                    return None
        return None

    def get(self, key: str) -> Optional[Dict]:
        if key in self._mem:
            return self._mem[key]
        ns, k = _e(self._namespace), _e(key)
        def run(cur):
            cur.execute(
                f"SELECT mem_value FROM __mem_{self._STORE_NAME} "
                f"WHERE mem_namespace = '{ns}' AND mem_key = '{k}'")
            row = cur.fetchone()
            if not row or row[0] is None:
                return None
            raw = row[0]
            # EvolutionDB returns JSON-typed columns as already-parsed
            # Python objects via psycopg's type coercion; older rows
            # written as plain text come back as strings.
            if isinstance(raw, (dict, list)):
                return raw
            try:
                return json.loads(raw)
            except (TypeError, ValueError):
                return None
        v = self._run(run)
        if v is not None:
            self._mem[key] = v
        return v

    def put(self, key: str, value: Dict) -> None:
        self._mem[key] = value
        ns, k = _e(self._namespace), _e(key)
        v = _e(json.dumps(value, separators=(",", ":")))
        def run(cur):
            cur.execute(
                f"MEMORY PUT INTO {self._STORE_NAME} VALUES "
                f"('{ns}', '{k}', '{v}')")
        self._run(run)

    def delete(self, key: str) -> None:
        self._mem.pop(key, None)
        ns, k = _e(self._namespace), _e(key)
        def run(cur):
            cur.execute(
                f"MEMORY DELETE FROM {self._STORE_NAME} "
                f"WHERE mem_namespace = '{ns}' AND mem_key = '{k}'")
        self._run(run)


_store = _Store()


# ---------------------------------------------------------------- #
#  Helpers                                                          #
# ---------------------------------------------------------------- #
def _now() -> int:
    return int(time.time())


def _rand(nbytes: int = 32) -> str:
    return secrets.token_urlsafe(nbytes)


def _pkce_s256_verify(verifier: str, challenge: str) -> bool:
    """RFC 7636: BASE64URL(SHA256(code_verifier)) == code_challenge."""
    if not verifier or not challenge:
        return False
    digest   = hashlib.sha256(verifier.encode("ascii")).digest()
    expected = base64.urlsafe_b64encode(digest).decode("ascii").rstrip("=")
    return secrets.compare_digest(expected, challenge)


def _self_origin(headers) -> str:
    """Reconstruct our externally-visible origin from request headers.

    Cloudflared sets `X-Forwarded-Proto: https` and forwards the public
    hostname in `Host`. When invoked locally (no proxy header), default
    to https because that's what the OAuth flow realistically uses."""
    host  = headers.get("Host", "localhost")
    proto = headers.get("X-Forwarded-Proto", "https")
    return f"{proto}://{host}"


# ---------------------------------------------------------------- #
#  HTTP handler                                                     #
# ---------------------------------------------------------------- #
class _Handler(BaseHTTPRequestHandler):
    server_version = "evolutiondb-mcp-oauth/1.0"

    # ---------- response helpers ----------
    def _json(self, status: int, body: dict,
              extra_headers: Optional[Dict[str, str]] = None) -> None:
        data = json.dumps(body).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type",   "application/json")
        self.send_header("Content-Length", str(len(data)))
        self.send_header("Cache-Control",  "no-store")
        self.send_header("Access-Control-Allow-Origin", "*")
        for k, v in (extra_headers or {}).items():
            self.send_header(k, v)
        self.end_headers()
        try:
            self.wfile.write(data)
        except (BrokenPipeError, ConnectionResetError):
            pass

    def _redirect(self, url: str) -> None:
        self.send_response(302)
        self.send_header("Location", url)
        self.send_header("Cache-Control", "no-store")
        self.end_headers()

    def _read_body(self) -> bytes:
        try:
            n = int(self.headers.get("Content-Length", "0") or "0")
        except ValueError:
            n = 0
        return self.rfile.read(n) if n > 0 else b""

    def _parse_body_params(self) -> Dict[str, str]:
        raw = self._read_body().decode("utf-8", errors="replace")
        ctype = self.headers.get("Content-Type", "").lower()
        if "application/x-www-form-urlencoded" in ctype:
            return {k: v[0]
                    for k, v in urllib.parse.parse_qs(raw).items()}
        if "application/json" in ctype:
            try:
                d = json.loads(raw or "{}")
                return {k: str(v) for k, v in d.items()
                        if isinstance(v, (str, int, float, bool))}
            except ValueError:
                return {}
        return {}

    # ---------- discovery ----------
    def _handle_protected_resource(self) -> None:
        origin = _self_origin(self.headers)
        self._json(200, {
            "resource":                 f"{origin}/mcp",
            "authorization_servers":    [origin],
            "bearer_methods_supported": ["header"],
            "scopes_supported":         ["mcp"],
        })

    def _handle_authorization_server(self) -> None:
        origin = _self_origin(self.headers)
        self._json(200, {
            "issuer":                                  origin,
            "authorization_endpoint":                  f"{origin}/authorize",
            "token_endpoint":                          f"{origin}/token",
            "registration_endpoint":                   f"{origin}/register",
            "response_types_supported":                ["code"],
            "grant_types_supported":                   ["authorization_code"],
            "code_challenge_methods_supported":        ["S256"],
            "token_endpoint_auth_methods_supported":   ["none"],
            "scopes_supported":                        ["mcp"],
        })

    # ---------- dynamic client registration ----------
    def _handle_register(self) -> None:
        try:
            payload = json.loads(self._read_body().decode("utf-8") or "{}")
        except ValueError:
            return self._json(400, {"error": "invalid_client_metadata"})

        client_id = _rand(16)
        meta = {
            "client_id":                  client_id,
            "client_id_issued_at":        _now(),
            "client_name":                payload.get("client_name", "anonymous"),
            "redirect_uris":              payload.get("redirect_uris") or [],
            "token_endpoint_auth_method": "none",
            "grant_types":                ["authorization_code"],
            "response_types":             ["code"],
            "scope":                      "mcp",
        }
        with _lock:
            _store.put(f"client:{client_id}", meta)
        self._json(201, meta)

    # ---------- authorize ----------
    def _handle_authorize(self) -> None:
        q = urllib.parse.parse_qs(urllib.parse.urlparse(self.path).query)
        def get(k: str) -> str: return (q.get(k) or [""])[0]

        client_id      = get("client_id")
        redirect_uri   = get("redirect_uri")
        response_type  = get("response_type")
        state          = get("state")
        challenge      = get("code_challenge")
        challenge_meth = get("code_challenge_method")

        with _lock:
            client = _store.get(f"client:{client_id}")

        if not client:
            # No registered client → can't trust the redirect_uri, so
            # respond with a plain error page instead of redirecting.
            return self._json(400, {
                "error":             "invalid_client",
                "error_description": "client_id not registered",
            })

        registered_uris = client.get("redirect_uris") or []
        if registered_uris and redirect_uri not in registered_uris:
            return self._json(400, {
                "error":             "invalid_request",
                "error_description": "redirect_uri does not match registration",
            })

        if response_type != "code":
            return self._err_redirect(redirect_uri, state,
                "unsupported_response_type",
                "only response_type=code is supported")
        if challenge_meth != "S256":
            return self._err_redirect(redirect_uri, state,
                "invalid_request",
                "code_challenge_method must be S256")
        if not challenge:
            return self._err_redirect(redirect_uri, state,
                "invalid_request",
                "code_challenge is required")

        code = _rand(24)
        with _lock:
            _store.put(f"code:{code}", {
                "client_id":      client_id,
                "redirect_uri":   redirect_uri,
                "code_challenge": challenge,
                "expires":        _now() + CODE_TTL_SEC,
            })
        sep = "&" if "?" in redirect_uri else "?"
        url = f"{redirect_uri}{sep}code={urllib.parse.quote(code)}"
        if state:
            url += f"&state={urllib.parse.quote(state)}"
        self._redirect(url)

    def _err_redirect(self, redirect_uri: str, state: str,
                       error: str, desc: str) -> None:
        if not redirect_uri:
            return self._json(400, {"error": error,
                                     "error_description": desc})
        sep = "&" if "?" in redirect_uri else "?"
        url = (f"{redirect_uri}{sep}error={error}"
               f"&error_description={urllib.parse.quote(desc)}")
        if state:
            url += f"&state={urllib.parse.quote(state)}"
        self._redirect(url)

    # ---------- token ----------
    def _handle_token(self) -> None:
        p = self._parse_body_params()
        if p.get("grant_type") != "authorization_code":
            return self._json(400, {"error": "unsupported_grant_type"})

        code         = p.get("code", "")
        redirect_uri = p.get("redirect_uri", "")
        verifier     = p.get("code_verifier", "")
        client_id    = p.get("client_id", "")

        with _lock:
            row = _store.get(f"code:{code}")
            if row is not None:
                _store.delete(f"code:{code}")
        if not row:
            return self._json(400, {"error": "invalid_grant",
                "error_description": "code not found or already used"})
        if row["expires"] < _now():
            return self._json(400, {"error": "invalid_grant",
                "error_description": "code expired"})
        if row["client_id"] != client_id:
            return self._json(400, {"error": "invalid_grant",
                "error_description": "client_id mismatch"})
        if row["redirect_uri"] != redirect_uri:
            return self._json(400, {"error": "invalid_grant",
                "error_description": "redirect_uri mismatch"})
        if not _pkce_s256_verify(verifier, row["code_challenge"]):
            return self._json(400, {"error": "invalid_grant",
                "error_description": "PKCE verification failed"})

        access_token = _rand(32)
        with _lock:
            _store.put(f"token:{access_token}", {
                "client_id": client_id,
                "expires":   _now() + ACCESS_TOKEN_TTL_SEC,
            })
        self._json(200, {
            "access_token": access_token,
            "token_type":   "Bearer",
            "expires_in":   ACCESS_TOKEN_TTL_SEC,
            "scope":        "mcp",
        })

    # ---------- MCP proxy ----------
    def _check_bearer(self) -> bool:
        auth = self.headers.get("Authorization", "")
        if not auth.lower().startswith("bearer "):
            return False
        tok = auth[7:].strip()
        with _lock:
            row = _store.get(f"token:{tok}")
        return bool(row and row["expires"] > _now())

    def _proxy_mcp(self) -> None:
        if not self._check_bearer():
            origin = _self_origin(self.headers)
            return self._json(401, {"error": "invalid_token"},
                extra_headers={"WWW-Authenticate":
                    f'Bearer resource_metadata="{origin}'
                    f'/.well-known/oauth-protected-resource"'})

        body = self._read_body()

        # Pass-through headers except hop-by-hop, Host, and Authorization
        # (which we replace with the upstream shared bearer).
        upstream_headers: Dict[str, str] = {}
        for k, v in self.headers.items():
            kl = k.lower()
            if kl in ("authorization", "host", "content-length",
                       "connection", "transfer-encoding",
                       "x-forwarded-proto", "x-forwarded-for"):
                continue
            upstream_headers[k] = v
        if UPSTREAM_TOKEN:
            upstream_headers["Authorization"] = f"Bearer {UPSTREAM_TOKEN}"

        req = urllib.request.Request(UPSTREAM_URL, data=body or None,
            method=self.command, headers=upstream_headers)

        try:
            resp = urllib.request.urlopen(req, timeout=300)
        except urllib.error.HTTPError as e:
            self.send_response(e.code)
            for k, v in e.headers.items():
                if k.lower() not in ("transfer-encoding", "connection"):
                    self.send_header(k, v)
            self.send_header("Access-Control-Allow-Origin", "*")
            self.end_headers()
            try:
                self.wfile.write(e.read())
            except (BrokenPipeError, ConnectionResetError):
                pass
            return
        except urllib.error.URLError as e:
            return self._json(502, {"error": "bad_gateway",
                                     "error_description": str(e)})

        self.send_response(resp.status)
        for k, v in resp.headers.items():
            if k.lower() not in ("transfer-encoding", "connection"):
                self.send_header(k, v)
        self.send_header("Access-Control-Allow-Origin", "*")
        self.end_headers()
        try:
            while True:
                chunk = resp.read(8192)
                if not chunk:
                    break
                self.wfile.write(chunk)
                self.wfile.flush()
        except (BrokenPipeError, ConnectionResetError):
            pass

    # ---------- CORS preflight ----------
    def _cors(self) -> None:
        self.send_response(204)
        self.send_header("Access-Control-Allow-Origin",   "*")
        self.send_header("Access-Control-Allow-Methods",
                          "GET, POST, DELETE, OPTIONS")
        self.send_header("Access-Control-Allow-Headers",
                          "Authorization, Content-Type, Accept, "
                          "Mcp-Session-Id, Last-Event-Id")
        self.send_header("Access-Control-Max-Age", "86400")
        self.end_headers()

    # ---------- dispatch ----------
    def do_OPTIONS(self) -> None:   # noqa: N802
        self._cors()

    def do_GET(self) -> None:       # noqa: N802
        path, _, _ = self.path.partition("?")
        if path == "/.well-known/oauth-protected-resource":
            return self._handle_protected_resource()
        if path == "/.well-known/oauth-authorization-server":
            return self._handle_authorization_server()
        if path == "/authorize":
            return self._handle_authorize()
        if path == "/mcp":
            return self._proxy_mcp()
        if path == "/health":
            return self._json(200, {"ok": True})
        return self._json(404, {"error": "not_found"})

    def do_POST(self) -> None:      # noqa: N802
        path, _, _ = self.path.partition("?")
        if path == "/register":
            return self._handle_register()
        if path == "/token":
            return self._handle_token()
        if path == "/mcp":
            return self._proxy_mcp()
        return self._json(404, {"error": "not_found"})

    def do_DELETE(self) -> None:    # noqa: N802
        path, _, _ = self.path.partition("?")
        if path == "/mcp":
            return self._proxy_mcp()
        return self._json(404, {"error": "not_found"})

    def log_message(self, fmt: str, *args) -> None:
        sys.stderr.write(f"[oauth-proxy] {self.address_string()} - "
                          f"{fmt % args}\n")


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
def main(argv: Optional[List[str]] = None) -> int:
    ap = argparse.ArgumentParser(prog="evolutiondb-mcp-oauth",
        description="OAuth 2.1 proxy that fronts a bearer-only MCP server "
                    "so ChatGPT-class clients can connect.")
    ap.add_argument("--host", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=LISTEN_PORT)
    args = ap.parse_args(argv)

    print(f"[oauth-proxy] listening on http://{args.host}:{args.port}",
          flush=True)
    print(f"[oauth-proxy] upstream:  {UPSTREAM_URL}", flush=True)
    if not UPSTREAM_TOKEN:
        print("[oauth-proxy] WARNING: EVOSQL_MCP_AUTH_TOKEN unset — "
              "no bearer will be sent upstream", flush=True)

    srv = ThreadingHTTPServer((args.host, args.port), _Handler)
    try:
        srv.serve_forever()
    except KeyboardInterrupt:
        pass
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
