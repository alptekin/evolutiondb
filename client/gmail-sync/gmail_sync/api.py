"""
Gmail REST client. urllib only; bearer token comes from
gmail_sync.auth.GmailAuth.ensure_token().

We stay in metadata mode (subject, from, to, date) plus Gmail's
provided `snippet` (~150 chars). Pulling full message bodies means
walking the multipart MIME tree and decoding base64url payloads,
which is way more code than the recall use-case justifies. If you
want full bodies, swap `format=metadata` for `format=full` and add
a body-extraction helper.
"""
from __future__ import annotations

import json
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from typing import Callable, Dict, Iterator, List, Optional


GMAIL_API = "https://gmail.googleapis.com/gmail/v1"

# Headers we lift onto the record for `search_memory`. Anything not
# in this list is dropped — keeps record size under control on
# digest emails with 20+ headers.
KEEP_HEADERS = {"From", "To", "Cc", "Subject", "Date", "Message-ID"}


class GmailError(Exception):
    def __init__(self, status: int, msg: str, url: str):
        super().__init__(f"{status} {msg} ({url})")
        self.status = status


class GmailClient:
    def __init__(self, token_provider: Callable[[], str],
                 user_agent: str = "evolutiondb-gmail-sync"):
        self._token_provider = token_provider
        self.ua = user_agent

    def _get(self, path: str, params: Optional[Dict[str, str]] = None,
              retried: bool = False) -> Dict:
        url = f"{GMAIL_API}{path}"
        if params:
            url = f"{url}?{urllib.parse.urlencode(params)}"
        req = urllib.request.Request(url, headers={
            "Authorization": f"Bearer {self._token_provider()}",
            "Accept":        "application/json",
            "User-Agent":    self.ua,
        })
        try:
            with urllib.request.urlopen(req, timeout=30) as resp:
                return json.loads(resp.read().decode() or "{}")
        except urllib.error.HTTPError as e:
            # 401 → access token expired between provider-call and
            # actual request. The provider auto-refreshes on demand,
            # so one retry is enough.
            if e.code == 401 and not retried:
                return self._get(path, params, retried=True)
            if e.code == 429 and not retried:
                wait = int(e.headers.get("Retry-After") or "30")
                print(f"[gmail-sync] rate limited; sleeping {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)
                return self._get(path, params, retried=True)
            try:
                payload = json.loads(e.read().decode() or "{}")
                msg = (payload.get("error") or {}).get("message", str(e))
            except Exception:
                msg = str(e)
            raise GmailError(e.code, msg, url) from None

    # ---------------------------------------------------------------- #
    #  Pagination                                                       #
    # ---------------------------------------------------------------- #
    def _paginate(self, path: str, key: str,
                   params: Optional[Dict[str, str]] = None
                   ) -> Iterator[Dict]:
        params = dict(params or {})
        token = ""
        while True:
            if token:
                params["pageToken"] = token
            resp = self._get(path, params)
            for it in resp.get(key, []):
                yield it
            token = resp.get("nextPageToken", "")
            if not token:
                return

    # ---------------------------------------------------------------- #
    #  Public surface                                                   #
    # ---------------------------------------------------------------- #
    def list_messages(self, q: str,
                       max_results: int = 100) -> Iterator[Dict]:
        """`q` follows Gmail search syntax — same thing you type in the
        web UI. e.g. `after:2026/05/01 newer_than:7d -category:promotions`."""
        yield from self._paginate(
            "/users/me/messages", "messages",
            {"q": q, "maxResults": str(max_results)})

    def get_message_metadata(self, msg_id: str) -> Dict:
        return self._get(
            f"/users/me/messages/{msg_id}",
            {"format": "metadata",
             "metadataHeaders": "From,To,Cc,Subject,Date,Message-ID"})

    def list_labels(self) -> List[Dict]:
        resp = self._get("/users/me/labels")
        return resp.get("labels", []) or []


def headers_to_dict(headers: List[Dict]) -> Dict[str, str]:
    """Convert the Gmail `payload.headers` array into a flat dict,
    keeping only the headers in KEEP_HEADERS. Multiple Cc lines get
    comma-joined into one value."""
    out: Dict[str, str] = {}
    for h in headers or []:
        name = h.get("name")
        if not name or name not in KEEP_HEADERS:
            continue
        if name in out:
            out[name] = f"{out[name]}, {h.get('value', '')}"
        else:
            out[name] = h.get("value", "")
    return out
