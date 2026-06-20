"""
test_oauth_consent — the real OAuth consent screen on /authorize.

Runs the proxy handler (in-memory store) on loopback with an operator token
configured, and asserts: GET /authorize shows a consent screen (no code minted);
the decision POST requires an OPERATOR (403 without, code with); a remembered
approval skips the screen; and Deny returns an access_denied redirect.
"""
from __future__ import annotations

import base64
import hashlib
import json
import os
import threading
import urllib.error
import urllib.parse
import urllib.request

import pytest
from http.server import ThreadingHTTPServer

import mcp_server_evosql.oauth_proxy as o

CONTROL_TOKEN = "operator-token-consent"


def _pkce():
    verifier = base64.urlsafe_b64encode(b"y" * 48).decode().rstrip("=")
    digest = hashlib.sha256(verifier.encode()).digest()
    return verifier, base64.urlsafe_b64encode(digest).decode().rstrip("=")


def _post(base, path, body, token=None):
    data = json.dumps(body).encode()
    headers = {"Content-Type": "application/json"}
    if token:
        headers["Authorization"] = "Bearer " + token
    req = urllib.request.Request(f"{base}{path}", data=data, headers=headers,
                                 method="POST")
    try:
        with urllib.request.urlopen(req, timeout=5) as resp:
            return resp.status, json.loads(resp.read().decode() or "{}")
    except urllib.error.HTTPError as e:
        return e.code, json.loads(e.read().decode() or "{}")


def _get(base, path):
    """Plain GET that reads the body (no redirect following)."""
    class _NoRedirect(urllib.request.HTTPRedirectHandler):
        def redirect_request(self, *a, **k):
            return None
    opener = urllib.request.build_opener(_NoRedirect)
    try:
        with opener.open(f"{base}{path}", timeout=5) as resp:
            return resp.status, resp.headers.get("Location"), resp.read().decode()
    except urllib.error.HTTPError as e:
        if e.code in (301, 302, 303, 307, 308):
            return e.code, e.headers.get("Location"), ""
        return e.code, None, e.read().decode()


@pytest.fixture()
def proxy():
    o._store._psycopg = False
    o._store._mem.clear()
    o._used_codes.clear()
    o._op_counter[0] = 0
    os.environ["EVOSQL_CONTROL_TOKEN"] = CONTROL_TOKEN     # operator credential
    os.environ.pop("EVOSQL_OIDC_ISSUER", None)
    os.environ.pop("EVOSQL_CONTROL_OPERATORS", None)
    srv = ThreadingHTTPServer(("127.0.0.1", 0), o._Handler)
    port = srv.server_address[1]
    threading.Thread(target=srv.serve_forever, daemon=True).start()
    try:
        yield f"http://127.0.0.1:{port}"
    finally:
        srv.shutdown(); srv.server_close()
        os.environ.pop("EVOSQL_CONTROL_TOKEN", None)


def _register(base):
    _, reg = _post(base, "/register",
                   {"client_name": "Acme Connector",
                    "redirect_uris": ["https://good.example/cb"]})
    return reg["client_id"]


def _authz(cid, chal):
    return {"client_id": cid, "response_type": "code",
            "redirect_uri": "https://good.example/cb",
            "code_challenge": chal, "code_challenge_method": "S256",
            "state": "s1"}


def test_get_authorize_shows_consent_screen(proxy):
    cid = _register(proxy)
    _, chal = _pkce()
    status, loc, html = _get(proxy, "/authorize?" + urllib.parse.urlencode(_authz(cid, chal)))
    assert status == 200 and loc is None            # HTML, not an auto-redirect
    assert "Acme Connector" in html and "Allow" in html and "good.example" in html


def test_decision_requires_operator(proxy):
    cid = _register(proxy)
    _, chal = _pkce()
    # no operator token -> refused, no code
    status, body = _post(proxy, "/authorize", {**_authz(cid, chal), "decision": "allow"})
    assert status == 403 and body["error"] == "access_denied"


def test_operator_allow_then_token_exchange(proxy):
    cid = _register(proxy)
    verifier, chal = _pkce()
    status, body = _post(proxy, "/authorize",
                         {**_authz(cid, chal), "decision": "allow"}, token=CONTROL_TOKEN)
    assert status == 200 and "code=" in body["redirect"]
    code = urllib.parse.parse_qs(urllib.parse.urlparse(body["redirect"]).query)["code"][0]
    # PKCE token exchange succeeds
    st, tok = _post_form(proxy, "/token",
                         {"grant_type": "authorization_code", "code": code,
                          "redirect_uri": "https://good.example/cb",
                          "code_verifier": verifier, "client_id": cid})
    assert st == 200 and tok.get("access_token")


def _post_form(base, path, body):
    data = urllib.parse.urlencode(body).encode()
    req = urllib.request.Request(f"{base}{path}", data=data,
                                 headers={"Content-Type": "application/x-www-form-urlencoded"},
                                 method="POST")
    try:
        with urllib.request.urlopen(req, timeout=5) as resp:
            return resp.status, json.loads(resp.read().decode() or "{}")
    except urllib.error.HTTPError as e:
        return e.code, json.loads(e.read().decode() or "{}")


def test_remember_skips_screen_on_repeat(proxy):
    cid = _register(proxy)
    _, chal = _pkce()
    # approve + remember
    status, body = _post(proxy, "/authorize",
                         {**_authz(cid, chal), "decision": "allow", "remember": "1"},
                         token=CONTROL_TOKEN)
    assert status == 200 and "code=" in body["redirect"]
    # a SECOND authorize for the same client now skips the screen -> 302 with code
    _, chal2 = _pkce()
    status, loc, _ = _get(proxy, "/authorize?" + urllib.parse.urlencode(_authz(cid, chal2)))
    assert status == 302 and loc and "code=" in loc


def test_consent_screen_is_xss_safe(proxy):
    # state is attacker-controlled and embedded in the inline <script>; a
    # </script> payload must be unicode-escaped, not break out of the script.
    cid = _register(proxy)
    _, chal = _pkce()
    p = _authz(cid, chal)
    p["state"] = "</script><script>window.__pwned=1</script>"
    status, _loc, html = _get(proxy, "/authorize?" + urllib.parse.urlencode(p))
    assert status == 200
    assert "</script><script>window.__pwned" not in html      # no breakout
    assert "\\u003c/script\\u003e" in html                     # escaped instead


def test_deny_returns_access_denied(proxy):
    cid = _register(proxy)
    _, chal = _pkce()
    status, body = _post(proxy, "/authorize",
                         {**_authz(cid, chal), "decision": "deny"}, token=CONTROL_TOKEN)
    assert status == 200 and "error=access_denied" in body["redirect"]
    assert "code=" not in body["redirect"]
