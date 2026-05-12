# evolutiondb-github-sync

Pull every GitHub PR / issue thread you're involved in — authored,
assigned, reviewed, or commented on — into EvolutionDB long-term
memory. The MCP server then surfaces them through `search_memory`,
so an AI assistant connected through Claude Desktop / Claude Code
can answer "what did we decide on PR #142 last week?" without
re-reading the diff.

## What gets indexed

For every issue + PR that matches `involves:<you> updated:>since`:

| Record                | Key shape                          |
|-----------------------|------------------------------------|
| The thread itself     | `gh_thread_<repo>#<number>`        |
| Diff-anchored comments| `gh_pr_comment_<comment_id>`       |
| Issue-thread comments | `gh_issue_comment_<comment_id>`    |
| PR reviews with a body| `gh_pr_review_<review_id>`         |

Keys are deterministic, so a re-sync `UPSERT`s instead of duplicating
rows. A per-thread watermark on `updated_at` skips threads that
haven't moved since the last pass.

## Install

```
pip install evolutiondb-github-sync
```

Or from this repo:

```
pip install -e client/github-sync
```

## Configure

Copy `.env.example` to `.env` and fill in:

- `GITHUB_TOKEN` — classic PAT with `repo` (or `public_repo`) +
  `read:user`. See https://github.com/settings/tokens.
- `GITHUB_USERNAME` — the handle to follow.
- `EVOSQL_*` — point at a running EvolutionDB instance (default
  localhost:5433 / admin / admin).
- `MCP_USER_ID` — sticky namespace shared with the MCP server.

## Run

```bash
# One pass; pull the last 7 days. First-time bootstrap.
evolutiondb-github-sync --once --since 7d

# Daemon — polls every GITHUB_POLL_INTERVAL seconds.
evolutiondb-github-sync --interval 900

# Verify auth + scopes without touching the DB.
evolutiondb-github-sync --once --dry-run
```

Each pass prints a one-line JSON summary:

```
{"ok": true, "threads": 12, "comments": 84, "reviews": 6, "errors": 0}
```

## Rate limits

A classic PAT gives you 5,000 REST calls per hour. One sync pass
spends roughly `1 search call + (3 calls × open threads)`, so even
500 active threads fits in under 10% of the budget. The client
honours `X-RateLimit-Remaining` and the secondary-rate-limit
`Retry-After` header — if either fires it sleeps until reset and
resumes.

## What's not indexed

- Commit messages — git history is already queryable locally.
- Workflow runs / check runs — high volume, low signal for memory
  recall.
- Notifications — overlaps too much with the issue / comment streams.

## Privacy

Records are written to the same EvolutionDB store the MCP server
reads from. Anyone with access to that database (and the matching
`MCP_USER_ID`) can recall the indexed content through
`search_memory`. Don't ship a `GITHUB_TOKEN` that has more scope
than you'd hand the AI assistant directly.
