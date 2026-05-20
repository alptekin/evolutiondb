"""Tiny YouTube Data API v3 client. stdlib urllib, no SDK pin."""
from __future__ import annotations

import json
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from typing import Callable, Dict, Iterator, List, Optional


_API = "https://youtube.googleapis.com/youtube/v3"


class YouTubeError(Exception):
    def __init__(self, status: int, msg: str, url: str):
        super().__init__(f"{status} {msg} ({url})")
        self.status = status


class YouTubeClient:
    def __init__(self, token_provider: Callable[[], str],
                 user_agent: str = "evolutiondb-youtube-sync"):
        self._token_provider = token_provider
        self.ua = user_agent

    def _get(self, path: str,
              params: Optional[Dict[str, str]] = None,
              retried: bool = False) -> Dict:
        url = f"{_API}{path}"
        if params:
            url = f"{url}?{urllib.parse.urlencode(params, doseq=True)}"
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
                return self._get(path, params, retried=True)
            if e.code == 429 and not retried:
                wait = int(e.headers.get("Retry-After") or "30")
                print(f"[youtube-sync] rate limited; sleeping {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)
                return self._get(path, params, retried=True)
            try:
                payload = json.loads(e.read().decode() or "{}")
                msg = (payload.get("error") or {}).get("message", str(e))
            except Exception:
                msg = str(e)
            raise YouTubeError(e.code, msg, url) from None

    def _paginate(self, path: str, key: str,
                   params: Dict[str, str]) -> Iterator[Dict]:
        params = dict(params)
        token = ""
        while True:
            if token:
                params["pageToken"] = token
            resp = self._get(path, params)
            for it in resp.get(key, []):
                yield it
            token = resp.get("nextPageToken") or ""
            if not token:
                return

    # ---------- public surface ----------
    def subscriptions(self) -> Iterator[Dict]:
        yield from self._paginate("/subscriptions", "items", {
            "part": "snippet",
            "mine": "true",
            "maxResults": "50",
        })

    def playlists(self) -> Iterator[Dict]:
        yield from self._paginate("/playlists", "items", {
            "part": "snippet,contentDetails",
            "mine": "true",
            "maxResults": "50",
        })

    def playlist_items(self, playlist_id: str) -> Iterator[Dict]:
        yield from self._paginate("/playlistItems", "items", {
            "part": "snippet,contentDetails",
            "playlistId": playlist_id,
            "maxResults": "50",
        })

    def liked_videos(self) -> Iterator[Dict]:
        """`LL` is the synthetic playlist id for the user's liked
        videos; the YouTube API accepts it on /playlistItems."""
        yield from self.playlist_items("LL")
