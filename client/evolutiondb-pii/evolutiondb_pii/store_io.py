"""Read / write helpers that talk to a live EvolutionDB memory store
through the PG-wire protocol. Used by the row-decrypt and backfill
CLI commands; not used by the sync clients (they have their own
psycopg connections wired into their state modules).

The functions below speak the same SQL surface MEMORY PUT and the
backing __mem_<store> table expose, so a row written by any sync
client is fully readable + writable here without an extra schema
hop."""
from __future__ import annotations

import json
import os
from typing import Dict, Iterable, List, Optional, Tuple


DEFAULT_HOST     = "127.0.0.1"
DEFAULT_PORT     = 5433
DEFAULT_USER     = "admin"
DEFAULT_PASS     = "admin"
DEFAULT_DATABASE = "evosql"
DEFAULT_STORE    = "mcp_mem"


def _e(s: str) -> str:
    if not isinstance(s, str):
        s = str(s)
    s = s.replace("\r", " ").replace("\n", " ").replace("\t", " ")
    return s.replace("'", "''")


def connect_from_env(env: Optional[Dict[str, str]] = None):
    """Open a psycopg connection from the standard EVOSQL_*
    environment variables. Pinned read-write because the backfill
    command needs PUT."""
    try:
        import psycopg
    except ImportError as exc:
        raise RuntimeError(
            "evolutiondb-pii row commands need psycopg; install with "
            "`pip install psycopg[binary]>=3.1`."
        ) from exc
    env = env if env is not None else os.environ
    return psycopg.connect(
        host=env.get("EVOSQL_HOST", DEFAULT_HOST),
        port=int(env.get("EVOSQL_PORT", str(DEFAULT_PORT))),
        user=env.get("EVOSQL_USER", DEFAULT_USER),
        password=env.get("EVOSQL_PASSWORD", DEFAULT_PASS),
        dbname=env.get("EVOSQL_DATABASE", DEFAULT_DATABASE),
        autocommit=True,
    )


def fetch_row(conn, store: str, namespace: str, key: str) -> Optional[Dict]:
    """Fetch a single (ns, key) row and return its parsed value, or
    None when the row does not exist."""
    with conn.cursor() as cur:
        cur.execute(
            f"SELECT mem_value FROM __mem_{store} "
            f"WHERE mem_namespace='{_e(namespace)}' "
            f"AND mem_key='{_e(key)}'")
        row = cur.fetchone()
    if not row:
        return None
    v = row[0]
    return v if isinstance(v, dict) else json.loads(v)


def fetch_rows_with_prefix(conn, store: str, namespace: str,
                            key_prefix: str,
                            *, limit: int = 100_000
                            ) -> Iterable[Tuple[str, Dict]]:
    """Iterate every row whose key starts with `key_prefix`. Returns
    (key, value) tuples."""
    with conn.cursor() as cur:
        cur.execute(
            f"SELECT mem_key, mem_value FROM __mem_{store} "
            f"WHERE mem_namespace='{_e(namespace)}' "
            f"AND mem_key LIKE '{_e(key_prefix)}%' LIMIT {limit}")
        for k, v in cur.fetchall():
            yield k, (v if isinstance(v, dict) else json.loads(v))


def write_row(conn, store: str, namespace: str, key: str,
              value: Dict) -> None:
    """Upsert one row. Uses DELETE + MEMORY PUT to dodge the legacy
    duplicate-key issue PR #240 documented for large value
    upserts."""
    payload = json.dumps(value, ensure_ascii=False)
    with conn.cursor() as cur:
        cur.execute(
            f"DELETE FROM __mem_{store} "
            f"WHERE mem_namespace='{_e(namespace)}' "
            f"AND mem_key='{_e(key)}'")
        cur.execute(
            f"MEMORY PUT INTO {store} VALUES "
            f"('{_e(namespace)}','{_e(key)}','{_e(payload)}')")


# ---------------------------------------------------------------- #
def gather_tokens(conn, store: str, namespace: str,
                  refs: List[str]) -> List[Dict]:
    """Walk a record's `_pii_refs` list and assemble the full token
    catalogue. Companion rows with chunked layout (each holding a
    `tokens` array) get concatenated in declared order."""
    out: List[Dict] = []
    for ref in refs:
        row = fetch_row(conn, store, namespace, ref)
        if not row:
            continue
        out.extend(row.get("tokens", []))
    return out
