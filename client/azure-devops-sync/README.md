# evolutiondb-azure-devops-sync

Sync the Azure DevOps activity you're involved in — pull requests (created by
you or awaiting your review) and pipeline runs — into EvolutionDB long-term
memory, where the MCP server's `search_memory`, morning brief, and open-loops
layer can use it.

## What gets indexed

| mem_key                                   | content                          |
| ----------------------------------------- | -------------------------------- |
| `ado_thread_<project/repo>#<prId>`        | one row per pull request         |
| `ado_pr_comment_<threadId>_<commentId>`   | PR thread comments               |
| `ado_build_<buildId>`                     | pipeline runs (CI context)       |
| `azdo_state_<project/repo>#<prId>`        | per-PR sync watermark            |

Keys are deterministic, so re-syncing upserts instead of duplicating.

Unlike the GitHub connector (whose `/search/issues` feed drops review state),
the ADO PR object carries `reviewers[]` with first-class `vote` values
(10 approved / 5 approved-with-suggestions / 0 no vote / −5 waiting-for-author
/ −10 rejected), `isRequired`, `isDraft`, and `status` — all stored verbatim,
so "review requested from me and I haven't voted" is derivable downstream
without guessing.

Honesty notes: the PR list object has no `updatedDate`, so `updated_at` is the
best available (`closedDate`, else `creationDate`); pipeline runs are
searchable context, not open loops.

## Install

```bash
pip install -e client/azure-devops-sync
```

## Configure

Copy `.env.example` to `.env` and set `AZURE_DEVOPS_ORG_URL` +
`AZURE_DEVOPS_PAT` (PAT scopes: **Code Read** + **Build Read**). "Me" is the
PAT owner — resolved from `/_apis/connectionData`, no username needed.

## Run

```bash
evolutiondb-azure-devops-sync --once              # one pass
evolutiondb-azure-devops-sync --once --dry-run    # fetch, persist nothing
evolutiondb-azure-devops-sync --interval 900      # daemon
```

Each pass prints one JSON line: `{"ok": true, "prs": N, "comments": N,
"builds": N, "errors": N}`. Exit codes: 0 ok · 2 config error · 4 pass failed.

## Privacy

Records store logins, titles, and up to ~4 KB of PR/comment text in cleartext
in EvolutionDB — anyone with DB access and the namespace can recall them.
Optional masking: install `evolutiondb-pii` and the configured fields are
protected with encrypted companion rows. Keep real org names and tokens in
`.env` (gitignored) only.
