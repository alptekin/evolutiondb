"""
test_listen_notify.py — Task 91 (Feature #62): LISTEN / NOTIFY / UNLISTEN
+ evo_notify() + pg_listening_channels()

Two-connection tests: conn A is the listener, conn B issues NOTIFY.
The PG `'A'` NotificationResponse frame arrives asynchronously — we peek
the socket with a short timeout between operations.
"""
import sys, socket, struct, time
sys.path.insert(0, ".")
from pg_helpers import conn, simple_query


def _drain(sock, timeout=0.3):
    """Read whatever is in the socket buffer (non-blocking-ish). Returns bytes."""
    sock.settimeout(timeout)
    buf = b""
    try:
        while True:
            chunk = sock.recv(4096)
            if not chunk:
                break
            buf += chunk
    except socket.timeout:
        pass
    return buf


def _parse_notifications(buf):
    """Extract ('A' PID channel payload) tuples from a raw byte stream."""
    out = []
    i = 0
    while i < len(buf):
        if buf[i:i + 1] != b"A":
            # skip non-'A' frames (CommandComplete, ReadyForQuery, etc.)
            if i + 5 > len(buf):
                break
            mlen = struct.unpack("!I", buf[i + 1:i + 5])[0]
            i += 1 + mlen
            continue
        mlen = struct.unpack("!I", buf[i + 1:i + 5])[0]
        body = buf[i + 5:i + 1 + mlen]
        pid = struct.unpack("!I", body[0:4])[0]
        rest = body[4:]
        try:
            ch, pay = rest.rstrip(b"\x00").split(b"\x00", 1)
        except ValueError:
            ch = rest.rstrip(b"\x00")
            pay = b""
        out.append((pid, ch.decode(), pay.decode()))
        i += 1 + mlen
    return out


def _raw_simple_query(sock, sql, timeout=0.4):
    """Like simple_query but returns the RAW bytes read from the socket,
    preserving async 'A' frames that simple_query would silently drop."""
    msg = sql.encode("utf-8") + b"\x00"
    sock.sendall(b"Q" + struct.pack("!I", 4 + len(msg)) + msg)
    sock.settimeout(timeout)
    buf = b""
    try:
        while True:
            chunk = sock.recv(4096)
            if not chunk:
                break
            buf += chunk
            # Stop once we see ReadyForQuery at a valid frame boundary
            if b"Z\x00\x00\x00\x05" in buf:
                break
    except socket.timeout:
        pass
    return buf


# ------------------------------------------------------------------ tests ---

def test_basic_listen_notify():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch1")
    _drain(a, 0.1)
    simple_query(b, "NOTIFY ch1, 'hello'")
    time.sleep(0.2)
    raw = _drain(a, 0.3)
    notifs = _parse_notifications(raw)
    assert len(notifs) == 1, f"expected 1 notification, got {len(notifs)}: {notifs}"
    _, ch, pay = notifs[0]
    assert ch == "ch1", f"got channel {ch!r}"
    assert pay == "hello", f"got payload {pay!r}"
    a.close(); b.close()


def test_notify_empty_payload():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_empty")
    _drain(a, 0.1)
    simple_query(b, "NOTIFY ch_empty")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a))
    assert len(notifs) == 1, notifs
    assert notifs[0][2] == "", f"got payload {notifs[0][2]!r}"
    a.close(); b.close()


def test_unlisten():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch2")
    simple_query(a, "UNLISTEN ch2")
    _drain(a, 0.1)
    simple_query(b, "NOTIFY ch2, 'x'")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 0, f"expected 0 notifications after UNLISTEN, got {notifs}"
    a.close(); b.close()


def test_unlisten_all():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_a1")
    simple_query(a, "LISTEN ch_a2")
    simple_query(a, "UNLISTEN *")
    _drain(a, 0.1)
    simple_query(b, "NOTIFY ch_a1, 'x'")
    simple_query(b, "NOTIFY ch_a2, 'y'")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 0, f"got {notifs}"
    a.close(); b.close()


