"""
`evolutiondb-mcp-setup` — wire the evolutiondb-memory MCP server into
every supported host's config file.

Three hosts are recognised today; all three speak stdio MCP with the
same `mcpServers` JSON block (this is the MCP spec, not an
ev olutiondb invention):

  - Claude Desktop      (~/Library/Application Support/Claude/claude_desktop_config.json on macOS)
  - ChatGPT Desktop     (~/Library/Application Support/ChatGPT/mcp.json)
  - Gemini CLI          (~/.gemini/settings.json)

The merge is idempotent — re-running the command on a configured
machine is a no-op. Existing `mcpServers` entries are preserved; only
the `evolutiondb-memory` entry is overwritten.

Each host's path can be forced via an env var (EVOSQL_CLAUDE_CONFIG,
EVOSQL_CHATGPT_CONFIG, EVOSQL_GEMINI_CONFIG) for non-standard
installations.
"""
from __future__ import annotations

import argparse
import json
import os
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, List, Optional


@dataclass
class ClientSpec:
    name: str
    label: str
    # Per-platform list of candidate config paths. First one whose
    # parent directory already exists wins (the app having created
    # its config dir is a strong signal it's installed).
    paths: Dict[str, List[str]]
    env_override: str
    restart_hint: str


CLIENTS: List[ClientSpec] = [
    ClientSpec(
        name="claude-desktop",
        label="Claude Desktop",
        paths={
            "darwin": ["~/Library/Application Support/Claude/claude_desktop_config.json"],
            "linux":  ["~/.config/Claude/claude_desktop_config.json"],
            "win32":  ["~/AppData/Roaming/Claude/claude_desktop_config.json"],
        },
        env_override="EVOSQL_CLAUDE_CONFIG",
        restart_hint="Quit Claude Desktop (⌘Q on macOS) and reopen.",
    ),
    ClientSpec(
        name="chatgpt-desktop",
        label="ChatGPT Desktop",
        paths={
            # OpenAI's desktop app shipped MCP support in late 2025;
            # the on-disk config lives under the standard app-support
            # location. We probe both the user-visible bundle name and
            # the reverse-DNS form because release builds have used
            # both depending on App Store vs direct download.
            "darwin": [
                "~/Library/Application Support/ChatGPT/mcp.json",
                "~/Library/Application Support/com.openai.chat/mcp.json",
            ],
            "win32":  ["~/AppData/Roaming/ChatGPT/mcp.json"],
            "linux":  ["~/.config/ChatGPT/mcp.json"],
        },
        env_override="EVOSQL_CHATGPT_CONFIG",
        restart_hint=("Quit ChatGPT Desktop (⌘Q on macOS) and reopen, "
                      "then enable the evolutiondb-memory connector "
                      "under Settings → Connectors."),
    ),
    ClientSpec(
        name="gemini-cli",
        label="Gemini CLI",
        paths={
            "darwin": ["~/.gemini/settings.json"],
            "linux":  ["~/.gemini/settings.json"],
            "win32":  ["~/.gemini/settings.json"],
        },
        env_override="EVOSQL_GEMINI_CONFIG",
        restart_hint="No restart needed; gemini-cli reads its config on every launch.",
    ),
]


# ---------------------------------------------------------------- #
#  Path resolution                                                  #
# ---------------------------------------------------------------- #
def resolve_path(spec: ClientSpec) -> Optional[Path]:
    """Return the config file path we'd write to, or None if we can't
    find a plausible install of this host on the current machine.

    The env override always wins. Otherwise we walk the per-platform
    candidate list and pick the first one whose parent directory
    already exists *or* the file itself exists (covers both fresh
    installs and migrations between app names)."""
    override = os.environ.get(spec.env_override, "").strip()
    if override:
        return Path(os.path.expanduser(override))

    candidates = spec.paths.get(sys.platform, [])
    for raw in candidates:
        p = Path(os.path.expanduser(raw))
        if p.exists() or p.parent.exists():
            return p
    return None


# ---------------------------------------------------------------- #
#  Config block                                                     #
# ---------------------------------------------------------------- #
def build_block(user_id: str, evosql_port: int = 5433,
                evosql_host: str = "127.0.0.1",
                evosql_user: str = "admin",
                evosql_password: str = "admin",
                evosql_database: str = "evosql") -> dict:
    """The exact `mcpServers.evolutiondb-memory` value we slot into
    every host's config. Identical across hosts — MCP standardised
    this shape, and uvx invocation keeps the install dependency on
    the host machine to "uv is on PATH"."""
    return {
        "command": "uvx",
        "args":    ["mcp-server-evolutiondb"],
        "env": {
            "EVOSQL_HOST":      evosql_host,
            "EVOSQL_PORT":      str(evosql_port),
            "EVOSQL_USER":      evosql_user,
            "EVOSQL_PASSWORD":  evosql_password,
            "EVOSQL_DATABASE":  evosql_database,
            "MCP_USER_ID":      user_id,
            "MCP_STORE_PREFIX": "mcp",
        },
    }


