"""
test_open_loops — "who is waiting on me" thread analysis (open_loops.py).

Two layers, both server-free:
  * pure heuristics — display-name cleanup, automated-sender filter, thread
    keying, question/promise/closure regexes, and the "which sender_id is me"
    inference over Teams 1:1 chats;
  * job_open_loops end-to-end over a FakeBackend seeded with synthetic gmail /
    teams / outlook rows — asserting the direction (awaiting_me / awaiting_them /
    i_owe_them), the two-way and closure filters, and cross-run resolution.
"""
from __future__ import annotations

import os
import sys
import time
from datetime import datetime, timezone

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import open_loops as ol

NS = "alp_test"
NOW = time.time()


def _ms(seconds_ago):
    return int((NOW - seconds_ago) * 1000)


# ---------------------------------------------------------------- pure helpers
def test_disp():
    assert ol._disp("Alex Kim <alex@example.com>") == "Alex Kim"
    assert ol._disp("Sam | Acme") == "Sam"
    assert ol._disp('"Quoted Name"') == "Quoted Name"
    assert ol._disp("") == "?"
    assert ol._disp(None) == "?"


def test_is_auto():
    assert ol._is_auto({"from": "noreply@github.com"})
    assert ol._is_auto({"from": "Acme <no-reply@acme.io>"})
    assert ol._is_auto({"from": "x@y.com", "labels": "CATEGORY_PROMOTIONS,INBOX"})
    assert not ol._is_auto({"from": "Alex <alex@example.com>", "labels": "INBOX"})


def test_is_auto_filters_sms_brand_shortcodes():
    # Regression: SMS brand/short-code senders arrive via iMessage (sender in
    # `chat`), where the two-way reply filter is bypassed — so without this they
    # leaked into the brief as "waiting on you". ALL-CAPS brand ids + a numeric
    # short-code + notification content must all be flagged automated.
    # NB: all senders/content here are FICTIONAL and English — never put real
    # contacts, numbers, brands or message text into the repo, and keep test
    # data language-neutral (personal-data + no-Turkish-in-code hygiene).
    for brand, txt in (
        ("EXAMPLE TELECOM", "call notification"),
        ("WIDGET CORP", "dear customer, account notice"),
        ("ACMEBANK", "credit card promo notice"),
        ("DEMO INSURANCE", "your verification code is 123456"),
        ("FOOBAR SERVICE", "service request created"),
        ("MOCKEDISON", "planned power outage notice"),
        ("SAMPLE ASSN", "special offer and discount"),
        ("TESTCO CENTER", "promo: sample product"),
    ):
        assert ol._is_auto({"source": "imessage", "chat": brand, "text": txt}), brand
    # numeric short-code (flagged by the sender heuristic regardless of content)
    assert ol._is_auto({"source": "imessage", "chat": "4350", "text": "hello"})
    # and language-neutral OTP content even from an otherwise-plausible sender
    assert ol._is_auto({"source": "imessage", "chat": "Verify",
                        "text": "123456 is your code"})


def test_is_auto_keeps_real_people():
    # Proper-case human contacts and a real-phone first text (no prior reply)
    # must NOT be flagged automated, so genuine loops still surface.
    # Names/numbers below are fictional placeholders.
    for who, txt in (
        ("John Doe", "hey are you free"),
        ("Jane Roe", "can you send the file"),
        ("Alex Kim", "what time is the meeting"),
    ):
        assert not ol._is_auto({"source": "imessage", "chat": who, "text": txt}), who
    assert not ol._is_auto({"source": "imessage", "chat": "+900000000000",
                            "text": "hey are you free"})


def test_is_shortcode_sender():
    assert ol._is_shortcode_sender("EXAMPLE TELECOM")
    assert ol._is_shortcode_sender("WIDGET CORP")
    assert ol._is_shortcode_sender("4350")          # numeric short-code
    assert not ol._is_shortcode_sender("John Doe")
    assert not ol._is_shortcode_sender("+900000000000")  # phone-length number
    assert not ol._is_shortcode_sender("ab")         # too short


