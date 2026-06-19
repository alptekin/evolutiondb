"""
test_audit — tenant-scoped audit of mutating tool calls (audit.py + the
_call_tool hook). Server-free via FakeBackend; fictional fixtures.

The privacy contract is the core assertion: audit rows carry identifiers and
lengths only — never fact/body/query text.
"""
from __future__ import annotations

import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import audit
from mcp_server_evosql.tenancy import Identity

NS = "alp_test"


def _ident(roles=("admin",), user=NS):
    return Identity("acme", user, "t_acme", "u_acme", roles=roles)


# ---------------------------------------------------------------- record
def test_record_whitelists_args_no_pii():
    b = FakeBackend()
    audit.record(b, _ident(), "save_memory", "ok",
                 args={"fact": "TOPSECRET medical note", "tags": ["health"]},
                 result={"ok": True, "key": "mem_1"})
    rows = b.rows(b.audit_store, NS)
    assert len(rows) == 1
    rec = next(iter(rows.values()))
    raw = json.dumps(rec)
    assert "TOPSECRET" not in raw                      # content never stored
    assert rec["tool"] == "save_memory" and rec["outcome"] == "ok"
    assert rec["args"]["fact_len"] == len("TOPSECRET medical note")
    assert rec["args"]["tags"] == ["health"]
    assert rec["result"] == {"key": "mem_1"}
    assert rec["tenant"] == "acme" and rec["user"] == NS
    assert rec["roles"] == ["admin"]


def test_record_queue_reply_omits_body():
    b = FakeBackend()
    audit.record(b, _ident(), "queue_reply", "ok",
                 args={"loop_key": "loop_1", "body": "dear someone, secret"})
    rec = next(iter(b.rows(b.audit_store, NS).values()))
    assert "secret" not in json.dumps(rec)
    assert rec["args"] == {"loop_key": "loop_1", "body_len": 20}


def test_trail_newest_first_and_prune_bounds():
    b = FakeBackend()
    for i in range(7):
        audit.record(b, _ident(), "forget", "ok", args={"key": f"mem_{i}"})
    t = audit.trail(b, NS, limit=3)
    assert len(t) == 3
    assert [r["args"]["key"] for r in t] == ["mem_6", "mem_5", "mem_4"]
    deleted = audit.prune(b, NS, keep=2)
    assert deleted == 5
    assert len(b.rows(b.audit_store, NS)) == 2


def test_record_is_best_effort():
    class Boom(FakeBackend):
        def _exec(self, sql):
            raise RuntimeError("db down")
    audit.record(Boom(), _ident(), "forget", "ok", args={"key": "k"})  # no raise


# ---------------------------------------------------------------- hook
class _ToolBackend(FakeBackend):
    """FakeBackend + the save() the save_memory branch calls."""

    def save(self, user_id, fact, tags=None, derived_from=None):
        self.put(self.memory, user_id, "mem_x", {"fact": fact})
        return "mem_x"


def _server(monkeypatch, backend):
    from mcp_server_evosql.server import MCPServer
    srv = MCPServer()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: backend)
    return srv


def test_call_tool_audits_ok_and_error(monkeypatch):
    b = _ToolBackend()
    srv = _server(monkeypatch, b)
    member = _ident(roles=("member",))
    out = srv._call_tool("save_memory", {"fact": "hello world"}, member)
    assert out["ok"] is True
    out2 = srv._call_tool("save_memory", {"fact": "   "}, member)  # validation error
    assert "error" in out2
    recs = sorted(b.rows(b.audit_store, NS).values(), key=lambda r: r["ts"])
    assert [r["outcome"] for r in recs] == ["ok", "error"]
    assert all(r["tool"] == "save_memory" for r in recs)
    assert "hello world" not in json.dumps(recs)       # content never stored


def test_call_tool_audits_denied(monkeypatch):
    b = _ToolBackend()
    srv = _server(monkeypatch, b)
    viewer = _ident(roles=("viewer",))
    out = srv._call_tool("save_memory", {"fact": "x"}, viewer)
    assert "permission denied" in out["error"]
    recs = list(b.rows(b.audit_store, NS).values())
    assert len(recs) == 1 and recs[0]["outcome"] == "denied"
    assert recs[0]["roles"] == ["viewer"]


def test_read_only_tools_are_not_audited(monkeypatch):
    b = _ToolBackend()
    b.recent = lambda user_id, limit: []               # the branch's dependency
    srv = _server(monkeypatch, b)
    out = srv._call_tool("recent_memories", {}, _ident(roles=("member",)))
    assert out["ok"] is True
    assert b.rows(b.audit_store, NS) == {}             # no audit row for reads


