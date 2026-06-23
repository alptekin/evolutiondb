"""
test_reclaim.py — RECLAIM TABLE (page defragmentation) tests for EvoSQL
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

s = conn()

# Cleanup
run_q(s, "DROP TABLE IF EXISTS reclaim_test")

# ── Test 1: RECLAIM on empty table ──
print("\n=== Test 1: RECLAIM empty table ===")
run_q(s, "CREATE TABLE reclaim_test (id INTEGER PRIMARY KEY, name VARCHAR(50), data VARCHAR(200))")
cols, rows, err, tag = run_q(s, "RECLAIM TABLE reclaim_test")
ok("RECLAIM on empty table succeeds", err is None)

# ── Test 2: Insert rows, delete most, RECLAIM ──
print("\n=== Test 2: Insert 100, delete 80, RECLAIM ===")
for i in range(100):
    run_q(s, f"INSERT INTO reclaim_test VALUES ({i}, 'name_{i}', 'data_padding_{i}_xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx')")

# Verify 100 rows
cols, rows, err, tag = run_q(s, "SELECT COUNT(*) FROM reclaim_test")
ok("100 rows inserted", rows and rows[0][0] == '100')

# Delete 80 rows (keep 0-19)
for i in range(20, 100):
    run_q(s, f"DELETE FROM reclaim_test WHERE id = {i}")

cols, rows, err, tag = run_q(s, "SELECT COUNT(*) FROM reclaim_test")
ok("80 rows deleted, 20 remain", rows and rows[0][0] == '20')

# RECLAIM
cols, rows, err, tag = run_q(s, "RECLAIM TABLE reclaim_test")
ok("RECLAIM after mass delete succeeds", err is None)

# Verify all 20 rows still intact
cols, rows, err, tag = run_q(s, "SELECT COUNT(*) FROM reclaim_test")
ok("20 rows still intact after RECLAIM", rows and rows[0][0] == '20')

# Verify data integrity — check first and last remaining rows
cols, rows, err, tag = run_q(s, "SELECT id, name FROM reclaim_test WHERE id = 0")
ok("Row id=0 data intact", rows and rows[0][0] == '0' and rows[0][1] == 'name_0')

cols, rows, err, tag = run_q(s, "SELECT id, name FROM reclaim_test WHERE id = 19")
ok("Row id=19 data intact", rows and rows[0][0] == '19' and rows[0][1] == 'name_19')

# ── Test 3: SELECT works after RECLAIM ──
print("\n=== Test 3: Full scan after RECLAIM ===")
cols, rows, err, tag = run_q(s, "SELECT id, name FROM reclaim_test ORDER BY id")
ok("Full scan returns 20 rows ordered", len(rows) == 20)
if len(rows) == 20:
    ok("First row is id=0", rows[0][0] == '0')
    ok("Last row is id=19", rows[19][0] == '19')

# ── Test 4: INSERT after RECLAIM ──
print("\n=== Test 4: INSERT after RECLAIM ===")
cols, rows, err, tag = run_q(s, "INSERT INTO reclaim_test VALUES (200, 'new_row', 'after_reclaim')")
ok("INSERT after RECLAIM succeeds", err is None)

cols, rows, err, tag = run_q(s, "SELECT id, name FROM reclaim_test WHERE id = 200")
ok("New row readable after RECLAIM", rows and rows[0][0] == '200' and rows[0][1] == 'new_row')

# ── Test 5: UPDATE after RECLAIM ──
print("\n=== Test 5: UPDATE after RECLAIM ===")
cols, rows, err, tag = run_q(s, "UPDATE reclaim_test SET name = 'updated' WHERE id = 5")
ok("UPDATE after RECLAIM succeeds", err is None)

cols, rows, err, tag = run_q(s, "SELECT name FROM reclaim_test WHERE id = 5")
ok("Updated value correct", rows and rows[0][0] == 'updated')

# ── Test 6: DELETE after RECLAIM ──
print("\n=== Test 6: DELETE after RECLAIM ===")
cols, rows, err, tag = run_q(s, "DELETE FROM reclaim_test WHERE id = 200")
ok("DELETE after RECLAIM succeeds", err is None)

cols, rows, err, tag = run_q(s, "SELECT COUNT(*) FROM reclaim_test")
ok("Row count correct after delete", rows and rows[0][0] == '20')

# ── Test 7: RECLAIM on table with no dead records ──
print("\n=== Test 7: RECLAIM with no dead records ===")
cols, rows, err, tag = run_q(s, "RECLAIM TABLE reclaim_test")
ok("RECLAIM with no dead records succeeds", err is None)

cols, rows, err, tag = run_q(s, "SELECT COUNT(*) FROM reclaim_test")
ok("All rows still intact", rows and rows[0][0] == '20')

# ── Test 8: RECLAIM on non-existent table ──
print("\n=== Test 8: RECLAIM non-existent table ===")
cols, rows, err, tag = run_q(s, "RECLAIM TABLE nonexistent_table")
ok("RECLAIM on non-existent table returns error", err is not None)

# ── Test 9: Multiple RECLAIM cycles ──
print("\n=== Test 9: Multiple RECLAIM cycles ===")
# Delete half, reclaim, delete half again, reclaim
for i in range(10):
    run_q(s, f"DELETE FROM reclaim_test WHERE id = {i}")
run_q(s, "RECLAIM TABLE reclaim_test")

cols, rows, err, tag = run_q(s, "SELECT COUNT(*) FROM reclaim_test")
ok("10 rows after first cycle", rows and rows[0][0] == '10')

for i in range(10, 15):
    run_q(s, f"DELETE FROM reclaim_test WHERE id = {i}")
run_q(s, "RECLAIM TABLE reclaim_test")

cols, rows, err, tag = run_q(s, "SELECT COUNT(*) FROM reclaim_test")
ok("5 rows after second cycle", rows and rows[0][0] == '5')

# Verify data integrity after multiple reclaims
cols, rows, err, tag = run_q(s, "SELECT id FROM reclaim_test ORDER BY id")
ok("Remaining rows are 15-19", len(rows) == 5 and rows[0][0] == '15' and rows[4][0] == '19')

# ── Cleanup ──
run_q(s, "DROP TABLE IF EXISTS reclaim_test")
s.close()

# ── Summary ──
print(f"\n{'='*50}")
print(f"RECLAIM tests: {passed} passed, {failed} failed out of {passed+failed}")
if failed > 0:
    sys.exit(1)
