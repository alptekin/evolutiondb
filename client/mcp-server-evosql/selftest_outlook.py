#!/usr/bin/env python3
"""
selftest_outlook — prove the action loop end-to-end with a REAL Outlook send.

Manual harness (like selftest_gmail.py). It:
  1. loads AZURE_CLIENT_ID / AZURE_TENANT_ID from the repo-root .env,
  2. runs a ONE-TIME device-code consent for Mail.Send (EVOSQL_OUTLOOK_SEND=1),
     into a dedicated send-token cache so it never touches the read-only sync token,
  3. boots a temp EvolutionDB, registers the real outlook transport,
  4. queues a reply addressed to YOU and approve_send -> Graph /me/sendMail,
  5. prints the result and tears the server down.

Usage (sends a real email to the address you pass — use your own):

    cd client/mcp-server-evosql
    .venv/bin/python selftest_outlook.py you@outlook.com

The consent step prints a URL + code; open the URL, enter the code, approve.
"""
from __future__ import annotations

import os
import subprocess
import sys
import tempfile
import time

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, os.path.join(REPO, "client", "outlook-sync"))   # for outlook_sync


def _load_env():
    path = os.path.join(REPO, ".env")
    if not os.path.exists(path):
        return
    for line in open(path, encoding="utf-8"):
        line = line.strip()
        if line.startswith("#") or "=" not in line:
            continue
        k, v = line.split("=", 1)
        os.environ.setdefault(k.strip(), v.strip().strip('"').strip("'"))


def main() -> int:
    if len(sys.argv) < 2 or "@" not in sys.argv[1]:
        print(__doc__)
        return 2
    to = sys.argv[1].strip()
    body = ("EvolutionDB action-loop self-test ✅ — a real reply sent via the "
            "Outlook transport. You can ignore this.")

    _load_env()
    if not os.environ.get("AZURE_CLIENT_ID"):
        print("AZURE_CLIENT_ID not found in .env")
        return 1
    os.environ["EVOSQL_OUTLOOK_SEND"] = "1"               # request Mail.Send
    send_cache = os.path.expanduser("~/.evosql/outlook_send_token.json")
    os.environ["EVOSQL_OUTLOOK_TOKEN_CACHE"] = send_cache  # dedicated send cache

    # 1) one-time device-code consent for Mail.Send (reused on later runs)
    from outlook_sync.auth import OutlookAuth
    auth = OutlookAuth(os.environ["AZURE_CLIENT_ID"],
                       os.environ.get("AZURE_TENANT_ID", "common"), send_cache)
    print("Authorising Mail.Send (device code — follow the prompt below) …")
    try:
        auth.ensure_token(interactive=True)
    except Exception as exc:
        print(f"auth failed: {exc}")
        return 1
    print("  ✓ send-scoped token ready\n")

    binary = os.path.join(REPO, "adaptor", "evosql-server")
    datadir = tempfile.mkdtemp(prefix="evosql-outlooktest-")
    env = dict(os.environ, EVOSQL_USER_NAME="admin", EVOSQL_PASSWORD="admin")
    srv = subprocess.Popen([binary, "--pg-port", "5599", "--evo-port", "9999"],
                           cwd=datadir, env=env,
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        os.environ["EVOSQL_SEND_ENABLED"] = "1"
        os.environ["EVOSQL_SEND_CHANNELS"] = "outlook"
        from mcp_server_evosql.server import MemoryBackend
        from mcp_server_evosql import outbox, transports

        b = None
        for _ in range(30):
            try:
                b = MemoryBackend("127.0.0.1", 5599, "admin", "admin",
                                  "evosql", "mcpoutlooktest")
                b._query("SELECT 1")
                break
            except Exception:
                time.sleep(0.3)
        if b is None:
            print("could not connect to the temp server")
            return 1

        wired = transports.register_from_env()
        print(f"transports wired: {wired}")
        ns = "selftest_user"
        item = outbox.queue(b, ns, "loop_outlook_selftest", body, channel="outlook",
                            source="outlook", to=to, to_email=to,
                            subject="EvolutionDB action-loop self-test")
        print(f"queued {item['id']} -> {to}\nSENDING a real email now …")
        res = outbox.approve_send(b, ns, item["id"])
        print(f"\nresult: sent={res.get('sent')} dry_run={res.get('dry_run')}")
        if res.get("detail"):
            print(f"detail: {res['detail']}")
        if res.get("sent"):
            print("✅ REAL SEND OK — check your inbox.")
            print(f"   final status: {outbox._load(b, ns, item['id'])['status']}")
        else:
            print("❌ not sent — send_result:", res["item"].get("send_result"))
        return 0 if res.get("sent") else 1
    finally:
        srv.terminate()
        try:
            srv.wait(timeout=5)
        except subprocess.TimeoutExpired:
            srv.kill()


if __name__ == "__main__":
    sys.exit(main())
