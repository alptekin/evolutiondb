"""
Web UI for the orchestrator. Stdlib http.server, no build step, no
framework. Five real pages share a sidebar shell and reuse a small
base script; each page loads only the endpoint it needs.

Routes
------
  GET  /                          Hub overview (bento status grid)
  GET  /connectors                Sync connector detail cards
  GET  /clients                   AI memory client cards
  GET  /tunnel                    MCP tunnel + cloudflared + OAuth
  GET  /inspector                 Embedded memory inspector

JSON API (unchanged across the redesign)
----------------------------------------
  GET  /api/sources
  GET  /api/clients
  GET  /api/tunnel
  GET  /api/inspector
  GET  /api/health
  POST /api/sources/<name>/{start|stop|schedule|unschedule|install|auth|agent}
  POST /api/clients/<name>/{enable|disable|install}
  POST /api/tunnel/{start|stop}
  POST /api/inspector/{start|stop}

Binds to 127.0.0.1 only; no auth.
"""
from __future__ import annotations

import json
import sys
import urllib.parse
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from typing import Optional

from . import config as cfg_mod
from . import inspector_mgr as inspect_mod
from . import install as install_mod
from . import schedule as sched_mod
from . import supervisor as sup
from . import tunnel as tunnel_mod


_STATIC_DIR = Path(__file__).resolve().parent / "static"
_STATIC_MIME = {
    ".png":  "image/png",
    ".jpg":  "image/jpeg",
    ".jpeg": "image/jpeg",
    ".svg":  "image/svg+xml",
    ".webp": "image/webp",
    ".ico":  "image/x-icon",
    ".css":  "text/css; charset=utf-8",
    ".js":   "application/javascript; charset=utf-8",
}


# ================================================================ #
#  Shared shell                                                     #
# ================================================================ #
_HEAD_HTML = """<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<script src="https://cdn.tailwindcss.com?plugins=forms,container-queries"></script>
<link href="https://fonts.googleapis.com/css2?family=Geist:wght@400;500;600;700&family=JetBrains+Mono:wght@400;500&display=swap" rel="stylesheet">
<link href="https://fonts.googleapis.com/icon?family=Material+Symbols+Outlined" rel="stylesheet">
<script>
  tailwind.config = {
    darkMode: 'class',
    theme: {
      extend: {
        colors: {
          'primary':                 '#2a14b4',
          'on-primary':              '#ffffff',
          'primary-container':       '#4338ca',
          'on-primary-container':    '#c1beff',
          'primary-fixed':           '#e3dfff',
          'on-primary-fixed':        '#100069',
          'secondary':               '#515f74',
          'on-secondary':            '#ffffff',
          'secondary-container':     '#d5e3fc',
          'on-secondary-container':  '#57657a',
          'tertiary':                '#692400',
          'tertiary-container':      '#8f3400',
          'on-tertiary-container':   '#ffb393',
          'tertiary-fixed':          '#ffdbcd',
          'on-tertiary-fixed':       '#360f00',
          'error':                   '#ba1a1a',
          'on-error':                '#ffffff',
          'error-container':         '#ffdad6',
          'on-error-container':      '#93000a',
          'surface':                 '#f7f9fb',
          'surface-bright':          '#f7f9fb',
          'surface-container-low':   '#f2f4f6',
          'surface-container':       '#eceef0',
          'surface-container-high':  '#e6e8ea',
          'surface-container-highest':'#e0e3e5',
          'outline':                 '#777586',
          'outline-variant':         '#c7c4d7',
          'on-surface':              '#191c1e',
          'on-surface-variant':      '#464554',
          'background':              '#f7f9fb',
          'on-background':           '#191c1e',
        },
        fontFamily: {
          sans: ['Geist', 'system-ui', 'sans-serif'],
          mono: ['JetBrains Mono', 'ui-monospace', 'monospace'],
        },
        spacing: {
          base: '4px', xs: '8px', sm: '12px', md: '16px',
          lg: '24px', xl: '32px',
        },
      },
    },
  };
</script>
<style>
  body { font-family: 'Geist', system-ui, sans-serif; }
  code, .font-mono { font-family: 'JetBrains Mono', ui-monospace, monospace; }
  a { text-decoration: none; }
  .material-symbols-outlined {
    font-variation-settings: 'FILL' 0, 'wght' 400, 'GRAD' 0, 'opsz' 24;
    vertical-align: middle;
    font-size: 20px;
  }
  .glass-card {
    background: rgba(255, 255, 255, 0.78);
    backdrop-filter: blur(8px);
    border: 1px solid #c7c4d7;
  }
  .status-badge {
    padding: 2px 8px;
    border-radius: 4px;
    font-size: 10px;
    font-weight: 700;
    text-transform: uppercase;
    letter-spacing: 0.04em;
    white-space: nowrap;
  }
  @keyframes pulse-soft { 0%,100%{opacity:1} 50%{opacity:.55} }
  .status-pulse { animation: pulse-soft 2s ease-in-out infinite; }
  .err { color: #ba1a1a; font-size: 11.5px; margin-top: 6px;
         line-height: 1.4; word-break: break-word; }
</style>
"""


_BASE_JS = """
function h(s) {
  return String(s == null ? '' : s).replace(/[&<>"']/g, c => (
    {'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
}
async function api(method, url, body) {
  const r = await fetch(url, {
    method,
    headers: body ? {'Content-Type': 'application/json'} : undefined,
    body:    body ? JSON.stringify(body) : undefined,
  });
  return r.json();
}
const USER_ID =
  new URLSearchParams(location.search).get('u') || 'alptekin_topal';
const userEl = document.getElementById('userId');
if (userEl) userEl.textContent = USER_ID;
const mobileEl = document.getElementById('userIdMobile');
if (mobileEl) mobileEl.textContent = USER_ID;
"""


_NAV_ITEMS = [
    ("hub",        "/",            "dashboard",       "Hub"),
    ("connectors", "/connectors",  "sync",            "Connectors"),
    ("clients",    "/clients",     "neurology",       "Memory Clients"),
    ("tunnel",     "/tunnel",      "lan",             "MCP Tunnel"),
    ("inspector",  "/inspector",   "search_insights", "Inspector"),
]


