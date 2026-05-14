"""
`evolutiondb-hub` — terminal entry point. Every operation the web
UI offers is available here too.

Subcommands:
  status              Table of every connector's state.
  start  <name>       Start one connector in the background.
  stop   <name>       Stop a hub-managed connector.
  set-agent <name> <agent>
                      Set an agent ownership label (or 'none' to clear).
  client <name> enable|disable|status
                      Wire / unwire one MCP host (claude-desktop,
                      chatgpt-desktop, gemini-cli).
  web [--port]        Start the web UI on http://127.0.0.1:8771.

Names: teams, gmail, slack, github, calendar.
"""
from __future__ import annotations

import argparse
import json
import sys
from typing import List, Optional

from . import config as cfg_mod
from . import schedule as sched_mod
from . import supervisor as sup
from . import tunnel as tunnel_mod


# ---------------------------------------------------------------- #
#  Rendering                                                        #
# ---------------------------------------------------------------- #
def _state_badge(s: str) -> str:
    return {"running": "●", "stopped": "○",
             "unknown": "?"}.get(s, "?")


def render_status_table(rows: dict) -> str:
    lines: List[str] = []
    lines.append(f"{'':2}  {'connector':<10}  {'label':<22}  "
                 f"{'state':<10}  {'managed':<10}  {'pid':<8}  "
                 f"{'agent':<14}  {'boot':<6}")
    lines.append("-" * 96)
    for name, r in rows.items():
        lines.append(
            f"{_state_badge(r['state']):2}  "
            f"{name:<10}  "
            f"{(r.get('label') or '')[:22]:<22}  "
            f"{r['state']:<10}  "
            f"{(r.get('managed_by') or '—'):<10}  "
            f"{str(r.get('pid') or '—'):<8}  "
            f"{(r.get('agent_owner') or '—'):<14}  "
            f"{('yes' if r.get('scheduled') else 'no'):<6}"
        )
    return "\n".join(lines)


# ---------------------------------------------------------------- #
#  Subcommands                                                      #
# ---------------------------------------------------------------- #
def cmd_status(args) -> int:
    rows = sup.status_all()
    if args.json:
        print(json.dumps(rows, indent=2, default=str))
    else:
        print(render_status_table(rows))
    return 0


def cmd_start(args) -> int:
    r = sup.start(args.name, interval=args.interval)
    print(json.dumps(r, indent=2))
    return 0 if r.get("ok") else 1


def cmd_stop(args) -> int:
    r = sup.stop(args.name)
    print(json.dumps(r, indent=2))
    return 0 if r.get("ok") else 1


def cmd_schedule(args) -> int:
    r = sched_mod.schedule(args.name, interval=args.interval)
    print(json.dumps(r, indent=2))
    return 0 if r.get("ok") else 1


def cmd_unschedule(args) -> int:
    r = sched_mod.unschedule(args.name)
    print(json.dumps(r, indent=2))
    return 0 if r.get("ok") else 1


def cmd_set_agent(args) -> int:
    agent = args.agent
    if agent.lower() in ("none", "clear", "-"):
        agent = ""
    r = sup.set_agent_owner(args.name, agent)
    print(json.dumps(r, indent=2))
    return 0 if r.get("ok") else 1


def cmd_client(args) -> int:
    try:
        from mcp_server_evosql import setup as mcp_setup
    except ImportError:
        print("error: mcp-server-evolutiondb is required for client "
              "commands. Run `pip install mcp-server-evolutiondb`.",
              file=sys.stderr)
        return 1

    spec = next((c for c in mcp_setup.CLIENTS if c.name == args.name), None)
    if spec is None:
        print(f"error: unknown client {args.name!r}", file=sys.stderr)
        return 1

    if args.op == "status":
        path = mcp_setup.resolve_path(spec)
        if path is None:
            print(json.dumps({"client": args.name, "state": "not_installed"}))
            return 0
        present = False
        try:
            import json as _json
            data = _json.loads(path.read_text(encoding="utf-8"))
            present = bool((data.get("mcpServers") or {})
                           .get("evolutiondb-memory"))
        except Exception:
            pass
        print(json.dumps({"client": args.name, "config_path": str(path),
                           "state": "wired" if present else "unwired"}))
        return 0

    if args.op == "enable":
        import os
        user_id = os.environ.get("MCP_USER_ID", "default_user")
        port    = int(os.environ.get("EVOSQL_PORT", "5433"))
        r = mcp_setup.configure_client(spec, user_id=user_id,
                                          evosql_port=port)
        print(json.dumps(r, indent=2))
        return 0 if r.get("status") in {"wrote", "unchanged"} else 1

    if args.op == "disable":
        path = mcp_setup.resolve_path(spec)
        if path is None or not path.exists():
            print(json.dumps({"ok": True, "note": "config not present"}))
            return 0
        import json as _json
        try:
            data = _json.loads(path.read_text(encoding="utf-8"))
        except Exception as exc:
            print(json.dumps({"ok": False, "error": str(exc)}))
            return 1
        servers = data.get("mcpServers") or {}
        if "evolutiondb-memory" not in servers:
            print(json.dumps({"ok": True,
                                "note": "evolutiondb-memory not in config"}))
            return 0
        servers.pop("evolutiondb-memory", None)
        path.write_text(_json.dumps(data, indent=2) + "\n",
                          encoding="utf-8")
        print(json.dumps({"ok": True,
                            "path": str(path),
                            "removed": True}))
        return 0

    print(f"error: unknown op {args.op!r}", file=sys.stderr)
    return 1


