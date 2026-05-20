"""evolutiondb-notion-sync — pull every Notion page shared with
the integration token into EvolutionDB long-term memory."""
from __future__ import annotations

import argparse
import json
import os
import signal
import sys
import time
from pathlib import Path
from typing import Dict, List, Optional

from . import api   as api_mod
from . import state as state_mod


def _load_dotenv(path: Path) -> None:
    if not path.exists():
        return
    for raw in path.read_text(encoding="utf-8").splitlines():
        line = raw.strip()
        if not line or line.startswith("#") or "=" not in line:
            continue
        k, _, v = line.partition("=")
        k, v = k.strip(), v.strip().strip('"').strip("'")
        if v:
            os.environ.setdefault(k, v)


class Config:
    def __init__(self):
        self.token       = os.environ.get("NOTION_TOKEN", "").strip()
        self.evosql_host = os.environ.get("EVOSQL_HOST",     "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER",     "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID",
                                            "default_user")
        self.store       = os.environ.get("NOTION_MEMORY_STORE",
                                            "mcp_mem")


def _short(s: str, n: int = 240) -> str:
    s = (s or "").strip()
    return s if len(s) <= n else s[: n - 1] + "…"


def _build_record(page: Dict, body_text: str) -> Optional[Dict]:
    title = api_mod.page_title(page)
    last  = page.get("last_edited_time") or ""
    if not last:
        return None
    return {
        "fact":         f"Notion page \"{title}\": {_short(body_text)}",
        "source":       "notion",
        "kind":         "page",
        "title":        title,
        "text":         body_text,
        "page_id":      page.get("id") or "",
        "url":          page.get("url") or "",
        "parent_type":  (page.get("parent") or {}).get("type") or "",
        "modified_at":  last,
        "created_at":   page.get("created_time") or "",
        "archived":     bool(page.get("archived")),
        "tags":         ["notion", "page"],
    }


def _page_key(page_id: str) -> str:
    return f"notion_page_{page_id.replace('-', '')}"


def sync_once(cfg: Config, *,
                dry_run: bool = False) -> Dict[str, int]:
    if not cfg.token:
        raise RuntimeError(
            "NOTION_TOKEN is not set. Create an internal "
            "integration at https://www.notion.so/my-integrations "
            "and add the secret to .env.")

    client = api_mod.NotionClient(cfg.token)
    counters = {"pages": 0, "skipped": 0, "errors": 0}

    store: Optional[state_mod.MemoryStore] = None
    if not dry_run:
        store = state_mod.MemoryStore(
            host=cfg.evosql_host, port=cfg.evosql_port,
            user=cfg.evosql_user, password=cfg.evosql_pass,
            database=cfg.evosql_db, store=cfg.store,
            namespace=cfg.user_id,
        )

    wm = (store.get_watermark_iso() if store else None)
    highest = wm or ""

    for page in client.search_pages():
        last = page.get("last_edited_time") or ""
        # search returns newest first; stop walking once we cross
        # the watermark.
        if wm and last and last <= wm:
            break

        try:
            blocks = client.page_blocks(page["id"])
        except Exception as exc:  # noqa: BLE001
            print(f"[notion-sync] {page.get('id')} blocks failed: "
                  f"{exc}", file=sys.stderr, flush=True)
            counters["errors"] += 1
            continue

        body = "\n".join(filter(None,
                                  (api_mod.block_plain(b)
                                   for b in blocks))).strip()
        rec = _build_record(page, body)
        if not rec:
            counters["skipped"] += 1
            continue
        if store:
            store.put_record(_page_key(rec["page_id"]), rec)
        counters["pages"] += 1
        if last > highest:
            highest = last

    if store and highest and highest != (wm or ""):
        store.set_watermark_iso(highest)
    return counters


_stop = False


def _install_signal_handlers() -> None:
    def _handler(_signum, _frame):
        global _stop
        _stop = True
        print("[notion-sync] stop requested",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        try:
            signal.signal(s, _handler)
        except (ValueError, OSError):
            pass


def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-notion-sync",
        description="Sync Notion pages into EvolutionDB.")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()
    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, dry_run=args.dry_run)
            print(json.dumps({"ok": True, **counts}), flush=True)
            return 0
        except Exception as exc:  # noqa: BLE001
            print(json.dumps({"ok": False, "error": str(exc)}),
                  flush=True)
            return 4

    if args.once or not args.interval:
        return run_pass()

    interval = max(60, int(args.interval))
    rc = 0
    while not _stop:
        rc = run_pass()
        for _ in range(interval):
            if _stop:
                break
            time.sleep(1)
    return rc