def _sidebar(active: str) -> str:
    items = []
    for key, href, icon, label in _NAV_ITEMS:
        if key == active:
            cls = ("font-semibold bg-secondary-container "
                   "text-on-secondary-container")
        else:
            cls = ("text-on-surface-variant "
                   "hover:bg-surface-container-high")
        items.append(
            f'<a href="{href}" class="flex items-center gap-sm '
            f'p-sm rounded-lg {cls}">'
            f'<span class="material-symbols-outlined">{icon}</span>'
            f'<span>{label}</span></a>')
    nav_html = "\n    ".join(items)
    return (
        '<aside class="hidden lg:flex flex-col h-screen fixed left-0 '
        'top-0 p-md z-40 bg-surface-container-low '
        'border-r border-outline-variant w-64">\n'
        '  <a href="/" class="flex items-center gap-sm mb-xl px-xs '
        'group">\n'
        '    <img src="/static/logo.png" alt="evolutiondb" '
        'class="w-14 h-14 object-contain shrink-0 '
        'transition-transform group-hover:scale-105">\n'
        '    <div class="leading-tight">\n'
        '      <h1 class="text-[15px] font-bold text-on-surface">'
        'memory hub</h1>\n'
        '      <p class="text-[10px] text-on-surface-variant '
        'opacity-70 mt-1 font-mono" id="userId">…</p>\n'
        '    </div>\n'
        '  </a>\n'
        '  <nav class="flex-1 space-y-base">\n'
        f'    {nav_html}\n'
        '  </nav>\n'
        '  <div class="mt-auto pt-md border-t border-outline-variant '
        'space-y-base text-xs">\n'
        '    <a class="flex items-center gap-sm p-sm '
        'text-on-surface-variant hover:bg-surface-container-high '
        'rounded-lg" '
        'href="https://github.com/alptekin/evolutiondb#evolutiondb-hub" '
        'target="_blank">'
        '<span class="material-symbols-outlined">description</span>'
        '<span>Documentation</span></a>\n'
        '  </div>\n'
        '</aside>\n'
    )


def _mobile_header(page_title: str) -> str:
    return (
        '<header class="flex justify-between items-center px-md py-sm '
        'bg-background border-b border-outline-variant lg:hidden '
        'sticky top-0 z-30">\n'
        '  <a href="/" class="flex items-center gap-xs">\n'
        '    <img src="/static/logo.png" alt="evolutiondb" '
        'class="w-10 h-10 object-contain shrink-0">\n'
        f'    <h1 class="text-base font-bold text-on-surface">'
        f'{page_title}</h1>\n'
        '  </a>\n'
        '  <span class="font-mono text-xs text-on-surface-variant" '
        'id="userIdMobile">…</span>\n'
        '</header>\n'
    )


def _page(active: str, doc_title: str, header_title: str,
            main_html: str, page_js: str) -> str:
    return (
        '<!doctype html>\n'
        '<html class="light" lang="en">\n'
        '<head>\n'
        f'<title>{doc_title}</title>\n'
        f'{_HEAD_HTML}'
        '</head>\n'
        '<body class="bg-background text-on-background">\n'
        f'{_sidebar(active)}'
        f'{_mobile_header(header_title)}'
        '<main class="lg:ml-64 p-md lg:p-xl min-h-screen">\n'
        '  <div class="max-w-7xl mx-auto space-y-xl">\n'
        f'{main_html}\n'
        '  </div>\n'
        '</main>\n'
        '<script>\n'
        f'{_BASE_JS}\n'
        f'{page_js}\n'
        '</script>\n'
        '</body>\n'
        '</html>\n'
    )


# ================================================================ #
#  Page: Hub overview                                               #
# ================================================================ #
_HUB_MAIN = """
    <section id="section-hub">
      <div class="mb-xl">
        <h2 class="text-2xl md:text-3xl font-bold text-on-surface mb-xs">
          System Health Overview</h2>
        <p class="text-on-surface-variant max-w-2xl text-sm">
          Real-time status of every sync connector, AI memory client,
          MCP tunnel, and the embedded memory inspector. Each tile
          opens its dedicated page.</p>
      </div>
      <div id="hub-grid" class="grid grid-cols-12 gap-md">
        <div class="col-span-12 text-on-surface-variant text-sm">
          loading…</div>
      </div>
    </section>
"""