def test_self_notify_default_off():
    """By default, a session's own NOTIFY is NOT delivered back to itself."""
    a = conn()
    simple_query(a, "LISTEN ch_self")
    _drain(a, 0.1)
    simple_query(a, "NOTIFY ch_self, 'self'")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 0, f"self notify leaked: {notifs}"
    a.close()


def test_self_notify_opt_in():
    """LISTEN ch SELF opts same-session delivery back on."""
    a = conn()
    simple_query(a, "LISTEN ch_self2 SELF")
    _drain(a, 0.1)
    # Use raw path: simple_query() consumes async 'A' frames into garbage.
    raw = _raw_simple_query(a, "NOTIFY ch_self2, 'self'")
    notifs = _parse_notifications(raw)
    assert len(notifs) == 1, f"self notify missed: {notifs}"
    assert notifs[0][2] == "self"
    a.close()


def test_rollback_drops_pending():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_rb")
    _drain(a, 0.1)
    simple_query(b, "BEGIN")
    simple_query(b, "NOTIFY ch_rb, 'doomed'")
    simple_query(b, "ROLLBACK")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 0, f"rolled-back notify leaked: {notifs}"
    a.close(); b.close()


def test_commit_fires_notify():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_ok")
    _drain(a, 0.1)
    simple_query(b, "BEGIN")
    simple_query(b, "NOTIFY ch_ok, 'committed'")
    _drain(a, 0.1)
    pre_commit = _parse_notifications(_drain(a, 0.1))
    assert len(pre_commit) == 0, "notify fired before commit"
    simple_query(b, "COMMIT")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 1, f"expected commit-time notify: {notifs}"
    assert notifs[0][2] == "committed"
    a.close(); b.close()


def test_multiple_notifies_one_tx():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_multi")
    _drain(a, 0.1)
    simple_query(b, "BEGIN")
    simple_query(b, "NOTIFY ch_multi, 'a'")
    simple_query(b, "NOTIFY ch_multi, 'b'")
    simple_query(b, "NOTIFY ch_multi, 'c'")
    simple_query(b, "COMMIT")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 3, f"expected 3 notifications, got {len(notifs)}"
    payloads = sorted(n[2] for n in notifs)
    assert payloads == ["a", "b", "c"], payloads
    a.close(); b.close()


def test_evo_notify_function_in_select():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_fn")
    _drain(a, 0.1)
    simple_query(b, "SELECT evo_notify('ch_fn', 'from-function')")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 1, f"function-form notify missed: {notifs}"
    assert notifs[0][2] == "from-function"
    a.close(); b.close()


def test_payload_too_long():
    a = conn()
    payload = "x" * 8001
    cols, rows, err, tag = simple_query(a, f"NOTIFY ch_long, '{payload}'")
    # either SQLSTATE-reported error or truncation-based error
    assert err is not None, "expected error for 8001-byte payload"
    a.close()


def test_dedup_identical():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_dedup")
    _drain(a, 0.1)
    simple_query(b, "BEGIN")
    simple_query(b, "NOTIFY ch_dedup, 'same'")
    simple_query(b, "NOTIFY ch_dedup, 'same'")
    simple_query(b, "NOTIFY ch_dedup, 'same'")
    simple_query(b, "COMMIT")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 1, f"dedup failed: {notifs}"
    a.close(); b.close()


def test_dedup_different_payloads():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_dd")
    _drain(a, 0.1)
    simple_query(b, "BEGIN")
    simple_query(b, "NOTIFY ch_dd, 'one'")
    simple_query(b, "NOTIFY ch_dd, 'two'")
    simple_query(b, "COMMIT")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 2, f"expected 2 distinct payloads: {notifs}"
    a.close(); b.close()


def test_savepoint_rollback_scoped():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_sp")
    _drain(a, 0.1)
    simple_query(b, "BEGIN")
    simple_query(b, "NOTIFY ch_sp, 'before-sp'")
    simple_query(b, "SAVEPOINT s1")
    simple_query(b, "NOTIFY ch_sp, 'inside-sp'")
    simple_query(b, "ROLLBACK TO SAVEPOINT s1")
    simple_query(b, "NOTIFY ch_sp, 'after-sp'")
    simple_query(b, "COMMIT")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    payloads = sorted(n[2] for n in notifs)
    assert payloads == ["after-sp", "before-sp"], f"got {payloads}"
    a.close(); b.close()


