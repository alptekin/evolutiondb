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
    m = _parse(transports.build_raw_email("a@x.com", "Subject", "Hello\nline2"))
    assert m["To"] == "a@x.com"
    assert m["Subject"] == "Subject"
    assert m.get_content().strip() == "Hello\nline2"


def test_build_raw_email_blank_subject():
    m = _parse(transports.build_raw_email("a@x.com", "", "x"))
    assert m["Subject"] == "(no subject)"


def test_reply_subject_normalises():
    assert transports._reply_subject({"subject": "Project"}) == "Re: Project"
    assert transports._reply_subject({"subject": "Re: Project"}) == "Re: Project"
    assert transports._reply_subject({"subject": "RE: x"}) == "RE: x"
    assert transports._reply_subject({}) == "Re: (no subject)"


def test_transport_delivers_and_passes_thread():
    captured = {}

    def _fake(raw, thread_id):
        captured["raw"] = raw
        captured["thread_id"] = thread_id
        return {"id": "M1", "threadId": "T1"}

    t = transports.GmailSendTransport(sender=_fake)
    r = t({"to_email": "alex@example.com", "subject": "Project", "body": "attached",
           "thread_id": "TID9"})
    assert r["delivered"] and r["id"] == "M1" and r["thread_id"] == "T1"
    assert captured["thread_id"] == "TID9"               # reply stays in-thread
    assert _parse(captured["raw"])["To"] == "alex@example.com"


def test_transport_prefers_to_email_then_to():
    t = transports.GmailSendTransport(sender=lambda raw, tid: {"id": "x"})
    # to_email wins
    t({"to_email": "real@x.com", "to": "Display", "body": "b"})
    # falls back to `to` when it's itself an address
    r = t({"to": "fallback@x.com", "body": "b"})
    assert r["delivered"]


def test_transport_refuses_non_address():
    t = transports.GmailSendTransport(sender=lambda raw, tid: {"id": "x"})
    r = t({"to": "Alex Kim", "body": "b"})               # display name, not email
    assert not r["delivered"] and not r["dry_run"]       # a hard error, not a dry-run
    assert "recipient" in r["error"]


def test_teams_transport_delivers_into_chat():
    captured = {}

    def _fake(chat_id, body):
        captured["chat_id"] = chat_id
        captured["body"] = body
        return {"id": "1700000000000"}

    t = transports.TeamsSendTransport(sender=_fake)
    r = t({"thread_id": "19:abc@thread.v2", "body": "all set 👍"})
    assert r["delivered"] and r["id"] == "1700000000000"
    assert r["chat_id"] == "19:abc@thread.v2"
    assert captured["body"] == "all set 👍"             # no MIME — raw chat text


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
    r = t({"to_email": "boss@corp.com", "subject": "Budget", "body": "approved"})
    assert r["delivered"] and r["to"] == "boss@corp.com"
    assert captured["subject"] == "Re: Budget"           # reply-subject normalised


def test_outlook_transport_refuses_non_address():
    t = transports.OutlookSendTransport(sender=lambda *a: {"id": "x"})
    r = t({"to": "Boss", "body": "x"})
    assert not r["delivered"] and not r["dry_run"] and "recipient" in r["error"]


def test_slack_transport_posts_to_channel():
    captured = {}
    t = transports.SlackSendTransport(
        sender=lambda ch, txt: (captured.update(ch=ch, txt=txt)
                                or {"ok": True, "ts": "1700.5"}))
    r = t({"thread_id": "D123", "body": "sure"})
    assert r["delivered"] and r["id"] == "1700.5" and r["channel"] == "D123"
    assert captured == {"ch": "D123", "txt": "sure"}


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
    r = t({"to": "+900000000000", "body": "sure"})
    assert r["delivered"] and r["to"] == "+900000000000"
    assert captured == {"h": "+900000000000", "txt": "sure"}


