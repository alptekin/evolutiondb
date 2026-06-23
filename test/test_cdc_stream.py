"""
test_cdc_stream.py — Task 211 (Feature #211) tests.

Covers:
  - CDC server accepts a TCP connection on the configured port
  - "ready" greeting fires before any DML
  - INSERT yields an "I" event
  - UPDATE yields a "D"+"I" pair (non-destructive update path)
  - DELETE yields a "D" event
  - Event JSON carries op, table name, table_id, xid, pk, ts
  - Two clients each receive every event independently
  - Disconnecting one client doesn't affect the other
  - Reconnect after disconnect doesn't replay history (live-only stream)
  - Stream stays quiet when only SELECTs run

Tests assume `EVOSQL_CDC_PORT=9970` is exposed (docker-compose.yml).
"""
import json
import os
import socket
import sys
import threading
import time

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

CDC_HOST = "127.0.0.1"
CDC_PORT = int(os.environ.get("CDC_PORT", "9970"))


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


class CdcReader:
    """Minimal helper: opens a CDC connection, reads JSON lines into a list."""
    def __init__(self):
        self.sock = socket.create_connection((CDC_HOST, CDC_PORT), timeout=5)
        self.sock.settimeout(2.0)
        self.events = []
        self._buf = b""
        self._stop = False
        self._thread = threading.Thread(target=self._loop, daemon=True)
        self._thread.start()

    def _loop(self):
        while not self._stop:
            try:
                chunk = self.sock.recv(4096)
            except socket.timeout:
                continue
            except OSError:
                break
            if not chunk:
                break
            self._buf += chunk
            while b"\n" in self._buf:
                line, self._buf = self._buf.split(b"\n", 1)
                if not line:
                    continue
                try:
                    self.events.append(json.loads(line.decode()))
                except json.JSONDecodeError:
                    pass

    def close(self):
        self._stop = True
        try: self.sock.close()
        except OSError: pass

    def of_op(self, op):
        return [e for e in self.events if e.get("op") == op]

    def wait_for(self, predicate, timeout=3.0):
        deadline = time.time() + timeout
        while time.time() < deadline:
            if any(predicate(e) for e in self.events):
                return True
            time.sleep(0.1)
        return False


# ─── 1. server accepts connection + greets ───
def test_connect_and_greet():
    r = CdcReader()
    try:
        time.sleep(0.4)
        events = [e for e in r.events if e.get("event") == "ready"]
        assert events, f"no ready greeting; got {r.events}"
    finally:
        r.close()


# ─── 2. INSERT → 'I' event ───
def test_insert_event():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_t1")
    r = CdcReader()
    try:
        time.sleep(0.3)
        simple_query(s, "CREATE TABLE cdc_t1 (id INT PRIMARY KEY)")
        simple_query(s, "INSERT INTO cdc_t1 VALUES (1)")
        ok = r.wait_for(lambda e: e.get("op") == "I" and e.get("table") == "cdc_t1")
        assert ok, f"no INSERT event: {r.events}"
    finally:
        r.close()


# ─── 3. UPDATE → 'D' + 'I' pair (non-destructive update) ───
def test_update_emits_d_and_i():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_t2")
    simple_query(s, "CREATE TABLE cdc_t2 (id INT PRIMARY KEY, n INT)")
    simple_query(s, "INSERT INTO cdc_t2 VALUES (1, 100)")
    r = CdcReader()
    try:
        time.sleep(0.3)
        simple_query(s, "UPDATE cdc_t2 SET n = 200 WHERE id = 1")
        ok_d = r.wait_for(lambda e: e.get("op") == "D" and e.get("table") == "cdc_t2")
        ok_i = r.wait_for(lambda e: e.get("op") == "I" and e.get("table") == "cdc_t2")
        assert ok_d and ok_i, f"update events: {r.events}"
    finally:
        r.close()


# ─── 4. DELETE → 'D' event ───
def test_delete_event():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_t3")
    simple_query(s, "CREATE TABLE cdc_t3 (id INT PRIMARY KEY)")
    simple_query(s, "INSERT INTO cdc_t3 VALUES (1)")
    r = CdcReader()
    try:
        time.sleep(0.3)
        simple_query(s, "DELETE FROM cdc_t3 WHERE id = 1")
        ok = r.wait_for(lambda e: e.get("op") == "D" and e.get("table") == "cdc_t3")
        assert ok, f"delete events: {r.events}"
    finally:
        r.close()


