"""
test_transports — real channel senders for the outbox (transports.py).

No message is ever emitted: the Gmail transport's `sender` is injected with a
fake, and the env-gated registration is exercised with stub builders. Tests pin
the MIME build, reply-subject normalisation, the refuse-on-non-address guard,
threadId pass-through, and that registration stays a no-op unless the operator
opens both locks (EVOSQL_SEND_ENABLED + EVOSQL_SEND_CHANNELS).
"""
from __future__ import annotations

import base64
import email
import email.policy
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from mcp_server_evosql import transports, outbox


def _parse(raw):
    return email.message_from_bytes(base64.urlsafe_b64decode(raw),
                                    policy=email.policy.default)


def test_build_raw_email_round_trips():
    m = _parse(transports.build_raw_email("a@x.com", "Konu", "Merhaba\nsatır2"))
    assert m["To"] == "a@x.com"
    assert m["Subject"] == "Konu"
    assert m.get_content().strip() == "Merhaba\nsatır2"


def test_build_raw_email_blank_subject():
    m = _parse(transports.build_raw_email("a@x.com", "", "x"))
    assert m["Subject"] == "(no subject)"


def test_reply_subject_normalises():
    assert transports._reply_subject({"subject": "Proje"}) == "Re: Proje"
    assert transports._reply_subject({"subject": "Re: Proje"}) == "Re: Proje"
    assert transports._reply_subject({"subject": "RE: x"}) == "RE: x"
    assert transports._reply_subject({}) == "Re: (no subject)"


def test_transport_delivers_and_passes_thread():
    captured = {}

    def _fake(raw, thread_id):
        captured["raw"] = raw
        captured["thread_id"] = thread_id
        return {"id": "M1", "threadId": "T1"}

    t = transports.GmailSendTransport(sender=_fake)
    r = t({"to_email": "ulas@x.com", "subject": "Proje", "body": "ekte",
           "thread_id": "TID9"})
    assert r["delivered"] and r["id"] == "M1" and r["thread_id"] == "T1"
    assert captured["thread_id"] == "TID9"               # reply stays in-thread
    assert _parse(captured["raw"])["To"] == "ulas@x.com"


def test_transport_prefers_to_email_then_to():
    t = transports.GmailSendTransport(sender=lambda raw, tid: {"id": "x"})
    # to_email wins
    t({"to_email": "real@x.com", "to": "Display", "body": "b"})
    # falls back to `to` when it's itself an address
    r = t({"to": "fallback@x.com", "body": "b"})
    assert r["delivered"]


def test_transport_refuses_non_address():
    t = transports.GmailSendTransport(sender=lambda raw, tid: {"id": "x"})
    r = t({"to": "Ulaş", "body": "b"})                   # display name, not email
    assert not r["delivered"] and not r["dry_run"]       # a hard error, not a dry-run
    assert "recipient" in r["error"]


def test_teams_transport_delivers_into_chat():
    captured = {}

    def _fake(chat_id, body):
        captured["chat_id"] = chat_id
        captured["body"] = body
        return {"id": "1700000000000"}

    t = transports.TeamsSendTransport(sender=_fake)
    r = t({"thread_id": "19:abc@thread.v2", "body": "tamamdır 👍"})
    assert r["delivered"] and r["id"] == "1700000000000"
    assert r["chat_id"] == "19:abc@thread.v2"
    assert captured["body"] == "tamamdır 👍"            # no MIME — raw chat text


def test_teams_transport_needs_chat_id():
    t = transports.TeamsSendTransport(sender=lambda c, b: {"id": "x"})
    r = t({"body": "hi"})                                # no thread_id
    assert not r["delivered"] and not r["dry_run"]
    assert "chat id" in r["error"]


def test_outlook_transport_sends_mail():
    captured = {}

    def _fake(to, subject, body):
        captured.update(to=to, subject=subject, body=body)
        return {"id": "AAMk"}

    t = transports.OutlookSendTransport(sender=_fake)
    r = t({"to_email": "boss@corp.com", "subject": "Bütçe", "body": "onaylandı"})
    assert r["delivered"] and r["to"] == "boss@corp.com"
    assert captured["subject"] == "Re: Bütçe"            # reply-subject normalised