def cmd_tunnel(args) -> int:
    if args.op == "status":
        print(json.dumps(tunnel_mod.status(), indent=2))
        return 0
    if args.op == "start":
        r = tunnel_mod.start(port=args.port,
                              token=args.token,
                              tunnel=not args.no_public)
        print(json.dumps(r, indent=2))
        return 0 if r.get("ok") else 1
    if args.op == "stop":
        r = tunnel_mod.stop()
        print(json.dumps(r, indent=2))
        return 0 if r.get("ok") else 1
    print(f"error: unknown op {args.op!r}", file=sys.stderr)
    return 1


def cmd_web(args) -> int:
    from . import web as web_mod
    return web_mod.serve(host=args.host, port=args.port)


# ---------------------------------------------------------------- #
#  argparse wiring                                                  #
# ---------------------------------------------------------------- #
def build_parser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser(prog="evolutiondb-hub",
        description="One panel for every EvolutionDB sync connector "
                    "and AI memory client.")
    sub = p.add_subparsers(dest="cmd", required=True)

    sp = sub.add_parser("status", help="Show every connector's state.")
    sp.add_argument("--json", action="store_true",
        help="Emit JSON instead of the human table.")

    sp = sub.add_parser("start", help="Start one connector.")
    sp.add_argument("name",
        choices=[c.name for c in cfg_mod.CONNECTORS])
    sp.add_argument("--interval", type=int, default=None,
        help="Override the connector's default poll interval (seconds).")

    sp = sub.add_parser("stop", help="Stop a hub-managed connector.")
    sp.add_argument("name",
        choices=[c.name for c in cfg_mod.CONNECTORS])

    sp = sub.add_parser("schedule",
        help="Register the connector with launchd / systemd so it "
             "survives a reboot.")
    sp.add_argument("name",
        choices=[c.name for c in cfg_mod.CONNECTORS])
    sp.add_argument("--interval", type=int, default=None,
        help="Poll interval in seconds (default: per-connector).")

    sp = sub.add_parser("unschedule",
        help="Remove the connector from launchd / systemd.")
    sp.add_argument("name",
        choices=[c.name for c in cfg_mod.CONNECTORS])

    sp = sub.add_parser("set-agent",
        help="Set an agent ownership label (or 'none' to clear).")
    sp.add_argument("name",
        choices=[c.name for c in cfg_mod.CONNECTORS])
    sp.add_argument("agent",
        help="Free-form label (e.g. claude, chatgpt, gemini, none).")

    sp = sub.add_parser("client", help="Manage an AI host's MCP config.")
    sp.add_argument("name",
        choices=[a.name for a in cfg_mod.AGENTS])
    sp.add_argument("op", choices=["status", "enable", "disable"])

    sp = sub.add_parser("tunnel",
        help="Start / stop the MCP HTTP transport + cloudflared tunnel.")
    sp.add_argument("op", choices=["start", "stop", "status"])
    sp.add_argument("--port", type=int, default=None,
        help="HTTP port for evolutiondb-mcp-http (default 8970).")
    sp.add_argument("--token", default=None,
        help="Bearer token. Auto-generated if omitted.")
    sp.add_argument("--no-public", action="store_true",
        help="Skip the cloudflared tunnel; only the local listener.")

    sp = sub.add_parser("web", help="Start the web UI.")
    sp.add_argument("--port", type=int, default=8771)
    sp.add_argument("--host", default="127.0.0.1")

    return p


def main(argv: Optional[list] = None) -> int:
    args = build_parser().parse_args(argv)
    return {
        "status":     cmd_status,
        "start":      cmd_start,
        "stop":       cmd_stop,
        "schedule":   cmd_schedule,
        "unschedule": cmd_unschedule,
        "set-agent":  cmd_set_agent,
        "client":     cmd_client,
        "tunnel":     cmd_tunnel,
        "web":        cmd_web,
    }[args.cmd](args)


if __name__ == "__main__":
    raise SystemExit(main())
