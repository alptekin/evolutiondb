"""
Static definitions of every sync connector and AI host that the hub
knows about. Each entry is a small dataclass so the supervisor + UI
+ CLI all read the same source of truth.

Adding a new connector is a 5-line edit here plus the matching
PyPI package. No code changes elsewhere.
"""
from __future__ import annotations

import json
import os
from dataclasses import asdict, dataclass, field
from pathlib import Path
from typing import Any, Dict, List, Optional


_CUSTOM_CONNECTORS_PATH = Path(
    "~/.evosql/custom_connectors.json").expanduser()
_CUSTOM_AGENTS_PATH = Path(
    "~/.evosql/custom_agents.json").expanduser()


@dataclass
class ConnectorSpec:
    name:           str
    label:          str
    cli_entry:      str
    description:    str
    requires_auth:  bool       = False
    auth_subcommand: Optional[str] = "--auth"
    auth_hint:      str        = ""
    poll_default:   int        = 600
    pip_package:    str        = ""
    # Free-form text describing what the connector indexes (used by
    # the web UI's source card).
    indexes:        List[str]  = field(default_factory=list)
    # Python module name to match in `ps -Ao command`. Lets the hub
    # detect launchd / systemd runs that invoke `python -m <module>`
    # instead of the installed console script.
    module_name:    str        = ""


CONNECTORS: List[ConnectorSpec] = [
    ConnectorSpec(
        name="teams",
        label="Microsoft Teams",
        cli_entry="evosql-teams-sync",
        module_name="teams_sync",
        pip_package="evolutiondb-teams-sync",
        description="One-on-one and group chat messages.",
        requires_auth=True,
        auth_hint=("Microsoft account device-code flow. Browser "
                   "opens once, refresh token cached in "
                   "~/.evosql/teams_token_cache.json."),
        poll_default=600,
        indexes=["1:1 chats", "group chats", "thread replies"],
    ),
    ConnectorSpec(
        name="gmail",
        label="Gmail",
        cli_entry="evolutiondb-gmail-sync",
        module_name="gmail_sync",
        pip_package="evolutiondb-gmail-sync",
        description="Email subject, sender, snippet, labels.",
        requires_auth=True,
        auth_hint=("Google OAuth loopback flow. Needs a Desktop "
                   "OAuth client in a Google Cloud project."),
        poll_default=900,
        indexes=["subject", "sender", "snippet", "labels"],
    ),
    ConnectorSpec(
        name="slack",
        label="Slack",
        cli_entry="evolutiondb-slack-sync",
        module_name="slack_sync",
        pip_package="evolutiondb-slack-sync",
        description="DMs, group DMs, joined channels with threads.",
        requires_auth=True,
        auth_subcommand=None,
        auth_hint=("Paste a user-OAuth token (xoxp-) into the .env "
                   "file. No CLI auth step."),
        poll_default=600,
        indexes=["DMs", "group DMs", "joined channels", "thread replies"],
    ),
    ConnectorSpec(
        name="github",
        label="GitHub",
        cli_entry="evolutiondb-github-sync",
        module_name="github_sync",
        pip_package="evolutiondb-github-sync",
        description="PR + issue activity you are involved in.",
        requires_auth=True,
        auth_subcommand=None,
        auth_hint=("Paste a classic PAT (repo + read:user) into "
                   "the .env file."),
        poll_default=900,
        indexes=["issue body", "PR comments", "reviews"],
    ),
    ConnectorSpec(
        name="calendar",
        label="Google Calendar",
        cli_entry="evolutiondb-calendar-sync",
        module_name="calendar_sync",
        pip_package="evolutiondb-calendar-sync",
        description="Every event on every calendar you can see.",
        requires_auth=True,
        auth_hint=("Reuses the gmail-sync Google OAuth client; "
                   "enable the Calendar API on the same project."),
        poll_default=900,
        indexes=["summary", "attendees", "location", "deep link"],
    ),
]


def get(name: str) -> Optional[ConnectorSpec]:
    for c in CONNECTORS:
        if c.name == name:
            return c
    return None


# ---------------------------------------------------------------- #
#  AI client targets — managed by mcp_server_evosql.setup           #
# ---------------------------------------------------------------- #
@dataclass
class AgentSpec:
    name:       str
    label:      str
    setup_id:   str     # matches one of mcp_server_evosql.setup.CLIENTS


AGENTS: List[AgentSpec] = [
    AgentSpec("claude-desktop",   "Claude Desktop",       "claude-desktop"),
    AgentSpec("claude-code",      "Claude Code (CLI)",    "claude-code"),
    AgentSpec("chatgpt-desktop",  "ChatGPT Desktop",      "chatgpt-desktop"),
    AgentSpec("chatgpt-cli",      "OpenAI Codex (CLI)",   "chatgpt-cli"),
    AgentSpec("gemini-cli",       "Gemini CLI",           "gemini-cli"),
    AgentSpec("gemini-code",      "Gemini Code Assist",   "gemini-code"),
]


