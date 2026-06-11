#!/usr/bin/env python3
"""
evolution-agent demo — a morning-assistant task end to end.

Run it from the repo (zero setup):

    python client/evolution-agent/examples/demo.py

It auto-starts a throwaway local `evosql-server` (isolated temp data dir,
ephemeral ports) if one isn't already running, then drives the standalone agent
loop through a real multi-step task: recall/save memory and DRAFT a reply that
is queued for approval — and proves nothing was sent (ADR-004).

Model selection:
  • If ANTHROPIC_API_KEY is set and the `anthropic` SDK is installed, the REAL
    model drives the loop (genuine autonomy).
  • Otherwise the demo falls back to a SCRIPTED model: the tool calls, memory,
    and database are 100% real; only the model's decisions are canned, so the
    demo runs offline with no API key.

Nothing is ever delivered: the agent drafts + queues; a human approves.
"""
from __future__ import annotations

import os
import subprocess
import sys
import tempfile
import time
import types
import json
import socket
from pathlib import Path

# --- make the in-repo packages importable without installing -------------
HERE = Path(__file__).resolve()
REPO = HERE.parents[3]                      # .../evolutiondb
sys.path.insert(0, str(REPO / "client" / "evolution-agent"))
sys.path.insert(0, str(REPO / "client" / "mcp-server-evosql"))


def _port_open(host: str, port: int) -> bool:
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.settimeout(0.4)
        return s.connect_ex((host, port)) == 0


def _maybe_start_server():
    """Start a throwaway evosql-server if nothing is on the demo PG port.
    Returns (proc_or_None, tmpdir_or_None) for cleanup."""
    host, port = "127.0.0.1", int(os.environ.get("EVOSQL_PORT", "5610"))
    os.environ.setdefault("EVOSQL_HOST", host)
    os.environ.setdefault("EVOSQL_PORT", str(port))
    os.environ.setdefault("EVOSQL_USER", "admin")
    os.environ.setdefault("EVOSQL_PASSWORD", "admin")
    os.environ.setdefault("MCP_USER_ID", "morning_demo")

    if _port_open(host, port):
        print(f"[demo] using the EvolutionDB already on {host}:{port}")
        return None, None

    binary = REPO / "adaptor" / "evosql-server"
    if not binary.exists():
        print("[demo] no local evosql-server binary found "
              f"({binary}).\n       Build it (`make adaptor`) or run a server "
              "and set EVOSQL_HOST/PORT, or use EVOSQL_EMBEDDED=1.",
              file=sys.stderr)
        sys.exit(1)

    tmp = tempfile.mkdtemp(prefix="evo-agent-demo-")
    env = {**os.environ, "EVOSQL_USER_NAME": "admin", "EVOSQL_PASSWORD": "admin"}
    evo_port = str(port + 4000)             # native EVO port (unused here)
    proc = subprocess.Popen(
        [str(binary), "--pg-port", str(port), "--evo-port", evo_port],
        cwd=tmp, env=env,
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    for _ in range(50):
        if _port_open(host, port):
            break
        time.sleep(0.1)
    print(f"[demo] started a throwaway evosql-server on {host}:{port} (data: {tmp})")
    return proc, tmp


# --- scripted model (used when no ANTHROPIC_API_KEY) ----------------------
def _t(t): return types.SimpleNamespace(type="text", text=t)
def _u(i, n, inp): return types.SimpleNamespace(type="tool_use", id=i, name=n, input=inp)


class _R:
    def __init__(self, c, sr): self.content = c; self.stop_reason = sr


class _ScriptedClient:
    def __init__(self, seq): self._q = list(seq); self.messages = self
    def create(self, **kw): c, sr = self._q.pop(0); return _R(c, sr)


USER = ("Alice cuma'ya kadar Q3 gelir raporuna ihtiyaç duyuyor ve ona bir cevap "
        "borçluyum. Bunu hatırla; sonra Alice'e yarın sabah göndereceğimi söyleyen "
        "kısa bir cevap taslakla ve onayıma sun.")

SCRIPT = [
    ([_t("Önce bunu uzun süreli hafızama kaydediyorum."),
      _u("s1", "save_memory",
         {"fact": "Alice needs the Q3 revenue report by Friday; I owe her a reply.",
          "tags": ["work", "alice", "q3"]})], "tool_use"),
    ([_t("Şimdi Alice'e bir cevap taslaklayıp onay kuyruğuna koyuyorum (göndermeden)."),
      _u("s2", "queue_reply",
         {"loop_key": "alice_q3",
          "body": "Merhaba Alice, Q3 gelir raporunu yarın sabah ilk iş "
                  "gönderiyorum. Teşekkürler!"})], "tool_use"),
    ([_t("Hazır. Alice'e bir cevap taslakladım ve ONAY kuyruğuna koydum — hiçbir "
         "şey gönderilmedi. Onayladığında gidecek.")], "end_turn"),
]


def _on_event(kind, p):
    if kind == "text":
        print(f"🤖 {p['text']}")
    elif kind == "tool_call":
        print(f"   → çağrı: {p['tool']}({json.dumps(p['input'], ensure_ascii=False)})")
    elif kind == "tool_result":
        r = p["result"]
        print(f"   ✓ sonuç: ok={r.get('ok')} {r.get('key') or r.get('id') or ''}")


def main() -> int:
    proc, tmp = _maybe_start_server()
    try:
        from evolution_agent.loop import AgentLoop
        from mcp_server_evosql.server import MCPServer

        real = bool(os.environ.get("ANTHROPIC_API_KEY"))
        try:
            import anthropic  # noqa: F401
        except Exception:
            real = False

        mode = "GERÇEK Claude" if real else "SCRIPTLI model (sandbox: anahtar yok)"
        print("=" * 72)
        print("evolution-agent DEMO  ·  gerçek EvolutionDB  ·  model:", mode)
        print("Tool çağrıları, hafıza ve DB her durumda GERÇEK.")
        print("=" * 72)
        print(f"\n👤 Kullanıcı: {USER}\n")

        server = MCPServer()
        client = None if real else _ScriptedClient(SCRIPT)
        agent = AgentLoop(server, client=client, on_event=_on_event)
        out = agent.run(USER)

        print(f"\n🤖 (son cevap) {out['final_text']}")
        print(f"\n[{out['turns']} tur, bitiş={out['stop_reason']}]")

        print("\n" + "-" * 72)
        print("KANIT 1 — Onay bekleyen taslak (insan onayı olmadan gitmez):")
        pend = server._call_tool("list_pending_replies", {})
        for it in pend.get("pending", []):
            print(f"   • id={it['id']}  status={it['status']}  loop={it['loop_key']}")
            print(f"     body: {it['body']}")
        if not pend.get("pending"):
            print("   (taslak yok — gerçek model bu turda kuyruğa koymamış olabilir)")

        print("\nKANIT 2 — Hafızadan geri arama ('Alice Q3'):")
        res = server._call_tool("search_memory", {"query": "Alice Q3 report"})
        for r in (res.get("results") or [])[:3]:
            print(f"   • {r.get('fact') or r.get('text') or r}")

        print("\n→ Hiçbir şey GÖNDERİLMEDİ. approve_send olmadan teslim yok (ADR-004).")
        return 0
    finally:
        if proc is not None:
            proc.terminate()
            try:
                proc.wait(timeout=5)
            except Exception:
                proc.kill()
        if tmp:
            import shutil
            shutil.rmtree(tmp, ignore_errors=True)


if __name__ == "__main__":
    raise SystemExit(main())
