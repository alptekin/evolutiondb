"""
Sync Claude Code session transcripts into EvolutionDB memory so past
conversations are searchable (Hermes-inspired session search).

Claude Code writes one JSONL transcript per session under
~/.claude/projects/<slug>/<sessionId>.jsonl. Each line has a top-level
``type``; the ones that carry human-readable conversation are:

  type=user      message.role=user, message.content is a STR for a real
                 prompt (a LIST means tool_result blocks — machine output,
                 skipped). Slash-command / local-command / caveat wrappers are
                 filtered out so only genuine prompts are kept.
  type=assistant message.content is a LIST of blocks; only ``text`` blocks are
                 kept (tool_use / thinking are skipped).

This connector builds ONE record per session — a searchable digest (title +
trimmed user/assistant turns) — keyed by session id, upserted as the
transcript grows. It reads LOCAL files only; there is no API.

Privacy: transcripts are the user's real work. The digest is bounded, and when
``evolutiondb-pii`` is installed the text is run through its masker (companion
rows) exactly like the other connectors.
"""
from __future__ import annotations

import argparse
import json
import os
import signal
import sys
import time
from pathlib import Path
from typing import Dict, List, Optional

from . import state as state_mod

try:
    from evolutiondb_pii.integration import protect_record as _pii_protect
except ImportError:
    _pii_protect = None

_PII_FIELDS = ["fact", "title", "text"]

# user `content` strings that are wrappers/noise, not genuine prompts
_NOISE_PREFIXES = (
    "<command-name>", "<command-message>", "<local-command",
    "<bash-", "caveat:", "[request interrupted",
    "<user-prompt-submit-hook>", "<system-reminder>",
)
_DIGEST_CAP = 5000          # keep the record JSON under the engine's 8 KB cap


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
        self.projects_dir = os.path.expanduser(
            os.environ.get("CLAUDE_PROJECTS_DIR", "~/.claude/projects"))
        self.evosql_host = os.environ.get("EVOSQL_HOST", "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER", "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID", "default_user")
        self.store       = os.environ.get("CLAUDE_SESSION_STORE", "mcp_mem")
        self.poll_secs   = int(os.environ.get("CLAUDE_SESSION_POLL_INTERVAL", "900"))


def _is_noise(text: str) -> bool:
    t = text.lstrip().lower()
    return any(t.startswith(p) for p in _NOISE_PREFIXES)


def _user_text(line: Dict) -> Optional[str]:
    """A genuine human prompt from a user line, or None (tool_result / noise)."""
    if line.get("isSidechain"):
        return None
    content = (line.get("message") or {}).get("content")
    if not isinstance(content, str):
        return None                       # list => tool_result blocks
    text = content.strip()
    if not text or _is_noise(text):
        return None
    return text


def _assistant_text(line: Dict) -> Optional[str]:
    """The assistant's prose (text blocks only) from an assistant line."""
    if line.get("isSidechain"):
        return None
    content = (line.get("message") or {}).get("content")
    if isinstance(content, str):
        return content.strip() or None
    if not isinstance(content, list):
        return None
    parts = [b.get("text", "") for b in content
             if isinstance(b, dict) and b.get("type") == "text"]
    joined = "\n".join(p.strip() for p in parts if p.strip())
    return joined or None


