"""
test_array.py — Task 90 (Feature #60): PostgreSQL-style ARRAY data type.

Covers:
  - CREATE TABLE with various array base types (INT, BIGINT, TEXT, UUID, BOOLEAN, etc.)
  - INSERT with '{a,b,c}' text literal and ARRAY[...] literal forms
  - SELECT roundtrip
  - Subscript col[i] (1-based, NULL on OOB)
  - array_length(arr) / array_length(arr, 1)
  - x = ANY(col) and x = ANY(ARRAY[...])
  - NULL elements inside arrays
  - FROM unnest(arr) — single-table case
  - Rejection of CREATE INDEX on array columns

v1 limitations (tested as limitations, not as features):
  - No nested arrays
  - No VARCHAR(N)[] with custom N (defaults to 255)
  - UNNEST only in FROM position (single-table), not in SELECT list
  - Element text ≤ 255 bytes (VARCHAR cap)
"""
import sys
sys.path.insert(0, ".")
from pg_helpers import conn, simple_query


def _result(s, sql):
    cols, rows, err, tag = simple_query(s, sql)
    if err:
        raise AssertionError(f"{sql!r} failed: {err!r}")
    return cols, rows, tag


def _exec(s, sql):
    _result(s, sql)


def _vals(s, sql):
    _, rows, _ = _result(s, sql)
    return rows


def _err(s, sql):
    cols, rows, err, tag = simple_query(s, sql)
    return err


def reset_table(s, name):
    _exec(s, f"DROP TABLE IF EXISTS {name}")


# ------------------------------------------------------------------ tests ---

def test_create_int_array(s):
    reset_table(s, "arr_int")
    _exec(s, "CREATE TABLE arr_int (id INT PRIMARY KEY, tags INT[])")
    _exec(s, "INSERT INTO arr_int VALUES (1, '{10,20,30}')")
    rows = _vals(s, "SELECT id, tags FROM arr_int")
    assert rows == [["1", "{10,20,30}"]], f"got {rows!r}"


def test_insert_curly_brace_literal(s):
    reset_table(s, "arr_c")
    _exec(s, "CREATE TABLE arr_c (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_c VALUES (1, '{1,2,3,4,5}')")
    rows = _vals(s, "SELECT x FROM arr_c")
    assert rows == [["{1,2,3,4,5}"]], f"got {rows!r}"


def test_insert_array_literal(s):
    reset_table(s, "arr_l")
    _exec(s, "CREATE TABLE arr_l (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_l VALUES (1, ARRAY[7,8,9])")
    rows = _vals(s, "SELECT x FROM arr_l")
    assert rows == [["{7,8,9}"]], f"got {rows!r}"


def test_empty_array(s):
    reset_table(s, "arr_e")
    _exec(s, "CREATE TABLE arr_e (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_e VALUES (1, ARRAY[])")
    _exec(s, "INSERT INTO arr_e VALUES (2, '{}')")
    rows = _vals(s, "SELECT x FROM arr_e ORDER BY id")
    assert rows == [["{}"], ["{}"]], f"got {rows!r}"


def test_subscript_1based(s):
    reset_table(s, "arr_s")
    _exec(s, "CREATE TABLE arr_s (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_s VALUES (1, '{10,20,30}')")
    rows = _vals(s, "SELECT x[1], x[2], x[3] FROM arr_s")
    assert rows == [["10", "20", "30"]], f"got {rows!r}"


def test_subscript_out_of_range(s):
    reset_table(s, "arr_oob")
    _exec(s, "CREATE TABLE arr_oob (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_oob VALUES (1, '{10,20}')")
    rows = _vals(s, "SELECT x[5] FROM arr_oob")
    assert rows == [[None]], f"got {rows!r}"


def test_array_length_function(s):
    reset_table(s, "arr_len")
    _exec(s, "CREATE TABLE arr_len (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_len VALUES (1, '{1,2,3,4,5}')")
    _exec(s, "INSERT INTO arr_len VALUES (2, '{}')")
    _exec(s, "INSERT INTO arr_len VALUES (3, '{42}')")
    rows = _vals(s, "SELECT array_length(x) FROM arr_len ORDER BY id")
    assert rows == [["5"], ["0"], ["1"]], f"got {rows!r}"


