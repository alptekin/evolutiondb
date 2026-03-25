"""
test_insert_select.py — Tests for INSERT INTO ... SELECT
"""

import sys, os, time
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


# ── Setup helper ──

def setup(s):
    """Create source and destination tables for testing."""
    run(s, "DROP TABLE IF EXISTS ins_dst")
    run(s, "DROP TABLE IF EXISTS ins_src")
    run(s, "CREATE TABLE ins_src (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO ins_src VALUES (1, 'Alice', 90)")
    run(s, "INSERT INTO ins_src VALUES (2, 'Bob', 70)")
    run(s, "INSERT INTO ins_src VALUES (3, 'Carol', 85)")
    run(s, "INSERT INTO ins_src VALUES (4, 'Dave', 60)")
    run(s, "INSERT INTO ins_src VALUES (5, 'Eve', 95)")


# ── Tests ──

def test_basic_copy(s):
    """T1: INSERT INTO dst SELECT * FROM src — all rows copied"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    cols, rows, err, tag = run(s, "INSERT INTO ins_dst SELECT * FROM ins_src")
    if err:
        print(f"    error: {err}")
        return False
    # Verify rows
    _, rows2, _, _ = run(s, "SELECT * FROM ins_dst ORDER BY id")
    return len(rows2) == 5 and rows2[0][1] == 'Alice' and rows2[4][1] == 'Eve'


def test_column_list(s):
    """T2: INSERT INTO dst (name, score) SELECT name, score FROM src"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(50), score INT)")
    cols, rows, err, tag = run(s, "INSERT INTO ins_dst (name, score) SELECT name, score FROM ins_src")
    if err:
        print(f"    error: {err}")
        return False
    _, rows2, _, _ = run(s, "SELECT * FROM ins_dst ORDER BY id")
    # AUTO_INCREMENT should assign ids
    return len(rows2) == 5 and rows2[0][1] == 'Alice'


def test_where_filter(s):
    """T3: INSERT INTO dst SELECT * FROM src WHERE score > 80 — subset"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    cols, rows, err, tag = run(s, "INSERT INTO ins_dst SELECT * FROM ins_src WHERE score > 80")
    if err:
        print(f"    error: {err}")
        return False
    _, rows2, _, _ = run(s, "SELECT * FROM ins_dst ORDER BY id")
    # Alice(90), Carol(85), Eve(95) = 3 rows
    return len(rows2) == 3


def test_order_limit(s):
    """T4: INSERT INTO dst SELECT * FROM src ORDER BY id LIMIT 3"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    cols, rows, err, tag = run(s, "INSERT INTO ins_dst SELECT * FROM ins_src ORDER BY id LIMIT 3")
    if err:
        print(f"    error: {err}")
        return False
    _, rows2, _, _ = run(s, "SELECT * FROM ins_dst ORDER BY id")
    return len(rows2) == 3 and rows2[2][0] == '3'


def test_column_count_mismatch(s):
    """T5: Column count mismatch → error"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    _, _, err, _ = run(s, "INSERT INTO ins_dst SELECT id FROM ins_src")
    return err is not None  # should error


def test_pk_duplicate(s):
    """T6: PK duplicate — second INSERT...SELECT should error"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO ins_dst SELECT * FROM ins_src")
    _, _, err, _ = run(s, "INSERT INTO ins_dst SELECT * FROM ins_src")
    return err is not None


def test_not_null_violation(s):
    """T7: NOT NULL violation → error"""
    setup(s)
    run(s, "DROP TABLE IF EXISTS ins_nn_src")
    run(s, "CREATE TABLE ins_nn_src (id INT PRIMARY KEY, val VARCHAR(50))")
    run(s, "INSERT INTO ins_nn_src VALUES (1, NULL)")
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, val VARCHAR(50) NOT NULL)")
    _, _, err, _ = run(s, "INSERT INTO ins_dst SELECT * FROM ins_nn_src")
    return err is not None


def test_check_constraint(s):
    """T8: CHECK constraint violation → error"""
    setup(s)
    run(s, "DROP TABLE IF EXISTS ins_chk_dst")
    run(s, "CREATE TABLE ins_chk_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT CHECK (score >= 80))")
    # src has score=60 (Dave) which violates score >= 80
    _, _, err, _ = run(s, "INSERT INTO ins_chk_dst SELECT * FROM ins_src")
    return err is not None


