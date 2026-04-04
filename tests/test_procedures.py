"""
test_procedures.py — Tests for Stored Procedures / Functions (Task 74)
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

# --- Setup / Teardown ---

def setup(s):
    run(s, "DROP TABLE IF EXISTS proc_test")
    run(s, "CREATE TABLE proc_test (id INT PRIMARY KEY, name VARCHAR(50), val INT)")
    run(s, "DROP PROCEDURE IF EXISTS test_proc")
    run(s, "DROP PROCEDURE IF EXISTS insert_row")
    run(s, "DROP PROCEDURE IF EXISTS multi_stmt")
    run(s, "DROP PROCEDURE IF EXISTS param_proc")
    run(s, "DROP PROCEDURE IF EXISTS declare_proc")
    run(s, "DROP FUNCTION IF EXISTS add_func")

def teardown(s):
    run(s, "DROP PROCEDURE IF EXISTS test_proc")
    run(s, "DROP PROCEDURE IF EXISTS insert_row")
    run(s, "DROP PROCEDURE IF EXISTS multi_stmt")
    run(s, "DROP PROCEDURE IF EXISTS param_proc")
    run(s, "DROP PROCEDURE IF EXISTS declare_proc")
    run(s, "DROP FUNCTION IF EXISTS add_func")
    run(s, "DROP TABLE IF EXISTS proc_test")

# --- T1: CREATE PROCEDURE basic (no params) ---
def test_create_procedure_basic(s):
    setup(s)
    _, _, err, tag = run(s, """
        CREATE PROCEDURE test_proc() AS
        BEGIN
            INSERT INTO proc_test VALUES (1, 'hello', 10);
        END
    """)
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return tag and 'CREATE PROCEDURE' in tag

# --- T2: CALL procedure (no params) ---
def test_call_procedure_basic(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE test_proc() AS
        BEGIN
            INSERT INTO proc_test VALUES (1, 'hello', 10);
        END
    """)
    _, _, err, tag = run(s, "CALL test_proc()")
    if err: print(f"    call err: {err}"); teardown(s); return False
    _, rows, err2, _ = run(s, "SELECT * FROM proc_test WHERE id = 1")
    teardown(s)
    if err2: print(f"    select err: {err2}"); return False
    return len(rows) == 1 and rows[0][1] == 'hello'

# --- T3: CREATE PROCEDURE with params + CALL with args ---
def test_call_with_params(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE param_proc(p_id INT, p_name VARCHAR(50), p_val INT) AS
        BEGIN
            INSERT INTO proc_test VALUES (p_id, p_name, p_val);
        END
    """)
    _, _, err, _ = run(s, "CALL param_proc(42, 'world', 99)")
    if err: print(f"    call err: {err}"); teardown(s); return False
    _, rows, err2, _ = run(s, "SELECT * FROM proc_test WHERE id = 42")
    teardown(s)
    if err2: print(f"    select err: {err2}"); return False
    return len(rows) == 1 and rows[0][1] == 'world' and rows[0][2] == '99'

# --- T4: DROP PROCEDURE ---
def test_drop_procedure(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE test_proc() AS
        BEGIN
            INSERT INTO proc_test VALUES (1, 'x', 1);
        END
    """)
    _, _, err, tag = run(s, "DROP PROCEDURE test_proc")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return tag and 'DROP PROCEDURE' in tag

# --- T5: DROP PROCEDURE IF EXISTS ---
def test_drop_procedure_if_exists(s):
    setup(s)
    _, _, err, tag = run(s, "DROP PROCEDURE IF EXISTS nonexistent_proc")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return tag and 'DROP PROCEDURE' in tag

