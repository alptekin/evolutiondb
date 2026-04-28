"""
temporal/run.py — FOR SYSTEM_TIME AS OF latency benchmark.

Populates a versioned table with N rows, then for K iterations runs

    SELECT * FROM t FOR SYSTEM_TIME AS OF TRANSACTION <xid>

against an XID captured before the most-recent inserts so the engine
must walk the snapshot. Compared against the same SELECT without the
AS OF clause (current snapshot) to surface the cost of historical
visibility.
"""
import argparse
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _common import render_markdown, summarize, timed                    # noqa: E402


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--host", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=9967)
    ap.add_argument("--user", default="admin")
    ap.add_argument("--password", default="admin")
    ap.add_argument("--rows", type=int, default=500)
    ap.add_argument("--iters", type=int, default=200)
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    from evosql_memory import connect

    print(f"=== temporal bench (rows={args.rows}, iters={args.iters}) ===\n")

    with connect(args.host, args.port, args.user, args.password) as conn:
        conn.exec_("DROP TABLE IF EXISTS bm_tmp")
        conn.exec_("CREATE TABLE bm_tmp (id INT PRIMARY KEY, v INT)")

        # Phase 1 — load N rows.
        for i in range(args.rows):
            conn.exec_(f"INSERT INTO bm_tmp VALUES ({i}, {i * 7})")

        # Capture an XID after the load.
        rows = conn.query("SELECT evo_current_xid()")
        xid = int(rows[0][0])

        # Phase 2 — bump every row once so the snapshot diverges from
        # the latest tuple chain.
        for i in range(args.rows):
            conn.exec_(f"UPDATE bm_tmp SET v = {i * 11} WHERE id = {i}")

        # ----- Live snapshot baseline -------------------------------
        live_ms: list = []
        for _ in range(args.iters):
            live_ms.append(timed(lambda:
                                  conn.query("SELECT id, v FROM bm_tmp",
                                             max_rows=args.rows + 4,
                                             max_cols=4,
                                             col_buf_size=64)))

        # ----- AS OF historical snapshot ----------------------------
        asof_ms: list = []
        for _ in range(args.iters):
            asof_ms.append(timed(lambda:
                                  conn.query(
                                      f"SELECT id, v FROM bm_tmp "
                                      f"FOR SYSTEM_TIME AS OF TRANSACTION {xid}",
                                      max_rows=args.rows + 4,
                                      max_cols=4,
                                      col_buf_size=64)))

        conn.exec_("DROP TABLE bm_tmp")

    rows = [
        summarize("select live snapshot",      live_ms),
        summarize("select AS OF historical",   asof_ms),
    ]
    md = render_markdown(rows, title="Temporal-query latency")
    print(md)
    if args.out:
        with open(args.out, "w", encoding="utf-8") as fh:
            fh.write(md)
    return 0


if __name__ == "__main__":
    sys.exit(main())
