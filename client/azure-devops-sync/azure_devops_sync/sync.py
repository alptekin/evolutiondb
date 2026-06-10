"""
Sync Azure DevOps activity into EvolutionDB memory.

What gets indexed (deterministic keys -> MEMORY PUT upserts on re-sync):

  ado_thread_<project/repo>#<prId>        one row per pull request
  ado_pr_comment_<threadId>_<commentId>   PR thread comments
  ado_build_<buildId>                     pipeline runs (CI context)

Unlike github-sync (which reconstructs review state from separate review
rows because /search/issues drops it), the ADO PR object carries the review
state FIRST-CLASS: ``reviewers[]`` each with a ``vote`` (10 approved /
5 approved-with-suggestions / 0 no vote / -5 waiting-for-author /
-10 rejected), ``isRequired``, plus ``isDraft`` and ``status``
(active/completed/abandoned). Those fields are stored verbatim so the MCP
side can derive "review requested from me and I have not voted" honestly.

Honesty notes baked into the data: the PR list object has no updatedDate, so
``updated_at`` is the best available (closedDate, else creationDate) — per-PR
watermarks are correspondingly coarse; pipeline runs are searchable context,
not open loops.

"Me" is the PAT owner: the identity GUID from /_apis/connectionData drives
two precise queries per project (created-by-me, review-requested-from-me).
"""
from __future__ import annotations

import argparse
import json
import os
import re
import signal
import sys
from datetime import datetime, timedelta, timezone
from pathlib import Path
from typing import Dict, List, Optional

from . import api as api_mod
from . import state as state_mod

# Optional PII layer (the teams-sync pattern): mask configured fields and emit
# encrypted companion rows. A no-op when evolutiondb-pii isn't installed.
try:
    from evolutiondb_pii.integration import protect_record as _pii_protect
except ImportError:
    _pii_protect = None

_PII_FIELDS = ["fact", "title", "body", "author"]


def _protect(rec: Dict, main_key: str):
    if _pii_protect is None:
        return rec, []
    return _pii_protect(rec, fields=_PII_FIELDS, key_prefix=f"{main_key}_pii")


def _load_dotenv(path: Path) -> None:
    if not path.is_file():
        return
    for line in path.read_text(encoding="utf-8").splitlines():
        line = line.strip()
        if not line or line.startswith("#") or "=" not in line:
            continue
        k, _, v = line.partition("=")
        os.environ.setdefault(k.strip(), v.strip().strip("'\""))


class Config:
    def __init__(self) -> None:
        self.org_url  = os.environ.get("AZURE_DEVOPS_ORG_URL", "").strip()
        self.pat      = os.environ.get("AZURE_DEVOPS_PAT", "").strip()
        # comma-separated project filter; empty = every project in the org
        self.projects = [p.strip() for p in
                         os.environ.get("AZURE_DEVOPS_PROJECTS", "").split(",")
                         if p.strip()]
        self.evosql_host = os.environ.get("EVOSQL_HOST", "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER", "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID", "default_user")
        self.store       = os.environ.get("ADO_MEMORY_STORE", "mcp_mem")
        self.poll_secs   = int(os.environ.get("ADO_POLL_INTERVAL", "900"))


def parse_since(text: str) -> str:
    m = re.match(r"^(\d+)([smhdw])$", (text or "").strip(), re.I)
    if not m:
        raise ValueError("--since must be like '1h', '7d'")
    n, unit = int(m.group(1)), m.group(2).lower()
    delta = {"s": timedelta(seconds=n), "m": timedelta(minutes=n),
             "h": timedelta(hours=n), "d": timedelta(days=n),
             "w": timedelta(weeks=n)}[unit]
    return ((datetime.now(timezone.utc) - delta)
            .isoformat(timespec="seconds").replace("+00:00", "Z"))


def _short(s: Optional[str], limit: int = 4000) -> str:
    s = (s or "").strip()
    if len(s) <= limit:
        return s
    return s[:limit] + " …[clipped]"


def _uname(identity: Optional[Dict]) -> str:
    """A person's stable login (uniqueName), lower-cased; display as fallback."""
    if not identity:
        return ""
    return (identity.get("uniqueName") or identity.get("displayName") or "").lower()


