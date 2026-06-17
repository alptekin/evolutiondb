"""
GitHub → EvolutionDB sync loop.

Modes:
  --once               — one pass, exit.
  --interval SECONDS   — daemon mode.
  --since "7d"         — initial floor when no watermark exists yet.
  --dry-run            — fetch but don't persist.

Discovery uses GitHub's /search/issues with `involves:<user>
updated:><since>`. For each hit we record:

  - the issue / PR body itself (single record, keyed `gh_thread_<id>`)
  - every review comment (keyed `gh_pr_comment_<id>`)
  - every issue comment (keyed `gh_issue_comment_<id>`)
  - every PR review with a body (keyed `gh_pr_review_<id>`)

Each record is deterministic so a re-sync UPSERTS the row instead of
creating duplicates.
"""
from __future__ import annotations

import argparse
import json
import os
import re
import signal
import sys
import time
from datetime import datetime, timedelta, timezone
from pathlib import Path
from typing import Dict, Optional

from . import api as api_mod
from . import state as state_mod

# Optional PII protection — masks identifiers in the issue/PR title + body
# before MEMORY PUT, matching the other connectors. Transparent passthrough
# when evolutiondb-pii is not installed.
try:
    from evolutiondb_pii.integration import protect_record as _pii_protect
except ImportError:
    _pii_protect = None

_PII_FIELDS = ["fact", "title", "body", "snippet", "text"]


def _protect(rec, main_key):
    if _pii_protect is None:
        return rec, []
    return _pii_protect(rec, fields=_PII_FIELDS, key_prefix=f"{main_key}_pii")


def _store_put(store, key, rec):
    """Mask the record (protect_record) then write it and any PII companions."""
    rec, companions = _protect(rec, key)
    store.put_record(key, rec)
    for ck, cv in companions:
        store.put_record(ck, cv)


# ---------------------------------------------------------------- #
#  Config                                                           #
# ---------------------------------------------------------------- #
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
        self.token       = os.environ.get("GITHUB_TOKEN", "").strip()
        self.username    = os.environ.get("GITHUB_USERNAME", "").strip()
        self.evosql_host = os.environ.get("EVOSQL_HOST", "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER", "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID", "default_user")
        self.store       = os.environ.get("GITHUB_MEMORY_STORE", "mcp_mem")
        self.poll_secs   = int(os.environ.get("GITHUB_POLL_INTERVAL", "900"))


# ---------------------------------------------------------------- #
#  --since parser                                                   #
# ---------------------------------------------------------------- #
_SINCE_RE = re.compile(r"^\s*(\d+)\s*([smhdw])\s*$", re.I)


def parse_since(text: str) -> str:
    m = _SINCE_RE.match(text)
    if not m:
        raise ValueError(f"--since must be like '1h', '7d', got {text!r}")
    n, unit = int(m.group(1)), m.group(2).lower()
    delta = {
        "s": timedelta(seconds=n),
        "m": timedelta(minutes=n),
        "h": timedelta(hours=n),
        "d": timedelta(days=n),
        "w": timedelta(weeks=n),
    }[unit]
    return (datetime.now(timezone.utc) - delta).isoformat(
        timespec="seconds").replace("+00:00", "Z")


# ---------------------------------------------------------------- #
#  Record builders                                                  #
# ---------------------------------------------------------------- #
def _short(s: Optional[str], n: int = 4000) -> str:
    """GitHub allows multi-megabyte issue bodies. The LLM doesn't need
    a novella — clip at 4kB which fits comfortably in a context window
    alongside the issue title + commenter name."""
    if not s:
        return ""
    s = s.strip()
    if len(s) <= n:
        return s
    return s[: n - 12].rstrip() + " …[clipped]"


def _build_issue_record(issue: Dict, repo_owner: str, repo_name: str) -> Dict:
    full = f"{repo_owner}/{repo_name}"
    is_pr = "pull_request" in issue
    kind  = "pr" if is_pr else "issue"
    author = (issue.get("user") or {}).get("login", "?")
    title  = issue.get("title") or ""
    body   = _short(issue.get("body"))
    fact = f"{author} opened {kind} {full}#{issue['number']}: {title}"
    if body:
        fact = f"{fact} — {body[:300]}"
    return {
        "fact":       fact,
        "source":     "github",
        "kind":       kind,
        "repo":       full,
        "number":     issue["number"],
        "title":      title,
        "body":       body,
        "url":        issue.get("html_url"),
        "state":      issue.get("state"),
        "author":     author,
        "labels":     [l.get("name") for l in (issue.get("labels") or [])
                       if isinstance(l, dict) and l.get("name")],
        "assignees":  [a.get("login") for a in (issue.get("assignees") or [])
                       if isinstance(a, dict) and a.get("login")],
        "created_at": issue.get("created_at"),
        "updated_at": issue.get("updated_at"),
        "closed_at":  issue.get("closed_at"),
        "tags":       ["github", kind, full],
    }