def test_outlook_transport_refuses_non_address():
    t = transports.OutlookSendTransport(sender=lambda *a: {"id": "x"})
    r = t({"to": "Boss", "body": "x"})
    assert not r["delivered"] and not r["dry_run"] and "recipient" in r["error"]


def test_slack_transport_posts_to_channel():
    captured = {}
    t = transports.SlackSendTransport(
        sender=lambda ch, txt: (captured.update(ch=ch, txt=txt)
                                or {"ok": True, "ts": "1700.5"}))
    r = t({"thread_id": "D123", "body": "tabii"})
    assert r["delivered"] and r["id"] == "1700.5" and r["channel"] == "D123"
    assert captured == {"ch": "D123", "txt": "tabii"}


def test_slack_transport_needs_channel():
    t = transports.SlackSendTransport(sender=lambda c, b: {"ok": True, "ts": "1"})
    r = t({"body": "hi"})
    assert not r["delivered"] and "channel id" in r["error"]


def test_slack_transport_maps_api_failure():
    t = transports.SlackSendTransport(
        sender=lambda c, b: {"ok": False, "error": "not_in_channel"})
    r = t({"thread_id": "D1", "body": "x"})
    assert not r["delivered"] and not r["dry_run"]       # API error, not dry-run
    assert r["error"] == "not_in_channel"


def test_imessage_transport_sends_to_handle():
    captured = {}
    t = transports.ImessageSendTransport(
        sender=lambda h, txt: (captured.update(h=h, txt=txt) or {"id": None}))
    r = t({"to": "+905551112233", "body": "tabii"})
    assert r["delivered"] and r["to"] == "+905551112233"
    assert captured == {"h": "+905551112233", "txt": "tabii"}


def test_imessage_transport_needs_handle():
    t = transports.ImessageSendTransport(sender=lambda h, b: {"id": None})
    r = t({"body": "hi"})
    assert not r["delivered"] and "handle" in r["error"]


def _clear():
    os.environ.pop("EVOSQL_SEND_ENABLED", None)
    os.environ.pop("EVOSQL_SEND_CHANNELS", None)
    outbox.TRANSPORTS.clear()


def test_register_is_noop_by_default():
    _clear()
    assert transports.register_from_env() == []
    assert outbox.TRANSPORTS == {}


def test_register_needs_both_locks():
    _clear()
    stub = {"gmail": lambda: (lambda item: {"delivered": True})}
    # enabled but no channels -> nothing
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    assert transports.register_from_env(builders=stub) == []
    # channels but not enabled -> nothing
    _clear()
    os.environ["EVOSQL_SEND_CHANNELS"] = "gmail"
    assert transports.register_from_env(builders=stub) == []
    _clear()


def test_register_wires_known_channels_only():
    _clear()
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    os.environ["EVOSQL_SEND_CHANNELS"] = \
        "gmail,teams,outlook,slack,imessage,carrierpigeon"
    wired = transports.register_from_env()               # real builders
    assert set(wired) == {"gmail", "teams", "outlook", "slack", "imessage"}
    assert {"gmail", "teams", "outlook", "slack", "imessage"} <= set(outbox.TRANSPORTS)
    _clear()


def main():
    tests = [test_build_raw_email_round_trips, test_build_raw_email_blank_subject,
             test_reply_subject_normalises, test_transport_delivers_and_passes_thread,
             test_transport_prefers_to_email_then_to,
             test_transport_refuses_non_address,
             test_teams_transport_delivers_into_chat, test_teams_transport_needs_chat_id,
             test_outlook_transport_sends_mail, test_outlook_transport_refuses_non_address,
             test_slack_transport_posts_to_channel, test_slack_transport_needs_channel,
             test_slack_transport_maps_api_failure,
             test_imessage_transport_sends_to_handle, test_imessage_transport_needs_handle,
             test_register_is_noop_by_default,
             test_register_needs_both_locks, test_register_wires_known_channels_only]
    try:
        for fn in tests:
            fn()
            print(f"  ok  {fn.__name__}")
    finally:
        _clear()
    print("OK — outbox send transports")
    return 0


if __name__ == "__main__":
    sys.exit(main())
