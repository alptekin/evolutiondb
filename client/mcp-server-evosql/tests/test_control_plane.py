"""
test_control_plane — the operator control-plane API (operator_auth + control_plane).

Server-free: a fake MCP whose _backend_for returns a per-database FakeBackend, an
injected ControlPlane, and a real ThreadingHTTPServer on an ephemeral port hit
over HTTP. Asserts operator-auth gating, the tenant-management round-trip
(provision/list/suspend/resume/token/tier/delete), suspend really inerts tokens
(identity_for_token), and DSAR export/erase.
"""
from __future__ import annotations

import json
import os
import sys
import threading
import urllib.error
import urllib.request

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-control-secret")

from _assistant_fakes import FakeBackend                                   # noqa: E402
from mcp_server_evosql import tenancy, operator_auth, control_plane        # noqa: E402

passed = failed = 0
TOKEN = "operator-secret-token-xyz"


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


class FakeMCP:
    """Backend factory: one FakeBackend per database (so admin/evosql and each
    tenant DB are isolated stores)."""
    def __init__(self):
        self.default_identity = tenancy.env_identity()
        self._backends = {}

    def _backend_for(self, identity):
        key = identity.db_name
        if key not in self._backends:
            self._backends[key] = FakeBackend(prefix=getattr(identity, "prefix", "mcp"))
        return self._backends[key]


# ---------------------------------------------------------------- operator_auth unit
def test_operator_auth_static_token(monkeyenv=None):
    os.environ["EVOSQL_CONTROL_TOKEN"] = TOKEN
    os.environ.pop("EVOSQL_OIDC_ISSUER", None)
    try:
        assert operator_auth.authorize_operator(TOKEN) is not None
        assert operator_auth.authorize_operator("wrong") is None
        assert operator_auth.authorize_operator("") is None
    finally:
        os.environ.pop("EVOSQL_CONTROL_TOKEN", None)


def test_operator_auth_oidc_allowlist():
    os.environ["EVOSQL_OIDC_ISSUER"] = "https://idp.example"
    os.environ["EVOSQL_CONTROL_OPERATORS"] = "ops@example.com,admin2"
    os.environ.pop("EVOSQL_CONTROL_TOKEN", None)
    orig = operator_auth._oidc_claims
    try:
        operator_auth._oidc_claims = lambda tok: {"sub": "ops@example.com"} if tok == "good" else None
        op = operator_auth.authorize_operator("good")
        assert op is not None and op.method == "oidc" and op.subject == "ops@example.com"
        # valid token but subject NOT on the allowlist -> refused
        operator_auth._oidc_claims = lambda tok: {"sub": "intruder@evil"}
        assert operator_auth.authorize_operator("good") is None
        # invalid token -> refused
        operator_auth._oidc_claims = lambda tok: None
        assert operator_auth.authorize_operator("bad") is None
    finally:
        operator_auth._oidc_claims = orig
        os.environ.pop("EVOSQL_OIDC_ISSUER", None)
        os.environ.pop("EVOSQL_CONTROL_OPERATORS", None)


def test_operator_auth_dev_open_loopback_only():
    os.environ.pop("EVOSQL_CONTROL_TOKEN", None)
    os.environ.pop("EVOSQL_OIDC_ISSUER", None)
    assert operator_auth.authorize_operator("", loopback=True) is not None
    assert operator_auth.authorize_operator("", loopback=False) is None


# ---------------------------------------------------------------- HTTP round-trip
class _Srv:
    def __init__(self):
        self.mcp = FakeMCP()
        self.cp = control_plane.ControlPlane(mcp=self.mcp)
        self.httpd = control_plane.make_server("127.0.0.1", 0, self.cp)
        self.port = self.httpd.server_address[1]
        self.t = threading.Thread(target=self.httpd.serve_forever, daemon=True)
        self.t.start()

    def close(self):
        self.httpd.shutdown()

    def req(self, method, path, body=None, token=TOKEN):
        url = f"http://127.0.0.1:{self.port}{path}"
        data = json.dumps(body).encode() if body is not None else None
        r = urllib.request.Request(url, data=data, method=method)
        if token:
            r.add_header("Authorization", f"Bearer {token}")
        if data is not None:
            r.add_header("Content-Type", "application/json")
        try:
            with urllib.request.urlopen(r, timeout=10) as resp:
                return resp.status, json.loads(resp.read().decode() or "{}")
        except urllib.error.HTTPError as e:
            return e.code, json.loads(e.read().decode() or "{}")


def test_http_auth_gate():
    os.environ["EVOSQL_CONTROL_TOKEN"] = TOKEN
    s = _Srv()
    try:
        code, _ = s.req("GET", "/api/tenants", token=None)
        assert code == 401, f"no token should be 401, got {code}"
        code, body = s.req("GET", "/api/tenants", token="nope")
        assert code == 401, f"wrong token should be 401, got {code}"
        code, body = s.req("GET", "/api/tenants")
        assert code == 200 and "tenants" in body
    finally:
        s.close(); os.environ.pop("EVOSQL_CONTROL_TOKEN", None)


