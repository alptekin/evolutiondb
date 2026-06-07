"""
Google Calendar REST client. urllib only; bearer token comes from
calendar_sync.auth.GmailAuth.ensure_token() (the auth module is the
same as gmail-sync's, only the requested scope differs).

We use Google's native incremental-sync token (`syncToken`) rather
than a wall-clock watermark: pass the token from the previous run
and Google returns only the events that changed since then. On the
very first run we pass `updatedMin` instead, then keep the
`nextSyncToken` from the response for every later call.
"""
from __future__ import annotations

import http.client
import json
import socket
import ssl
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from typing import Callable, Dict, Iterator, List, Optional


CAL_API = "https://www.googleapis.com/calendar/v3"

# Transport-level hiccups that are worth retrying: read timeouts, SSL
# EOF / resets, dropped keep-alive connections, truncated reads. These
# are distinct from HTTPError (an HTTP response we did get) and must not
# crash a 365-day backfill — a single flaky page would otherwise lose
# the whole pass.
_TRANSIENT = (
    socket.timeout,
    TimeoutError,
    urllib.error.URLError,   # wraps ssl.SSLError / SSL EOF in .reason
    ssl.SSLError,
    ConnectionError,         # ConnectionResetError, etc.
    http.client.RemoteDisconnected,
    http.client.IncompleteRead,
    http.client.BadStatusLine,
)
_RETRY_BACKOFF = (1, 2, 4, 8, 16)   # seconds; ~5 attempts then re-raise
_HTTP_TIMEOUT = 90                  # per-request read timeout (seconds)

# Transient HTTP server errors (a real response, so HTTPError, not a
# transport hiccup) that Google occasionally returns under load. Retry
# them a bounded number of times with backoff before giving up — a 5xx
# blip on one page must not fail a whole calendar.
_SERVER_ERRORS = (500, 502, 503, 504)
_SERVER_RETRY_BACKOFF = (1, 2, 4, 8)   # seconds; ~4 attempts then raise


class CalendarError(Exception):
    def __init__(self, status: int, msg: str, url: str):
        super().__init__(f"{status} {msg} ({url})")
        self.status = status


class CalendarClient:
    def __init__(self, token_provider: Callable[[], str],
                 user_agent: str = "evolutiondb-calendar-sync"):
        self._token_provider = token_provider
        self.ua = user_agent

    def _urlopen_json(self, req: urllib.request.Request) -> Dict:
        """Issue the request, retrying transient transport failures with
        exponential backoff. HTTPError is *not* retried here — it carries
        a real HTTP response (401/429/410/…) that _get() handles itself —
        so we let it propagate untouched."""
        for attempt, wait in enumerate(_RETRY_BACKOFF, start=1):
            try:
                with urllib.request.urlopen(req, timeout=_HTTP_TIMEOUT) as resp:
                    return json.loads(resp.read().decode() or "{}")
            except urllib.error.HTTPError:
                raise  # real HTTP response — caller's except handles it
            except _TRANSIENT as e:
                if attempt >= len(_RETRY_BACKOFF):
                    raise  # out of attempts — surface the transport error
                print(f"[calendar-sync] transient {e}; "
                      f"retry {attempt}/{len(_RETRY_BACKOFF)} in {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)
        # unreachable: the loop either returns or re-raises
        raise RuntimeError("retry loop exhausted")

    def _get(self, path: str, params: Optional[Dict[str, str]] = None,
              retried: bool = False, server_attempt: int = 0) -> Dict:
        url = f"{CAL_API}{path}"
        if params:
            url = f"{url}?{urllib.parse.urlencode(params)}"
        req = urllib.request.Request(url, headers={
            "Authorization": f"Bearer {self._token_provider()}",
            "Accept":        "application/json",
            "User-Agent":    self.ua,
        })
        try:
            return self._urlopen_json(req)
        except urllib.error.HTTPError as e:
            if e.code == 401 and not retried:
                # Access token expired between provider-call and
                # request — provider auto-refreshes, so one retry.
                return self._get(path, params, retried=True)
            if e.code == 429 and not retried:
                wait = int(e.headers.get("Retry-After") or "30")
                print(f"[calendar-sync] rate limited; sleeping {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)
                return self._get(path, params, retried=True)
            if e.code == 410:
                # syncToken expired (older than 30 days). Caller has
                # to drop the token and do a full re-sync. We surface
                # this as a typed exception so the sync loop can
                # handle it cleanly.
                raise SyncTokenExpired() from None
            if e.code in _SERVER_ERRORS and server_attempt < len(
                    _SERVER_RETRY_BACKOFF):
                # Transient Google 5xx. Back off and retry a bounded
                # number of times before falling through to raising
                # CalendarError, so a momentary blip on one page does
                # not fail the whole calendar.
                wait = _SERVER_RETRY_BACKOFF[server_attempt]
                print(f"[calendar-sync] server error {e.code}; "
                      f"retry {server_attempt + 1}/"
                      f"{len(_SERVER_RETRY_BACKOFF)} in {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)
                return self._get(path, params, retried=retried,
                                 server_attempt=server_attempt + 1)
            try:
                payload = json.loads(e.read().decode() or "{}")
                msg = (payload.get("error") or {}).get("message", str(e))
            except Exception:
                msg = str(e)
            raise CalendarError(e.code, msg, url) from None

    # ---------------------------------------------------------------- #
    #  Public surface                                                   #
    # ---------------------------------------------------------------- #
    def list_calendars(self) -> List[Dict]:
        """Every calendar the signed-in user has access to —
        owned, subscribed, holiday feeds, etc."""
        items: List[Dict] = []
        page_token = ""
        while True:
            params = {}
            if page_token:
                params["pageToken"] = page_token
            resp = self._get("/users/me/calendarList", params)
            items.extend(resp.get("items", []) or [])
            page_token = resp.get("nextPageToken", "")
            if not page_token:
                break
        return items

    def list_events(self, calendar_id: str, *,
                     sync_token: Optional[str] = None,
                     updated_min_iso: Optional[str] = None,
                     ) -> Dict:
        """Walk every event on `calendar_id` (paginated). When
        `sync_token` is set it does an incremental delta against
        the previous run; otherwise `updated_min_iso` bootstraps
        with a wall-clock floor.

        Returns {events: [...], next_sync_token: str | None}. Caller
        persists next_sync_token to use on the following run."""
        events: List[Dict] = []
        page_token = ""
        next_sync_token: Optional[str] = None
        while True:
            params: Dict[str, str] = {
                "singleEvents": "true",
                "maxResults":   "250",
            }
            if sync_token:
                params["syncToken"] = sync_token
            elif updated_min_iso:
                params["updatedMin"] = updated_min_iso
                params["showDeleted"] = "true"
            if page_token:
                params["pageToken"] = page_token

            resp = self._get(
                f"/calendars/{urllib.parse.quote(calendar_id, safe='')}/events",
                params)
            events.extend(resp.get("items", []) or [])
            page_token = resp.get("nextPageToken", "")
            next_sync_token = (resp.get("nextSyncToken")
                               or next_sync_token)
            if not page_token:
                break
        return {"events": events, "next_sync_token": next_sync_token}


class SyncTokenExpired(Exception):
    """Raised when Google returns 410 Gone — the syncToken is older
    than 30 days and a full re-sync is required."""
    def __init__(self, msg: str = "syncToken expired (410 Gone); "
                                   "full re-sync required"):
        super().__init__(msg)