def test_imessage_transport_needs_handle():
    t = transports.ImessageSendTransport(sender=lambda h, b: {"id": None})
    r = t({"body": "hi"})
    assert not r["delivered"] and "handle" in r["error"]


def test_github_pr_transport_posts_review_comment():
    captured = {}
    t = transports.GitHubPRTransport(
        sender=lambda repo, num, body: (captured.update(repo=repo, num=num,
                                                        body=body)
                                        or {"id": 9001,
                                            "html_url": "https://github.com/x"}))
    r = t({"thread_id": "acme/widgets#142", "body": "Verdict: needs work."})
    assert r["delivered"] and r["id"] == 9001 and r["pr"] == "acme/widgets#142"
    assert captured == {"repo": "acme/widgets", "num": 142,
                        "body": "Verdict: needs work."}


def test_github_pr_transport_falls_back_to_to_field():
    t = transports.GitHubPRTransport(sender=lambda r, n, b: {"id": 1})
    r = t({"to": "acme/widgets#7", "body": "x"})
    assert r["delivered"] and r["pr"] == "acme/widgets#7"


def test_github_pr_transport_needs_pr_reference():
    t = transports.GitHubPRTransport(sender=lambda r, n, b: {"id": 1})
    r = t({"body": "orphan"})
    assert not r["delivered"] and "PR reference" in r["error"]
    r2 = t({"thread_id": "not-a-ref", "body": "x"})
    assert not r2["delivered"]


def test_github_pr_default_sender_requires_token():
    saved = {k: os.environ.pop(k, None) for k in ("GITHUB_TOKEN", "GH_TOKEN")}
    try:
        try:
            transports._default_github_pr_sender("acme/widgets", 1, "x")
            raised = False
        except RuntimeError as exc:
            raised = "GITHUB_TOKEN" in str(exc)
        assert raised        # fails loudly before any network when no token
    finally:
        for k, v in saved.items():
            if v is not None:
                os.environ[k] = v


def test_github_pr_end_to_end_approve_posts():
    # queue a review draft -> approve_send with the transport wired -> the
    # fake sender receives the body; nothing real can leak (fake only).
    from _assistant_fakes import FakeBackend
    from mcp_server_evosql import codereview

    fb = FakeBackend()
    fb.put(fb.memory, "ns1", "gh_thread_acme/widgets#142",
           {"source": "github", "kind": "pr", "repo": "acme/widgets",
            "number": 142, "title": "T", "body": "", "state": "open",
            "author": "octocat",
            "url": "https://github.com/acme/widgets/pull/142"})
    os.environ["EVOSQL_REVIEW_LLM"] = "anthropic"
    orig_llm = codereview._call_llm
    codereview._call_llm = lambda p, m: "Verdict: ship it."
    captured = {}
    try:
        out = codereview.review_pr(fb, "ns1", "acme/widgets#142", diff="diff x")
        assert out["ok"]
        os.environ["EVOSQL_SEND_ENABLED"] = "1"
        outbox.TRANSPORTS["github_pr"] = transports.GitHubPRTransport(
            sender=lambda repo, num, body: (captured.update(repo=repo, num=num,
                                                            body=body)
                                            or {"id": 1, "html_url": "u"}))
        res = outbox.approve_send(fb, "ns1", out["id"])
        assert res.get("sent") is True, res
        assert captured["repo"] == "acme/widgets" and captured["num"] == 142
        assert "ship it" in captured["body"]
    finally:
        codereview._call_llm = orig_llm
        os.environ.pop("EVOSQL_REVIEW_LLM", None)
        os.environ.pop("EVOSQL_SEND_ENABLED", None)
        outbox.TRANSPORTS.pop("github_pr", None)


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
             test_github_pr_transport_posts_review_comment,
             test_github_pr_transport_falls_back_to_to_field,
             test_github_pr_transport_needs_pr_reference,
             test_github_pr_default_sender_requires_token,
             test_github_pr_end_to_end_approve_posts,
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