def test_connection_close_removes_listens():
    a = conn(); b = conn(); c = conn()
    simple_query(a, "LISTEN ch_close")
    simple_query(b, "LISTEN ch_close")  # second listener
    _drain(a, 0.1); _drain(b, 0.1)
    a.close()                            # disconnect A → A's listens gone
    time.sleep(0.2)
    simple_query(c, "NOTIFY ch_close, 'to-b'")
    time.sleep(0.2)
    # B still listens, should get it
    b_notifs = _parse_notifications(_drain(b, 0.3))
    assert len(b_notifs) == 1, f"B missed notification: {b_notifs}"
    b.close(); c.close()


def test_pg_listening_channels():
    a = conn()
    simple_query(a, "LISTEN ch_enum1")
    simple_query(a, "LISTEN ch_enum2")
    _drain(a, 0.1)
    cols, rows, err, tag = simple_query(a, "SELECT pg_listening_channels()")
    assert err is None, err
    assert len(rows) == 1, rows
    s = rows[0][0]
    assert "ch_enum1" in s and "ch_enum2" in s, f"got {s!r}"
    a.close()


def test_listen_inside_transaction():
    """LISTEN inside BEGIN/COMMIT — per PG, becomes effective immediately."""
    a = conn(); b = conn()
    simple_query(a, "BEGIN")
    simple_query(a, "LISTEN ch_tx")
    simple_query(a, "COMMIT")
    _drain(a, 0.1)
    simple_query(b, "NOTIFY ch_tx, 'x'")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 1, f"listen-in-tx failed: {notifs}"
    a.close(); b.close()


def test_cross_channel_isolation():
    """NOTIFY on channel X does not reach channel Y listeners."""
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_x")
    _drain(a, 0.1)
    simple_query(b, "NOTIFY ch_y, 'other'")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 0, f"cross-channel leak: {notifs}"
    a.close(); b.close()


def test_payload_with_special_chars():
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_sp2")
    _drain(a, 0.1)
    simple_query(b, "NOTIFY ch_sp2, 'line1 line2 with spaces'")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 1, notifs
    assert notifs[0][2] == "line1 line2 with spaces"
    a.close(); b.close()


def test_pg_notify_alias():
    """pg_notify(ch, payload) is an alias for evo_notify()."""
    a = conn(); b = conn()
    simple_query(a, "LISTEN ch_alias")
    _drain(a, 0.1)
    simple_query(b, "SELECT pg_notify('ch_alias', 'via-alias')")
    time.sleep(0.2)
    notifs = _parse_notifications(_drain(a, 0.2))
    assert len(notifs) == 1 and notifs[0][2] == "via-alias", notifs
    a.close(); b.close()


def main():
    tests = [
        test_basic_listen_notify,
        test_notify_empty_payload,
        test_unlisten,
        test_unlisten_all,
        test_self_notify_default_off,
        test_self_notify_opt_in,
        test_rollback_drops_pending,
        test_commit_fires_notify,
        test_multiple_notifies_one_tx,
        test_evo_notify_function_in_select,
        test_payload_too_long,
        test_dedup_identical,
        test_dedup_different_payloads,
        test_savepoint_rollback_scoped,
        test_connection_close_removes_listens,
        test_pg_listening_channels,
        test_listen_inside_transaction,
        test_cross_channel_isolation,
        test_payload_with_special_chars,
        test_pg_notify_alias,
    ]
    passed, failed = 0, []
    for t in tests:
        try:
            t()
            print(f"  PASS  {t.__name__}")
            passed += 1
        except AssertionError as e:
            print(f"  FAIL  {t.__name__}: {e}")
            failed.append(t.__name__)
        except Exception as e:
            print(f"  ERROR {t.__name__}: {e!r}")
            failed.append(t.__name__)
    print(f"\n{passed}/{len(tests)} passed")
    if failed:
        print("Failed:")
        for n in failed:
            print(f"  - {n}")
        sys.exit(1)


if __name__ == "__main__":
    main()