_HUB_JS = """
async function loadHub() {
  const root = document.getElementById('hub-grid');
  let s, c, t, i;
  try {
    [s, c, t, i] = await Promise.all([
      api('GET', '/api/sources'),
      api('GET', '/api/clients'),
      api('GET', '/api/tunnel'),
      api('GET', '/api/inspector'),
    ]);
  } catch (e) {
    root.innerHTML =
      '<div class="col-span-12 text-error text-sm">' +
      'failed to load overview</div>';
    return;
  }

  const sources = Object.values(s.sources || {});
  const clients = Object.values(c.clients || {});
  const running   = sources.filter(x => x.state === 'running').length;
  const totalSrc  = sources.length;
  const scheduled = sources.filter(x => x.scheduled).length;
  const installed = sources.filter(x => x.binary).length;
  const wired     = clients.filter(x => x.state === 'wired').length;
  const totalCli  = clients.length;
  const notInst   = clients.filter(
    x => x.state === 'not_installed').length;

  const tunnelRunning = !!t.running;
  const publicUrl = t.public_url
    ? (t.public_url + (t.public_url.endsWith('/mcp') ? '' : '/mcp'))
    : '—';
  const inspectorRunning = !!i.running;

  const tunnelCard = `
    <a href="/tunnel"
       class="col-span-12 md:col-span-8 glass-card rounded-xl p-lg
              shadow-sm hover:shadow-md transition-all
              flex flex-col gap-md">
      <div class="flex items-center justify-between gap-md">
        <div class="flex items-center gap-sm">
          <div class="p-xs bg-primary/10 rounded-lg text-primary">
            <span class="material-symbols-outlined">lan</span>
          </div>
          <h3 class="text-base font-semibold text-on-surface">
            MCP Tunnel</h3>
        </div>
        <span class="status-badge ${tunnelRunning
          ? 'bg-primary-container text-white'
          : 'bg-error-container text-on-error-container'}">
          ${tunnelRunning ? 'running' : 'stopped'}</span>
      </div>
      <div class="grid grid-cols-3 gap-md">
        <div>
          <div class="text-[10px] uppercase tracking-widest
                      text-on-surface-variant">port</div>
          <div class="font-mono text-on-surface text-base mt-1">${
            t.port || 8970}</div>
        </div>
        <div>
          <div class="text-[10px] uppercase tracking-widest
                      text-on-surface-variant">cloudflared</div>
          <div class="text-base mt-1 font-semibold ${t.cloudflared
            ? 'text-primary' : 'text-on-surface-variant'}">${
            t.cloudflared ? 'running' : 'stopped'}</div>
        </div>
        <div>
          <div class="text-[10px] uppercase tracking-widest
                      text-on-surface-variant">oauth</div>
          <div class="text-base mt-1 font-semibold ${t.oauth
            ? 'text-primary' : 'text-on-surface-variant'}">${
            t.oauth ? 'running' : 'stopped'}</div>
        </div>
      </div>
      <div class="mt-auto pt-md border-t border-outline-variant
                  flex items-center gap-sm">
        <div class="w-2 h-2 rounded-full ${tunnelRunning
          ? 'bg-emerald-500 status-pulse' : 'bg-error'}"></div>
        <span class="text-xs text-on-surface-variant break-all">${
          h(publicUrl)}</span>
      </div>
    </a>
  `;

  const clientsCard = `
    <a href="/clients"
       class="col-span-12 md:col-span-4 bg-primary text-white
              rounded-xl p-lg shadow-sm hover:shadow-md transition-all
              flex flex-col justify-between">
      <div class="flex justify-between items-start mb-md">
        <span class="material-symbols-outlined text-2xl">neurology</span>
        <span class="status-badge bg-white/20 text-white">${
          wired === totalCli ? 'all wired' : 'partial'}</span>
      </div>
      <div>
        <p class="text-xs opacity-80 mb-1">Active Memory Clients</p>
        <h4 class="text-4xl font-bold leading-none">${
          String(wired).padStart(2, '0')}<span
            class="text-xl opacity-70"> / ${
              String(totalCli).padStart(2, '0')}</span></h4>
      </div>
      <div class="pt-md border-t border-white/20 mt-md text-xs">
        ${notInst > 0
          ? notInst + ' host' + (notInst === 1 ? '' : 's') +
            ' need install. Tap to set up.'
          : 'Every supported host is wired to memory.'}
      </div>
    </a>
  `;

  const statCard = (icon, label, value, sub, href, accent) => `
    <a href="${href}"
       class="col-span-12 md:col-span-4 bg-white border
              border-outline-variant rounded-xl p-lg shadow-sm
              hover:shadow-md transition-all
              flex flex-col gap-sm">
      <div class="flex items-center justify-between">
        <div class="p-xs bg-${accent}/10 rounded-lg text-${accent}">
          <span class="material-symbols-outlined">${icon}</span>
        </div>
        <span class="text-[10px] uppercase tracking-widest
                     text-on-surface-variant">${label}</span>
      </div>
      <div class="text-3xl font-bold text-on-surface leading-none">${
        value}</div>
      <div class="text-xs text-on-surface-variant">${sub}</div>
    </a>
  `;

  const connectorsCard = statCard(
    'sync', 'Sync Connectors',
    `${running}<span class="text-base text-on-surface-variant
       font-medium"> / ${totalSrc}</span>`,
    `${installed} installed · ${scheduled} scheduled`,
    '/connectors', 'primary');

  const inspectorCard = statCard(
    'search_insights', 'Memory Inspector',
    inspectorRunning ? 'live' : 'offline',
    inspectorRunning
      ? '127.0.0.1:' + (i.port || 8765) + ' — running'
      : 'Tap to start the browser-side inspector',
    '/inspector',
    inspectorRunning ? 'primary' : 'error');

  const installCard = statCard(
    'extension', 'Sources Installed',
    `${installed}<span class="text-base text-on-surface-variant
       font-medium"> / ${totalSrc}</span>`,
    (totalSrc - installed) + ' need pip install',
    '/connectors', 'primary');

  root.innerHTML = tunnelCard + clientsCard +
                    connectorsCard + inspectorCard + installCard;
}
loadHub();
setInterval(loadHub, 10000);
"""


# ================================================================ #
#  Page: Connectors                                                 #
# ================================================================ #
_CONNECTORS_MAIN = """
    <section id="section-sources">
      <div class="flex flex-col md:flex-row md:items-end
                  md:justify-between gap-md mb-lg">
        <div>
          <div class="flex items-center gap-sm mb-xs">
            <span class="material-symbols-outlined text-primary">sync</span>
            <h2 class="text-2xl md:text-3xl font-bold text-on-surface">
              Sync Connectors</h2>
          </div>
          <p class="text-on-surface-variant max-w-2xl text-sm">
            Background daemons that pull data into your memory store.
            Add your own to register a connector you have built.</p>
        </div>
        <button id="addBtn"
          class="self-start md:self-auto bg-primary text-white px-md
                 py-2 rounded-lg text-xs font-bold flex items-center
                 gap-xs hover:bg-primary-container transition-colors">
          <span class="material-symbols-outlined text-base">add</span>
          Add Connector
        </button>
      </div>
      <div id="sources"
           class="grid grid-cols-1 md:grid-cols-2 xl:grid-cols-3 gap-lg">
        <div class="text-on-surface-variant text-sm">loading…</div>
      </div>
    </section>

    <div id="addModal"
         class="hidden fixed inset-0 z-50 bg-black/40 backdrop-blur-sm
                flex items-center justify-center p-md">
      <div class="bg-white rounded-xl shadow-xl max-w-md w-full
                  p-lg overflow-y-auto max-h-[90vh]">
        <div class="flex items-center justify-between mb-md">
          <h3 class="text-lg font-semibold text-on-surface">
            Add Connector</h3>
          <button data-close
            class="text-on-surface-variant hover:text-on-surface
                   text-2xl leading-none">&times;</button>
        </div>
        <p class="text-xs text-on-surface-variant mb-md">
          Register a sync connector. The PyPI package must expose a
          console script that writes into the evolutiondb memory
          store. After adding, the install button on the new card
          will pip install the package.</p>
        <form id="addForm" class="space-y-sm">
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              name (id)</label>
            <input name="name" required pattern="[a-zA-Z0-9_\\-]+"
              placeholder="notion"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              display label</label>
            <input name="label" placeholder="Notion"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              pip package</label>
            <input name="pip_package"
              placeholder="evolutiondb-notion-sync"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              cli entry</label>
            <input name="cli_entry"
              placeholder="evolutiondb-notion-sync"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              module name (ps detection)</label>
            <input name="module_name"
              placeholder="notion_sync"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              description</label>
            <input name="description"
              placeholder="Pages, databases, blocks."
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              poll interval (seconds)</label>
            <input name="poll_default" type="number" value="900"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div class="err"></div>
          <div class="flex justify-end gap-xs pt-sm">
            <button type="button" data-close
              class="px-md py-2 text-xs font-bold border
                     border-outline-variant rounded
                     hover:bg-surface-container-high">cancel</button>
            <button type="submit"
              class="px-md py-2 text-xs font-bold bg-primary text-white
                     rounded hover:bg-primary-container">add</button>
          </div>
        </form>
      </div>
    </div>
"""

