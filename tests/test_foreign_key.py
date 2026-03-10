"""
test_foreign_key.py — FOREIGN KEY constraint tests for EvoSQL

Tests: FK enforcement on INSERT, UPDATE, DELETE with RESTRICT, CASCADE, SET NULL.
"""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

passed = 0
failed = 0

def ok(label, cond):
    global passed, failed
    if cond:
        passed += 1
        print(f"  PASS: {label}")
    else:
        failed += 1
        print(f"  FAIL: {label}")

def run_q(sock, sql):
    return simple_query(sock, sql)

# ── Setup ──
s = conn()

# Clean up from previous runs
run_q(s, "DROP TABLE IF EXISTS order_items")
run_q(s, "DROP TABLE IF EXISTS orders")
run_q(s, "DROP TABLE IF EXISTS employees_cascade")
run_q(s, "DROP TABLE IF EXISTS employees_setnull")
run_q(s, "DROP TABLE IF EXISTS employees")
run_q(s, "DROP TABLE IF EXISTS departments")

# ── Test 1: Create parent and child tables with FK ──
print("\n=== Test 1: CREATE TABLE with FOREIGN KEY ===")
cols, rows, err, tag = run_q(s, """
    CREATE TABLE departments (
        dept_id INTEGER PRIMARY KEY,
        dept_name VARCHAR(50)
    )
""")
ok("Create parent table (departments)", err is None)

cols, rows, err, tag = run_q(s, """
    CREATE TABLE employees (
        emp_id INTEGER PRIMARY KEY,
        emp_name VARCHAR(50),
        dept_id INTEGER,
        FOREIGN KEY (dept_id) REFERENCES departments(dept_id)
    )
""")
ok("Create child table with FK (employees)", err is None)

# ── Test 2: INSERT valid FK value ──
print("\n=== Test 2: INSERT with valid FK ===")
run_q(s, "INSERT INTO departments VALUES (1, 'Engineering')")
run_q(s, "INSERT INTO departments VALUES (2, 'Sales')")

cols, rows, err, tag = run_q(s, "INSERT INTO employees VALUES (101, 'Alice', 1)")
ok("Insert with valid FK (dept_id=1)", err is None)

cols, rows, err, tag = run_q(s, "INSERT INTO employees VALUES (102, 'Bob', 2)")
ok("Insert with valid FK (dept_id=2)", err is None)

# ── Test 3: INSERT invalid FK value → error ──
print("\n=== Test 3: INSERT with invalid FK ===")
cols, rows, err, tag = run_q(s, "INSERT INTO employees VALUES (103, 'Charlie', 999)")
ok("Insert with invalid FK (dept_id=999) rejected", err is not None and "foreign key" in err.lower())

# ── Test 4: INSERT NULL FK value → allowed ──
print("\n=== Test 4: INSERT with NULL FK ===")
cols, rows, err, tag = run_q(s, "INSERT INTO employees VALUES (104, 'Diana', NULL)")
ok("Insert with NULL FK allowed", err is None)

# Verify the data
cols, rows, err, tag = run_q(s, "SELECT emp_id, emp_name, dept_id FROM employees ORDER BY emp_id")
ok("Select employees shows 3 rows", len(rows) == 3)

# ── Test 5: UPDATE FK column to valid value ──
print("\n=== Test 5: UPDATE FK to valid value ===")
cols, rows, err, tag = run_q(s, "UPDATE employees SET dept_id = 2 WHERE emp_id = 101")
ok("Update FK to valid value (dept_id=2)", err is None)

# ── Test 6: UPDATE FK column to invalid value → error ──
print("\n=== Test 6: UPDATE FK to invalid value ===")
cols, rows, err, tag = run_q(s, "UPDATE employees SET dept_id = 999 WHERE emp_id = 101")
ok("Update FK to invalid value (dept_id=999) rejected", err is not None and "foreign key" in err.lower())

# ── Test 7: DELETE parent with RESTRICT (default) → error ──
print("\n=== Test 7: DELETE parent with RESTRICT ===")
# dept_id=2 is referenced by emp 101 (updated above) and emp 102
cols, rows, err, tag = run_q(s, "DELETE FROM departments WHERE dept_id = 2")
ok("Delete referenced parent rejected (RESTRICT)", err is not None and "foreign key" in err.lower())

# Verify department still exists
cols, rows, err, tag = run_q(s, "SELECT dept_id FROM departments WHERE dept_id = 2")
ok("Department 2 still exists after failed delete", len(rows) == 1)

