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
import shutil
import sys
from dataclasses import dataclass, field
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
    # Command the hub runs when the user clicks "install". Empty
    # list means there is no scripted installer for this host yet
    # and the UI must hide the install affordance.
    install_cmd: List[str] = field(default_factory=list)
    # Shell binary that proves the host is installed even when no
    # config file has been generated yet (CLI apps create their
    # config dir on first run). When set and on PATH, the hub
    # treats the host as installed-but-unwired and lets `enable`
    # bootstrap the config from scratch.
    cli_command: str = ""


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
        install_cmd=["brew", "install", "--cask", "claude"],
    ),
    ClientSpec(
        name="claude-code",
        label="Claude Code (CLI)",
        paths={
            "darwin": ["~/.claude.json"],
            "linux":  ["~/.claude.json"],
            "win32":  ["~/.claude.json"],
        },
        env_override="EVOSQL_CLAUDE_CODE_CONFIG",
        restart_hint="No restart needed; Claude Code re-reads MCP servers on every session.",
        install_cmd=["npm", "install", "-g", "@anthropic-ai/claude-code"],
        cli_command="claude",
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
        install_cmd=["brew", "install", "--cask", "chatgpt"],
    ),
    ClientSpec(
        name="chatgpt-cli",
        label="OpenAI Codex (CLI)",
        # Codex stores its config as TOML, not JSON, so wiring is
        # left to the user for now — install only.
        paths={"darwin": [], "linux": [], "win32": []},
        env_override="EVOSQL_CODEX_CONFIG",
        restart_hint=("Run `codex mcp add evolutiondb-memory uvx "
                      "mcp-server-evolutiondb` once to wire memory."),
        install_cmd=["npm", "install", "-g", "@openai/codex"],
        cli_command="codex",
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
        install_cmd=["npm", "install", "-g", "@google/gemini-cli"],
        cli_command="gemini",
    ),
    ClientSpec(
        name="gemini-code",
        label="Gemini Code Assist",
        # VSCode/JetBrains extension — config is managed inside the
        # editor, not as a standalone JSON file, so wiring is left
        # to the user.
        paths={"darwin": [], "linux": [], "win32": []},
        env_override="EVOSQL_GEMINI_CODE_CONFIG",
        restart_hint=("Reload VS Code (⌘⇧P → Reload Window) and sign in "
                      "to Gemini Code Assist from the side panel."),
        install_cmd=["code", "--install-extension", "Google.geminicodeassist"],
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
    installs and migrations between app names).

    Fallback for CLI hosts: when nothing matched but `cli_command`
    is on PATH, return the first candidate path even if its dir
    doesn't exist yet. CLI apps create the dir on first run, but
    we want `enable` to be able to bootstrap the config before that
    happens — `merge_config` already mkdir's the parent."""
    override = os.environ.get(spec.env_override, "").strip()
    if override:
        return Path(os.path.expanduser(override))

    candidates = spec.paths.get(sys.platform, [])
    for raw in candidates:
        p = Path(os.path.expanduser(raw))
        if p.exists() or p.parent.exists():
            return p

    cli = getattr(spec, "cli_command", "")
    if cli and candidates and shutil.which(cli):
        return Path(os.path.expanduser(candidates[0]))
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