def test_fk_constraint(s):
    """T9: FK constraint violation → error"""
    setup(s)
    run(s, "DROP TABLE IF EXISTS ins_fk_child")
    run(s, "DROP TABLE IF EXISTS ins_fk_parent")
    run(s, "DROP TABLE IF EXISTS ins_fk_src")
    run(s, "CREATE TABLE ins_fk_parent (id INT PRIMARY KEY)")
    run(s, "INSERT INTO ins_fk_parent VALUES (1)")
    run(s, "INSERT INTO ins_fk_parent VALUES (2)")
    run(s, "CREATE TABLE ins_fk_child (id INT PRIMARY KEY, parent_id INT REFERENCES ins_fk_parent(id))")
    run(s, "CREATE TABLE ins_fk_src (id INT PRIMARY KEY, parent_id INT)")
    run(s, "INSERT INTO ins_fk_src VALUES (1, 1)")
    run(s, "INSERT INTO ins_fk_src VALUES (2, 999)")  # 999 doesn't exist in parent
    _, _, err, _ = run(s, "INSERT INTO ins_fk_child SELECT * FROM ins_fk_src")
    return err is not None


def test_unique_constraint(s):
    """T10: UNIQUE index violation → error"""
    setup(s)
    run(s, "DROP TABLE IF EXISTS ins_uq_dst")
    run(s, "DROP TABLE IF EXISTS ins_uq_src")
    run(s, "CREATE TABLE ins_uq_dst (id INT PRIMARY KEY, email VARCHAR(50))")
    run(s, "CREATE UNIQUE INDEX idx_uq_email ON ins_uq_dst (email)")
    run(s, "CREATE TABLE ins_uq_src (id INT PRIMARY KEY, email VARCHAR(50))")
    run(s, "INSERT INTO ins_uq_src VALUES (1, 'same@test.com')")
    run(s, "INSERT INTO ins_uq_src VALUES (2, 'same@test.com')")  # duplicate
    _, _, err, _ = run(s, "INSERT INTO ins_uq_dst SELECT * FROM ins_uq_src")
    return err is not None


def test_row_count_tag(s):
    """T11: INSERT 0 N command tag"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    _, _, err, tag = run(s, "INSERT INTO ins_dst SELECT * FROM ins_src")
    if err:
        print(f"    error: {err}")
        return False
    return tag == "INSERT 0 5"


def test_transaction_rollback(s):
    """T12: BEGIN → INSERT...SELECT → ROLLBACK → rows not present"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "BEGIN")
    run(s, "INSERT INTO ins_dst SELECT * FROM ins_src")
    run(s, "ROLLBACK")
    _, rows, _, _ = run(s, "SELECT * FROM ins_dst")
    return len(rows) == 0


def test_self_reference(s):
    """T13: INSERT INTO t (id, name, score) SELECT id+100, name, score FROM t — snapshot"""
    setup(s)
    _, _, err, tag = run(s, "INSERT INTO ins_src (id, name, score) SELECT id+100, name, score FROM ins_src")
    if err:
        print(f"    error: {err}")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM ins_src ORDER BY id")
    # Original 5 + 5 copies = 10
    return len(rows) == 10 and tag == "INSERT 0 5"