def test_is_nonhuman_sender_brand_ids_and_masked():
    # CamelCase / ALL-CAPS / digit-bearing single-token sender ids are brands,
    # the old ALL-CAPS-only check missed the mixed-case ones. Masked numbers
    # (bank/legal SMS) are automated on any channel. (Fictional, language-neutral.)
    for brand in ("WidgetPay", "AcmeBankCard", "MockPay", "ACMEBANK", "Otp2Go"):
        assert ol.is_nonhuman_sender(brand, "imessage"), brand
    assert ol.is_nonhuman_sender("+900000****11", "imessage")   # masked number
    assert ol.is_nonhuman_sender("+900000****11")               # any channel
    # real people stay (phone, email, multi-token, and single first names —
    # a plain word is indistinguishable from a brand, so we keep it)
    assert not ol.is_nonhuman_sender("+900000000000", "imessage")
    assert not ol.is_nonhuman_sender("alex@example.com", "imessage")
    assert not ol.is_nonhuman_sender("John Doe", "imessage")
    assert not ol.is_nonhuman_sender("Sam", "imessage")         # single first name kept
    assert not ol.is_nonhuman_sender("Mehmet", "gmail")
    assert ol.is_nonhuman_sender("AcmeBankCard", "gmail")       # CamelCase brand


def test_dismiss_by_counterparty_sticks_and_hides():
    # The user marks a loop "not pending"; it must be dropped now AND not be
    # re-opened by the next derivation. Fictional, language-neutral names.
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_imessage_t1",
          {"kind": "open_loop", "status": "open", "direction": "awaiting_me",
           "source": "imessage", "thread_key": "t1", "counterparty": "Foobar",
           "snippet": "promo", "actionable": True})
    b.put(b.loops_store, NS, "loop_teams_t2",
          {"kind": "open_loop", "status": "open", "direction": "awaiting_me",
           "source": "teams", "thread_key": "t2", "counterparty": "Real Person",
           "snippet": "hey", "actionable": True})
    n = ol.dismiss_by_counterparty(b, NS, ["Foobar"])
    assert n == 1
    assert b.rows(b.loops_store, NS)["loop_imessage_t1"]["status"] == "resolved"
    dis = ol.load_dismissed(b, NS)
    assert ol.is_dismissed(dis, {"source": "imessage", "thread_key": "t1"})
    assert not ol.is_dismissed(dis, {"source": "teams", "thread_key": "t2"})
    assert ol.undismiss_by_counterparty(b, NS, ["Foobar"]) == 1
    assert not ol.load_dismissed(b, NS)


def test_dismiss_matching_pins_one_thread_by_snippet():
    # A person with two loops: dismiss only the one whose snippet matches, so
    # their still-relevant thread is kept. Fictional, language-neutral.
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_teams_a",
          {"status": "open", "direction": "awaiting_me", "source": "teams",
           "thread_key": "a", "counterparty": "Pat Lee", "actionable": True,
           "what": "review the pull request", "snippet": "can you review"})
    b.put(b.loops_store, NS, "loop_imessage_b",
          {"status": "open", "direction": "i_owe_them", "source": "imessage",
           "thread_key": "b", "counterparty": "Pat Lee", "actionable": True,
           "what": "bring the charger", "snippet": "dont forget the charger"})
    n = ol.dismiss_matching(b, NS, [("Pat Lee", "charger")])
    assert n == 1
    rows = b.rows(b.loops_store, NS)
    assert rows["loop_imessage_b"]["status"] == "resolved"   # the chore, dropped
    assert rows["loop_teams_a"]["status"] == "open"          # the PR, kept


