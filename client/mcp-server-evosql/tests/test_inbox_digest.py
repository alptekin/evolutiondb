"""
test_inbox_digest — inbox_digest.collect() windows the primary store's email
rows to a date range and summarizes RECEIVED ones with reply-status (an inbound
is "replied" if a later SENT message shares its thread) + per-sender totals.
Server-free via FakeBackend.
"""
from __future__ import annotations

import os
import sys
from datetime import datetime, timezone

_TESTS = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(_TESTS))
sys.path.insert(0, _TESTS)

from _assistant_fakes import FakeBackend                       # noqa: E402
from mcp_server_evosql import inbox_digest                     # noqa: E402

passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _ms(y, mo, d, h=9):
    return int(datetime(y, mo, d, h, tzinfo=timezone.utc).timestamp() * 1000)


def _seed(b, ns):
    # Alice: inbound (in window) + my SENT reply later in the SAME thread -> replied
    b.put(b.memory, ns, "gmail_1", {"source": "gmail", "from": "Alice <a@x.com>",
          "subject": "Q3 report", "labels": "INBOX", "thread_id": "T1",
          "internal_date_ms": _ms(2026, 6, 16, 9)})
    b.put(b.memory, ns, "gmail_1r", {"source": "gmail", "from": "me <me@x.com>",
          "subject": "Re: Q3 report", "labels": "SENT", "thread_id": "T1",
          "internal_date_ms": _ms(2026, 6, 16, 10)})
    # Bob: inbound, no reply (in window) -> unreplied
    b.put(b.memory, ns, "gmail_2", {"source": "gmail", "from": "Bob <b@x.com>",
          "subject": "Quick question", "labels": "INBOX", "thread_id": "T2",
          "internal_date_ms": _ms(2026, 6, 17, 11)})
    # Carol: outlook inbound (in window), no reply -> unreplied
    b.put(b.memory, ns, "outlook_1", {"source": "outlook", "from": "Carol <c@x.com>",
          "subject": "Invoice", "folder": "inbox",
          "received_at": "2026-06-18T08:00:00Z"})
    # Dave: inbound but BEFORE the window -> excluded
    b.put(b.memory, ns, "gmail_old", {"source": "gmail", "from": "Dave <d@x.com>",
          "subject": "old thing", "labels": "INBOX", "thread_id": "T9",
          "internal_date_ms": _ms(2026, 6, 1, 9)})
    # a non-email row -> excluded
    b.put(b.memory, ns, "teams_1", {"source": "teams", "text": "hi",
          "chat_id": "C1", "created_at": "2026-06-16T09:00:00Z"})


def test_digest_window_reply_and_totals():
    b = FakeBackend(); ns = "alptekin_topal"; _seed(b, ns)
    out = inbox_digest.collect(b, ns, since="2026-06-15", until="2026-06-21")
    assert out["ok"] is True, out
    # 3 received emails in window (Alice, Bob, Carol); Dave (old) + teams excluded
    assert out["total"] == 3, out
    senders = {m["from"]: m for m in out["messages"]}
    assert set(senders) == {"Alice", "Bob", "Carol"}, senders
    assert senders["Alice"]["replied"] is True            # SENT reply in thread
    assert senders["Bob"]["replied"] is False
    assert senders["Carol"]["replied"] is False
    assert out["replied"] == 1 and out["unreplied"] == 2
    # per-sender totals
    by = {s["sender"]: s for s in out["by_sender"]}
    assert by["Alice"]["count"] == 1 and by["Alice"]["replied"] == 1
    assert by["Bob"]["count"] == 1 and by["Bob"]["unreplied"] == 1
    # subjects + dates surfaced
    assert senders["Alice"]["subject"] == "Q3 report"
    assert senders["Carol"]["date"] == "2026-06-18"
    # messages sorted ascending by time
    dates = [m["date"] for m in out["messages"]]
    assert dates == sorted(dates), dates


