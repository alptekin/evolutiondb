"""
Thin GitHub REST client over urllib — keeps the package free of
PyGithub / requests churn and avoids transitive deps that conflict
with psycopg's wheel.

Surface:
  - search_involves(user, since_iso) — PRs + issues the user is
    involved in (author / assignee / commenter / mentioned),
    updated after `since_iso`. Uses /search/issues.
  - get_pr_review_comments(repo, number) — diff-anchored comments.
  - get_issue_comments(repo, number) — general thread comments.
  - get_pr_reviews(repo, number) — review approvals + change requests
    with their summary body.

Rate limiting: GitHub returns 60/hr unauth, 5000/hr with a token.
The client honours `X-RateLimit-Remaining` + `X-RateLimit-Reset` —
when remaining hits zero it sleeps until reset and retries. Also
honours `Retry-After` (search secondary-rate-limit signal).
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
from typing import Dict, Iterator, List, Optional


GITHUB_API = "https://api.github.com"

# Per-request socket timeout. Bumped from 30s — GitHub's /search can be
# slow under load and a tight timeout turns a slow page into a crash.
_REQUEST_TIMEOUT = 90

# Transient transport failures that should be retried with backoff rather
# than propagated out of the paginator (which would crash the whole pass).
# urllib wraps SSL EOF / read-timeout in URLError; ConnectionError covers
# ConnectionResetError; the http.client trio shows up on dropped keep-alives.
_TRANSIENT = (
    socket.timeout,
    TimeoutError,
    urllib.error.URLError,
    ssl.SSLError,
    ConnectionError,
    http.client.RemoteDisconnected,
    http.client.IncompleteRead,
    http.client.BadStatusLine,
)
# Exponential backoff: 1, 2, 4, 8, 16s — cap at 5 attempts then re-raise.
_RETRY_BACKOFF = (1, 2, 4, 8, 16)

# Maximum number of 403 secondary-rate-limit `Retry-After` waits before we
# give up and raise. A persistent 403 must not recurse/spin forever.
_MAX_RATE_LIMIT_RETRIES = 5


class GitHubError(Exception):
    def __init__(self, status: int, msg: str, url: str):
        super().__init__(f"{status} {msg} ({url})")
        self.status = status
        self.url    = url


class GitHubClient:
    def __init__(self, token: str, user_agent: str = "evolutiondb-github-sync"):
        if not token:
            raise GitHubError(401, "no token", GITHUB_API)
        self.token = token
        self.ua    = user_agent
        # The two upper bounds GitHub publishes — we treat both the same.
        self._sleep_until = 0.0

    # ---------------------------------------------------------------- #
    #  Low-level GET — wraps urllib + rate-limit handling.              #
    # ---------------------------------------------------------------- #
    def _get(self, path: str, params: Optional[Dict[str, str]] = None,
             _rl_attempt: int = 0) -> Dict:
        url = path if path.startswith("http") else f"{GITHUB_API}{path}"
        if params:
            url = f"{url}?{urllib.parse.urlencode(params)}"

        now = time.time()
        if now < self._sleep_until:
            time.sleep(self._sleep_until - now)

        req = urllib.request.Request(url, headers={
            "Authorization":        f"Bearer {self.token}",
            "Accept":               "application/vnd.github+json",
            "X-GitHub-Api-Version": "2022-11-28",
            "User-Agent":           self.ua,
        })
        # Retry transient transport failures with exponential backoff. The
        # rate-limit (HTTPError) handling below is left untouched — an
        # HTTPError is never transient, so it short-circuits the loop.
        for attempt in range(len(_RETRY_BACKOFF) + 1):
            try:
                with urllib.request.urlopen(
                        req, timeout=_REQUEST_TIMEOUT) as resp:
                    self._capture_rate_window(resp.headers)
                    body = resp.read()
                    return {
                        "status":  resp.status,
                        "headers": dict(resp.headers),
                        "data":    json.loads(body) if body else None,
                    }
            except urllib.error.HTTPError as e:
                self._capture_rate_window(e.headers)
                if e.code == 403 and e.headers.get("Retry-After"):
                    # Secondary rate limit — wait and retry, but bound the
                    # number of waits so a persistent 403 cannot recurse or
                    # spin forever.
                    if _rl_attempt >= _MAX_RATE_LIMIT_RETRIES:
                        raise GitHubError(
                            403,
                            f"secondary rate limit not cleared after "
                            f"{_MAX_RATE_LIMIT_RETRIES} Retry-After waits",
                            url,
                        ) from None
                    wait = int(e.headers.get("Retry-After") or "30")
                    print(f"[github-sync] secondary rate limit; sleeping "
                          f"{wait}s (attempt {_rl_attempt + 1}/"
                          f"{_MAX_RATE_LIMIT_RETRIES})",
                          file=sys.stderr, flush=True)
                    time.sleep(wait)
                    return self._get(path, params,
                                     _rl_attempt=_rl_attempt + 1)
                try:
                    payload = json.loads(e.read().decode() or "{}")
                    msg = payload.get("message", str(e))
                except Exception:
                    msg = str(e)
                raise GitHubError(e.code, msg, url) from None
            except _TRANSIENT as e:
                if attempt >= len(_RETRY_BACKOFF):
                    raise
                wait = _RETRY_BACKOFF[attempt]
                print(f"[github-sync] transient {e}; "
                      f"retry {attempt + 1}/{len(_RETRY_BACKOFF)} in {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)

    def _capture_rate_window(self, headers) -> None:
        try:
            remaining = int(headers.get("X-RateLimit-Remaining", "1"))
            reset     = int(headers.get("X-RateLimit-Reset",
                                        str(int(time.time()))))
        except (TypeError, ValueError):
            return
        if remaining == 0:
            self._sleep_until = reset + 1
            print(f"[github-sync] rate limit exhausted, sleeping until "
                  f"{reset}", file=sys.stderr, flush=True)

    # ---------------------------------------------------------------- #
    #  Pagination helper                                                #
    # ---------------------------------------------------------------- #
    def _paginate(self, path: str,
                  params: Optional[Dict[str, str]] = None,
                  key: Optional[str] = None) -> Iterator[Dict]:
        """Yield items across page boundaries. `key` is the JSON field
        the items live under for search endpoints (`items`); plain
        list endpoints return a top-level array, leave `key=None`."""
        page = 1
        params = dict(params or {})
        while True:
            params["per_page"] = "100"
            params["page"]     = str(page)
            resp = self._get(path, params)
            data = resp["data"]
            if key is not None:
                items = (data or {}).get(key, [])
            else:
                items = data or []
            if not items:
                return
            for item in items:
                yield item
            if len(items) < 100:
                return
            page += 1

    # ---------------------------------------------------------------- #
    #  Public surface                                                   #
    # ---------------------------------------------------------------- #
    def search_involves(self, user: str,
                        since_iso: Optional[str] = None) -> Iterator[Dict]:
        """PRs + issues `user` is involved in, updated since `since_iso`.
        Uses /search/issues — caps at 1000 results per query, so a
        narrow since window is important for very active accounts."""
        q = f"involves:{user}"
        if since_iso:
            q += f" updated:>{since_iso}"
        yield from self._paginate("/search/issues",
                                  {"q": q, "sort": "updated", "order": "asc"},
                                  key="items")

    def get_pr_review_comments(self, owner: str, repo: str,
                                number: int) -> List[Dict]:
        return list(self._paginate(
            f"/repos/{owner}/{repo}/pulls/{number}/comments"))

    def get_issue_comments(self, owner: str, repo: str,
                            number: int) -> List[Dict]:
        return list(self._paginate(
            f"/repos/{owner}/{repo}/issues/{number}/comments"))

    def get_pr_reviews(self, owner: str, repo: str,
                        number: int) -> List[Dict]:
        return list(self._paginate(
            f"/repos/{owner}/{repo}/pulls/{number}/reviews"))


def parse_repository_url(url: str) -> Optional[Dict[str, str]]:
    """Pull `{owner, repo}` out of a `repository_url` returned by
    /search/issues. Returns None if the shape is unexpected."""
    # https://api.github.com/repos/<owner>/<repo>
    if not url or "/repos/" not in url:
        return None
    tail = url.split("/repos/", 1)[1]
    parts = tail.split("/")
    if len(parts) < 2:
        return None
    return {"owner": parts[0], "repo": parts[1]}