def _build_comment_record(comment: Dict, *, repo: str, number: int,
                          kind: str) -> Dict:
    author = (comment.get("user") or {}).get("login", "?")
    body   = _short(comment.get("body"))
    fact = f"{author} commented on {repo}#{number}: {body[:300]}"
    rec = {
        "fact":       fact,
        "source":     "github",
        "kind":       kind,            # 'pr_comment' / 'issue_comment' / 'pr_review'
        "repo":       repo,
        "number":     number,
        "comment_id": comment.get("id"),
        "url":        comment.get("html_url"),
        "author":     author,
        "body":       body,
        "created_at": comment.get("created_at"),
        "updated_at": (comment.get("updated_at")
                       or comment.get("created_at")),
        "tags":       ["github", kind, repo],
    }
    if kind == "pr_comment":
        # Diff-anchored comments expose path + position + the diff hunk
        # itself — surface the path so search can filter by file.
        rec["path"]   = comment.get("path")
        rec["commit"] = comment.get("commit_id")
    if kind == "pr_review":
        rec["state"] = comment.get("state")        # APPROVED / CHANGES_REQUESTED
        rec["submitted_at"] = comment.get("submitted_at")
    return rec


# ---------------------------------------------------------------- #
#  Sync                                                             #
# ---------------------------------------------------------------- #
def sync_once(cfg: Config, *, since_default: Optional[str],
              dry_run: bool = False) -> Dict[str, int]:
    if not cfg.token:
        raise RuntimeError("GITHUB_TOKEN is required")
    if not cfg.username:
        raise RuntimeError("GITHUB_USERNAME is required")

    client = api_mod.GitHubClient(cfg.token)

    store: Optional[state_mod.MemoryStore]
    if dry_run:
        store = None
    else:
        store = state_mod.MemoryStore(
            host=cfg.evosql_host, port=cfg.evosql_port,
            user=cfg.evosql_user, password=cfg.evosql_pass,
            database=cfg.evosql_db, store=cfg.store,
            namespace=cfg.user_id,
        )

    counters = {"threads": 0, "comments": 0, "reviews": 0,
                "errors": 0}

    for issue in client.search_involves(cfg.username, since_default):
        repo_url = api_mod.parse_repository_url(issue.get("repository_url", ""))
        if not repo_url:
            counters["errors"] += 1
            continue
        owner = repo_url["owner"]
        repo  = repo_url["repo"]
        repo_full = f"{owner}/{repo}"
        number = issue.get("number")
        if not number:
            counters["errors"] += 1
            continue

        watermark = (store.get_watermark(repo_full, number)
                     if store else None)
        if watermark and (issue.get("updated_at") or "") <= watermark:
            # Nothing new on this issue since last sync.
            continue

        thread_rec = _build_issue_record(issue, owner, repo)
        if store:
            key = f"gh_thread_{repo_full}#{number}"
            _store_put(store, key, thread_rec)
        counters["threads"] += 1

        is_pr = "pull_request" in issue
        try:
            if is_pr:
                for c in client.get_pr_review_comments(owner, repo, number):
                    rec = _build_comment_record(c, repo=repo_full,
                                                  number=number,
                                                  kind="pr_comment")
                    if store:
                        _store_put(store, f"gh_pr_comment_{c['id']}", rec)
                    counters["comments"] += 1
                for r in client.get_pr_reviews(owner, repo, number):
                    if not r.get("body"):
                        continue
                    rec = _build_comment_record(r, repo=repo_full,
                                                  number=number,
                                                  kind="pr_review")
                    if store:
                        _store_put(store, f"gh_pr_review_{r['id']}", rec)
                    counters["reviews"] += 1

            for c in client.get_issue_comments(owner, repo, number):
                rec = _build_comment_record(c, repo=repo_full,
                                              number=number,
                                              kind="issue_comment")
                if store:
                    _store_put(store, f"gh_issue_comment_{c['id']}", rec)
                counters["comments"] += 1
        except api_mod.GitHubError as exc:
            print(f"[github-sync] {repo_full}#{number} failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1
            continue

        if store and issue.get("updated_at"):
            store.set_watermark(repo_full, number, issue["updated_at"])

    return counters


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
_stop = False


def _install_signal_handlers() -> None:
    def handler(_signo, _frame):
        global _stop
        _stop = True
        print("[github-sync] stop requested, finishing current pass …",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        signal.signal(s, handler)


def main(argv: Optional[list] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-github-sync")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--since",    default="7d")
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env",
                        help="dotenv path; ignored if missing")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()

    try:
        since_default = parse_since(args.since)
    except ValueError as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2

    if not cfg.token or not cfg.username:
        print("error: GITHUB_TOKEN and GITHUB_USERNAME must be set "
              "(env or .env file)", file=sys.stderr)
        return 2

    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, since_default=since_default,
                               dry_run=args.dry_run)
            print(json.dumps({"ok": True, **counts}), flush=True)
            return 0
        except Exception as exc:
            print(json.dumps({"ok": False, "error": str(exc)}), flush=True)
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