def test_empty_inbox_is_ok():
    b = FakeBackend()
    out = inbox_digest.collect(b, "nobody", since="2026-06-15", until="2026-06-21")
    assert out["ok"] is True and out["total"] == 0 and out["messages"] == []


def test_resolve_range_last_week_is_prior_mon_sun():
    # 2026-06-22 is a Monday -> last_week = the prior Mon..Sun (06-15..06-22)
    now = datetime(2026, 6, 22, 12, 0, tzinfo=timezone.utc)
    start, end, label = inbox_digest.resolve_range("last_week", now=now)
    assert label == "last week"
    assert datetime.fromtimestamp(start, timezone.utc).strftime("%Y-%m-%d") == "2026-06-15"
    assert datetime.fromtimestamp(end, timezone.utc).strftime("%Y-%m-%d") == "2026-06-22"


# --- handled cascade: "answered by ANYONE, on ANY channel" ------------------
_W = dict(since="2026-06-15", until="2026-06-21")        # window [06-15, 06-22)


def _gmail(b, ns, key, frm, thread, day, h=9, labels="INBOX", subj="x", snip=""):
    b.put(b.memory, ns, key, {"source": "gmail", "from": frm, "subject": subj,
          "labels": labels, "thread_id": thread, "snippet": snip,
          "internal_date_ms": _ms(2026, 6, day, h)})


def _by_from(out, name, day=None):
    xs = [m for m in out["messages"] if m["from"] == name
          and (day is None or m["date"] == f"2026-06-{day:02d}")]
    assert xs, (name, day, out["messages"])
    return xs[0]


def test_colleague_reply_is_handled_not_replied():
    # Alice writes T5; Carol (a different human) replies-all later; I never reply.
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "a", "Alice <a@x.com>", "T5", 16, subj="Plan")
    _gmail(b, ns, "c", "Carol <c@x.com>", "T5", 17, subj="Re: Plan")
    out = inbox_digest.collect(b, ns, **_W)
    alice = _by_from(out, "Alice", 16)
    assert alice["status"] == "replied_by_colleague", alice
    assert alice["replied"] is False and alice["handled"] is True
    assert alice["maybe"] is False and alice["by_whom"] == "Carol"
    assert alice["via_channel"] == "gmail"
    assert out["replied"] == 0 and out["handled"] >= 1   # legacy replied untouched


def test_same_sender_followup_does_not_count():
    # A chaser from the SAME person is not a colleague reply.
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Bob <b@x.com>", "T6", 16, subj="Q")
    _gmail(b, ns, "g2", "Bob <b@x.com>", "T6", 17, subj="Re: Q any update?")
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Bob", 16)["status"] == "open"


def test_auto_responder_is_not_a_colleague():
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Alice <a@x.com>", "T7", 16, subj="Hi")
    _gmail(b, ns, "g2", "noreply@desk.com", "T7", 17, subj="Auto",
           snip="do not reply, ticket opened")
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Alice", 16)["status"] == "open"


def test_cross_channel_mention_is_handled():
    # A Teams message with the same person that MENTIONS an off-channel resolution
    # closes the email (weak/confirm). Bare presence alone does not (next test).
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Jane Doe <jane@acme.com>", "T8", 16, subj="Budget")
    b.put(b.memory, ns, "tm", {"source": "teams", "chat_type": "oneOnOne",
          "chat_name": "Jane Doe", "chat_id": "19:jane",
          "text": "telefonda görüştük, hallettik",
          "created_at": "2026-06-17T10:00:00Z"})
    out = inbox_digest.collect(b, ns, **_W)
    jane = _by_from(out, "Jane Doe", 16)
    assert jane["status"] == "handled_elsewhere", jane
    assert jane["maybe"] is True and jane["handled"] is True
    assert jane["replied"] is False and jane["via_channel"] == "teams"
    assert jane["by_whom"] == "Jane Doe" and out["maybe_handled"] >= 1


