"""
test_ado_loops — Azure DevOps PR -> open-loop derivation (open_loops._ado_loops).

ADO PR records carry review state first-class (reviewers[] with votes,
is_draft, status), so unlike the GitHub builder the mapping is direct: a
zero-vote reviewer seat on someone else's active PR IS "review requested from
me". All server-free via FakeBackend; fictional fixtures.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

import pytest

from mcp_server_evosql import brief, open_loops

NS = "alp_test"
ME = "me_login@example.com"


def _pr(num, author, *, status="active", draft=False, reviewers=None,
        title="T", repo="widgets-project/widgets"):
    return {"source": "azure_devops", "kind": "pr", "repo": repo,
            "number": num, "title": title, "status": status,
            "state": "open" if status == "active" else "closed",
            "author": author, "is_draft": draft,
            "reviewers": reviewers or [],
            "url": f"https://dev.azure.com/acme-org/x/pullrequest/{num}",
            "updated_at": "2026-06-09T17:00:00Z",
            "created_at": "2026-06-08T09:00:00Z",
            "fact": f"{author} opened pr {repo}#{num}: {title}"}


def _rv(name, vote=0, required=False):
    return {"name": name, "display": name.split("@")[0],
            "vote": vote, "is_required": required}


def _seed(b):
    # 1: review requested from me (my vote 0) on jane's PR -> awaiting_me
    b.put(b.memory, NS, "ado_thread_widgets-project/widgets#1",
          _pr(1, "jane.dev@example.com",
              reviewers=[_rv(ME, 0, required=True)]))
    # 2: I'm a reviewer but already voted -> no loop
    b.put(b.memory, NS, "ado_thread_widgets-project/widgets#2",
          _pr(2, "jane.dev@example.com", reviewers=[_rv(ME, 10)]))
    # 3: my PR with a rejecting reviewer -> awaiting_me (address review)
    b.put(b.memory, NS, "ado_thread_widgets-project/widgets#3",
          _pr(3, ME, reviewers=[_rv("sam.dev@example.com", -5)]))
    # 4: my PR, no negative votes -> awaiting_them
    b.put(b.memory, NS, "ado_thread_widgets-project/widgets#4",
          _pr(4, ME, reviewers=[_rv("ali.dev@example.com", 0, required=True)]))
    # 5: draft -> skipped even though I'm a zero-vote reviewer
    b.put(b.memory, NS, "ado_thread_widgets-project/widgets#5",
          _pr(5, "jane.dev@example.com", draft=True, reviewers=[_rv(ME, 0)]))
    # 6: completed -> skipped (auto-resolves via the sweep)
    b.put(b.memory, NS, "ado_thread_widgets-project/widgets#6",
          _pr(6, ME, status="completed"))
    # a pipeline run + a non-ADO row in the same store must be ignored
    b.put(b.memory, NS, "ado_build_9001",
          {"source": "azure_devops", "kind": "pipeline_run", "number": 9001})
    b.put(b.memory, NS, "mem_note", {"fact": "note", "source": "gmail"})


@pytest.fixture(autouse=True)
def _login(monkeypatch):
    monkeypatch.setenv("AZURE_DEVOPS_USERNAME", ME)


def test_directions_votes_and_filtering():
    b = FakeBackend()
    _seed(b)
    loops = open_loops._ado_loops(b, NS)
    by = {r["thread_key"]: r for r in loops.values()}
    assert by["widgets-project/widgets#1"]["direction"] == "awaiting_me"
    assert by["widgets-project/widgets#1"]["counterparty"] == "jane.dev@example.com"
    assert by["widgets-project/widgets#1"]["priority"] == "high"   # is_required
    assert "widgets-project/widgets#2" not in by                  # already voted
    assert by["widgets-project/widgets#3"]["direction"] == "awaiting_me"
    assert by["widgets-project/widgets#3"]["counterparty"] == "sam.dev@example.com"
    assert by["widgets-project/widgets#4"]["direction"] == "awaiting_them"
    assert by["widgets-project/widgets#4"]["counterparty"] == "ali.dev@example.com"
    assert "widgets-project/widgets#5" not in by                  # draft
    assert "widgets-project/widgets#6" not in by                  # completed
    assert all(r["source"] == "azure_devops" and r["status"] == "open"
               for r in loops.values())


def test_keys_deterministic_and_prefixed():
    b = FakeBackend()
    _seed(b)
    k1 = set(open_loops._ado_loops(b, NS))
    k2 = set(open_loops._ado_loops(b, NS))
    assert k1 == k2 and k1
    assert all(k.startswith("loop_ado_") for k in k1)


def test_disabled_without_login(monkeypatch):
    monkeypatch.delenv("AZURE_DEVOPS_USERNAME", raising=False)
    monkeypatch.delenv("EVOSQL_ADO_LOGIN", raising=False)
    b = FakeBackend()
    _seed(b)
    assert open_loops._ado_loops(b, NS) == {}


def test_loops_survive_the_brief_buckets():
    b = FakeBackend()
    _seed(b)
    for k, rec in open_loops._ado_loops(b, NS).items():
        b.put(b.loops_store, NS, k, rec)
    data = brief.collect(b, NS)
    wm = {d["counterparty"] for d in data["waiting_me"]}
    wt = {d["counterparty"] for d in data["waiting_them"]}
    assert {"jane.dev@example.com", "sam.dev@example.com"} <= wm
    assert "ali.dev@example.com" in wt
