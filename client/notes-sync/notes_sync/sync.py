"""
evolutiondb-notes-sync — talk to Notes.app over JavaScript-for-
Automation, then store the captured notes in EvolutionDB long-term
memory.

Why JXA, not the SQLite store?
------------------------------
Apple Notes encodes the body of each note as gzip + a private
NotesBody protobuf inside ZICCLOUDSYNCINGOBJECT.ZDATA in
NoteStore.sqlite. Reverse-engineering that format is a moving
target across macOS versions. JXA gives us the rendered HTML body
straight from Notes.app and never breaks across releases.

Trade-off: the user has to allow Automation in System Settings →
Privacy & Security → Automation → Terminal/iTerm → Notes. macOS
prompts for this on first invocation.
"""
from __future__ import annotations

import argparse
import html
import json
import os
import re
import signal
import subprocess
import sys
import time
from pathlib import Path
from typing import Dict, Iterable, List, Optional

from . import state as state_mod


# JXA evaluated by osascript. Emits one JSON object per line so a
# Python iterator can process notes without holding everything in
# memory if there are tens of thousands.
_JXA = r"""
ObjC.import('Foundation');
const Notes = Application('Notes');
Notes.includeStandardAdditions = false;

function isoDate(d) {
    if (!d) return '';
    const f = $.NSISO8601DateFormatter.alloc.init;
    f.formatOptions = $.NSISO8601DateFormatWithInternetDateTime;
    return ObjC.unwrap(f.stringFromDate(d));
}

function* iterNotes() {
    const ns = Notes.notes();
    for (let i = 0; i < ns.length; i++) {
        try {
            const n = ns[i];
            const folder = (() => {
                try {
                    return n.container().name();
                } catch (e) { return ''; }
            })();
            yield {
                id:       n.id(),
                name:     n.name(),
                body:     n.body(),
                folder:   folder,
                modified: isoDate(n.modificationDate()),
                created:  isoDate(n.creationDate()),
            };
        } catch (e) {
            yield {error: String(e)};
        }
    }
}

for (const n of iterNotes()) {
    console.log(JSON.stringify(n));
}
"""


def _html_to_text(body_html: str) -> str:
    """Cheap HTML→text. Apple Notes body uses simple tags
    (h1/p/div/br/li). We strip tags, decode entities, collapse
    whitespace, normalise line breaks."""
    if not body_html:
        return ""
    s = body_html
    s = re.sub(r"</?(?:br|p|div|h[1-6]|li)[^>]*>", "\n", s,
                flags=re.I)
    s = re.sub(r"<[^>]+>", " ", s)
    s = html.unescape(s)
    s = re.sub(r"[ \t]+", " ", s)
    s = re.sub(r"\n[ \t]+", "\n", s)
    s = re.sub(r"\n{3,}", "\n\n", s)
    return s.strip()


def iter_notes() -> Iterable[Dict]:
    """Spawn osascript and stream JSON notes line by line.

    JXA's `console.log` writes to stderr, not stdout, so we merge the
    two streams. Any non-JSON line (genuine osascript errors) falls
    through the JSONDecodeError branch and is ignored. Without the
    merge, the stderr pipe fills (~64KB) on the first oversized note
    and osascript blocks forever.
    """
    try:
        proc = subprocess.Popen(
            ["/usr/bin/osascript", "-l", "JavaScript", "-e", _JXA],
            stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
            text=True, bufsize=1)
    except FileNotFoundError:
        print("[notes-sync] /usr/bin/osascript not found — Notes "
              "sync is macOS-only.", file=sys.stderr, flush=True)
        return

    assert proc.stdout is not None
    try:
        for line in proc.stdout:
            line = line.strip()
            if not line:
                continue
            try:
                obj = json.loads(line)
            except json.JSONDecodeError:
                continue
            if "error" in obj:
                print(f"[notes-sync] note skipped: {obj['error']}",
                      file=sys.stderr, flush=True)
                continue
            yield obj
    finally:
        try:
            proc.stdout.close()
        except Exception:
            pass
        proc.wait(timeout=600)