def test_bare_cross_channel_presence_stays_open():
    # Just having a 1:1 chat with someone after their email — with NO mention of
    # resolving this topic — is not evidence; the email stays open.
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Jane Doe <jane@acme.com>", "T8b", 16, subj="Budget")
    b.put(b.memory, ns, "tm", {"source": "teams", "chat_type": "oneOnOne",
          "chat_name": "Jane Doe", "chat_id": "19:jane", "text": "ok thanks",
          "created_at": "2026-06-17T10:00:00Z"})
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Jane Doe", 16)["status"] == "open"


def test_role_sender_localpart_is_not_a_colleague():
    # 'Acme Billing <billing@acme.com>' has a human-looking display but an
    # automated role address -> must not be credited as a colleague reply.
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Alice <a@x.com>", "T20", 16, subj="Statement")
    _gmail(b, ns, "g2", "Acme Billing <billing@acme.com>", "T20", 17,
           subj="Re: Statement", snip="your automated statement is ready")
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Alice", 16)["status"] == "open"


def test_alias_chaser_question_does_not_close():
    # The SAME person under a second address, asking 'any update?', is a chaser,
    # not a colleague reply -> the question veto keeps the email open.
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Jane Doe <jane@acme.com>", "T21", 16, subj="Plan")
    _gmail(b, ns, "g2", "Jane (mobile) <jane.personal@gmail.com>", "T21", 17,
           subj="Re: Plan", snip="any update?")
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Jane Doe", 16)["status"] == "open"


def test_forward_is_not_a_colleague():
    # A forward (Fwd:) of a same-subject Outlook mail is not someone answering.
    b = FakeBackend(); ns = "t"
    _outlook(b, ns, "o1", "Kaan Karagöz <kaan@bkm.com>", "Rapor", 18)
    _outlook(b, ns, "o2", "Özge Özkan <ozge@bkm.com>", "Fwd: Rapor", 19)
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Kaan Karagöz", 18)["status"] == "open"


def test_handoff_in_quoted_history_is_ignored():
    # The handoff phrase appears only in the QUOTED thread below a fresh ask ->
    # it is old context, not this message, so the email stays open.
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Mehmet K <m@x.com>", "T22", 16, subj="Bütçe")
    _gmail(b, ns, "g2", "Mehmet K <m@x.com>", "T22", 17, subj="Re: Bütçe",
           snip="Yeni rakamları gönderir misin?\nOn 2026-06-16 wrote:\n> telefonda görüştük")
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Mehmet K", 16)["status"] == "open"


def test_handoff_with_fresh_request_stays_open():
    # 'As discussed on the call, please send the file by EOD' references a past
    # call but delivers a NEW ask -> not resolved, stays open.
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Ann Lee <ann@x.com>", "T23", 16, subj="Q")
    _gmail(b, ns, "g2", "Ann Lee <ann@x.com>", "T23", 17, subj="Re: Q",
           snip="as discussed on the call, please send the file")
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Ann Lee", 16)["status"] == "open"


def test_cross_channel_bare_firstname_does_not_match():
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "John <john@a.com>", "T9", 16)
    b.put(b.memory, ns, "tm", {"source": "teams", "chat_type": "oneOnOne",
          "chat_name": "John", "chat_id": "19:john", "text": "hey",
          "created_at": "2026-06-17T10:00:00Z"})
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "John", 16)["status"] == "open"


def test_cross_channel_name_collision_abstains():
    # Two distinct people both display 'John Smith' -> identity ambiguous -> open.
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "John Smith <john@a.com>", "T10", 16)
    b.put(b.memory, ns, "im1", {"source": "imessage", "chat": "John Smith",
          "chat_id": "C1", "text": "hi", "created_at": "2026-06-17T10:00:00Z"})
    b.put(b.memory, ns, "im2", {"source": "imessage", "chat": "John Smith",
          "chat_id": "C2", "handle": "+155500", "text": "yo",
          "created_at": "2026-06-17T11:00:00Z"})
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "John Smith", 16)["status"] == "open"


