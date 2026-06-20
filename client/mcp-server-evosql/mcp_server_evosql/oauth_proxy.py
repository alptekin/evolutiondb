"""
OAuth 2.1 proxy in front of `mcp_server_evosql.http_transport`.

ChatGPT's "Custom MCP" connector requires the server to implement
OAuth 2.1 + PKCE + Dynamic Client Registration per the MCP HTTP
authorization spec. The underlying http_transport only supports a
shared bearer token, which ChatGPT refuses. This proxy adds the
OAuth surface, then forwards authenticated `/mcp` requests to the
upstream MCP server with the shared bearer.

`/authorize` shows a real CONSENT SCREEN: a connecting client is approved only
after an OPERATOR (operator_auth — OIDC / static token; never a tenant token)
clicks Allow. An approval can be remembered per client so repeat authorizations
skip the screen. Tokens are long-lived; non-remembered state is in-memory and
re-created on restart (ChatGPT re-registers on demand).

Endpoints
---------
  GET    /.well-known/oauth-protected-resource     RFC 9728
  GET    /.well-known/oauth-authorization-server   RFC 8414
  POST   /register                                 RFC 7591
  GET    /authorize                                code+PKCE, consent screen
  POST   /authorize                                operator Allow/Deny decision
  POST   /token                                    code → access_token
  *      /mcp                                       proxied to upstream
  *      /                                          OPTIONS preflight, /health

Environment
-----------
  EVOSQL_MCP_UPSTREAM         default http://127.0.0.1:8970/mcp
  EVOSQL_MCP_AUTH_TOKEN       bearer the upstream expects (empty = none)
  EVOSQL_OAUTH_PROXY_PORT     default 8972
  EVOSQL_CONTROL_TOKEN / EVOSQL_OIDC_ISSUER / EVOSQL_CONTROL_OPERATORS
                             operator credential for the consent screen
  EVOSQL_OAUTH_CONSENT_TTL_DAYS  remembered-approval lifetime (default 90)
"""
from __future__ import annotations

import argparse
import base64
import hashlib
import html as _html_escape
import json
import re
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

try:                                  # package import (console script / -m)
    from . import operator_auth
except ImportError:                   # bare-script run: same-dir sibling module
    import operator_auth


UPSTREAM_URL   = os.environ.get("EVOSQL_MCP_UPSTREAM",
                                  "http://127.0.0.1:8970/mcp")
UPSTREAM_TOKEN = os.environ.get("EVOSQL_MCP_AUTH_TOKEN", "")
LISTEN_PORT    = int(os.environ.get("EVOSQL_OAUTH_PROXY_PORT", "8972"))

# Access-token lifetime. A bearer token has no refresh/revocation here, so a
# leaked token is valid until expiry — keep it bounded (90 days default) and
# operator-tunable rather than the old 1-year. Re-auth is a one-click re-consent.
ACCESS_TOKEN_TTL_SEC = int(os.environ.get(
    "EVOSQL_OAUTH_TOKEN_TTL_DAYS", "90")) * 24 * 3600
CODE_TTL_SEC         = 600               # 10 min — RFC-recommended max
CLIENT_MAX_AGE_SEC   = 30 * 24 * 3600    # prune stale client registrations
CONSENT_TTL_SEC      = int(os.environ.get(
    "EVOSQL_OAUTH_CONSENT_TTL_DAYS", "90")) * 24 * 3600  # remembered approvals
MAX_MEM_ENTRIES      = 5000              # cap the in-memory cache (DoS guard)
SWEEP_EVERY          = 25                # sweep expired rows every N register/token

_lock = threading.Lock()