_CONNECTORS_JS = """
function sourceBadge(state, managed) {
  if (state === 'running' && managed === 'external')
    return ['tertiary-fixed', 'on-tertiary-fixed', 'external'];
  if (state === 'running')
    return ['primary-container', 'white', 'running'];
  return ['error-container', 'on-error-container', 'stopped'];
}

async function loadSources() {
  const data = await api('GET', '/api/sources');
  const root = document.getElementById('sources');
  root.innerHTML = '';
  for (const [name, src] of Object.entries(data.sources)) {
    const card = document.createElement('div');
    card.className = 'glass-card rounded-xl p-lg shadow-sm';
    const [bg, fg, label] = sourceBadge(src.state, src.managed_by);
    const running = src.state === 'running';
    const canStart = !running && src.binary;
    const canStop  = running && src.managed_by === 'hub';
    const canBoot  = !!src.binary;
    card.innerHTML = `
      <div class="flex justify-between items-start mb-base">
        <h3 class="text-base font-semibold text-on-surface">
          ${h(src.label)}</h3>
        <span class="status-badge bg-${bg} text-${fg}">${label}</span>
      </div>
      <p class="text-xs text-on-surface-variant mb-md leading-relaxed">
        ${h(src.description || '')}</p>
      <div class="grid grid-cols-2 gap-xs text-xs mb-lg">
        <span class="text-on-surface-variant">pid</span>
        <span class="text-right font-mono">${h(src.pid || '—')}</span>
        <span class="text-on-surface-variant">interval</span>
        <span class="text-right font-mono">${
          h((src.interval || '—') + 's')}</span>
        <span class="text-on-surface-variant">binary</span>
        <span class="text-right font-medium ${
          src.binary ? 'text-primary' : 'text-error'}">${
          src.binary ? 'installed' : 'not installed'}</span>
      </div>
      <div class="space-y-sm">
        <div class="flex items-center gap-xs">
          <span class="text-xs text-on-surface-variant w-12">agent</span>
          <input class="agent flex-1 bg-surface-container-low
            border border-outline-variant rounded px-xs py-1 font-mono
            text-xs text-primary focus:ring-1 focus:ring-primary
            focus:outline-none"
            value="${h(src.agent_owner || '')}"
            placeholder="claude / gemini / chatgpt"
            data-name="${h(name)}">
        </div>
        <div class="flex justify-between items-center
                    bg-surface-container-low p-xs rounded">
          <span class="text-[10px] text-on-surface-variant uppercase
                       tracking-wider">boot</span>
          <span class="text-[10px] font-bold ${
            src.scheduled
              ? 'text-primary'
              : 'text-on-surface-variant opacity-60'}">
            ${src.scheduled ? 'SCHEDULED' : 'MANUAL'}
          </span>
        </div>
        <div class="flex flex-wrap gap-xs pt-xs
                    border-t border-outline-variant">
          <button data-act="start" data-name="${h(name)}"
            class="bg-primary text-white px-md py-1.5 rounded-lg
                   text-[11px] font-bold hover:bg-primary-container
                   transition-colors disabled:opacity-40
                   disabled:cursor-not-allowed"
            ${canStart ? '' : 'disabled'}>start</button>
          <button data-act="stop" data-name="${h(name)}"
            class="bg-white border border-outline-variant
                   text-error px-md py-1.5 rounded-lg text-[11px]
                   font-bold hover:bg-error-container/10
                   transition-colors disabled:opacity-40
                   disabled:cursor-not-allowed"
            ${canStop ? '' : 'disabled'}>stop</button>
          <button data-act="${src.scheduled ? 'unschedule' : 'schedule'}"
            data-name="${h(name)}"
            class="bg-white border border-outline-variant
                   text-on-surface px-md py-1.5 rounded-lg text-[11px]
                   font-bold hover:bg-surface-container-high
                   transition-colors disabled:opacity-40
                   disabled:cursor-not-allowed"
            ${canBoot ? '' : 'disabled'}>${
            src.scheduled ? 'unschedule' : 'schedule'}</button>
        </div>
        <div class="flex flex-wrap gap-xs">
          <button data-act="install" data-name="${h(name)}"
            data-long="1"
            class="bg-white border border-outline-variant
                   text-primary px-md py-1.5 rounded-lg text-[11px]
                   font-bold hover:bg-primary/5 transition-colors">${
            src.binary ? 'reinstall' : 'install'}</button>
          <button data-act="auth" data-name="${h(name)}"
            class="bg-white border border-outline-variant
                   text-on-surface px-md py-1.5 rounded-lg text-[11px]
                   font-bold hover:bg-surface-container-high
                   transition-colors disabled:opacity-40
                   disabled:cursor-not-allowed"
            ${src.binary ? '' : 'disabled'}>authenticate</button>
        </div>
        <div class="err" data-err="${h(name)}"></div>
      </div>
    `;
    root.appendChild(card);
  }
  root.querySelectorAll('button[data-act]').forEach(b => {
    b.addEventListener('click', async () => {
      const name = b.dataset.name, act = b.dataset.act;
      const errEl = root.querySelector(`[data-err="${name}"]`);
      const label = b.textContent;
      b.disabled = true;
      if (act === 'install') b.textContent = 'installing…';
      else if (act === 'auth') b.textContent = 'running auth…';
      else b.textContent = '…';
      const r = await api('POST', `/api/sources/${name}/${act}`);
      b.textContent = label;
      errEl.textContent = '';
      errEl.classList.remove('text-primary');
      if (!r.ok) {
        errEl.textContent = r.error || 'operation failed';
      } else if (act === 'install') {
        errEl.classList.add('text-primary');
        errEl.textContent = 'installed ' + (r.binary || '');
      } else if (act === 'auth') {
        errEl.classList.add('text-primary');
        if (r.auth_kind === 'env') {
          errEl.textContent = 'edit ' + r.env_path + ' — ' +
                              (r.hint || '');
        } else {
          errEl.textContent = 'auth started (pid ' + r.pid + '). ' +
                              (r.hint || 'check your browser.');
        }
      }
      loadSources();
    });
  });
  root.querySelectorAll('input.agent').forEach(inp => {
    inp.addEventListener('change', async () => {
      const name = inp.dataset.name;
      await api('POST', `/api/sources/${name}/agent`,
                {agent: inp.value.trim()});
      loadSources();
    });
  });
}
loadSources();
setInterval(loadSources, 10000);

// ---------------------------------------------------------- //
//  Add Connector modal                                        //
// ---------------------------------------------------------- //
(function () {
  const modal = document.getElementById('addModal');
  const form  = document.getElementById('addForm');
  const open  = document.getElementById('addBtn');
  const errEl = form.querySelector('.err');
  const show  = () => { modal.classList.remove('hidden'); };
  const hide  = () => { modal.classList.add('hidden');
                          form.reset();
                          errEl.textContent = ''; };
  open.addEventListener('click', show);
  modal.addEventListener('click', e => {
    if (e.target === modal ||
        e.target.dataset.close !== undefined) hide();
  });
  form.addEventListener('submit', async e => {
    e.preventDefault();
    errEl.textContent = '';
    const fd = new FormData(form);
    const payload = {};
    for (const [k, v] of fd.entries()) {
      const s = String(v).trim();
      if (!s) continue;
      payload[k] = k === 'poll_default' ? Number(s) : s;
    }
    const submitBtn = form.querySelector('button[type="submit"]');
    submitBtn.disabled = true;
    submitBtn.textContent = 'adding…';
    const r = await api('POST', '/api/sources/new', payload);
    submitBtn.disabled = false;
    submitBtn.textContent = 'add';
    if (!r.ok) {
      errEl.classList.add('text-error');
      errEl.textContent = r.error || 'failed to add';
      return;
    }
    hide();
    loadSources();
  });
})();
"""