# ------------------------------------------------- auth / privilege events
# A small fictional principal carrier (mirrors tenancy._RoleAudit's shape:
# tenant/user/roles getattrs only, no credentials).
class _AuthIdent:
    def __init__(self, tenant="globex", user=NS, roles=("member",)):
        self.tenant_id = tenant
        self.user_id = user
        self.roles = tuple(roles)


# A fictional bearer-ish string and a recipient that must NEVER appear in a row.
_FAKE_TOKEN = "tok_zzz_fictional_secret_value_0000"
_FAKE_RECIPIENT = "nobody@example.invalid"


def test_record_auth_privacy_no_secret_substring():
    b = FakeBackend()
    # ref is a deliberately non-sensitive prefix-hash, NOT the token itself.
    audit.record_auth(b, _AuthIdent(), "auth.denied", "denied",
                      ref="ab12cd34ef56")
    rec = next(iter(b.rows(b.audit_store, NS).values()))
    raw = json.dumps(rec)
    assert _FAKE_TOKEN not in raw                       # token never stored
    assert _FAKE_RECIPIENT not in raw                   # recipient never stored
    assert "secret" not in raw
    assert rec["kind"] == "auth" and rec["event"] == "auth.denied"
    assert rec["outcome"] == "denied"
    assert rec["ref"] == "ab12cd34ef56"
    assert rec["tenant"] == "globex" and rec["roles"] == ["member"]


def test_record_privilege_target_is_identifier_only():
    b = FakeBackend()
    audit.record_privilege(b, _AuthIdent(roles=("admin",)),
                           "privilege.grant", "carol@globex")
    rec = next(iter(b.rows(b.audit_store, NS).values()))
    raw = json.dumps(rec)
    assert _FAKE_TOKEN not in raw and _FAKE_RECIPIENT not in raw
    assert rec["kind"] == "privilege"
    assert rec["action"] == "privilege.grant"
    assert rec["target"] == "carol@globex"
    assert rec["outcome"] == "ok"


def test_auth_outcome_is_constrained():
    b = FakeBackend()
    # An out-of-vocabulary outcome is coerced to a safe value, never free-form.
    audit.record_auth(b, _AuthIdent(), "auth.denied", "exception")
    audit.record_privilege(b, _AuthIdent(), "privilege.revoke", "dave@globex",
                           outcome="weird")
    outcomes = {r["outcome"] for r in b.rows(b.audit_store, NS).values()}
    assert outcomes <= {"ok", "denied"}                # constrained vocabulary
    # An unknown event/action is likewise coerced into the fixed vocabulary.
    b2 = FakeBackend()
    audit.record_auth(b2, _AuthIdent(), "auth.bogus", "denied")
    rec = next(iter(b2.rows(b2.audit_store, NS).values()))
    assert rec["event"] in ("auth.denied", "auth.resolve",
                            "connector.oauth_grant")


def test_auth_privilege_append_only_distinct_keys():
    b = FakeBackend()
    for i in range(5):
        audit.record_auth(b, _AuthIdent(), "auth.denied", "denied",
                          ref=f"h{i:04d}")
        audit.record_privilege(b, _AuthIdent(), "privilege.grant",
                               f"user_{i}@globex")
    store = b._rows.get(b.audit_store, {})
    keys = [k for (_ns, k) in store]
    assert len(keys) == 10                              # N calls -> N rows
    assert len(set(keys)) == 10                         # all keys distinct
    # Append-only: re-reading the same keys yields byte-identical values, and a
    # further write never mutates a prior row.
    before = {k: v for (ns, k), v in store.items()}
    audit.record_auth(b, _AuthIdent(), "auth.denied", "denied", ref="hZZZZ")
    after = b._rows.get(b.audit_store, {})
    for (ns, k), v in after.items():
        if k in before:
            assert before[k] == v                       # prior rows untouched
    assert len(after) == 11


def test_auth_privilege_best_effort_swallows_backend_error():
    class Boom(FakeBackend):
        def _exec(self, sql):
            raise RuntimeError("control-plane down")
    # Neither wrapper may propagate a backend failure into the auth flow.
    audit.record_auth(Boom(), _AuthIdent(), "auth.denied", "denied", ref="x")
    audit.record_privilege(Boom(), _AuthIdent(), "privilege.grant", "u@globex")


# ------------------------------------------------- wiring into tenancy.py
# Server-free: drive Registry/identity_for_token over a FakeBackend control
# plane, with EVOSQL_TENANT_SECRET set so multi-tenant resolution is active.
from mcp_server_evosql import tenancy


