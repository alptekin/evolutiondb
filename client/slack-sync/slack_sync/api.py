"""
Thin Slack Web API client — urllib only, no slack_sdk dep.

Token is a User OAuth token (xoxp-). The package only ever calls
the read-side conversations.* + users.info, so the scope set the
user has to add to their Slack app is small:

  channels:history    — public channels you've joined
  groups:history      — private channels
  im:history          — DMs
  mpim:history        — group DMs
  channels:read       — list the channels above
  groups:read
  im:read
  mpim:read
  users:read          — resolve sender names

Rate limit: Slack returns 429 with `Retry-After` for throttled
endpoints. We honour it and retry exactly once.
"""
from __future__ import annotations

import json
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from typing import Dict, Iterator, List, Optional


SLACK_API = "https://slack.com/api"


class SlackError(Exception):
    def __init__(self, code: str, msg: str, url: str):
        super().__init__(f"{code}: {msg} ({url})")
        self.code = code
        self.url  = url


class SlackClient:
    def __init__(self, token: str, user_agent: str = "evolutiondb-slack-sync"):
        if not token:
            raise SlackError("no_token", "missing user token", SLACK_API)
        self.token = token
        self.ua    = user_agent
        self._user_cache: Dict[str, str] = {}

    # ---------------------------------------------------------------- #
    #  Low-level GET                                                    #
    # ---------------------------------------------------------------- #
    def _get(self, method: str, params: Optional[Dict[str, str]] = None,
              retried: bool = False) -> Dict:
        url = f"{SLACK_API}/{method}"
        if params:
            url = f"{url}?{urllib.parse.urlencode(params)}"
        req = urllib.request.Request(url, headers={
            "Authorization": f"Bearer {self.token}",
            "Accept":        "application/json",
            "User-Agent":    self.ua,
        })
        try:
            with urllib.request.urlopen(req, timeout=30) as resp:
                payload = json.loads(resp.read().decode() or "{}")
        except urllib.error.HTTPError as e:
            if e.code == 429 and not retried:
                wait = int(e.headers.get("Retry-After") or "30")
                print(f"[slack-sync] rate limited; sleeping {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)
                return self._get(method, params, retried=True)
            raise SlackError("http_error", str(e), url) from None

        if not payload.get("ok"):
            err = payload.get("error", "unknown")
            # Soft fail for the common case where the user removed
            # themselves from a channel between list and history.
            raise SlackError(err, payload.get("error_description", ""), url)
        return payload

    # ---------------------------------------------------------------- #
    #  Pagination                                                       #
    # ---------------------------------------------------------------- #
    def _cursor_paginate(self, method: str, key: str,
                          params: Optional[Dict[str, str]] = None,
                          ) -> Iterator[Dict]:
        params = dict(params or {})
        cursor = ""
        while True:
            if cursor:
                params["cursor"] = cursor
            params.setdefault("limit", "200")
            resp = self._get(method, params)
            for item in resp.get(key, []):
                yield item
            cursor = (resp.get("response_metadata") or {}).get("next_cursor", "")
            if not cursor:
                return

    # ---------------------------------------------------------------- #
    #  Public surface                                                   #
    # ---------------------------------------------------------------- #
    def list_conversations(self) -> Iterator[Dict]:
        """All conversations the token's user is a member of —
        DMs, group DMs, public channels they've joined, private
        channels."""
        yield from self._cursor_paginate(
            "conversations.list", "channels",
            {"types": "public_channel,private_channel,mpim,im",
             "exclude_archived": "true"})

    def history(self, channel: str,
                 oldest: Optional[float] = None) -> Iterator[Dict]:
        """Messages newer than `oldest` (unix seconds). Slack returns
        the latest first; we reverse so downstream sees chronological
        order which keeps watermark logic monotonic."""
        params: Dict[str, str] = {"channel": channel}
        if oldest is not None:
            params["oldest"] = f"{oldest:.6f}"
        # Slice into pages, then chronologise the whole batch.
        msgs: List[Dict] = []
        for m in self._cursor_paginate("conversations.history",
                                         "messages", params):
            msgs.append(m)
        msgs.sort(key=lambda m: float(m.get("ts") or 0))
        yield from msgs

    def replies(self, channel: str, thread_ts: str,
                 oldest: Optional[float] = None) -> Iterator[Dict]:
        params: Dict[str, str] = {"channel": channel, "ts": thread_ts}
        if oldest is not None:
            params["oldest"] = f"{oldest:.6f}"
        msgs: List[Dict] = []
        for m in self._cursor_paginate("conversations.replies",
                                         "messages", params):
            # The parent thread message is included in replies — skip
            # it; history() already captured it.
            if m.get("ts") == thread_ts:
                continue
            msgs.append(m)
        msgs.sort(key=lambda m: float(m.get("ts") or 0))
        yield from msgs

    def user_name(self, user_id: str) -> str:
        """Resolve a `U…` id to a display name with caching. Returns
        the id itself if the lookup fails (deleted user / scope
        missing) so records still carry *something*."""
        if not user_id:
            return ""
        cached = self._user_cache.get(user_id)
        if cached is not None:
            return cached
        try:
            payload = self._get("users.info", {"user": user_id})
            u = payload.get("user") or {}
            name = (u.get("profile", {}).get("display_name")
                    or u.get("profile", {}).get("real_name")
                    or u.get("real_name")
                    or u.get("name")
                    or user_id)
        except SlackError:
            name = user_id
        self._user_cache[user_id] = name
        return name


def conversation_display_name(conv: Dict, client: SlackClient) -> str:
    """One-shot human label for a conversation row from
    conversations.list. DMs end up as the other user's display name,
    channels as `#name`, group DMs as the joined participant list."""
    if conv.get("is_im"):
        return client.user_name(conv.get("user", ""))
    if conv.get("is_mpim"):
        # `purpose.value` for an mpim is "Group messaging with U…, U…",
        # which is what we want.
        return conv.get("purpose", {}).get("value") \
                or conv.get("name", conv.get("id", ""))
    if conv.get("is_channel") or conv.get("is_group"):
        return f"#{conv.get('name', conv.get('id', ''))}"
    return conv.get("name", conv.get("id", ""))