# ================================================================ #
#  Page: Memory Clients                                             #
# ================================================================ #
_CLIENTS_MAIN = """
    <section id="section-clients">
      <div class="flex flex-col md:flex-row md:items-end
                  md:justify-between gap-md mb-lg">
        <div>
          <div class="flex items-center gap-sm mb-xs">
            <span class="material-symbols-outlined text-primary">
              neurology</span>
            <h2 class="text-2xl md:text-3xl font-bold text-on-surface">
              Memory Clients</h2>
          </div>
          <p class="text-on-surface-variant max-w-2xl text-sm">
            AI hosts wired to the evolutiondb-memory MCP server.
            Add your own to register a host the hub does not know
            about yet.</p>
        </div>
        <button id="addBtn"
          class="self-start md:self-auto bg-primary text-white px-md
                 py-2 rounded-lg text-xs font-bold flex items-center
                 gap-xs hover:bg-primary-container transition-colors">
          <span class="material-symbols-outlined text-base">add</span>
          Add Memory Client
        </button>
      </div>
      <div id="clients"
           class="grid grid-cols-1 md:grid-cols-2 xl:grid-cols-3 gap-lg">
        <div class="text-on-surface-variant text-sm">loading…</div>
      </div>
    </section>

    <div id="addModal"
         class="hidden fixed inset-0 z-50 bg-black/40 backdrop-blur-sm
                flex items-center justify-center p-md">
      <div class="bg-white rounded-xl shadow-xl max-w-md w-full
                  p-lg overflow-y-auto max-h-[90vh]">
        <div class="flex items-center justify-between mb-md">
          <h3 class="text-lg font-semibold text-on-surface">
            Add Memory Client</h3>
          <button data-close
            class="text-on-surface-variant hover:text-on-surface
                   text-2xl leading-none">&times;</button>
        </div>
        <p class="text-xs text-on-surface-variant mb-md">
          Register an MCP-capable AI host. The hub uses the config
          path to detect installation and the install command to
          set it up on click.</p>
        <form id="addForm" class="space-y-sm">
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              name (id)</label>
            <input name="name" required pattern="[a-zA-Z0-9_\\-]+"
              placeholder="cursor"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              display label</label>
            <input name="label" placeholder="Cursor"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              darwin config path</label>
            <input name="darwin_path"
              placeholder="~/Library/Application Support/Cursor/mcp.json"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              install command (space-separated)</label>
            <input name="install_cmd"
              placeholder="brew install --cask cursor"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              cli binary (optional)</label>
            <input name="cli_command" placeholder="cursor"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              env override variable (optional)</label>
            <input name="env_override"
              placeholder="EVOSQL_CURSOR_CONFIG"
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     font-mono text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div>
            <label class="text-[10px] font-bold uppercase
                          tracking-wider text-on-surface-variant">
              restart hint</label>
            <input name="restart_hint"
              placeholder="Quit and reopen the app."
              class="mt-1 w-full bg-surface-container-low border
                     border-outline-variant rounded px-sm py-2
                     text-sm focus:outline-none focus:ring-1
                     focus:ring-primary">
          </div>
          <div class="err"></div>
          <div class="flex justify-end gap-xs pt-sm">
            <button type="button" data-close
              class="px-md py-2 text-xs font-bold border
                     border-outline-variant rounded
                     hover:bg-surface-container-high">cancel</button>
            <button type="submit"
              class="px-md py-2 text-xs font-bold bg-primary text-white
                     rounded hover:bg-primary-container">add</button>
          </div>
        </form>
      </div>
    </div>
"""

