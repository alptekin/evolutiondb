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