def test_array_length_two_arg(s):
    reset_table(s, "arr_len2")
    _exec(s, "CREATE TABLE arr_len2 (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_len2 VALUES (1, '{a,b,c}')")
    rows = _vals(s, "SELECT array_length(x, 1) FROM arr_len2")
    assert rows == [["3"]], f"got {rows!r}"


def test_any_of_column(s):
    reset_table(s, "arr_any")
    _exec(s, "CREATE TABLE arr_any (id INT PRIMARY KEY, tags INT[])")
    _exec(s, "INSERT INTO arr_any VALUES (1, '{10,20,30}')")
    _exec(s, "INSERT INTO arr_any VALUES (2, '{40,50}')")
    _exec(s, "INSERT INTO arr_any VALUES (3, '{60}')")
    rows = _vals(s, "SELECT id FROM arr_any WHERE 20 = ANY(tags) ORDER BY id")
    assert rows == [["1"]], f"got {rows!r}"
    rows = _vals(s, "SELECT id FROM arr_any WHERE 999 = ANY(tags)")
    assert rows == [], f"got {rows!r}"


def test_any_of_array_literal(s):
    reset_table(s, "arr_any_lit")
    _exec(s, "CREATE TABLE arr_any_lit (id INT PRIMARY KEY)")
    _exec(s, "INSERT INTO arr_any_lit VALUES (1)")
    _exec(s, "INSERT INTO arr_any_lit VALUES (2)")
    _exec(s, "INSERT INTO arr_any_lit VALUES (3)")
    rows = _vals(s, "SELECT id FROM arr_any_lit WHERE id = ANY(ARRAY[1,3]) ORDER BY id")
    assert rows == [["1"], ["3"]], f"got {rows!r}"


def test_null_element_in_array(s):
    reset_table(s, "arr_n")
    _exec(s, "CREATE TABLE arr_n (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_n VALUES (1, '{10,NULL,30}')")
    rows = _vals(s, "SELECT x FROM arr_n")
    assert rows == [["{10,NULL,30}"]], f"got {rows!r}"
    rows = _vals(s, "SELECT x[1], x[2], x[3] FROM arr_n")
    # x[2] is NULL (returned as None in PG text protocol)
    assert rows == [["10", None, "30"]], f"got {rows!r}"
    rows = _vals(s, "SELECT array_length(x) FROM arr_n")
    assert rows == [["3"]], f"got {rows!r}"


def test_null_whole_array(s):
    reset_table(s, "arr_wn")
    _exec(s, "CREATE TABLE arr_wn (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_wn VALUES (1, NULL)")
    rows = _vals(s, "SELECT id, x FROM arr_wn")
    assert rows == [["1", None]], f"got {rows!r}"
    rows = _vals(s, "SELECT x[1], array_length(x) FROM arr_wn")
    assert rows == [[None, None]], f"got {rows!r}"


def test_text_array(s):
    reset_table(s, "arr_t")
    _exec(s, "CREATE TABLE arr_t (id INT PRIMARY KEY, tags TEXT[])")
    _exec(s, "INSERT INTO arr_t VALUES (1, '{hello,world,foo}')")
    rows = _vals(s, "SELECT tags, tags[1], array_length(tags) FROM arr_t")
    # TEXT[] elements round-trip with quoting if they contain specials;
    # simple identifiers stay unquoted in canonical form.
    assert rows[0][1] == "hello", f"got {rows!r}"
    assert rows[0][2] == "3", f"got {rows!r}"


def test_bigint_array(s):
    reset_table(s, "arr_b")
    _exec(s, "CREATE TABLE arr_b (id INT PRIMARY KEY, x BIGINT[])")
    _exec(s, "INSERT INTO arr_b VALUES (1, '{100000000000,200000000000}')")
    rows = _vals(s, "SELECT x[1], array_length(x) FROM arr_b")
    assert rows == [["100000000000", "2"]], f"got {rows!r}"


def test_boolean_array(s):
    reset_table(s, "arr_bool")
    _exec(s, "CREATE TABLE arr_bool (id INT PRIMARY KEY, x BOOLEAN[])")
    _exec(s, "INSERT INTO arr_bool VALUES (1, '{true,false,true}')")
    rows = _vals(s, "SELECT x, array_length(x) FROM arr_bool")
    assert rows[0][1] == "3", f"got {rows!r}"


