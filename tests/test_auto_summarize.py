"""
test_auto_summarize.py — Task 214 (Feature #214) tests.

Covers:
  - token_length(text) counts whitespace-separated chunks
  - token_length(NULL) returns NULL
  - token_length('') returns 0
  - Multiple whitespace runs collapsed
  - evo_call_external returns deterministic "ext:<name>:<arg>" stub
  - evo_call_external with NULL name returns NULL
  - Helpers compose inside expressions (token_length used in WHERE)
  - SUM(token_length(col)) aggregate works across rows
  - Pattern: insert → check sum → call evo_call_external manually
  - Pattern: insert + delete cycle representing summarization
"""
import os
import sys

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query


PASS = 0
FAIL = 0


def run(name, fn):
    global PASS, FAIL
    try:
        fn()
        print(f"  PASS: {name}")
        PASS += 1
    except Exception as e:
        print(f"  FAIL: {name} - {e}")
        FAIL += 1


# ─── 1. token_length basic counts ───
def test_token_length_basic():
    s = conn()
    _, rows, _, _ = simple_query(s, "SELECT token_length('hello')")
    assert rows[0][0] == "1", f"single word: {rows}"
    _, rows, _, _ = simple_query(s, "SELECT token_length('one two three')")
    assert rows[0][0] == "3", f"three words: {rows}"


# ─── 2. token_length NULL → NULL ───
def test_token_length_null():
    s = conn()
    _, rows, _, _ = simple_query(s, "SELECT token_length(NULL)")
    assert rows[0][0] is None, f"null: {rows}"


# ─── 3. token_length empty string → 0 ───
def test_token_length_empty():
    s = conn()
    _, rows, _, _ = simple_query(s, "SELECT token_length('')")
    assert rows[0][0] == "0", f"empty: {rows}"


# ─── 4. Multiple whitespace runs collapsed ───
def test_token_length_collapsed_ws():
    s = conn()
    _, rows, _, _ = simple_query(s, "SELECT token_length('  a   b   c  ')")
    assert rows[0][0] == "3", f"collapsed: {rows}"


# ─── 5. evo_call_external returns stub format ───
def test_call_external_basic():
    s = conn()
    _, rows, _, _ = simple_query(s,
        "SELECT evo_call_external('summarize', 'long thread')")
    assert rows[0][0] == "ext:summarize:long thread", f"stub: {rows}"


# ─── 6. evo_call_external NULL name → NULL ───
def test_call_external_null_name():
    s = conn()
    _, rows, _, _ = simple_query(s,
        "SELECT evo_call_external(NULL, 'msg')")
    assert rows[0][0] is None, f"null name: {rows}"


# ─── 7. token_length composes in WHERE ───
def test_token_length_in_where():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS chat_t7")
    simple_query(s, "CREATE TABLE chat_t7 (id INT PRIMARY KEY, msg VARCHAR(255))")
    simple_query(s, "INSERT INTO chat_t7 VALUES (1, 'hi')")
    simple_query(s, "INSERT INTO chat_t7 VALUES (2, 'this has more words')")
    _, rows, _, _ = simple_query(s,
        "SELECT id FROM chat_t7 WHERE token_length(msg) > 2")
    ids = sorted(int(r[0]) for r in rows)
    assert ids == [2], f"where filter: {ids}"


# ─── 8. SUM(token_length) aggregates ───
def test_token_length_sum():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS chat_t8")
    simple_query(s, "CREATE TABLE chat_t8 (id INT PRIMARY KEY, msg VARCHAR(255))")
    simple_query(s, "INSERT INTO chat_t8 VALUES (1, 'one two')")
    simple_query(s, "INSERT INTO chat_t8 VALUES (2, 'three four five')")
    _, rows, _, _ = simple_query(s,
        "SELECT SUM(token_length(msg)) FROM chat_t8")
    assert int(rows[0][0]) == 5, f"sum: {rows}"


# ─── 9. Summarization pattern: detect-over-budget ───
def test_summarize_pattern_detect():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS chat_t9")
    simple_query(s, "CREATE TABLE chat_t9 (id INT PRIMARY KEY, msg VARCHAR(255))")
    for i in range(5):
        simple_query(s, f"INSERT INTO chat_t9 VALUES ({i}, 'a b c d e f g h')")
    _, rows, _, _ = simple_query(s,
        "SELECT SUM(token_length(msg)) FROM chat_t9")
    total = int(rows[0][0])
    assert total == 40, f"total tokens: {total}"
    # Caller would compare against threshold here; the SQL surface
    # makes that one comparison instead of a per-row Python loop.


# ─── 10. Summarization pattern: insert summary + delete originals ───
def test_summarize_pattern_compress():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS chat_msgs")
    simple_query(s, "DROP TABLE IF EXISTS chat_sum")
    simple_query(s,
        "CREATE TABLE chat_msgs (id INT PRIMARY KEY AUTO_INCREMENT, msg VARCHAR(255))")
    simple_query(s,
        "CREATE TABLE chat_sum (id INT PRIMARY KEY AUTO_INCREMENT, summary VARCHAR(255), tokens_saved INT)")
    for w in ("alpha", "beta", "gamma"):
        simple_query(s, f"INSERT INTO chat_msgs (msg) VALUES ('{w}')")
    # Compute summary via the stub (UPDATE-style two-step works
    # around the parser's comma-in-function-args quirk on column-list
    # INSERTs — same surface limitation as the existing CONCAT path).
    _, rows, _, _ = simple_query(s,
        "SELECT evo_call_external('summarize', 'alpha beta gamma')")
    summary = rows[0][0]
    simple_query(s,
        f"INSERT INTO chat_sum (summary, tokens_saved) VALUES ('{summary}', 3)")
    simple_query(s, "DELETE FROM chat_msgs WHERE id > 0")
    _, msg_rows, _, _ = simple_query(s, "SELECT id FROM chat_msgs")
    _, sum_rows, _, _ = simple_query(s, "SELECT summary FROM chat_sum")
    assert len(msg_rows) == 0, f"messages should be cleared: {msg_rows}"
    assert sum_rows[0][0] == "ext:summarize:alpha beta gamma", \
        f"summary: {sum_rows}"


if __name__ == "__main__":
    print("=== test_auto_summarize.py (Task 214) ===\n")
    run("token_length basic counts",            test_token_length_basic)
    run("token_length(NULL) returns NULL",      test_token_length_null)
    run("token_length('') returns 0",           test_token_length_empty)
    run("Multiple whitespace runs collapsed",   test_token_length_collapsed_ws)
    run("evo_call_external returns stub",        test_call_external_basic)
    run("evo_call_external NULL name → NULL",    test_call_external_null_name)
    run("token_length composes in WHERE",       test_token_length_in_where)
    run("SUM(token_length) aggregates",          test_token_length_sum)
    run("Summarize pattern: detect-over-budget", test_summarize_pattern_detect)
    run("Summarize pattern: compress + delete", test_summarize_pattern_compress)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
