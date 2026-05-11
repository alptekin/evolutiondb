"""
Microsoft Graph thin wrapper for Teams chats.

Surface is intentionally narrow:
  - list_chats()              — every 1:1 + group chat the user is in
  - get_chat_messages(chat,…) — paginated messages, optionally bounded
                                by lastModifiedDateTime > since

Throttling: Graph returns 429 with a Retry-After header when the
caller is too aggressive. The wrapper sleeps that long and retries up
to a small budget; longer outages bubble up to the sync loop.
"""
from __future__ import annotations

import time
from typing import Callable, Dict, Iterable, Iterator, List, Optional

import httpx


GRAPH_BASE = "https://graph.microsoft.com/v1.0"
HTTP_TIMEOUT = httpx.Timeout(30.0, connect=10.0)


class GraphError(RuntimeError):
    def __init__(self, message: str, status: Optional[int] = None):
        super().__init__(message)
        self.status = status


class GraphClient:
    def __init__(self, token_provider: Callable[[], str]):
        # token_provider is called per-request so silent-refresh can
        # rotate tokens without the sync loop having to know.
        self._token_provider = token_provider
        self._client = httpx.Client(timeout=HTTP_TIMEOUT)
        self._me: Optional[Dict] = None

    def close(self) -> None:
        self._client.close()

    # -- public ------------------------------------------------------
    def get_me(self) -> Dict:
        """Return the signed-in user's profile (`id`, `displayName`,
        `userPrincipalName`). Cached for the lifetime of the client
        so per-message sender filtering doesn't hit Graph N times."""
        if self._me is None:
            resp = self._get_with_retry(f"{GRAPH_BASE}/me", retries=5)
            self._me = resp.json()
        return self._me

    def list_chats(self) -> List[Dict]:
        """Return every chat the user is part of, ordered by recent
        activity descending. `$expand=members` is essential for 1:1
        chats — they don't carry a topic, so the only way to render a
        useful chat_name like "Orhan Yılmaz" is to read the other
        member out of the member list. Result is small (Graph caps
        at the user's actual chat count, typically <500), so we
        materialize fully."""
        url = (f"{GRAPH_BASE}/me/chats?$top=50"
               f"&$orderby=lastMessagePreview/createdDateTime desc"
               f"&$expand=members,lastMessagePreview")
        return list(self._iter_pages(url))

    def get_chat_messages(self, chat_id: str,
                          since_iso: Optional[str] = None) -> Iterator[Dict]:
        """Yield messages from one chat, newest-first, stopping as soon
        as a message older than `since_iso` is seen.

        Graph supports `$filter=lastModifiedDateTime gt …` for chat
        messages but rejects it on some tenants — defensive client-side
        cutoff is more reliable."""
        url = f"{GRAPH_BASE}/chats/{chat_id}/messages?$top=50"
        for msg in self._iter_pages(url):
            if since_iso and (msg.get("lastModifiedDateTime") or
                               msg.get("createdDateTime") or "") <= since_iso:
                return
            yield msg

    # -- internals ---------------------------------------------------
    def _headers(self) -> Dict[str, str]:
        return {
            "Authorization": f"Bearer {self._token_provider()}",
            "Accept": "application/json",
        }

    def _iter_pages(self, url: Optional[str]) -> Iterator[Dict]:
        """Walk the @odata.nextLink chain and yield each value row.

        Graph's pagination is tail-recursive: each page carries the
        next URL until the final page omits the field. We honour
        Retry-After on 429 and 503 with bounded retry budget."""
        budget = 5
        while url:
            resp = self._get_with_retry(url, retries=budget)
            payload = resp.json()
            for row in payload.get("value", []):
                yield row
            url = payload.get("@odata.nextLink")

    def _get_with_retry(self, url: str, retries: int) -> httpx.Response:
        attempt = 0
        while True:
            resp = self._client.get(url, headers=self._headers())
            if resp.status_code == 200:
                return resp
            if resp.status_code in (429, 503) and attempt < retries:
                wait = self._retry_after_seconds(resp)
                time.sleep(wait)
                attempt += 1
                continue
            raise GraphError(
                f"GET {url} -> {resp.status_code}: {resp.text[:300]}",
                status=resp.status_code)

    @staticmethod
    def _retry_after_seconds(resp: httpx.Response) -> float:
        raw = resp.headers.get("Retry-After")
        if not raw:
            return 5.0
        try:
            return max(1.0, float(raw))
        except ValueError:
            # HTTP-date form is rare on Graph but spec-allowed; ignore
            # and use a default backoff.
            return 5.0


def chat_display_name(chat: Dict, me_id: Optional[str] = None) -> str:
    """Best-effort label for a chat. Group chats with an explicit
    topic return that topic. 1:1 chats have no topic, so we surface
    the other member's display name (excluding the signed-in user).
    Group chats without a topic fall back to a member list summary.

    Passing `me_id` is what makes 1:1 chats render as the other
    person's name; without it we'd return both members' names
    including the user's own, which adds noise to tags and
    `chat_name`."""
    topic = chat.get("topic")
    if topic:
        return topic
    members = chat.get("members") or []
    others = [m for m in members
              if m.get("displayName")
              and (not me_id or m.get("userId") != me_id)]
    if others:
        names = [m["displayName"] for m in others]
        return ", ".join(names[:3]) + (" ..." if len(names) > 3 else "")
    return chat.get("id", "unknown chat")


def strip_sender_prefix(text: str, sender_name: str) -> str:
    """Some Teams tenants render the sender's display name at the
    head of every message body, producing duplicated "Name | Org:
    Name | Org: ..." output when we then prepend the sender again
    for the searchable `fact` field. Strip an exact-prefix match of
    the sender's display name plus any leading separator, but only
    when the result still has content."""
    if not text or not sender_name:
        return text
    if text.startswith(sender_name):
        rest = text[len(sender_name):].lstrip(":|·- \t")
        if rest:
            return rest
    return text


def message_text(msg: Dict) -> str:
    """Return the plain-text body if the message is HTML or text;
    skip system messages (joins, leaves) by returning empty string."""
    if msg.get("messageType") and msg["messageType"] != "message":
        return ""
    body = msg.get("body") or {}
    content = body.get("content") or ""
    if body.get("contentType") == "html":
        return _strip_html(content)
    return content


def _strip_html(html: str) -> str:
    # Cheap stripper — Graph's HTML is well-formed and we don't care
    # about preserving formatting, only readable text.
    import re
    text = re.sub(r"<br\s*/?>", "\n", html, flags=re.I)
    text = re.sub(r"</p\s*>", "\n", text, flags=re.I)
    text = re.sub(r"<[^>]+>", "", text)
    text = re.sub(r"&nbsp;", " ", text)
    text = re.sub(r"&amp;", "&", text)
    text = re.sub(r"&lt;", "<", text)
    text = re.sub(r"&gt;", ">", text)
    text = re.sub(r"&quot;", '"', text)
    return text.strip()


def message_sender(msg: Dict) -> Dict[str, str]:
    """Extract a stable {name, id} pair for the sender. Graph nests
    this under from.user for human messages; bot messages live under
    from.application — we surface either."""
    src = (msg.get("from") or {})
    user = src.get("user") or src.get("application") or {}
    return {
        "name": user.get("displayName") or "",
        "id": user.get("id") or "",
    }
