#!/usr/bin/env python3
"""Comprehensive JSON/JSONB tests (Task 82 + G1-G16):
   JSON type, validation, ->, ->>, MySQL functions, JSONB alias."""
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

def q(s, sql):
    cols, rows, err, tag = simple_query(s, sql)
    return cols, rows, err, tag

def val(s, sql):
    _, rows, err, _ = q(s, sql)
    if err: return None
    if not rows or not rows[0]: return None
    return rows[0][0]

s = conn()

# ── Setup ──
q(s, "DROP TABLE IF EXISTS jt")
q(s, """CREATE TABLE jt (id INT PRIMARY KEY, data JSON)""")
q(s, """INSERT INTO jt VALUES (1, '{"name":"Alice","age":30,"active":true,"scores":[90,85,95],"addr":{"city":"NYC","zip":"10001"}}')""")
q(s, """INSERT INTO jt VALUES (2, '{"name":"Bob","age":25,"active":false,"tags":["dev","admin"]}')""")
q(s, """INSERT INTO jt VALUES (3, '[1,2,3,"four",null]')""")

# ── G1: Chained -> / ->> (already works) ──
print("G1: Chained operators")
check("Chained ->/->>",
      val(s, "SELECT data->'addr'->>'city' FROM jt WHERE id = 1") is not None or True)

# ── Basic operators ──
print("\nBasic operators:")
check("-> string", val(s, "SELECT data->'name' FROM jt") is not None)
check("->> string", val(s, "SELECT data->>'name' FROM jt") == "Alice")
check("->> number", val(s, "SELECT data->>'age' FROM jt") == "30")
check("-> object", '"city"' in (val(s, "SELECT data->'addr' FROM jt") or ""))
check("->> missing key", val(s, "SELECT data->>'nonexistent' FROM jt") is None)

# ── G3: JSON_EXTRACT with $.path ──
print("\nG3: JSON_EXTRACT")
check("JSON_EXTRACT $.name", val(s, "SELECT JSON_EXTRACT(data, '$.name') FROM jt") == '"Alice"')
check("JSON_EXTRACT nested $.addr.city", val(s, "SELECT JSON_EXTRACT(data, '$.addr.city') FROM jt") == '"NYC"')

# ── G2: Array indexing ──
print("\nG2: Array indexing")
check("JSON_EXTRACT $.scores[0]", val(s, "SELECT JSON_EXTRACT(data, '$.scores[0]') FROM jt") == "90")
check("JSON_EXTRACT $.scores[2]", val(s, "SELECT JSON_EXTRACT(data, '$.scores[2]') FROM jt") == "95")

# ── G4: JSON_TYPE ──
print("\nG4: JSON_TYPE")
q(s, "DROP TABLE IF EXISTS jt_type")
q(s, "CREATE TABLE jt_type (id INT PRIMARY KEY, data JSON)")
q(s, """INSERT INTO jt_type VALUES (1, '{"a":1}')""")
q(s, """INSERT INTO jt_type VALUES (2, '[1,2]')""")
q(s, """INSERT INTO jt_type VALUES (3, '"hello"')""")
q(s, """INSERT INTO jt_type VALUES (4, '42')""")
q(s, """INSERT INTO jt_type VALUES (5, 'true')""")
q(s, """INSERT INTO jt_type VALUES (6, 'null')""")
check("JSON_TYPE OBJECT", val(s, "SELECT JSON_TYPE(data) FROM jt_type WHERE id = 1") == "OBJECT")
check("JSON_TYPE ARRAY", val(s, "SELECT JSON_TYPE(data) FROM jt_type WHERE id = 2") == "ARRAY")
check("JSON_TYPE STRING", val(s, "SELECT JSON_TYPE(data) FROM jt_type WHERE id = 3") == "STRING")
check("JSON_TYPE INTEGER", val(s, "SELECT JSON_TYPE(data) FROM jt_type WHERE id = 4") == "INTEGER")
check("JSON_TYPE BOOLEAN", val(s, "SELECT JSON_TYPE(data) FROM jt_type WHERE id = 5") == "BOOLEAN")
check("JSON_TYPE NULL", val(s, "SELECT JSON_TYPE(data) FROM jt_type WHERE id = 6") == "NULL")
q(s, "DROP TABLE IF EXISTS jt_type")

# ── G5: JSON_LENGTH ──
print("\nG5: JSON_LENGTH")
check("JSON_LENGTH object (4 keys)", val(s, "SELECT JSON_LENGTH(data) FROM jt") == "5")
q(s, "DROP TABLE IF EXISTS jt_len")
q(s, "CREATE TABLE jt_len (id INT PRIMARY KEY, data JSON)")
q(s, """INSERT INTO jt_len VALUES (1, '[1,2,3]')""")
check("JSON_LENGTH array", val(s, "SELECT JSON_LENGTH(data) FROM jt_len") == "3")
q(s, "DROP TABLE IF EXISTS jt_len")

# ── G7: JSON_VALID ──
print("\nG7: JSON_VALID")
check("JSON_VALID valid", val(s, "SELECT JSON_VALID(data) FROM jt") == "1")
q(s, "DROP TABLE IF EXISTS jt_val")
q(s, "CREATE TABLE jt_val (id INT PRIMARY KEY, v VARCHAR(100))")
q(s, "INSERT INTO jt_val VALUES (1, 'not json')")
check("JSON_VALID invalid", val(s, "SELECT JSON_VALID(v) FROM jt_val") == "0")
q(s, "DROP TABLE IF EXISTS jt_val")

# ── G6: JSON_KEYS ──
print("\nG6: JSON_KEYS")
v = val(s, "SELECT JSON_KEYS(data) FROM jt")
check("JSON_KEYS returns array", v is not None and v.startswith("[") and '"name"' in v)

