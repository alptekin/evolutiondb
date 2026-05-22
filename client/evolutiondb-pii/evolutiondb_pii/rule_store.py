"""DB-backed rule store. Each rule lives in its own row inside
`__pii_rules`, keyed by the rule's `name`. The on-disk JSON file
remains the lowest layer; rules read out of the DB stack on top by
name (the same merge policy `rules.py` already uses for the user
override file).

The schema in the DB row matches the bundled `default_rules.json`
entry shape exactly, so a row that came from `push` round-trips
through `pull` byte-for-byte."""
from __future__ import annotations

import json
import os
from typing import Dict, List, Optional


RULES_STORE_NAME = "pii_rules"


def _resolve_namespace(explicit: Optional[str]) -> str:
    if explicit:
        return explicit
    return os.environ.get("MCP_USER_ID") or "default_user"


# ---------------------------------------------------------------- #
def push_rules(conn, rules_blob: Dict,
               namespace: Optional[str] = None,
               store: str = RULES_STORE_NAME,
               replace: bool = False) -> Dict[str, int]:
    """Upload every rule in `rules_blob["rules"]` to the DB. With
    `replace=True` we first clear out every existing row in the
    namespace so the DB state ends up byte-for-byte identical to
    the input. Returns a small counters dict for the CLI to print.
    """
    from .store_io import write_row
    rules = rules_blob.get("rules") or []
    written = 0
    if replace:
        # Wipe via a SELECT-then-DELETE-loop because EvolutionDB's
        # DELETE-by-namespace is honored by the existing MEMORY
        # store helpers but not exposed as a single call here.
        from .store_io import _e, fetch_rows_with_prefix
        ns = _resolve_namespace(namespace)
        with conn.cursor() as cur:
            cur.execute(
                f"DELETE FROM __mem_{store} "
                f"WHERE mem_namespace='{_e(ns)}'")
    for rule in rules:
        name = rule.get("name")
        if not name:
            continue
        write_row(conn, store, _resolve_namespace(namespace),
                    name, rule)
        written += 1
    return {"written": written, "replaced": bool(replace)}


def pull_rules(conn, namespace: Optional[str] = None,
               store: str = RULES_STORE_NAME) -> Dict:
    """Read every rule row back into a single `default_rules.json`-
    shaped blob. Convenience for `evolutiondb-pii rules pull`."""
    from .store_io import fetch_rows_with_prefix
    rows = list(fetch_rows_with_prefix(
        conn, store, _resolve_namespace(namespace), ""))
    # Iteration order from fetch_rows_with_prefix is insertion-time
    # which is fine for a round-trip but might not match the input
    # order; sort by name so output is deterministic.
    rows.sort(key=lambda kv: kv[0])
    return {"version": 1, "rules": [v for _, v in rows]}


def list_rules(conn, namespace: Optional[str] = None,
               store: str = RULES_STORE_NAME) -> List[Dict]:
    """Lightweight catalogue — just the name / tag / priority /
    enabled fields, for the CLI's `rules list` summary view."""
    blob = pull_rules(conn, namespace=namespace, store=store)
    return [{"name":     r.get("name"),
             "tag":      r.get("tag"),
             "priority": r.get("priority"),
             "enabled":  r.get("enabled", True)}
            for r in blob.get("rules", [])]


# ---------------------------------------------------------------- #
def load_db_rules_blob(conn,
                       namespace: Optional[str] = None,
                       store: str = RULES_STORE_NAME) -> Optional[Dict]:
    """Used by `rules.py:load_rules` when the env tells it to fetch
    rules from the DB. Returns the same `{version, rules}` shape the
    file-based loader expects so the existing parser can reuse its
    overlay logic unchanged."""
    blob = pull_rules(conn, namespace=namespace, store=store)
    if not blob.get("rules"):
        return None
    return blob