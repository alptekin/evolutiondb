"""
bench_dml_profile.py — run the plan DELETE/UPDATE benchmark against a
server started with EVOSQL_DML_PROFILE=1 and aggregate the per-helper
timings from /tmp/evosql_dml_profile.log.

Usage:
    kill existing server
    rm -f /tmp/evosql_dml_profile.log
    EVOSQL_PASSWORD=admin EVOSQL_DML_PROFILE=1 ./adaptor/evosql-server \
        > /tmp/evosql.log 2>&1 &
    python3 tests/bench_dml_profile.py

Scenario: 6 iterations of
    CREATE TABLE items (id INTEGER PRIMARY KEY, val VARCHAR(50))
    INSERT 10000 rows
    DELETE FROM items WHERE id <= 5000
    UPDATE items SET val='u' WHERE id <= 7000
    DROP TABLE items
First 2 runs discarded as warm-up; final report is the average of the
last 4 runs.
"""

import os
import re
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pg_helpers import conn, simple_query

PROFILE_LOG = "/tmp/evosql_dml_profile.log"
RUNS = 6
WARMUP = 2


def parse_profile_log(path):
    """Parse [DML-PROF] blocks into list of dicts:
       {kind, rows, stmt_total_ms, loop_total_ms, helpers: {name: (calls, total_ms)}}"""
    blocks = []
    cur = None
    header_re = re.compile(
        r"^\[DML-PROF\] (\w+) (\d+) rows\s+stmt_total=([\d.]+) ms\s+loop_total=([\d.]+) ms"
    )
    row_re = re.compile(
        r"^  (\S+)\s+(\S+)\s+([\d.]+)\s+(\S+)\s+(\S+)"
    )
    with open(path) as f:
        for line in f:
            m = header_re.match(line)
            if m:
                if cur:
                    blocks.append(cur)
                cur = {
                    "kind": m.group(1),
                    "rows": int(m.group(2)),
                    "stmt_total_ms": float(m.group(3)),
                    "loop_total_ms": float(m.group(4)),
                    "helpers": {},
                }
                continue
            if not cur:
                continue
            if line.startswith("  slot"):
                continue
            m = row_re.match(line)
            if m:
                name = m.group(1)
                if name == "[unaccounted]":
                    # calls == "-"
                    total_ms = float(m.group(3))
                    cur["helpers"][name] = (0, total_ms)
                else:
                    try:
                        calls = int(m.group(2))
                        total_ms = float(m.group(3))
                        cur["helpers"][name] = (calls, total_ms)
                    except ValueError:
                        pass
    if cur:
        blocks.append(cur)
    return blocks


def run_scenario(iteration):
    s = conn(user="admin", password="admin", database="testdb")
    tbl = f"bench_items_{iteration}"
    simple_query(s, f"DROP TABLE IF EXISTS {tbl}")
    simple_query(s,
        f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, val VARCHAR(50))")
    t0 = time.time()
    for i in range(1, 10001):
        simple_query(s, f"INSERT INTO {tbl} VALUES ({i}, 'v{i}')")
    t_ins = (time.time() - t0) * 1000

    t0 = time.time()
    simple_query(s, f"DELETE FROM {tbl} WHERE id <= 5000")
    t_del = (time.time() - t0) * 1000

    t0 = time.time()
    simple_query(s, f"UPDATE {tbl} SET val = 'u' WHERE id <= 7000")
    t_upd = (time.time() - t0) * 1000

    simple_query(s, f"DROP TABLE {tbl}")
    s.close()
    return t_ins, t_del, t_upd


