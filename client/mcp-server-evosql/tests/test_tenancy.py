"""
test_tenancy — multi-tenant foundation (Phase 0).

Two layers are covered:

  * Unit (server-free): the ``tenancy`` module — Identity, the env-pinned
    default identity, the per-tenant database-name derivation, identifier
    safety, and the backend_key that keys the per-tenant connection registry.

  * Server-free wiring: request-scoped Identity threads through
    ``MCPServer._call_tool`` to the backend's ``user_id`` (mem_namespace), and
    the in-tenant RBAC gate denies a ``viewer`` the mutating tools while
    allowing reads. A recording fake backend stands in for the database, so
    these run without a live engine.

The engine-enforced DATABASE-level isolation (two tenants, cross-tenant read
denied 42501) needs a live server and lives behind a skip guard at the bottom.
All fixtures are fictional English placeholders (repo rule: no real personal
data, English/language-neutral source).
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import pytest

from mcp_server_evosql import tenancy
from mcp_server_evosql.tenancy import Identity


# ---------------------------------------------------------------- unit
def test_env_identity_defaults():
    ident = tenancy.env_identity()
    assert ident.tenant_id == "default"
    assert ident.user_id == "default_user"
    assert ident.db_name == "evosql"
    assert ident.db_user == "admin"
    assert ident.roles == ("admin",)
    # legacy path must NOT issue USE (preserves pre-multi-tenant behaviour)
    assert ident.issue_use is False


def test_env_identity_reads_environment(monkeypatch):
    monkeypatch.setenv("MCP_TENANT_ID", "acme")
    monkeypatch.setenv("MCP_USER_ID", "alice@acme")
    monkeypatch.setenv("EVOSQL_DATABASE", "t_acme")
    monkeypatch.setenv("EVOSQL_USER", "u_acme")
    monkeypatch.setenv("MCP_STORE_PREFIX", "acme_mem")
    ident = tenancy.env_identity()
    assert ident.tenant_id == "acme"
    assert ident.user_id == "alice@acme"
    assert ident.db_name == "t_acme"
    assert ident.db_user == "u_acme"
    assert ident.prefix == "acme_mem"


def test_backend_key_separates_tenants():
    a = Identity("acme", "u", "t_acme", "u_acme", prefix="m")
    b = Identity("beta", "u", "t_beta", "u_beta", prefix="m")
    # same in-tenant user id, different DB user/name -> different connections
    assert a.backend_key != b.backend_key
    # same connection coordinates collapse to one backend (same tenant)
    a2 = Identity("acme", "other_user", "t_acme", "u_acme", prefix="m")
    assert a.backend_key == a2.backend_key
    # defence in depth: identical DB coords but a DIFFERENT tenant_id must NOT
    # share a cached backend (the critical-finding guard)
    spoof = Identity("evil", "u", "t_acme", "u_acme", prefix="m")
    assert spoof.backend_key != a.backend_key


def test_tenant_db_name_slugifies_and_bounds():
    name = tenancy.tenant_db_name("acme")
    assert name.startswith("t_acme_") and tenancy.is_valid_identifier(name)
    # punctuation/space collapse to underscore; result is a valid identifier
    name2 = tenancy.tenant_db_name("Acme Corp! (EU)")
    assert tenancy.is_valid_identifier(name2)
    assert name2.startswith("t_")
    # empty / junk still yields a valid name
    assert tenancy.is_valid_identifier(tenancy.tenant_db_name(""))


def test_identifiers_are_injective_under_slug_collision():
    # tenant ids that collapse to the same lossy slug must STILL get distinct
    # db name / user / store prefix (the critical isolation finding). A constant
    # or pure-slug derivation would alias these onto one database+user+prefix.
    colliding = ["acme.com", "acme_com", "acme-com", "acme com", "acme/com"]
    names = {tenancy.tenant_db_name(t) for t in colliding}
    users = {tenancy.tenant_db_user(t) for t in colliding}
    prefixes = {tenancy.tenant_store_prefix(t) for t in colliding}
    assert len(names) == len(colliding), names
    assert len(users) == len(colliding), users
    assert len(prefixes) == len(colliding), prefixes
    for t in colliding:
        assert tenancy.is_valid_identifier(tenancy.tenant_db_name(t))
        assert tenancy.is_valid_identifier(tenancy.tenant_db_user(t))
        assert tenancy.is_valid_identifier(tenancy.tenant_store_prefix(t))
    # deterministic
    assert tenancy.tenant_db_name("acme.com") == tenancy.tenant_db_name("acme.com")


def test_identifier_safety_rejects_injection():
    assert tenancy.is_valid_identifier("t_acme")
    assert not tenancy.is_valid_identifier("t_acme; DROP DATABASE evosql")
    assert not tenancy.is_valid_identifier("t acme")
    assert not tenancy.is_valid_identifier("")
    assert not tenancy.is_valid_identifier("1abc")   # cannot start with a digit


def test_has_role():
    ident = Identity("acme", "u", "t_acme", "u_acme", roles=("member",))
    assert ident.has_role("member")
    assert ident.has_role("admin", "member")
    assert not ident.has_role("admin")


# ---------------------------------------------------------------- wiring
class _RecordingBackend:
    """Records (op, user_id, ...) so a test can assert the request-scoped
    identity reached the backend. Implements just the methods the exercised
    tools touch."""

    def __init__(self):
        self.calls = []

    def save(self, user_id, fact, tags=None, derived_from=None):
        self.calls.append(("save", user_id, fact))
        return "mem_test"

    def search(self, user_id, query, **kw):
        self.calls.append(("search", user_id, query))
        return []

    def log_query(self, *a, **k):
        pass

    def recent(self, user_id, limit):
        self.calls.append(("recent", user_id, limit))
        return []


def _server():
    from mcp_server_evosql.server import MCPServer
    return MCPServer()


def test_identity_threads_user_id_to_backend(monkeypatch):
    srv = _server()
    fake = _RecordingBackend()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: fake)
    ident = Identity("acme", "alice@acme", "t_acme", "u_acme", roles=("member",))
    out = srv._call_tool("save_memory", {"fact": "Quarterly review on Friday."},
                         ident)
    assert out["ok"] is True
    assert out["user_id"] == "alice@acme"
    assert fake.calls[0] == ("save", "alice@acme", "Quarterly review on Friday.")


def test_default_identity_used_when_none(monkeypatch):
    srv = _server()
    fake = _RecordingBackend()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: fake)
    srv._call_tool("recent_memories", {}, None)
    assert fake.calls[0][:2] == ("recent", srv.default_identity.user_id)


def test_viewer_is_denied_mutations(monkeypatch):
    srv = _server()
    fake = _RecordingBackend()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: fake)
    viewer = Identity("acme", "vic@acme", "t_acme", "u_acme", roles=("viewer",))
    out = srv._call_tool("save_memory", {"fact": "x"}, viewer)
    assert "error" in out and "permission denied" in out["error"]
    # RBAC short-circuits before the backend is touched
    assert fake.calls == []


def test_viewer_may_read(monkeypatch):
    srv = _server()
    fake = _RecordingBackend()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: fake)
    viewer = Identity("acme", "vic@acme", "t_acme", "u_acme", roles=("viewer",))
    out = srv._call_tool("search_memory", {"query": "review"}, viewer)
    assert out["ok"] is True
    assert fake.calls[0] == ("search", "vic@acme", "review")


def test_member_and_admin_may_mutate(monkeypatch):
    srv = _server()
    for roles in (("member",), ("admin",), ("admin", "member")):
        fake = _RecordingBackend()
        monkeypatch.setattr(srv, "_backend_for", lambda ident: fake)
        ident = Identity("acme", "u@acme", "t_acme", "u_acme", roles=roles)
        out = srv._call_tool("save_memory", {"fact": "ok"}, ident)
        assert out.get("ok") is True, roles


# ------------------------------------------------------ live engine (opt-in)
# These provision real tenants (CREATE DATABASE/USER/GRANT) and prove the
# engine enforces the cross-tenant boundary. They need a live EvolutionDB and a
# tenant secret; the runner sets EVOSQL_TENANCY_LIVE=1, EVOSQL_TENANT_SECRET,
# and the EVOSQL_* admin connection. Skipped otherwise.
_LIVE = bool(os.environ.get("EVOSQL_TENANCY_LIVE"))
liveonly = pytest.mark.skipif(not _LIVE, reason="set EVOSQL_TENANCY_LIVE=1 + a live server")


@pytest.fixture(scope="module")
def live():
    if not _LIVE:
        pytest.skip("set EVOSQL_TENANCY_LIVE=1 + a live server")
    os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-tenant-secret")
    from mcp_server_evosql.server import MCPServer
    srv = MCPServer()
    admin = srv._backend_for(srv.default_identity)
    # clean slate (idempotent even on a fresh DB)
    for tid in ("acme", "globex"):
        tenancy.deprovision_tenant(admin, tid)
    tenancy.provision_tenant(admin, "acme",
                             users=[("alice@acme", ("admin",)),
                                    ("vic@acme", ("viewer",))], name="Acme Corp")
    tenancy.provision_tenant(admin, "globex",
                             users=[("bob@globex", ("admin",))], name="Globex Inc")
    yield srv, admin
    for tid in ("acme", "globex"):
        tenancy.deprovision_tenant(admin, tid)


@liveonly
def test_provision_persists_registry(live):
    srv, admin = live
    reg = tenancy.Registry(admin)
    meta = reg.get_tenant("acme")
    # identifiers are injective (hash-suffixed), so assert via the deriver
    assert meta and meta["db_name"] == tenancy.tenant_db_name("acme")
    assert meta["db_user"] == tenancy.tenant_db_user("acme")
    assert reg.get_roles("acme", "alice@acme") == ("admin",)
    assert {t["tenant_id"] for t in reg.list_tenants()} >= {"acme", "globex"}


@liveonly
def test_token_resolves_to_identity(live):
    srv, admin = live
    tok = tenancy.issue_token(admin, "acme", "alice@acme")
    ident = srv.resolve_identity(tok)
    assert ident is not None
    assert ident.tenant_id == "acme" and ident.user_id == "alice@acme"
    assert ident.roles == ("admin",) and ident.issue_use is True
    assert ident.db_name == tenancy.tenant_db_name("acme")
    assert ident.db_user == tenancy.tenant_db_user("acme")
    # unknown + revoked tokens do not resolve
    assert srv.resolve_identity("not-a-real-token") is None
    tenancy.Registry(admin).revoke_subject(tok)
    assert srv.resolve_identity(tok) is None


@liveonly
def test_token_for_unroled_user_is_inert(live):
    # fail-closed: a token bound to a user with NO role record must not resolve
    # to a default 'member' identity.
    srv, admin = live
    tok = tenancy.issue_token(admin, "acme", "stranger@acme")  # no role granted
    assert srv.resolve_identity(tok) is None


@liveonly
def test_deprovisioned_tenant_token_is_inert(live):
    # fail-closed: after a tenant is deprovisioned its still-unexpired tokens
    # become inert (get_tenant gate), even though teardown does not enumerate
    # and revoke every binding.
    srv, admin = live
    tenancy.provision_tenant(admin, "temp_co", users=[("u@temp", ("admin",))])
    tok = tenancy.issue_token(admin, "temp_co", "u@temp")
    assert srv.resolve_identity(tok) is not None
    tenancy.deprovision_tenant(admin, "temp_co")
    assert srv.resolve_identity(tok) is None


@liveonly
def test_data_is_engine_isolated_between_tenants(live):
    srv, admin = live
    ta = tenancy.for_tenant("acme", "alice@acme", ("admin",))
    tb = tenancy.for_tenant("globex", "bob@globex", ("admin",))
    ba = srv._backend_for(ta)
    bb = srv._backend_for(tb)
    ba.save("alice@acme", "Project Falcon roadmap milestone", ["plan"])
    bb.save("bob@globex", "Project Condor merger timeline", ["plan"])

    ra = [r["fact"] for r in ba.search("alice@acme", "roadmap milestone", limit=10)]
    rb = [r["fact"] for r in bb.search("bob@globex", "merger timeline", limit=10)]
    assert any("Falcon" in f for f in ra), ra
    assert not any("Condor" in f for f in ra), "Acme must not see Globex data"
    assert any("Condor" in f for f in rb), rb
    assert not any("Falcon" in f for f in rb), "Globex must not see Acme data"


@liveonly
def test_cross_tenant_read_is_denied_by_engine(live):
    srv, admin = live
    ta = tenancy.for_tenant("acme", "alice@acme", ("admin",))
    tb = tenancy.for_tenant("globex", "bob@globex", ("admin",))
    # ensure both tenants have their store + a row
    srv._backend_for(ta).save("alice@acme", "Acme private note", ["x"])
    srv._backend_for(tb).save("bob@globex", "Globex private note", ["x"])

    import psycopg
    # connect AS tenant A's DB user, then try to reach tenant B's database
    conn = psycopg.connect(host=srv.host, port=srv.port,
                           user=ta.db_user, password=ta.db_password,
                           dbname="evosql", autocommit=True, connect_timeout=5)
    try:
        cur = conn.cursor()
        cur.execute(f"USE {tb.db_name}")          # USE itself is not gated
        denied = False
        try:
            cur.execute(f"SELECT mem_value FROM __mem_{tb.prefix}_mem")
            cur.fetchall()
        except Exception as exc:                  # engine must refuse
            s = str(exc).lower()
            denied = ("42501" in str(exc) or "denied" in s
                      or "does not exist" in s or "permission" in s)
        assert denied, "tenant A's DB user must be denied reading tenant B's DB"
    finally:
        conn.close()


@liveonly
def test_rbac_viewer_token_denied_end_to_end(live):
    srv, admin = live
    tok = tenancy.issue_token(admin, "acme", "vic@acme", roles=("viewer",))
    ident = srv.resolve_identity(tok)
    assert ident is not None and ident.has_role("viewer")
    denied = srv._call_tool("save_memory", {"fact": "should not persist"}, ident)
    assert "error" in denied and "permission denied" in denied["error"]
    allowed = srv._call_tool("search_memory", {"query": "anything"}, ident)
    assert allowed.get("ok") is True


@liveonly
def test_scheduler_runs_each_tenant_isolated(live):
    # the scheduler discovers tenants from the registry and runs each tenant's
    # jobs in the tenant's own database; job state lands in the tenant DB, not
    # the control plane.
    from mcp_server_evosql import scheduler
    srv, admin = live
    by_tenant = scheduler.run_due_all(admin, only="outbox_flush", force=True)
    assert set(by_tenant) >= {"acme", "globex"}
    for tid in ("acme", "globex"):
        recs = by_tenant[tid]
        assert any(r["job"] == "outbox_flush" and r["last_status"] == "ok"
                   for r in recs), (tid, recs)
    # state was written into each tenant's OWN job_runs store...
    acme_b = scheduler._tenant_backend({"tenant_id": "acme"})
    assert scheduler._state(acme_b, "outbox_flush") is not None
    # ...and NOT into the control-plane (admin/evosql) backend
    assert scheduler._state(admin, "outbox_flush") is None