def _outlook(b, ns, key, frm, subj, day, h=9, folder="Gelen Kutusu"):
    b.put(b.memory, ns, key, {"source": "outlook", "from": frm, "subject": subj,
          "folder": folder, "received_at": f"2026-06-{day:02d}T{h:02d}:00:00Z"})


def test_outlook_same_subject_collision_is_not_a_colleague():
    # Two UNRELATED fresh emails share a templated subject (no Re:). Outlook keys
    # threads by normalized subject, but neither is a reply -> both stay open.
    b = FakeBackend(); ns = "t"
    _outlook(b, ns, "o1", "Kaan Karagöz <kaan@bkm.com>", "Ödeme Bildirimi", 18)
    _outlook(b, ns, "o2", "Özge Özkan <ozge@bkm.com>", "Ödeme Bildirimi", 19)
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Kaan Karagöz", 18)["status"] == "open"
    assert _by_from(out, "Özge Özkan", 19)["status"] == "open"
    assert out["handled"] == 0


def test_outlook_real_reply_prefix_counts_as_colleague():
    # A genuine reply-all (Re:) from a different human IS a colleague reply.
    b = FakeBackend(); ns = "t"
    _outlook(b, ns, "o1", "Kaan Karagöz <kaan@bkm.com>", "Proje X", 18)
    _outlook(b, ns, "o2", "Özge Özkan <ozge@bkm.com>", "Re: Proje X", 19)
    out = inbox_digest.collect(b, ns, **_W)
    first = _by_from(out, "Kaan Karagöz", 18)
    assert first["status"] == "replied_by_colleague", first
    assert first["by_whom"] == "Özge Özkan" and first["replied"] is False
    # Outlook subject-keyed -> flagged for confirmation (no real conversation id).
    assert first["maybe"] is True


def test_off_channel_mention_in_thread_is_handled():
    # A later same-party note says it was settled on the phone (Turkish).
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Mehmet K <m@x.com>", "T11", 16, subj="İş")
    _gmail(b, ns, "g2", "Mehmet K <m@x.com>", "T11", 17, subj="Re: İş",
           snip="telefonda görüştük, hallettik")
    out = inbox_digest.collect(b, ns, **_W)
    first = _by_from(out, "Mehmet K", 16)
    assert first["status"] == "handled_elsewhere", first
    assert first["maybe"] is True and first["via_channel"] == "off_channel"
    assert first["evidence"].get("phrase")          # the matched phrase is surfaced


def test_off_channel_future_proposal_stays_open():
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Ann Lee <ann@x.com>", "T12", 16, subj="Q")
    _gmail(b, ns, "g2", "Ann Lee <ann@x.com>", "T12", 17, subj="Re: Q",
           snip="can we hop on a call?")
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Ann Lee", 16)["status"] == "open"


def test_strongest_tier_wins():
    # My reply (S0) beats a later 'on the call' note (S3) AND a Teams chat (S2).
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Alice Roe <a@x.com>", "T13", 16, subj="R")
    _gmail(b, ns, "g1r", "me <me@x.com>", "T13", 16, h=11, labels="SENT", subj="Re: R")
    _gmail(b, ns, "g2", "Alice Roe <a@x.com>", "T13", 17, subj="Re: R",
           snip="as discussed on the call")
    b.put(b.memory, ns, "tm", {"source": "teams", "chat_type": "oneOnOne",
          "chat_name": "Alice Roe", "chat_id": "19:a", "text": "hi",
          "created_at": "2026-06-17T10:00:00Z"})
    out = inbox_digest.collect(b, ns, **_W)
    a = _by_from(out, "Alice Roe", 16)
    assert a["status"] == "replied_by_me" and a["by_whom"] == "you", a


