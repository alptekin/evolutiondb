#!/usr/bin/env python3
"""
_mock_idp.py — a tiny, self-contained OpenID Connect provider for testing.

Used by the kind stack smoke test to prove the agent's OIDC SSO works on a real
cluster: it serves the standard discovery document + a JWKS, and (a test-only
convenience) a `/mint` endpoint that hands out a signed JWT. A real IdP
(Keycloak/Entra/Okta) replaces this; the agent validates identically.

  python3 _mock_idp.py serve 8080 <issuer-url>

Endpoints:
  GET /.well-known/openid-configuration   -> {issuer, jwks_uri}
  GET /jwks                               -> public JWKS (one RS256 key)
  GET /mint?aud=<a>[&forge=1][&ttl=<s>]   -> a signed JWT (forge=1 signs with a
                                             throwaway key the JWKS omits)

Requires PyJWT + cryptography (present in the agent image).
"""
import json
import sys
import time
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from urllib.parse import urlparse, parse_qs

import jwt
from jwt.algorithms import RSAAlgorithm
from cryptography.hazmat.primitives.asymmetric import rsa

_KEY = rsa.generate_private_key(public_exponent=65537, key_size=2048)
_FORGE_KEY = rsa.generate_private_key(public_exponent=65537, key_size=2048)
_KID = "mock-idp-key-1"
_JWK = json.loads(RSAAlgorithm.to_jwk(_KEY.public_key()))
_JWK.update({"kid": _KID, "use": "sig", "alg": "RS256"})
_JWKS = {"keys": [_JWK]}

ISSUER = sys.argv[3] if len(sys.argv) > 3 else "http://127.0.0.1:8080"


class H(BaseHTTPRequestHandler):
    def log_message(self, *a):
        pass

    def _send(self, obj, code=200):
        data = json.dumps(obj).encode()
        self.send_response(code)
        self.send_header("Content-Type", "application/json")
        self.send_header("Content-Length", str(len(data)))
        self.end_headers()
        self.wfile.write(data)

    def do_GET(self):
        p = urlparse(self.path)
        if p.path.startswith("/.well-known/openid-configuration"):
            self._send({"issuer": ISSUER, "jwks_uri": ISSUER + "/jwks"})
        elif p.path.startswith("/jwks"):
            self._send(_JWKS)
        elif p.path.startswith("/mint"):
            q = parse_qs(p.query)
            aud = q.get("aud", ["evolutiondb"])[0]
            forge = q.get("forge", ["0"])[0] in ("1", "true")
            ttl = int(q.get("ttl", ["3600"])[0])
            now = int(time.time())
            payload = {"iss": ISSUER, "sub": "operator-1", "aud": aud,
                       "iat": now, "exp": now + ttl, "email": "op@example.com"}
            token = jwt.encode(payload, _FORGE_KEY if forge else _KEY,
                               algorithm="RS256", headers={"kid": _KID})
            self._send({"token": token})
        else:
            self._send({"error": "not found"}, 404)


if __name__ == "__main__":
    port = int(sys.argv[2]) if len(sys.argv) > 2 else 8080
    ThreadingHTTPServer(("0.0.0.0", port), H).serve_forever()
