# Publishing `mcp-server-evolutiondb`

This document captures every distribution channel the EvolutionDB MCP
server is shipped through, with the exact command sequence to push a
new version to each. Three of the four channels require account
credentials we can't bake into the repo, so each section ends in the
manual command the maintainer runs. Re-run them in order on every
release.

The four channels:

1. **PyPI** — canonical artifact: `pipx install mcp-server-evolutiondb`
2. **Anthropic DXT** — one-click `.dxt` install in Claude Desktop
3. **MCP Registry** — official discovery feed at
   `registry.modelcontextprotocol.io`
4. **Smithery.ai** — cross-client web installer

---

## 1. PyPI

The package is `mcp-server-evolutiondb` (canonical) with
`mcp-server-evosql` as an alias entry-point so existing in-tree configs
keep working. It depends only on `psycopg[binary]>=3.1` so installs are
pure pip on every platform — no C toolchain.

**Build the artifacts:**

```bash
cd client/mcp-server-evosql
python3 -m venv .venv
.venv/bin/pip install --upgrade pip build twine
rm -rf dist build *.egg-info
.venv/bin/python -m build --sdist --wheel
ls dist/
# → mcp_server_evolutiondb-1.1.0-py3-none-any.whl
# → mcp_server_evolutiondb-1.1.0.tar.gz
```

**Smoke-test locally:**

```bash
.venv/bin/pip install dist/mcp_server_evolutiondb-*.whl
printf '%s\n%s\n' \
  '{"jsonrpc":"2.0","id":1,"method":"initialize","params":{"protocolVersion":"2024-11-05","capabilities":{}}}' \
  '{"jsonrpc":"2.0","id":2,"method":"tools/list"}' \
  | .venv/bin/mcp-server-evolutiondb
# Expect two JSON-RPC responses on stdout.
```

**Upload (one-time PyPI account / API token required):**

```bash
# First time: create a PyPI account + scoped API token at
# https://pypi.org/manage/account/token/
# Configure once: ~/.pypirc with username = __token__, password = <token>

.venv/bin/twine upload dist/*
```

**Verify:**

```bash
pip install --upgrade mcp-server-evolutiondb
which mcp-server-evolutiondb     # entry-point resolves
```

The package's README contains the verification marker
`<!-- mcp-name: io.github.alptekin/evolutiondb-memory -->` which the
MCP Registry checks during step 3.

---

## 2. Anthropic DXT (Claude Desktop one-click install)

DXT (Desktop Extension) is a zip with `manifest.json` + a vendored
Python tree under `server/lib/`. Claude Desktop verifies the manifest
and runs `python3 server/main.py` on startup.

**Build:**

```bash
cd client/mcp-server-evosql
./dxt/build.sh
ls dist/mcp-server-evolutiondb-1.1.0.dxt
```

> **Platform caveat:** `dxt/build.sh` vendors `psycopg[binary]` for the
> *current* host's wheel. The resulting `.dxt` only works on the
> platform it was built on. Build per-platform (darwin-arm64,
> darwin-x86_64, linux-x86_64, win-x86_64) on matching CI runners — the
> long-term plan is a `.github/workflows/dxt-build.yml` that produces
> all four as release assets. For now, build manually for the platforms
> you care about.

**Install locally to test:**

Drag `mcp-server-evolutiondb-1.1.0.dxt` onto Claude Desktop's
Settings → Extensions pane (or open the file with Claude Desktop).
The user-config dialog asks for `MCP_USER_ID`, host, port, etc.
(schema in `dxt/manifest.json`).

**Submit to Anthropic's DXT directory** (manual, requires Anthropic
acceptance):

