"""
test_codereview — draft a Claude code review for a synced GitHub PR and queue
it to the outbox (codereview.py). Server-free: the LLM call boundary
(_call_llm) is stubbed and the diff is injected, so no network/anthropic/token
is needed. Verifies nothing is ever sent. Fictional fixtures.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

import pytest

from mcp_server_evosql import codereview, outbox

NS = "alp_test"
DIFF = ("diff --git a/app.py b/app.py\n@@ -1,3 +1,5 @@\n"
        "+def f(x):\n+    return x / 0\n")


def _pr(num=142, repo="acme/widgets", title="Add retry/backoff"):
    return {"source": "github", "kind": "pr", "repo": repo, "number": num,
            "title": title, "body": "Closes #131.", "state": "open",
            "author": "octocat", "url": f"https://github.com/{repo}/pull/{num}"}


def _seed(b):
    b.put(b.memory, NS, "gh_thread_acme/widgets#142", _pr())


def _canned_llm(prompt, model):
    return "Verdict: needs work.\n- app.py:2 division by zero when x denominator."


@pytest.fixture
def b():
    fb = FakeBackend()
    _seed(fb)
    return fb


# ---------------------------------------------------------------- parsing
def test_parse_ref_forms():
    assert codereview._parse_ref("acme/widgets#142") == ("acme/widgets", 142)
    assert codereview._parse_ref(
        "https://github.com/acme/widgets/pull/142") == ("acme/widgets", 142)
    assert codereview._parse_ref("nonsense") == (None, None)


def test_find_pr(b):
    rec = codereview.find_pr(b, NS, "acme/widgets#142")
    assert rec and rec["number"] == 142 and rec["repo"] == "acme/widgets"
    assert codereview.find_pr(b, NS, "acme/widgets#999") is None


# ---------------------------------------------------------------- review_pr
def test_review_pr_drafts_and_queues_without_sending(b, monkeypatch):
    monkeypatch.setenv("EVOSQL_REVIEW_LLM", "anthropic")
    monkeypatch.setattr(codereview, "_call_llm", _canned_llm)
    out = codereview.review_pr(b, NS, "acme/widgets#142", diff=DIFF)
    assert out["ok"] is True and out["pr"] == "acme/widgets#142"
    assert "division by zero" in out["review"]
    # it is queued on the github_pr channel, pending, NOT sent
    pend = outbox.list_pending(b, NS)
    assert len(pend) == 1
    assert pend[0]["channel"] == "github_pr"
    assert pend[0]["status"] == "pending"
    # no transport is wired for github_pr, so even a send attempt dry-runs
    assert "github_pr" not in outbox.TRANSPORTS


def test_review_pr_requires_diff_or_token(b, monkeypatch):
    monkeypatch.setenv("EVOSQL_REVIEW_LLM", "anthropic")
    monkeypatch.delenv("GITHUB_TOKEN", raising=False)
    monkeypatch.delenv("GH_TOKEN", raising=False)
    out = codereview.review_pr(b, NS, "acme/widgets#142")   # no diff, no token
    assert "error" in out and "diff" in out["error"]


def test_review_pr_requires_llm_configured(b, monkeypatch):
    monkeypatch.delenv("EVOSQL_REVIEW_LLM", raising=False)
    out = codereview.review_pr(b, NS, "acme/widgets#142", diff=DIFF)
    assert "error" in out and "LLM not configured" in out["error"]


def test_review_pr_unknown_pr(b, monkeypatch):
    monkeypatch.setenv("EVOSQL_REVIEW_LLM", "anthropic")
    monkeypatch.setattr(codereview, "_call_llm", _canned_llm)
    out = codereview.review_pr(b, NS, "acme/widgets#999", diff=DIFF)
    assert "error" in out and "no synced GitHub PR" in out["error"]


# ---------------------------------------------------------------- RBAC
def test_viewer_cannot_review(monkeypatch):
    from mcp_server_evosql.server import MCPServer
    from mcp_server_evosql.tenancy import Identity
    srv = MCPServer()
    fb = FakeBackend()
    _seed(fb)
    monkeypatch.setattr(srv, "_backend_for", lambda ident: fb)
    monkeypatch.setenv("EVOSQL_REVIEW_LLM", "anthropic")
    monkeypatch.setattr(codereview, "_call_llm", _canned_llm)
    # user_id IS the mem_namespace; match the seeded NS so find_pr resolves
    viewer = Identity("acme", NS, "t_acme", "u_acme", roles=("viewer",))
    out = srv._call_tool("review_pr", {"pr": "acme/widgets#142", "diff": DIFF}, viewer)
    assert "error" in out and "permission denied" in out["error"]
    # member may
    member = Identity("acme", NS, "t_acme", "u_acme", roles=("member",))
    out2 = srv._call_tool("review_pr", {"pr": "acme/widgets#142", "diff": DIFF}, member)
    assert out2.get("ok") is True
