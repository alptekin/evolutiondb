"""
tenant_migrate — Phase 2: the data move that makes "graduate" real.

Routing already re-points a tenant from the shared pool to its own engine on a
tier flip (tenant_router). This carries the tenant's DATA across so graduating
is a true one-step move ("a button, not a migration project"): its memory
stores and tables are copied from its shared database into its dedicated engine.

Connection-library agnostic: a ``Conn`` is anything with ``query(sql)->rows`` and
``execute(sql)``. The caller wires its own (pg_helpers in tests, the MCP
MemoryBackend in the server) and supplies the store/table names to move (the
platform discovers stores via ``dsar.stores`` and tables from its own schema).

Scope: memory-store rows (full fidelity) and tables with their columns, PRIMARY
KEY, and secondary indexes (read from information_schema.key_column_usage and
pg_indexes). Expression/HNSW indexes and CHECK/FK constraints are still not
carried (callers needing those recreate the schema first).
"""
from __future__ import annotations

from typing import Iterable, List, Tuple


def _q(s: str) -> str:
    """Escape a value for a single-quoted SQL literal (double the quotes)."""
    return (s or "").replace("'", "''")


# information_schema.columns data_type -> a CREATE TABLE type (best effort).
_TYPE_MAP = {
    "integer": "INT",
    "bigint": "BIGINT",
    "smallint": "SMALLINT",
    "boolean": "BOOLEAN",
    "double precision": "DOUBLE",
    "real": "REAL",
    "numeric": "NUMERIC",
    "date": "DATE",
    "timestamp": "TIMESTAMP",
    "text": "TEXT",
    "character varying": "VARCHAR(1024)",
    "character": "VARCHAR(1024)",
}


def copy_memory_store(src, dst, store: str) -> int:
    """Copy every (namespace, key, value) row of a memory store from src to dst.
    Returns rows copied. mem_value is stored as JSON, so the value read back is
    valid JSON and re-PUTs cleanly."""
    dst.execute(f"CREATE MEMORY STORE IF NOT EXISTS {store}")
    rows = src.query(
        f"SELECT mem_namespace, mem_key, mem_value FROM __mem_{store}") or []
    n = 0
    for ns, key, value in rows:
        if value is None:
            continue
        dst.execute(
            f"MEMORY PUT INTO {store} VALUES "
            f"('{_q(ns)}','{_q(key)}','{_q(value)}')")
        n += 1
    return n


def _table_columns(src, table: str) -> List[Tuple[str, str]]:
    """(column_name, create-table-type) for a table, via information_schema.
    information_schema.columns returns full rows here; columns are
    [catalog, schema, table_name, column_name, ordinal, data_type, nullable]."""
    rows = src.query("SELECT * FROM information_schema.columns") or []
    cols: List[Tuple[str, str]] = []
    for r in rows:
        if len(r) >= 6 and str(r[2]) == table:
            name = str(r[3])
            typ = _TYPE_MAP.get(str(r[5]).lower(), "TEXT")
            cols.append((name, typ))
    return cols


def _table_pk(src, table: str) -> List[str]:
    """Primary-key column names in key order, via information_schema.key_column_
    usage. These synthetic views ignore the projection (return ALL columns) and
    don't filter by WHERE, so select all and filter/position here — exactly like
    _table_columns. KCU columns: [constraint_name, table_name, column_name,
    ordinal_position]."""
    rows = src.query("SELECT * FROM information_schema.key_column_usage") or []
    pk: List[Tuple[int, str]] = []
    for r in rows:
        if (len(r) >= 4 and str(r[1]) == table
                and str(r[0]).endswith("_pkey")):
            try:
                pos = int(r[3])
            except (TypeError, ValueError):
                pos = 0
            pk.append((pos, str(r[2])))
    pk.sort()
    return [name for _, name in pk]


def _table_indexes(src, table: str) -> List[str]:
    """The CREATE INDEX statements for a table's secondary indexes (the PK is
    not listed here), via pg_indexes. Columns: [schemaname, tablename,
    indexname, tablespace, indexdef]."""
    rows = src.query("SELECT * FROM pg_indexes") or []
    return [str(r[4]) for r in rows
            if len(r) >= 5 and str(r[1]) == table and r[4]]


def copy_table(src, dst, table: str) -> int:
    """Recreate a table on dst (columns + PRIMARY KEY + secondary indexes) and
    copy its rows. Returns rows copied. The PK goes inline in CREATE TABLE;
    indexes are replayed after the data (best-effort — an expression/HNSW index
    that pg_indexes can't render, or a replay error, is skipped). Basic column
    types; CHECK/FK constraints are still not carried."""
    cols = _table_columns(src, table)
    if not cols:
        return 0
    coldef = ", ".join(f"{name} {typ}" for name, typ in cols)
    pk = _table_pk(src, table)
    if pk:
        coldef += ", PRIMARY KEY (" + ", ".join(pk) + ")"
    dst.execute(f"DROP TABLE IF EXISTS {table}")
    dst.execute(f"CREATE TABLE {table} ({coldef})")
    colnames = ", ".join(name for name, _ in cols)
    rows = src.query(f"SELECT {colnames} FROM {table}") or []
    n = 0
    for r in rows:
        vals = ", ".join("NULL" if v is None else f"'{_q(str(v))}'" for v in r)
        dst.execute(f"INSERT INTO {table} ({colnames}) VALUES ({vals})")
        n += 1
    for indexdef in _table_indexes(src, table):
        try:
            dst.execute(indexdef)
        except Exception:
            pass                       # best-effort: skip an unreplayable index
    return n


def graduate(src, dst, *, stores: Iterable[str] = (),
             tables: Iterable[str] = ()) -> dict:
    """Move a tenant's data from its shared database (src) into its dedicated
    engine (dst). Returns per-object row counts. Idempotent enough to retry:
    stores use CREATE ... IF NOT EXISTS + PUT (upsert by key); tables are
    DROP+CREATE. The caller flips the tier (router.set_tier) AFTER this returns
    so traffic only moves once the data is in place."""
    moved = {"stores": {}, "tables": {}}
    for store in stores:
        moved["stores"][store] = copy_memory_store(src, dst, store)
    for table in tables:
        moved["tables"][table] = copy_table(src, dst, table)
    return moved