# Auth codes redeemed this process -> their expiry, so a code can't be replayed
# even if the store-side delete silently fails (the _Store delete swallows
# errors). Pruned by expiry during the periodic sweep; reset on restart (clients
# re-auth). Guarded by _lock.
_used_codes: Dict[str, int] = {}
_op_counter = [0]   # register/token calls since last expired-row sweep


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

    def _remember(self, key: str, value: Dict) -> None:
        """Cache into _mem with a hard FIFO cap so an attacker spamming the
        public /register and /authorize endpoints cannot grow it without
        bound. Python dicts preserve insertion order, so popping the first key
        evicts the oldest entry."""
        self._mem[key] = value
        while len(self._mem) > MAX_MEM_ENTRIES:
            self._mem.pop(next(iter(self._mem)), None)

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
            self._remember(key, v)
        return v

    def put(self, key: str, value: Dict) -> None:
        self._remember(key, value)
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
            # engine grammar wants literal NS/KEY tokens (evoparser.y:2350) —
            # the old mem_namespace/mem_key form was a silent parse error, so
            # expired codes/tokens were never actually removed from the DB.
            cur.execute(
                f"MEMORY DELETE FROM {self._STORE_NAME} "
                f"WHERE NS = '{ns}' AND KEY = '{k}'")
        self._run(run)

    def sweep_expired(self) -> int:
        """Delete rows that can never be valid again: expired auth codes and
        access tokens, and client registrations older than CLIENT_MAX_AGE_SEC.
        Without this, the persisted store grows forever from the public
        /register and /authorize endpoints (codes/tokens are otherwise removed
        only on use, never on expiry). Best-effort; returns rows pruned."""
        ns = _e(self._namespace)
        def run(cur):
            cur.execute(
                f"SELECT mem_key, mem_value FROM __mem_{self._STORE_NAME} "
                f"WHERE mem_namespace = '{ns}'")
            return cur.fetchall() or []
        rows = self._run(run)
        if not rows:
            return 0
        now = _now()
        pruned = 0
        for key, raw in rows:
            try:
                val = raw if isinstance(raw, dict) else json.loads(raw)
            except (TypeError, ValueError):
                val = None
            drop = False
            if not isinstance(val, dict):
                drop = True
            elif key.startswith(("code:", "token:", "consent:")):
                drop = int(val.get("expires", 0)) < now
            elif key.startswith("client:"):
                drop = int(val.get("client_id_issued_at", now)) \
                    < now - CLIENT_MAX_AGE_SEC
            if drop:
                self.delete(key)
                pruned += 1
        return pruned


_store = _Store()


def _maybe_sweep() -> None:
    """Sweep expired rows roughly every SWEEP_EVERY register/token calls.
    Caller must hold _lock."""
    _op_counter[0] += 1
    if _op_counter[0] >= SWEEP_EVERY:
        _op_counter[0] = 0
        try:
            _store.sweep_expired()
            now = _now()
            for c in [c for c, exp in _used_codes.items() if exp < now]:
                _used_codes.pop(c, None)
        except Exception:
            pass


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
    """Our externally-visible origin, used to build the OAuth discovery
    documents and redirect base.

    SECURITY: prefer the operator-configured EVOSQL_PUBLIC_ORIGIN. The client
    `Host` / `X-Forwarded-Proto` headers are attacker-controllable, so reflecting
    them lets someone reaching the proxy directly poison the discovery docs
    (issuer / authorize / token endpoints) and steer a victim client to
    attacker-controlled endpoints. Only trust the Host header when it matches the
    EVOSQL_OAUTH_ALLOWED_HOSTS allowlist; otherwise fall back to the configured
    origin (or loopback)."""
    configured = os.environ.get("EVOSQL_PUBLIC_ORIGIN", "").strip().rstrip("/")
    if configured:
        return configured
    host = headers.get("Host", "")
    proto = headers.get("X-Forwarded-Proto", "https")
    allowed = {h.strip() for h in
               os.environ.get("EVOSQL_OAUTH_ALLOWED_HOSTS", "").split(",")
               if h.strip()}
    if host and host in allowed:
        return f"{proto}://{host}"
    # No trusted source for the public hostname — fall back to loopback rather
    # than echo an unverified Host into signed/discovery surfaces.
    return f"http://127.0.0.1:{LISTEN_PORT}"


