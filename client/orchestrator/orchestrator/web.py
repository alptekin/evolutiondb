"""
Single-page web UI for the orchestrator. Stdlib http.server, no
build step, no framework — same shape as the inspector.

Five API endpoints back the page:

  GET  /api/sources                connector state list
  POST /api/sources/<name>/start   spawn the connector
  POST /api/sources/<name>/stop    SIGTERM the hub-managed pid
  POST /api/sources/<name>/agent   set the agent-owner label
  GET  /api/clients                AI host config status
  POST /api/clients/<name>/enable  wire MCP block into the host config
  POST /api/clients/<name>/disable remove MCP block from the host config

Binds to 127.0.0.1 only — there is no auth.
"""
from __future__ import annotations

import json
import sys
import urllib.parse
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from typing import Optional

from . import config as cfg_mod
from . import supervisor as sup


INDEX_HTML = """<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<title>EvolutionDB Hub</title>
<style>
  :root { color-scheme: light dark; }
  body { font: 14px/1.5 -apple-system, system-ui, "Segoe UI", sans-serif;
         margin: 1.5rem auto; max-width: 1100px; padding: 0 1rem;
         color: #1a1a1a; }
  header { display: flex; align-items: baseline; justify-content: space-between; }
  h1 { font-size: 1.6rem; margin: 0; font-weight: 600; }
  h2 { font-size: 1.05rem; margin: 1.5rem 0 .6rem; font-weight: 600;
        text-transform: uppercase; letter-spacing: .04em; color: #666; }
  .grid { display: grid; gap: .9rem; grid-template-columns:
          repeat(auto-fill, minmax(290px, 1fr)); }
  .card { border: 1px solid #e5e5e5; border-radius: 8px; padding: 1rem;
          background: #fff; }
  .card h3 { margin: 0 0 .15rem; font-size: 1rem; font-weight: 600; }
  .card .desc { color: #666; font-size: 12.5px; margin-bottom: .8rem; }
  .row { display: flex; justify-content: space-between; align-items: center;
          margin: .35rem 0; font-size: 13px; }
  .row .k { color: #888; }
  .row .v { font-family: ui-monospace, SFMono-Regular, Menlo, monospace;
             font-size: 12.5px; }
  .badge { padding: 2px 8px; border-radius: 999px; font-size: 11px;
            font-weight: 600; text-transform: uppercase; }
  .badge.running   { background: #d1fae5; color: #065f46; }
  .badge.stopped   { background: #fee2e2; color: #991b1b; }
  .badge.external  { background: #fef3c7; color: #92400e; }
  .badge.wired     { background: #d1fae5; color: #065f46; }
  .badge.unwired   { background: #e5e5e5; color: #555; }
  .badge.notinst   { background: #fde2e2; color: #991b1b; }
  .actions { display: flex; gap: .4rem; margin-top: .7rem; }
  button { padding: .35rem .8rem; border: 1px solid #ccc; background: #fff;
            border-radius: 4px; cursor: pointer; font: inherit;
            font-size: 12.5px; }
  button:hover { background: #f5f5f5; }
  button.primary  { background: #4f46e5; color: #fff; border-color: #4f46e5; }
  button.primary:hover  { background: #4338ca; }
  button.danger   { background: #fff; color: #b91c1c; border-color: #fca5a5; }
  button.danger:hover   { background: #fee2e2; }
  button:disabled { opacity: .5; cursor: not-allowed; }
  select, input.agent { font: inherit; font-size: 12.5px; padding: 3px 6px;
                         border: 1px solid #ccc; border-radius: 4px;
                         background: #fff; width: 100%; }
  .links { display: flex; gap: 1rem; margin-top: 2rem; font-size: 13px; }
  .links a { color: #4f46e5; text-decoration: none; }
  .links a:hover { text-decoration: underline; }
  .err { color: #b91c1c; font-size: 12px; margin-top: .5rem; }
  @media (prefers-color-scheme: dark) {
    body { background: #14171b; color: #e8e8e8; }
    h1, h3 { color: #fff; }
    h2 { color: #888; }
    .card { background: #1c1f24; border-color: #2a2d33; }
    .card .desc { color: #999; }
    button { background: #1c1f24; border-color: #333; color: #e8e8e8; }
    button:hover { background: #2a2d33; }
    button.danger { background: #1c1f24; border-color: #5a2424;
      color: #f87171; }
    button.danger:hover { background: #3a1a1a; }
    select, input.agent { background: #1c1f24; border-color: #333;
      color: #e8e8e8; }
    .badge.unwired { background: #2a2d33; color: #aaa; }
  }
</style>
</head>
<body>
<header>
  <h1>evolutiondb hub</h1>
  <div style="font-size:12px;color:#888">
    user_id: <span id="userId" style="font-family:ui-monospace">…</span>
  </div>
</header>

<h2>sync connectors</h2>
<div id="sources" class="grid">loading …</div>

<h2>ai memory clients</h2>
<div id="clients" class="grid">loading …</div>

<div class="links">
  <a href="http://127.0.0.1:8765/" target="_blank">browse memory →</a>
  <a href="https://github.com/alptekin/evolutiondb#evolutiondb-hub"
     target="_blank">docs →</a>
</div>

<script>
function h(s) {
  return String(s == null ? "" : s).replace(/[&<>"']/g, c => (
    {'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
}
async function api(method, url, body) {
  const r = await fetch(url, {
    method,
    headers: body ? {"Content-Type": "application/json"} : undefined,
    body: body ? JSON.stringify(body) : undefined,
  });
  return r.json();
}
async function loadAll() {
  document.getElementById("userId").textContent =
    new URLSearchParams(location.search).get("u") || "alptekin_topal";
  await Promise.all([loadSources(), loadClients()]);
}
async function loadSources() {
  const data = await api("GET", "/api/sources");
  const root = document.getElementById("sources");
  root.innerHTML = "";
  for (const [name, src] of Object.entries(data.sources)) {
    const card = document.createElement("div");
    card.className = "card";
    const state = src.state;
    const mgr   = src.managed_by || "—";
    const badge = state === "running"
        ? (mgr === "external" ? "external" : "running")
        : "stopped";
    const badgeText = state === "running"
        ? (mgr === "external" ? "external" : "running")
        : "stopped";
    card.innerHTML = `
      <h3>${h(src.label)} <span class="badge ${badge}">${badgeText}</span></h3>
      <div class="desc">${h(src.description || "")}</div>
      <div class="row"><span class="k">pid</span>
        <span class="v">${h(src.pid || "—")}</span></div>
      <div class="row"><span class="k">interval</span>
        <span class="v">${h((src.interval || "—") + "s")}</span></div>
      <div class="row"><span class="k">binary</span>
        <span class="v">${src.binary ? "installed" : "not installed"}</span></div>
      <div class="row">
        <span class="k">agent</span>
        <input class="agent" value="${h(src.agent_owner || "")}"
               placeholder="claude / gemini / chatgpt / …"
               data-name="${h(name)}" />
      </div>
      <div class="actions">
        <button class="primary"  data-act="start"  data-name="${h(name)}"
                ${state === "running" || !src.binary ? "disabled" : ""}>
          start</button>
        <button class="danger"   data-act="stop"   data-name="${h(name)}"
                ${state !== "running" || mgr !== "hub" ? "disabled" : ""}>
          stop</button>
      </div>
      <div class="err" data-err="${h(name)}"></div>
    `;
    root.appendChild(card);
  }
  // Buttons
  root.querySelectorAll("button[data-act]").forEach(b => {
    b.addEventListener("click", async () => {
      const name = b.dataset.name, act = b.dataset.act;
      b.disabled = true;
      const r = await api("POST", `/api/sources/${name}/${act}`);
      if (!r.ok) {
        root.querySelector(`[data-err="${name}"]`).textContent =
          r.error || "operation failed";
      }
      loadSources();
    });
  });
  // Agent inputs
  root.querySelectorAll("input.agent").forEach(inp => {
    inp.addEventListener("change", async () => {
      const name = inp.dataset.name;
      await api("POST", `/api/sources/${name}/agent`,
                {agent: inp.value.trim()});
      loadSources();
    });
  });
}
async function loadClients() {
  const data = await api("GET", "/api/clients");
  const root = document.getElementById("clients");
  root.innerHTML = "";
  for (const [name, c] of Object.entries(data.clients)) {
    const card = document.createElement("div");
    card.className = "card";
    const badge = c.state === "wired" ? "wired"
                : c.state === "unwired" ? "unwired" : "notinst";
    card.innerHTML = `
      <h3>${h(c.label)} <span class="badge ${badge}">${h(c.state)}</span></h3>
      <div class="desc">config: <code style="font-family:ui-monospace">${
        h(c.config_path || "(not detected)")}</code></div>
      <div class="actions">
        <button class="primary" data-name="${h(name)}" data-act="enable"
                ${c.state === "wired" ? "disabled" : ""}>enable</button>
        <button class="danger"  data-name="${h(name)}" data-act="disable"
                ${c.state === "wired" ? "" : "disabled"}>disable</button>
      </div>
      <div class="err" data-err="${h(name)}"></div>
    `;
    root.appendChild(card);
  }
  root.querySelectorAll("button[data-act]").forEach(b => {
    b.addEventListener("click", async () => {
      const name = b.dataset.name, act = b.dataset.act;
      b.disabled = true;
      const r = await api("POST", `/api/clients/${name}/${act}`);
      if (!r.ok) {
        root.querySelector(`[data-err="${name}"]`).textContent =
          r.error || "operation failed";
      }
      loadClients();
    });
  });
}
loadAll();
setInterval(loadSources, 10000);
</script>
</body>
</html>
"""


