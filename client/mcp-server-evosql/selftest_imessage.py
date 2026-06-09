#!/usr/bin/env python3
"""
selftest_imessage — prove the action loop end-to-end with a REAL iMessage send.

Throwaway manual harness (NOT a unit test, NOT committed-CI). It:
  1. boots a temporary EvolutionDB (the repo's prebuilt binary) on a test port,
  2. registers the real iMessage transport (EVOSQL_SEND_ENABLED is set here on
     purpose — this script's whole point is to actually send),
  3. queues a reply to a synthetic open loop addressed to YOUR handle,
  4. approve_send -> drives Messages.app via osascript -> a real iMessage,
  5. prints the result and tears the server down.

Usage (run it yourself — it sends a real message to the handle you pass):

    cd client/mcp-server-evosql
    .venv/bin/python selftest_imessage.py "+90XXXXXXXXXX"     # your own number
    .venv/bin/python selftest_imessage.py "you@icloud.com" "merhaba, bu bir test"

The recipient is required and should be YOUR OWN number / Apple ID, so the test
message lands on your own devices. First run may trigger a macOS Automation
permission prompt (allow Terminal to control Messages).
"""
from __future__ import annotations

import os
import subprocess
import sys
import tempfile
import time


def main() -> int:
    if len(sys.argv) < 2 or not sys.argv[1].strip():
        print(__doc__)
        return 2
    handle = sys.argv[1].strip()
    body = sys.argv[2] if len(sys.argv) > 2 else \
        "EvolutionDB action-loop self-test ✅ (you can ignore this)"

    here = os.path.dirname(os.path.abspath(__file__))
    binary = os.path.abspath(os.path.join(here, "..", "..", "adaptor",
                                           "evosql-server"))
    if not os.path.exists(binary):
        print(f"server binary not found at {binary} — run `make adaptor` first")
        return 1

    datadir = tempfile.mkdtemp(prefix="evosql-selftest-")
    env = dict(os.environ, EVOSQL_USER_NAME="admin", EVOSQL_PASSWORD="admin")
    srv = subprocess.Popen([binary, "--pg-port", "5599", "--evo-port", "9999"],
                           cwd=datadir, env=env,
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        # the send locks — set here because this script exists to really send
        os.environ["EVOSQL_SEND_ENABLED"] = "1"
        os.environ["EVOSQL_SEND_CHANNELS"] = "imessage"

        import psycopg  # noqa: F401  (ensure the driver is importable)
        from mcp_server_evosql.server import MemoryBackend
        from mcp_server_evosql import outbox, transports

        # wait for the server to accept connections
        b = None
        for _ in range(30):
            try:
                b = MemoryBackend("127.0.0.1", 5599, "admin", "admin",
                                  "evosql", "mcpselftest")
                b._query("SELECT 1")
                break
            except Exception:
                time.sleep(0.3)
        if b is None:
            print("could not connect to the temp server")
            return 1

        wired = transports.register_from_env()
        print(f"transports wired: {wired}")
        if "imessage" not in wired:
            print("imessage transport not registered — check the send locks")
            return 1

        ns = "selftest_user"
        item = outbox.queue(b, ns, "loop_selftest", body,
                            channel="imessage", source="imessage", to=handle)
        print(f"queued {item['id']} (status={item['status']}) -> {handle}")
        print(f"  body: {body}")

        print("\nSENDING a real iMessage now …")
        res = outbox.approve_send(b, ns, item["id"])
        print(f"\nresult: sent={res.get('sent')} dry_run={res.get('dry_run')}")
        if res.get("detail"):
            print(f"detail: {res['detail']}")
        sr = res.get("item", {}).get("send_result", {})
        if res.get("sent"):
            print("✅ REAL SEND OK — check Messages on your devices.")
            print(f"   final status: {outbox._load(b, ns, item['id'])['status']}")
        else:
            print("❌ not sent — send_result:", sr)
        return 0 if res.get("sent") else 1
    finally:
        srv.terminate()
        try:
            srv.wait(timeout=5)
        except subprocess.TimeoutExpired:
            srv.kill()


if __name__ == "__main__":
    sys.exit(main())