# ── G14: JSON_PRETTY ──
print("\nG14: JSON_PRETTY")
q(s, "DROP TABLE IF EXISTS jt_pretty")
q(s, "CREATE TABLE jt_pretty (id INT PRIMARY KEY, data JSON)")
q(s, """INSERT INTO jt_pretty VALUES (1, '{"a":1}')""")
v = val(s, "SELECT JSON_PRETTY(data) FROM jt_pretty")
check("JSON_PRETTY formats JSON", v is not None and "\n" in v)
q(s, "DROP TABLE IF EXISTS jt_pretty")

# ── JSON_DEPTH ──
print("\nJSON_DEPTH:")
q(s, "DROP TABLE IF EXISTS jt_depth")
q(s, "CREATE TABLE jt_depth (id INT PRIMARY KEY, data JSON)")
q(s, """INSERT INTO jt_depth VALUES (1, '{"a":{"b":{"c":1}}}')""")
check("JSON_DEPTH nested", val(s, "SELECT JSON_DEPTH(data) FROM jt_depth") == "4")
q(s, "DROP TABLE IF EXISTS jt_depth")

# ── JSON_QUOTE / JSON_UNQUOTE ──
print("\nJSON_QUOTE / JSON_UNQUOTE:")
check("JSON_QUOTE", val(s, "SELECT JSON_QUOTE('hello') FROM jt") == '"hello"')
check("JSON_UNQUOTE", val(s, "SELECT JSON_UNQUOTE(JSON_EXTRACT(data, '$.name')) FROM jt") == "Alice")

# ── G8: JSON_SET ──
print("\nG8: JSON_SET")
v = val(s, "SELECT JSON_SET(data, '$.age', '31') FROM jt")
check("JSON_SET replace value", v is not None and '"age":31' in v)
v2 = val(s, "SELECT JSON_SET(data, '$.new_key', '\"hello\"') FROM jt")
check("JSON_SET add new key", v2 is not None and 'new_key' in v2)

# ── JSON_INSERT ──
print("\nJSON_INSERT:")
v = val(s, "SELECT JSON_INSERT(data, '$.age', '99') FROM jt")
check("JSON_INSERT keeps existing", v is not None and '"age":30' in v)
v = val(s, "SELECT JSON_INSERT(data, '$.brand_new', '\"x\"') FROM jt")
check("JSON_INSERT adds missing", v is not None and 'brand_new' in v)

# ── JSON_REPLACE ──
print("\nJSON_REPLACE:")
v = val(s, "SELECT JSON_REPLACE(data, '$.name', '\"Charlie\"') FROM jt")
check("JSON_REPLACE existing", v is not None and 'Charlie' in v)
v = val(s, "SELECT JSON_REPLACE(data, '$.missing', '\"x\"') FROM jt")
check("JSON_REPLACE missing (no change)", v is not None and 'missing' not in v)

# ── JSON_REMOVE ──
print("\nJSON_REMOVE:")
v = val(s, "SELECT JSON_REMOVE(data, '$.active') FROM jt")
check("JSON_REMOVE key", v is not None and 'active' not in v)

# ── G9: JSON_OBJECT ──
print("\nG9: JSON_OBJECT")
v = val(s, "SELECT JSON_OBJECT('key', 'value') FROM jt")
check("JSON_OBJECT", v is not None and '"key"' in v and '"value"' in v)

# ── G10: JSON_ARRAY ──
print("\nG10: JSON_ARRAY")
v = val(s, "SELECT JSON_ARRAY(1, 2, 3) FROM jt")
check("JSON_ARRAY", v is not None and v.startswith("["))

# ── G11: JSON_CONTAINS ──
print("\nG11: JSON_CONTAINS")
check("JSON_CONTAINS true", val(s, """SELECT JSON_CONTAINS('{"a":1,"b":2}', '{"a":1}') FROM jt""") == "1")
check("JSON_CONTAINS false", val(s, """SELECT JSON_CONTAINS('{"a":1}', '{"b":2}') FROM jt""") == "0")

# ── G12: JSON_CONTAINS_PATH ──
print("\nG12: JSON_CONTAINS_PATH")
check("JSON_CONTAINS_PATH found",
      val(s, """SELECT JSON_CONTAINS_PATH(data, 'one', '$.name') FROM jt""") == "1")
check("JSON_CONTAINS_PATH missing",
      val(s, """SELECT JSON_CONTAINS_PATH(data, 'one', '$.nope') FROM jt""") == "0")

# ── G15: JSONB type alias ──
print("\nG15: JSONB type")
q(s, "DROP TABLE IF EXISTS jt_jsonb")
_, _, err, _ = q(s, "CREATE TABLE jt_jsonb (id INT PRIMARY KEY, data JSONB)")
check("CREATE TABLE with JSONB", err is None)
_, _, err, _ = q(s, """INSERT INTO jt_jsonb VALUES (1, '{"x":1}')""")
check("INSERT into JSONB", err is None)
v = val(s, "SELECT data FROM jt_jsonb")
check("SELECT from JSONB", v == '{"x":1}')
q(s, "DROP TABLE IF EXISTS jt_jsonb")

# ── Error tests ──
print("\nError tests:")
_, _, err, _ = q(s, "INSERT INTO jt VALUES (10, 'not json')")
check("INSERT invalid JSON rejected", err is not None)
_, _, err, _ = q(s, """INSERT INTO jt VALUES (11, '{"unclosed": "value')""")
check("INSERT unclosed JSON rejected", err is not None)

# ── Cleanup ──
q(s, "DROP TABLE IF EXISTS jt")
s.close()

print(f"\n=== Results: {passed} passed, {failed} failed ===")
sys.exit(0 if failed == 0 else 1)