# ---------------------------------------------------------------- #
#  Handler                                                          #
# ---------------------------------------------------------------- #
def _augment_source(name: str) -> dict:
    spec = cfg_mod.get(name)
    s = sup.status(name)
    if spec:
        s["description"] = spec.description
        s["pip_package"] = spec.pip_package
    return s


def _client_state(spec) -> dict:
    """Inspect the on-disk MCP config of an AI host."""
    try:
        from mcp_server_evosql import setup as mcp_setup
    except ImportError:
        return {"label": spec.label, "state": "missing-mcp-package",
                "config_path": None}
    real_spec = next((c for c in mcp_setup.CLIENTS
                       if c.name == spec.name), None)
    if real_spec is None:
        return {"label": spec.label, "state": "unknown",
                "config_path": None}
    path = mcp_setup.resolve_path(real_spec)
    if path is None or not path.exists():
        return {"label": spec.label, "state": "not_installed",
                "config_path": None}
    try:
        data = json.loads(path.read_text(encoding="utf-8"))
        present = bool((data.get("mcpServers") or {})
                        .get("evolutiondb-memory"))
    except Exception:
        return {"label": spec.label, "state": "unreadable",
                "config_path": str(path)}
    return {"label": spec.label,
             "state": "wired" if present else "unwired",
             "config_path": str(path)}


