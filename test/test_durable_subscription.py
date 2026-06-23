"""
test_durable_subscription.py — Task 210 (Feature #210) tests.

Covers:
  - CREATE / DROP SUBSCRIPTION
  - SHOW SUBSCRIPTIONS lists all registered subs
  - NOTIFY → row lands in __sub_<name> backing
  - RESUME returns rows in seq order
  - ACK UPTO advances watermark
  - RESUME after ACK returns only newer rows
  - Disconnect/reconnect: missed messages still drainable
  - Two subscribers on same channel each get their own copy
  - Non-channel NOTIFY doesn't enter durable queue
  - DROP SUBSCRIPTION removes catalog entry + backing table
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


# ─── 1. CREATE SUBSCRIPTION accepted, SHOW lists it ───
def test_create_show():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_create")
    _, _, err, _ = simple_query(s, "CREATE SUBSCRIPTION s_create FOR CHANNEL chcr")
    assert err is None, f"create failed: {err}"
    _, rows, _, _ = simple_query(s, "SHOW SUBSCRIPTIONS")
    names = [r[0] for r in rows]
    assert "s_create" in names, f"s_create missing from {names}"


# ─── 2. NOTIFY → row in backing queue, drainable via RESUME ───
def test_notify_resume():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_nr")
    simple_query(s, "CREATE SUBSCRIPTION s_nr FOR CHANNEL chnr")
    simple_query(s, "LISTEN chnr")
    simple_query(s, "NOTIFY chnr, 'first'")
    _, rows, _, _ = simple_query(s, "RESUME SUBSCRIPTION s_nr")
    assert len(rows) == 1, f"resume rows: {rows}"
    assert rows[0][1] == "first", f"payload: {rows[0][1]}"


# ─── 3. ACK advances the watermark ───
def test_ack_advances():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_ack")
    simple_query(s, "CREATE SUBSCRIPTION s_ack FOR CHANNEL chack")
    simple_query(s, "NOTIFY chack, 'a'")
    simple_query(s, "NOTIFY chack, 'b'")
    _, rows, _, _ = simple_query(s, "RESUME SUBSCRIPTION s_ack")
    assert len(rows) == 2
    simple_query(s, "ACK SUBSCRIPTION s_ack UPTO 1")
    _, rows2, _, _ = simple_query(s, "RESUME SUBSCRIPTION s_ack")
    assert len(rows2) == 1, f"after ack 1: {rows2}"
    assert rows2[0][1] == "b", f"remaining: {rows2[0][1]}"


# ─── 4. ACK above seq is idempotent (doesn't err) ───
def test_ack_idempotent():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_idem")
    simple_query(s, "CREATE SUBSCRIPTION s_idem FOR CHANNEL chid")
    simple_query(s, "NOTIFY chid, 'x'")
    simple_query(s, "ACK SUBSCRIPTION s_idem UPTO 100")
    _, rows, _, _ = simple_query(s, "RESUME SUBSCRIPTION s_idem")
    assert len(rows) == 0, f"after ack 100: {rows}"


# ─── 5. ACK with a lower seq is a no-op ───
def test_ack_lower_noop():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_low")
    simple_query(s, "CREATE SUBSCRIPTION s_low FOR CHANNEL chlow")
    simple_query(s, "NOTIFY chlow, 'a'")
    simple_query(s, "NOTIFY chlow, 'b'")
    simple_query(s, "ACK SUBSCRIPTION s_low UPTO 2")
    simple_query(s, "ACK SUBSCRIPTION s_low UPTO 1")  # lower
    _, rows, _, _ = simple_query(s, "SHOW SUBSCRIPTIONS")
    by_name = {r[0]: r for r in rows}
    # last_ack_seq should still be 2, not regressed to 1
    assert by_name["s_low"][2] == "2", f"watermark regressed: {by_name['s_low']}"


# ─── 6. Disconnect / reconnect: missed messages drainable ───
def test_disconnect_reconnect():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_dr")
    simple_query(s, "CREATE SUBSCRIPTION s_dr FOR CHANNEL chdr")
    s.close()  # consumer disconnects

    s2 = conn()
    simple_query(s2, "NOTIFY chdr, 'while-disconnected'")
    s2.close()

    s3 = conn()
    _, rows, _, _ = simple_query(s3, "RESUME SUBSCRIPTION s_dr")
    assert len(rows) == 1, f"reconnect rows: {rows}"
    assert rows[0][1] == "while-disconnected"


# ─── 7. Two subscribers on same channel, each gets its own copy ───
def test_two_subscribers():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_a")
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_b")
    simple_query(s, "CREATE SUBSCRIPTION s_a FOR CHANNEL chshared")
    simple_query(s, "CREATE SUBSCRIPTION s_b FOR CHANNEL chshared")
    simple_query(s, "NOTIFY chshared, 'broadcast'")
    _, ra, _, _ = simple_query(s, "RESUME SUBSCRIPTION s_a")
    _, rb, _, _ = simple_query(s, "RESUME SUBSCRIPTION s_b")
    assert len(ra) == 1, f"s_a: {ra}"
    assert len(rb) == 1, f"s_b: {rb}"
    assert ra[0][1] == "broadcast"
    assert rb[0][1] == "broadcast"


# ─── 8. NOTIFY on a channel with no subscription doesn't crash ───
def test_no_subscription_channel():
    s = conn()
    _, _, err, _ = simple_query(s, "NOTIFY orphan_channel, 'noone'")
    assert err is None, f"orphan notify: {err}"


# ─── 9. DROP SUBSCRIPTION removes from SHOW + drops backing ───
def test_drop_removes():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_drop")
    simple_query(s, "CREATE SUBSCRIPTION s_drop FOR CHANNEL chdrop")
    simple_query(s, "DROP SUBSCRIPTION s_drop")
    _, rows, _, _ = simple_query(s, "SHOW SUBSCRIPTIONS")
    names = [r[0] for r in rows]
    assert "s_drop" not in names, f"still listed: {names}"
    _, _, err, _ = simple_query(s, "RESUME SUBSCRIPTION s_drop")
    assert err is not None, "RESUME on dropped sub should fail"


# ─── 10. Multiple NOTIFYs preserve ordering by seq ───
def test_seq_ordering():
    s = conn()
    simple_query(s, "DROP SUBSCRIPTION IF EXISTS s_ord")
    simple_query(s, "CREATE SUBSCRIPTION s_ord FOR CHANNEL chord")
    for i in range(5):
        simple_query(s, f"NOTIFY chord, 'msg{i}'")
    _, rows, _, _ = simple_query(s, "RESUME SUBSCRIPTION s_ord")
    payloads = [r[1] for r in rows]
    assert payloads == ["msg0", "msg1", "msg2", "msg3", "msg4"], \
        f"out of order: {payloads}"


if __name__ == "__main__":
    print("=== test_durable_subscription.py (Task 210) ===\n")
    run("CREATE + SHOW lists subscription",     test_create_show)
    run("NOTIFY → RESUME drains payload",       test_notify_resume)
    run("ACK UPTO advances watermark",          test_ack_advances)
    run("ACK above current seq idempotent",     test_ack_idempotent)
    run("ACK with lower seq is no-op",          test_ack_lower_noop)
    run("Disconnect/reconnect delivers missed", test_disconnect_reconnect)
    run("Two subscribers each get their copy",  test_two_subscribers)
    run("NOTIFY on orphan channel doesn't err", test_no_subscription_channel)
    run("DROP SUBSCRIPTION removes catalog",    test_drop_removes)
    run("Multiple NOTIFYs preserve seq order",  test_seq_ordering)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
