"""
Static definitions of every sync connector and AI host that the hub
knows about. Each entry is a small dataclass so the supervisor + UI
+ CLI all read the same source of truth.

Adding a new connector is a 5-line edit here plus the matching
PyPI package. No code changes elsewhere.
"""
from __future__ import annotations

from dataclasses import dataclass, field
from typing import List, Optional


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
    AgentSpec("claude-desktop",   "Claude Desktop",   "claude-desktop"),
    AgentSpec("chatgpt-desktop",  "ChatGPT Desktop",  "chatgpt-desktop"),
    AgentSpec("gemini-cli",       "Gemini CLI",       "gemini-cli"),
]
