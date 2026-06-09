"""
test_outbox — the send/approval loop state machine (outbox.py).

Server-free (FakeBackend). The invariants that matter for a human-in-the-loop
action gate: queue never sends; approve_send is the only path that can; delivery
dry-runs unless a transport is wired AND EVOSQL_SEND_ENABLED is set; approving an
already-sent item never re-sends; rejecting a sent item errors; and re-drafting a
loop upserts rather than stacking duplicate pending sends.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import outbox

NS = "alp_test"


def _clean():
    os.environ.pop("EVOSQL_SEND_ENABLED", None)
    outbox.TRANSPORTS.clear()


def _q(b, loop="loop_1", body="Merhaba, ekte.", **kw):
    kw.setdefault("channel", "gmail")
    kw.setdefault("source", "gmail")
    kw.setdefault("to", "Ulaş")
    return outbox.queue(b, NS, loop, body, **kw)


# ---------------------------------------------------------------- queue
def test_queue_creates_pending_and_sends_nothing():
    _clean()
    b = FakeBackend()
    it = _q(b)
    assert it["status"] == "pending"
    assert it["to"] == "Ulaş" and it["channel"] == "gmail"
    assert "sent_at" not in it
    assert [h["status"] for h in it["history"]] == ["pending"]


def test_queue_requires_body():
    _clean()
    b = FakeBackend()
    try:
        outbox.queue(b, NS, "loop_1", "   ")
        assert False, "expected ValueError"
    except ValueError:
        pass


def test_queue_upserts_by_loop_key():
    _clean()
    b = FakeBackend()
    a = _q(b, body="ilk")
    c = _q(b, body="düzeltilmiş")
    assert a["id"] == c["id"]                       # same item, not a duplicate
    assert c["body"] == "düzeltilmiş"
    assert len(outbox.list_pending(b, NS)) == 1


# ---------------------------------------------------------------- list
def test_list_pending_excludes_sent_and_rejected():
    _clean()
    b = FakeBackend()
    keep = _q(b, loop="a")
    rej = _q(b, loop="b")
    outbox.reject(b, NS, rej["id"])
    ids = {it["id"] for it in outbox.list_pending(b, NS)}
    assert ids == {keep["id"]}


# ---------------------------------------------------------------- approve
def test_approve_dry_runs_when_send_disabled():
    _clean()
    b = FakeBackend()
    it = _q(b)
    r = outbox.approve_send(b, NS, it["id"])
    assert r["ok"] and not r["sent"] and r["dry_run"]
    assert outbox._load(b, NS, it["id"])["status"] == "approved"   # held, retriable
    assert "EVOSQL_SEND_ENABLED" in r["detail"]


def test_approve_no_transport_dry_runs_even_when_enabled():
    _clean()
    os.environ["EVOSQL_SEND_ENABLED"] = "1"          # enabled, but nothing wired
    b = FakeBackend()
    r = outbox.approve_send(b, NS, _q(b)["id"])
    assert not r["sent"] and r["dry_run"]
    assert "no transport" in r["detail"]
    _clean()


def test_approve_delivers_with_transport():
    _clean()
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    outbox.TRANSPORTS["gmail"] = lambda item: {"id": "sent-123"}
    b = FakeBackend()
    it = _q(b)
    r = outbox.approve_send(b, NS, it["id"])
    assert r["sent"] and not r["dry_run"]
    saved = outbox._load(b, NS, it["id"])
    assert saved["status"] == "sent" and saved["send_result"]["id"] == "sent-123"
    assert "sent_at" in saved
    _clean()


def test_send_closes_the_open_loop():
    _clean()
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    outbox.TRANSPORTS["gmail"] = lambda item: {"id": "x"}
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_1",
          {"status": "open", "direction": "awaiting_me", "counterparty": "Ulaş"})
    r = outbox.approve_send(b, NS, _q(b, loop="loop_1")["id"])
    assert r["sent"] and r["loop_resolved"] is True
    loop = b.rows(b.loops_store, NS)["loop_1"]
    assert loop["status"] == "resolved" and loop["resolved_by"] == "sent_reply"
    _clean()


def test_dry_run_does_not_close_the_loop():
    _clean()                                              # send disabled -> dry-run
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_1",
          {"status": "open", "direction": "awaiting_me", "counterparty": "Ulaş"})
    r = outbox.approve_send(b, NS, _q(b, loop="loop_1")["id"])
    assert not r["sent"] and r["loop_resolved"] is False
    assert b.rows(b.loops_store, NS)["loop_1"]["status"] == "open"   # untouched


def test_approve_is_idempotent_on_sent():
    _clean()
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    calls = {"n": 0}

    def _t(item):
        calls["n"] += 1
        return {"id": "x"}
    outbox.TRANSPORTS["gmail"] = _t
    b = FakeBackend()
    it = _q(b)
    outbox.approve_send(b, NS, it["id"])
    again = outbox.approve_send(b, NS, it["id"])       # must NOT re-send
    assert calls["n"] == 1
    assert "already sent" in again["note"]
    _clean()


def test_approve_transport_failure_holds_item():
    _clean()
    os.environ["EVOSQL_SEND_ENABLED"] = "1"

    def _boom(item):
        raise RuntimeError("smtp down")
    outbox.TRANSPORTS["gmail"] = _boom
    b = FakeBackend()
    it = _q(b)
    r = outbox.approve_send(b, NS, it["id"])
    assert not r["sent"]
    saved = outbox._load(b, NS, it["id"])
    assert saved["status"] == "approved"               # not lost; retriable
    assert "smtp down" in saved["send_result"]["error"]
    _clean()


def test_approve_unknown_and_rejected_error():
    _clean()
    b = FakeBackend()
    assert not outbox.approve_send(b, NS, "nope")["ok"]
    it = _q(b)
    outbox.reject(b, NS, it["id"])
    r = outbox.approve_send(b, NS, it["id"])
    assert not r["ok"] and "rejected" in r["error"]


# ---------------------------------------------------------------- reject
def test_reject_pending_then_cannot_send():
    _clean()
    b = FakeBackend()
    it = _q(b)
    assert outbox.reject(b, NS, it["id"])["ok"]
    assert outbox._load(b, NS, it["id"])["status"] == "rejected"


def test_reject_sent_item_errors():
    _clean()
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    outbox.TRANSPORTS["gmail"] = lambda item: {"id": "x"}
    b = FakeBackend()
    it = _q(b)
    outbox.approve_send(b, NS, it["id"])
    r = outbox.reject(b, NS, it["id"])
    assert not r["ok"] and "already sent" in r["error"]
    _clean()


def test_reject_unknown_errors():
    _clean()
    assert not outbox.reject(FakeBackend(), NS, "nope")["ok"]


# ---------------------------------------------------------------- MCP wiring
def test_action_tools_registered():
    from mcp_server_evosql import server
    names = {t["name"] for t in server.TOOLS}
    assert {"queue_reply", "list_pending_replies", "approve_send",
            "reject_reply"} <= names
    approve = next(t for t in server.TOOLS if t["name"] == "approve_send")
    assert approve["inputSchema"]["required"] == ["item_id"]


# ---------------------------------------------------------------- enrichment
def test_queue_carries_to_email_and_thread():
    _clean()
    b = FakeBackend()
    it = outbox.queue(b, NS, "loop_1", "cevap", channel="gmail", source="gmail",
                      to="Ulaş", to_email="ulas@corp.com", thread_id="T9")
    assert it["to_email"] == "ulas@corp.com" and it["thread_id"] == "T9"
    # upsert keeps prior to_email/thread when re-queued without them
    it2 = outbox.queue(b, NS, "loop_1", "düzeltme", channel="gmail", source="gmail")
    assert it2["to_email"] == "ulas@corp.com" and it2["thread_id"] == "T9"


def test_resolve_recipient_picks_inbound_address():
    _clean()
    b = FakeBackend()
    b.put(b.memory, NS, "gmail_0",
          {"source": "gmail", "thread_id": "T9", "from": "me@x.com",
           "labels": "SENT"})                            # outbound — skip
    b.put(b.memory, NS, "gmail_1",
          {"source": "gmail", "thread_id": "T9",
           "from": "Ulaş <ulas@corp.com>", "labels": "INBOX"})
    addr = outbox.resolve_recipient(b, NS, {"source": "gmail", "thread_key": "T9"})
    assert addr == "ulas@corp.com"
    # teams routes by chat_id, not an address -> None
    assert outbox.resolve_recipient(b, NS, {"source": "teams"}) is None


def test_resolve_recipient_outlook_matches_subject():
    _clean()
    b = FakeBackend()
    b.put(b.memory, NS, "outlook_0",
          {"source": "outlook", "subject": "Bütçe", "from": "me@x.com",
           "folder": "Sent Items"})                      # outbound — skip
    b.put(b.memory, NS, "outlook_1",
          {"source": "outlook", "subject": "Re: Bütçe",
           "from": "Boss <boss@corp.com>", "folder": "Inbox"})
    # the loop's thread_key is the normalised subject
    addr = outbox.resolve_recipient(b, NS, {"source": "outlook",
                                            "thread_key": "Bütçe"})
    assert addr == "boss@corp.com"


def test_recipient_for_routes_per_channel():
    _clean()
    b = FakeBackend()
    b.put(b.memory, NS, "gmail_1",
          {"source": "gmail", "thread_id": "T1", "from": "Ulaş <ulas@x.com>",
           "labels": "INBOX"})
    b.put(b.memory, NS, "imessage_1",
          {"source": "imessage", "chat_id": "C1", "chat": "Deniz",
           "handle": "+90555", "is_from_me": False})
    # gmail -> email in to_email
    g = outbox.recipient_for(b, NS, {"source": "gmail", "thread_key": "T1",
                                     "counterparty": "Ulaş"})
    assert g["to_email"] == "ulas@x.com" and g["to"] == "Ulaş"
    # imessage -> handle in `to`, no email
    im = outbox.recipient_for(b, NS, {"source": "imessage", "thread_key": "C1",
                                      "counterparty": "Deniz"})
    assert im["to"] == "+90555" and im["to_email"] is None
    # teams/slack -> display name, routed by thread_id (no address)
    tm = outbox.recipient_for(b, NS, {"source": "teams", "counterparty": "Can"})
    assert tm == {"to": "Can", "to_email": None}


# ---------------------------------------------------------------- CLI
def test_cli_list_and_dry_run_approve():
    _clean()
    b = FakeBackend()
    it = _q(b)
    assert outbox._cli(b, NS, ["list"]) == 0
    assert outbox._cli(b, NS, ["approve", it["id"]]) == 0      # dry-run, ok
    assert outbox._load(b, NS, it["id"])["status"] == "approved"


def test_cli_reject_and_errors():
    _clean()
    b = FakeBackend()
    it = _q(b)
    assert outbox._cli(b, NS, ["reject", it["id"]]) == 0
    assert outbox._cli(b, NS, ["approve", "nope"]) == 1        # unknown -> nonzero
    assert outbox._cli(b, NS, ["bogus"]) == 2                  # usage -> 2


def main():
    tests = [test_queue_creates_pending_and_sends_nothing, test_queue_requires_body,
             test_queue_upserts_by_loop_key,
             test_list_pending_excludes_sent_and_rejected,
             test_approve_dry_runs_when_send_disabled,
             test_approve_no_transport_dry_runs_even_when_enabled,
             test_approve_delivers_with_transport, test_send_closes_the_open_loop,
             test_dry_run_does_not_close_the_loop, test_approve_is_idempotent_on_sent,
             test_approve_transport_failure_holds_item,
             test_approve_unknown_and_rejected_error,
             test_reject_pending_then_cannot_send, test_reject_sent_item_errors,
             test_reject_unknown_errors, test_action_tools_registered,
             test_queue_carries_to_email_and_thread,
             test_resolve_recipient_picks_inbound_address,
             test_resolve_recipient_outlook_matches_subject,
             test_recipient_for_routes_per_channel,
             test_cli_list_and_dry_run_approve, test_cli_reject_and_errors]
    try:
        for fn in tests:
            fn()
            print(f"  ok  {fn.__name__}")
    finally:
        _clean()
    print("OK — outbox send/approval loop")
    return 0


if __name__ == "__main__":
    sys.exit(main())