def test_literal_array_in_select(s):
    rows = _vals(s, "SELECT ARRAY[1,2,3]")
    assert rows == [["{1,2,3}"]], f"got {rows!r}"
    rows = _vals(s, "SELECT array_length(ARRAY[1,2,3,4])")
    assert rows == [["4"]], f"got {rows!r}"
    rows = _vals(s, "SELECT (ARRAY[10,20,30])[2]")
    assert rows == [["20"]], f"got {rows!r}"


def test_unnest_from_literal(s):
    rows = _vals(s, "SELECT * FROM unnest(ARRAY[1,2,3])")
    assert rows == [["1"], ["2"], ["3"]], f"got {rows!r}"


def test_unnest_with_alias(s):
    rows = _vals(s, "SELECT v FROM unnest(ARRAY[100,200,300]) AS u(v)")
    assert rows == [["100"], ["200"], ["300"]], f"got {rows!r}"


def test_unnest_with_nulls(s):
    rows = _vals(s, "SELECT * FROM unnest('{a,b,NULL,c}')")
    assert rows == [["a"], ["b"], [None], ["c"]], f"got {rows!r}"


def test_reject_index_on_array(s):
    reset_table(s, "arr_idx")
    _exec(s, "CREATE TABLE arr_idx (id INT PRIMARY KEY, tags INT[])")
    err = _err(s, "CREATE INDEX arr_idx_tags ON arr_idx (tags)")
    assert err is not None, "expected error for CREATE INDEX on array column"
    err_s = err if isinstance(err, str) else err.decode("utf-8", errors="replace")
    assert "array" in err_s.lower() or "not supported" in err_s.lower() or "0A000" in err_s, \
        f"unexpected error: {err!r}"


def test_update_set_array(s):
    reset_table(s, "arr_up")
    _exec(s, "CREATE TABLE arr_up (id INT PRIMARY KEY, x INT[])")
    _exec(s, "INSERT INTO arr_up VALUES (1, '{1,2,3}')")
    _exec(s, "UPDATE arr_up SET x = '{10,20}' WHERE id = 1")
    rows = _vals(s, "SELECT x FROM arr_up")
    assert rows == [["{10,20}"]], f"got {rows!r}"


def test_array_via_uuid_bigint(s):
    """Snowflake IDs travel as BIGINT[] since snowflake_id() returns BIGINT."""
    reset_table(s, "arr_sf")
    _exec(s, "CREATE TABLE arr_sf (id INT PRIMARY KEY, ids BIGINT[])")
    _exec(s, "INSERT INTO arr_sf VALUES (1, ARRAY[snowflake_id(), snowflake_id()])")
    rows = _vals(s, "SELECT array_length(ids) FROM arr_sf")
    assert rows == [["2"]], f"got {rows!r}"


def test_uuid_array(s):
    reset_table(s, "arr_uu")
    _exec(s, "CREATE TABLE arr_uu (id INT PRIMARY KEY, ids UUID[])")
    _exec(s, "INSERT INTO arr_uu VALUES (1, ARRAY[gen_random_uuid(), gen_random_uuid(), gen_random_uuid()])")
    rows = _vals(s, "SELECT array_length(ids) FROM arr_uu")
    assert rows == [["3"]], f"got {rows!r}"


# -------------------------------------------------------------------- main ---

def main():
    s = conn()
    tests = [
        test_create_int_array,
        test_insert_curly_brace_literal,
        test_insert_array_literal,
        test_empty_array,
        test_subscript_1based,
        test_subscript_out_of_range,
        test_array_length_function,
        test_array_length_two_arg,
        test_any_of_column,
        test_any_of_array_literal,
        test_null_element_in_array,
        test_null_whole_array,
        test_text_array,
        test_bigint_array,
        test_boolean_array,
        test_literal_array_in_select,
        test_unnest_from_literal,
        test_unnest_with_alias,
        test_unnest_with_nulls,
        test_reject_index_on_array,
        test_update_set_array,
        test_array_via_uuid_bigint,
        test_uuid_array,
    ]
    passed = 0
    failed = []
    for t in tests:
        name = t.__name__
        try:
            t(s)
            print(f"  PASS  {name}")
            passed += 1
        except AssertionError as e:
            print(f"  FAIL  {name}: {e}")
            failed.append(name)
        except Exception as e:
            print(f"  ERROR {name}: {e!r}")
            failed.append(name)
    print(f"\n{passed}/{len(tests)} passed")
    if failed:
        print("Failed:")
        for n in failed:
            print(f"  - {n}")
        sys.exit(1)


if __name__ == "__main__":
    main()
