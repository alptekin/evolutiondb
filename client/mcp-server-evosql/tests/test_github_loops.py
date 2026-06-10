"""
test_github_loops — GitHub PR/issue -> open-loop derivation (open_loops._github_loops).

Maps synced github rows (in the primary memory store, source=github) to open
loops by item state + the user's involvement. Reliable signals only — the
connector stores no requested_reviewers/draft/merged, so "review requested from
me" is not faked. All server-free via FakeBackend; fictional fixtures.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

import pytest

from mcp_server_evosql import brief, open_loops

NS = "alp_test"
ME = "me_login"


def _pr(num, author, *, state="open", assignees=None, title="T", repo="acme/widgets"):
    return {"source": "github", "kind": "pr", "repo": repo, "number": num,
            "title": title, "state": state, "author": author,
            "assignees": assignees or [], "labels": [],
            "url": f"https://github.com/{repo}/pull/{num}",
            "updated_at": "2026-06-09T17:00:00Z", "created_at": "2026-06-08T09:00:00Z",
            "fact": f"{author} opened pr {repo}#{num}: {title}"}


def _issue(num, author, **kw):
    d = _pr(num, author, **kw)
    d["kind"] = "issue"
    d["url"] = d["url"].replace("/pull/", "/issues/")
    return d


def _review(num, author, state, repo="acme/widgets"):
    return {"source": "github", "kind": "pr_review", "repo": repo, "number": num,
            "author": author, "state": state, "body": "please fix",
            "submitted_at": "2026-06-09T18:00:00Z", "comment_id": num * 11,
            "url": f"https://github.com/{repo}/pull/{num}"}


def _seed(b):
    b.put(b.memory, NS, "gh_thread_acme/widgets#1", _pr(1, ME))               # my PR, no review
    b.put(b.memory, NS, "gh_thread_acme/widgets#2", _pr(2, ME))               # my PR, changes requested
    b.put(b.memory, NS, "gh_pr_review_22", _review(2, "jane", "CHANGES_REQUESTED"))
    b.put(b.memory, NS, "gh_thread_acme/widgets#3", _issue(3, "alice", assignees=[ME]))  # assigned to me
    b.put(b.memory, NS, "gh_thread_acme/widgets#4", _pr(4, "bob"))            # involved only -> skip
    b.put(b.memory, NS, "gh_thread_acme/widgets#5", _pr(5, ME, state="closed"))  # closed -> skip
    # a non-github row in the same store must be ignored
    b.put(b.memory, NS, "mem_note", {"fact": "note", "source": "gmail"})


@pytest.fixture(autouse=True)
def _login(monkeypatch):
    monkeypatch.setenv("GITHUB_USERNAME", ME)


def test_directions_and_filtering():
    b = FakeBackend()
    _seed(b)
    loops = open_loops._github_loops(b, NS)
    by = {r["thread_key"]: r for r in loops.values()}
    assert by["acme/widgets#1"]["direction"] == "awaiting_them"       # my PR -> review/merge
    assert by["acme/widgets#2"]["direction"] == "awaiting_me"         # changes requested
    assert by["acme/widgets#2"]["counterparty"] == "jane"
    assert by["acme/widgets#3"]["direction"] == "awaiting_me"         # assigned to me
    assert by["acme/widgets#3"]["counterparty"] == "alice"
    assert "acme/widgets#4" not in by                                # involved-only skipped
    assert "acme/widgets#5" not in by                                # closed skipped
    assert all(r["source"] == "github" and r["status"] == "open"
               for r in loops.values())


def test_keys_are_deterministic_and_prefixed():
    b = FakeBackend()
    _seed(b)
    k1 = set(open_loops._github_loops(b, NS))
    k2 = set(open_loops._github_loops(b, NS))
    assert k1 == k2
    assert all(k.startswith("loop_github_") for k in k1)


def test_disabled_without_login(monkeypatch):
    monkeypatch.delenv("GITHUB_USERNAME", raising=False)
    monkeypatch.delenv("EVOSQL_GITHUB_LOGIN", raising=False)
    b = FakeBackend()
    _seed(b)
    assert open_loops._github_loops(b, NS) == {}


def test_loops_survive_the_brief_buckets():
    # github loops leave loop_type unset, so awaiting_me ones pass needs_reply;
    # awaiting_them ones are not gated. Both must show in the morning brief.
    b = FakeBackend()
    _seed(b)
    for k, rec in open_loops._github_loops(b, NS).items():
        b.put(b.loops_store, NS, k, rec)
    data = brief.collect(b, NS)
    wm = {d["counterparty"] for d in data["waiting_me"]}
    wt = {d["counterparty"] for d in data["waiting_them"]}
    assert {"jane", "alice"} <= wm                # both awaiting_me github loops
    assert "review" in wt                         # PR #1 awaiting review (no reviewer)