# ---------------------------------------------------------------- builders
def build_pr_record(pr: Dict, project: str) -> Optional[Dict]:
    repo_obj = pr.get("repository") or {}
    repo = f"{project}/{repo_obj.get('name') or '?'}"
    pr_id = pr.get("pullRequestId")
    if pr_id is None:
        return None
    author = _uname(pr.get("createdBy"))
    title = pr.get("title") or "(no title)"
    body = _short(pr.get("description"))
    status = pr.get("status") or "active"          # active|completed|abandoned
    created = pr.get("creationDate") or ""
    closed = pr.get("closedDate")
    reviewers = [{
        "name": _uname(r),
        "display": r.get("displayName") or "",
        "vote": int(r.get("vote") or 0),
        "is_required": bool(r.get("isRequired")),
    } for r in (pr.get("reviewers") or [])]
    fact = f"{author or '?'} opened pr {repo}#{pr_id}: {title}"
    if body:
        fact += f" — {body[:300]}"
    web_url = ""
    if repo_obj.get("name") and pr.get("repository", {}).get("project"):
        org = ((pr["repository"]["project"].get("url") or "")
               .split("/_apis/")[0])
        if org:
            web_url = (f"{org}/_git/"
                       f"{repo_obj['name']}/pullrequest/{pr_id}")
    return {
        "fact": fact,
        "source": "azure_devops",
        "kind": "pr",
        "repo": repo,
        "number": pr_id,
        "title": title,
        "body": body,
        "url": web_url or (pr.get("url") or ""),
        # raw ADO status + a derived open/closed `state` so readers share the
        # github-sync state semantics
        "status": status,
        "state": "open" if status == "active" else "closed",
        "author": author,
        "reviewers": reviewers,
        "is_draft": bool(pr.get("isDraft")),
        "merge_status": pr.get("mergeStatus") or "",
        "source_branch": (pr.get("sourceRefName") or "").replace("refs/heads/", ""),
        "target_branch": (pr.get("targetRefName") or "").replace("refs/heads/", ""),
        "created_at": created,
        # honest best-available: the PR list object has no updatedDate
        "updated_at": closed or created,
        "closed_at": closed,
        "tags": ["azure_devops", "pr", repo],
    }


def build_comment_record(comment: Dict, thread: Dict, repo: str,
                         number: int) -> Optional[Dict]:
    cid = comment.get("id")
    if cid is None or comment.get("commentType") == "system":
        return None
    body = _short(comment.get("content"))
    if not body:
        return None
    author = _uname(comment.get("author"))
    ctx = thread.get("threadContext") or {}
    rec = {
        "fact": f"{author or '?'} commented on {repo}#{number}: {body[:300]}",
        "source": "azure_devops",
        "kind": "pr_comment",
        "repo": repo,
        "number": number,
        "thread_id": thread.get("id"),
        "comment_id": cid,
        "author": author,
        "body": body,
        "created_at": comment.get("publishedDate") or "",
        "updated_at": (comment.get("lastUpdatedDate")
                       or comment.get("publishedDate") or ""),
        "tags": ["azure_devops", "pr_comment", repo],
    }
    if ctx.get("filePath"):
        rec["path"] = ctx["filePath"]
    return rec


def build_build_record(build: Dict, project: str) -> Optional[Dict]:
    bid = build.get("id")
    if bid is None:
        return None
    repo = f"{project}/{((build.get('repository') or {}).get('name')) or '?'}"
    pipeline = ((build.get("definition") or {}).get("name")) or "?"
    status = build.get("status") or ""           # inProgress|completed|...
    result = build.get("result") or ""           # succeeded|failed|... ("" while running)
    branch = (build.get("sourceBranch") or "").replace("refs/heads/", "")
    fact = (f"pipeline {pipeline} build {build.get('buildNumber') or bid} "
            f"{result or status} on {branch} ({repo})")
    return {
        "fact": fact,
        "source": "azure_devops",
        "kind": "pipeline_run",
        "repo": repo,
        "number": bid,
        "pipeline": pipeline,
        "definition_id": (build.get("definition") or {}).get("id"),
        "status": status,
        "result": result,
        "branch": branch,
        "commit": build.get("sourceVersion") or "",
        "requested_for": _uname(build.get("requestedFor")),
        "url": ((build.get("_links") or {}).get("web") or {}).get("href")
               or (build.get("url") or ""),
        "created_at": build.get("queueTime") or "",
        "updated_at": (build.get("finishTime") or build.get("startTime")
                       or build.get("queueTime") or ""),
        "tags": ["azure_devops", "pipeline_run", repo],
    }


