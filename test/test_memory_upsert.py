"""
tests/test_memory_upsert.py — regression for the MEMORY PUT atomic
upsert fix.

Background: MEMORY PUT used to physically delete the existing row and
then re-insert. The re-insert could hit a stale-tree duplicate and
bail, leaving the row deleted but not re-inserted — a silent data
loss observed during an embedding backfill (a real row vanished). The
fix repoints the PK to a freshly-inserted tuple and drops the old one
only after the new one lands (new-first, swap-last), so a repeated PUT
to the same key is a true atomic upsert: one row, latest value, never
a duplicate and never a loss.
"""
from __future__ import annotations

import os
import sys
import time
from pathlib import Path

_REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(_REPO / "tests"))
from pg_helpers import conn, simple_query


def run(sock, sql):
    cols, rows, err, tag = simple_query(sock, sql)
    return rows, err


def main():
    sock = conn()
    store = f"upsert_test_{int(time.time())}"
    tbl = f"mem_{store}"
    ns = "u1"
    passed = failed = 0

    def check(name, cond):
        nonlocal passed, failed
        if cond:
            passed += 1
            print(f"  PASS: {name}")
        else:
            failed += 1
            print(f"  FAIL: {name}", file=sys.stderr)

    run(sock, f"CREATE MEMORY STORE {store}")

    def count(key=None):
        q = f"SELECT COUNT(*) FROM {tbl} WHERE mem_namespace='{ns}'"
        if key:
            q += f" AND mem_key='{key}'"
        rows, err = run(sock, q)
        return int(rows[0][0]) if rows and rows[0] else -1

    # 1) First PUT inserts.
    _, err = run(sock, f"MEMORY PUT INTO {store} VALUES "
                       f"('{ns}','k1','{{\"fact\":\"v1\"}}')")
    check("first PUT no error", err is None)
    check("count == 1 after first PUT", count() == 1)

    # 2) Repeated PUT to the same key is an upsert — no duplicate, no
    #    UniqueViolation, count stays 1.
    last_ok = True
    for i in range(2, 11):
        _, err = run(sock, f"MEMORY PUT INTO {store} VALUES "
                           f"('{ns}','k1','{{\"fact\":\"v{i}\"}}')")
        if err is not None:
            last_ok = False
            print(f"    re-PUT v{i} error: {err}", file=sys.stderr)
    check("9 re-PUTs to same key, no error", last_ok)
    check("count still 1 after 10 PUTs", count() == 1)
    check("exactly 1 row for k1 (no duplicate)", count("k1") == 1)

    # 3) Value reflects the latest PUT.
    rows, _ = run(sock, f"SELECT mem_value FROM {tbl} "
                        f"WHERE mem_namespace='{ns}' AND mem_key='k1'")
    val = rows[0][0] if rows else ""
    check("value is latest (v10)", "v10" in str(val))

    # 4) A different key still inserts normally (insert path intact).
    run(sock, f"MEMORY PUT INTO {store} VALUES "
              f"('{ns}','k2','{{\"fact\":\"other\"}}')")
    check("count == 2 after second distinct key", count() == 2)

    # 5) Distinct namespaces are isolated under upsert.
    run(sock, f"MEMORY PUT INTO {store} VALUES "
              f"('u2','k1','{{\"fact\":\"ns2\"}}')")
    check("namespace isolation: u1 still 2 rows", count() == 2)

    print(f"\n=== {passed} passed, {failed} failed ===")
    sock.close()
    sys.exit(1 if failed else 0)


if __name__ == "__main__":
    main()
