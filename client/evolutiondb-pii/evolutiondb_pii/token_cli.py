"""
evolutiondb-token — seed / inspect / remove per-tenant connector tokens.

Stores a token under (namespace=MCP_USER_ID, connector) in the encrypted token
store, so an operator can provision a tenant's Slack/GitHub token, or inspect /
revoke what's stored. Needs EVOSQL_TENANT_SECRET (or EVOSQL_TOKEN_KEY) + the
EVOSQL_* engine connection.

  evolutiondb-token set slack --namespace t1 --token xoxp-...
  evolutiondb-token set gmail --namespace t1 --json '{"access_token":"...","refresh_token":"..."}'
  evolutiondb-token get slack --namespace t1
  evolutiondb-token delete slack --namespace t1
  evolutiondb-token list --namespace t1
"""
from __future__ import annotations

import argparse
import json
import sys

from .token_store import DEFAULT_STORE, TokenStore, _secret_from


def main(argv=None) -> int:
    ap = argparse.ArgumentParser(prog="evolutiondb-token")
    ap.add_argument("action", choices=["set", "get", "delete", "list"])
    ap.add_argument("connector", nargs="?",
                    help="connector name (gmail/outlook/youtube/teams/slack/github)")
    ap.add_argument("--namespace", help="tenant/user namespace (default MCP_USER_ID)")
    ap.add_argument("--token", help="raw token value (set) — stored as {field: token}")
    ap.add_argument("--field", default="token",
                    help="field name for --token (default 'token')")
    ap.add_argument("--json", dest="json_blob",
                    help="full token dict as JSON (set) — overrides --token")
    args = ap.parse_args(argv)

    if not _secret_from(None):
        print("error: set EVOSQL_TENANT_SECRET (or EVOSQL_TOKEN_KEY) first",
              file=sys.stderr)
        return 2

    if args.action != "list" and not args.connector:
        print("error: a connector name is required", file=sys.stderr)
        return 2

    if args.action == "list":
        ts = TokenStore("_list", namespace=args.namespace)
        from .store_io import fetch_rows_with_prefix
        names = sorted(k.split("token:", 1)[1]
                       for k, _v in fetch_rows_with_prefix(
                           ts._connection(), DEFAULT_STORE, ts.namespace, "token:"))
        print(json.dumps({"namespace": ts.namespace, "connectors": names}))
        return 0

    ts = TokenStore(args.connector, namespace=args.namespace)
    if args.action == "set":
        if args.json_blob:
            try:
                data = json.loads(args.json_blob)
            except ValueError as e:
                print(f"error: --json is not valid JSON: {e}", file=sys.stderr)
                return 2
            if not isinstance(data, dict):
                print("error: --json must be a JSON object", file=sys.stderr)
                return 2
        else:
            token = args.token if args.token is not None else sys.stdin.read().strip()
            if not token:
                print("error: provide --token, --json, or pipe the token on stdin",
                      file=sys.stderr)
                return 2
            data = {args.field: token}
        ts.save(data)
        print(json.dumps({"ok": True, "namespace": ts.namespace,
                          "connector": args.connector}))
        return 0

    if args.action == "get":
        print(json.dumps(ts.load()))
        return 0

    if args.action == "delete":
        ts.delete()
        print(json.dumps({"ok": True, "deleted": args.connector,
                          "namespace": ts.namespace}))
        return 0
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
