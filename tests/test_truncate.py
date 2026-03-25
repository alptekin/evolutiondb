#!/usr/bin/env python3
"""test_truncate.py — TRUNCATE TABLE tests (basic, sharded, distributed, performance)"""

import sys, os, time
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0

def check(name, cond):
    global PASS, FAIL
    if cond:
        PASS += 1
        print(f"  PASS: {name}")
    else:
        FAIL += 1
        print(f"  FAIL: {name}")

def count(s, table):
    _, r, _, _ = simple_query(s, f"SELECT COUNT(*) FROM {table}")
    return int(r[0][0]) if r else -1

def setup(s):
    simple_query(s, "DROP TABLE IF EXISTS trunc_child")
    simple_query(s, "DROP TABLE IF EXISTS trunc_test")
    simple_query(s, "DROP TABLE IF EXISTS trunc_idx")
    simple_query(s, "DROP TABLE IF EXISTS trunc_fk_parent")
    simple_query(s, "DROP TABLE IF EXISTS trunc_shard_hash")
    simple_query(s, "DROP TABLE IF EXISTS trunc_shard_range")
    simple_query(s, "DROP TABLE IF EXISTS trunc_big")
    simple_query(s, "DROP TABLE IF EXISTS trunc_dist")

def teardown(s):
    setup(s)  # same cleanup

