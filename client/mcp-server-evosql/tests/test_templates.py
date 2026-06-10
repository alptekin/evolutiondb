"""
test_templates — per-tenant templates + apply-to-outbox (templates.py).

The contract under test: templates render STRICTLY (a missing placeholder is
an error, never a blank), and apply only ever QUEUES a pending outbox draft —
nothing is sent. Server-free via FakeBackend; fictional fixtures.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import outbox, templates

NS = "alp_test"


def _loop(key="loop_1", **kw):
    base = {"kind": "open_loop", "status": "open", "direction": "awaiting_me",
            "counterparty": "Jane Roe", "subject": "Q3 numbers",
            "what": "send the Q3 figures", "snippet": "send the Q3 figures",
            "source": "gmail", "thread_key": "th_9", "age_days": 3,
            "actionable": True}
    base.update(kw)
    return key, base


# ---------------------------------------------------------------- store
def test_create_get_list_with_placeholders():
    b = FakeBackend()
    out = templates.create(b, NS, "followup",
                           "Hi {counterparty}, any update on {topic}?",
                           channel="gmail", subject="Following up")
    assert out["ok"] and out["placeholders"] == ["counterparty", "topic"]
    tpl = templates.get(b, NS, "followup")
    assert tpl["channel"] == "gmail" and tpl["subject"] == "Following up"
    listed = templates.list_all(b, NS)
    assert [t["name"] for t in listed] == ["followup"]


def test_create_upserts_and_keeps_created():
    b = FakeBackend()
    templates.create(b, NS, "t1", "v1 {x}")
    first = templates.get(b, NS, "t1")
    out = templates.create(b, NS, "t1", "v2 no placeholders")
    assert out["updated"] is True
    cur = templates.get(b, NS, "t1")
    assert cur["body"] == "v2 no placeholders"
    assert cur["created"] == first["created"]
    assert cur["placeholders"] == []


def test_create_validates_name_and_body():
    b = FakeBackend()
    assert "error" in templates.create(b, NS, "bad name!", "x")
    assert "error" in templates.create(b, NS, "ok-name", "   ")


def test_delete():
    b = FakeBackend()
    templates.create(b, NS, "gone", "x")
    assert templates.delete(b, NS, "gone") is True
    assert templates.get(b, NS, "gone") is None
    assert templates.delete(b, NS, "gone") is False     # already gone


# ---------------------------------------------------------------- render
def test_render_is_strict_about_missing_vars():
    out = templates.render("Hi {a}, re {b}", {"a": "x"})
    assert out["missing"] == ["b"] and "error" in out
    ok = templates.render("Hi {a}", {"a": "Jane"})
    assert ok["text"] == "Hi Jane"


# ---------------------------------------------------------------- apply
def test_apply_to_loop_queues_pending_draft():
    b = FakeBackend()
    k, loop = _loop()
    b.put(b.loops_store, NS, k, loop)
    templates.create(b, NS, "nudge", "Hi {counterparty} — gentle nudge on "
                                     "{what}. Anything blocking?")
    out = templates.apply(b, NS, "nudge", loop_key=k)
    assert out["ok"] is True
    assert "Jane Roe" in out["body"] and "Q3 figures" in out["body"]
    assert out["channel"] == "gmail"
    pend = outbox.list_pending(b, NS)
    assert len(pend) == 1 and pend[0]["status"] == "pending"
    assert outbox.TRANSPORTS == {}                      # nothing can send


def test_apply_without_loop_needs_to_and_channel():
    b = FakeBackend()
    templates.create(b, NS, "welcome", "Welcome, {who}!")   # no channel
    out = templates.apply(b, NS, "welcome", variables={"who": "Sam"})
    assert "error" in out and "`to`" in out["error"]
    out2 = templates.apply(b, NS, "welcome", to="sam@example.com",
                           variables={"who": "Sam"})
    assert "error" in out2 and "channel" in out2["error"]
    templates.create(b, NS, "welcome2", "Welcome, {who}!", channel="gmail")
    out3 = templates.apply(b, NS, "welcome2", to="sam@example.com",
                           variables={"who": "Sam"})
    assert out3["ok"] and out3["body"] == "Welcome, Sam!"
    assert out3["to"] == "sam@example.com"


def test_apply_missing_vars_and_unknowns_error():
    b = FakeBackend()
    templates.create(b, NS, "needsvar", "Re {topic}", channel="gmail")
    out = templates.apply(b, NS, "needsvar", to="a@x.com")
    assert out.get("missing") == ["topic"]
    assert "error" in templates.apply(b, NS, "nope", to="a@x.com")
    k, _ = _loop()
    assert "error" in templates.apply(b, NS, "needsvar", loop_key="missing_loop")


def test_explicit_vars_override_loop_vars():
    b = FakeBackend()
    k, loop = _loop()
    b.put(b.loops_store, NS, k, loop)
    templates.create(b, NS, "ov", "To {counterparty}")
    out = templates.apply(b, NS, "ov", loop_key=k,
                          variables={"counterparty": "Ms. Roe"})
    assert out["body"] == "To Ms. Roe"


# ---------------------------------------------------------------- RBAC
def test_viewer_denied_member_allowed(monkeypatch):
    from mcp_server_evosql.server import MCPServer
    from mcp_server_evosql.tenancy import Identity
    srv = MCPServer()
    b = FakeBackend()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: b)
    viewer = Identity("acme", NS, "t_acme", "u_acme", roles=("viewer",))
    out = srv._call_tool("create_template", {"name": "t", "body": "x"}, viewer)
    assert "permission denied" in out["error"]
    # list is read-only -> allowed
    out2 = srv._call_tool("list_templates", {}, viewer)
    assert out2["ok"] is True
    member = Identity("acme", NS, "t_acme", "u_acme", roles=("member",))
    out3 = srv._call_tool("create_template",
                          {"name": "t", "body": "hello {x}"}, member)
    assert out3["ok"] is True
    # the mutating call left an audit row; the body text did not
    import json as _json
    recs = list(b.rows(b.audit_store, NS).values())
    tool_recs = [r for r in recs if r["tool"] == "create_template"
                 and r["outcome"] == "ok"]
    assert tool_recs and "hello" not in _json.dumps(tool_recs)