def average_blocks(blocks, kind):
    """Average all blocks of a given kind ('DELETE' or 'UPDATE')."""
    filtered = [b for b in blocks if b["kind"] == kind]
    if not filtered:
        return None
    n = len(filtered)
    avg = {
        "kind": kind,
        "n": n,
        "rows": filtered[0]["rows"],
        "stmt_total_ms": sum(b["stmt_total_ms"] for b in filtered) / n,
        "loop_total_ms": sum(b["loop_total_ms"] for b in filtered) / n,
        "helpers": {},
    }
    # union of helper names across blocks
    names = set()
    for b in filtered:
        names.update(b["helpers"].keys())
    for name in names:
        calls_sum = 0
        total_sum = 0.0
        count = 0
        for b in filtered:
            if name in b["helpers"]:
                c, t = b["helpers"][name]
                calls_sum += c
                total_sum += t
                count += 1
        avg["helpers"][name] = (
            calls_sum // max(count, 1),
            total_sum / max(count, 1),
        )
    return avg


def format_avg(avg):
    if not avg:
        return "(no data)\n"
    lines = []
    lines.append(
        f"[AVG n={avg['n']}] {avg['kind']} {avg['rows']} rows  "
        f"stmt_total={avg['stmt_total_ms']:.2f} ms  "
        f"loop_total={avg['loop_total_ms']:.2f} ms"
    )
    lines.append(
        f"  {'slot':<20} {'calls':>8} {'total_ms':>12} "
        f"{'avg_us':>10} {'%loop':>8}"
    )
    items = sorted(avg["helpers"].items(), key=lambda kv: -kv[1][1])
    loop_ms = avg["loop_total_ms"]
    for name, (calls, total_ms) in items:
        avg_us = (total_ms * 1000.0 / calls) if calls else 0.0
        pct = (100.0 * total_ms / loop_ms) if loop_ms else 0.0
        if name == "[unaccounted]":
            lines.append(
                f"  {name:<20} {'-':>8} {total_ms:>12.2f} "
                f"{'-':>10} {pct:>7.1f}"
            )
        else:
            lines.append(
                f"  {name:<20} {calls:>8} {total_ms:>12.2f} "
                f"{avg_us:>10.2f} {pct:>7.1f}"
            )
    return "\n".join(lines) + "\n"


def main():
    if not os.path.exists(PROFILE_LOG):
        print(f"Warning: {PROFILE_LOG} does not exist. Is the server "
              f"started with EVOSQL_DML_PROFILE=1?")
    print(f"Running {RUNS} iterations, first {WARMUP} discarded as warm-up...")

    # Ensure bench database exists
    s = conn(user="admin", password="admin", database="testdb")
    simple_query(s, "CREATE DATABASE IF NOT EXISTS testdb")
    s.close()

    wall_times = []
    for i in range(RUNS):
        try:
            t_ins, t_del, t_upd = run_scenario(i)
            wall_times.append((t_ins, t_del, t_upd))
            tag = "warmup" if i < WARMUP else "measure"
            print(
                f"  run {i+1} ({tag}): INS={t_ins:.0f} "
                f"DEL={t_del:.0f} UPD={t_upd:.0f}"
            )
        except Exception as e:
            print(f"  run {i+1} failed: {e}")
            return 1

    measured = wall_times[WARMUP:]
    avg_ins = sum(t[0] for t in measured) / len(measured)
    avg_del = sum(t[1] for t in measured) / len(measured)
    avg_upd = sum(t[2] for t in measured) / len(measured)
    print()
    print(
        f"Wall-clock averages (last {len(measured)} runs): "
        f"INS={avg_ins:.0f} ms  DEL={avg_del:.0f} ms  UPD={avg_upd:.0f} ms"
    )
    print()

    # Parse and average the profile log. Skip the first WARMUP blocks
    # per kind.
    blocks = parse_profile_log(PROFILE_LOG)
    print(f"Parsed {len(blocks)} [DML-PROF] blocks from {PROFILE_LOG}")
    del_blocks = [b for b in blocks if b["kind"] == "DELETE"][WARMUP:]
    upd_blocks = [b for b in blocks if b["kind"] == "UPDATE"][WARMUP:]

    avg_del_prof = average_blocks(del_blocks, "DELETE")
    avg_upd_prof = average_blocks(upd_blocks, "UPDATE")

    print()
    print(format_avg(avg_del_prof))
    print(format_avg(avg_upd_prof))

    return 0


if __name__ == "__main__":
    sys.exit(main())
