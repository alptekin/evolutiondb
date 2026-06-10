"""
release — read-only release-management tools (Phase 2, developer module).

``release_status``  — where a repo stands: latest release/tag, commits landed
since it, and recent CI/workflow runs (the deploy signal).
``draft_changelog`` — a changelog draft from the commits since a tag, grouping
PR-merge subjects; returns text, sends nothing.

Releases, tags and workflow runs are "now" questions, so they are fetched live
from the GitHub REST API (the github-sync connector stores none of them).
Unauthenticated calls work for public repos; GITHUB_TOKEN/GH_TOKEN is attached
when present (required for private repos, and lifts the rate limit). All calls
go through the single ``_gh_json`` boundary so tests stub it. Everything here
is read-only against GitHub.
"""
from __future__ import annotations

import json
import os
import re
import urllib.error
import urllib.request
from typing import Any, Dict, List, Optional

_API = "https://api.github.com"
_REPO_RE = re.compile(r"^[\w.\-]+/[\w.\-]+$")


# ---------------------------------------------------------------- API boundary
def _gh_json(path: str, token: Optional[str] = None) -> Any:
    """One GitHub REST call -> parsed JSON. Raises RuntimeError with a concise
    message on HTTP errors (404 repo/tag, 403 rate limit, ...)."""
    token = token or os.environ.get("GITHUB_TOKEN") or os.environ.get("GH_TOKEN")
    headers = {
        "Accept": "application/vnd.github+json",
        "User-Agent": "evosql-mcp-release",
        "X-GitHub-Api-Version": "2022-11-28",
    }
    if token:
        headers["Authorization"] = f"Bearer {token}"
    req = urllib.request.Request(_API + path, headers=headers)
    try:
        with urllib.request.urlopen(req, timeout=20) as resp:  # noqa: S310 (https, pinned host)
            return json.loads(resp.read().decode("utf-8", "replace"))
    except urllib.error.HTTPError as exc:
        raise RuntimeError(f"GitHub API {exc.code} for {path}") from exc
    except Exception as exc:
        raise RuntimeError(f"GitHub API unreachable: {exc}") from exc


def _valid_repo(repo: str) -> bool:
    return bool(repo) and bool(_REPO_RE.match(repo))


# ---------------------------------------------------------------- collectors
def _latest_release(repo: str) -> Optional[Dict[str, Any]]:
    """Latest published release, falling back to the newest tag when the repo
    has tags but no releases. None when neither exists."""
    try:
        rel = _gh_json(f"/repos/{repo}/releases/latest")
        return {"tag": rel.get("tag_name"), "name": rel.get("name") or rel.get("tag_name"),
                "published_at": rel.get("published_at"), "url": rel.get("html_url"),
                "draft": bool(rel.get("draft")), "kind": "release"}
    except RuntimeError:
        pass
    try:
        tags = _gh_json(f"/repos/{repo}/tags?per_page=1") or []
    except RuntimeError:
        return None
    if not tags:
        return None
    t = tags[0]
    return {"tag": t.get("name"), "name": t.get("name"), "published_at": None,
            "url": f"https://github.com/{repo}/releases/tag/{t.get('name')}",
            "draft": False, "kind": "tag"}


def _commits_since(repo: str, tag: str, *, cap: int = 50) -> Dict[str, Any]:
    """Commits on the default branch since ``tag`` (GitHub compare API)."""
    cmp = _gh_json(f"/repos/{repo}/compare/{tag}...HEAD")
    commits = cmp.get("commits") or []
    subjects = []
    for c in commits[-cap:]:
        msg = ((c.get("commit") or {}).get("message") or "").split("\n", 1)[0]
        subjects.append({
            "sha": (c.get("sha") or "")[:8],
            "subject": msg[:120],
            "author": ((c.get("commit") or {}).get("author") or {}).get("name") or "",
        })
    return {"ahead_by": cmp.get("ahead_by", len(commits)), "commits": subjects}