def test_thread_key():
    assert ol._thread_key({"thread_id": "T1", "message_id": "M9"}, "gmail") == "T1"
    assert ol._thread_key({"message_id": "M9"}, "gmail") == "M9"
    assert ol._thread_key({"chat_id": "c1"}, "teams") == "c1"
    # outlook normalises Re:/Fwd: so a reply stays in the same thread
    a = ol._thread_key({"subject": "Project"}, "outlook")
    b = ol._thread_key({"subject": "Re: Project"}, "outlook")
    c = ol._thread_key({"subject": "FWD: Project"}, "outlook")
    assert a == b == c == "Project"


def test_regexes():
    # Question / promise / closure detection is locale-driven (no literals in
    # the code): locales.heuristics() compiles the union of the active input
    # locales. Verify the MECHANISM here with English input; each locale's own
    # vocabulary lives in its JSON resource, not in this test.
    h = ol.locales.heuristics()
    assert h.question.search("can you check this?")
    assert not h.question.search("let me know what you think")   # no '?'
    assert h.promise.search("I'll send it tomorrow")
    assert h.promise.search("going to handle it")
    assert not h.promise.search("how are you today")
    assert h.close.search("done, thanks")
    assert h.close.search("appreciate it 🙏")
    assert not h.close.search("still waiting on this")
    # the non-English input locale is active by default and supplies its own
    # vocabulary from its JSON resource (validated in test_entities).
    assert "tr" in ol.locales.available()


def test_detect_my_teams_id():
    # 'me' is the sender present across the most distinct 1:1 chats
    msgs = [
        {"sender_id": "me", "chat_id": "c1"},
        {"sender_id": "sam", "chat_id": "c1"},
        {"sender_id": "me", "chat_id": "c2"},
        {"sender_id": "alex", "chat_id": "c2"},
    ]
    assert ol._detect_my_teams_id(msgs) == "me"
    assert ol._detect_my_teams_id([]) is None


# ---------------------------------------------------------------- builders
def _gmail(thread, frm, subj, snippet, secs_ago, sent=False):
    return {"source": "gmail", "thread_id": thread, "message_id": f"m{secs_ago}",
            "from": frm, "subject": subj, "snippet": snippet,
            "labels": "SENT" if sent else "INBOX", "internal_date_ms": _ms(secs_ago)}


def _teams(chat, name, sender_id, text, secs_ago):
    return {"source": "teams", "chat_id": chat, "chat_name": name,
            "chat_type": "oneOnOne", "sender_id": sender_id, "text": text,
            "internal_date_ms": _ms(secs_ago)}


def _seed(backend, *msgs):
    for i, m in enumerate(msgs):
        key = {"gmail": "gmail", "teams": "teams_chat",
               "outlook": "outlook"}[m["source"]] + f"_{i}"
        backend.put(backend.memory, NS, key, m)


def _loops(backend):
    return list(backend.rows(backend.loops_store, NS).values())


# ---------------------------------------------------------------- job_open_loops
def test_awaiting_me_inbound_after_my_reply():
    b = FakeBackend()
    _seed(b,
          _gmail("T1", "me@x.com", "Project", "hello", 7200, sent=True),
          _gmail("T1", "Alex <alex@example.com>", "Re: Project",
                 "can you send the file?", 3600))
    n = ol.job_open_loops(b, NS)
    loops = _loops(b)
    assert n == 1, n
    assert loops[0]["direction"] == "awaiting_me"
    assert loops[0]["counterparty"] == "Alex"
    assert loops[0]["status"] == "open"


def test_one_way_inbound_is_not_a_loop():
    # gmail thread I never replied to (newsletter-shaped) -> ignored
    b = FakeBackend()
    _seed(b, _gmail("T2", "Random <r@x.com>", "Announcement", "new version released", 3600))
    assert ol.job_open_loops(b, NS) == 0
    assert _loops(b) == []


def test_short_ack_closes_the_loop():
    b = FakeBackend()
    _seed(b,
          _gmail("T3", "me@x.com", "Task", "done", 7200, sent=True),
          _gmail("T3", "Mary <mary@example.com>", "Re: Task", "thanks a lot 🙏", 3600))
    assert ol.job_open_loops(b, NS) == 0


