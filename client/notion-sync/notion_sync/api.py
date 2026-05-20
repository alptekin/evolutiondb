"""Tiny Notion REST client. stdlib urllib only."""
from __future__ import annotations

import json
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from typing import Dict, Iterator, List, Optional


_BASE          = "https://api.notion.com/v1"
_API_VERSION   = "2022-06-28"


class NotionError(Exception):
    def __init__(self, status: int, msg: str, url: str):
        super().__init__(f"{status} {msg} ({url})")
        self.status = status


class NotionClient:
    def __init__(self, token: str,
                 user_agent: str = "evolutiondb-notion-sync"):
        if not token:
            raise RuntimeError("NOTION_TOKEN is empty")
        self.token = token
        self.ua    = user_agent

    def _headers(self) -> Dict[str, str]:
        return {
            "Authorization":   f"Bearer {self.token}",
            "Notion-Version":  _API_VERSION,
            "Content-Type":    "application/json",
            "Accept":          "application/json",
            "User-Agent":      self.ua,
        }

    def _request(self, method: str, path: str,
                  body: Optional[Dict] = None,
                  retried: bool = False) -> Dict:
        url = f"{_BASE}{path}"
        data = json.dumps(body).encode() if body is not None else None
        req = urllib.request.Request(
            url, data=data, method=method, headers=self._headers())
        try:
            with urllib.request.urlopen(req, timeout=30) as resp:
                return json.loads(resp.read().decode() or "{}")
        except urllib.error.HTTPError as e:
            if e.code == 429 and not retried:
                wait = int(e.headers.get("Retry-After") or "5")
                print(f"[notion-sync] rate limited; sleeping {wait}s",
                      file=sys.stderr, flush=True)
                time.sleep(wait)
                return self._request(method, path, body, retried=True)
            try:
                payload = json.loads(e.read().decode() or "{}")
                msg = payload.get("message", str(e))
            except Exception:
                msg = str(e)
            raise NotionError(e.code, msg, url) from None

    # ---------- public surface ----------
    def search_pages(self) -> Iterator[Dict]:
        """Iterate every page the integration can see, newest first."""
        cursor: Optional[str] = None
        while True:
            body: Dict = {
                "filter": {"value": "page", "property": "object"},
                "sort":   {"direction": "descending",
                            "timestamp": "last_edited_time"},
                "page_size": 100,
            }
            if cursor:
                body["start_cursor"] = cursor
            resp = self._request("POST", "/search", body=body)
            for it in resp.get("results", []) or []:
                yield it
            if not resp.get("has_more"):
                return
            cursor = resp.get("next_cursor")
            if not cursor:
                return

    def page_blocks(self, page_id: str,
                     page_size: int = 100) -> List[Dict]:
        """Return the top-level child blocks of a page."""
        out: List[Dict] = []
        cursor: Optional[str] = None
        while True:
            qs = f"?page_size={page_size}"
            if cursor:
                qs += f"&start_cursor={urllib.parse.quote(cursor)}"
            resp = self._request(
                "GET", f"/blocks/{page_id}/children{qs}")
            out.extend(resp.get("results", []) or [])
            if not resp.get("has_more"):
                break
            cursor = resp.get("next_cursor")
            if not cursor:
                break
        return out


# ---------------------------------------------------------------- #
def rich_text_plain(items: Optional[List[Dict]]) -> str:
    if not items:
        return ""
    return "".join((it.get("plain_text") or "") for it in items)


def page_title(page: Dict) -> str:
    """Extract a human title from a Notion page object. Pages have
    a property of type `title` whose value is a list of rich-text
    chunks; database rows nest it under their `properties`."""
    props = page.get("properties") or {}
    for v in props.values():
        if isinstance(v, dict) and v.get("type") == "title":
            return rich_text_plain(v.get("title")).strip() \
                   or "(untitled)"
    return "(untitled)"


_BLOCK_RICH_FIELDS = (
    "paragraph", "heading_1", "heading_2", "heading_3",
    "bulleted_list_item", "numbered_list_item", "to_do",
    "quote", "callout", "toggle",
)


def block_plain(block: Dict) -> str:
    btype = block.get("type")
    if not btype:
        return ""
    if btype in _BLOCK_RICH_FIELDS:
        inner = block.get(btype) or {}
        return rich_text_plain(inner.get("rich_text"))
    if btype == "code":
        inner = block.get("code") or {}
        return rich_text_plain(inner.get("rich_text"))
    return ""
