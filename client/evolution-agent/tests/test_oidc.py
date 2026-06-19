"""
test_oidc.py — operator SSO via OIDC bearer-JWT validation on the web API.

A self-contained mock OpenID Connect provider (RSA keypair, a JWKS endpoint, and
a discovery document) issues signed JWTs. The web Handler is pointed at it via
EVOSQL_OIDC_ISSUER and must accept a valid token and reject everything else —
exactly the standards-based validation (RS256 signature via JWKS + issuer +
audience + expiry) that a real IdP (Keycloak, Entra ID, Okta, Google, Auth0)
relies on. MFA is enforced by the IdP, so it needs no coverage here.

Requires PyJWT + cryptography (present in the mcp-server venv). Skips cleanly if
they are missing. No Docker, no real IdP.

    client/mcp-server-evosql/.venv/bin/python3 client/evolution-agent/tests/test_oidc.py
"""
from __future__ import annotations

import json
import os
import sys
import time
import threading
import urllib.request
import urllib.error
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

try:
    import jwt
    from jwt.algorithms import RSAAlgorithm
    from cryptography.hazmat.primitives.asymmetric import rsa
    _HAVE_DEPS = True
except Exception:
    _HAVE_DEPS = False

from evolution_agent import web


class FakeServer:
    def _call_tool(self, name, args, identity=None):
        if name == "list_pending_replies":
            return {"ok": True, "pending": []}
        return {"ok": True}


# -- mock OpenID Connect provider -------------------------------------------

class MockIdP:
    def __init__(self):
        self.key = rsa.generate_private_key(public_exponent=65537, key_size=2048)
        self.kid = "test-key-1"
        jwk = json.loads(RSAAlgorithm.to_jwk(self.key.public_key()))
        jwk.update({"kid": self.kid, "use": "sig", "alg": "RS256"})
        self._jwks = {"keys": [jwk]}
        idp = self

        class H(BaseHTTPRequestHandler):
            def log_message(self, *a):
                pass

            def do_GET(self):
                if self.path.startswith("/.well-known/openid-configuration"):
                    body = {"issuer": idp.issuer,
                            "jwks_uri": idp.issuer + "/jwks"}
                elif self.path.startswith("/jwks"):
                    body = idp._jwks
                else:
                    self.send_response(404); self.end_headers(); return
                data = json.dumps(body).encode()
                self.send_response(200)
                self.send_header("Content-Type", "application/json")
                self.send_header("Content-Length", str(len(data)))
                self.end_headers()
                self.wfile.write(data)

        self.httpd = ThreadingHTTPServer(("127.0.0.1", 0), H)
        self.port = self.httpd.server_address[1]
        self.issuer = f"http://127.0.0.1:{self.port}"
        threading.Thread(target=self.httpd.serve_forever, daemon=True).start()

    def mint(self, *, sub="operator-1", aud="evosql", ttl=3600,
             issuer=None, signing_key=None, kid=None):
        now = int(time.time())
        payload = {"iss": issuer or self.issuer, "sub": sub, "aud": aud,
                   "iat": now, "exp": now + ttl, "email": "op@example.com"}
        return jwt.encode(payload, signing_key or self.key, algorithm="RS256",
                          headers={"kid": kid or self.kid})

    def stop(self):
        self.httpd.shutdown()


# -- web server harness ------------------------------------------------------

def _serve():
    web._mcp = FakeServer()
    web._OIDC_JWKS_URI.clear()
    web._OIDC_CLIENTS.clear()
    web._RATE.clear()
    httpd = ThreadingHTTPServer(("127.0.0.1", 0), web.Handler)
    threading.Thread(target=httpd.serve_forever, daemon=True).start()
    return httpd, httpd.server_address[1]


def _code(port, token=None):
    req = urllib.request.Request(f"http://127.0.0.1:{port}/api/pending")
    if token:
        req.add_header("Authorization", "Bearer " + token)
    try:
        with urllib.request.urlopen(req, timeout=5) as r:
            return r.status
    except urllib.error.HTTPError as e:
        return e.code


passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _with_oidc(idp, fn, audience="evosql"):
    os.environ["EVOSQL_OIDC_ISSUER"] = idp.issuer
    os.environ["EVOSQL_OIDC_AUDIENCE"] = audience
    os.environ.pop("EVOSQL_WEB_TOKEN", None)
    httpd, port = _serve()
    try:
        fn(port)
    finally:
        httpd.shutdown()
        os.environ.pop("EVOSQL_OIDC_ISSUER", None)
        os.environ.pop("EVOSQL_OIDC_AUDIENCE", None)
        web._OIDC_JWKS_URI.clear(); web._OIDC_CLIENTS.clear()


def test_valid_token_accepted():
    idp = MockIdP()
    try:
        _with_oidc(idp, lambda port:
                   _assert(_code(port, idp.mint()) == 200, "valid OIDC token rejected"))
    finally:
        idp.stop()


def test_missing_token_rejected():
    idp = MockIdP()
    try:
        _with_oidc(idp, lambda port:
                   _assert(_code(port, None) == 401, "missing token not rejected"))
    finally:
        idp.stop()


def test_expired_token_rejected():
    idp = MockIdP()
    try:
        _with_oidc(idp, lambda port:
                   _assert(_code(port, idp.mint(ttl=-10)) == 401, "expired token accepted"))
    finally:
        idp.stop()


def test_wrong_audience_rejected():
    idp = MockIdP()
    try:
        _with_oidc(idp, lambda port:
                   _assert(_code(port, idp.mint(aud="some-other-app")) == 401,
                           "wrong-audience token accepted"))
    finally:
        idp.stop()


def test_wrong_issuer_rejected():
    idp = MockIdP()
    try:
        _with_oidc(idp, lambda port:
                   _assert(_code(port, idp.mint(issuer="http://evil.example")) == 401,
                           "wrong-issuer token accepted"))
    finally:
        idp.stop()


def test_forged_signature_rejected():
    idp = MockIdP()
    try:
        # sign with a DIFFERENT key the IdP's JWKS doesn't publish
        attacker = rsa.generate_private_key(public_exponent=65537, key_size=2048)
        _with_oidc(idp, lambda port:
                   _assert(_code(port, idp.mint(signing_key=attacker)) == 401,
                           "forged-signature token accepted"))
    finally:
        idp.stop()


def test_static_token_still_works_without_oidc():
    # OIDC not configured, static token path unchanged
    os.environ.pop("EVOSQL_OIDC_ISSUER", None)
    os.environ["EVOSQL_WEB_TOKEN"] = "sek"
    web._OIDC_JWKS_URI.clear(); web._OIDC_CLIENTS.clear()
    httpd, port = _serve()
    try:
        _assert(_code(port, "sek") == 200, "static token rejected")
        _assert(_code(port, "wrong") == 401, "wrong static token accepted")
    finally:
        httpd.shutdown()
        os.environ.pop("EVOSQL_WEB_TOKEN", None)
        web._RATE.clear()


def _assert(cond, msg):
    if not cond:
        raise AssertionError(msg)


if __name__ == "__main__":
    print("=== Operator SSO / OIDC bearer-JWT Tests ===")
    if not _HAVE_DEPS:
        print("  SKIP: PyJWT + cryptography not available "
              "(run under client/mcp-server-evosql/.venv)")
        sys.exit(0)

    run("valid_token_accepted", test_valid_token_accepted)
    run("missing_token_rejected", test_missing_token_rejected)
    run("expired_token_rejected", test_expired_token_rejected)
    run("wrong_audience_rejected", test_wrong_audience_rejected)
    run("wrong_issuer_rejected", test_wrong_issuer_rejected)
    run("forged_signature_rejected", test_forged_signature_rejected)
    run("static_token_still_works_without_oidc", test_static_token_still_works_without_oidc)

    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