def test_outbound_question_is_awaiting_them():
    b = FakeBackend()
    _seed(b,
          _gmail("T4", "Boss <boss@x.com>", "Budget", "numbers attached", 7200),
          _gmail("T4", "me@x.com", "Re: Budget", "when will approval come?", 3600,
                 sent=True))
    ol.job_open_loops(b, NS)
    loops = _loops(b)
    assert len(loops) == 1
    assert loops[0]["direction"] == "awaiting_them"
    assert loops[0]["counterparty"] == "Boss"


def test_promise_is_i_owe_them():
    b = FakeBackend()
    _seed(b,
          _gmail("T5", "Sam <sam@example.com>", "Report", "what is the report status", 7200),
          _gmail("T5", "me@x.com", "Re: Report", "I'll send it tomorrow", 3600,
                 sent=True))
    ol.job_open_loops(b, NS)
    owed = [d for d in _loops(b) if d["direction"] == "i_owe_them"]
    assert len(owed) == 1, _loops(b)
    assert owed[0]["counterparty"] == "Sam"
    assert owed[0]["loop_type"] == "promise"


def test_teams_inbound_awaiting_me():
    b = FakeBackend()
    _seed(b,
          _teams("c1", "Sam", "me", "hi", 7200),
          _teams("c1", "Sam", "sam", "are you free tomorrow?", 3600),
          _teams("c2", "Alex", "me", "ok", 5000))   # second chat -> 'me' id detected
    ol.job_open_loops(b, NS)
    me_loops = [d for d in _loops(b)
                if d["direction"] == "awaiting_me" and d["counterparty"] == "Sam"]
    assert len(me_loops) == 1, _loops(b)


def _slack(channel, name, sender_id, text, secs_ago):
    return {"source": "slack", "channel_type": "im", "channel_id": channel,
            "channel_name": name, "sender_id": sender_id, "text": text,
            "created_at": datetime.fromtimestamp(NOW - secs_ago, timezone.utc)
            .isoformat()}


def test_slack_dm_inbound_awaiting_me():
    b = FakeBackend()
    # two DMs so 'me' (in both) is distinguished from each counterparty (in one)
    b.put(b.memory, NS, "slack_msg_D1_1", _slack("D1", "Sam", "me", "hi", 7200))
    b.put(b.memory, NS, "slack_msg_D1_2",
          _slack("D1", "Sam", "sam", "are you free tomorrow?", 3600))
    b.put(b.memory, NS, "slack_msg_D2_1", _slack("D2", "Alex", "me", "ok", 5000))
    ol.job_open_loops(b, NS)
    me = [d for d in _loops(b)
          if d["source"] == "slack" and d["direction"] == "awaiting_me"]
    assert len(me) == 1 and me[0]["counterparty"] == "Sam"
    assert me[0]["thread_key"] == "D1"                    # keyed by channel_id


def test_slack_group_channel_is_skipped():
    b = FakeBackend()
    msg = _slack("C9", "general", "someone", "when is the deploy?", 3600)
    msg["channel_type"] = "public_channel"                # not a DM -> ignored (v0)
    b.put(b.memory, NS, "slack_msg_C9_1", msg)
    assert ol.job_open_loops(b, NS) == 0


def _imsg(chat_id, chat, handle, from_me, text, secs_ago):
    return {"source": "imessage", "chat_id": chat_id, "chat": chat,
            "handle": handle, "is_from_me": from_me, "text": text,
            "modified_at": datetime.fromtimestamp(NOW - secs_ago, timezone.utc)
            .isoformat()}


def test_imessage_inbound_awaiting_me():
    b = FakeBackend()
    b.put(b.memory, NS, "imessage_1",
          _imsg("C1", "Sam", "+900000000000", True, "hi", 7200))
    b.put(b.memory, NS, "imessage_2",
          _imsg("C1", "Sam", "+900000000000", False,
                "can we meet tomorrow?", 3600))
    ol.job_open_loops(b, NS)
    me = [d for d in _loops(b)
          if d["source"] == "imessage" and d["direction"] == "awaiting_me"]
    assert len(me) == 1 and me[0]["counterparty"] == "Sam"
    assert me[0]["thread_key"] == "C1"                   # keyed by chat_id