# ---------------------------------------------------------------- #
#  Merge logic                                                      #
# ---------------------------------------------------------------- #
def merge_config(path: Path, block: dict) -> bool:
    """Write the evolutiondb-memory MCP block into the host's config.

    Returns True if the file changed, False if the block was already
    in place. Raises OSError on disk problems; raises ValueError if
    the existing file has a shape we don't dare touch (e.g. an array
    at the root, or a non-dict mcpServers)."""
    if path.exists():
        text = path.read_text(encoding="utf-8")
        if not text.strip():
            data = {}
        else:
            try:
                data = json.loads(text)
            except json.JSONDecodeError as exc:
                raise ValueError(f"{path} is not valid JSON: {exc}") from None
    else:
        data = {}

    if not isinstance(data, dict):
        raise ValueError(f"{path} root is not a JSON object")

    servers = data.setdefault("mcpServers", {})
    if not isinstance(servers, dict):
        raise ValueError(f"{path} has a non-object mcpServers field")

    if servers.get("evolutiondb-memory") == block:
        return False

    servers["evolutiondb-memory"] = block
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2) + "\n", encoding="utf-8")
    return True


# ---------------------------------------------------------------- #
#  Per-client driver                                                #
# ---------------------------------------------------------------- #
def configure_client(spec: ClientSpec, *,
                      user_id: str, evosql_port: int = 5433) -> dict:
    """Run the full configure flow for one host. Returns a status
    dict so the CLI (and tests) can render or assert against it."""
    path = resolve_path(spec)
    if path is None:
        return {"client": spec.name, "status": "unsupported", "path": None}

    block = build_block(user_id, evosql_port)
    try:
        changed = merge_config(path, block)
    except (OSError, ValueError) as exc:
        return {"client": spec.name, "status": "error",
                "path": str(path), "error": str(exc)}

    return {"client":      spec.name,
            "status":      "wrote" if changed else "unchanged",
            "path":        str(path),
            "restart_hint": spec.restart_hint}


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
def _print_result(spec: ClientSpec, r: dict) -> None:
    label = spec.label
    if r["status"] == "wrote":
        print(f"[setup] {label}: wrote {r['path']}")
        print(f"        → {r['restart_hint']}")
    elif r["status"] == "unchanged":
        print(f"[setup] {label}: already configured ({r['path']})")
    elif r["status"] == "unsupported":
        print(f"[setup] {label}: not detected on this machine "
              f"(set {spec.env_override} to override)")
    elif r["status"] == "error":
        print(f"[setup] {label}: failed — {r.get('error')}",
              file=sys.stderr)


def main(argv: Optional[list] = None) -> int:
    parser = argparse.ArgumentParser(
        prog="evolutiondb-mcp-setup",
        description="Wire evolutiondb-memory into Claude Desktop, "
                    "ChatGPT Desktop, and Gemini CLI config files.")
    parser.add_argument("--user-id",
                        default=os.environ.get("MCP_USER_ID", "default_user"),
                        help="Sticky namespace for every tool call "
                             "(default: $MCP_USER_ID or 'default_user')")
    parser.add_argument("--port", type=int,
                        default=int(os.environ.get("EVOSQL_PORT", "5433")),
                        help="EvolutionDB PG-wire port (default: 5433)")
    parser.add_argument("--client", action="append", default=[],
                        choices=[s.name for s in CLIENTS],
                        help="Only configure these clients. "
                             "Repeatable; default is all detected.")
    parser.add_argument("--dry-run", action="store_true",
                        help="Report what would change, don't write.")
    args = parser.parse_args(argv)

    wanted = set(args.client) if args.client else None
    any_failures = False

    for spec in CLIENTS:
        if wanted is not None and spec.name not in wanted:
            continue
        if args.dry_run:
            path = resolve_path(spec)
            if path is None:
                print(f"[setup] {spec.label}: not detected")
            else:
                print(f"[setup] {spec.label}: would write to {path}")
            continue
        r = configure_client(spec, user_id=args.user_id,
                              evosql_port=args.port)
        _print_result(spec, r)
        if r["status"] == "error":
            any_failures = True

    return 0 if not any_failures else 1


if __name__ == "__main__":
    raise SystemExit(main())