# ── Test 8: DELETE parent with no child references → OK ──
print("\n=== Test 8: DELETE unreferenced parent ===")
run_q(s, "INSERT INTO departments VALUES (3, 'HR')")
cols, rows, err, tag = run_q(s, "DELETE FROM departments WHERE dept_id = 3")
ok("Delete unreferenced parent succeeds", err is None)

# ── Test 9: ON DELETE CASCADE ──
print("\n=== Test 9: ON DELETE CASCADE ===")
run_q(s, "DROP TABLE IF EXISTS employees_cascade")
cols, rows, err, tag = run_q(s, """
    CREATE TABLE employees_cascade (
        emp_id INTEGER PRIMARY KEY,
        emp_name VARCHAR(50),
        dept_id INTEGER,
        FOREIGN KEY (dept_id) REFERENCES departments(dept_id) ON DELETE CASCADE
    )
""")
ok("Create table with ON DELETE CASCADE", err is None)

run_q(s, "INSERT INTO departments VALUES (10, 'Temp Dept')")
run_q(s, "INSERT INTO employees_cascade VALUES (201, 'Eve', 10)")
run_q(s, "INSERT INTO employees_cascade VALUES (202, 'Frank', 10)")

cols, rows, err, tag = run_q(s, "DELETE FROM departments WHERE dept_id = 10")
ok("Delete parent with CASCADE succeeds", err is None)

cols, rows, err, tag = run_q(s, "SELECT emp_id FROM employees_cascade WHERE dept_id = 10")
ok("Child rows deleted by CASCADE", len(rows) == 0)

# ── Test 10: ON DELETE SET NULL ──
print("\n=== Test 10: ON DELETE SET NULL ===")
run_q(s, "DROP TABLE IF EXISTS employees_setnull")
cols, rows, err, tag = run_q(s, """
    CREATE TABLE employees_setnull (
        emp_id INTEGER PRIMARY KEY,
        emp_name VARCHAR(50),
        dept_id INTEGER,
        FOREIGN KEY (dept_id) REFERENCES departments(dept_id) ON DELETE SET NULL
    )
""")
ok("Create table with ON DELETE SET NULL", err is None)

run_q(s, "INSERT INTO departments VALUES (20, 'Set Null Dept')")
run_q(s, "INSERT INTO employees_setnull VALUES (301, 'Grace', 20)")
run_q(s, "INSERT INTO employees_setnull VALUES (302, 'Hank', 20)")

cols, rows, err, tag = run_q(s, "DELETE FROM departments WHERE dept_id = 20")
ok("Delete parent with SET NULL succeeds", err is None)

cols, rows, err, tag = run_q(s, "SELECT emp_id, dept_id FROM employees_setnull ORDER BY emp_id")
ok("Child rows still exist after SET NULL", len(rows) == 2)
if len(rows) == 2:
    ok("Child FK columns set to NULL", rows[0][1] is None and rows[1][1] is None)
else:
    ok("Child FK columns set to NULL", False)

# ── Test 11: FK referencing non-existent table → error ──
print("\n=== Test 11: FK to non-existent table ===")
cols, rows, err, tag = run_q(s, """
    CREATE TABLE bad_fk (
        id INTEGER PRIMARY KEY,
        ref_id INTEGER,
        FOREIGN KEY (ref_id) REFERENCES nonexistent_table(id)
    )
""")
ok("FK to non-existent table rejected", err is not None)

# ── Test 12: Multiple valid inserts then invalid ──
print("\n=== Test 12: Batch insert validation ===")
cols, rows, err, tag = run_q(s, "INSERT INTO employees VALUES (110, 'Batch1', 1)")
ok("Batch valid FK insert 1", err is None)
cols, rows, err, tag = run_q(s, "INSERT INTO employees VALUES (111, 'Batch2', 888)")
ok("Batch invalid FK insert rejected", err is not None and "foreign key" in err.lower())

# ── Cleanup ──
run_q(s, "DROP TABLE IF EXISTS employees_cascade")
run_q(s, "DROP TABLE IF EXISTS employees_setnull")
run_q(s, "DROP TABLE IF EXISTS employees")
run_q(s, "DROP TABLE IF EXISTS departments")

s.close()

# ── Summary ──
print(f"\n{'='*50}")
print(f"FOREIGN KEY tests: {passed} passed, {failed} failed out of {passed+failed}")
if failed > 0:
    sys.exit(1)
