"""
test_rules — the Phase-4 rule engine (rules.py): trigger -> template ->
queued DRAFT, never a send.

The runaway-protection contract is the core of the suite: a pending draft is
never stomped, a human's sent/reject silences the rule for the cool-down, and
the scheduler job is a no-op without enabled rules. Server-free via
FakeBackend; fictional fixtures.
"""
from __future__ import annotations

import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import outbox, rules, templates

NS = "alp_test"


def _loop(key, *, age=10, direction="awaiting_them", source="gmail", **kw):
    base = {"kind": "open_loop", "status": "open", "direction": direction,
            "counterparty": "Jane Roe", "subject": "Q3 numbers",
            "what": "the Q3 figures", "snippet": "the Q3 figures",
            "source": source, "thread_key": f"th_{key}", "age_days": age,
            "actionable": True}
    base.update(kw)
    return base


def _setup(b, *, min_age=7, direction="awaiting_them", **rule_kw):
    templates.create(b, NS, "nudge", "Hi {counterparty} — nudge on {what}?")
    out = rules.create(b, NS, "sla", "nudge",
                       {"kind": "loop_idle", "direction": direction,
                        "min_age_days": min_age}, **rule_kw)
    assert out.get("ok"), out
    return out


# ---------------------------------------------------------------- store
def test_create_validates_template_and_trigger():
    b = FakeBackend()
    assert "error" in rules.create(b, NS, "r", "ghost",
                                   {"kind": "loop_idle",
                                    "direction": "awaiting_them",
                                    "min_age_days": 1})
    templates.create(b, NS, "t", "x")
    assert "error" in rules.create(b, NS, "r", "t",
                                   {"kind": "weird", "direction": "awaiting_them",
                                    "min_age_days": 1})
    assert "error" in rules.create(b, NS, "r", "t",
                                   {"kind": "loop_idle", "direction": "sideways",
                                    "min_age_days": 1})
    assert "error" in rules.create(b, NS, "r", "t",
                                   {"kind": "loop_idle",
                                    "direction": "awaiting_them",
                                    "min_age_days": -1})
    ok = rules.create(b, NS, "r", "t", {"kind": "loop_idle",
                                        "direction": "awaiting_them",
                                        "min_age_days": 3})
    assert ok["ok"] and [r["name"] for r in rules.list_all(b, NS)] == ["r"]
    assert rules.delete(b, NS, "r") is True
    assert rules.delete(b, NS, "r") is False


# ---------------------------------------------------------------- engine
def test_fires_on_idle_loop_and_queues_pending():
    b = FakeBackend()
    _setup(b)
    b.put(b.loops_store, NS, "loop_old", _loop("old", age=10))
    b.put(b.loops_store, NS, "loop_new", _loop("new", age=2))     # too young
    b.put(b.loops_store, NS, "loop_dir", _loop("dir", age=10,
                                               direction="awaiting_me"))
    out = rules.evaluate(b, NS)
    assert [f["loop_key"] for f in out["fired"]] == ["loop_old"]
    pend = outbox.list_pending(b, NS)
    assert len(pend) == 1 and pend[0]["status"] == "pending"
    assert outbox.TRANSPORTS == {}                                # never sends


def test_pending_draft_is_never_stomped():
    b = FakeBackend()
    _setup(b)
    b.put(b.loops_store, NS, "loop_old", _loop("old"))
    rules.evaluate(b, NS)
    item = outbox.list_pending(b, NS)[0]
    # second evaluation: the same loop is blocked, the item is untouched
    out2 = rules.evaluate(b, NS)
    assert out2["fired"] == [] and out2["skipped"] == 1
    again = outbox.list_pending(b, NS)[0]
    assert again["id"] == item["id"]


def test_rejected_draft_silences_rule_for_cooldown():
    b = FakeBackend()
    _setup(b, cooldown_days=7)
    b.put(b.loops_store, NS, "loop_old", _loop("old"))
    rules.evaluate(b, NS)
    item = outbox.list_pending(b, NS)[0]
    outbox.reject(b, NS, item["id"])
    out = rules.evaluate(b, NS)                  # within cool-down -> skipped
    assert out["fired"] == [] and out["skipped"] == 1
    assert outbox.list_pending(b, NS) == []


def test_sent_draft_respects_cooldown_then_refires():
    b = FakeBackend()
    _setup(b, cooldown_days=7)
    b.put(b.loops_store, NS, "loop_old", _loop("old"))
    rules.evaluate(b, NS)
    item = outbox.list_pending(b, NS)[0]
    # simulate a send 8 days ago (cool-down expired)
    item["status"] = "sent"
    item["sent_ts"] = time.time() - 8 * 86400
    from mcp_server_evosql.outbox import _save
    _save(b, NS, item)
    out = rules.evaluate(b, NS)
    assert len(out["fired"]) == 1                # re-fires after the quiet period


def test_source_filter_and_disabled_rule():
    b = FakeBackend()
    templates.create(b, NS, "nudge", "Hi {counterparty}")
    rules.create(b, NS, "gmail-only", "nudge",
                 {"kind": "loop_idle", "direction": "awaiting_them",
                  "min_age_days": 1, "source": "gmail"})
    b.put(b.loops_store, NS, "loop_slack", _loop("s", source="slack"))
    assert rules.evaluate(b, NS)["fired"] == []
    b.put(b.loops_store, NS, "loop_mail", _loop("m", source="gmail"))
    assert len(rules.evaluate(b, NS)["fired"]) == 1
    # disabled -> nothing, even with matches
    rules.create(b, NS, "gmail-only", "nudge",
                 {"kind": "loop_idle", "direction": "awaiting_them",
                  "min_age_days": 1, "source": "gmail"}, enabled=False)
    b2 = outbox.list_pending(b, NS)
    out = rules.evaluate(b, NS)
    assert out["rules"] == 0 and out["fired"] == []
    assert outbox.list_pending(b, NS) == b2


def test_dry_run_previews_without_queueing():
    b = FakeBackend()
    _setup(b)
    b.put(b.loops_store, NS, "loop_old", _loop("old"))
    out = rules.evaluate(b, NS, dry_run=True)
    assert len(out["fired"]) == 1 and out["fired"][0]["dry_run"] is True
    assert outbox.list_pending(b, NS) == []


def test_job_is_noop_without_rules():
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_old", _loop("old"))
    assert rules.job_rules(b, NS) == 0
    assert outbox.list_pending(b, NS) == []


# ---------------------------------------------------------------- RBAC
def test_viewer_denied_member_allowed(monkeypatch):
    from mcp_server_evosql.server import MCPServer
    from mcp_server_evosql.tenancy import Identity
    srv = MCPServer()
    b = FakeBackend()
    monkeypatch.setattr(srv, "_backend_for", lambda ident: b)
    templates.create(b, NS, "nudge", "Hi")
    viewer = Identity("acme", NS, "t_acme", "u_acme", roles=("viewer",))
    out = srv._call_tool("create_rule",
                         {"name": "r", "template": "nudge",
                          "direction": "awaiting_them", "min_age_days": 3},
                         viewer)
    assert "permission denied" in out["error"]
    assert srv._call_tool("list_rules", {}, viewer)["ok"] is True
    member = Identity("acme", NS, "t_acme", "u_acme", roles=("member",))
    out2 = srv._call_tool("create_rule",
                          {"name": "r", "template": "nudge",
                           "direction": "awaiting_them", "min_age_days": 3},
                          member)
    assert out2["ok"] is True
    out3 = srv._call_tool("run_rules", {"dry_run": True}, member)
    assert out3["ok"] is True