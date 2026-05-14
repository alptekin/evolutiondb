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

import json
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from typing import Callable, Dict, Iterator, List, Optional


CAL_API = "https://www.googleapis.com/calendar/v3"


class CalendarError(Exception):
    def __init__(self, status: int, msg: str, url: str):
        super().__init__(f"{status} {msg} ({url})")
        self.status = status


class CalendarClient:
    def __init__(self, token_provider: Callable[[], str],
                 user_agent: str = "evolutiondb-calendar-sync"):
        self._token_provider = token_provider
        self.ua = user_agent

    def _get(self, path: str, params: Optional[Dict[str, str]] = None,
              retried: bool = False) -> Dict:
        url = f"{CAL_API}{path}"
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
