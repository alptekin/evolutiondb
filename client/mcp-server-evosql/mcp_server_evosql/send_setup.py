"""
send_setup — onboarding for the action loop's SEND capability.

The base install is read + suggest (safe). This command walks the operator from
there to human-approved sending, deliberately: it reports the current send
config, and for the channels you pick it prints the exact env block (with safe
defaults for the undo / rate / dedup guards) plus the one-time per-channel auth
step. It writes nothing and enables nothing on its own — you copy the block into
your MCP client config or shell once you've consented.

    evolutiondb-send-setup                         # status
    evolutiondb-send-setup --channel gmail         # how to enable gmail
    evolutiondb-send-setup --channel gmail --channel teams --undo 60
"""
from __future__ import annotations

import argparse
import os
from typing import Dict, List, Optional

# Safe-by-default guard values suggested when enabling sending.
DEFAULT_UNDO = 30          # seconds to take a send back before it goes out
DEFAULT_RATE = 20          # max real sends per hour per namespace
DEFAULT_DEDUP = 86400      # don't reply to the same loop twice within a day

# Per-channel: the opt-in scope env, the provider scope, the auth step, and the
# dedicated send-token cache (kept separate from the read-only sync token).
CHANNELS: Dict[str, Dict[str, str]] = {
    "gmail": {
        "scope_env": "EVOSQL_GMAIL_SEND=1",
        "scope": "gmail.send",
        "needs": "GOOGLE_CLIENT_ID + GOOGLE_CLIENT_SECRET",
        "auth": "browser consent — add gmail.send to the OAuth consent screen, "
                "then run selftest_gmail.py once (caches a send-scoped token)",
        "cache": "~/.evosql/gmail_send_token.json",
    },
    "outlook": {
        "scope_env": "EVOSQL_OUTLOOK_SEND=1",
        "scope": "Mail.Send",
        "needs": "AZURE_CLIENT_ID + AZURE_TENANT_ID",
        "auth": "device-code consent (add Mail.Send to the Azure app), then run "
                "selftest_outlook.py once",
        "cache": "~/.evosql/outlook_send_token.json",
    },
    "teams": {
        "scope_env": "EVOSQL_TEAMS_SEND=1",
        "scope": "ChatMessage.Send",
        "needs": "AZURE_CLIENT_ID + AZURE_TENANT_ID + the `send` extra (msal)",
        "auth": "device-code consent (add ChatMessage.Send to the Azure app), "
                "then run selftest_teams.py once",
        "cache": "~/.evosql/teams_send_token.json",
    },
    "slack": {
        "scope_env": "",   # no separate flag — the token carries the scope
        "scope": "chat:write",
        "needs": "SLACK_USER_TOKEN (an xoxp token with chat:write)",
        "auth": "create a Slack app, add the chat:write user scope, install it, "
                "and put the xoxp token in SLACK_USER_TOKEN",
        "cache": "",
    },
    "imessage": {
        "scope_env": "",   # local, no scope/token
        "scope": "(local — none)",
        "needs": "macOS with Messages signed in; allow Automation when prompted",
        "auth": "none — sends as the logged-in macOS user via Messages",
        "cache": "",
    },
}


def _truthy(v) -> bool:
    return str(v or "").strip().lower() in ("1", "true", "yes", "on")


def _int(env, key, default=0):
    try:
        return int(env.get(key, str(default)))
    except (TypeError, ValueError):
        return default


def current_config(env=None) -> dict:
    """The effective send config as the running server would see it."""
    env = os.environ if env is None else env
    chans = [c.strip() for c in env.get("EVOSQL_SEND_CHANNELS", "").split(",")
             if c.strip()]
    return {
        "enabled": _truthy(env.get("EVOSQL_SEND_ENABLED")),
        "channels": chans,
        "undo": _int(env, "EVOSQL_SEND_UNDO_SECONDS"),
        "rate": _int(env, "EVOSQL_SEND_RATE_PER_HOUR"),
        "dedup": _int(env, "EVOSQL_SEND_DEDUP_SECONDS"),
    }


