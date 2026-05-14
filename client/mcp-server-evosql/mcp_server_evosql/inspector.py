"""
`evolutiondb-inspector` — tiny local web UI for the memory store.

Binds to 127.0.0.1 only; no auth, no TLS. Renders a single page
served from a string literal — no template engine — so the package
stays psycopg-only and ships with zero extra runtime deps.

Three JSON endpoints back the page:

  GET    /api/memories     filterable list of memory rows
  GET    /api/identities   identity catalog (for the sender dropdown)
  DELETE /api/memory/<key> forget one row

Filters are passed as query params and applied in Python — the SQL
side just streams up to 5k recent rows. Fine for personal use, the
order of magnitude is right for an inbox-style browse.
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import urllib.parse
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from typing import Any, Dict, List, Optional


# ---------------------------------------------------------------- #
#  Embedded UI                                                      #
# ---------------------------------------------------------------- #
INDEX_HTML = """<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<title>EvolutionDB Memory Inspector</title>
<style>
  :root { color-scheme: light dark; }
  body { font: 14px/1.5 -apple-system, system-ui, "Segoe UI", sans-serif;
         margin: 2rem; color: #1a1a1a; max-width: 1400px; }
  header { display: flex; align-items: baseline; justify-content: space-between; }
  h1 { font-size: 1.5rem; margin: 0; font-weight: 600; }
  .filters { display: flex; gap: .5rem; margin: 1rem 0; flex-wrap: wrap;
             align-items: center; }
  .filters input, .filters select, .filters button {
    padding: .4rem .65rem; border: 1px solid #ccc; border-radius: 4px;
    font: inherit; background: #fff;
  }
  .filters button { cursor: pointer; }
  .filters button:hover { background: #f5f5f5; }
  table { width: 100%; border-collapse: collapse; margin-top: .5rem; }
  th, td { text-align: left; padding: .55rem .7rem;
           border-bottom: 1px solid #eee; vertical-align: top;
           font-size: 13px; }
  th { background: #fafafa; font-size: 11px; text-transform: uppercase;
       color: #666; letter-spacing: .04em; }
  tr:hover td { background: #fafafa; }
  .src { display: inline-block; padding: 2px 7px; border-radius: 3px;
         font-size: 11px; font-weight: 600; white-space: nowrap; }
  .src.teams   { background: #e0e7ff; color: #1e3a8a; }
  .src.gmail   { background: #fee2e2; color: #991b1b; }
  .src.slack   { background: #fef3c7; color: #92400e; }
  .src.github  { background: #d1fae5; color: #065f46; }
  .src.manual, .src.unknown { background: #eee; color: #444; }
  .fact { max-width: 700px; line-height: 1.45; }
  .when { color: #666; font-size: 12px; white-space: nowrap; }
  .sender { font-size: 13px; }
  .chat   { color: #666; font-size: 11px; }
  button.del { background: #fff; color: #b91c1c; border: 1px solid #fca5a5;
               border-radius: 3px; padding: 2px 7px; cursor: pointer;
               font: inherit; font-size: 12px; }
  button.del:hover { background: #fee2e2; }
  .empty { text-align: center; color: #999; padding: 3rem; }
  .meta { font-size: 12px; color: #666; }
  @media (prefers-color-scheme: dark) {
    body { background: #15171a; color: #e8e8e8; }
    h1 { color: #fff; }
    .filters input, .filters select, .filters button { background: #1f2227;
      border-color: #333; color: #e8e8e8; }
    th { background: #1c1f23; color: #aaa; }
    tr:hover td { background: #1c1f23; }
    th, td { border-bottom-color: #2a2d33; }
    .src.manual, .src.unknown { background: #2a2d33; color: #ccc; }
    .when, .chat, .meta { color: #888; }
    button.del { background: #1f2227; border-color: #5a2424; color: #f87171; }
    button.del:hover { background: #3a1a1a; }
  }
</style>
</head>
<body>
<header>
  <h1>memory inspector</h1>
  <div id="count" class="meta"></div>
</header>
<div class="filters">
  <input id="q" placeholder="text search" size="22" />
  <select id="source">
    <option value="">(any source)</option>
    <option>teams</option><option>gmail</option>
    <option>slack</option><option>github</option>
    <option>manual</option>
  </select>
  <input id="sender" placeholder="sender (substring)" size="22" />
  <select id="limit">
    <option>20</option><option selected>50</option>
    <option>100</option><option>500</option>
  </select>
  <button onclick="load()">refresh</button>
</div>
<table>
<thead><tr>
  <th>when</th><th>source</th><th>sender</th><th>fact</th><th></th>
</tr></thead>
<tbody id="rows"><tr><td colspan="5" class="empty">loading …</td></tr></tbody>
</table>
<script>
function escapeHtml(s) {
  return String(s).replace(/[&<>"']/g, c => (
    {'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
}
async function load() {
  const params = new URLSearchParams();
  for (const id of ['q','source','sender','limit']) {
    const v = document.getElementById(id).value.trim();
    if (v) params.set(id, v);
  }
  const r = await fetch('/api/memories?' + params).then(r => r.json());
  const tbody = document.getElementById('rows');
  tbody.innerHTML = '';
  if (!r.results || !r.results.length) {
    tbody.innerHTML = '<tr><td colspan="5" class="empty">no records</td></tr>';
  } else {
    for (const m of r.results) {
      const tr = document.createElement('tr');
      const when = m.modified_at || m.created_at || m.sent_at || '';
      const src  = (m.source || 'manual').toLowerCase();
      const chat = m.chat_name || m.repo || m.channel_name || '';
      tr.innerHTML = `
        <td class="when">${escapeHtml(when.slice(0,16).replace('T',' '))}</td>
        <td><span class="src ${escapeHtml(src)}">${escapeHtml(src)}</span></td>
        <td>
          <div class="sender">${escapeHtml(m.sender || m.from || m.author || '—')}</div>
          ${chat ? `<div class="chat">${escapeHtml(chat)}</div>` : ''}
        </td>
        <td class="fact">${escapeHtml(m.text || m.snippet || m.body || m.fact || '')}</td>
        <td><button class="del" data-key="${escapeHtml(m._key)}">delete</button></td>
      `;
      tr.querySelector('button.del').addEventListener('click',
        () => del(m._key));
      tbody.appendChild(tr);
    }
  }
  document.getElementById('count').textContent =
    `${r.shown} of ${r.total} record${r.total === 1 ? '' : 's'}`;
}
async function del(key) {
  if (!confirm('Delete this record?\\n\\n' + key)) return;
  await fetch('/api/memory/' + encodeURIComponent(key), {method: 'DELETE'});
  load();
}
['q','sender'].forEach(id => {
  document.getElementById(id).addEventListener('keydown',
    e => { if (e.key === 'Enter') load(); });
});
['source','limit'].forEach(id => {
  document.getElementById(id).addEventListener('change', load);
});
load();
</script>
</body>
</html>
"""


# ---------------------------------------------------------------- #
#  Pure helpers (testable without a DB)                             #
# ---------------------------------------------------------------- #
_STATE_PREFIXES = ("teams_state_", "slack_state_",
                   "github_state_", "gmail_state_")


def is_state_row(key: str) -> bool:
    """Watermark rows are an implementation detail of the connectors;
    the inspector hides them so the user sees only "real" memory."""
    return any(key.startswith(p) for p in _STATE_PREFIXES)


def filter_records(rows: List[Dict[str, Any]], *,
                    q: str = "", source: str = "",
                    sender: str = "") -> List[Dict[str, Any]]:
    """Apply text / source / sender filters in Python. Caller has
    already turned the SQL output into a list of dicts each carrying
    a `_key` field."""
    q       = (q or "").strip().lower()
    source  = (source or "").strip().lower()
    sender  = (sender or "").strip().lower()
    out: List[Dict[str, Any]] = []
    for r in rows:
        if source and (r.get("source") or "").lower() != source:
            continue
        if sender and sender not in (r.get("sender") or "").lower():
            continue
        if q:
            haystack = " ".join([
                str(r.get("fact")    or ""),
                str(r.get("text")    or ""),
                str(r.get("snippet") or ""),
                str(r.get("body")    or ""),
                str(r.get("subject") or ""),
            ]).lower()
            if q not in haystack:
                continue
        out.append(r)
    out.sort(key=lambda x: (x.get("modified_at")
                             or x.get("created_at")
                             or x.get("sent_at")
                             or ""),
              reverse=True)
    return out


# ---------------------------------------------------------------- #
#  HTTP handler                                                     #
# ---------------------------------------------------------------- #
def _e(s: str) -> str:
    if not isinstance(s, str):
        s = str(s)
    return s.replace("'", "''")


def _conn_kwargs():
    return dict(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "5433")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        dbname=os.environ.get("EVOSQL_DATABASE", "evosql"),
        autocommit=True,
    )


def _namespace() -> str:
    return os.environ.get("MCP_USER_ID", "default_user")


def _memory_store_name() -> str:
    return os.environ.get("MCP_STORE_PREFIX", "mcp") + "_mem"


class InspectorHandler(BaseHTTPRequestHandler):
    server_version = "evolutiondb-inspector/1.0"

    # Silence the default per-request access log; the inspector is
    # a single-user local tool and the noise is more confusing than
    # useful.
    def log_message(self, *_a, **_k):
        return

    # -- response helpers -------------------------------------------
    def _send_json(self, code: int, data: Any):
        body = json.dumps(data, ensure_ascii=False).encode("utf-8")
        self.send_response(code)
        self.send_header("Content-Type", "application/json; charset=utf-8")
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

    # -- routes ------------------------------------------------------
    def do_GET(self):
        path, _, qs = self.path.partition("?")
        if path in ("/", "/index.html"):
            return self._send_html(INDEX_HTML)
        if path == "/api/health":
            return self._send_json(200, {"ok": True})
        if path == "/api/memories":
            return self._handle_memories(urllib.parse.parse_qs(qs))
        if path == "/api/identities":
            return self._handle_identities()
        self._send_json(404, {"error": "not found"})

    def do_DELETE(self):
        path = self.path
        if path.startswith("/api/memory/"):
            key = urllib.parse.unquote(path[len("/api/memory/"):])
            return self._handle_delete(key)
        self._send_json(404, {"error": "not found"})

    # -- handlers ---------------------------------------------------
    def _handle_memories(self, qs):
        import psycopg
        q       = (qs.get("q",      [""])[0])
        source  = (qs.get("source", [""])[0])
        sender  = (qs.get("sender", [""])[0])
        try:
            limit = max(1, min(2000, int(qs.get("limit", ["50"])[0])))
        except ValueError:
            limit = 50
        ns    = _namespace()
        store = _memory_store_name()

        # Stream up to 5k recent rows; Python-side filter narrows
        # down. Plenty of headroom for personal use.
        try:
            with psycopg.connect(**_conn_kwargs()) as conn:
                with conn.cursor() as cur:
                    cur.execute(
                        f"SELECT mem_key, mem_value FROM __mem_{store} "
                        f"WHERE mem_namespace = '{_e(ns)}' LIMIT 5000")
                    raw = cur.fetchall()
        except Exception as exc:
            return self._send_json(503, {"error": f"db unavailable: {exc}"})

        records = []
        for k, v in raw:
            if is_state_row(k):
                continue
            try:
                r = json.loads(v) if isinstance(v, str) else v
            except (TypeError, ValueError):
                continue
            if not isinstance(r, dict):
                continue
            r.pop("emb", None)            # don't ship the vector
            r["_key"] = k
            records.append(r)

        filtered = filter_records(records, q=q, source=source, sender=sender)
        total = len(filtered)
        self._send_json(200, {
            "total":   total,
            "shown":   min(total, limit),
            "results": filtered[:limit],
        })

    def _handle_identities(self):
        import psycopg
        ns = _namespace()
        try:
            with psycopg.connect(**_conn_kwargs()) as conn:
                with conn.cursor() as cur:
                    try:
                        cur.execute(
                            f"SELECT mem_value FROM __mem_mcp_identities "
                            f"WHERE mem_namespace = '{_e(ns)}'")
                        rows = cur.fetchall()
                    except Exception:
                        rows = []
        except Exception as exc:
            return self._send_json(503, {"error": f"db unavailable: {exc}"})

        out = []
        for (v,) in rows:
            try:
                r = json.loads(v) if isinstance(v, str) else v
            except (TypeError, ValueError):
                continue
            if isinstance(r, dict) and r.get("canonical_name"):
                out.append({"canonical_name": r["canonical_name"],
                             "aliases": r.get("aliases") or []})
        out.sort(key=lambda x: (x.get("canonical_name") or "").lower())
        self._send_json(200, {"identities": out})

    def _handle_delete(self, key: str):
        import psycopg
        ns    = _namespace()
        store = _memory_store_name()
        try:
            with psycopg.connect(**_conn_kwargs()) as conn:
                with conn.cursor() as cur:
                    cur.execute(
                        f"MEMORY DELETE FROM {store} "
                        f"WHERE NS='{_e(ns)}' AND KEY='{_e(key)}'")
        except Exception as exc:
            return self._send_json(503, {"error": str(exc)})
        self._send_json(200, {"ok": True, "key": key})


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-inspector",
        description="Local web UI for browsing the EvolutionDB "
                    "memory store.")
    parser.add_argument("--port", type=int,
        default=int(os.environ.get("EVOSQL_INSPECTOR_PORT", "8765")),
        help="TCP port (default 8765)")
    parser.add_argument("--host", default="127.0.0.1",
        help="Bind address. The inspector has no auth — keep this "
             "on a loopback interface unless you know what you are "
             "doing (default 127.0.0.1)")
    args = parser.parse_args(argv)

    try:
        import psycopg  # noqa: F401
    except ImportError:
        print("evolutiondb-inspector requires psycopg. "
              "pip install 'psycopg[binary]>=3.1'", file=sys.stderr)
        return 1

    srv = ThreadingHTTPServer((args.host, args.port), InspectorHandler)
    print(f"[inspector] listening on http://{args.host}:{args.port}",
          file=sys.stderr)
    print(f"[inspector] namespace={_namespace()} "
          f"store={_memory_store_name()}", file=sys.stderr)
    try:
        srv.serve_forever()
    except KeyboardInterrupt:
        print("[inspector] shutting down", file=sys.stderr)
    finally:
        srv.server_close()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