_CLIENTS_JS = """
function clientBadge(state) {
  if (state === 'wired')
    return ['primary-fixed', 'on-primary-fixed', 'wired'];
  if (state === 'unwired')
    return ['surface-container-high', 'on-surface-variant', 'unwired'];
  if (state === 'not_installed')
    return ['error-container', 'on-error-container', 'not installed'];
  return ['tertiary-fixed', 'on-tertiary-fixed',
          state.replace('_', ' ')];
}

async function loadClients() {
  const data = await api('GET', '/api/clients');
  const root = document.getElementById('clients');
  root.innerHTML = '';
  for (const [name, c] of Object.entries(data.clients)) {
    const [bg, fg, label] = clientBadge(c.state);
    const showInstall = c.state === 'not_installed' && c.installable;
    const canEnable   = !(c.state === 'wired' ||
                          c.state === 'not_installed');
    const canDisable  = c.state === 'wired';
    const card = document.createElement('div');
    card.className =
      'bg-white rounded-xl border border-outline-variant ' +
      'p-lg flex flex-col justify-between shadow-sm';
    card.innerHTML = `
      <div>
        <div class="flex items-center justify-between gap-xs mb-xs">
          <h3 class="text-base font-semibold text-on-surface">
            ${h(c.label)}</h3>
          <span class="status-badge bg-${bg} text-${fg}">${label}</span>
        </div>
        <p class="text-[11px] text-on-surface-variant
                  leading-relaxed break-all">
          config <span class="font-mono">${
            h(c.config_path || '(not detected)')}</span></p>
      </div>
      <div class="flex flex-wrap gap-xs mt-lg">
        ${showInstall ? `<button data-act="install" data-long="1"
          data-name="${h(name)}"
          class="bg-primary text-white px-md py-2 rounded-lg
                 text-[11px] font-bold hover:bg-primary-container
                 transition-colors">install</button>` : ''}
        <button data-act="enable" data-name="${h(name)}"
          class="bg-primary text-white px-md py-2 rounded-lg
                 text-[11px] font-bold hover:bg-primary-container
                 transition-colors disabled:opacity-40
                 disabled:cursor-not-allowed"
          ${canEnable ? '' : 'disabled'}>enable</button>
        <button data-act="disable" data-name="${h(name)}"
          class="bg-white border border-error text-error px-md py-2
                 rounded-lg text-[11px] font-bold
                 hover:bg-error-container/30 transition-colors
                 disabled:opacity-40 disabled:cursor-not-allowed
                 disabled:hover:bg-white"
          ${canDisable ? '' : 'disabled'}>disable</button>
      </div>
      <div class="err" data-err="${h(name)}"></div>
    `;
    root.appendChild(card);
  }
  root.querySelectorAll('button[data-act]').forEach(b => {
    b.addEventListener('click', async () => {
      const name = b.dataset.name, act = b.dataset.act;
      const errEl = root.querySelector(`[data-err="${name}"]`);
      const orig  = b.textContent;
      b.disabled = true;
      if (b.dataset.long) {
        b.textContent = 'installing…';
        errEl.classList.remove('text-primary');
        errEl.textContent =
          'this can take several minutes (brew/npm download).';
      }
      const r = await api('POST', `/api/clients/${name}/${act}`);
      if (!r.ok) {
        errEl.classList.remove('text-primary');
        errEl.textContent =
          (r.error || 'operation failed') +
          (r.tail
            ? ' — ' + r.tail.split('\\n').slice(-3).join(' / ')
            : '');
      } else if (b.dataset.long) {
        errEl.classList.add('text-primary');
        errEl.textContent =
          'installed. ' + (r.log ? 'log: ' + r.log : '');
      } else {
        errEl.textContent = '';
      }
      b.textContent = orig;
      loadClients();
    });
  });
}
loadClients();

// ---------------------------------------------------------- //
//  Add Memory Client modal                                    //
// ---------------------------------------------------------- //
(function () {
  const modal = document.getElementById('addModal');
  const form  = document.getElementById('addForm');
  const open  = document.getElementById('addBtn');
  const errEl = form.querySelector('.err');
  const show  = () => { modal.classList.remove('hidden'); };
  const hide  = () => { modal.classList.add('hidden');
                          form.reset();
                          errEl.textContent = ''; };
  open.addEventListener('click', show);
  modal.addEventListener('click', e => {
    if (e.target === modal ||
        e.target.dataset.close !== undefined) hide();
  });
  form.addEventListener('submit', async e => {
    e.preventDefault();
    errEl.textContent = '';
    const fd = new FormData(form);
    const get = k => String(fd.get(k) || '').trim();
    const payload = {
      name:         get('name'),
      label:        get('label'),
      cli_command:  get('cli_command'),
      env_override: get('env_override'),
      restart_hint: get('restart_hint'),
    };
    const darwin = get('darwin_path');
    if (darwin) payload.paths = {darwin: [darwin],
                                   linux:  [darwin],
                                   win32:  [darwin]};
    const cmd = get('install_cmd');
    if (cmd) payload.install_cmd = cmd.split(/\\s+/);
    const submitBtn = form.querySelector('button[type="submit"]');
    submitBtn.disabled = true;
    submitBtn.textContent = 'adding…';
    const r = await api('POST', '/api/clients/new', payload);
    submitBtn.disabled = false;
    submitBtn.textContent = 'add';
    if (!r.ok) {
      errEl.classList.add('text-error');
      errEl.textContent = r.error || 'failed to add';
      return;
    }
    hide();
    loadClients();
  });
})();
"""


# ================================================================ #
#  Page: MCP Tunnel                                                 #
# ================================================================ #
_TUNNEL_MAIN = """
    <section id="section-tunnel">
      <div class="mb-lg">
        <div class="flex items-center gap-sm mb-xs">
          <span class="material-symbols-outlined text-primary">lan</span>
          <h2 class="text-2xl md:text-3xl font-bold text-on-surface">
            MCP Tunnel</h2>
        </div>
        <p class="text-on-surface-variant max-w-2xl text-sm">
          The streamable HTTP transport for web-side AI hosts.
          Cloudflared exposes it on a quick tunnel; an OAuth 2.1
          proxy guards the public URL so ChatGPT-class clients
          can connect.</p>
      </div>
      <div id="tunnel">
        <div class="text-on-surface-variant text-sm">loading…</div>
      </div>
    </section>
"""

_TUNNEL_JS = """
async function loadTunnel() {
  const t = await api('GET', '/api/tunnel');
  const root = document.getElementById('tunnel');
  root.innerHTML = '';
  const card = document.createElement('div');
  card.className = 'glass-card rounded-xl p-lg shadow-sm';
  const stateBg = t.running
    ? 'bg-primary-container text-white'
    : 'bg-error-container text-on-error-container';
  const stateText = t.running ? 'running' : 'stopped';
  const cfdState  = t.cloudflared ? 'running' : 'stopped';
  const oauthState= t.oauth ? 'running' : 'stopped';
  const publicUrl = t.public_url
    ? (t.public_url + (t.public_url.endsWith('/mcp') ? '' : '/mcp'))
    : '—';
  card.innerHTML = `
    <div class="flex flex-col md:flex-row md:justify-between
                md:items-center gap-md mb-lg">
      <div>
        <div class="flex items-center gap-md mb-base">
          <h3 class="text-base font-semibold text-on-surface">
            evolutiondb-mcp-http</h3>
          <span class="status-badge ${stateBg}">${stateText}</span>
        </div>
        <p class="text-xs text-on-surface-variant">
          Streamable HTTP transport for web hosts (ChatGPT, Gemini,
          Claude on the web).</p>
      </div>
      <div class="flex flex-wrap gap-xs items-center">
        <span class="status-badge ${t.cloudflared
            ? 'bg-primary/10 text-primary status-pulse'
            : 'bg-surface-container-high text-on-surface-variant'}">
          cloudflared ${cfdState}</span>
        <span class="status-badge ${t.oauth
            ? 'bg-primary/10 text-primary status-pulse'
            : 'bg-surface-container-high text-on-surface-variant'}">
          oauth ${oauthState}</span>
      </div>
    </div>
    <div class="space-y-sm font-mono text-xs
                border-y border-outline-variant py-lg mb-lg">
      <div class="flex flex-col sm:flex-row sm:justify-between gap-sm">
        <span class="text-on-surface-variant">local url</span>
        <span class="text-on-surface text-right break-all">${
          t.running ? 'http://127.0.0.1:' + t.port + '/mcp' : '—'}</span>
      </div>
      <div class="flex flex-col sm:flex-row sm:justify-between gap-sm">
        <span class="text-on-surface-variant">public url</span>
        <span class="text-primary font-semibold text-right break-all">${
          h(publicUrl)}</span>
      </div>
      <div class="flex flex-col sm:flex-row sm:justify-between gap-sm">
        <span class="text-on-surface-variant">bearer</span>
        <span class="text-on-surface text-right">${
          t.token ? (t.token.slice(0,8) + '…(copy below)') : '—'}</span>
      </div>
    </div>
    <div class="flex flex-wrap gap-xs">
      <button data-act="start"
        class="bg-primary text-white px-md py-2 rounded-lg
               text-[11px] font-bold hover:bg-primary-container
               transition-colors disabled:opacity-40
               disabled:cursor-not-allowed"
        ${t.running ? 'disabled' : ''}>start</button>
      <button data-act="stop"
        class="bg-white border border-error text-error px-md py-2
               rounded-lg text-[11px] font-bold
               hover:bg-error-container/30 transition-colors
               disabled:opacity-40 disabled:cursor-not-allowed
               disabled:hover:bg-white"
        ${t.running ? '' : 'disabled'}>stop</button>
      ${t.token
        ? `<button data-act="copy-token"
              class="bg-white border border-outline-variant
                     text-on-surface px-md py-2 rounded-lg text-[11px]
                     font-bold hover:bg-surface-container-high
                     transition-colors">copy token</button>` : ''}
      ${t.public_url
        ? `<button data-act="copy-url"
              class="bg-white border border-outline-variant
                     text-on-surface px-md py-2 rounded-lg text-[11px]
                     font-bold hover:bg-surface-container-high
                     transition-colors">copy public url</button>` : ''}
    </div>
    <div class="err" data-err="tunnel"></div>
  `;
  root.appendChild(card);
  card.querySelectorAll('button[data-act]').forEach(b => {
    b.addEventListener('click', async () => {
      const act = b.dataset.act;
      if (act === 'copy-token') {
        await navigator.clipboard.writeText(t.token);
        b.textContent = 'copied!';
        setTimeout(() => b.textContent = 'copy token', 1500);
        return;
      }
      if (act === 'copy-url') {
        await navigator.clipboard.writeText(publicUrl);
        b.textContent = 'copied!';
        setTimeout(() => b.textContent = 'copy public url', 1500);
        return;
      }
      b.disabled = true;
      const r = await api('POST', `/api/tunnel/${act}`);
      if (!r.ok) {
        card.querySelector('[data-err="tunnel"]').textContent =
          r.error || 'operation failed';
      }
      loadTunnel();
    });
  });
}
loadTunnel();
setInterval(loadTunnel, 10000);
"""


