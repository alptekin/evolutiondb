"""
test_index.py — Tests for CREATE INDEX / DROP INDEX (B-tree indexes)
"""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))

from pg_helpers import conn, simple_query

passed = 0
failed = 0

def ok(name):
    global passed
    passed += 1
    print(f"  PASS: {name}")

def fail(name, detail=""):
    global failed
    failed += 1
    print(f"  FAIL: {name} — {detail}")

def setup(s):
    """Drop and recreate test table."""
    simple_query(s, "DROP TABLE idx_test")
    simple_query(s, "CREATE TABLE idx_test (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    simple_query(s, "INSERT INTO idx_test VALUES (1, 'Alice', 90)")
    simple_query(s, "INSERT INTO idx_test VALUES (2, 'Bob', 85)")
    simple_query(s, "INSERT INTO idx_test VALUES (3, 'Charlie', 90)")
    simple_query(s, "INSERT INTO idx_test VALUES (4, 'Diana', 70)")
    simple_query(s, "INSERT INTO idx_test VALUES (5, 'Eve', 85)")

# ------------------------------------------------------------------
print("=== B-tree Index Tests ===")

# Test 1: CREATE INDEX
s = conn()
setup(s)
cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_score ON idx_test(score)")
if err:
    fail("CREATE INDEX", err)
else:
    ok("CREATE INDEX")

# Test 2: CREATE INDEX command tag
if tag == "CREATE INDEX":
    ok("CREATE INDEX command tag")
else:
    fail("CREATE INDEX command tag", f"got '{tag}'")

# Test 3: CREATE INDEX on non-existent table
cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_bad ON no_such_table(col)")
if err:
    ok("CREATE INDEX on non-existent table returns error")
else:
    fail("CREATE INDEX on non-existent table returns error")

# Test 4: CREATE INDEX on non-existent column
cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_bad2 ON idx_test(no_col)")
if err:
    ok("CREATE INDEX on non-existent column returns error")
else:
    fail("CREATE INDEX on non-existent column returns error")

# Test 5: Duplicate index
cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_score2 ON idx_test(score)")
if err:
    ok("Duplicate index on same column returns error")
else:
    fail("Duplicate index on same column returns error")

# Test 6: SELECT still works after index creation
cols, rows, err, tag = simple_query(s, "SELECT * FROM idx_test WHERE score = 90")
if not err and len(rows) == 2:
    names = sorted([r[1] for r in rows])
    if names == ['Alice', 'Charlie']:
        ok("SELECT with WHERE after index creation")
    else:
        fail("SELECT with WHERE after index creation", f"wrong names: {names}")
else:
    fail("SELECT with WHERE after index creation", f"err={err}, rows={len(rows) if rows else 0}")

# Test 7: INSERT updates index
simple_query(s, "INSERT INTO idx_test VALUES (6, 'Frank', 90)")
cols, rows, err, tag = simple_query(s, "SELECT * FROM idx_test WHERE score = 90")
if not err and len(rows) == 3:
    ok("INSERT updates index (new row visible in WHERE)")
else:
    fail("INSERT updates index", f"err={err}, rows={len(rows) if rows else 0}")

# Test 8: DELETE updates index
simple_query(s, "DELETE FROM idx_test WHERE id = 1")
cols, rows, err, tag = simple_query(s, "SELECT * FROM idx_test WHERE score = 90")
if not err and len(rows) == 2:
    ok("DELETE updates index")
else:
    fail("DELETE updates index", f"err={err}, rows={len(rows) if rows else 0}")

# Test 9: UPDATE updates index
simple_query(s, "UPDATE idx_test SET score = 99 WHERE id = 3")
cols, rows, err, tag = simple_query(s, "SELECT * FROM idx_test WHERE score = 90")
if not err and len(rows) == 1:
    ok("UPDATE updates index (old value removed)")
else:
    fail("UPDATE updates index", f"err={err}, rows={len(rows) if rows else 0}")

cols, rows, err, tag = simple_query(s, "SELECT * FROM idx_test WHERE score = 99")
if not err and len(rows) == 1 and rows[0][1] == 'Charlie':
    ok("UPDATE updates index (new value findable)")
else:
    fail("UPDATE updates index (new value)", f"err={err}, rows={rows}")

# Test 10: DROP INDEX
cols, rows, err, tag = simple_query(s, "DROP INDEX idx_score")
if err:
    fail("DROP INDEX", err)
else:
    ok("DROP INDEX")

if tag == "DROP INDEX":
    ok("DROP INDEX command tag")
else:
    fail("DROP INDEX command tag", f"got '{tag}'")

# Test 11: DROP INDEX non-existent
cols, rows, err, tag = simple_query(s, "DROP INDEX no_such_index")
if err:
    ok("DROP non-existent INDEX returns error")
else:
    fail("DROP non-existent INDEX returns error")

# Test 12: SELECT still works after DROP INDEX
cols, rows, err, tag = simple_query(s, "SELECT * FROM idx_test WHERE score = 85")
if not err and len(rows) >= 1:
    ok("SELECT works after DROP INDEX")
else:
    fail("SELECT works after DROP INDEX", f"err={err}, rows={rows}")

# Test 13: CREATE INDEX on name column
cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_name ON idx_test(name)")
if not err:
    ok("CREATE INDEX on VARCHAR column")
else:
    fail("CREATE INDEX on VARCHAR column", err)

# Test 14: DROP TABLE removes indexes
simple_query(s, "DROP TABLE idx_test")
# The .indexes and .evo files should be gone — verify by creating a
# new table with same name and creating an index (no conflict)
simple_query(s, "CREATE TABLE idx_test (id INT PRIMARY KEY, name VARCHAR(50))")
cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_name ON idx_test(name)")
if not err:
    ok("DROP TABLE cleans up indexes (no conflict on re-create)")
else:
    fail("DROP TABLE cleans up indexes", err)

# Cleanup
simple_query(s, "DROP TABLE idx_test")
s.close()

# ------------------------------------------------------------------
print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
if failed:
    sys.exit(1)
