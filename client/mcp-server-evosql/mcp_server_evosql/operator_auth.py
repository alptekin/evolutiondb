"""
operator_auth — authenticate the OPERATOR (superuser) of the control plane.

The tenant-facing transports authenticate TENANTS (a bearer token resolves to a
tenant Identity via the registry). The control plane is different: it manages ALL
tenants, so it must authenticate a small set of trusted OPERATORS and refuse
everyone else — a tenant's token must NEVER reach control-plane actions.

Two methods, OIDC preferred (the operator's IdP enforces MFA), a static token as
a machine-to-machine fallback — the same shape the agent web UI already uses,
plus an operator allowlist so a valid IdP login is not automatically an operator:

  EVOSQL_OIDC_ISSUER / _AUDIENCE / _JWKS_URI   the operator IdP (RS256 + JWKS)
  EVOSQL_CONTROL_OPERATORS                     comma list of allowed `sub`/`email`
                                               claims (REQUIRED for OIDC access)
  EVOSQL_CONTROL_TOKEN                          static superuser token (fallback)

FAIL-CLOSED: OIDC configured but PyJWT missing -> reject; OIDC token valid but the
subject is not on the operator allowlist (or the allowlist is empty) -> reject.
Open ONLY when neither method is configured AND the bind is loopback (dev).
"""
from __future__ import annotations

import hmac
import os
import sys
import threading
from dataclasses import dataclass
from typing import Optional

_OIDC_LOCK = threading.Lock()
_OIDC_JWKS_URI: dict = {}
_OIDC_CLIENTS: dict = {}


@dataclass(frozen=True)
class OperatorPrincipal:
    """An authenticated control-plane operator. ``subject`` identifies who (an
    OIDC sub/email, or "static"/"dev"); ``method`` is how they authenticated.
    Used as the DSAR operator identity and in control-plane audit rows."""
    subject: str
    method: str          # "oidc" | "static" | "dev"

    # audit's identity-field reader expects these getattrs.
    @property
    def tenant_id(self) -> str:
        return "_control"

    @property
    def user_id(self) -> str:
        return self.subject

    @property
    def roles(self):
        return ("operator",)


def _control_token() -> str:
    return os.environ.get("EVOSQL_CONTROL_TOKEN", "")


def _operators() -> set:
    return {x.strip().lower()
            for x in (os.environ.get("EVOSQL_CONTROL_OPERATORS") or "").split(",")
            if x.strip()}


def _oidc_issuer() -> str:
    return os.environ.get("EVOSQL_OIDC_ISSUER", "").rstrip("/")


def oidc_enabled() -> bool:
    return bool(_oidc_issuer())


def _oidc_jwks_uri(issuer: str) -> str:
    override = os.environ.get("EVOSQL_OIDC_JWKS_URI", "")
    if override:
        return override
    with _OIDC_LOCK:
        if issuer in _OIDC_JWKS_URI:
            return _OIDC_JWKS_URI[issuer]
    import json
    import urllib.request
    with urllib.request.urlopen(
            issuer + "/.well-known/openid-configuration", timeout=5) as r:
        doc = json.loads(r.read().decode())
    jwks_uri = doc.get("jwks_uri", "")
    with _OIDC_LOCK:
        _OIDC_JWKS_URI[issuer] = jwks_uri
    return jwks_uri


def _oidc_claims(token: str) -> Optional[dict]:
    """Verify a bearer JWT against the configured OIDC issuer and return its
    claims, or None on any failure (signature/issuer/audience/expiry)."""
    issuer = _oidc_issuer()
    if not issuer or not token:
        return None
    try:
        import jwt
        from jwt import PyJWKClient
    except ImportError:
        sys.stderr.write("WARNING: EVOSQL_OIDC_ISSUER is set but PyJWT is not "
                         "installed (pip install 'pyjwt[crypto]'); rejecting "
                         "operator OIDC tokens.\n")
        return None
    try:
        jwks_uri = _oidc_jwks_uri(issuer)
        if not jwks_uri:
            return None
        with _OIDC_LOCK:
            client = _OIDC_CLIENTS.get(jwks_uri)
            if client is None:
                client = PyJWKClient(jwks_uri)
                _OIDC_CLIENTS[jwks_uri] = client
        signing_key = client.get_signing_key_from_jwt(token)
        audience = os.environ.get("EVOSQL_OIDC_AUDIENCE", "") or None
        return jwt.decode(token, signing_key.key, algorithms=["RS256"],
                          issuer=issuer, audience=audience,
                          options={"require": ["exp", "iss"],
                                   "verify_aud": bool(audience)})
    except Exception:
        return None


def authorize_operator(bearer: str, *, loopback: bool = False
                       ) -> Optional[OperatorPrincipal]:
    """Resolve a presented bearer credential to an OperatorPrincipal, or None to
    refuse. ``bearer`` is the raw token (no "Bearer " prefix)."""
    tok = _control_token()
    # 1) static superuser token (constant-time)
    if tok and bearer and hmac.compare_digest(bearer, tok):
        return OperatorPrincipal("static", "static")
    # 2) OIDC operator (valid JWT AND subject on the allowlist)
    if oidc_enabled() and bearer:
        claims = _oidc_claims(bearer)
        if claims is not None:
            subject = str(claims.get("sub") or claims.get("email") or "").lower()
            ops = _operators()
            if subject and subject in ops:
                return OperatorPrincipal(subject, "oidc")
            # A valid IdP login is NOT automatically an operator — fail closed
            # when the allowlist is empty or the subject is not on it.
        return None
    # 3) dev-open ONLY when nothing is configured and we're on loopback
    if not tok and not oidc_enabled() and loopback:
        return OperatorPrincipal("dev", "dev")
    return None


def auth_summary() -> str:
    """Human-readable description of the active operator-auth mode (for the
    startup banner)."""
    if oidc_enabled():
        base = f"OIDC operators ({_oidc_issuer()})"
        return base + (" + static token" if _control_token() else "")
    if _control_token():
        return "static EVOSQL_CONTROL_TOKEN"
    return "OPEN (no EVOSQL_CONTROL_TOKEN / EVOSQL_OIDC_ISSUER)"