# ================================================================ #
#  Page: Memory Inspector                                           #
# ================================================================ #
_INSPECTOR_MAIN = """
    <section id="section-inspector" class="pb-xl">
      <div class="mb-lg">
        <div class="flex items-center gap-sm mb-xs">
          <span class="material-symbols-outlined text-primary">
            search_insights</span>
          <h2 class="text-2xl md:text-3xl font-bold text-on-surface">
            Memory Inspector</h2>
        </div>
        <p class="text-on-surface-variant max-w-2xl text-sm">
          Browse and delete records across every source. The
          inspector binary runs on 127.0.0.1:8765 and embeds below
          once started.</p>
      </div>
      <div id="inspector"></div>
    </section>
"""

_INSPECTOR_JS = """
async function loadInspector() {
  const r = await api('GET', '/api/inspector');
  const root = document.getElementById('inspector');
  if (r.running && r.url) {
    root.innerHTML = `
      <div class="glass-card rounded-xl overflow-hidden shadow-md
                  border-t-4 border-t-primary">
        <div class="flex flex-wrap items-center justify-between gap-sm
                    p-sm border-b border-outline-variant
                    bg-surface-container-low/40">
          <div class="text-xs text-on-surface-variant">
            embedded <span class="font-mono">${h(r.url)}</span>
          </div>
          <div class="flex items-center gap-sm">
            <a class="text-primary text-xs font-bold underline
                      hover:no-underline"
               href="${h(r.url)}" target="_blank">open in new tab</a>
            <button data-act="stop"
              class="bg-white border border-outline-variant
                     text-error px-md py-1 rounded text-[11px]
                     font-bold hover:bg-error-container/30
                     transition-colors">stop</button>
          </div>
        </div>
        <iframe src="${h(r.url)}"
          style="width:100%;height:720px;border:0;display:block"></iframe>
      </div>
    `;
    root.querySelector('button[data-act="stop"]')
        .addEventListener('click', async () => {
      await api('POST', '/api/inspector/stop');
      loadInspector();
    });
  } else {
    root.innerHTML = `
      <div class="glass-card rounded-xl p-lg shadow-sm">
        <div class="flex items-center justify-between gap-md mb-md">
          <h3 class="text-base font-semibold text-on-surface">
            memory inspector</h3>
          <span class="status-badge bg-error-container
                       text-on-error-container">stopped</span>
        </div>
        <p class="text-xs text-on-surface-variant mb-lg leading-relaxed">
          The inspector is not running. Tap below to spawn it on
          127.0.0.1:8765 and embed its UI here.</p>
        <button data-act="start"
          class="bg-primary text-white px-lg py-2 rounded-lg
                 text-[11px] font-bold hover:bg-primary-container
                 transition-colors">start inspector</button>
        <div class="err" data-err="inspector"></div>
      </div>
    `;
    root.querySelector('button[data-act="start"]')
        .addEventListener('click', async () => {
      const r = await api('POST', '/api/inspector/start');
      if (!r.ok) {
        root.querySelector('[data-err="inspector"]').textContent =
          r.error || 'failed to start';
      }
      setTimeout(loadInspector, 800);
    });
  }
}
loadInspector();
"""


# ================================================================ #
#  Handler                                                          #
# ================================================================ #
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
                "config_path": None, "installable": False}
    real_spec = next((c for c in mcp_setup.CLIENTS
                       if c.name == spec.name), None)
    if real_spec is None:
        return {"label": spec.label, "state": "unknown",
                "config_path": None, "installable": False}
    installable = bool(getattr(real_spec, "install_cmd", []))
    cli = getattr(real_spec, "cli_command", "")
    path = mcp_setup.resolve_path(real_spec)
    if path is None or not path.exists():
        import shutil as _sh
        if cli and _sh.which(cli):
            # Binary is on PATH but the host hasn't created its
            # config yet — bootstrap-from-scratch is supported, so
            # surface as unwired (install button gone, enable on).
            return {"label": spec.label, "state": "unwired",
                    "config_path": str(path) if path else None,
                    "installable": False}
        return {"label": spec.label, "state": "not_installed",
                "config_path": None, "installable": installable}
    try:
        data = json.loads(path.read_text(encoding="utf-8"))
        present = bool((data.get("mcpServers") or {})
                        .get("evolutiondb-memory"))
    except Exception:
        return {"label": spec.label, "state": "unreadable",
                "config_path": str(path), "installable": False}
    return {"label": spec.label,
             "state": "wired" if present else "unwired",
             "config_path": str(path), "installable": False}


_ROUTES = {
    "/":            ("hub", "evolutiondb memory hub", "evolutiondb memory hub",
                      _HUB_MAIN,        _HUB_JS),
    "/connectors":  ("connectors", "Connectors — evolutiondb memory hub",
                      "Connectors",
                      _CONNECTORS_MAIN, _CONNECTORS_JS),
    "/clients":     ("clients", "Memory Clients — evolutiondb memory hub",
                      "Memory Clients",
                      _CLIENTS_MAIN,    _CLIENTS_JS),
    "/tunnel":      ("tunnel", "MCP Tunnel — evolutiondb memory hub",
                      "MCP Tunnel",
                      _TUNNEL_MAIN,     _TUNNEL_JS),
    "/inspector":   ("inspector", "Memory Inspector — evolutiondb memory hub",
                      "Memory Inspector",
                      _INSPECTOR_MAIN,  _INSPECTOR_JS),
}


