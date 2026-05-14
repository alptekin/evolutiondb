"""
`evolutiondb-tags` — manage topic tags from the shell.

Subcommands:

  backfill [--limit N] [--store STORE] [--dry-run]
      Run the tagger over rows that have no `topic_tags` field yet.
      Skips watermark / state rows and empty bodies. Existing
      connector tags are merged into the `tags` list so search by
      tag keeps working as-is.

  list [--limit N]
      Show the global topic-tag cloud with counts, biggest first.

The CLI reads the same env vars as the MCP server for DB connection
(`EVOSQL_HOST` etc.) plus the tagger envs (`EVOSQL_TOPIC_PROVIDER`,
`OPENAI_API_KEY`, optional `EVOSQL_TOPIC_MODEL`).
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time
from collections import Counter
from typing import List, Optional

from . import tagger as tag_mod
from . import inspector as ins_mod  # for is_state_row


def _e(s: str) -> str:
    if not isinstance(s, str):
        s = str(s)
    return s.replace("\r", " ").replace("\n", " ").replace("\t", " ") \
            .replace("'", "''")


def _connect():
    try:
        import psycopg
    except ImportError as exc:
        raise SystemExit(
            "evolutiondb-tags requires psycopg. "
            "pip install 'psycopg[binary]>=3.1'"
        ) from exc
    return psycopg.connect(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "5433")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        dbname=os.environ.get("EVOSQL_DATABASE", "evosql"),
        autocommit=True,
    )


def _store_name(arg_store: Optional[str]) -> str:
    if arg_store:
        return arg_store
    return os.environ.get("MCP_STORE_PREFIX", "mcp") + "_mem"


def _namespace() -> str:
    return os.environ.get("MCP_USER_ID", "default_user")


# ---------------------------------------------------------------- #
#  backfill                                                         #
# ---------------------------------------------------------------- #
def _candidate_text(rec: dict) -> str:
    """Pick the most informative free-text field on the record. The
    connectors use different keys (fact / text / snippet / body)
    depending on what the source returns, so we walk a fallback
    chain."""
    for key in ("fact", "text", "snippet", "body"):
        v = rec.get(key)
        if isinstance(v, str) and v.strip():
            return v
    return ""


def cmd_backfill(args, conn) -> int:
    tagger = tag_mod.provider_from_env()
    if tagger.kind == "none":
        print("error: EVOSQL_TOPIC_PROVIDER is not configured "
              "(or OPENAI_API_KEY is missing).", file=sys.stderr)
        return 1

    namespace  = _namespace()
    store      = _store_name(args.store)

    with conn.cursor() as cur:
        cur.execute(
            f"SELECT mem_key, mem_value FROM __mem_{store} "
            f"WHERE mem_namespace = '{_e(namespace)}'")
        rows = cur.fetchall()

    tagged = skipped = errored = 0
    sleep_s = max(0.0, args.sleep)

    for k, v in rows:
        try:
            r = json.loads(v) if isinstance(v, str) else v
        except (TypeError, ValueError):
            errored += 1
            continue
        if not isinstance(r, dict):
            skipped += 1
            continue
        if ins_mod.is_state_row(k):
            skipped += 1
            continue
        if r.get("topic_tags"):
            skipped += 1
            continue

        text = _candidate_text(r)
        if not text.strip():
            skipped += 1
            continue
        if tagged >= args.limit:
            break

        if args.dry_run:
            print(f"would tag {k}: {text[:70]}")
            tagged += 1
            continue

        topics = tagger.tag(text)
        if not topics:
            errored += 1
            continue

        r["topic_tags"]   = topics
        r["topic_model"]  = tagger.kind
        existing_tags = r.get("tags") or []
        if not isinstance(existing_tags, list):
            existing_tags = []
        merged = sorted(set(existing_tags) | set(topics))
        r["tags"] = merged

        new_value = json.dumps(r, ensure_ascii=False)
        try:
            with conn.cursor() as cur:
                cur.execute(
                    f"MEMORY PUT INTO {store} VALUES "
                    f"('{_e(namespace)}','{_e(k)}','{_e(new_value)}')")
        except Exception as exc:
            print(f"[tagger] write failed for {k}: {exc}",
                  file=sys.stderr)
            errored += 1
            continue
        tagged += 1
        if sleep_s > 0:
            time.sleep(sleep_s)

    print(f"tagged {tagged}, skipped {skipped}, errored {errored}")
    return 0


# ---------------------------------------------------------------- #
#  list                                                             #
# ---------------------------------------------------------------- #
def cmd_list(args, conn) -> int:
    namespace = _namespace()
    store     = _store_name(args.store)

    counts: Counter = Counter()
    with conn.cursor() as cur:
        cur.execute(
            f"SELECT mem_value FROM __mem_{store} "
            f"WHERE mem_namespace = '{_e(namespace)}'")
        rows = cur.fetchall()

    for (v,) in rows:
        try:
            r = json.loads(v) if isinstance(v, str) else v
        except (TypeError, ValueError):
            continue
        if not isinstance(r, dict):
            continue
        for t in (r.get("topic_tags") or []):
            counts[t] += 1

    if not counts:
        print("(no topic tags yet — run "
              "`evolutiondb-tags backfill` first)")
        return 0
    width = max(len(str(c)) for _, c in counts.most_common(args.limit))
    for tag, n in counts.most_common(args.limit):
        print(f"{n:{width}d}  {tag}")
    return 0


# ---------------------------------------------------------------- #
#  argparse + entry point                                           #
# ---------------------------------------------------------------- #
def build_parser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser(prog="evolutiondb-tags",
        description="Manage EvolutionDB topic tags.")
    sub = p.add_subparsers(dest="cmd", required=True)

    sp = sub.add_parser("backfill",
        help="Tag every record that has no topic_tags yet.")
    sp.add_argument("--limit", type=int, default=1000,
        help="Stop after this many writes (default 1000).")
    sp.add_argument("--store", default=None,
        help="Memory store name (default $MCP_STORE_PREFIX + '_mem').")
    sp.add_argument("--sleep", type=float, default=0.25,
        help="Seconds to sleep between LLM calls (default 0.25).")
    sp.add_argument("--dry-run", action="store_true",
        help="Print what would be tagged without writing.")

    sp = sub.add_parser("list",
        help="Show the topic-tag cloud with counts.")
    sp.add_argument("--limit", type=int, default=50,
        help="Show the top N tags (default 50).")
    sp.add_argument("--store", default=None,
        help="Memory store name (default $MCP_STORE_PREFIX + '_mem').")

    return p


def main(argv: Optional[List[str]] = None) -> int:
    args = build_parser().parse_args(argv)
    conn = _connect()
    try:
        return {
            "backfill": cmd_backfill,
            "list":     cmd_list,
        }[args.cmd](args, conn)
    finally:
        conn.close()


if __name__ == "__main__":
    raise SystemExit(main())