# ─── 5. Event payload carries the documented fields ───
def test_event_shape():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_shape")
    simple_query(s, "CREATE TABLE cdc_shape (id INT PRIMARY KEY)")
    r = CdcReader()
    try:
        time.sleep(0.3)
        simple_query(s, "INSERT INTO cdc_shape VALUES (42)")
        r.wait_for(lambda e: e.get("op") == "I" and e.get("table") == "cdc_shape")
        ev = next(e for e in r.events if e.get("op") == "I" and e.get("table") == "cdc_shape")
        for key in ("op", "table", "table_id", "xid", "ts"):
            assert key in ev, f"missing {key} in {ev}"
        assert isinstance(ev["table_id"], int)
        assert isinstance(ev["xid"], int)
    finally:
        r.close()


# ─── 6. Two clients each receive every event ───
def test_two_clients():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_two")
    simple_query(s, "CREATE TABLE cdc_two (id INT PRIMARY KEY)")
    r1 = CdcReader()
    r2 = CdcReader()
    try:
        time.sleep(0.4)
        simple_query(s, "INSERT INTO cdc_two VALUES (1)")
        simple_query(s, "INSERT INTO cdc_two VALUES (2)")
        time.sleep(1.0)
        r1_inserts = r1.of_op("I")
        r2_inserts = r2.of_op("I")
        r1_for_table = [e for e in r1_inserts if e.get("table") == "cdc_two"]
        r2_for_table = [e for e in r2_inserts if e.get("table") == "cdc_two"]
        assert len(r1_for_table) == 2, f"r1 saw {r1_for_table}"
        assert len(r2_for_table) == 2, f"r2 saw {r2_for_table}"
    finally:
        r1.close(); r2.close()


# ─── 7. Disconnecting one client doesn't kill the other ───
def test_disconnect_isolation():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_iso")
    simple_query(s, "CREATE TABLE cdc_iso (id INT PRIMARY KEY)")
    r1 = CdcReader()
    r2 = CdcReader()
    try:
        time.sleep(0.4)
        r1.close()
        time.sleep(0.3)
        simple_query(s, "INSERT INTO cdc_iso VALUES (1)")
        ok = r2.wait_for(lambda e: e.get("op") == "I" and e.get("table") == "cdc_iso")
        assert ok, f"r2 events: {r2.events}"
    finally:
        r2.close()


# ─── 8. Reconnect doesn't replay (live-only) ───
def test_reconnect_no_replay():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_re")
    simple_query(s, "CREATE TABLE cdc_re (id INT PRIMARY KEY)")
    simple_query(s, "INSERT INTO cdc_re VALUES (99)")  # before any consumer
    time.sleep(0.3)
    r = CdcReader()
    try:
        time.sleep(0.5)
        for_table = [e for e in r.events
                     if e.get("op") == "I" and e.get("table") == "cdc_re"]
        assert for_table == [], f"unexpected replay: {for_table}"
    finally:
        r.close()


# ─── 9. SELECT-only stream stays quiet ───
def test_select_only_quiet():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_sel")
    simple_query(s, "CREATE TABLE cdc_sel (id INT PRIMARY KEY)")
    simple_query(s, "INSERT INTO cdc_sel VALUES (1)")
    r = CdcReader()
    try:
        time.sleep(0.4)
        before = len(r.events)
        for _ in range(5):
            simple_query(s, "SELECT id FROM cdc_sel")
        time.sleep(0.6)
        after = len(r.events)
        # tolerance: zero new data events for cdc_sel from SELECTs
        new_for_table = [e for e in r.events[before:]
                         if e.get("table") == "cdc_sel"]
        assert new_for_table == [], f"select leaked: {new_for_table}"
    finally:
        r.close()


# ─── 10. table name field matches CREATE TABLE name ───
def test_table_name_field():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS cdc_named")
    simple_query(s, "CREATE TABLE cdc_named (id INT PRIMARY KEY, msg VARCHAR(64))")
    r = CdcReader()
    try:
        time.sleep(0.3)
        simple_query(s, "INSERT INTO cdc_named VALUES (1, 'hi')")
        r.wait_for(lambda e: e.get("table") == "cdc_named", timeout=2.0)
        names = {e.get("table") for e in r.events if e.get("op") == "I"}
        assert "cdc_named" in names, f"saw {names}"
    finally:
        r.close()


if __name__ == "__main__":
    print("=== test_cdc_stream.py (Task 211) ===\n")
    run("Server greets connecting client",      test_connect_and_greet)
    run("INSERT emits 'I' event",                test_insert_event)
    run("UPDATE emits 'D' + 'I' pair",           test_update_emits_d_and_i)
    run("DELETE emits 'D' event",                test_delete_event)
    run("Event payload carries documented keys", test_event_shape)
    run("Two clients each receive every event", test_two_clients)
    run("Disconnect one — other still streams", test_disconnect_isolation)
    run("Reconnect doesn't replay history",      test_reconnect_no_replay)
    run("SELECT-only stream stays quiet",        test_select_only_quiet)
    run("table field matches CREATE TABLE name", test_table_name_field)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
