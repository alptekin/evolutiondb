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

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import open_loops as ol

NS = "alp_test"
NOW = time.time()


def _ms(seconds_ago):
    return int((NOW - seconds_ago) * 1000)


# ---------------------------------------------------------------- pure helpers
def test_disp():
    assert ol._disp("Ulaş Demir <ulas@x.com>") == "Ulaş Demir"
    assert ol._disp("Deniz | Acme") == "Deniz"
    assert ol._disp('"Quoted Name"') == "Quoted Name"
    assert ol._disp("") == "?"
    assert ol._disp(None) == "?"


def test_is_auto():
    assert ol._is_auto({"from": "noreply@github.com"})
    assert ol._is_auto({"from": "Acme <no-reply@acme.io>"})
    assert ol._is_auto({"from": "x@y.com", "labels": "CATEGORY_PROMOTIONS,INBOX"})
    assert not ol._is_auto({"from": "Ulaş <ulas@x.com>", "labels": "INBOX"})


def test_thread_key():
    assert ol._thread_key({"thread_id": "T1", "message_id": "M9"}, "gmail") == "T1"
    assert ol._thread_key({"message_id": "M9"}, "gmail") == "M9"
    assert ol._thread_key({"chat_id": "c1"}, "teams") == "c1"
    # outlook normalises Re:/Fwd: so a reply stays in the same thread
    a = ol._thread_key({"subject": "Proje"}, "outlook")
    b = ol._thread_key({"subject": "Re: Proje"}, "outlook")
    c = ol._thread_key({"subject": "FWD: Proje"}, "outlook")
    assert a == b == c == "Proje"


def test_regexes():
    assert ol._QUESTION.search("dosyayı gönderir misin?")
    assert ol._QUESTION.search("müsait misin")
    assert ol._QUESTION.search("can you check this?")   # english relies on the '?'
    # english bare questions without a '?' are NOT detected (known limitation)
    assert not ol._QUESTION.search("let me know what you think")
    assert not ol._QUESTION.search("tamam teşekkürler")

    assert ol._PROMISE.search("yarın göndereceğim")
    assert ol._PROMISE.search("I'll send it tomorrow")
    assert ol._PROMISE.search("bakacağım buna")
    assert not ol._PROMISE.search("nasılsın bugün")

    assert ol._CLOSE.search("çok teşekkürler 🙏")
    assert ol._CLOSE.search("tamamdır, halloldu")
    assert ol._CLOSE.search("done, thanks")
    assert not ol._CLOSE.search("hâlâ bekliyorum")


def test_detect_my_teams_id():
    # 'me' is the sender present across the most distinct 1:1 chats
    msgs = [
        {"sender_id": "me", "chat_id": "c1"},
        {"sender_id": "deniz", "chat_id": "c1"},
        {"sender_id": "me", "chat_id": "c2"},
        {"sender_id": "can", "chat_id": "c2"},
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
          _gmail("T1", "me@x.com", "Proje", "merhaba", 7200, sent=True),
          _gmail("T1", "Ulaş <ulas@x.com>", "Re: Proje",
                 "dosyayı gönderir misin?", 3600))
    n = ol.job_open_loops(b, NS)
    loops = _loops(b)
    assert n == 1, n
    assert loops[0]["direction"] == "awaiting_me"
    assert loops[0]["counterparty"] == "Ulaş"
    assert loops[0]["status"] == "open"


def test_one_way_inbound_is_not_a_loop():
    # gmail thread I never replied to (newsletter-shaped) -> ignored
    b = FakeBackend()
    _seed(b, _gmail("T2", "Random <r@x.com>", "Duyuru", "yeni sürüm çıktı", 3600))
    assert ol.job_open_loops(b, NS) == 0
    assert _loops(b) == []


def test_short_ack_closes_the_loop():
    b = FakeBackend()
    _seed(b,
          _gmail("T3", "me@x.com", "İş", "tamamladım", 7200, sent=True),
          _gmail("T3", "Ece <ece@x.com>", "Re: İş", "çok teşekkürler 🙏", 3600))
    assert ol.job_open_loops(b, NS) == 0


def test_outbound_question_is_awaiting_them():
    b = FakeBackend()
    _seed(b,
          _gmail("T4", "Boss <boss@x.com>", "Bütçe", "rakamlar ekte", 7200),
          _gmail("T4", "me@x.com", "Re: Bütçe", "onay ne zaman gelir?", 3600,
                 sent=True))
    ol.job_open_loops(b, NS)
    loops = _loops(b)
    assert len(loops) == 1
    assert loops[0]["direction"] == "awaiting_them"
    assert loops[0]["counterparty"] == "Boss"


def test_promise_is_i_owe_them():
    b = FakeBackend()
    _seed(b,
          _gmail("T5", "Faruk <f@x.com>", "Rapor", "rapor ne durumda", 7200),
          _gmail("T5", "me@x.com", "Re: Rapor", "yarın göndereceğim", 3600,
                 sent=True))
    ol.job_open_loops(b, NS)
    owed = [d for d in _loops(b) if d["direction"] == "i_owe_them"]
    assert len(owed) == 1, _loops(b)
    assert owed[0]["counterparty"] == "Faruk"
    assert owed[0]["loop_type"] == "promise"


def test_teams_inbound_awaiting_me():
    b = FakeBackend()
    _seed(b,
          _teams("c1", "Deniz", "me", "selam", 7200),
          _teams("c1", "Deniz", "deniz", "yarın müsait misin?", 3600),
          _teams("c2", "Can", "me", "ok", 5000))   # second chat -> 'me' id detected
    ol.job_open_loops(b, NS)
    me_loops = [d for d in _loops(b)
                if d["direction"] == "awaiting_me" and d["counterparty"] == "Deniz"]
    assert len(me_loops) == 1, _loops(b)


def test_core_team_counterparty_is_high_priority():
    b = FakeBackend()
    b.put(b.selfmodel_store, NS, "self_team",
          {"section": "team", "content": ["Ulaş", "Deniz"]})
    _seed(b,
          _gmail("T1", "me@x.com", "Proje", "merhaba", 7200, sent=True),
          _gmail("T1", "Ulaş <ulas@x.com>", "Re: Proje", "kontrol eder misin?", 3600))
    ol.job_open_loops(b, NS)
    assert _loops(b)[0]["priority"] == "high"


def test_mark_resolved_closes_and_is_idempotent():
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_x",
          {"status": "open", "direction": "awaiting_me", "counterparty": "Ulaş"})
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
           "counterparty": "Eski", "thread_key": "old"})
    ol.job_open_loops(b, NS)
    assert b.rows(b.loops_store, NS)["loop_gmail_ZZZ"]["status"] == "resolved"


def main():
    tests = [test_disp, test_is_auto, test_thread_key, test_regexes,
             test_detect_my_teams_id,
             test_awaiting_me_inbound_after_my_reply,
             test_one_way_inbound_is_not_a_loop, test_short_ack_closes_the_loop,
             test_outbound_question_is_awaiting_them, test_promise_is_i_owe_them,
             test_teams_inbound_awaiting_me,
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