1. Upload the `.dxt` artifact to the
   [Anthropic DXT submission form](https://anthropic.com/dxt/submit)
   (or the equivalent landing page on the Anthropic developer hub).
2. Provide a 256×256 icon (drop a `dxt/icon.png` into this directory
   before building so the manifest's `icon` field resolves).
3. Wait for Anthropic security/quality review.

Once approved the extension shows up in Claude Desktop's "Browse
Extensions" tab.

---

## 3. MCP Registry (`registry.modelcontextprotocol.io`)

The official server discovery feed used by Claude Code, Claude.ai
Connectors, and a growing list of MCP-aware clients.

**Pre-requisite:** the PyPI package from step 1 is published. The
registry only stores metadata; the actual artifact lives on PyPI, and
ownership is verified by the `mcp-name` marker in the package's
README.

**Install the publisher CLI** (once):

```bash
# macOS / Linux
curl -L "https://github.com/modelcontextprotocol/registry/releases/latest/download/mcp-publisher_$(uname -s | tr '[:upper:]' '[:lower:]')_$(uname -m | sed 's/x86_64/amd64/;s/aarch64/arm64/').tar.gz" \
  | tar xz mcp-publisher && sudo mv mcp-publisher /usr/local/bin/
# Or: brew install mcp-publisher
mcp-publisher --help
```

**Authenticate via GitHub OAuth (device flow):**

```bash
cd client/mcp-server-evosql
mcp-publisher login github
# Opens https://github.com/login/device — enter the printed code.
# `io.github.alptekin/...` namespace requires the alptekin GitHub
# account; any other account would be rejected.
```

**Publish:**

```bash
# server.json already lives in this directory.
mcp-publisher publish
```

**Verify:**

```bash
curl -s "https://registry.modelcontextprotocol.io/v0/servers?search=evolutiondb-memory" | jq .
# Expect: one entry with name=io.github.alptekin/evolutiondb-memory
```

On every version bump, update `server.json` and the wheel `version`
field in lockstep, then re-run `mcp-publisher publish`.

---

## 4. Smithery.ai

Smithery is a web-based installer that wraps `uvx mcp-server-evolutiondb`
behind a config UI for the user, then exports a `claude_desktop_config.json`
snippet (or comparable for Cursor / Cline / etc.).

`smithery.yaml` lives at the root of this directory; the `commandFunction`
spawns `uvx mcp-server-evolutiondb` and forwards the user-supplied
config as env vars. Pre-req for users: PyPI step 1 has shipped.

**Onboard the repo to Smithery** (one-time, GitHub OAuth):

1. Go to https://smithery.ai/new and sign in with GitHub.
2. Install the Smithery GitHub App on the `alptekin/evolutiondb`
   repository.
3. Choose `client/mcp-server-evosql/smithery.yaml` as the config path.
4. Smithery auto-detects the schema from `smithery.yaml` and produces
   a public install page at
   `https://smithery.ai/server/io.github.alptekin/evolutiondb-memory`
   (or similar — the slug is assigned at registration).

**Updates after that point are automatic** — Smithery polls the
default branch and re-renders the config UI when `smithery.yaml`
changes.

---

## Verifying the user experience end-to-end

After all four channels are populated, the install paths become:

| Client          | Command                                                        |
|-----------------|-----------------------------------------------------------------|
| Claude Desktop  | Drag `.dxt` into Settings → Extensions; or via DXT directory   |
| Claude Code CLI | `claude mcp add evolutiondb-memory uvx mcp-server-evolutiondb` |
| Cursor / Cline  | Smithery.ai install page → "Install in Cursor" / "Install in Cline" |
| Anything else   | `pipx install mcp-server-evolutiondb` + manual config snippet  |

Each path arrives at the same Python entry-point with the same env
vars, against the same EvolutionDB instance, against the same data.

## Versioning

Every release bumps three things in lockstep:

- `pyproject.toml` → `version`
- `dxt/manifest.json` → `version`
- `server.json` → `version` and `packages[0].version`

Then run all four channels in order. There is no out-of-band
hotfix flow — the canonical artifact is PyPI, and the other three
reference it by version.
