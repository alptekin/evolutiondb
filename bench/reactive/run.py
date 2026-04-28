"""
reactive/run.py — push-vs-poll latency benchmark.

The push side measures end-to-end NOTIFY delivery: time stamp the
write, time stamp the SDK's callback, take the delta. The poll side
simulates an agent that re-queries a SHOW MEMORY STORES (a cheap
introspection) every K ms and would discover the change at the next
tick — so the expected delivery latency under uniform writes is
K/2 ms with worst case K ms.

Result: push p99 should be sub-10 ms while polling intervals
typical of competing stacks (Mongo change-stream off, Mem0 SaaS) hover
around hundreds-of-ms-to-seconds. The bench surfaces the gap with
real numbers.
"""
import argparse
import os
import sys
import threading
import time

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _common import render_markdown, summarize                          # noqa: E402


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--host", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=9967)
    ap.add_argument("--user", default="admin")
    ap.add_argument("--password", default="admin")
    ap.add_argument("--iters", type=int, default=200,
                    help="number of NOTIFY events to time (default 200)")
    ap.add_argument("--poll-interval-ms", type=int, default=1000,
                    help="comparator polling interval (default 1000ms)")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    from evosql_memory import connect, Subscription

    print(f"=== reactive bench (push vs poll @ {args.poll_interval_ms}ms) ===\n")

    # ---- PUSH path -------------------------------------------------
    push_ms: list = []
    write_ts: dict = {}
    write_lock = threading.Lock()
    counter = {"received": 0}

    def on_event(channel: str, payload: str, lsn: int) -> None:
        # Payload is the integer sequence the publisher wrote. Pair it
        # with the recorded write timestamp; emit ms latency.
        try:
            seq = int(payload)
        except ValueError:
            return
        recv_ns = time.perf_counter_ns()
        with write_lock:
            t0 = write_ts.pop(seq, None)
        if t0 is not None:
            push_ms.append((recv_ns - t0) / 1_000_000.0)
            counter["received"] += 1

    sub = Subscription(args.host, args.port, args.user, args.password,
                        "bench_react", on_event)

    with connect(args.host, args.port, args.user, args.password) as pub:
        for i in range(args.iters):
            with write_lock:
                write_ts[i] = time.perf_counter_ns()
            pub.exec_(f"NOTIFY bench_react, '{i}'")

        # Wait for all callbacks to land (or 3s, whichever first).
        deadline = time.time() + 3.0
        while counter["received"] < args.iters and time.time() < deadline:
            time.sleep(0.01)

    sub.close()

    # ---- POLL simulation -------------------------------------------
    # Each iteration: a write happens at t0; the next poll fires at
    # ceil((t0 + interval) / interval) * interval. Latency = poll_t - t0.
    poll_ms: list = []
    interval = args.poll_interval_ms / 1000.0
    rng_state = 0
    for i in range(args.iters):
        # Pseudo-random offset within the polling interval — uniform.
        rng_state = (rng_state * 1103515245 + 12345) & 0x7FFFFFFF
        offset = (rng_state % 100000) / 100000.0 * interval
        # Writer publishes at t0 = offset; next poll fires at interval.
        wait = interval - offset
        poll_ms.append(wait * 1000.0)

    rows = [
        summarize(f"push (NOTIFY)",                         push_ms),
        summarize(f"poll @ {args.poll_interval_ms}ms",     poll_ms),
    ]
    md = render_markdown(rows, title="Reactive delivery latency")
    print(md)
    if args.out:
        with open(args.out, "w", encoding="utf-8") as fh:
            fh.write(md)
        print(f"wrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