def parse_session(path: Path) -> Optional[Dict]:
    """Parse one transcript file into a session record, or None if it has no
    usable conversation."""
    session_id = title = cwd = git_branch = project = ""
    started = ended = ""
    turns: List[str] = []
    user_count = asst_count = 0
    try:
        lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    except OSError:
        return None
    for raw in lines:
        raw = raw.strip()
        if not raw:
            continue
        try:
            d = json.loads(raw)
        except (ValueError, TypeError):
            continue
        t = d.get("type")
        session_id = session_id or d.get("sessionId") or ""
        if t == "ai-title" and d.get("aiTitle"):
            title = d["aiTitle"]
            continue
        if t not in ("user", "assistant"):
            continue
        ts = d.get("timestamp") or ""
        if ts:
            started = started or ts
            ended = ts
        cwd = cwd or d.get("cwd") or ""
        git_branch = git_branch or d.get("gitBranch") or ""
        if t == "user":
            txt = _user_text(d)
            if txt:
                user_count += 1
                turns.append("USER: " + txt)
        else:
            txt = _assistant_text(d)
            if txt:
                asst_count += 1
                turns.append("ASSISTANT: " + txt)

    if not session_id or (user_count == 0 and asst_count == 0):
        return None
    project = os.path.basename(str(path.parent))
    digest = "\n".join(turns)
    if len(digest) > _DIGEST_CAP:
        digest = digest[:_DIGEST_CAP] + " …[clipped]"
    label = title or (turns[0][6:80] if turns else session_id[:8])
    fact = (f'Claude session "{label}" — {user_count} prompts, '
            f"{asst_count} replies ({project})")
    return {
        "fact": fact,
        "source": "claude_session",
        "kind": "session",
        "session_id": session_id,
        "title": title,
        "project": project,
        "cwd": cwd,
        "git_branch": git_branch,
        "turns": user_count + asst_count,
        "text": digest,
        "started_at": started,
        "ended_at": ended,
        "tags": ["claude_session", "session", project],
    }


def sync_once(cfg: Config, *, dry_run: bool = False) -> Dict[str, int]:
    root = Path(cfg.projects_dir)
    if not root.is_dir():
        raise RuntimeError(f"CLAUDE_PROJECTS_DIR not found: {cfg.projects_dir}")

    store: Optional[state_mod.MemoryStore] = None
    if not dry_run:
        store = state_mod.MemoryStore(
            host=cfg.evosql_host, port=cfg.evosql_port,
            user=cfg.evosql_user, password=cfg.evosql_pass,
            database=cfg.evosql_db, store=cfg.store, namespace=cfg.user_id,
        )

    counters = {"sessions": 0, "skipped": 0, "errors": 0}
    for path in sorted(root.glob("**/*.jsonl")):
        try:
            rec = parse_session(path)
        except Exception as exc:        # noqa: BLE001
            print(f"[claude-session-sync] {path.name}: parse failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1
            continue
        if not rec:
            counters["skipped"] += 1
            continue
        sid, ended = rec["session_id"], rec.get("ended_at") or ""
        watermark = store.get_watermark(sid) if store else None
        if watermark and ended and ended <= watermark:
            counters["skipped"] += 1
            continue
        key = f"claude_session_{sid}"
        if store:
            rec_out, companions = _protect(rec, key)
            store.put_record(key, rec_out)
            for ck, cv in companions:
                store.put_record(ck, cv)
            if ended:
                store.set_watermark(sid, ended)
        counters["sessions"] += 1
    return counters


_stop = False


def _install_signal_handlers() -> None:
    def handler(signum, frame):  # noqa: ARG001
        global _stop
        _stop = True
        print("[claude-session-sync] stop requested, finishing current pass …",
              file=sys.stderr, flush=True)
    signal.signal(signal.SIGTERM, handler)
    signal.signal(signal.SIGINT, handler)


def main() -> int:
    ap = argparse.ArgumentParser(prog="evolutiondb-claude-session-sync")
    ap.add_argument("--once", action="store_true")
    ap.add_argument("--interval", type=int, help="daemon mode, seconds")
    ap.add_argument("--dir", help="override CLAUDE_PROJECTS_DIR")
    ap.add_argument("--dry-run", action="store_true",
                    help="parse but don't persist")
    ap.add_argument("--env-file", default=".env",
                    help="dotenv path; ignored if missing")
    args = ap.parse_args()

    _load_dotenv(Path(args.env_file).expanduser())
    if args.dir:
        os.environ["CLAUDE_PROJECTS_DIR"] = args.dir
    cfg = Config()
    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, dry_run=args.dry_run)
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
            time.sleep(1)
    return rc


if __name__ == "__main__":
    raise SystemExit(main())