def _control_backend(monkeypatch):
    monkeypatch.setenv("EVOSQL_TENANT_SECRET", "fictional-test-secret")
    return FakeBackend()


def test_set_role_emits_privilege_audit(monkeypatch):
    admin = _control_backend(monkeypatch)
    reg = tenancy.Registry(admin)
    reg.ensure_store()
    reg.set_role("globex", "carol@globex", ("admin",))
    recs = list(admin.rows(admin.audit_store, "carol@globex").values())
    assert len(recs) == 1
    rec = recs[0]
    assert rec["kind"] == "privilege" and rec["action"] == "privilege.grant"
    assert rec["target"] == "carol@globex"
    assert rec["outcome"] == "ok"
    assert rec["roles"] == ["admin"]


def test_identity_for_token_denial_audits_when_tenant_known(monkeypatch):
    admin = _control_backend(monkeypatch)
    reg = tenancy.Registry(admin)
    reg.ensure_store()
    # Provision-lite: a tenant + an unroled user, then a bound token.
    reg.put_tenant({"tenant_id": "globex",
                    "db_name": tenancy.tenant_db_name("globex"),
                    "status": "active"})
    tok = "tok_fictional_unroled_user"
    reg.bind_subject(tok, "globex", "mallory@globex")     # no role record
    ident = tenancy.identity_for_token(tok, admin)
    assert ident is None                                  # fail-closed
    recs = list(admin.rows(admin.audit_store, "mallory@globex").values())
    assert len(recs) == 1 and recs[0]["event"] == "auth.denied"
    assert recs[0]["outcome"] == "denied"
    # The raw token must never appear in the audit row.
    assert tok not in json.dumps(recs[0])


def test_identity_for_token_unresolvable_skips_silently(monkeypatch):
    admin = _control_backend(monkeypatch)
    reg = tenancy.Registry(admin)
    reg.ensure_store()
    # An unknown token resolves to no subject -> no tenant -> no audit row.
    assert tenancy.identity_for_token("tok_unknown_fictional", admin) is None
    assert admin.rows(admin.audit_store) == {}


# ---------------------------------------------------------------- tamper-evidence
def test_chain_present_and_verifies():
    audit._CHAIN.clear()                       # isolate the process-level head cache
    b = FakeBackend()
    for i in range(5):
        audit.record(b, _ident(), "forget", "ok", args={"key": f"k{i}"})
    recs = list(b.rows(b.audit_store, NS).values())
    assert len(recs) == 5
    assert all("prev" in r and "hash" in r for r in recs)   # every row is chained
    v = audit.verify_chain(b, NS)
    assert v["ok"] and v["rows"] == 5 and v["broken_at"] is None, v


def test_chain_detects_content_tamper():
    audit._CHAIN.clear()
    b = FakeBackend()
    for i in range(4):
        audit.record(b, _ident(), "forget", "ok", args={"key": f"k{i}"})
    # Attacker edits a stored row's content but cannot recompute its hash.
    store = b._rows[b.audit_store]
    k = sorted(store.keys(), key=lambda nk: nk[1])[1]       # a non-first row
    rec = json.loads(store[k]); rec["outcome"] = "denied"   # flip a field
    store[k] = json.dumps(rec)
    res = audit.verify_chain(b, NS)
    assert not res["ok"] and res["reason"] == "content-altered", res


def test_chain_detects_deletion():
    audit._CHAIN.clear()
    b = FakeBackend()
    for i in range(5):
        audit.record(b, _ident(), "forget", "ok", args={"key": f"k{i}"})
    # Attacker removes a middle row -> the next row's prev no longer links.
    store = b._rows[b.audit_store]
    mid = sorted(store.keys(), key=lambda nk: nk[1])[2]
    del store[mid]
    res = audit.verify_chain(b, NS)
    assert not res["ok"] and res["reason"] == "link-broken", res


def test_chain_tolerates_prune_of_oldest():
    audit._CHAIN.clear()
    b = FakeBackend()
    for i in range(6):
        audit.record(b, _ident(), "forget", "ok", args={"key": f"k{i}"})
    # Pruning the OLDEST rows is legitimate; the new head's prev references a
    # pruned predecessor, which verify must accept.
    store = b._rows[b.audit_store]
    for k in sorted(store.keys(), key=lambda nk: nk[1])[:2]:
        del store[k]
    res = audit.verify_chain(b, NS)
    assert res["ok"] and res["rows"] == 4, res
