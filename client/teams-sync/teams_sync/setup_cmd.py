"""
`evosql-teams-sync --setup` — one-stop install for the long-term
memory stack on this machine.

After `pip install evolutiondb-teams-sync`:

  * the Python sync tool itself is on $PATH
  * mcp-server-evolutiondb is on $PATH (pulled in as a dependency)

What's still missing for a fresh user is the C engine binary, plus a
working Claude Desktop config that points the MCP server at it.
This module fills those two gaps:

  1. Download evosql-server for the host platform if not cached.
  2. Detect Claude Desktop on disk and merge an `evolutiondb-memory`
     entry into its config. Existing entries are preserved; only the
     env block is updated.

It is idempotent — re-running it on a configured machine is a no-op.
"""
from __future__ import annotations

import json
import os
import platform
import sys
from pathlib import Path
from typing import Optional


CLAUDE_CONFIG_PATHS = {
    "darwin": "~/Library/Application Support/Claude/claude_desktop_config.json",
    "linux":  "~/.config/Claude/claude_desktop_config.json",
    "win32":  "~/AppData/Roaming/Claude/claude_desktop_config.json",
}


def _claude_config_path() -> Optional[Path]:
    raw = CLAUDE_CONFIG_PATHS.get(sys.platform)
    if not raw:
        return None
    return Path(os.path.expanduser(raw))


def _mcp_block(user_id: str, evosql_port: int = 5433) -> dict:
    """The env block we slot into claude_desktop_config.json. Matches
    what the manual setup instructions ask the user to paste."""
    return {
        "command": "uvx",
        "args":    ["mcp-server-evolutiondb"],
        "env": {
            "EVOSQL_HOST":      "127.0.0.1",
            "EVOSQL_PORT":      str(evosql_port),
            "EVOSQL_USER":      "admin",
            "EVOSQL_PASSWORD":  "admin",
            "EVOSQL_DATABASE":  "evosql",
            "MCP_USER_ID":      user_id,
            "MCP_STORE_PREFIX": "mcp",
        },
    }


def _merge_claude_config(path: Path, user_id: str, evosql_port: int) -> bool:
    """Return True if we wrote anything, False if the config was
    already pointing at our MCP server."""
    if path.exists():
        try:
            existing = json.loads(path.read_text(encoding="utf-8"))
        except json.JSONDecodeError:
            print(f"[setup] {path} is not valid JSON, leaving it alone",
                  file=sys.stderr)
            return False
    else:
        existing = {}

    existing.setdefault("mcpServers", {})
    new_block = _mcp_block(user_id, evosql_port)
    if existing["mcpServers"].get("evolutiondb-memory") == new_block:
        return False
    existing["mcpServers"]["evolutiondb-memory"] = new_block

    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(existing, indent=2), encoding="utf-8")
    return True


def run_setup(*, user_id: str, evosql_port: int = 5433) -> int:
    """Driver for `--setup`. Returns 0 on success, non-zero on
    failure (mirrors the rest of main()'s convention)."""
    from . import embedded as embedded_mod

    # ----- Step 1: download + cache the engine binary -----------
    try:
        srv = embedded_mod.EmbeddedServer(
            pg_port=evosql_port,
            admin_user="admin",
            admin_password="admin",
        )
        srv.binary_path = srv._resolve_binary()  # downloads if missing
        print(f"[setup] evosql-server cached at {srv.binary_path}",
              file=sys.stderr)
    except embedded_mod.EmbeddedError as exc:
        print(f"[setup] could not fetch evosql-server: {exc}",
              file=sys.stderr)
        return 5

    # ----- Step 2: claude_desktop_config.json -------------------
    cfg_path = _claude_config_path()
    if cfg_path is None:
        print(f"[setup] no Claude Desktop config path is known for "
              f"sys.platform={sys.platform}; skipping client wiring",
              file=sys.stderr)
        return 0

    if _merge_claude_config(cfg_path, user_id, evosql_port):
        print(f"[setup] wired evolutiondb-memory into {cfg_path}",
              file=sys.stderr)
        print(f"[setup] restart Claude Desktop (Cmd Q / Quit) to pick "
              f"up the new MCP server.", file=sys.stderr)
    else:
        print(f"[setup] {cfg_path} already pointing at evolutiondb-"
              f"memory; nothing to do.", file=sys.stderr)

    # ----- Step 3: confirm mcp-server-evolutiondb is installed --
    try:
        import importlib
        importlib.import_module("mcp_server_evosql")
        print("[setup] mcp-server-evolutiondb import OK", file=sys.stderr)
    except ImportError:
        print("[setup] mcp-server-evolutiondb is NOT installed. Run:\n"
              "        pip install mcp-server-evolutiondb",
              file=sys.stderr)
        return 6

    print("[setup] done. Next: `evosql-teams-sync --auth` to log into "
          "Teams, then `--interval 600` for daemon mode.",
          file=sys.stderr)
    return 0
