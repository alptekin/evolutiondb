"""
test_phase3_extras — PII masking at retrieval (pii_gate.py) + team approval
(the ADR-004 N-approver extension in outbox.py).

Contracts under test: the gate is OFF by default and FAIL-CLOSED when enabled
without the masker; with N approvers, one identity genuinely cannot send alone
(four-eyes), and an admin can list/approve another member's draft within the
same tenant. Server-free via FakeBackend; fictional fixtures.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

import pytest

from mcp_server_evosql import outbox, pii_gate
from mcp_server_evosql.tenancy import Identity

NS = "alp_test"


def _ident(roles=("member",), user=NS):
    return Identity("acme", user, "t_acme", "u_acme", roles=roles)


# ================================================================ PII gate
def test_mode_default_off_and_parsing(monkeypatch):
    monkeypatch.delenv("EVOSQL_PII_RETRIEVAL", raising=False)
    assert pii_gate.mode() == "off"
    monkeypatch.setenv("EVOSQL_PII_RETRIEVAL", "viewer")
    assert pii_gate.mode() == "viewer"
    monkeypatch.setenv("EVOSQL_PII_RETRIEVAL", "junk")
    assert pii_gate.mode() == "off"                     # unknown -> off


def test_applies_role_logic(monkeypatch):
    monkeypatch.setenv("EVOSQL_PII_RETRIEVAL", "viewer")
    assert pii_gate.applies(_ident(roles=("viewer",))) is True
    assert pii_gate.applies(_ident(roles=("member",))) is False
    assert pii_gate.applies(_ident(roles=("admin",))) is False
    monkeypatch.setenv("EVOSQL_PII_RETRIEVAL", "all")
    assert pii_gate.applies(_ident(roles=("admin",))) is True
    monkeypatch.delenv("EVOSQL_PII_RETRIEVAL", raising=False)
    assert pii_gate.applies(_ident(roles=("viewer",))) is False


def test_mask_records_masks_text_fields():
    pytest.importorskip("evolutiondb_pii")
    recs = [{"key": "mem_1", "fact": "call jane at jane.roe@example.com",
             "tags": ["x"], "score": 0.9}]
    out = pii_gate.mask_records(recs)
    assert out[0]["key"] == "mem_1" and out[0]["tags"] == ["x"]   # untouched
    assert "jane.roe@example.com" not in out[0]["fact"]           # masked
    assert recs[0]["fact"].endswith("example.com")                # original intact


def test_gate_fails_closed_without_masker(monkeypatch):
    monkeypatch.setenv("EVOSQL_PII_RETRIEVAL", "all")
    # poison the import so the masker is unavailable
    monkeypatch.setitem(sys.modules, "evolutiondb_pii", None)
    monkeypatch.setitem(sys.modules, "evolutiondb_pii.mask", None)
    with pytest.raises(RuntimeError, match="refusing to serve"):
        pii_gate.gate(_ident(roles=("viewer",)), [{"fact": "x"}])


def test_dispatch_masks_for_viewer_only(monkeypatch):
    pytest.importorskip("evolutiondb_pii")
    from mcp_server_evosql.server import MCPServer

    class _B(FakeBackend):
        def search(self, user_id, query, **kw):
            return [{"key": "mem_1",
                     "fact": "mail jane.roe@example.com about the audit"}]

        def log_query(self, *a, **k):
            pass

        def recent(self, user_id, limit):
            return [{"key": "mem_2", "fact": "call +1 555 0100 100"}]

    srv = MCPServer()
    b = _B()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: b)
    monkeypatch.setenv("EVOSQL_PII_RETRIEVAL", "viewer")
    viewer = _ident(roles=("viewer",))
    out = srv._call_tool("search_memory", {"query": "audit"}, viewer)
    assert out["ok"] and "jane.roe@example.com" not in out["results"][0]["fact"]
    member = _ident(roles=("member",))
    out2 = srv._call_tool("search_memory", {"query": "audit"}, member)
    assert "jane.roe@example.com" in out2["results"][0]["fact"]   # unmasked
    monkeypatch.delenv("EVOSQL_PII_RETRIEVAL", raising=False)
    out3 = srv._call_tool("search_memory", {"query": "audit"}, viewer)
    assert "jane.roe@example.com" in out3["results"][0]["fact"]   # off = raw


# ============================================================ team approval
def _queue(b, ns=NS, loop_key="loop_1"):
    return outbox.queue(b, ns, loop_key, "draft body", channel="gmail",
                        to="Jane Roe", to_email="jane.roe@example.com")


def test_single_approver_default_unchanged(monkeypatch):
    monkeypatch.delenv("EVOSQL_APPROVALS_REQUIRED", raising=False)
    b = FakeBackend()
    item = _queue(b)
    res = outbox.approve_send(b, NS, item["id"], approver=NS)
    assert res["ok"] and res["dry_run"] is True        # no transport -> dry-run


def test_two_approvers_required_blocks_solo(monkeypatch):
    monkeypatch.setenv("EVOSQL_APPROVALS_REQUIRED", "2")
    b = FakeBackend()
    item = _queue(b)
    r1 = outbox.approve_send(b, NS, item["id"], approver="alice@acme")
    assert r1["ok"] and r1["sent"] is False
    assert r1["approvals"] == 1 and r1["approvals_required"] == 2
    # the same identity cannot push it through alone
    r2 = outbox.approve_send(b, NS, item["id"], approver="alice@acme")
    assert not r2["ok"] and "already approved" in r2["error"]
    # item is still pending, approval recorded
    pend = outbox.list_pending(b, NS)
    assert pend and pend[0]["approvals"][0]["by"] == "alice@acme"
    # a second distinct identity completes the quorum -> delivery path runs
    r3 = outbox.approve_send(b, NS, item["id"], approver="bob@acme")
    assert r3["ok"] and r3["dry_run"] is True          # delivered (dry-run)
    assert len(r3["item"]["approvals"]) == 2


def test_find_namespace_and_list_all():
    b = FakeBackend()
    i1 = _queue(b, ns="alice@acme", loop_key="l1")
    _queue(b, ns="bob@acme", loop_key="l2")
    assert outbox.find_namespace(b, i1["id"]) == "alice@acme"
    assert outbox.find_namespace(b, "ob_missing") is None
    allp = outbox.list_pending_all(b)
    assert {p["namespace"] for p in allp} == {"alice@acme", "bob@acme"}


def test_admin_cross_namespace_approve_via_dispatch(monkeypatch):
    monkeypatch.setenv("EVOSQL_APPROVALS_REQUIRED", "2")
    from mcp_server_evosql.server import MCPServer
    srv = MCPServer()
    b = FakeBackend()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: b)
    member = _ident(roles=("member",), user="alice@acme")
    admin = _ident(roles=("admin",), user="boss@acme")

    item = _queue(b, ns="alice@acme")
    # member approves their own draft -> 1/2
    r1 = srv._call_tool("approve_send", {"item_id": item["id"]}, member)
    assert r1["ok"] and r1["approvals"] == 1
    # a non-admin in another namespace cannot reach it
    other = _ident(roles=("member",), user="carol@acme")
    r2 = srv._call_tool("approve_send", {"item_id": item["id"]}, other)
    assert not r2.get("ok")
    # the admin (different namespace) completes the quorum
    r3 = srv._call_tool("approve_send", {"item_id": item["id"]}, admin)
    assert r3["ok"] and r3.get("dry_run") is True
    by = [a["by"] for a in r3["item"]["approvals"]]
    assert by == ["alice@acme", "boss@acme"]


def test_admin_list_all_gate(monkeypatch):
    from mcp_server_evosql.server import MCPServer
    srv = MCPServer()
    b = FakeBackend()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: b)
    _queue(b, ns="alice@acme")
    member = _ident(roles=("member",), user="bob@acme")
    out = srv._call_tool("list_pending_replies", {"all": True}, member)
    assert "permission denied" in out["error"]
    admin = _ident(roles=("admin",), user="boss@acme")
    out2 = srv._call_tool("list_pending_replies", {"all": True}, admin)
    assert out2["ok"] and out2["pending"][0]["namespace"] == "alice@acme"