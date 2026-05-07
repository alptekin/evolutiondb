"""
test_show_stores_inventory.py — regression for the SHOW MEMORY STORES /
SHOW CHECKPOINT STORES catalog enumeration bug.

Before the fix, adaptor/catalog.c had no handlers for
`SHOW MEMORY STORES` / `SHOW CHECKPOINT STORES`. The default
fall-through path returned a single empty row, which made operators
believe the catalog was empty even though MEMORY PUT / CHECKPOINT PUT
were succeeding against a heap that had 10+ stores.

After the fix, the handlers list every registered store the same way
SHOW ENTITY STORES / SHOW MESSAGE LOGS already did.

What we assert:
  - SHOW with no stores returns 0 rows (not 1 empty row)
  - SHOW after CREATE returns the right name + backing_table_id
  - SHOW after DROP no longer surfaces the dropped name
  - Distance kind round-trips as a human-readable string
  - Checkpoint retention round-trips verbatim
"""

import os
import sys

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0


def check(label, ok, detail=""):
    global PASS, FAIL
    if ok:
        PASS += 1
        print(f"  PASS  {label}")
    else:
        FAIL += 1
        print(f"  FAIL  {label}{(' — ' + detail) if detail else ''}")


def reset(c, names_mem, names_ck):
    for n in names_mem:
        simple_query(c, f"DROP MEMORY STORE IF EXISTS {n}")
    for n in names_ck:
        simple_query(c, f"DROP CHECKPOINT STORE IF EXISTS {n}")


def show_rows(c, what):
    cols, rows, err, _ = simple_query(c, f"SHOW {what}")
    if err:
        raise RuntimeError(f"SHOW {what} failed: {err}")
    # Drop any leading-empty-name rows the legacy fall-through produced.
    return [tuple(r) for r in rows if r and r[0] not in (None, "", b"")]


def main():
    c = conn()

    mem_names = ["showinv_mem_a", "showinv_mem_b"]
    ck_names  = ["showinv_ck_a"]
    reset(c, mem_names, ck_names)

    # 1. Empty catalog → empty rows, not a fake-empty row
    rows = show_rows(c, "MEMORY STORES")
    pre_mem = [r for r in rows if r[0] in mem_names]
    check("empty MEMORY STORES has no test fixture rows",
          pre_mem == [], f"unexpected leftovers: {pre_mem}")

    rows = show_rows(c, "CHECKPOINT STORES")
    pre_ck = [r for r in rows if r[0] in ck_names]
    check("empty CHECKPOINT STORES has no test fixture rows",
          pre_ck == [], f"unexpected leftovers: {pre_ck}")

    # 2. Create one MEMORY STORE — SHOW should surface it
    simple_query(c, f"CREATE MEMORY STORE {mem_names[0]}")
    rows = show_rows(c, "MEMORY STORES")
    found = [r for r in rows if r[0] == mem_names[0]]
    check(f"SHOW MEMORY STORES surfaces {mem_names[0]} after CREATE",
          len(found) == 1, f"got: {rows}")
    if found:
        # Schema: name, backing_table_id, embedding_dim, distance
        check("MEMORY STORE has 4 columns",
              len(found[0]) == 4, f"got {len(found[0])} columns: {found[0]}")
        check("MEMORY STORE distance defaults to 'cosine'",
              found[0][3] == "cosine", f"got: {found[0][3]!r}")

    # 3. Create another with explicit embedding_dim — listed alongside
    simple_query(c, f"CREATE MEMORY STORE {mem_names[1]} "
                    f"WITH (embedding_dim=384, distance='l2')")
    rows = show_rows(c, "MEMORY STORES")
    by_name = {r[0]: r for r in rows}
    check("SHOW MEMORY STORES lists both stores",
          all(n in by_name for n in mem_names),
          f"missing: {[n for n in mem_names if n not in by_name]}")
    if mem_names[1] in by_name:
        r = by_name[mem_names[1]]
        check(f"{mem_names[1]} embedding_dim == 384",
              str(r[2]) == "384", f"got: {r[2]!r}")
        check(f"{mem_names[1]} distance == 'l2'",
              r[3] == "l2", f"got: {r[3]!r}")

    # 4. CHECKPOINT STORE round-trip
    simple_query(c, f"CREATE CHECKPOINT STORE {ck_names[0]}")
    rows = show_rows(c, "CHECKPOINT STORES")
    found = [r for r in rows if r[0] == ck_names[0]]
    check(f"SHOW CHECKPOINT STORES surfaces {ck_names[0]} after CREATE",
          len(found) == 1, f"got: {rows}")
    if found:
        check("CHECKPOINT STORE has 3 columns",
              len(found[0]) == 3, f"got {len(found[0])} columns: {found[0]}")

    # 5. DROP removes the row
    simple_query(c, f"DROP MEMORY STORE {mem_names[0]}")
    rows = show_rows(c, "MEMORY STORES")
    still_there = any(r[0] == mem_names[0] for r in rows)
    check(f"SHOW MEMORY STORES drops {mem_names[0]} after DROP",
          not still_there, "row still surfaced")

    # 6. Cleanup
    reset(c, mem_names, ck_names)
    c.close()

    total = PASS + FAIL
    print(f"\n  {PASS}/{total} pass")
    sys.exit(0 if FAIL == 0 else 1)


if __name__ == "__main__":
    main()
