"""
Azure DevOps REST client — stdlib urllib only (no requests/azure SDK), so the
package's single runtime dependency stays psycopg.

Auth is a PAT in a Basic header (username empty, password = PAT). Throttling:
ADO answers 429/503 with Retry-After — honored with a bounded retry. The PAT
owner's identity GUID comes from /_apis/connectionData; that GUID drives the
two precise PR queries (created-by-me, review-requested-from-me) — no fuzzy
"involves:" search like GitHub's.
"""
from __future__ import annotations

import base64
import http.client
import json
import socket
import ssl
import time
import urllib.error
import urllib.parse
import urllib.request
from typing import Dict, Iterator, List, Optional

API_VERSION = "7.1"
_REQUEST_TIMEOUT = 90
_RETRY_BACKOFF = (1, 2, 4, 8, 16)
_MAX_RATE_LIMIT_RETRIES = 5
_TRANSIENT = (
    socket.timeout, TimeoutError, urllib.error.URLError, ssl.SSLError,
    ConnectionError, http.client.RemoteDisconnected,
    http.client.IncompleteRead, http.client.BadStatusLine,
)


class AzdoError(Exception):
    def __init__(self, status: int, msg: str, url: str):
        super().__init__(f"{status} {msg} ({url})")
        self.status = status
        self.url = url


class AzdoClient:
    """Minimal Azure DevOps REST 7.1 client bound to one organization."""

    def __init__(self, org_url: str, pat: str,
                 user_agent: str = "evolutiondb-azure-devops-sync"):
        org_url = (org_url or "").strip().rstrip("/")
        if not org_url.startswith("https://"):
            raise AzdoError(400, "AZURE_DEVOPS_ORG_URL must be an https:// "
                                 "organization url", org_url or "<empty>")
        if not pat:
            raise AzdoError(401, "AZURE_DEVOPS_PAT is required", org_url)
        self.org_url = org_url
        self._auth = base64.b64encode(f":{pat}".encode()).decode("ascii")
        self._ua = user_agent

    # -- low level ----------------------------------------------------
    def _headers(self) -> Dict[str, str]:
        return {
            "Authorization": f"Basic {self._auth}",
            "Accept": "application/json",
            "User-Agent": self._ua,
        }

    def _get(self, path: str, params: Optional[Dict[str, str]] = None,
             _rl_attempt: int = 0) -> dict:
        url = path if path.startswith("https://") else self.org_url + path
        q = dict(params or {})
        q.setdefault("api-version", API_VERSION)
        url = url + ("&" if "?" in url else "?") + urllib.parse.urlencode(q)
        req = urllib.request.Request(url, headers=self._headers())
        last: Optional[BaseException] = None
        for backoff in _RETRY_BACKOFF:
            try:
                with urllib.request.urlopen(req, timeout=_REQUEST_TIMEOUT) as resp:  # noqa: S310
                    body = resp.read().decode("utf-8", "replace")
                    ctype = resp.headers.get("Content-Type", "")
                    if "json" not in ctype:
                        # an HTML login page means the PAT was rejected/expired
                        raise AzdoError(401, "non-JSON response (bad/expired "
                                             "PAT or no org access?)", url)
                    return json.loads(body or "{}")
            except urllib.error.HTTPError as exc:
                if exc.code in (429, 503) and _rl_attempt < _MAX_RATE_LIMIT_RETRIES:
                    wait = int(exc.headers.get("Retry-After") or 30)
                    time.sleep(max(1, wait))
                    return self._get(path, params, _rl_attempt + 1)
                try:
                    msg = json.loads(exc.read().decode("utf-8", "replace")
                                     or "{}").get("message") or exc.reason
                except Exception:
                    msg = exc.reason
                raise AzdoError(exc.code, str(msg), url) from exc
            except _TRANSIENT as exc:
                last = exc
                time.sleep(backoff)
        raise AzdoError(599, f"transient failure: {last}", url)

    # -- identity / projects -------------------------------------------
    def connection_data(self) -> dict:
        """The authenticated (PAT-owner) identity: {'id': <guid>, ...}."""
        data = self._get("/_apis/connectionData",
                         {"api-version": "7.1-preview.1"})
        return data.get("authenticatedUser") or {}

    def projects(self) -> List[dict]:
        return list(self._paginate("/_apis/projects"))

    # -- pull requests --------------------------------------------------
    def pull_requests(self, project: str, *, creator_id: Optional[str] = None,
                      reviewer_id: Optional[str] = None,
                      status: str = "active",
                      min_time: Optional[str] = None) -> List[dict]:
        params: Dict[str, str] = {"searchCriteria.status": status}
        if creator_id:
            params["searchCriteria.creatorId"] = creator_id
        if reviewer_id:
            params["searchCriteria.reviewerId"] = reviewer_id
        if min_time:
            # only meaningful for completed/abandoned: filter on close time
            params["searchCriteria.minTime"] = min_time
            params["searchCriteria.queryTimeRangeType"] = "closed"
        return list(self._paginate(
            f"/{urllib.parse.quote(project)}/_apis/git/pullrequests", params))

    def pr_threads(self, project: str, repository_id: str,
                   pr_id: int) -> List[dict]:
        data = self._get(
            f"/{urllib.parse.quote(project)}/_apis/git/repositories/"
            f"{repository_id}/pullRequests/{int(pr_id)}/threads")
        return data.get("value") or []

    # -- builds (pipelines) ----------------------------------------------
    def builds(self, project: str, *, min_time: Optional[str] = None,
               top: int = 200) -> List[dict]:
        params: Dict[str, str] = {"$top": str(int(top)),
                                  "queryOrder": "queueTimeDescending"}
        if min_time:
            params["minTime"] = min_time
        data = self._get(
            f"/{urllib.parse.quote(project)}/_apis/build/builds", params)
        return data.get("value") or []

    # -- pagination -------------------------------------------------------
    def _paginate(self, path: str,
                  params: Optional[Dict[str, str]] = None,
                  page_size: int = 100) -> Iterator[dict]:
        """$top/$skip pagination (the scheme git/pullrequests + projects use)."""
        skip = 0
        while True:
            q = dict(params or {})
            q["$top"] = str(page_size)
            q["$skip"] = str(skip)
            data = self._get(path, q)
            items = data.get("value") or []
            yield from items
            if len(items) < page_size:
                return
            skip += page_size