# ---------------------------------------------------------------- #
def _load_dotenv(path: Path) -> None:
    if not path.exists():
        return
    for raw in path.read_text(encoding="utf-8").splitlines():
        line = raw.strip()
        if not line or line.startswith("#") or "=" not in line:
            continue
        k, _, v = line.partition("=")
        k, v = k.strip(), v.strip().strip('"').strip("'")
        if v:
            os.environ.setdefault(k, v)


class Config:
    def __init__(self):
        self.evosql_host = os.environ.get("EVOSQL_HOST",     "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER",     "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID",
                                            "default_user")
        self.store       = os.environ.get("NOTES_MEMORY_STORE",
                                            "mcp_mem")


# EvolutionDB caps a single SQL statement at 8KB. The MEMORY PUT
# wrapper, JSON envelope (title/folder/timestamps/tags), and SQL
# single-quote doubling can roughly double the on-wire byte count
# against the raw text. We leave generous headroom so a note full
# of quotes or multi-byte UTF-8 still fits in one statement.
_MAX_TEXT_CHARS = 3000


def _build_record(n: Dict) -> Optional[Dict]:
    title = (n.get("name") or "").strip() or "(untitled)"
    text  = _html_to_text(n.get("body") or "")
    if not text and title == "(untitled)":
        return None
    truncated = False
    if len(text) > _MAX_TEXT_CHARS:
        text = text[:_MAX_TEXT_CHARS]
        truncated = True
    modified = n.get("modified") or n.get("created") or ""
    tags = ["notes", "apple-notes"]
    if truncated:
        tags.append("truncated")
    return {
        "fact":         f"Note \"{title}\": {text[:240]}",
        "source":       "notes",
        "kind":         "note",
        "title":        title,
        "text":         text,
        "folder":       n.get("folder") or "",
        "note_id":      n.get("id") or "",
        "modified_at":  modified,
        "created_at":   n.get("created") or "",
        "truncated":    truncated,
        "tags":         tags,
    }


def _note_key(n: Dict) -> str:
    raw_id = (n.get("note_id") or "").replace("/", "_")
    return f"note_{raw_id}"


def sync_once(cfg: Config, *, since_iso: Optional[str],
                dry_run: bool = False) -> Dict[str, int]:
    counters = {"notes": 0, "skipped": 0, "errors": 0}
    store: Optional[state_mod.MemoryStore] = None
    if not dry_run:
        store = state_mod.MemoryStore(
            host=cfg.evosql_host, port=cfg.evosql_port,
            user=cfg.evosql_user, password=cfg.evosql_pass,
            database=cfg.evosql_db, store=cfg.store,
            namespace=cfg.user_id,
        )

    wm = (store.get_watermark_iso() if store else None)
    floor = wm or since_iso
    highest = floor or ""

    for raw in iter_notes():
        rec = _build_record(raw)
        if not rec:
            counters["skipped"] += 1
            continue
        if floor and rec["modified_at"] <= floor:
            continue
        if store:
            try:
                store.put_record(_note_key(rec), rec)
            except Exception as exc:  # noqa: BLE001
                # One bad row should not abort the whole run; the next
                # invocation will retry. Track and move on.
                print(f"[notes-sync] note write failed "
                      f"(title={rec['title'][:60]!r}): {exc}",
                      file=sys.stderr, flush=True)
                counters["errors"] += 1
                continue
        counters["notes"] += 1
        if rec["modified_at"] > highest:
            highest = rec["modified_at"]

    if store and highest and highest != (wm or ""):
        store.set_watermark_iso(highest)
    return counters


_stop = False


def _install_signal_handlers() -> None:
    def _handler(_signum, _frame):
        global _stop
        _stop = True
        print("[notes-sync] stop requested",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        try:
            signal.signal(s, _handler)
        except (ValueError, OSError):
            pass


def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-notes-sync",
        description="Sync macOS Apple Notes into EvolutionDB.")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--since",
        default="",
        help="Optional ISO floor for first run (e.g. 2026-01-01T00:00:00Z). "
             "Empty means import everything.")
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()
    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, since_iso=args.since or None,
                                 dry_run=args.dry_run)
            print(json.dumps({"ok": True, **counts}), flush=True)
            return 0
        except Exception as exc:  # noqa: BLE001
            print(json.dumps({"ok": False, "error": str(exc)}),
                  flush=True)
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