def test_imessage_uses_is_from_me_for_direction():
    # I sent the last message asking a question -> awaiting_them, no reply yet
    b = FakeBackend()
    b.put(b.memory, NS, "imessage_1",
          _imsg("C2", "Alex", "alex@example.com", False, "hi", 7200))
    b.put(b.memory, NS, "imessage_2",
          _imsg("C2", "Alex", "alex@example.com", True, "when are you available?", 3600))
    ol.job_open_loops(b, NS)
    them = [d for d in _loops(b) if d["source"] == "imessage"]
    assert len(them) == 1 and them[0]["direction"] == "awaiting_them"
    assert them[0]["counterparty"] == "Alex"             # the other party, not "me"


def test_detect_my_id_generic():
    msgs = [{"sender_id": "me", "channel_id": "D1"},
            {"sender_id": "sam", "channel_id": "D1"},
            {"sender_id": "me", "channel_id": "D2"}]
    assert ol._detect_my_id(msgs, "channel_id") == "me"


def test_core_team_counterparty_is_high_priority():
    b = FakeBackend()
    b.put(b.selfmodel_store, NS, "self_team",
          {"section": "team", "content": ["Alex", "Sam"]})
    _seed(b,
          _gmail("T1", "me@x.com", "Project", "hello", 7200, sent=True),
          _gmail("T1", "Alex <alex@example.com>", "Re: Project", "can you check this?", 3600))
    ol.job_open_loops(b, NS)
    assert _loops(b)[0]["priority"] == "high"


def test_mark_resolved_closes_and_is_idempotent():
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_x",
          {"status": "open", "direction": "awaiting_me", "counterparty": "Alex"})
    assert ol.mark_resolved(b, NS, "loop_x") is True
    rec = b.rows(b.loops_store, NS)["loop_x"]
    assert rec["status"] == "resolved" and rec["resolved_by"] == "sent_reply"
    assert ol.mark_resolved(b, NS, "loop_x") is False     # already resolved -> no-op
    assert ol.mark_resolved(b, NS, "missing") is False    # unknown key -> no-op


def test_resolution_flips_stale_open_loop():
    b = FakeBackend()
    # a previously-open loop that this run will NOT regenerate (no source rows)
    b.put(b.loops_store, NS, "loop_gmail_ZZZ",
          {"kind": "open_loop", "direction": "awaiting_me", "status": "open",
           "counterparty": "Former", "thread_key": "old"})
    ol.job_open_loops(b, NS)
    assert b.rows(b.loops_store, NS)["loop_gmail_ZZZ"]["status"] == "resolved"


def main():
    tests = [test_disp, test_is_auto,
             test_is_auto_filters_sms_brand_shortcodes,
             test_is_auto_keeps_real_people, test_is_shortcode_sender,
             test_is_nonhuman_sender_brand_ids_and_masked,
             test_dismiss_by_counterparty_sticks_and_hides,
             test_dismiss_matching_pins_one_thread_by_snippet,
             test_thread_key, test_regexes,
             test_detect_my_teams_id,
             test_awaiting_me_inbound_after_my_reply,
             test_one_way_inbound_is_not_a_loop, test_short_ack_closes_the_loop,
             test_outbound_question_is_awaiting_them, test_promise_is_i_owe_them,
             test_teams_inbound_awaiting_me, test_slack_dm_inbound_awaiting_me,
             test_slack_group_channel_is_skipped,
             test_imessage_inbound_awaiting_me,
             test_imessage_uses_is_from_me_for_direction, test_detect_my_id_generic,
             test_core_team_counterparty_is_high_priority,
             test_mark_resolved_closes_and_is_idempotent,
             test_resolution_flips_stale_open_loop]
    for fn in tests:
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — open_loops thread analysis")
    return 0


if __name__ == "__main__":
    sys.exit(main())
