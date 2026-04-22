"""
bench_listen_notify.py — Task 91 throughput benchmark.

Measures:
  1. NOTIFY throughput (single listener + auto-commit loop)
  2. NOTIFY throughput (inside one BEGIN ... COMMIT)
  3. Fan-out throughput (1 sender → N listeners, one channel)
  4. LISTEN/UNLISTEN churn throughput
  5. Baseline comparison: SELECT 1 throughput on a fresh connection
"""
import os, sys, time, struct, socket, threading

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import pg_helpers
from pg_helpers import conn, simple_query


def send_query(sock, sql):
    """Fire a simple Query and consume the response up to ReadyForQuery."""
    msg = sql.encode() + b"\x00"
    sock.sendall(b"Q" + struct.pack("!I", 4 + len(msg)) + msg)
    buf = b""
    while True:
        chunk = sock.recv(8192)
        if not chunk:
            return
        buf += chunk
        # Look for Z (ReadyForQuery) at a frame boundary
        if b"Z\x00\x00\x00\x05" in buf:
            return


def drain(sock, timeout=0.3):
    sock.settimeout(timeout)
    buf = b""
    try:
        while True:
            chunk = sock.recv(8192)
            if not chunk:
                break
            buf += chunk
    except socket.timeout:
        pass
    return buf


# ---------------------------------------------------------------- benches ---

def bench_notify_autocommit(N=2000):
    a = conn()  # listener
    b = conn()  # notifier
    simple_query(a, "LISTEN bench_ac")
    drain(a, 0.1)
    b.settimeout(30)
    t0 = time.perf_counter()
    for i in range(N):
        send_query(b, f"NOTIFY bench_ac, 'msg{i}'")
    dt = time.perf_counter() - t0
    qps = N / dt
    # Give async notifications a moment to land; drain so next test starts clean.
    drain(a, 0.5)
    a.close(); b.close()
    return dt, qps


def bench_notify_batched(N=2000, batch=500):
    """NOTIFY N times inside chunks of <batch> wrapped in one TX.
    Commit-time flush sends all at once."""
    a = conn(); b = conn()
    simple_query(a, "LISTEN bench_b")
    drain(a, 0.1)
    b.settimeout(30)
    t0 = time.perf_counter()
    sent = 0
    while sent < N:
        send_query(b, "BEGIN")
        chunk = min(batch, N - sent)
        for i in range(chunk):
            send_query(b, f"NOTIFY bench_b, 'msg{sent + i}'")
        send_query(b, "COMMIT")
        sent += chunk
    dt = time.perf_counter() - t0
    qps = N / dt
    drain(a, 0.5)
    a.close(); b.close()
    return dt, qps


def bench_fanout(listeners=10, messages=200):
    """One sender emits `messages` NOTIFYs, each reaches `listeners` subs.
    Measures total send time; delivered = listeners * messages."""
    subs = []
    for i in range(listeners):
        s = conn()
        simple_query(s, "LISTEN bench_fanout")
        drain(s, 0.05)
        subs.append(s)

    sender = conn()
    sender.settimeout(30)
    t0 = time.perf_counter()
    for i in range(messages):
        send_query(sender, f"NOTIFY bench_fanout, 'm{i}'")
    dt = time.perf_counter() - t0
    sends_per_sec = messages / dt
    total_deliveries = listeners * messages
    delivery_rate = total_deliveries / dt

    for s in subs:
        drain(s, 0.1)
        s.close()
    sender.close()
    return dt, sends_per_sec, total_deliveries, delivery_rate


def bench_listen_churn(N=2000):
    """LISTEN + UNLISTEN cycles — hot path for registry wrlocks."""
    a = conn()
    a.settimeout(30)
    t0 = time.perf_counter()
    for i in range(N):
        ch = f"ch_{i % 50}"  # reuse channel slots
        send_query(a, f"LISTEN {ch}")
        send_query(a, f"UNLISTEN {ch}")
    dt = time.perf_counter() - t0
    qps = (2 * N) / dt   # N LISTEN + N UNLISTEN
    a.close()
    return dt, qps


def bench_select_1(N=2000):
    """Baseline — simple `SELECT 1` throughput."""
    a = conn(); a.settimeout(30)
    t0 = time.perf_counter()
    for i in range(N):
        send_query(a, "SELECT 1")
    dt = time.perf_counter() - t0
    qps = N / dt
    a.close()
    return dt, qps


# ---------------------------------------------------------------- main ---

def main():
    print("=" * 62)
    print("  LISTEN/NOTIFY benchmark (Task 91 — Feature #62)")
    print("=" * 62)

    # Warmup
    c = conn(); simple_query(c, "SELECT 1"); c.close()

    print("\n[1] Baseline: SELECT 1 (2000 queries)")
    dt, qps = bench_select_1(2000)
    print(f"    {2000} queries in {dt:.3f}s  —  {qps:,.0f} qps")

    print("\n[2] NOTIFY auto-commit (2000 notifications, 1 listener)")
    dt, qps = bench_notify_autocommit(2000)
    print(f"    {2000} NOTIFYs in {dt:.3f}s  —  {qps:,.0f} qps")

    print("\n[3] NOTIFY batched (2000 notifications, 500 per TX)")
    dt, qps = bench_notify_batched(2000, 500)
    print(f"    {2000} NOTIFYs in {dt:.3f}s  —  {qps:,.0f} qps")

    print("\n[4] Fan-out (1 sender → 10 listeners × 200 messages = 2000 deliveries)")
    dt, sqps, total, drate = bench_fanout(10, 200)
    print(f"    200 sends in {dt:.3f}s  —  {sqps:,.0f} send qps")
    print(f"    {total} deliveries  —  {drate:,.0f} deliveries/sec")

    print("\n[5] LISTEN/UNLISTEN churn (2000 cycles, registry wrlock contention)")
    dt, qps = bench_listen_churn(2000)
    print(f"    {4000} ops in {dt:.3f}s  —  {qps:,.0f} ops/sec")

    print("\n" + "=" * 62)


if __name__ == "__main__":
    main()
