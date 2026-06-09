"""
transports — real channel senders for the outbox (the optional last step).

A transport is a callable(item) -> result dict registered into
outbox.TRANSPORTS under its channel name. It is the ONLY place an actual message
leaves the machine, and it is wired in only when the operator opts in:

    EVOSQL_SEND_ENABLED=1            # the global send lock (outbox checks this)
    EVOSQL_SEND_CHANNELS=gmail       # which channels get a real transport

With neither set, TRANSPORTS stays empty and every approve_send dry-runs — the
default. The Gmail sender needs a `gmail.send`-scoped token (separate from the
read-only ingest connector); see gmail-sync auth with the send scope enabled.

The MIME build and the registration gate are pure / injectable, so the test
suite exercises them with a fake sender and never emits a real message.
"""
from __future__ import annotations

import base64
import os
from email.message import EmailMessage

from . import outbox


def build_raw_email(to: str, subject: str, body: str, *,
                    from_addr: str | None = None) -> str:
    """RFC-822 message, base64url-encoded for Gmail users.messages.send `raw`."""
    msg = EmailMessage()
    msg["To"] = to
    if from_addr:
        msg["From"] = from_addr
    msg["Subject"] = subject or "(no subject)"
    msg.set_content(body or "")
    return base64.urlsafe_b64encode(msg.as_bytes()).decode("ascii")


def _reply_subject(item) -> str:
    subj = (item.get("subject") or "").strip()
    if not subj:
        return "Re: (no subject)"
    return subj if subj[:3].lower() == "re:" else f"Re: {subj}"


class GmailSendTransport:
    """Sends a queued reply via Gmail. `sender(raw, thread_id) -> dict` does the
    actual API call; injected for tests (default wires the real Gmail API)."""

    channel = "gmail"

    def __init__(self, sender=None):
        self._sender = sender or _default_gmail_sender

    def __call__(self, item) -> dict:
        to = (item.get("to_email") or item.get("to") or "").strip()
        if "@" not in to:
            # a display name is not a deliverable address — fail loudly, do not
            # silently dry-run (the caller must supply / resolve a real recipient)
            return {"delivered": False, "dry_run": False,
                    "error": f"no recipient email address (got {to!r})"}
        raw = build_raw_email(to, _reply_subject(item), item.get("body", ""))
        res = self._sender(raw, item.get("thread_id")) or {}
        return {"delivered": True, "id": res.get("id"),
                "thread_id": res.get("threadId"), "to": to}


def _default_gmail_sender(raw: str, thread_id):
    """Real Gmail users.messages.send. Lazily imports gmail-sync (optional dep)
    and posts with a send-scoped token. Raises if gmail-sync isn't installed or
    the cached token lacks gmail.send."""
    import json
    import urllib.request

    try:
        from gmail_sync.auth import GmailAuth   # type: ignore
    except Exception as exc:  # pragma: no cover - exercised only with real send
        raise RuntimeError(
            "gmail send transport needs the gmail-sync package with a "
            "gmail.send-scoped token") from exc

    cache = os.environ.get("EVOSQL_GMAIL_TOKEN_CACHE",
                           os.path.expanduser("~/.evosql/gmail_token.json"))
    auth = GmailAuth(
        client_id=os.environ["EVOSQL_GMAIL_CLIENT_ID"],
        client_secret=os.environ.get("EVOSQL_GMAIL_CLIENT_SECRET", ""),
        cache_path=cache)
    token = auth.ensure_token(interactive=False)
    payload = {"raw": raw}
    if thread_id:
        payload["threadId"] = thread_id
    req = urllib.request.Request(
        "https://gmail.googleapis.com/gmail/v1/users/me/messages/send",
        data=json.dumps(payload).encode(),
        headers={"Authorization": f"Bearer {token}",
                 "Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=60) as resp:
        return json.loads(resp.read().decode() or "{}")


class TeamsSendTransport:
    """Sends a queued reply into a Teams chat. The loop's thread_id IS the
    chat_id (open_loops keys teams threads by chat_id), so there is no recipient
    address to resolve — the chat identifies the conversation. `sender(chat_id,
    body) -> dict` does the Graph call; injected for tests."""

    channel = "teams"

    def __init__(self, sender=None):
        self._sender = sender or _default_teams_sender

    def __call__(self, item) -> dict:
        chat_id = (item.get("thread_id") or "").strip()
        if not chat_id:
            return {"delivered": False, "dry_run": False,
                    "error": "no chat id (thread_id) to reply into"}
        res = self._sender(chat_id, item.get("body", "")) or {}
        return {"delivered": True, "id": res.get("id"), "chat_id": chat_id}


def _default_teams_sender(chat_id: str, body: str):
    """Real Graph POST /chats/{chat_id}/messages. Lazily imports teams-sync
    (optional dep) and posts with a ChatMessage.Send-scoped token. Raises if
    teams-sync isn't installed or the token lacks the send scope."""
    import json
    import urllib.request

    try:
        from teams_sync.auth import TeamsAuth   # type: ignore
    except Exception as exc:  # pragma: no cover - exercised only with real send
        raise RuntimeError(
            "teams send transport needs the teams-sync package with a "
            "ChatMessage.Send-scoped token") from exc

    cache = os.environ.get("EVOSQL_TEAMS_TOKEN_CACHE",
                           os.path.expanduser("~/.evosql/teams_token.json"))
    auth = TeamsAuth(tenant_id=os.environ.get("AZURE_TENANT_ID", "common"),
                     client_id=os.environ["AZURE_CLIENT_ID"], cache_path=cache)
    token = auth.get_token()
    req = urllib.request.Request(
        f"https://graph.microsoft.com/v1.0/chats/{chat_id}/messages",
        data=json.dumps({"body": {"content": body or ""}}).encode(),
        headers={"Authorization": f"Bearer {token}",
                 "Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=60) as resp:
        return json.loads(resp.read().decode() or "{}")


_BUILDERS = {"gmail": GmailSendTransport, "teams": TeamsSendTransport}


def register_from_env(*, builders=None):
    """Wire the opt-in transports into outbox.TRANSPORTS. No-op (TRANSPORTS stays
    empty) unless EVOSQL_SEND_ENABLED is set AND EVOSQL_SEND_CHANNELS names a
    channel — so the safe default registers nothing. Returns the channels wired."""
    builders = builders or _BUILDERS
    if os.environ.get("EVOSQL_SEND_ENABLED", "").strip().lower() not in (
            "1", "true", "yes", "on"):
        return []
    wired = []
    for ch in (c.strip() for c in
               os.environ.get("EVOSQL_SEND_CHANNELS", "").split(",")):
        if ch and ch in builders:
            outbox.TRANSPORTS[ch] = builders[ch]()
            wired.append(ch)
    return wired
