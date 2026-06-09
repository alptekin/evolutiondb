#!/usr/bin/env python3
"""
selftest_gmail — prove the action loop end-to-end with a REAL Gmail send.

Throwaway manual harness (like selftest_imessage.py). It:
  1. loads GOOGLE_CLIENT_ID/SECRET from the repo-root .env,
  2. runs a ONE-TIME browser consent for the gmail.send scope (EVOSQL_GMAIL_SEND=1),
     into a dedicated send-token cache so it never touches the read-only sync token,
  3. boots a temp EvolutionDB, registers the real gmail transport,
  4. queues a reply addressed to YOU and approve_send -> users.messages.send,
  5. prints the result and tears the server down.

Usage (sends a real email to the address you pass — use your own):

    cd client/mcp-server-evosql
    .venv/bin/python selftest_gmail.py you@gmail.com
"""
from __future__ import annotations

import os
import subprocess
import sys
import tempfile
import time

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, os.path.join(REPO, "client", "gmail-sync"))   # for gmail_sync


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
            "Gmail transport. You can ignore this.")

    _load_env()
    if not os.environ.get("GOOGLE_CLIENT_ID"):
        print("GOOGLE_CLIENT_ID / GOOGLE_CLIENT_SECRET not found in .env")
        return 1
    os.environ["EVOSQL_GMAIL_SEND"] = "1"                 # request gmail.send
    send_cache = os.path.expanduser("~/.evosql/gmail_send_token.json")
    os.environ["GMAIL_TOKEN_CACHE"] = send_cache          # dedicated send cache

    # 1) one-time browser consent for gmail.send (reused on later runs)
    from gmail_sync.auth import GmailAuth
    auth = GmailAuth(os.environ["GOOGLE_CLIENT_ID"],
                     os.environ["GOOGLE_CLIENT_SECRET"], send_cache)
    print("Authorising gmail.send (a browser window will open for consent) …")
    try:
        auth.ensure_token(interactive=True)
    except Exception as exc:
        print(f"auth failed: {exc}")
        return 1
    print("  ✓ send-scoped token ready\n")

    binary = os.path.join(REPO, "adaptor", "evosql-server")
    datadir = tempfile.mkdtemp(prefix="evosql-gmailtest-")
    env = dict(os.environ, EVOSQL_USER_NAME="admin", EVOSQL_PASSWORD="admin")
    srv = subprocess.Popen([binary, "--pg-port", "5599", "--evo-port", "9999"],
                           cwd=datadir, env=env,
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        os.environ["EVOSQL_SEND_ENABLED"] = "1"
        os.environ["EVOSQL_SEND_CHANNELS"] = "gmail"
        from mcp_server_evosql.server import MemoryBackend
        from mcp_server_evosql import outbox, transports

        b = None
        for _ in range(30):
            try:
                b = MemoryBackend("127.0.0.1", 5599, "admin", "admin",
                                  "evosql", "mcpgmailtest")
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
        item = outbox.queue(b, ns, "loop_gmail_selftest", body, channel="gmail",
                            source="gmail", to=to, to_email=to,
                            subject="EvolutionDB action-loop self-test")
        print(f"queued {item['id']} -> {to}\nSENDING a real email now …")
        res = outbox.approve_send(b, ns, item["id"])
        print(f"\nresult: sent={res.get('sent')} dry_run={res.get('dry_run')}")
        if res.get("detail"):
            print(f"detail: {res['detail']}")
        if res.get("sent"):
            print("✅ REAL SEND OK — check your inbox.")
            print(f"   gmail message id: {res['item']['send_result'].get('id')}")
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