class _Handler(BaseHTTPRequestHandler):
    server_version = "evolutiondb-hub/0.1"

    def log_message(self, *_a, **_k):
        return

    def _send_json(self, code: int, data):
        body = json.dumps(data, ensure_ascii=False).encode("utf-8")
        self.send_response(code)
        self.send_header("Content-Type",
                          "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def _send_html(self, body: str):
        data = body.encode("utf-8")
        self.send_response(200)
        self.send_header("Content-Type", "text/html; charset=utf-8")
        self.send_header("Content-Length", str(len(data)))
        self.end_headers()
        self.wfile.write(data)

    # ---------- routing ----------
    def do_GET(self):
        path, _, _ = self.path.partition("?")
        if path in ("/", "/index.html"):
            return self._send_html(INDEX_HTML)
        if path == "/api/sources":
            sources = {c.name: _augment_source(c.name)
                       for c in cfg_mod.CONNECTORS}
            return self._send_json(200, {"sources": sources})
        if path == "/api/clients":
            clients = {a.name: _client_state(a) for a in cfg_mod.AGENTS}
            return self._send_json(200, {"clients": clients})
        if path == "/api/health":
            return self._send_json(200, {"ok": True})
        self._send_json(404, {"error": "not found"})

    def do_POST(self):
        path, _, _ = self.path.partition("?")
        body = self._read_body()

        # Source ops: /api/sources/<name>/{start|stop|agent}
        if path.startswith("/api/sources/"):
            tail = path[len("/api/sources/"):].split("/")
            if len(tail) == 2:
                name, op = tail
                if op == "start":
                    return self._send_json(
                        200, sup.start(name,
                                         interval=body.get("interval")
                                         if body else None))
                if op == "stop":
                    return self._send_json(200, sup.stop(name))
                if op == "agent":
                    agent = (body or {}).get("agent")
                    if agent and agent.lower() in ("none", "clear", "-"):
                        agent = ""
                    return self._send_json(
                        200, sup.set_agent_owner(name, agent))
            return self._send_json(404, {"error": "not found"})

        # Client ops: /api/clients/<name>/{enable|disable}
        if path.startswith("/api/clients/"):
            tail = path[len("/api/clients/"):].split("/")
            if len(tail) == 2:
                name, op = tail
                return self._handle_client_op(name, op)
            return self._send_json(404, {"error": "not found"})

        self._send_json(404, {"error": "not found"})

    def _read_body(self):
        length = int(self.headers.get("Content-Length", "0") or "0")
        if length <= 0:
            return None
        try:
            return json.loads(self.rfile.read(length).decode("utf-8"))
        except Exception:
            return None

    def _handle_client_op(self, name: str, op: str):
        try:
            from mcp_server_evosql import setup as mcp_setup
        except ImportError:
            return self._send_json(500, {
                "ok": False,
                "error": "mcp-server-evolutiondb not installed"})
        spec = next((c for c in mcp_setup.CLIENTS
                      if c.name == name), None)
        if spec is None:
            return self._send_json(404, {"ok": False,
                                            "error": "unknown client"})
        if op == "enable":
            import os
            r = mcp_setup.configure_client(
                spec,
                user_id=os.environ.get("MCP_USER_ID", "default_user"),
                evosql_port=int(os.environ.get("EVOSQL_PORT", "5433")))
            ok = r.get("status") in {"wrote", "unchanged"}
            return self._send_json(200, {"ok": ok, **r})
        if op == "disable":
            path = mcp_setup.resolve_path(spec)
            if path is None or not path.exists():
                return self._send_json(200, {"ok": True,
                                                "note": "config absent"})
            try:
                data = json.loads(path.read_text(encoding="utf-8"))
            except Exception as exc:
                return self._send_json(500, {"ok": False,
                                                "error": str(exc)})
            servers = data.get("mcpServers") or {}
            servers.pop("evolutiondb-memory", None)
            path.write_text(json.dumps(data, indent=2) + "\n",
                              encoding="utf-8")
            return self._send_json(200, {"ok": True,
                                            "path": str(path),
                                            "removed": True})
        return self._send_json(404, {"ok": False, "error": "unknown op"})


# ---------------------------------------------------------------- #
#  Public entry                                                     #
# ---------------------------------------------------------------- #
def serve(host: str = "127.0.0.1", port: int = 8771) -> int:
    srv = ThreadingHTTPServer((host, port), _Handler)
    print(f"[hub] listening on http://{host}:{port}",
          file=sys.stderr, flush=True)
    try:
        srv.serve_forever()
    except KeyboardInterrupt:
        print("[hub] shutting down", file=sys.stderr, flush=True)
    finally:
        srv.server_close()
    return 0
