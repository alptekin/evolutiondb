"""
Microsoft Graph mail client. urllib only; bearer token comes from
outlook_sync.auth.OutlookAuth.ensure_token().

We use a single `$select` projection on /me/messages so each page
contains everything we need — subject, sender / recipients, body
preview, folder id, categories, importance, read state, plus the
full body. That trades a bigger page payload for one round trip per
50 messages instead of N+1.

Folder names come from a separate cheap call to /me/mailFolders which
we cache for the duration of the sync pass.
"""
from __future__ import annotations

import json
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from typing import Callable, Dict, Iterator, List, Optional


GRAPH_API = "https://graph.microsoft.com/v1.0"

# Fields we ask Graph to return per message. Keeping this list
# explicit means we never silently start storing fields users didn't
# expect (e.g. internetMessageHeaders, conversationIndex, etc.).
MESSAGE_SELECT = ",".join([
    "id",
    "internetMessageId",
    "subject",
    "from",
    "toRecipients",
    "ccRecipients",
    "receivedDateTime",
    "bodyPreview",
    "body",
    "hasAttachments",
    "importance",
    "isRead",
    "categories",
    "parentFolderId",
    "webLink",
])


class GraphError(Exception):
    def __init__(self, status: int, msg: str, url: str):
        super().__init__(f"{status} {msg} ({url})")
        self.status = status


class OutlookClient:
    def __init__(self, token_provider: Callable[[], str],
                 user_agent: str = "evolutiondb-outlook-sync"):
        self._token_provider = token_provider
        self.ua = user_agent

    def _get(self, url: str,
             params: Optional[Dict[str, str]] = None,
             retried: bool = False) -> Dict:
        if params:
            sep = "&" if "?" in url else "?"
            url = f"{url}{sep}{urllib.parse.urlencode(params)}"
        req = urllib.request.Request(url, headers={
            "Authorization": f"Bearer {self._token_provider()}",
            "Accept":        "application/json",
            "User-Agent":    self.ua,
            # Graph returns body.contentType=html unless we ask for
            # text. Asking for text means Graph strips formatting for
            # us — usually faster and more reliable than walking the
            # HTML on our side.
            "Prefer":        "outlook.body-content-type=\"text\"",
        })
        try:
            with urllib.request.urlopen(req, timeout=30) as resp:
                return json.loads(resp.read().decode() or "{}")
        except urllib.error.HTTPError as e:
            if e.code == 401 and not retried:
                return self._get(url, None, retried=True)
            if e.code == 429 and not retried:
                wait = int(e.headers.get("Retry-After") or "30")
                print(f"[outlook-sync] rate limited; sleeping {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)
                return self._get(url, None, retried=True)
            try:
                payload = json.loads(e.read().decode() or "{}")
                msg = (payload.get("error") or {}).get("message", str(e))
            except Exception:
                msg = str(e)
            raise GraphError(e.code, msg, url) from None

    # ---------------------------------------------------------------- #
    #  Pagination                                                       #
    # ---------------------------------------------------------------- #
    def _paginate(self, url: str,
                  params: Optional[Dict[str, str]] = None
                  ) -> Iterator[Dict]:
        next_url = url
        first = True
        while next_url:
            resp = self._get(next_url, params if first else None)
            first = False
            for it in resp.get("value", []):
                yield it
            next_url = resp.get("@odata.nextLink", "")

    # ---------------------------------------------------------------- #
    #  Public surface                                                   #
    # ---------------------------------------------------------------- #
    def list_messages(self, *,
                      received_after_iso: Optional[str] = None,
                      top: int = 50,
                      folder_filter: Optional[str] = None
                      ) -> Iterator[Dict]:
        """Yield message dicts in ascending `receivedDateTime` order
        so the watermark we record at the end of the pass is the
        highest value seen.

        `received_after_iso` is a UTC ISO 8601 timestamp like
        `2026-05-20T00:00:00Z`. Graph requires the value be quoted
        with single quotes inside the $filter expression.
        """
        params: Dict[str, str] = {
            "$select":  MESSAGE_SELECT,
            "$top":     str(top),
            "$orderby": "receivedDateTime asc",
        }
        filters: List[str] = []
        if received_after_iso:
            filters.append(f"receivedDateTime gt {received_after_iso}")
        if folder_filter:
            filters.append(f"parentFolderId eq '{folder_filter}'")
        if filters:
            params["$filter"] = " and ".join(filters)
        yield from self._paginate(f"{GRAPH_API}/me/messages", params)

    def list_folders(self) -> List[Dict]:
        """Flat list of mail folders. Graph returns nested children
        only when explicitly walked, so a single top-level call gets
        all the user's primary folders — good enough for parent name
        resolution; nested folders show up as their own entries."""
        out: List[Dict] = []
        for f in self._paginate(f"{GRAPH_API}/me/mailFolders",
                                {"$top": "100"}):
            out.append(f)
        return out

    def get_user(self) -> Dict:
        return self._get(f"{GRAPH_API}/me")


def addr_text(addr: Optional[Dict]) -> str:
    """Graph email addresses arrive as
    `{"emailAddress": {"name": "...", "address": "..."}}`. Flatten to
    a single `Name <addr>` string the search index can grep."""
    if not addr:
        return ""
    ea = addr.get("emailAddress") or {}
    name, address = ea.get("name", ""), ea.get("address", "")
    if name and address and name != address:
        return f"{name} <{address}>"
    return address or name or ""


def recipient_list(items: Optional[List[Dict]]) -> str:
    if not items:
        return ""
    return ", ".join(filter(None, (addr_text(it) for it in items)))