# --- T6: Procedure with multiple statements ---
def test_multi_statement_procedure(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE multi_stmt() AS
        BEGIN
            INSERT INTO proc_test VALUES (1, 'first', 10);
            INSERT INTO proc_test VALUES (2, 'second', 20);
            INSERT INTO proc_test VALUES (3, 'third', 30);
        END
    """)
    _, _, err, _ = run(s, "CALL multi_stmt()")
    if err: print(f"    call err: {err}"); teardown(s); return False
    _, rows, err2, _ = run(s, "SELECT * FROM proc_test ORDER BY id")
    teardown(s)
    if err2: print(f"    select err: {err2}"); return False
    return len(rows) == 3

# --- T7: Procedure executing INSERT + UPDATE ---
def test_procedure_insert_update(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE insert_row(p_id INT, p_name VARCHAR(50), p_val INT) AS
        BEGIN
            INSERT INTO proc_test VALUES (p_id, p_name, p_val);
            UPDATE proc_test SET val = 999 WHERE id = p_id;
        END
    """)
    _, _, err, _ = run(s, "CALL insert_row(5, 'updated', 0)")
    if err: print(f"    call err: {err}"); teardown(s); return False
    _, rows, err2, _ = run(s, "SELECT val FROM proc_test WHERE id = 5")
    teardown(s)
    if err2: print(f"    select err: {err2}"); return False
    return len(rows) == 1 and rows[0][0] == '999'

# --- T8: Procedure with DELETE ---
def test_procedure_delete(s):
    setup(s)
    run(s, "INSERT INTO proc_test VALUES (1, 'a', 10)")
    run(s, "INSERT INTO proc_test VALUES (2, 'b', 20)")
    run(s, """
        CREATE PROCEDURE test_proc() AS
        BEGIN
            DELETE FROM proc_test WHERE id = 1;
        END
    """)
    _, _, err, _ = run(s, "CALL test_proc()")
    if err: print(f"    call err: {err}"); teardown(s); return False
    _, rows, err2, _ = run(s, "SELECT * FROM proc_test")
    teardown(s)
    if err2: print(f"    select err: {err2}"); return False
    return len(rows) == 1 and rows[0][0] == '2'

# --- T9: CALL non-existent procedure (error) ---
def test_call_nonexistent(s):
    setup(s)
    _, _, err, _ = run(s, "CALL no_such_proc()")
    teardown(s)
    return err is not None and 'does not exist' in err

# --- T10: CALL with wrong arg count (error) ---
def test_call_wrong_args(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE param_proc(p_id INT) AS
        BEGIN
            INSERT INTO proc_test VALUES (p_id, 'x', 0);
        END
    """)
    _, _, err, _ = run(s, "CALL param_proc(1, 2)")
    teardown(s)
    return err is not None and 'expects' in err

# --- T11: CREATE OR REPLACE PROCEDURE ---
def test_create_or_replace(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE test_proc() AS
        BEGIN
            INSERT INTO proc_test VALUES (1, 'v1', 10);
        END
    """)
    run(s, """
        CREATE OR REPLACE PROCEDURE test_proc() AS
        BEGIN
            INSERT INTO proc_test VALUES (1, 'v2', 20);
        END
    """)
    _, _, err, _ = run(s, "CALL test_proc()")
    if err: print(f"    call err: {err}"); teardown(s); return False
    _, rows, err2, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err2: print(f"    select err: {err2}"); return False
    return len(rows) == 1 and rows[0][0] == 'v2'

