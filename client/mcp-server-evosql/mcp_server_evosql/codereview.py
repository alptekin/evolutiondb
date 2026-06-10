"""
codereview — draft a Claude code review for a synced GitHub PR and queue it to
the outbox for human approval. Phase 2, developer module (first slice).

Flow: find the PR among the synced github rows → obtain its unified diff
(passed in, or fetched live from the GitHub API when GITHUB_TOKEN is set) →
ask Claude for a focused review → queue it as an outbox item on the
``github_pr`` channel. **Nothing is ever posted to GitHub here.** ADR-004 is
unchanged: the draft sits in the outbox; a human approves it; and even on
approval it dry-runs because no ``github_pr`` transport is wired (posting to a
PR is a separate, deliberate, write-scoped step).

The LLM is opt-in (``EVOSQL_REVIEW_LLM=anthropic``) and reuses the existing
``anthropic`` provider pattern; with it unset the tool returns a clear error
instead of guessing.
"""
from __future__ import annotations

import json
import os
import re
import urllib.request
from typing import Any, Dict, Optional

_DIFF_CAP = 60000          # bound the diff fed to the model (token guard)
REVIEW_CHANNEL = "github_pr"


# ---------------------------------------------------------------- find PR
def _parse_ref(pr_ref: str):
    """Parse 'owner/repo#123' or a github PR URL into (repo, number). Returns
    (repo_or_None, number_or_None)."""
    s = (pr_ref or "").strip()
    m = re.search(r"github\.com/([^/]+/[^/]+)/(?:pull|issues)/(\d+)", s)
    if m:
        return m.group(1), int(m.group(2))
    m = re.match(r"^([\w.\-]+/[\w.\-]+)#(\d+)$", s)
    if m:
        return m.group(1), int(m.group(2))
    return None, None


def find_pr(backend, ns: str, pr_ref: str) -> Optional[Dict[str, Any]]:
    """The synced github PR thread record matching pr_ref, or None."""
    repo, number = _parse_ref(pr_ref)
    if not repo or number is None:
        return None
    from .server import _e
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(ns)}' AND mem_key LIKE 'gh_thread_%'") or []
    for r in rows:
        try:
            rec = json.loads(r[0])
        except (ValueError, TypeError):
            continue
        if (rec.get("source") == "github" and rec.get("kind") == "pr"
                and rec.get("repo") == repo and rec.get("number") == number):
            return rec
    return None


# ---------------------------------------------------------------- diff
def fetch_pr_diff(repo: str, number: int,
                  token: Optional[str] = None) -> Optional[str]:
    """Fetch a PR's unified diff from the GitHub API. Best-effort; returns None
    on any failure or when no token is available."""
    token = token or os.environ.get("GITHUB_TOKEN") or os.environ.get("GH_TOKEN")
    if not token or not repo or number is None:
        return None
    url = f"https://api.github.com/repos/{repo}/pulls/{number}"
    req = urllib.request.Request(url, headers={
        "Authorization": f"Bearer {token}",
        "Accept": "application/vnd.github.v3.diff",
        "User-Agent": "evosql-mcp-codereview",
        "X-GitHub-Api-Version": "2022-11-28",
    })
    try:
        with urllib.request.urlopen(req, timeout=20) as resp:  # noqa: S310 (https+pinned host)
            return resp.read().decode("utf-8", "replace")
    except Exception:
        return None


# ---------------------------------------------------------------- LLM
def _review_prompt(rec: Dict[str, Any], diff: str, language: str) -> str:
    repo = rec.get("repo") or ""
    number = rec.get("number")
    return (
        "You are a senior engineer doing a focused, no-nonsense code review of a "
        "pull request. Review ONLY what the diff shows — do not invent code that "
        "isn't present.\n\n"
        f"PR: {repo}#{number} — {rec.get('title') or ''}\n"
        f"Description: {(rec.get('body') or '')[:1500]}\n\n"
        "Unified diff:\n```diff\n" + diff[:_DIFF_CAP] + "\n```\n\n"
        f"Write a concise, actionable review IN {language}. Structure it as: a "
        "one-line verdict; then concrete findings (correctness, security, edge "
        "cases, missing tests) with file + line references from the diff where "
        "possible; then specific suggested fixes. Be direct, skip praise. If the "
        "change looks sound, say so briefly.")


def _call_llm(prompt: str, model: str) -> str:
    """Single anthropic call. Isolated so tests can stub it."""
    import anthropic
    c = anthropic.Anthropic()
    msg = c.messages.create(model=model, max_tokens=4000,
                            messages=[{"role": "user", "content": prompt}])
    return (msg.content[0].text or "").strip()


def draft_review(rec: Dict[str, Any], diff: str,
                 language: str = "english") -> Optional[str]:
    """Claude code-review text for the PR, or None when the reviewer LLM is not
    configured (opt-in via EVOSQL_REVIEW_LLM=anthropic)."""
    be = os.environ.get("EVOSQL_REVIEW_LLM", "").strip().lower()
    if be not in ("anthropic", "claude"):
        return None
    model = os.environ.get("EVOSQL_REVIEW_MODEL", "claude-sonnet-4-6")
    return _call_llm(_review_prompt(rec, diff, language), model)


# ---------------------------------------------------------------- tool
def review_pr(backend, ns: str, pr_ref: str, *,
              diff: Optional[str] = None,
              language: str = "english") -> Dict[str, Any]:
    """Draft a Claude review for a synced GitHub PR and queue it to the outbox
    (dry-run; never posts). Returns the queued item or an ``error`` dict."""
    if not (pr_ref or "").strip():
        return {"error": "review_pr requires `pr` (e.g. 'owner/repo#123' or a PR url)"}
    rec = find_pr(backend, ns, pr_ref)
    if not rec:
        return {"error": f"no synced GitHub PR matching {pr_ref!r} "
                         f"(sync it with github-sync first)"}
    repo, number = rec["repo"], rec["number"]
    d = diff or fetch_pr_diff(repo, number)
    if not d or not d.strip():
        return {"error": "no diff available — pass `diff`, or set GITHUB_TOKEN "
                         "so the diff can be fetched from the GitHub API"}
    review = draft_review(rec, d, language)
    if review is None:
        return {"error": "code-review LLM not configured "
                         "(set EVOSQL_REVIEW_LLM=anthropic)"}
    if not review.strip():
        return {"error": "the reviewer returned an empty review"}
    from . import outbox
    item = outbox.queue(
        backend, ns, f"{REVIEW_CHANNEL}:{repo}#{number}", review,
        channel=REVIEW_CHANNEL, source="github",
        to=f"{repo}#{number}", subject=rec.get("title"),
        thread_id=f"{repo}#{number}")
    return {
        "ok": True, "id": item["id"], "pr": f"{repo}#{number}",
        "url": rec.get("url"), "review": review, "queued": True,
        "note": "Draft queued for approval — NOTHING was posted to GitHub. "
                "Inspect it with list_pending_replies; approve_send dry-runs "
                "(no github_pr transport is wired — posting is a separate step).",
    }