# ---------------------------------------------------------------- #
#  Custom (user-added) entries                                      #
# ---------------------------------------------------------------- #
def _load_json_list(path: Path) -> List[Dict[str, Any]]:
    if not path.is_file():
        return []
    try:
        raw = json.loads(path.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError):
        return []
    return raw if isinstance(raw, list) else []


def _save_json_list(path: Path, items: List[Dict[str, Any]]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    tmp = path.with_suffix(".tmp")
    tmp.write_text(json.dumps(items, indent=2), encoding="utf-8")
    try:
        os.chmod(tmp, 0o600)
    except OSError:
        pass
    tmp.replace(path)


def _hydrate_connector(d: Dict[str, Any]) -> Optional[ConnectorSpec]:
    try:
        return ConnectorSpec(
            name           = str(d["name"]),
            label          = str(d.get("label", d["name"])),
            cli_entry      = str(d.get("cli_entry", "")),
            description    = str(d.get("description", "")),
            requires_auth  = bool(d.get("requires_auth", False)),
            auth_subcommand= d.get("auth_subcommand", "--auth") or None,
            auth_hint      = str(d.get("auth_hint", "")),
            poll_default   = int(d.get("poll_default", 600)),
            pip_package    = str(d.get("pip_package", "")),
            indexes        = list(d.get("indexes") or []),
            module_name    = str(d.get("module_name", "")),
        )
    except (KeyError, ValueError, TypeError):
        return None


def _hydrate_agent(d: Dict[str, Any]) -> Optional[AgentSpec]:
    try:
        return AgentSpec(
            name     = str(d["name"]),
            label    = str(d.get("label", d["name"])),
            setup_id = str(d.get("setup_id", d["name"])),
        )
    except (KeyError, ValueError, TypeError):
        return None


def _load_custom() -> None:
    """Merge user-added entries from `~/.evosql/custom_*.json` into the
    in-process lists at import time. Silent on missing files."""
    existing = {c.name for c in CONNECTORS}
    for raw in _load_json_list(_CUSTOM_CONNECTORS_PATH):
        spec = _hydrate_connector(raw)
        if spec and spec.name not in existing:
            CONNECTORS.append(spec)
            existing.add(spec.name)

    existing_agents = {a.name for a in AGENTS}
    for raw in _load_json_list(_CUSTOM_AGENTS_PATH):
        spec = _hydrate_agent(raw)
        if spec and spec.name not in existing_agents:
            AGENTS.append(spec)
            existing_agents.add(spec.name)


_load_custom()


def add_custom_connector(spec_dict: Dict[str, Any]) -> Dict[str, Any]:
    """Persist a new ConnectorSpec to disk and append it to the live
    CONNECTORS list. Returns {ok, error|spec}."""
    name = (spec_dict.get("name") or "").strip()
    if not name:
        return {"ok": False, "error": "name is required"}
    if not name.replace("-", "").replace("_", "").isalnum():
        return {"ok": False,
                "error": "name must be alphanumeric (dash/underscore ok)"}
    if any(c.name == name for c in CONNECTORS):
        return {"ok": False,
                "error": f"connector '{name}' already exists"}

    spec = _hydrate_connector(spec_dict)
    if spec is None:
        return {"ok": False, "error": "could not parse spec"}

    items = _load_json_list(_CUSTOM_CONNECTORS_PATH)
    items.append(asdict(spec))
    try:
        _save_json_list(_CUSTOM_CONNECTORS_PATH, items)
    except OSError as exc:
        return {"ok": False, "error": f"failed to persist: {exc}"}

    CONNECTORS.append(spec)
    return {"ok": True, "spec": asdict(spec)}


def add_custom_agent(spec_dict: Dict[str, Any]) -> Dict[str, Any]:
    name = (spec_dict.get("name") or "").strip()
    if not name:
        return {"ok": False, "error": "name is required"}
    if not name.replace("-", "").replace("_", "").isalnum():
        return {"ok": False,
                "error": "name must be alphanumeric (dash/underscore ok)"}
    if any(a.name == name for a in AGENTS):
        return {"ok": False,
                "error": f"agent '{name}' already exists"}

    spec = _hydrate_agent(spec_dict)
    if spec is None:
        return {"ok": False, "error": "could not parse spec"}

    items = _load_json_list(_CUSTOM_AGENTS_PATH)
    items.append(asdict(spec))
    try:
        _save_json_list(_CUSTOM_AGENTS_PATH, items)
    except OSError as exc:
        return {"ok": False, "error": f"failed to persist: {exc}"}

    AGENTS.append(spec)
    return {"ok": True, "spec": asdict(spec)}