def recommended_env(channels: List[str], *, undo=DEFAULT_UNDO, rate=DEFAULT_RATE,
                    dedup=DEFAULT_DEDUP) -> Dict[str, str]:
    """The env block that turns on sending for `channels` with safe guards.
    Raises ValueError on an unknown channel."""
    unknown = [c for c in channels if c not in CHANNELS]
    if unknown:
        raise ValueError(f"unknown channel(s): {', '.join(unknown)} "
                         f"(known: {', '.join(CHANNELS)})")
    block: Dict[str, str] = {
        "EVOSQL_SEND_ENABLED": "1",
        "EVOSQL_SEND_CHANNELS": ",".join(channels),
        "EVOSQL_SEND_UNDO_SECONDS": str(undo),
        "EVOSQL_SEND_RATE_PER_HOUR": str(rate),
        "EVOSQL_SEND_DEDUP_SECONDS": str(dedup),
    }
    for c in channels:
        flag = CHANNELS[c]["scope_env"]
        if flag:
            k, v = flag.split("=", 1)
            block[k] = v
    return block


def _cache_present(channel) -> bool:
    cache = CHANNELS.get(channel, {}).get("cache")
    return bool(cache) and os.path.exists(os.path.expanduser(cache))


def render_status(cfg: dict) -> str:
    L = ["EvolutionDB assistant — send status", "=" * 40]
    L.append(f"sending      : {'ENABLED' if cfg['enabled'] else 'disabled (safe default)'}")
    L.append(f"channels     : {', '.join(cfg['channels']) or '—'}")
    L.append(f"undo window  : {cfg['undo']}s" if cfg['undo'] else "undo window  : off")
    L.append(f"rate limit   : {cfg['rate']}/h" if cfg['rate'] else "rate limit   : off (unlimited)")
    L.append(f"dedup window : {cfg['dedup']}s" if cfg['dedup'] else "dedup window : off")
    L.append("")
    L.append("channels (cached send token?):")
    for c in CHANNELS:
        on = "✓ in EVOSQL_SEND_CHANNELS" if c in cfg["channels"] else "—"
        tok = " · token cached" if _cache_present(c) else ""
        L.append(f"  {c:9} {CHANNELS[c]['scope']:18} {on}{tok}")
    L.append("")
    L.append("Enable a channel:  evolutiondb-send-setup --channel <name>")
    return "\n".join(L)


def render_plan(channels: List[str], *, undo, rate, dedup) -> str:
    block = recommended_env(channels, undo=undo, rate=rate, dedup=dedup)
    L = [f"Enable sending for: {', '.join(channels)}", "=" * 48, ""]
    L.append("⚠️  Sending is real and irreversible. Nothing sends until you set "
             "this AND approve each reply (approve_send).")
    L.append("")
    L.append("1) Per-channel one-time setup:")
    for c in channels:
        m = CHANNELS[c]
        L.append(f"   • {c}: needs {m['needs']}")
        L.append(f"       scope: {m['scope']}  ·  auth: {m['auth']}")
    L.append("")
    L.append("2) Add this to your MCP client config env (or shell):")
    for k, v in block.items():
        L.append(f"     {k}={v}")
    L.append("")
    L.append("Guards above are safe defaults: a "
             f"{undo}s undo window, {rate}/h rate cap, "
             f"{dedup}s dedup. Tune with --undo / --rate / --dedup (0 = off).")
    return "\n".join(L)


def main(argv: Optional[list] = None) -> int:
    ap = argparse.ArgumentParser(
        prog="evolutiondb-send-setup",
        description="Onboard the action loop's send capability (status + the env "
                    "to enable a channel). Writes nothing; sending stays off "
                    "until you set the env and approve each reply.")
    ap.add_argument("--channel", action="append", default=[],
                    choices=list(CHANNELS),
                    help="Channel(s) to enable. Repeatable. Omit for status.")
    ap.add_argument("--undo", type=int, default=DEFAULT_UNDO,
                    help=f"Undo window seconds (default {DEFAULT_UNDO}; 0=off)")
    ap.add_argument("--rate", type=int, default=DEFAULT_RATE,
                    help=f"Max sends/hour (default {DEFAULT_RATE}; 0=unlimited)")
    ap.add_argument("--dedup", type=int, default=DEFAULT_DEDUP,
                    help=f"Dedup window seconds (default {DEFAULT_DEDUP}; 0=off)")
    args = ap.parse_args(argv)

    if not args.channel:
        print(render_status(current_config()))
        return 0
    print(render_plan(args.channel, undo=args.undo, rate=args.rate,
                      dedup=args.dedup))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