def _workflow_runs(repo: str, *, limit: int = 8) -> List[Dict[str, Any]]:
    """Most recent GitHub Actions runs (the CI/deploy signal)."""
    data = _gh_json(f"/repos/{repo}/actions/runs?per_page={int(limit)}")
    out = []
    for r in (data.get("workflow_runs") or [])[:limit]:
        out.append({
            "name": r.get("name"), "branch": r.get("head_branch"),
            "event": r.get("event"), "status": r.get("status"),
            "conclusion": r.get("conclusion"),
            "created_at": r.get("created_at"), "url": r.get("html_url"),
        })
    return out


# ---------------------------------------------------------------- tools
def release_status(repo: str) -> Dict[str, Any]:
    """Latest release/tag + commits since it + recent workflow runs."""
    repo = (repo or "").strip()
    if not _valid_repo(repo):
        return {"error": "release_status requires `repo` as 'owner/name'"}
    try:
        rel = _latest_release(repo)
        out: Dict[str, Any] = {"ok": True, "repo": repo, "release": rel}
        if rel and rel.get("tag"):
            out["since_release"] = _commits_since(repo, rel["tag"])
        out["workflow_runs"] = _workflow_runs(repo)
        return out
    except RuntimeError as exc:
        return {"error": str(exc)}


_GROUPS = (   # subject-prefix -> changelog section (conventional-commit-ish)
    ("feat", "Features"), ("fix", "Fixes"), ("perf", "Performance"),
    ("docs", "Docs"), ("test", "Tests"), ("refactor", "Refactoring"),
    ("chore", "Chores"), ("build", "Build"), ("ci", "CI"),
)


def _classify_subject(subject: str) -> str:
    s = subject.strip().lower()
    for pfx, section in _GROUPS:
        if s.startswith(pfx + ":") or s.startswith(pfx + "("):
            return section
    if s.startswith("merge pull request") or s.startswith("merge branch"):
        return "_merge"          # merge plumbing — folded away unless PR-titled
    return "Changes"


def draft_changelog(repo: str, since: Optional[str] = None) -> Dict[str, Any]:
    """A changelog draft from the commits since ``since`` (default: the latest
    release/tag). Groups conventional-commit subjects; keeps PR references
    (#123) intact. Returns text — sends nothing anywhere."""
    repo = (repo or "").strip()
    if not _valid_repo(repo):
        return {"error": "draft_changelog requires `repo` as 'owner/name'"}
    try:
        tag = (since or "").strip()
        if not tag:
            rel = _latest_release(repo)
            if not rel or not rel.get("tag"):
                return {"error": f"{repo} has no release/tag to diff from — "
                                 f"pass `since` (a tag or ref)"}
            tag = rel["tag"]
        data = _commits_since(repo, tag, cap=200)
    except RuntimeError as exc:
        return {"error": str(exc)}

    sections: Dict[str, List[str]] = {}
    for c in data["commits"]:
        subj = c["subject"]
        sec = _classify_subject(subj)
        if sec == "_merge":
            # keep "Merge pull request #N from ..." only as its PR reference
            m = re.search(r"#\d+", subj)
            if not m:
                continue
            sec, subj = "Changes", f"PR {m.group(0)}"
        sections.setdefault(sec, []).append(f"- {subj} ({c['sha']})")

    order = [s for _, s in _GROUPS] + ["Changes"]
    lines = [f"## {repo} — changes since {tag} ({data['ahead_by']} commits)"]
    for sec in order:
        items = sections.get(sec)
        if not items:
            continue
        lines.append("")
        lines.append(f"### {sec}")
        lines.extend(items)
    if len(lines) == 1:
        lines.append("")
        lines.append("(no commits since the tag)")
    return {"ok": True, "repo": repo, "since": tag,
            "commit_count": data["ahead_by"], "changelog": "\n".join(lines)}
