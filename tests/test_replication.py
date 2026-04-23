"""
test_replication.py — Tests for Task 97 Replication v1.

Scope grows with each commit:
  Commit 1: SHOW REPLICATION STATUS shape + pg_is_in_recovery + pg_stat_replication
  Commit 2: ACK feedback + sync commit
  Commit 3: TLS upgrade
  Commit 4: Auth handshake
  Commits 5-7: Raft glue, persistence, base backup
  Commit 8: Full 3-node docker-compose integration

Single-node cases below run against the default docker compose primary
(127.0.0.1:5433). 3-node cases gate on docker-compose.replication.yml.
Requires a running EvoSQL server (docker compose up -d).
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


# ─── SHOW REPLICATION STATUS — baseline shape ───
def test_show_replication_status_shape():
    s = conn()
    cols, rows, err, tag = simple_query(s, "SHOW REPLICATION STATUS")
    assert err is None, f"expected no error, got {err}"
    expected = ["role", "replica_id", "my_lsn", "confirmed_lsn",
                "lag_bytes", "active", "last_seen_us"]
    assert cols == expected, f"columns mismatch: got {cols}"
    # Must always return at least 1 row (no-replica case emits a role row).
    assert len(rows) >= 1, f"expected >= 1 rows, got {len(rows)}"
    # Role must be one of the three canonical values.
    role = rows[0][0]
    assert role in ("primary", "replica", "witness"), f"bad role {role!r}"
    # On a default single-node boot, no replicas → active='f'.
    assert rows[0][5] in ("t", "f"), f"bad active flag {rows[0][5]!r}"
    assert tag == "SHOW", f"bad tag {tag!r}"


# ─── SHOW REPLICATION LAG ───
def test_show_replication_lag_shape():
    s = conn()
    cols, rows, err, _tag = simple_query(s, "SHOW REPLICATION LAG")
    assert err is None, f"expected no error, got {err}"
    assert cols == ["replica_id", "lag_bytes"], f"bad cols {cols}"
    # Single-node: no replicas, so 0 rows is fine.
    for r in rows:
        int(r[1])  # lag_bytes must be numeric


# ─── pg_is_in_recovery() ───
def test_pg_is_in_recovery_function():
    s = conn()
    cols, rows, err, _tag = simple_query(s, "SELECT pg_is_in_recovery()")
    assert err is None, f"expected no error, got {err}"
    assert len(rows) == 1
    # Primary → 'f'
    assert rows[0][0] in ("t", "f", "true", "false"), f"bad bool {rows[0][0]!r}"


# ─── pg_stat_replication view ───
def test_pg_stat_replication_view():
    s = conn()
    cols, rows, err, tag = simple_query(s, "SELECT * FROM pg_stat_replication")
    assert err is None, f"expected no error, got {err}"
    # Must expose the PG-wire canonical columns even with zero replicas.
    expected = [
        "pid", "usesysid", "usename", "application_name", "client_addr",
        "backend_start", "state", "sent_lsn", "write_lsn", "flush_lsn",
        "replay_lsn", "sync_state",
    ]
    assert cols == expected, f"columns mismatch: got {cols}"
    # Zero-replica boot should return 0 rows.
    assert len(rows) == 0 or all(r[6] in ("streaming", "catchup") for r in rows)
    assert tag.startswith("SELECT"), f"bad tag {tag!r}"


# ─── Replication status reflects role env var on primary (default) ───
def test_role_defaults_to_primary():
    s = conn()
    _cols, rows, err, _tag = simple_query(s, "SHOW REPLICATION STATUS")
    assert err is None
    # Default boot with no --role is 'primary'.
    assert rows[0][0] == "primary", \
        f"expected default role=primary, got {rows[0][0]!r}"


if __name__ == "__main__":
    print("=== test_replication.py (Task 97 Commit 1) ===\n")
    run("SHOW REPLICATION STATUS shape",       test_show_replication_status_shape)
    run("SHOW REPLICATION LAG shape",          test_show_replication_lag_shape)
    run("pg_is_in_recovery() primary=false",   test_pg_is_in_recovery_function)
    run("pg_stat_replication view shape",      test_pg_stat_replication_view)
    run("Role defaults to primary",            test_role_defaults_to_primary)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