def test_tenant_lifecycle_round_trip():
    os.environ["EVOSQL_CONTROL_TOKEN"] = TOKEN
    s = _Srv()
    try:
        # provision
        code, body = s.req("POST", "/api/tenants",
                           {"tenant_id": "acme", "name": "Acme Inc", "admin_user": "alice"})
        assert code == 200 and body["tenant"]["tenant_id"] == "acme"
        # list shows it
        code, body = s.req("GET", "/api/tenants")
        ids = [t["tenant_id"] for t in body["tenants"]]
        assert "acme" in ids and body["tenants"][0]["status"] == "active"
        # issue a token -> resolves to the tenant
        code, body = s.req("POST", "/api/tenants/acme/token", {"user_id": "alice"})
        assert code == 200 and body["token"]
        tok = body["token"]
        admin = s.cp.admin_backend()
        assert tenancy.identity_for_token(tok, admin) is not None
        # suspend -> token goes inert
        code, body = s.req("POST", "/api/tenants/acme/suspend")
        assert code == 200 and body["status"] == "suspended"
        assert tenancy.identity_for_token(tok, admin) is None, "suspended token still resolves"
        # resume -> token works again
        code, _ = s.req("POST", "/api/tenants/acme/resume")
        assert code == 200
        assert tenancy.identity_for_token(tok, admin) is not None
        # set tier -> persisted in registry meta
        code, body = s.req("POST", "/api/tenants/acme/tier", {"tier": "dedicated"})
        assert code == 200 and body["tier"] == "dedicated"
        assert s.cp.registry().get_tenant("acme")["tier"] == "dedicated"
        # delete requires confirm
        code, _ = s.req("DELETE", "/api/tenants/acme")
        assert code == 400, "delete without confirm should be refused"
        code, _ = s.req("DELETE", "/api/tenants/acme?confirm=1")
        assert code == 200
        code, body = s.req("GET", "/api/tenants")
        assert "acme" not in [t["tenant_id"] for t in body["tenants"]]
        # unknown tenant -> 404
        code, _ = s.req("POST", "/api/tenants/ghost/suspend")
        assert code == 404
    finally:
        s.close(); os.environ.pop("EVOSQL_CONTROL_TOKEN", None)


def test_dsar_export_and_erase():
    os.environ["EVOSQL_CONTROL_TOKEN"] = TOKEN
    s = _Srv()
    try:
        s.req("POST", "/api/tenants", {"tenant_id": "globex", "admin_user": "bob"})
        # seed some of bob's data into the tenant backend
        tb = s.cp.tenant_backend("globex", "bob")
        tb.put(tb.outbox_store, "bob", "o1", {"body_len": 3})
        tb.put(tb.entity_store, "bob", "e1", {"name_len": 4})
        code, body = s.req("POST", "/api/tenants/globex/dsar/export", {"user": "bob"})
        assert code == 200 and body["bundle"]["row_count"] == 2
        # erase requires confirm
        code, _ = s.req("POST", "/api/tenants/globex/dsar/erase", {"user": "bob"})
        assert code == 400
        code, body = s.req("POST", "/api/tenants/globex/dsar/erase",
                           {"user": "bob", "confirm": True})
        assert code == 200 and body["result"]["row_count"] >= 1
        # gone now
        code, body = s.req("POST", "/api/tenants/globex/dsar/export", {"user": "bob"})
        assert body["bundle"]["row_count"] == 0
    finally:
        s.close(); os.environ.pop("EVOSQL_CONTROL_TOKEN", None)


def test_connected_accounts_list_and_revoke():
    os.environ["EVOSQL_CONTROL_TOKEN"] = TOKEN
    s = _Srv()
    try:
        s.req("POST", "/api/tenants", {"tenant_id": "acme", "admin_user": "acme"})
        # seed two connector tokens for acme (namespace defaults to tenant_id)
        tb = s.cp.tenant_backend("acme", "acme")
        tb.put("mcp_tokens", "acme", "token:gmail", {"enc": "X", "updated": 111})
        tb.put("mcp_tokens", "acme", "token:slack", {"enc": "Y", "updated": 222})
        code, body = s.req("GET", "/api/tenants/acme/accounts")
        assert code == 200
        names = [a["connector"] for a in body["accounts"]]
        assert names == ["gmail", "slack"] and body["accounts"][0]["updated"] == 111
        # the encrypted blob is never surfaced
        assert "enc" not in json.dumps(body)
        # revoke gmail -> only slack remains
        code, _ = s.req("POST", "/api/tenants/acme/accounts/gmail/revoke")
        assert code == 200
        code, body = s.req("GET", "/api/tenants/acme/accounts")
        assert [a["connector"] for a in body["accounts"]] == ["slack"]
    finally:
        s.close(); os.environ.pop("EVOSQL_CONTROL_TOKEN", None)


