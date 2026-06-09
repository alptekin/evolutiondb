#!/usr/bin/env python3
"""
selftest_teams — prove the action loop end-to-end with a REAL Teams message.

Manual harness (like selftest_outlook.py). It:
  1. loads AZURE_CLIENT_ID / AZURE_TENANT_ID from the repo-root .env,
  2. runs a ONE-TIME device-code consent for ChatMessage.Send (EVOSQL_TEAMS_SEND=1)
     into a dedicated send-token cache (never touches the read-only sync token),
  3. picks a SAFE target chat — the one you pass, else your self-chat (a chat
     whose only member is you) so the test message lands only on you,
  4. boots a temp EvolutionDB, registers the real teams transport,
  5. queues a reply and approve_send -> Graph POST /chats/{chatId}/messages,
  6. prints the result and tears the server down.

Usage:
    cd client/mcp-server-evosql
    .venv/bin/python selftest_teams.py                # auto: your self-chat
    .venv/bin/python selftest_teams.py 19:abc@thread.v2   # an explicit chat id
"""
from __future__ import annotations

import json
import os
import subprocess
import sys
import tempfile
import time
import urllib.request

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, os.path.join(REPO, "client", "teams-sync"))   # for teams_sync


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


def _graph(token, path):
    req = urllib.request.Request(
        f"https://graph.microsoft.com/v1.0{path}",
        headers={"Authorization": f"Bearer {token}"})
    with urllib.request.urlopen(req, timeout=60) as resp:
        return json.loads(resp.read().decode() or "{}")


def _pick_chat(token):
    """Return (chat_id, label). Prefer the self-chat (members == only me) so the
    test message goes only to you; otherwise return None + print the chat list."""
    me = _graph(token, "/me").get("id")
    chats = _graph(token, "/me/chats?$expand=members&$top=50").get("value", [])
    for c in chats:
        ids = [m.get("userId") for m in c.get("members", []) if m.get("userId")]
        if ids and all(i == me for i in ids):
            return c["id"], "self-chat"
    # no self-chat — don't message someone else automatically; show the options
    print("No self-chat found. Re-run with an explicit chat id, e.g.:\n")
    for c in chats[:15]:
        names = ", ".join(m.get("displayName", "?")
                          for m in c.get("members", []) if m.get("userId") != me)
        print(f"  {c['id']}   [{c.get('chatType')}]  {names or c.get('topic') or ''}")
    return None, None


def main() -> int:
    arg_chat = sys.argv[1].strip() if len(sys.argv) > 1 else ""
    body = ("EvolutionDB action-loop self-test ✅ — a real message sent via the "
            "Teams transport. You can ignore this.")

    _load_env()
    if not os.environ.get("AZURE_CLIENT_ID"):
        print("AZURE_CLIENT_ID not found in .env")
        return 1
    os.environ["EVOSQL_TEAMS_SEND"] = "1"                 # request ChatMessage.Send
    send_cache = os.path.expanduser("~/.evosql/teams_send_token.json")
    os.environ["EVOSQL_TEAMS_TOKEN_CACHE"] = send_cache    # dedicated send cache

    from teams_sync.auth import TeamsAuth
    auth = TeamsAuth(os.environ.get("AZURE_TENANT_ID", "common"),
                     os.environ["AZURE_CLIENT_ID"], send_cache)
    print("Authorising ChatMessage.Send (device code — follow the prompt) …")
    try:
        token = auth.get_token()
    except Exception as exc:
        print(f"auth failed: {exc}")
        return 1
    print("  ✓ send-scoped token ready\n")

    chat_id, label = (arg_chat, "given") if arg_chat else _pick_chat(token)
    if not chat_id:
        return 2
    print(f"target chat: {chat_id}  ({label})\n")

    binary = os.path.join(REPO, "adaptor", "evosql-server")
    datadir = tempfile.mkdtemp(prefix="evosql-teamstest-")
    env = dict(os.environ, EVOSQL_USER_NAME="admin", EVOSQL_PASSWORD="admin")
    srv = subprocess.Popen([binary, "--pg-port", "5599", "--evo-port", "9999"],
                           cwd=datadir, env=env,
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        os.environ["EVOSQL_SEND_ENABLED"] = "1"
        os.environ["EVOSQL_SEND_CHANNELS"] = "teams"
        from mcp_server_evosql.server import MemoryBackend
        from mcp_server_evosql import outbox, transports

        b = None
        for _ in range(30):
            try:
                b = MemoryBackend("127.0.0.1", 5599, "admin", "admin",
                                  "evosql", "mcpteamstest")
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
        item = outbox.queue(b, ns, "loop_teams_selftest", body, channel="teams",
                            source="teams", to="self", thread_id=chat_id)
        print(f"queued {item['id']} -> chat {chat_id}\nSENDING a real message now …")
        res = outbox.approve_send(b, ns, item["id"])
        print(f"\nresult: sent={res.get('sent')} dry_run={res.get('dry_run')}")
        if res.get("detail"):
            print(f"detail: {res['detail']}")
        if res.get("sent"):
            print("✅ REAL SEND OK — check Teams.")
            print(f"   message id: {res['item']['send_result'].get('id')}")
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