# ---------------------------------------------------------------- sync
def sync_once(cfg: Config, *, since_default: Optional[str],
              dry_run: bool = False) -> Dict[str, int]:
    if not cfg.org_url or not cfg.pat:
        raise RuntimeError("AZURE_DEVOPS_ORG_URL and AZURE_DEVOPS_PAT are "
                           "required (see .env.example)")

    client = api_mod.AzdoClient(cfg.org_url, cfg.pat)
    me = client.connection_data()
    me_id = me.get("id") or ""
    if not me_id:
        raise RuntimeError("could not resolve the PAT owner's identity "
                           "(connectionData returned no id)")

    store: Optional[state_mod.MemoryStore] = None
    if not dry_run:
        store = state_mod.MemoryStore(
            host=cfg.evosql_host, port=cfg.evosql_port,
            user=cfg.evosql_user, password=cfg.evosql_pass,
            database=cfg.evosql_db, store=cfg.store,
            namespace=cfg.user_id,
        )

    counters = {"prs": 0, "comments": 0, "builds": 0, "errors": 0}
    projects = cfg.projects or [p.get("name") for p in client.projects()
                                if p.get("name")]

    for project in projects:
        # PRs involving me: created by me + review requested from me; active
        # always, plus recently closed so open rows flip + loops auto-resolve.
        prs: Dict[int, Dict] = {}
        try:
            for kwargs in ({"creator_id": me_id}, {"reviewer_id": me_id}):
                for pr in client.pull_requests(project, status="active",
                                               **kwargs):
                    prs[pr["pullRequestId"]] = pr
                for st in ("completed", "abandoned"):
                    for pr in client.pull_requests(project, status=st,
                                                   min_time=since_default,
                                                   **kwargs):
                        prs[pr["pullRequestId"]] = pr
        except api_mod.AzdoError as exc:
            print(f"[azure-devops-sync] {project}: PR list failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1
            continue

        for pr in prs.values():
            rec = build_pr_record(pr, project)
            if not rec:
                continue
            repo, number = rec["repo"], rec["number"]
            watermark = (store.get_watermark(repo, number) if store else None)
            if watermark and (rec.get("updated_at") or "") <= watermark:
                continue
            key = f"ado_thread_{repo}#{number}"
            if store:
                rec_out, companions = _protect(rec, key)
                store.put_record(key, rec_out)
                for ck, cv in companions:
                    store.put_record(ck, cv)
            counters["prs"] += 1

            # thread comments (best-effort per PR)
            try:
                repo_id = (pr.get("repository") or {}).get("id") or ""
                if repo_id:
                    for thread in client.pr_threads(project, repo_id, number):
                        for c in (thread.get("comments") or []):
                            crec = build_comment_record(c, thread, repo, number)
                            if not crec:
                                continue
                            ckey = (f"ado_pr_comment_{thread.get('id')}_"
                                    f"{c.get('id')}")
                            if store:
                                crec_out, comps = _protect(crec, ckey)
                                store.put_record(ckey, crec_out)
                                for k2, v2 in comps:
                                    store.put_record(k2, v2)
                            counters["comments"] += 1
            except api_mod.AzdoError as exc:
                print(f"[azure-devops-sync] {repo}#{number}: threads "
                      f"failed: {exc}", file=sys.stderr, flush=True)
                counters["errors"] += 1

            if store and rec.get("updated_at"):
                store.set_watermark(repo, number, rec["updated_at"])

        # pipeline runs since the floor (CI context, not loops)
        try:
            for build in client.builds(project, min_time=since_default):
                brec = build_build_record(build, project)
                if not brec:
                    continue
                if store:
                    store.put_record(f"ado_build_{brec['number']}", brec)
                counters["builds"] += 1
        except api_mod.AzdoError as exc:
            print(f"[azure-devops-sync] {project}: builds failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1

    return counters


# ---------------------------------------------------------------- CLI
_stop = False


def _install_signal_handlers() -> None:
    def handler(signum, frame):  # noqa: ARG001
        global _stop
        _stop = True
        print("[azure-devops-sync] stop requested, finishing current pass …",
              file=sys.stderr, flush=True)
    signal.signal(signal.SIGTERM, handler)
    signal.signal(signal.SIGINT, handler)


def main() -> int:
    ap = argparse.ArgumentParser(prog="evolutiondb-azure-devops-sync")
    ap.add_argument("--once", action="store_true")
    ap.add_argument("--interval", type=int, help="daemon mode, seconds")
    ap.add_argument("--since", default="7d",
                    help="initial floor when no watermark (e.g. 1h, 7d)")
    ap.add_argument("--dry-run", action="store_true",
                    help="fetch but don't persist")
    ap.add_argument("--env-file", default=".env",
                    help="dotenv path; ignored if missing")
    args = ap.parse_args()

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()
    try:
        since_default = parse_since(args.since)
    except ValueError as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2
    if not cfg.org_url or not cfg.pat:
        print("error: AZURE_DEVOPS_ORG_URL and AZURE_DEVOPS_PAT must be set "
              "(see .env.example)", file=sys.stderr)
        return 2

    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, since_default=since_default,
                               dry_run=args.dry_run)
            print(json.dumps({"ok": True, **counts}))
            return 0
        except Exception as exc:  # noqa: BLE001
            print(json.dumps({"ok": False, "error": str(exc)}))
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
            import time
            time.sleep(1)
    return rc


if __name__ == "__main__":
    raise SystemExit(main())