def test_oauth_consents_list_and_revoke():
    os.environ["EVOSQL_CONTROL_TOKEN"] = TOKEN
    os.environ.pop("MCP_USER_ID", None)                   # -> namespace "default_user"
    s = _Srv()
    try:
        admin = s.cp.admin_backend()
        admin.put("mcp_oauth", "default_user", "consent:client-abc",
                  {"scope": "mcp", "approved_by": "ops", "expires": 9999999999})
        code, body = s.req("GET", "/api/consents")
        assert code == 200
        assert [c["client_id"] for c in body["consents"]] == ["client-abc"]
        assert body["consents"][0]["approved_by"] == "ops"
        # revoke -> gone
        code, _ = s.req("POST", "/api/consents/client-abc/revoke")
        assert code == 200
        code, body = s.req("GET", "/api/consents")
        assert body["consents"] == []
    finally:
        s.close(); os.environ.pop("EVOSQL_CONTROL_TOKEN", None)


def test_rotate_key_dedicated_only():
    os.environ["EVOSQL_CONTROL_TOKEN"] = TOKEN
    s = _Srv()
    try:
        s.req("POST", "/api/tenants", {"tenant_id": "crypto", "admin_user": "admin"})

        # a fake dedicated backend so no real cluster is needed
        class FakeK8s:
            def __init__(self):
                self.calls = []

            def rotate_key(self, tid, *, rotate_dek=True):
                self.calls.append((tid, rotate_dek))
                return {"ok": True, "passphrase_rotated": True,
                        "dek_rotated": rotate_dek, "needs_reconcile": False,
                        "detail": ""}
        fake = FakeK8s()
        s.cp._dedicated_backend = lambda: fake

        # a shared-tier tenant cannot rotate (one engine key for the whole pool)
        code, body = s.req("POST", "/api/tenants/crypto/rotate-key",
                           {"rotate_dek": True})
        assert code == 400 and "dedicated" in body.get("error", ""), (code, body)

        # promote to dedicated, then rotation succeeds end to end
        s.req("POST", "/api/tenants/crypto/tier", {"tier": "dedicated"})
        code, body = s.req("POST", "/api/tenants/crypto/rotate-key",
                           {"rotate_dek": True})
        assert code == 200 and body["ok"] and body["passphrase_rotated"] \
            and body["dek_rotated"], (code, body)
        assert fake.calls == [("crypto", True)]

        # rotate_dek=False is threaded through to the backend
        code, body = s.req("POST", "/api/tenants/crypto/rotate-key",
                           {"rotate_dek": False})
        assert code == 200 and body["dek_rotated"] is False
        assert fake.calls[-1] == ("crypto", False)

        # unknown tenant -> 404
        code, _ = s.req("POST", "/api/tenants/nope/rotate-key", {})
        assert code == 404

        # operator gate: no token -> 401 (never a tenant credential)
        code, _ = s.req("POST", "/api/tenants/crypto/rotate-key", {}, token=None)
        assert code == 401
    finally:
        s.close(); os.environ.pop("EVOSQL_CONTROL_TOKEN", None)


def test_rotate_key_unconfigured_backend_errors():
    # with no EVOSQL_TENANT_IMAGE, the real _dedicated_backend refuses cleanly
    os.environ["EVOSQL_CONTROL_TOKEN"] = TOKEN
    _saved_img = os.environ.pop("EVOSQL_TENANT_IMAGE", None)
    s = _Srv()
    try:
        s.req("POST", "/api/tenants", {"tenant_id": "dedi", "admin_user": "admin"})
        s.req("POST", "/api/tenants/dedi/tier", {"tier": "dedicated"})
        code, body = s.req("POST", "/api/tenants/dedi/rotate-key", {})
        assert code == 400 and "not configured" in body.get("error", ""), (code, body)
    finally:
        s.close(); os.environ.pop("EVOSQL_CONTROL_TOKEN", None)
        if _saved_img is not None:
            os.environ["EVOSQL_TENANT_IMAGE"] = _saved_img


if __name__ == "__main__":
    print("=== Phase 2 governance: operator control-plane UI ===")
    run("operator_auth_static_token", test_operator_auth_static_token)
    run("operator_auth_oidc_allowlist", test_operator_auth_oidc_allowlist)
    run("operator_auth_dev_open_loopback_only", test_operator_auth_dev_open_loopback_only)
    run("http_auth_gate", test_http_auth_gate)
    run("tenant_lifecycle_round_trip", test_tenant_lifecycle_round_trip)
    run("dsar_export_and_erase", test_dsar_export_and_erase)
    run("connected_accounts_list_and_revoke", test_connected_accounts_list_and_revoke)
    run("oauth_consents_list_and_revoke", test_oauth_consents_list_and_revoke)
    run("rotate_key_dedicated_only", test_rotate_key_dedicated_only)
    run("rotate_key_unconfigured_backend_errors", test_rotate_key_unconfigured_backend_errors)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