def test_handling_after_window_does_not_close():
    b = FakeBackend(); ns = "t"
    _gmail(b, ns, "g1", "Jane Doe <jane@x.com>", "T14", 18)
    b.put(b.memory, ns, "tm", {"source": "teams", "chat_type": "oneOnOne",
          "chat_name": "Jane Doe", "chat_id": "19:jd", "text": "hi",
          "created_at": "2026-06-25T10:00:00Z"})      # AFTER until -> excluded
    out = inbox_digest.collect(b, ns, **_W)
    assert _by_from(out, "Jane Doe", 18)["status"] == "open"


def test_rollup_invariants_hold():
    b = FakeBackend(); ns = "alptekin_topal"; _seed(b, ns)   # Alice replied, Bob/Carol open
    _gmail(b, ns, "x1", "Sam Park <sam@x.com>", "TP", 16, subj="P")
    b.put(b.memory, ns, "tmp", {"source": "teams", "chat_type": "oneOnOne",
          "chat_name": "Sam Park", "chat_id": "19:sp",
          "text": "telefonda görüştük", "created_at": "2026-06-17T09:00:00Z"})
    out = inbox_digest.collect(b, ns, **_W)
    assert out["total"] == out["replied"] + out["unreplied"]
    assert out["total"] == out["handled"] + out["open"]
    assert out["maybe_handled"] <= out["handled"]
    for r in out["by_sender"]:
        assert r["unreplied"] == r["count"] - r["replied"], r
        assert r["open"] == r["count"] - r["handled"], r
        assert r["handled"] >= r["replied"], r
    sam = [r for r in out["by_sender"] if r["sender"] == "Sam Park"][0]
    assert sam["handled"] == 1 and sam["replied"] == 0 and sam["open"] == 0


if __name__ == "__main__":
    print("=== inbox_digest (date-ranged received-email summary) ===")
    run("digest_window_reply_and_totals", test_digest_window_reply_and_totals)
    run("empty_inbox_is_ok", test_empty_inbox_is_ok)
    run("resolve_range_last_week_is_prior_mon_sun", test_resolve_range_last_week_is_prior_mon_sun)
    run("colleague_reply_is_handled_not_replied", test_colleague_reply_is_handled_not_replied)
    run("same_sender_followup_does_not_count", test_same_sender_followup_does_not_count)
    run("outlook_same_subject_collision_is_not_a_colleague", test_outlook_same_subject_collision_is_not_a_colleague)
    run("outlook_real_reply_prefix_counts_as_colleague", test_outlook_real_reply_prefix_counts_as_colleague)
    run("auto_responder_is_not_a_colleague", test_auto_responder_is_not_a_colleague)
    run("cross_channel_mention_is_handled", test_cross_channel_mention_is_handled)
    run("bare_cross_channel_presence_stays_open", test_bare_cross_channel_presence_stays_open)
    run("role_sender_localpart_is_not_a_colleague", test_role_sender_localpart_is_not_a_colleague)
    run("alias_chaser_question_does_not_close", test_alias_chaser_question_does_not_close)
    run("forward_is_not_a_colleague", test_forward_is_not_a_colleague)
    run("handoff_in_quoted_history_is_ignored", test_handoff_in_quoted_history_is_ignored)
    run("handoff_with_fresh_request_stays_open", test_handoff_with_fresh_request_stays_open)
    run("cross_channel_bare_firstname_does_not_match", test_cross_channel_bare_firstname_does_not_match)
    run("cross_channel_name_collision_abstains", test_cross_channel_name_collision_abstains)
    run("off_channel_mention_in_thread_is_handled", test_off_channel_mention_in_thread_is_handled)
    run("off_channel_future_proposal_stays_open", test_off_channel_future_proposal_stays_open)
    run("strongest_tier_wins", test_strongest_tier_wins)
    run("handling_after_window_does_not_close", test_handling_after_window_does_not_close)
    run("rollup_invariants_hold", test_rollup_invariants_hold)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
