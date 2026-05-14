"""
`evolutiondb-identity` — manage the identity catalog from the shell.

Subcommands:

  list                                List every identity, alphabetical
  show <name-or-alias>                Show one identity in detail
  merge <alias>... [--name NAME]      Merge aliases under one identity
  split <alias>                       Detach an alias into its own identity
  delete <name-or-alias>              Remove an identity entirely
  auto-seed [--store mcp_mem]         Walk every sender in the message
                                      store and create one identity per
                                      unique name (no merging)

The CLI talks to EvolutionDB over the PG wire using the same env
vars as the MCP server (`EVOSQL_HOST`, `EVOSQL_PORT`, `EVOSQL_USER`,
`EVOSQL_PASSWORD`, `EVOSQL_DATABASE`, `MCP_USER_ID`).
"""
from __future__ import annotations

import argparse
import json
import os
import sys
from typing import List, Optional

from . import identity as ident_mod


def _connect():
    try:
        import psycopg
    except ImportError as exc:
        raise SystemExit(
            "evolutiondb-identity requires psycopg. Install with "
            "`pip install psycopg[binary]>=3.1`."
        ) from exc
    return psycopg.connect(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "5433")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        dbname=os.environ.get("EVOSQL_DATABASE", "evosql"),
        autocommit=True,
    )


def _store(conn) -> ident_mod.IdentityStore:
    namespace = os.environ.get("MCP_USER_ID", "default_user")
    return ident_mod.IdentityStore(conn, namespace)


def _render_identity(rec: dict) -> str:
    lines = [
        f"  canonical : {rec.get('canonical_name')}",
        f"  key       : {rec.get('_key')}",
        f"  aliases   : {', '.join(rec.get('aliases') or [])}",
    ]
    sources = rec.get("sources") or {}
    if sources:
        lines.append("  sources   :")
        for src, handles in sources.items():
            lines.append(f"    {src}: {', '.join(handles)}")
    tags = rec.get("tags") or []
    if tags:
        lines.append(f"  tags      : {', '.join(tags)}")
    return "\n".join(lines)


# ---------------------------------------------------------------- #
#  Subcommand handlers                                              #
# ---------------------------------------------------------------- #
def cmd_list(args, store):
    records = store.list_records()
    records.sort(key=lambda r: (r.get("canonical_name") or "").lower())
    if not records:
        print("(no identities — run `evolutiondb-identity auto-seed`)")
        return 0
    for rec in records:
        aliases = ", ".join(rec.get("aliases") or [])
        print(f"{rec.get('canonical_name'):40s}  [{aliases}]")
    return 0


def cmd_show(args, store):
    rec = store.find_by_alias(args.name)
    if not rec:
        # Maybe the user typed the canonical name; search by substring.
        for r in store.list_records():
            if args.name.lower() in (r.get("canonical_name") or "").lower():
                rec = r
                break
    if not rec:
        print(f"no identity matches {args.name!r}", file=sys.stderr)
        return 1
    print(_render_identity(rec))
    return 0


def cmd_merge(args, store):
    new_rec = store.merge(*args.aliases, canonical_name=args.name)
    print("merged into identity:")
    print(_render_identity(new_rec))
    return 0


def cmd_split(args, store):
    new_rec = store.split(args.alias)
    if not new_rec:
        print(f"no identity carries alias {args.alias!r}", file=sys.stderr)
        return 1
    print("created identity:")
    print(_render_identity(new_rec))
    return 0


def cmd_delete(args, store):
    rec = store.find_by_alias(args.name)
    if not rec:
        for r in store.list_records():
            if args.name.lower() in (r.get("canonical_name") or "").lower():
                rec = r
                break
    if not rec:
        print(f"no identity matches {args.name!r}", file=sys.stderr)
        return 1
    store.delete(rec["_key"])
    print(f"deleted {rec.get('canonical_name')}")
    return 0


def cmd_auto_seed(args, store):
    namespace = os.environ.get("MCP_USER_ID", "default_user")
    with store.conn.cursor() as cur:
        cur.execute(
            f"SELECT mem_value FROM __mem_{args.from_store} "
            f"WHERE mem_namespace = '{namespace}'"
        )
        rows = cur.fetchall()
    senders = set()
    for (v,) in rows:
        try:
            r = json.loads(v) if isinstance(v, str) else v
        except (TypeError, ValueError):
            continue
        if not r:
            continue
        snd = r.get("sender")
        if snd:
            senders.add(snd)
    if not senders:
        print(f"no senders found in store {args.from_store!r}")
        return 0
    added = store.auto_seed_from_senders(senders)
    print(f"scanned {len(senders)} unique senders, "
          f"added {added} new identities")
    return 0


# ---------------------------------------------------------------- #
#  Argparse wiring                                                  #
# ---------------------------------------------------------------- #
def build_parser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser(prog="evolutiondb-identity",
        description="Manage the EvolutionDB identity catalog.")
    sub = p.add_subparsers(dest="cmd", required=True)

    sub.add_parser("list", help="List every identity")

    sp = sub.add_parser("show", help="Show one identity")
    sp.add_argument("name", help="Canonical name or any alias")

    sp = sub.add_parser("merge",
        help="Merge a set of aliases under one identity")
    sp.add_argument("aliases", nargs="+",
        help="One or more alias strings")
    sp.add_argument("--name",
        help="Canonical name (defaults to the first alias or the existing one)")

    sp = sub.add_parser("split",
        help="Detach an alias into its own identity")
    sp.add_argument("alias")

    sp = sub.add_parser("delete", help="Remove an identity")
    sp.add_argument("name", help="Canonical name or any alias")

    sp = sub.add_parser("auto-seed",
        help="Create one identity per never-seen sender")
    sp.add_argument("--from-store", default="mcp_mem",
        help="Memory store to scan (default: mcp_mem)")

    return p


def main(argv: Optional[List[str]] = None) -> int:
    args = build_parser().parse_args(argv)
    conn = _connect()
    try:
        store = _store(conn)
        return {
            "list":       cmd_list,
            "show":       cmd_show,
            "merge":      cmd_merge,
            "split":      cmd_split,
            "delete":     cmd_delete,
            "auto-seed":  cmd_auto_seed,
        }[args.cmd](args, store)
    finally:
        conn.close()


if __name__ == "__main__":
    raise SystemExit(main())