class _Handler(BaseHTTPRequestHandler):
    server_version = "evolutiondb-hub/0.2"

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

    def _send_static(self, name: str):
        # Defend against path traversal and only serve files that
        # actually live under _STATIC_DIR.
        try:
            target = (_STATIC_DIR / name).resolve()
            target.relative_to(_STATIC_DIR.resolve())
        except (ValueError, OSError):
            return self._send_json(404, {"error": "not found"})
        if not target.is_file():
            return self._send_json(404, {"error": "not found"})
        mime = _STATIC_MIME.get(target.suffix.lower(),
                                  "application/octet-stream")
        data = target.read_bytes()
        self.send_response(200)
        self.send_header("Content-Type", mime)
        self.send_header("Content-Length", str(len(data)))
        self.send_header("Cache-Control", "public, max-age=86400")
        self.end_headers()
        self.wfile.write(data)

    # ---------- routing ----------
    def do_GET(self):
        path, _, _ = self.path.partition("?")
        # Trim trailing slash so /connectors and /connectors/ match.
        if len(path) > 1 and path.endswith("/"):
            path = path[:-1]
        if path == "/index.html":
            path = "/"
        if path.startswith("/static/"):
            return self._send_static(path[len("/static/"):])
        page = _ROUTES.get(path)
        if page is not None:
            active, doc_title, header_title, main_html, page_js = page
            return self._send_html(
                _page(active, doc_title, header_title,
                        main_html, page_js))
        if path == "/api/sources":
            sources = {c.name: _augment_source(c.name)
                       for c in cfg_mod.CONNECTORS}
            return self._send_json(200, {"sources": sources})
        if path == "/api/clients":
            clients = {a.name: _client_state(a) for a in cfg_mod.AGENTS}
            return self._send_json(200, {"clients": clients})
        if path == "/api/tunnel":
            return self._send_json(200, tunnel_mod.status())
        if path == "/api/inspector":
            return self._send_json(200, inspect_mod.status())
        if path == "/api/health":
            return self._send_json(200, {"ok": True})
        self._send_json(404, {"error": "not found"})

    def do_POST(self):
        path, _, _ = self.path.partition("?")
        body = self._read_body()

        # Register a new connector / client (must come before the
        # startswith block below since both paths share the prefix).
        if path == "/api/sources/new":
            return self._send_json(200,
                cfg_mod.add_custom_connector(body or {}))
        if path == "/api/clients/new":
            return self._send_json(200, self._add_client(body or {}))

        # Source ops: /api/sources/<name>/{start|stop|agent|...}
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
                if op == "schedule":
                    return self._send_json(200, sched_mod.schedule(
                        name,
                        interval=(body or {}).get("interval")
                                  if body else None))
                if op == "unschedule":
                    return self._send_json(200,
                                            sched_mod.unschedule(name))
                if op == "install":
                    return self._send_json(200,
                                            install_mod.install(name))
                if op == "auth":
                    return self._send_json(200,
                                            install_mod.authenticate(name))
                if op == "agent":
                    agent = (body or {}).get("agent")
                    if agent and agent.lower() in ("none", "clear", "-"):
                        agent = ""
                    return self._send_json(
                        200, sup.set_agent_owner(name, agent))
            return self._send_json(404, {"error": "not found"})

        # Tunnel ops: /api/tunnel/{start|stop}
        if path.startswith("/api/tunnel/"):
            op = path[len("/api/tunnel/"):]
            if op == "start":
                b = body or {}
                return self._send_json(200, tunnel_mod.start(
                    port=b.get("port"), token=b.get("token"),
                    tunnel=not b.get("no_public")))
            if op == "stop":
                return self._send_json(200, tunnel_mod.stop())
            return self._send_json(404, {"error": "not found"})

        # Inspector ops: /api/inspector/{start|stop}
        if path.startswith("/api/inspector/"):
            op = path[len("/api/inspector/"):]
            if op == "start":
                b = body or {}
                return self._send_json(200,
                                        inspect_mod.start(
                                            port=b.get("port")))
            if op == "stop":
                return self._send_json(200, inspect_mod.stop())
            return self._send_json(404, {"error": "not found"})

        # Client ops: /api/clients/<name>/{enable|disable|install}
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

    def _add_client(self, body: dict) -> dict:
        """Register both the AgentSpec (orchestrator side) and the
        ClientSpec (mcp-server-evolutiondb side) in one shot. Either
        registration failing rolls nothing back — best-effort to keep
        the code simple. The user can clean up custom_*.json by hand
        if needed."""
        try:
            from mcp_server_evosql import setup as mcp_setup
        except ImportError:
            return {"ok": False,
                    "error": "mcp-server-evolutiondb not installed"}

        name = (body.get("name") or "").strip()
        if not name:
            return {"ok": False, "error": "name is required"}

        client_spec = {
            "name":         name,
            "label":        body.get("label") or name,
            "paths":        body.get("paths") or {},
            "env_override": body.get("env_override") or "",
            "restart_hint": body.get("restart_hint") or "",
            "install_cmd":  body.get("install_cmd") or [],
            "cli_command":  body.get("cli_command") or "",
        }
        # Normalise per-platform path: accept a single darwin path as
        # a string for convenience.
        if isinstance(client_spec["paths"], str):
            p = client_spec["paths"]
            client_spec["paths"] = {"darwin": [p],
                                      "linux":  [p],
                                      "win32":  [p]}
        elif isinstance(client_spec["paths"], list):
            client_spec["paths"] = {"darwin": client_spec["paths"]}
        client_spec["paths"] = {
            k: (v if isinstance(v, list) else [v])
            for k, v in client_spec["paths"].items() if v}

        if isinstance(client_spec["install_cmd"], str):
            client_spec["install_cmd"] = client_spec["install_cmd"].split()

        cr = mcp_setup.add_custom_client(client_spec)
        if not cr.get("ok"):
            return cr

        agent_spec = {"name": name,
                       "label": client_spec["label"],
                       "setup_id": name}
        ar = cfg_mod.add_custom_agent(agent_spec)
        if not ar.get("ok"):
            return {"ok": False,
                    "error": "client registered but agent failed: "
                              + ar.get("error", "?")}
        return {"ok": True, "client": cr.get("spec"),
                "agent": ar.get("spec")}

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
        if op == "install":
            from . import client_install
            return self._send_json(200, client_install.install(
                spec.name, list(getattr(spec, "install_cmd", []))))
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