def run():
    s = conn()
    setup(s)

    # ═══════════════════════════════════════════
    print("\n=== Basic TRUNCATE ===")

    # 1. TRUNCATE empty table
    simple_query(s, "CREATE TABLE trunc_test (id INTEGER PRIMARY KEY, name VARCHAR(50), val INTEGER)")
    _, _, err, _ = simple_query(s, "TRUNCATE TABLE trunc_test")
    check("TRUNCATE empty table succeeds", err is None)
    check("Empty table count = 0", count(s, "trunc_test") == 0)

    # 2. TRUNCATE with data
    for i in range(1, 51):
        simple_query(s, f"INSERT INTO trunc_test VALUES ({i}, 'name{i}', {i*10})")
    check("Table has 50 rows before TRUNCATE", count(s, "trunc_test") == 50)

    _, _, err, _ = simple_query(s, "TRUNCATE TABLE trunc_test")
    check("TRUNCATE succeeds", err is None)
    check("Count = 0 after TRUNCATE", count(s, "trunc_test") == 0)

    # 3. INSERT after TRUNCATE works
    simple_query(s, "INSERT INTO trunc_test VALUES (1, 'after', 100)")
    check("INSERT after TRUNCATE works", count(s, "trunc_test") == 1)

    # 4. PK lookup after TRUNCATE + re-insert
    _, r, _, _ = simple_query(s, "SELECT name FROM trunc_test WHERE id = 1")
    check("PK lookup works after TRUNCATE", r and r[0][0] == 'after')

    simple_query(s, "DROP TABLE trunc_test")

    # ═══════════════════════════════════════════
    print("\n=== AUTO_INCREMENT Reset ===")

    simple_query(s, "CREATE TABLE trunc_test (id INTEGER PRIMARY KEY AUTO_INCREMENT, name VARCHAR(50))")
    simple_query(s, "INSERT INTO trunc_test (name) VALUES ('a')")
    simple_query(s, "INSERT INTO trunc_test (name) VALUES ('b')")
    simple_query(s, "INSERT INTO trunc_test (name) VALUES ('c')")

    _, r, _, _ = simple_query(s, "SELECT MAX(id) FROM trunc_test")
    max_before = int(r[0][0]) if r else 0
    check("Auto-inc reached 3", max_before == 3)

    simple_query(s, "TRUNCATE TABLE trunc_test")
    simple_query(s, "INSERT INTO trunc_test (name) VALUES ('new')")
    _, r, _, _ = simple_query(s, "SELECT id FROM trunc_test")
    new_id = int(r[0][0]) if r else 99
    check("AUTO_INCREMENT reset after TRUNCATE", new_id == 1)

    simple_query(s, "DROP TABLE trunc_test")

    # ═══════════════════════════════════════════
    print("\n=== Secondary Index ===")

    simple_query(s, "CREATE TABLE trunc_idx (id INTEGER PRIMARY KEY, name VARCHAR(50), city VARCHAR(50))")
    simple_query(s, "CREATE INDEX idx_city ON trunc_idx (city)")
    for i in range(1, 21):
        simple_query(s, f"INSERT INTO trunc_idx VALUES ({i}, 'n{i}', 'city{i % 5}')")

    check("Table has 20 rows", count(s, "trunc_idx") == 20)
    simple_query(s, "TRUNCATE TABLE trunc_idx")
    check("Count = 0 after TRUNCATE", count(s, "trunc_idx") == 0)

    # Insert and verify index works
    simple_query(s, "INSERT INTO trunc_idx VALUES (1, 'test', 'Istanbul')")
    _, r, _, _ = simple_query(s, "SELECT * FROM trunc_idx WHERE city = 'Istanbul'")
    check("Secondary index works after TRUNCATE", r and len(r) == 1)

    simple_query(s, "DROP INDEX idx_city ON trunc_idx")
    simple_query(s, "DROP TABLE trunc_idx")

    # ═══════════════════════════════════════════
    print("\n=== FK Constraint Check ===")

    simple_query(s, "CREATE TABLE trunc_fk_parent (id INTEGER PRIMARY KEY, name VARCHAR(50))")
    simple_query(s, "CREATE TABLE trunc_child (id INTEGER PRIMARY KEY, parent_id INTEGER, FOREIGN KEY (parent_id) REFERENCES trunc_fk_parent(id))")
    simple_query(s, "INSERT INTO trunc_fk_parent VALUES (1, 'parent1')")
    simple_query(s, "INSERT INTO trunc_child VALUES (10, 1)")

    _, _, err, _ = simple_query(s, "TRUNCATE TABLE trunc_fk_parent")
    check("TRUNCATE rejected when FK references exist", err is not None and "foreign key" in err.lower())

    # TRUNCATE child first, then parent should work
    simple_query(s, "TRUNCATE TABLE trunc_child")
    check("TRUNCATE child succeeds", count(s, "trunc_child") == 0)

    _, _, err, _ = simple_query(s, "TRUNCATE TABLE trunc_fk_parent")
    check("TRUNCATE parent succeeds after child cleared", err is None)

    simple_query(s, "DROP TABLE trunc_child")
    simple_query(s, "DROP TABLE trunc_fk_parent")

    # ═══════════════════════════════════════════
    print("\n=== CASCADE ===")

    simple_query(s, "CREATE TABLE cas_parent (id INTEGER PRIMARY KEY, name VARCHAR(50))")
    simple_query(s, "CREATE TABLE cas_child (id INTEGER PRIMARY KEY, pid INTEGER, FOREIGN KEY (pid) REFERENCES cas_parent(id))")
    simple_query(s, "INSERT INTO cas_parent VALUES (1, 'p1')")
    simple_query(s, "INSERT INTO cas_child VALUES (10, 1)")

    # CASCADE should truncate child automatically
    _, _, err, _ = simple_query(s, "TRUNCATE TABLE cas_parent CASCADE")
    check("TRUNCATE CASCADE succeeds", err is None)
    check("CASCADE: parent empty", count(s, "cas_parent") == 0)
    check("CASCADE: child empty", count(s, "cas_child") == 0)

    # Re-insert and verify
    simple_query(s, "INSERT INTO cas_parent VALUES (2, 'p2')")
    check("CASCADE: re-insert works", count(s, "cas_parent") == 1)

    simple_query(s, "DROP TABLE cas_child")
    simple_query(s, "DROP TABLE cas_parent")

    # ═══════════════════════════════════════════
    print("\n=== CONTINUE IDENTITY ===")

    simple_query(s, "CREATE TABLE ci_test (id INTEGER PRIMARY KEY AUTO_INCREMENT, name VARCHAR(50))")
    simple_query(s, "INSERT INTO ci_test (name) VALUES ('a')")
    simple_query(s, "INSERT INTO ci_test (name) VALUES ('b')")
    simple_query(s, "INSERT INTO ci_test (name) VALUES ('c')")

    # CONTINUE IDENTITY: counter should NOT reset
    simple_query(s, "TRUNCATE TABLE ci_test CONTINUE IDENTITY")
    simple_query(s, "INSERT INTO ci_test (name) VALUES ('after')")
    _, r, _, _ = simple_query(s, "SELECT id FROM ci_test")
    ci_id = int(r[0][0]) if r else 0
    check(f"CONTINUE IDENTITY: id={ci_id} > 1 (counter preserved)", ci_id > 1)

    # RESTART IDENTITY (default): counter should reset
    simple_query(s, "TRUNCATE TABLE ci_test RESTART IDENTITY")
    simple_query(s, "INSERT INTO ci_test (name) VALUES ('restart')")
    _, r, _, _ = simple_query(s, "SELECT id FROM ci_test")
    ri_id = int(r[0][0]) if r else 99
    check("RESTART IDENTITY: id=1", ri_id == 1)

    simple_query(s, "DROP TABLE ci_test")

    # ═══════════════════════════════════════════
    print("\n=== Multi-Table TRUNCATE ===")

    simple_query(s, "CREATE TABLE mt1 (id INTEGER PRIMARY KEY, v VARCHAR(50))")
    simple_query(s, "CREATE TABLE mt2 (id INTEGER PRIMARY KEY, v VARCHAR(50))")
    simple_query(s, "CREATE TABLE mt3 (id INTEGER PRIMARY KEY, v VARCHAR(50))")
    for i in range(1, 11):
        simple_query(s, f"INSERT INTO mt1 VALUES ({i}, 'a{i}')")
        simple_query(s, f"INSERT INTO mt2 VALUES ({i}, 'b{i}')")
        simple_query(s, f"INSERT INTO mt3 VALUES ({i}, 'c{i}')")

    _, _, err, _ = simple_query(s, "TRUNCATE TABLE mt1, mt2, mt3")
    check("Multi-table TRUNCATE succeeds", err is None)
    check("mt1 empty", count(s, "mt1") == 0)
    check("mt2 empty", count(s, "mt2") == 0)
    check("mt3 empty", count(s, "mt3") == 0)

    simple_query(s, "DROP TABLE mt3")
    simple_query(s, "DROP TABLE mt2")
    simple_query(s, "DROP TABLE mt1")

    # ═══════════════════════════════════════════
    print("\n=== Sharded Tables ===")

    # SHARD BY HASH
    simple_query(s, "CREATE TABLE trunc_shard_hash (id INTEGER PRIMARY KEY, data VARCHAR(50)) SHARD BY HASH(id) SHARDS 4")
    for i in range(1, 101):
        simple_query(s, f"INSERT INTO trunc_shard_hash VALUES ({i}, 'data{i}')")
    check("Shard hash: 100 rows inserted", count(s, "trunc_shard_hash") == 100)

    _, _, err, _ = simple_query(s, "TRUNCATE TABLE trunc_shard_hash")
    check("TRUNCATE shard hash succeeds", err is None)
    check("Shard hash: count = 0", count(s, "trunc_shard_hash") == 0)

    simple_query(s, f"INSERT INTO trunc_shard_hash VALUES (1, 'new')")
    check("Shard hash: INSERT after TRUNCATE works", count(s, "trunc_shard_hash") == 1)
    _, r, _, _ = simple_query(s, "SELECT data FROM trunc_shard_hash WHERE id = 1")
    check("Shard hash: PK lookup after TRUNCATE", r and r[0][0] == 'new')

    simple_query(s, "DROP TABLE trunc_shard_hash")

    # ═══════════════════════════════════════════
    print("\n=== Distributed Tables ===")

    simple_query(s, "CREATE TABLE trunc_dist (id INTEGER PRIMARY KEY, info VARCHAR(50))")
    for i in range(1, 51):
        simple_query(s, f"INSERT INTO trunc_dist VALUES ({i}, 'info{i}')")
    check("Distributed: 50 rows inserted", count(s, "trunc_dist") == 50)

    _, _, err, _ = simple_query(s, "TRUNCATE TABLE trunc_dist")
    check("TRUNCATE distributed table succeeds", err is None)
    check("Distributed: count = 0", count(s, "trunc_dist") == 0)

    simple_query(s, "INSERT INTO trunc_dist VALUES (1, 'new')")
    check("Distributed: INSERT after TRUNCATE", count(s, "trunc_dist") == 1)

    simple_query(s, "DROP TABLE trunc_dist")

    # ═══════════════════════════════════════════
    print("\n=== Performance (10K rows) ===")

    simple_query(s, "CREATE TABLE trunc_big (id INTEGER PRIMARY KEY, name VARCHAR(50), val INTEGER)")
    # Batch insert 10K rows
    for batch in range(0, 10000, 25):
        vals = ", ".join(f"({i}, 'n{i}', {i*10})" for i in range(batch+1, min(batch+26, 10001)))
        simple_query(s, f"INSERT INTO trunc_big (id, name, val) VALUES {vals}")

    check("Big table: 10K rows inserted", count(s, "trunc_big") == 10000)

    t0 = time.time()
    _, _, err, _ = simple_query(s, "TRUNCATE TABLE trunc_big")
    truncate_ms = (time.time() - t0) * 1000
    check("Big table: TRUNCATE succeeds", err is None)
    check("Big table: count = 0", count(s, "trunc_big") == 0)
    check(f"Big table: TRUNCATE < 500ms (was {truncate_ms:.0f}ms)", truncate_ms < 500)

    # Compare with DELETE speed on same data size
    for batch in range(0, 10000, 25):
        vals = ", ".join(f"({i}, 'n{i}', {i*10})" for i in range(batch+1, min(batch+26, 10001)))
        simple_query(s, f"INSERT INTO trunc_big (id, name, val) VALUES {vals}")

    t0 = time.time()
    simple_query(s, "DELETE FROM trunc_big WHERE id > 0")
    delete_ms = (time.time() - t0) * 1000
    print(f"  INFO: TRUNCATE={truncate_ms:.0f}ms vs DELETE={delete_ms:.0f}ms (TRUNCATE {delete_ms/max(truncate_ms,1):.1f}x faster)")

    simple_query(s, "DROP TABLE trunc_big")

    teardown(s)
    s.close()

if __name__ == "__main__":
    print("=== EvoSQL TRUNCATE TABLE Tests ===")
    run()
    total = PASS + FAIL
    print(f"\nResults: {PASS}/{total} passed, {FAIL} failed")
    sys.exit(1 if FAIL > 0 else 0)
