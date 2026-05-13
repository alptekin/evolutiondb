"""
`evosql-teams-sync --setup` — one-stop install for the long-term
memory stack on this machine.

After `pip install evolutiondb-teams-sync`:

  * the Python sync tool itself is on $PATH
  * mcp-server-evolutiondb is on $PATH (pulled in as a dependency)

What's still missing for a fresh user is the C engine binary, plus
working MCP host configs (Claude Desktop, ChatGPT Desktop, Gemini
CLI) that point at the MCP server. This module fills those gaps:

  1. Download evosql-server for the host platform if not cached.
  2. Delegate config wiring to mcp_server_evosql.setup so every host
     detected on disk gets an `evolutiondb-memory` entry. Existing
     entries are preserved; only the matching block is updated.

It is idempotent — re-running it on a configured machine is a no-op.
"""
from __future__ import annotations

import sys


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

    # ----- Step 2: confirm mcp-server-evolutiondb is installed --
    try:
        from mcp_server_evosql import setup as mcp_setup
    except ImportError:
        print("[setup] mcp-server-evolutiondb is NOT installed. Run:\n"
              "        pip install mcp-server-evolutiondb",
              file=sys.stderr)
        return 6

    # ----- Step 3: wire every host config we can detect ---------
    any_wrote = False
    for spec in mcp_setup.CLIENTS:
        r = mcp_setup.configure_client(spec, user_id=user_id,
                                         evosql_port=evosql_port)
        if r["status"] == "wrote":
            any_wrote = True
            print(f"[setup] {spec.label}: wrote {r['path']}",
                  file=sys.stderr)
            print(f"        → {r['restart_hint']}", file=sys.stderr)
        elif r["status"] == "unchanged":
            print(f"[setup] {spec.label}: already configured "
                  f"({r['path']})", file=sys.stderr)
        elif r["status"] == "unsupported":
            print(f"[setup] {spec.label}: not detected — skipping",
                  file=sys.stderr)
        elif r["status"] == "error":
            print(f"[setup] {spec.label}: failed — {r.get('error')}",
                  file=sys.stderr)

    if not any_wrote:
        print("[setup] no host configs needed updating.", file=sys.stderr)

    print("[setup] done. Next: `evosql-teams-sync --auth` to log into "
          "Teams, then `--interval 600` for daemon mode.",
          file=sys.stderr)
    return 0
