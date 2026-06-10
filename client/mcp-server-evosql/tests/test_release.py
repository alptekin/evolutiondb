"""
test_release — release_status + draft_changelog (release.py).

Server-free: the single GitHub API boundary (_gh_json) is stubbed, so no
network/token is needed. Fictional fixtures.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import pytest

from mcp_server_evosql import release

REPO = "acme/widgets"


def _commit(sha, subject, author="Jane Roe"):
    return {"sha": sha, "commit": {"message": subject,
                                   "author": {"name": author}}}


def _api(responses):
    """A _gh_json stub keyed by path prefix; raises for unknown paths."""
    def fake(path, token=None):
        for pfx, val in responses.items():
            if path.startswith(pfx):
                if isinstance(val, Exception):
                    raise val
                return val
        raise RuntimeError(f"GitHub API 404 for {path}")
    return fake


FULL = {
    f"/repos/{REPO}/releases/latest": {
        "tag_name": "v1.2.0", "name": "v1.2.0 — retry/backoff",
        "published_at": "2026-06-01T10:00:00Z",
        "html_url": f"https://github.com/{REPO}/releases/tag/v1.2.0",
        "draft": False,
    },
    f"/repos/{REPO}/compare/v1.2.0...HEAD": {
        "ahead_by": 3,
        "commits": [
            _commit("aaaa111122223333", "feat: add jittered backoff cap (#150)"),
            _commit("bbbb111122223333", "fix(webhook): drop NPE on empty payload"),
            _commit("cccc111122223333", "Merge pull request #151 from acme/topic"),
        ],
    },
    f"/repos/{REPO}/actions/runs": {
        "workflow_runs": [
            {"name": "ci", "head_branch": "main", "event": "push",
             "status": "completed", "conclusion": "success",
             "created_at": "2026-06-09T12:00:00Z",
             "html_url": f"https://github.com/{REPO}/actions/runs/1"},
            {"name": "deploy", "head_branch": "main", "event": "push",
             "status": "completed", "conclusion": "failure",
             "created_at": "2026-06-09T13:00:00Z",
             "html_url": f"https://github.com/{REPO}/actions/runs/2"},
        ],
    },
}


# ---------------------------------------------------------------- status
def test_release_status_happy_path(monkeypatch):
    monkeypatch.setattr(release, "_gh_json", _api(FULL))
    out = release.release_status(REPO)
    assert out["ok"] is True
    assert out["release"]["tag"] == "v1.2.0" and out["release"]["kind"] == "release"
    assert out["since_release"]["ahead_by"] == 3
    assert len(out["since_release"]["commits"]) == 3
    runs = out["workflow_runs"]
    assert [r["conclusion"] for r in runs] == ["success", "failure"]


def test_release_status_falls_back_to_tag(monkeypatch):
    resp = dict(FULL)
    resp[f"/repos/{REPO}/releases/latest"] = RuntimeError("GitHub API 404")
    resp[f"/repos/{REPO}/tags"] = [{"name": "v1.2.0"}]
    monkeypatch.setattr(release, "_gh_json", _api(resp))
    out = release.release_status(REPO)
    assert out["ok"] is True
    assert out["release"]["tag"] == "v1.2.0" and out["release"]["kind"] == "tag"


def test_release_status_no_release_or_tag(monkeypatch):
    resp = {
        f"/repos/{REPO}/releases/latest": RuntimeError("GitHub API 404"),
        f"/repos/{REPO}/tags": [],
        f"/repos/{REPO}/actions/runs": {"workflow_runs": []},
    }
    monkeypatch.setattr(release, "_gh_json", _api(resp))
    out = release.release_status(REPO)
    assert out["ok"] is True and out["release"] is None
    assert "since_release" not in out


def test_release_status_validates_repo():
    assert "error" in release.release_status("")
    assert "error" in release.release_status("not a repo;DROP")


def test_release_status_surfaces_api_error(monkeypatch):
    monkeypatch.setattr(release, "_gh_json",
                        _api({f"/repos/{REPO}/releases/latest":
                              RuntimeError("GitHub API 404"),
                              f"/repos/{REPO}/tags":
                              RuntimeError("GitHub API 403 rate limited")}))
    out = release.release_status(REPO)
    # release lookup degrades to None; the runs call then errors cleanly
    assert "error" in out


# ---------------------------------------------------------------- changelog
def test_changelog_groups_and_folds_merges(monkeypatch):
    monkeypatch.setattr(release, "_gh_json", _api(FULL))
    out = release.draft_changelog(REPO)        # since defaults to latest release
    assert out["ok"] is True and out["since"] == "v1.2.0"
    log = out["changelog"]
    assert "### Features" in log and "jittered backoff cap (#150)" in log
    assert "### Fixes" in log and "drop NPE" in log
    assert "PR #151" in log                     # merge commit folded to its PR ref
    assert "Merge pull request" not in log


def test_changelog_explicit_since(monkeypatch):
    resp = dict(FULL)
    resp[f"/repos/{REPO}/compare/v1.1.0...HEAD"] = {
        "ahead_by": 1, "commits": [_commit("dddd1111", "docs: clarify setup")]}
    monkeypatch.setattr(release, "_gh_json", _api(resp))
    out = release.draft_changelog(REPO, since="v1.1.0")
    assert out["ok"] is True and out["since"] == "v1.1.0"
    assert "### Docs" in out["changelog"]


def test_changelog_requires_some_baseline(monkeypatch):
    resp = {
        f"/repos/{REPO}/releases/latest": RuntimeError("GitHub API 404"),
        f"/repos/{REPO}/tags": [],
    }
    monkeypatch.setattr(release, "_gh_json", _api(resp))
    out = release.draft_changelog(REPO)
    assert "error" in out and "no release/tag" in out["error"]


# ---------------------------------------------------------------- RBAC
def test_release_tools_are_read_only_for_viewer(monkeypatch):
    from mcp_server_evosql.server import MCPServer
    from mcp_server_evosql.tenancy import Identity
    srv = MCPServer()
    # release tools never touch the DB, but dispatch connects the backend
    # up-front — stub it out so the test stays server-free.
    monkeypatch.setattr(srv, "_backend_for", lambda ident: object())
    monkeypatch.setattr(release, "_gh_json", _api(FULL))
    viewer = Identity("acme", "v@acme", "t_acme", "u_acme", roles=("viewer",))
    out = srv._call_tool("release_status", {"repo": REPO}, viewer)
    assert out.get("ok") is True               # read-only -> viewer allowed
    out2 = srv._call_tool("draft_changelog", {"repo": REPO}, viewer)
    assert out2.get("ok") is True
