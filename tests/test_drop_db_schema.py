"""
test_drop_db_schema.py — Tests for DROP DATABASE / DROP SCHEMA (Task 49)
"""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0

def run(sock, sql):
    return simple_query(sock, sql)

def test(name, fn):
    global PASS, FAIL
    s = conn()
    try:
        ok = fn(s)
        if ok:
            PASS += 1
            print(f"  PASS  {name}")
        else:
            FAIL += 1
            print(f"  FAIL  {name}")
    except Exception as e:
        FAIL += 1
        print(f"  FAIL  {name}: {e}")
    finally:
        s.close()

def test_drop_database_basic(s):
    run(s, "CREATE DATABASE IF NOT EXISTS drop_test_db")
    _, _, err, _ = run(s, "DROP DATABASE drop_test_db")
    return err is None

def test_drop_database_if_exists_found(s):
    run(s, "CREATE DATABASE IF NOT EXISTS drop_test_db2")
    _, _, err, _ = run(s, "DROP DATABASE IF EXISTS drop_test_db2")
    return err is None

def test_drop_database_if_exists_not_found(s):
    _, _, err, _ = run(s, "DROP DATABASE IF EXISTS nonexistent_db_xyz")
    return err is None

def test_drop_current_database_reject(s):
    # The actual catalog database is "evosql", not the connection's "testdb"
    _, _, err, _ = run(s, "DROP DATABASE evosql")
    return err is not None and 'currently open' in err.lower()

def test_drop_database_nonexistent(s):
    _, _, err, _ = run(s, "DROP DATABASE nonexistent_db_abc")
    return err is not None and 'does not exist' in err.lower()

def test_drop_schema_basic(s):
    run(s, "CREATE SCHEMA IF NOT EXISTS drop_test_sch")
    _, _, err, _ = run(s, "DROP SCHEMA drop_test_sch")
    return err is None

def test_drop_schema_if_exists(s):
    _, _, err, _ = run(s, "DROP SCHEMA IF EXISTS nonexistent_schema_xyz")
    return err is None

def test_drop_schema_nonexistent(s):
    _, _, err, _ = run(s, "DROP SCHEMA nonexistent_schema_abc")
    return err is not None and 'does not exist' in err.lower()

if __name__ == "__main__":
    print("=== DROP DATABASE / SCHEMA Tests ===")
    test("T1: DROP DATABASE basic", test_drop_database_basic)
    test("T2: DROP DATABASE IF EXISTS (found)", test_drop_database_if_exists_found)
    test("T3: DROP DATABASE IF EXISTS (not found)", test_drop_database_if_exists_not_found)
    test("T4: DROP current database reject", test_drop_current_database_reject)
    test("T5: DROP DATABASE nonexistent", test_drop_database_nonexistent)
    test("T6: DROP SCHEMA basic", test_drop_schema_basic)
    test("T7: DROP SCHEMA IF EXISTS", test_drop_schema_if_exists)
    test("T8: DROP SCHEMA nonexistent", test_drop_schema_nonexistent)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