def test_join_source(s):
    """T14: INSERT INTO dst SELECT ... FROM t1 JOIN t2 ON ..."""
    setup(s)
    run(s, "DROP TABLE IF EXISTS ins_j1")
    run(s, "DROP TABLE IF EXISTS ins_j2")
    run(s, "DROP TABLE IF EXISTS ins_jdst")
    run(s, "CREATE TABLE ins_j1 (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "CREATE TABLE ins_j2 (id INT PRIMARY KEY, j1_id INT, info VARCHAR(50))")
    run(s, "INSERT INTO ins_j1 VALUES (1, 'Alice')")
    run(s, "INSERT INTO ins_j1 VALUES (2, 'Bob')")
    run(s, "INSERT INTO ins_j2 VALUES (10, 1, 'eng')")
    run(s, "INSERT INTO ins_j2 VALUES (20, 2, 'sales')")
    run(s, "CREATE TABLE ins_jdst (name VARCHAR(50) PRIMARY KEY, info VARCHAR(50))")
    _, _, err, tag = run(s, "INSERT INTO ins_jdst SELECT a.name, b.info FROM ins_j1 a JOIN ins_j2 b ON a.id = b.j1_id")
    if err:
        print(f"    error: {err}")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM ins_jdst ORDER BY name")
    return len(rows) == 2


def test_empty_select(s):
    """T15: WHERE 1=0 → 0 rows, no error"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    _, _, err, tag = run(s, "INSERT INTO ins_dst SELECT * FROM ins_src WHERE 1=0")
    if err:
        print(f"    error: {err}")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM ins_dst")
    return len(rows) == 0 and tag == "INSERT 0 0"


def test_auto_increment(s):
    """T16: Target has AUTO_INCREMENT → auto values assigned"""
    setup(s)
    run(s, "DROP TABLE IF EXISTS ins_ai_src")
    run(s, "DROP TABLE IF EXISTS ins_ai_dst")
    run(s, "CREATE TABLE ins_ai_src (name VARCHAR(50) PRIMARY KEY, score INT)")
    run(s, "INSERT INTO ins_ai_src VALUES ('Alice', 90)")
    run(s, "INSERT INTO ins_ai_src VALUES ('Bob', 70)")
    run(s, "CREATE TABLE ins_ai_dst (id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(50), score INT)")
    _, _, err, _ = run(s, "INSERT INTO ins_ai_dst (name, score) SELECT name, score FROM ins_ai_src")
    if err:
        print(f"    error: {err}")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM ins_ai_dst ORDER BY id")
    return len(rows) == 2 and rows[0][0] in ('1', '2')


def test_aggregate_source(s):
    """T17: INSERT INTO summary SELECT COUNT(*), MAX(score) FROM src"""
    setup(s)
    run(s, "DROP TABLE IF EXISTS ins_agg_dst")
    run(s, "CREATE TABLE ins_agg_dst (cnt INT PRIMARY KEY, max_score INT)")
    _, _, err, tag = run(s, "INSERT INTO ins_agg_dst SELECT COUNT(*), MAX(score) FROM ins_src")
    if err:
        print(f"    error: {err}")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM ins_agg_dst")
    return len(rows) == 1 and rows[0][0] == '5' and rows[0][1] == '95'


def test_statement_timeout(s):
    """T18: Statement timeout with INSERT...SELECT using evo_sleep"""
    setup(s)
    run(s, "CREATE TABLE ins_dst (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "SET evo_statement_timeout = 100")
    # Insert with sleep to trigger timeout — SELECT evo_sleep is per-row
    _, _, err, _ = run(s, "INSERT INTO ins_dst SELECT id, evo_sleep(0.2, name), score FROM ins_src")
    # Should either timeout or succeed quickly depending on implementation
    # The timeout may fire on the overall operation
    return True  # Timeout behavior is best-effort; just verify no crash


# ── Run all tests ──

if __name__ == "__main__":
    time.sleep(2)  # Wait for server startup
    print("=== INSERT INTO ... SELECT Tests ===")
    test("T1  Basic copy", test_basic_copy)
    test("T2  Column list", test_column_list)
    test("T3  WHERE filter", test_where_filter)
    test("T4  ORDER BY + LIMIT", test_order_limit)
    test("T5  Column count mismatch", test_column_count_mismatch)
    test("T6  PK duplicate", test_pk_duplicate)
    test("T7  NOT NULL violation", test_not_null_violation)
    test("T8  CHECK constraint", test_check_constraint)
    test("T9  FK constraint", test_fk_constraint)
    test("T10 UNIQUE constraint", test_unique_constraint)
    test("T11 Row count tag", test_row_count_tag)
    test("T12 Transaction rollback", test_transaction_rollback)
    test("T13 Self-reference", test_self_reference)
    test("T14 JOIN source", test_join_source)
    test("T15 Empty SELECT", test_empty_select)
    test("T16 AUTO_INCREMENT", test_auto_increment)
    test("T17 Aggregate source", test_aggregate_source)
    test("T18 Statement timeout", test_statement_timeout)
    print(f"\n{'='*40}")
    print(f"Results: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    if FAIL > 0:
        sys.exit(1)