def _consent_page(client: dict, p: Dict[str, str]) -> str:
    """The OAuth consent screen: shows WHO is asking (client) and FOR WHAT
    (scope), and posts the operator's Allow/Deny decision back to /authorize.
    The auth params ride in a JS object; the operator credential is sent as a
    Bearer header via fetch (so a form POST without it can't approve)."""
    name = _html_escape.escape(client.get("client_name") or "An application")
    host = _html_escape.escape(
        urllib.parse.urlparse(p.get("redirect_uri", "")).netloc or "the client")
    params = json.dumps({k: p.get(k, "") for k in (
        "client_id", "redirect_uri", "state", "code_challenge",
        "code_challenge_method", "response_type")})
    # The params (state/code_challenge are attacker-controllable) are embedded in
    # an inline <script>. json.dumps does NOT escape '<'/'>' so a value containing
    # '</script>' would break out -> reflected XSS in the operator's browser.
    # Unicode-escape the script-breaking chars (still valid JSON, parses identically).
    params = (params.replace("<", "\\u003c").replace(">", "\\u003e")
              .replace("&", "\\u0026"))
    _tpl = """<!doctype html><html lang="en"><head><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>Authorize · EvolutionDB</title><style>
 :root{--bg:#0d1117;--panel:#161b22;--line:#30363d;--txt:#e6edf3;--muted:#8b949e;
   --accent:#2f81f7;--ok:#2ea043;--danger:#da3633}
 *{box-sizing:border-box}body{margin:0;background:var(--bg);color:var(--txt);
   font:15px/1.5 -apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,sans-serif;
   display:flex;min-height:100vh;align-items:center;justify-content:center}
 .card{background:var(--panel);border:1px solid var(--line);border-radius:12px;
   padding:28px;max-width:460px;width:92%}
 h1{font-size:17px;margin:0 0 4px}.muted{color:var(--muted);font-size:13px}
 .scope{background:var(--bg);border:1px solid var(--line);border-radius:8px;
   padding:12px 14px;margin:18px 0}
 .scope b{color:var(--accent)}
 label{display:block;font-size:13px;color:var(--muted);margin:14px 0 4px}
 input{width:100%;background:var(--bg);color:var(--txt);border:1px solid var(--line);
   border-radius:6px;padding:9px 11px;font:inherit}
 .chk{display:flex;gap:8px;align-items:center;margin:14px 0;font-size:13px;color:var(--muted)}
 .chk input{width:auto}
 .row{display:flex;gap:10px;margin-top:18px}
 button{flex:1;font:inherit;padding:10px;border-radius:8px;cursor:pointer;border:1px solid var(--line);background:#21262d;color:var(--txt)}
 button.allow{background:var(--accent);border-color:var(--accent);color:#fff}
 button.deny:hover{border-color:var(--danger);color:#ff7b72}
 #err{color:#ff7b72;font-size:13px;margin-top:12px;min-height:18px}
</style></head><body><div class="card">
 <h1>Authorize access</h1>
 <p class="muted"><b>__NAME__</b> wants to connect to your EvolutionDB.</p>
 <div class="scope">Requested access: <b>mcp</b> &mdash; the memory &amp; tools API.<br>
   <span class="muted">Redirects to: __HOST__</span></div>
 <label>Operator credential (token)</label>
 <input id="op" type="password" placeholder="EVOSQL_CONTROL_TOKEN or operator OIDC token" autofocus>
 <label class="chk"><input id="remember" type="checkbox" checked> Remember this application</label>
 <div class="row">
   <button class="deny" onclick="decide('deny')">Deny</button>
   <button class="allow" onclick="decide('allow')">Allow</button>
 </div>
 <div id="err"></div>
</div><script>
 const P=__PARAMS__;
 async function decide(d){
   const tok=document.getElementById('op').value.trim();
   const body=Object.assign({},P,{decision:d,remember:document.getElementById('remember').checked?'1':'0'});
   const h={'Content-Type':'application/json'}; if(tok) h['Authorization']='Bearer '+tok;
   try{
     const r=await fetch('/authorize',{method:'POST',headers:h,body:JSON.stringify(body)});
     const j=await r.json().catch(()=>({}));
     if(r.ok && j.redirect){ window.location=j.redirect; return; }
     document.getElementById('err').textContent=(j.error_description||j.error||('HTTP '+r.status));
   }catch(e){ document.getElementById('err').textContent=String(e); }
 }
</script></body></html>"""
    # Single left-to-right pass so an already-substituted value (e.g. a
    # client_name of literal "__PARAMS__") is never re-scanned/clobbered.
    repl = {"__NAME__": name, "__HOST__": host, "__PARAMS__": params}
    return re.sub("__NAME__|__HOST__|__PARAMS__", lambda m: repl[m.group(0)], _tpl)


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

        # redirect_uris is REQUIRED for a public authorization_code client
        # (RFC 7591 §2 / 7592). Accepting an empty list would later let the
        # authorize endpoint approve ANY redirect_uri (open redirect / auth-code
        # exfiltration), so reject registration without valid absolute https
        # (or loopback http) redirect URIs up front.
        raw_uris = payload.get("redirect_uris")
        if not isinstance(raw_uris, list) or not raw_uris:
            return self._json(400, {
                "error": "invalid_redirect_uri",
                "error_description": "redirect_uris is required and must be "
                                     "a non-empty list"})
        redirect_uris = []
        for u in raw_uris:
            if not isinstance(u, str):
                continue
            parts = urllib.parse.urlparse(u)
            loopback = parts.hostname in ("127.0.0.1", "::1", "localhost")
            if parts.scheme == "https" or (parts.scheme == "http" and loopback):
                redirect_uris.append(u)
        if not redirect_uris:
            return self._json(400, {
                "error": "invalid_redirect_uri",
                "error_description": "redirect_uris must be absolute https URIs "
                                     "(http allowed only for loopback)"})

        client_id = _rand(16)
        meta = {
            "client_id":                  client_id,
            "client_id_issued_at":        _now(),
            "client_name":                payload.get("client_name", "anonymous"),
            "redirect_uris":              redirect_uris,
            "token_endpoint_auth_method": "none",
            "grant_types":                ["authorization_code"],
            "response_types":             ["code"],
            "scope":                      "mcp",
        }
        with _lock:
            _maybe_sweep()
            _store.put(f"client:{client_id}", meta)
        self._json(201, meta)

    # ---------- authorize ----------
    def _validate_authz(self, p: Dict[str, str]):
        """Validate the authorize parameters (client + exact redirect_uri +
        PKCE S256). Returns ``(client, err)`` — ``err`` is None on success, else
        a descriptor: ``{"code":n,"body":{...}}`` for a failure BEFORE the
        redirect_uri is trusted (a plain JSON error), or ``{"redirect":(error,
        desc)}`` for an OAuth error to be sent to the (validated) redirect_uri.
        Shared by the GET consent screen and the POST decision so both enforce
        the exact same checks."""
        client_id = p.get("client_id", "")
        redirect_uri = p.get("redirect_uri", "")
        with _lock:
            client = _store.get(f"client:{client_id}")
        if not client:
            return None, {"code": 400, "body": {
                "error": "invalid_client",
                "error_description": "client_id not registered"}}
        # EXACT match against a registered redirect_uri (empty registration is
        # rejected at /register, so this list is non-empty).
        if not redirect_uri or redirect_uri not in (client.get("redirect_uris") or []):
            return None, {"code": 400, "body": {
                "error": "invalid_request",
                "error_description": "redirect_uri must exactly match a "
                                     "registered redirect URI"}}
        if p.get("response_type") != "code":
            return client, {"redirect": ("unsupported_response_type",
                                         "only response_type=code is supported")}
        if p.get("code_challenge_method") != "S256":
            return client, {"redirect": ("invalid_request",
                                         "code_challenge_method must be S256")}
        if not p.get("code_challenge"):
            return client, {"redirect": ("invalid_request",
                                         "code_challenge is required")}
        return client, None

    def _authz_success_url(self, p: Dict[str, str]) -> str:
        """Mint a fresh authorization code (PKCE-bound) and build the success
        redirect URL back to the client."""
        code = _rand(24)
        with _lock:
            _store.put(f"code:{code}", {
                "client_id":      p["client_id"],
                "redirect_uri":   p["redirect_uri"],
                "code_challenge": p["code_challenge"],
                "expires":        _now() + CODE_TTL_SEC,
            })
        sep = "&" if "?" in p["redirect_uri"] else "?"
        url = f"{p['redirect_uri']}{sep}code={urllib.parse.quote(code)}"
        if p.get("state"):
            url += f"&state={urllib.parse.quote(p['state'])}"
        return url

    def _err_url(self, redirect_uri: str, state: str, error: str, desc: str) -> str:
        sep = "&" if "?" in redirect_uri else "?"
        url = (f"{redirect_uri}{sep}error={error}"
               f"&error_description={urllib.parse.quote(desc)}")
        if state:
            url += f"&state={urllib.parse.quote(state)}"
        return url

    def _err_redirect(self, redirect_uri: str, state: str,
                       error: str, desc: str) -> None:
        if not redirect_uri:
            return self._json(400, {"error": error, "error_description": desc})
        self._redirect(self._err_url(redirect_uri, state, error, desc))

    def _operator_bearer(self, p: Dict[str, str]) -> str:
        hdr = self.headers.get("Authorization", "")
        if hdr.startswith("Bearer "):
            return hdr[7:]
        return p.get("operator_token", "")

    # ---------- authorize: consent screen (GET) ----------
    def _handle_authorize(self) -> None:
        q = urllib.parse.parse_qs(urllib.parse.urlparse(self.path).query)
        p = {k: (v or [""])[0] for k, v in q.items()}
        client, err = self._validate_authz(p)
        if err is not None:
            if "redirect" in err:
                e, d = err["redirect"]
                return self._err_redirect(p.get("redirect_uri", ""),
                                          p.get("state", ""), e, d)
            return self._json(err["code"], err["body"])
        # A remembered, unexpired approval for this client short-circuits the
        # screen (the standard "remember my decision" behaviour).
        with _lock:
            consent = _store.get(f"consent:{p['client_id']}")
        if (consent and consent.get("scope") == "mcp"
                and int(consent.get("expires", 0)) >= _now()):
            return self._redirect(self._authz_success_url(p))
        # Otherwise show the consent screen — an operator must approve.
        return self._html(200, _consent_page(client, p))

    # ---------- authorize: consent decision (POST) ----------
    def _handle_authorize_decision(self) -> None:
        p = self._parse_body_params()
        client, err = self._validate_authz(p)
        if err is not None:
            if "redirect" in err:
                e, d = err["redirect"]
                return self._json(200, {"redirect": self._err_url(
                    p.get("redirect_uri", ""), p.get("state", ""), e, d)})
            return self._json(err["code"], err["body"])
        # Only an OPERATOR may approve a client (OIDC / static token; never a
        # tenant token). Refuse everyone else — this is the consent gate.
        host = self.server.server_address[0] if self.server else ""
        loopback = host in ("127.0.0.1", "localhost", "::1")
        op = operator_auth.authorize_operator(self._operator_bearer(p),
                                              loopback=loopback)
        if op is None:
            return self._json(403, {
                "error": "access_denied",
                "error_description": "operator authorization required to "
                                     "approve this client"})
        if (p.get("decision") or "").lower() != "allow":
            return self._json(200, {"redirect": self._err_url(
                p["redirect_uri"], p.get("state", ""),
                "access_denied", "the operator denied access")})
        if (p.get("remember") or "").lower() in ("1", "true", "yes", "on"):
            with _lock:
                _store.put(f"consent:{p['client_id']}", {
                    "scope": "mcp", "approved_by": op.subject,
                    "at": _now(), "expires": _now() + CONSENT_TTL_SEC})
        return self._json(200, {"redirect": self._authz_success_url(p)})

    def _html(self, status: int, html: str) -> None:
        data = html.encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "text/html; charset=utf-8")
        self.send_header("Content-Length", str(len(data)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        try:
            self.wfile.write(data)
        except (BrokenPipeError, ConnectionResetError):
            pass

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
            # Reject a code already redeemed this process even if its store row
            # lingers (a swallowed delete failure would otherwise allow replay).
            if code and code in _used_codes:
                return self._json(400, {"error": "invalid_grant",
                    "error_description": "code already used"})
            row = _store.get(f"code:{code}")
            if row is not None:
                _used_codes[code] = int(row.get("expires", _now()))
                _store.delete(f"code:{code}")
            _maybe_sweep()
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
        if path == "/authorize":
            return self._handle_authorize_decision()
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