# --- T12: CREATE PROCEDURE already exists (error) ---
def test_duplicate_procedure(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE test_proc() AS
        BEGIN
            INSERT INTO proc_test VALUES (1, 'x', 1);
        END
    """)
    _, _, err, _ = run(s, """
        CREATE PROCEDURE test_proc() AS
        BEGIN
            INSERT INTO proc_test VALUES (2, 'y', 2);
        END
    """)
    teardown(s)
    return err is not None and 'already exists' in err

# --- T13: CREATE FUNCTION with RETURNS ---
def test_create_function(s):
    setup(s)
    _, _, err, tag = run(s, """
        CREATE FUNCTION add_func(a INT, b INT) RETURNS INT AS
        BEGIN
            RETURN a + b;
        END
    """)
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return tag and 'CREATE FUNCTION' in tag

# --- T14: DECLARE + SET local variable ---
def test_declare_set(s):
    setup(s)
    run(s, """
        CREATE PROCEDURE declare_proc(p_id INT) AS
        BEGIN
            DECLARE v_name VARCHAR DEFAULT 'declared';
            INSERT INTO proc_test VALUES (p_id, v_name, 0);
        END
    """)
    _, _, err, _ = run(s, "CALL declare_proc(77)")
    if err: print(f"    call err: {err}"); teardown(s); return False
    _, rows, err2, _ = run(s, "SELECT name FROM proc_test WHERE id = 77")
    teardown(s)
    if err2: print(f"    select err: {err2}"); return False
    return len(rows) == 1 and rows[0][0] == 'declared'

# --- T15: Procedure without AS keyword ---
def test_procedure_without_as(s):
    setup(s)
    _, _, err, tag = run(s, """
        CREATE PROCEDURE test_proc()
        BEGIN
            INSERT INTO proc_test VALUES (1, 'noAS', 10);
        END
    """)
    if err: print(f"    err: {err}"); teardown(s); return False
    _, _, err2, _ = run(s, "CALL test_proc()")
    if err2: print(f"    call err: {err2}"); teardown(s); return False
    _, rows, err3, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err3: print(f"    select err: {err3}"); return False
    return len(rows) == 1 and rows[0][0] == 'noAS'


# ================================================================
#  T16-T48: Control Flow, SELECT INTO, Cursors, Handlers, FOREACH
# ================================================================

# --- T16: IF true → body executes ---
def test_if_true(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc(p_val INT) AS BEGIN
        IF p_val > 0 THEN INSERT INTO proc_test VALUES (1, 'yes', p_val); END IF;
    END""")
    run(s, "CALL test_proc(5)")
    _, rows, err, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'yes'

# --- T17: IF false → body skipped ---
def test_if_false(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc(p_val INT) AS BEGIN
        IF p_val > 100 THEN INSERT INTO proc_test VALUES (1, 'no', p_val); END IF;
    END""")
    run(s, "CALL test_proc(5)")
    _, rows, _, _ = run(s, "SELECT * FROM proc_test")
    teardown(s)
    return len(rows) == 0

# --- T18: IF...ELSE ---
def test_if_else(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc(p_val INT) AS BEGIN
        IF p_val > 10 THEN
            INSERT INTO proc_test VALUES (1, 'big', p_val);
        ELSE
            INSERT INTO proc_test VALUES (1, 'small', p_val);
        END IF;
    END""")
    run(s, "CALL test_proc(5)")
    _, rows, err, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'small'

# --- T19: IF...ELSEIF...ELSE ---
def test_if_elseif_else(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc(p_val INT) AS BEGIN
        IF p_val > 100 THEN
            INSERT INTO proc_test VALUES (1, 'huge', p_val);
        ELSEIF p_val > 10 THEN
            INSERT INTO proc_test VALUES (1, 'big', p_val);
        ELSE
            INSERT INTO proc_test VALUES (1, 'small', p_val);
        END IF;
    END""")
    run(s, "CALL test_proc(50)")
    _, rows, err, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'big'

# --- T20: Nested IF ---
def test_nested_if(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc(p_a INT, p_b INT) AS BEGIN
        IF p_a > 0 THEN
            IF p_b > 0 THEN
                INSERT INTO proc_test VALUES (1, 'both', p_a);
            ELSE
                INSERT INTO proc_test VALUES (1, 'a_only', p_a);
            END IF;
        END IF;
    END""")
    run(s, "CALL test_proc(1, 1)")
    _, rows, err, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'both'

