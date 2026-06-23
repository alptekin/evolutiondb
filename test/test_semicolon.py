#!/usr/bin/env python3
"""Tests for semicolon-safe storage (Task 81):
   Verify that semicolons in user data do not corrupt records."""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

passed = 0
failed = 0

def check(name, cond):
    global passed, failed
    if cond:
        print(f"  PASS: {name}")
        passed += 1
    else:
        print(f"  FAIL: {name}")
        failed += 1

s = conn()

# Setup
simple_query(s, "DROP TABLE IF EXISTS test_semi")
simple_query(s, """CREATE TABLE test_semi (
    id INT PRIMARY KEY,
    name VARCHAR(200),
    description VARCHAR(500)
)""")

# ── Normal Tests ──

print("Normal tests:")

# 1. Single semicolon in value
simple_query(s, "INSERT INTO test_semi VALUES (1, 'hello;world', 'desc1')")
cols, rows, err, _ = simple_query(s, "SELECT name FROM test_semi WHERE id = 1")
check("Single semicolon in VARCHAR", err is None and len(rows) == 1 and rows[0][0] == "hello;world")

# 2. Multiple semicolons in one field
simple_query(s, "INSERT INTO test_semi VALUES (2, 'a;b;c;d;e', 'multi;semi')")
cols, rows, err, _ = simple_query(s, "SELECT name, description FROM test_semi WHERE id = 2")
check("Multiple semicolons in field", err is None and len(rows) == 1 and rows[0][0] == "a;b;c;d;e" and rows[0][1] == "multi;semi")

# 3. Semicolons in different column positions
simple_query(s, "INSERT INTO test_semi VALUES (3, 'normal', 'desc;with;semis')")
cols, rows, err, _ = simple_query(s, "SELECT description FROM test_semi WHERE id = 3")
check("Semicolon in last column", err is None and len(rows) == 1 and rows[0][0] == "desc;with;semis")

# 4. Multi-row INSERT with semicolons
simple_query(s, "INSERT INTO test_semi VALUES (4, 'row4;val', 'd4'), (5, 'row5;val', 'd5;x')")
cols, rows, err, _ = simple_query(s, "SELECT name, description FROM test_semi WHERE id >= 4 AND id <= 5 ORDER BY id")
check("Multi-row INSERT with semicolons",
      err is None and len(rows) == 2
      and rows[0][0] == "row4;val" and rows[1][0] == "row5;val"
      and rows[1][1] == "d5;x")

# 5. INSERT with column list (column map)
simple_query(s, "INSERT INTO test_semi (id, name) VALUES (6, 'mapped;val')")
cols, rows, err, _ = simple_query(s, "SELECT name FROM test_semi WHERE id = 6")
check("Column-mapped INSERT with semicolon", err is None and len(rows) == 1 and rows[0][0] == "mapped;val")

# ── Edge Case Tests ──

print("\nEdge case tests:")

# 6. Value is exactly a single semicolon
simple_query(s, "INSERT INTO test_semi VALUES (7, ';', 'just semi')")
cols, rows, err, _ = simple_query(s, "SELECT name FROM test_semi WHERE id = 7")
check("Value is single semicolon", err is None and len(rows) == 1 and rows[0][0] == ";")

# 7. Consecutive semicolons
simple_query(s, "INSERT INTO test_semi VALUES (8, ';;;', 'triple')")
cols, rows, err, _ = simple_query(s, "SELECT name FROM test_semi WHERE id = 8")
check("Consecutive semicolons ';;;'", err is None and len(rows) == 1 and rows[0][0] == ";;;")

# 8. Semicolon with quotes and special chars
simple_query(s, "INSERT INTO test_semi VALUES (9, 'it''s;here', 'O''Brien;Jr')")
cols, rows, err, _ = simple_query(s, "SELECT name, description FROM test_semi WHERE id = 9")
check("Semicolon with escaped quotes",
      err is None and len(rows) == 1
      and "s;here" in rows[0][0] and "Brien;Jr" in rows[0][1])

# ── Error / Integration Tests ──

print("\nIntegration tests:")

# 9. Column count should not be affected by semicolons
cols, rows, err, _ = simple_query(s, "SELECT * FROM test_semi WHERE id = 1")
check("No column count mismatch (3 cols)", err is None and len(rows) == 1 and len(rows[0]) == 3)

# 10. UPDATE SET with semicolon value
simple_query(s, "UPDATE test_semi SET name = 'updated;value' WHERE id = 1")
cols, rows, err, _ = simple_query(s, "SELECT name FROM test_semi WHERE id = 1")
check("UPDATE with semicolon in new value", err is None and len(rows) == 1 and rows[0][0] == "updated;value")

# 11. DELETE after inserting semicolon data
simple_query(s, "DELETE FROM test_semi WHERE id = 7")
cols, rows, err, _ = simple_query(s, "SELECT * FROM test_semi WHERE id = 7")
check("DELETE row with semicolon data", err is None and len(rows) == 0)

# 12. WHERE filter on semicolon-containing column
cols, rows, err, _ = simple_query(s, "SELECT id FROM test_semi WHERE name = 'a;b;c;d;e'")
check("WHERE filter matches semicolon value", err is None and len(rows) == 1 and rows[0][0] == "2")

# Cleanup
simple_query(s, "DROP TABLE IF EXISTS test_semi")
s.close()

print(f"\n=== Results: {passed} passed, {failed} failed ===")
sys.exit(0 if failed == 0 else 1)
