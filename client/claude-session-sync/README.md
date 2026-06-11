# evolutiondb-claude-session-sync

Index your Claude Code session transcripts into EvolutionDB long-term memory so
the assistant can **search past conversations** ("what did we decide about the
storage migration last week?"). A local-file connector — no API, no token.

## What gets indexed

| mem_key | content |
| --- | --- |
| `claude_session_<sessionId>` | one searchable digest per session (AI title + trimmed user/assistant turns, project, branch, turn count, start/end) |
| `claude_session_state_<sessionId>` | per-session watermark (last timestamp) |

Keys are deterministic, so re-syncing a session that grew **upserts** the same
record instead of duplicating.

Only genuine conversation is kept: real user prompts (slash-command / hook /
caveat wrappers and tool-result blocks are filtered out) and the assistant's
prose (tool calls and thinking blocks are skipped). The digest is bounded to
stay under the engine's value cap.

## Install

```bash
pip install -e client/claude-session-sync
```

## Run

```bash
evolutiondb-claude-session-sync --once             # one pass
evolutiondb-claude-session-sync --once --dry-run   # parse, persist nothing
evolutiondb-claude-session-sync --interval 900     # daemon
evolutiondb-claude-session-sync --dir ~/.claude/projects/<one-project>
```

Each pass prints one JSON line: `{"ok": true, "sessions": N, "skipped": N,
"errors": N}`. Exit codes: 0 ok · 4 pass failed.

## Privacy

Transcripts are your real work — prompts, code, and assistant output land in
EvolutionDB in cleartext under your namespace; anyone with DB access and the
namespace can recall them via `search_memory`. Optional masking: install
`evolutiondb-pii` and the digest text is protected with encrypted companion
rows. The connector reads only `CLAUDE_PROJECTS_DIR`; point it at a single
project subfolder to scope what gets indexed.