# --- T21: WHILE loop count 1→5 ---
def test_while_count(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE i INT DEFAULT 1;
        WHILE i <= 5 DO
            INSERT INTO proc_test VALUES (i, 'row', i);
            SET i = i + 1;
        END WHILE;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT * FROM proc_test ORDER BY id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 5

# --- T22: WHILE false initially ---
def test_while_zero(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE i INT DEFAULT 10;
        WHILE i < 5 DO
            INSERT INTO proc_test VALUES (i, 'x', i);
            SET i = i + 1;
        END WHILE;
    END""")
    run(s, "CALL test_proc()")
    _, rows, _, _ = run(s, "SELECT * FROM proc_test")
    teardown(s)
    return len(rows) == 0

# --- T23: WHILE with multiple INSERTs ---
def test_while_update(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE i INT DEFAULT 1;
        WHILE i <= 3 DO
            INSERT INTO proc_test VALUES (i, 'w', i);
            SET i = i + 1;
        END WHILE;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT * FROM proc_test ORDER BY id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3 and rows[2][0] == '3'

# --- T24: LOOP + LEAVE ---
def test_loop_leave(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE i INT DEFAULT 1;
        LOOP
            IF i > 3 THEN LEAVE; END IF;
            INSERT INTO proc_test VALUES (i, 'loop', i);
            SET i = i + 1;
        END LOOP;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT * FROM proc_test ORDER BY id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

# --- T25: LOOP + ITERATE ---
def test_loop_iterate(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE i INT DEFAULT 0;
        LOOP
            SET i = i + 1;
            IF i > 6 THEN LEAVE; END IF;
            IF i <= 3 THEN ITERATE; END IF;
            INSERT INTO proc_test VALUES (i, 'iter', i);
        END LOOP;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT * FROM proc_test ORDER BY id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3 and rows[0][0] == '4'

# --- T26: FOR loop 1..5 ---
def test_for_loop(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        FOR i IN 1..5 DO
            INSERT INTO proc_test VALUES (i, 'for', i);
        END FOR;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT * FROM proc_test ORDER BY id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 5

# --- T27: SELECT INTO variable ---
def test_select_into(s):
    setup(s)
    run(s, "INSERT INTO proc_test VALUES (1, 'hello', 42)")
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE v_count INT DEFAULT 0;
        SELECT COUNT(*) INTO v_count FROM proc_test;
        INSERT INTO proc_test VALUES (2, 'count', v_count);
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT val FROM proc_test WHERE id = 2")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1'

# --- T28: SET var = expression ---
def test_set_expression(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc(p_a INT, p_b INT) AS BEGIN
        DECLARE result INT DEFAULT 0;
        SET result = p_a + p_b * 3;
        INSERT INTO proc_test VALUES (1, 'calc', result);
    END""")
    run(s, "CALL test_proc(10, 5)")
    _, rows, err, _ = run(s, "SELECT val FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '25'

# --- T29: RETURN function value ---
def test_return_value(s):
    setup(s)
    run(s, """CREATE FUNCTION add_func(a INT, b INT) RETURNS INT AS BEGIN
        RETURN a + b;
    END""")
    _, rows, err, _ = run(s, "CALL add_func(10, 20)")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '30'

# --- T30: Nested CALL ---
def test_nested_call(s):
    setup(s)
    run(s, """CREATE PROCEDURE inner_proc(p_id INT) AS BEGIN
        INSERT INTO proc_test VALUES (p_id, 'inner', p_id);
    END""")
    run(s, """CREATE PROCEDURE outer_proc() AS BEGIN
        CALL inner_proc(1);
        CALL inner_proc(2);
    END""")
    run(s, "CALL outer_proc()")
    _, rows, err, _ = run(s, "SELECT * FROM proc_test ORDER BY id")
    run(s, "DROP PROCEDURE IF EXISTS inner_proc")
    run(s, "DROP PROCEDURE IF EXISTS outer_proc")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2

# --- T31: FOREACH single-col ---
def test_foreach_single(s):
    setup(s)
    run(s, "INSERT INTO proc_test VALUES (1, 'a', 10)")
    run(s, "INSERT INTO proc_test VALUES (2, 'b', 20)")
    run(s, "INSERT INTO proc_test VALUES (3, 'c', 30)")
    run(s, "DROP TABLE IF EXISTS proc_result")
    run(s, "CREATE TABLE proc_result (id INT PRIMARY KEY, val INT)")
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        FOREACH v_val IN (SELECT val FROM proc_test) DO
            INSERT INTO proc_result VALUES (v_val, v_val);
        END FOREACH;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT * FROM proc_result ORDER BY id")
    run(s, "DROP TABLE IF EXISTS proc_result")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

# --- T32: WHILE + SELECT INTO + IF combined ---
def test_combined_while_select_if(s):
    setup(s)
    run(s, "INSERT INTO proc_test VALUES (1, 'x', 5)")
    run(s, "INSERT INTO proc_test VALUES (2, 'x', 15)")
    run(s, "INSERT INTO proc_test VALUES (3, 'x', 25)")
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE v_total INT DEFAULT 0;
        DECLARE i INT DEFAULT 1;
        WHILE i <= 3 DO
            DECLARE v_val INT DEFAULT 0;
            SELECT val INTO v_val FROM proc_test WHERE id = i;
            IF v_val > 10 THEN
                SET v_total = v_total + v_val;
            END IF;
            SET i = i + 1;
        END WHILE;
        UPDATE proc_test SET val = v_total WHERE id = 1;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT val FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '40'

# --- T33: DECLARE CURSOR + FETCH + CLOSE ---
def test_cursor_basic(s):
    setup(s)
    run(s, "INSERT INTO proc_test VALUES (1, 'a', 10)")
    run(s, "INSERT INTO proc_test VALUES (2, 'b', 20)")
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE v_id INT DEFAULT 0;
        DECLARE v_name VARCHAR(50) DEFAULT '';
        DECLARE cur CURSOR FOR SELECT id, name FROM proc_test ORDER BY id;
        OPEN cur;
        FETCH cur INTO v_id, v_name;
        UPDATE proc_test SET name = 'fetched' WHERE id = v_id;
        CLOSE cur;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'fetched'

# --- T34: CONTINUE HANDLER FOR NOT FOUND ---
def test_handler_not_found(s):
    setup(s)
    run(s, "INSERT INTO proc_test VALUES (1, 'a', 10)")
    run(s, "INSERT INTO proc_test VALUES (2, 'b', 20)")
    run(s, "DROP TABLE IF EXISTS proc_result")
    run(s, "CREATE TABLE proc_result (total INT)")
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE v_val INT DEFAULT 0;
        DECLARE v_total INT DEFAULT 0;
        DECLARE done INT DEFAULT 0;
        DECLARE cur CURSOR FOR SELECT val FROM proc_test;
        DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;
        OPEN cur;
        LOOP
            FETCH cur INTO v_val;
            IF done = 1 THEN LEAVE; END IF;
            SET v_total = v_total + v_val;
        END LOOP;
        CLOSE cur;
        INSERT INTO proc_result VALUES (v_total);
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT total FROM proc_result")
    run(s, "DROP TABLE IF EXISTS proc_result")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '30'

# --- T35: Simple CASE WHEN ---
def test_case_simple(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc(p_val INT) AS BEGIN
        CASE p_val
            WHEN 1 THEN INSERT INTO proc_test VALUES (1, 'one', 1);
            WHEN 2 THEN INSERT INTO proc_test VALUES (2, 'two', 2);
            ELSE INSERT INTO proc_test VALUES (p_val, 'other', p_val);
        END CASE;
    END""")
    run(s, "CALL test_proc(2)")
    _, rows, err, _ = run(s, "SELECT name FROM proc_test WHERE id = 2")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'two'

# --- T36: Searched CASE WHEN ---
def test_case_searched(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc(p_val INT) AS BEGIN
        CASE
            WHEN p_val > 100 THEN INSERT INTO proc_test VALUES (1, 'big', p_val);
            WHEN p_val > 10 THEN INSERT INTO proc_test VALUES (1, 'mid', p_val);
            ELSE INSERT INTO proc_test VALUES (1, 'small', p_val);
        END CASE;
    END""")
    run(s, "CALL test_proc(50)")
    _, rows, err, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'mid'

# --- T37: OUT parameter ---
def test_out_param(s):
    setup(s)
    run(s, "SET @result = 0")
    run(s, """CREATE PROCEDURE test_proc(IN p_a INT, IN p_b INT, OUT p_result INT) AS BEGIN
        SET p_result = p_a + p_b;
    END""")
    run(s, "CALL test_proc(10, 20, @result)")
    _, rows, err, _ = run(s, "SELECT @result")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '30'

# --- T38: INOUT parameter ---
def test_inout_param(s):
    setup(s)
    run(s, "SET @val = 10")
    run(s, """CREATE PROCEDURE test_proc(INOUT p_val INT) AS BEGIN
        SET p_val = p_val + 5;
    END""")
    run(s, "CALL test_proc(@val)")
    _, rows, err, _ = run(s, "SELECT @val")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '15'

# --- T39: EXECUTE dynamic SQL ---
def test_execute_dynamic(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        DECLARE v_sql VARCHAR(200) DEFAULT 'INSERT INTO proc_test VALUES (1, ''dynamic'', 42)';
        EXECUTE v_sql;
    END""")
    run(s, "CALL test_proc()")
    _, rows, err, _ = run(s, "SELECT name FROM proc_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'dynamic'

# --- T40: SIGNAL basic ---
def test_signal_basic(s):
    setup(s)
    run(s, """CREATE PROCEDURE test_proc() AS BEGIN
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Custom error';
    END""")
    _, _, err, _ = run(s, "CALL test_proc()")
    teardown(s)
    return err is not None and '45000' in err


# --- Run all tests ---
if __name__ == "__main__":
    print("=== Stored Procedures / Functions (Task 74 + 74b) ===")
    test("T01 CREATE PROCEDURE basic", test_create_procedure_basic)
    test("T02 CALL procedure basic", test_call_procedure_basic)
    test("T03 CALL with params", test_call_with_params)
    test("T04 DROP PROCEDURE", test_drop_procedure)
    test("T05 DROP PROCEDURE IF EXISTS", test_drop_procedure_if_exists)
    test("T06 Multi-statement procedure", test_multi_statement_procedure)
    test("T07 Procedure INSERT + UPDATE", test_procedure_insert_update)
    test("T08 Procedure DELETE", test_procedure_delete)
    test("T09 CALL non-existent (error)", test_call_nonexistent)
    test("T10 CALL wrong arg count (error)", test_call_wrong_args)
    test("T11 CREATE OR REPLACE PROCEDURE", test_create_or_replace)
    test("T12 Duplicate PROCEDURE (error)", test_duplicate_procedure)
    test("T13 CREATE FUNCTION with RETURNS", test_create_function)
    test("T14 DECLARE + SET variable", test_declare_set)
    test("T15 PROCEDURE without AS keyword", test_procedure_without_as)
    print("--- Control Flow ---")
    test("T16 IF true", test_if_true)
    test("T17 IF false", test_if_false)
    test("T18 IF...ELSE", test_if_else)
    test("T19 IF...ELSEIF...ELSE", test_if_elseif_else)
    test("T20 Nested IF", test_nested_if)
    test("T21 WHILE count 1-5", test_while_count)
    test("T22 WHILE zero iterations", test_while_zero)
    test("T23 WHILE + UPDATE", test_while_update)
    test("T24 LOOP + LEAVE", test_loop_leave)
    test("T25 LOOP + ITERATE", test_loop_iterate)
    test("T26 FOR loop 1..5", test_for_loop)
    print("--- SELECT INTO / SET expr / RETURN ---")
    test("T27 SELECT INTO var", test_select_into)
    test("T28 SET expression", test_set_expression)
    test("T29 RETURN function value", test_return_value)
    test("T30 Nested CALL", test_nested_call)
    print("--- FOREACH / Cursor / Handler ---")
    test("T31 FOREACH single-col", test_foreach_single)
    test("T32 WHILE+SELECT INTO+IF combined", test_combined_while_select_if)
    test("T33 CURSOR basic", test_cursor_basic)
    test("T34 HANDLER NOT FOUND", test_handler_not_found)
    print("--- CASE / Labels / OUT / REPEAT / EXECUTE / SIGNAL ---")
    test("T35 Simple CASE WHEN", test_case_simple)
    test("T36 Searched CASE WHEN", test_case_searched)
    test("T37 OUT parameter", test_out_param)
    test("T38 INOUT parameter", test_inout_param)
    test("T39 EXECUTE dynamic SQL", test_execute_dynamic)
    test("T40 SIGNAL basic", test_signal_basic)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
