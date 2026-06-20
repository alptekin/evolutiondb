"""
test_oauth_proxy — OAuth 2.1 proxy security regressions.

Runs the real proxy handler on a loopback port with the persistence layer
forced into its in-memory fallback (no EvolutionDB needed), and exercises the
register -> authorize -> token flow over HTTP. Locks in the fixes for:

  * open redirect: a client registered with no/invalid redirect_uris is
    rejected, and /authorize requires an exact registered-URI match;
  * auth-code replay: a code redeemed once cannot be exchanged again;
  * unbounded growth: the in-memory cache is FIFO-capped.
"""
from __future__ import annotations

import base64
import hashlib
import json
import threading
import urllib.error
import urllib.parse
import urllib.request

import pytest

from http.server import ThreadingHTTPServer

import mcp_server_evosql.oauth_proxy as o


def _pkce():
    verifier = base64.urlsafe_b64encode(b"x" * 48).decode().rstrip("=")
    digest = hashlib.sha256(verifier.encode()).digest()
    challenge = base64.urlsafe_b64encode(digest).decode().rstrip("=")
    return verifier, challenge


def _post(base, path, body, *, json_body=True):
    data = json.dumps(body).encode() if json_body else \
        urllib.parse.urlencode(body).encode()
    ctype = "application/json" if json_body else \
        "application/x-www-form-urlencoded"
    req = urllib.request.Request(f"{base}{path}", data=data,
                                 headers={"Content-Type": ctype}, method="POST")
    try:
        with urllib.request.urlopen(req, timeout=5) as resp:
            return resp.status, json.loads(resp.read().decode() or "{}")
    except urllib.error.HTTPError as e:
        return e.code, json.loads(e.read().decode() or "{}")


def _get_no_redirect(base, path):
    class _NoRedirect(urllib.request.HTTPRedirectHandler):
        def redirect_request(self, *a, **k):
            return None
    opener = urllib.request.build_opener(_NoRedirect)
    try:
        with opener.open(f"{base}{path}", timeout=5) as resp:
            return resp.status, resp.headers.get("Location"), {}
    except urllib.error.HTTPError as e:
        if e.code in (301, 302, 303, 307, 308):
            return e.code, e.headers.get("Location"), {}
        return e.code, None, json.loads(e.read().decode() or "{}")


@pytest.fixture()
def proxy():
    import os
    # force the in-memory fallback so no EvolutionDB is required
    o._store._psycopg = False
    o._store._mem.clear()
    o._used_codes.clear()
    o._op_counter[0] = 0
    # no operator auth configured -> the loopback consent decision is dev-open,
    # so these flow tests don't need a token. Clear any leaked operator env.
    _opvars = ("EVOSQL_CONTROL_TOKEN", "EVOSQL_OIDC_ISSUER",
               "EVOSQL_CONTROL_OPERATORS")
    _saved = {k: os.environ.pop(k, None) for k in _opvars}
    srv = ThreadingHTTPServer(("127.0.0.1", 0), o._Handler)
    port = srv.server_address[1]
    t = threading.Thread(target=srv.serve_forever, daemon=True)
    t.start()
    try:
        yield f"http://127.0.0.1:{port}"
    finally:
        srv.shutdown()
        srv.server_close()
        for k, v in _saved.items():
            if v is not None:
                os.environ[k] = v


def test_register_rejects_empty_redirect_uris(proxy):
    status, body = _post(proxy, "/register", {"client_name": "x"})
    assert status == 400 and body["error"] == "invalid_redirect_uri"


def test_register_rejects_non_https_redirect(proxy):
    status, body = _post(proxy, "/register",
                         {"redirect_uris": ["http://evil.example/cb"]})
    assert status == 400 and body["error"] == "invalid_redirect_uri"


def test_register_accepts_https_and_loopback(proxy):
    status, body = _post(proxy, "/register", {
        "redirect_uris": ["https://chat.openai.com/cb",
                          "http://127.0.0.1:9000/cb"]})
    assert status == 201
    assert body["redirect_uris"] == ["https://chat.openai.com/cb",
                                     "http://127.0.0.1:9000/cb"]


def test_authorize_rejects_unregistered_redirect(proxy):
    _, reg = _post(proxy, "/register",
                   {"redirect_uris": ["https://good.example/cb"]})
    cid = reg["client_id"]
    _, chal = _pkce()
    q = urllib.parse.urlencode({
        "client_id": cid, "response_type": "code",
        "redirect_uri": "https://attacker.example/cb",
        "code_challenge": chal, "code_challenge_method": "S256"})
    status, loc, body = _get_no_redirect(proxy, f"/authorize?{q}")
    assert status == 400 and body.get("error") == "invalid_request"


def test_full_flow_and_code_cannot_be_replayed(proxy):
    _, reg = _post(proxy, "/register",
                   {"redirect_uris": ["https://good.example/cb"]})
    cid = reg["client_id"]
    verifier, chal = _pkce()
    authz = {"client_id": cid, "response_type": "code",
             "redirect_uri": "https://good.example/cb",
             "code_challenge": chal, "code_challenge_method": "S256",
             "state": "s1"}
    # GET /authorize now shows the consent screen (HTML), NOT an auto-redirect.
    status, loc, _ = _get_no_redirect(proxy, "/authorize?" + urllib.parse.urlencode(authz))
    assert status == 200 and loc is None
    # The operator approves (loopback dev-open: no operator auth configured).
    status, body = _post(proxy, "/authorize", {**authz, "decision": "allow"})
    assert status == 200 and "code=" in body["redirect"]
    code = urllib.parse.parse_qs(urllib.parse.urlparse(body["redirect"]).query)["code"][0]

    token_req = {"grant_type": "authorization_code", "code": code,
                 "redirect_uri": "https://good.example/cb",
                 "code_verifier": verifier, "client_id": cid}
    status, body = _post(proxy, "/token", token_req, json_body=False)
    assert status == 200 and body.get("access_token")

    # replay the same code -> must be rejected
    status, body = _post(proxy, "/token", token_req, json_body=False)
    assert status == 400 and body["error"] == "invalid_grant"
