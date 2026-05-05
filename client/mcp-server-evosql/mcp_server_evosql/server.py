"""
mcp_server_evosql.server — JSON-RPC 2.0 stdio loop that exposes
EvolutionDB-backed long-term memory to Claude Desktop / Claude Code
through the MCP (Model Context Protocol) standard.

Protocol surface implemented:
  - initialize             — handshake, advertises tools capability
  - tools/list             — describes the four memory tools
  - tools/call             — dispatches to save / search / recent / forget
  - notifications/initialized (incoming, no response needed)
  - shutdown / exit        — clean teardown

Threading: MCP stdio is single-threaded. Every request is processed
in order, so the underlying evosql_memory.Connection (not thread-safe)
stays inside one event loop.

User isolation: every tool call has its `user_id` server-side overridden
to MCP_USER_ID env (default "default_user"). This is the same sticky-id
trick we apply in the web demo — keeps the LLM from fragmenting the
namespace across "user" / "default_user" / the user's actual name etc.

Stores: the server creates four catalog objects on first run with the
prefix MCP_STORE_PREFIX (default "mcp"):
   __mem_<prefix>_mem      MEMORY STORE
   __ml_<prefix>_msgs       (unused by MCP server but reserved)
   __ent_<prefix>_ents     ENTITY STORE
   __ck_<prefix>_ck         (unused but reserved for future replay)
"""
from __future__ import annotations

import json
import os
import sys
import time
import traceback
import uuid
from typing import Any, Dict, List, Optional

# ---------------------------------------------------------------- #
#  Path bootstrap so the SDK is importable even when this server is #
#  spawned by Claude Desktop with a stripped-down PYTHONPATH.        #
# ---------------------------------------------------------------- #
_HERE = os.path.dirname(os.path.abspath(__file__))
_SDK = os.environ.get(
    "EVOSQL_PYTHON_SDK",
    os.path.normpath(os.path.join(_HERE, "..", "..",
                                    "python-evosql-memory")))
if os.path.isdir(_SDK) and _SDK not in sys.path:
    sys.path.insert(0, _SDK)


PROTOCOL_VERSION = "2024-11-05"          # MCP version we speak
SERVER_NAME      = "evolutiondb-memory"
SERVER_VERSION   = "1.0.0"


# ---------------------------------------------------------------- #
#  Memory backend — same shape as examples/full_agent_demo.         #
# ---------------------------------------------------------------- #
def _e(s: str) -> str:
    if not isinstance(s, str):
        s = str(s)
    s = s.replace("\r", " ").replace("\n", " ").replace("\t", " ")
    return s.replace("'", "''")


class MemoryBackend:
    def __init__(self, host: str, port: int, user: str, password: str,
                  prefix: str):
        from evosql_memory import connect
        self.conn = connect(host, port, user, password)
        self.memory   = f"{prefix}_mem"
        self.entities = f"{prefix}_ents"
        # Idempotent CREATE — the server must not lose data across restarts.
        for kind, name in [
            ("MEMORY STORE", self.memory),
            ("ENTITY STORE", self.entities),
        ]:
            try:
                self.conn.exec_(f"CREATE {kind} {name}")
            except Exception:
                pass

    def save(self, user_id: str, fact: str,
              tags: Optional[List[str]] = None) -> str:
        # ms-precision created field so back-to-back saves order
        # deterministically inside `recent`.
        created = time.time()
        key = f"mem_{int(created*1000)}_{uuid.uuid4().hex[:6]}"
        value = json.dumps({
            "fact":    fact,
            "tags":    tags or [],
            "created": created,
        })
        self.conn.memory_put(self.memory, user_id, key, value)
        return key

    def search(self, user_id: str, query: str,
                limit: int = 5,
                tag: Optional[str] = None) -> List[Dict[str, Any]]:
        sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
               f"__mem_{self.memory} WHERE mem_namespace = "
               f"'{_e(user_id)}' LIMIT 512")
        rows = self.conn.query(sql, max_rows=512, max_cols=8,
                                  col_buf_size=8192)
        q_terms = [w for w in query.lower().split() if len(w) > 1]
        out: List[Dict[str, Any]] = []
        for r in rows:
            try:
                rec = json.loads(r[2]) if r[2] else None
            except Exception:
                rec = {"fact": r[2]}
            if not rec or not rec.get("fact"):
                continue
            haystack = (rec.get("fact", "").lower() + " " +
                        " ".join(rec.get("tags") or []).lower())
            score = sum(1 for w in q_terms if w in haystack)
            if tag and tag.lower() not in [t.lower() for t in (rec.get("tags") or [])]:
                continue
            if score == 0 and not tag:
                continue
            out.append({"key": r[1], "score": score, **rec})
        out.sort(key=lambda x: -x["score"])
        return out[:limit]

    def recent(self, user_id: str, limit: int = 10) -> List[Dict[str, Any]]:
        sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
               f"__mem_{self.memory} WHERE mem_namespace = "
               f"'{_e(user_id)}' LIMIT 512")
        rows = self.conn.query(sql, max_rows=512, max_cols=8,
                                  col_buf_size=8192)
        out: List[Dict[str, Any]] = []
        for r in rows:
            try:
                rec = json.loads(r[2]) if r[2] else {}
            except Exception:
                rec = {"fact": r[2]}
            out.append({"key": r[1], **rec})
        out.sort(key=lambda x: -x.get("created", 0))
        return out[:limit]

    def forget(self, user_id: str, key: str) -> bool:
        try:
            self.conn.memory_delete(self.memory, user_id, key)
            return True
        except Exception:
            return False

    def list_tags(self, user_id: str) -> List[Dict[str, Any]]:
        sql = (f"SELECT mem_namespace, mem_value FROM "
               f"__mem_{self.memory} WHERE mem_namespace = "
               f"'{_e(user_id)}' LIMIT 512")
        rows = self.conn.query(sql, max_rows=512, max_cols=4,
                                  col_buf_size=4096)
        counts: Dict[str, int] = {}
        for r in rows:
            try:
                rec = json.loads(r[1]) if r[1] else {}
            except Exception:
                continue
            for tag in (rec.get("tags") or []):
                counts[tag] = counts.get(tag, 0) + 1
        out = [{"tag": t, "count": c} for t, c in counts.items()]
        out.sort(key=lambda x: -x["count"])
        return out


# ---------------------------------------------------------------- #
#  Tool catalog — what Claude Desktop sees on tools/list.            #
# ---------------------------------------------------------------- #
TOOLS = [
    {
        "name": "save_memory",
        "description": (
            "Persist a long-term fact about the user. Call this whenever "
            "the user shares a preference, decision, biographical detail, "
            "or anything you'd want to remember across future "
            "conversations. The fact will be available to all future "
            "Claude sessions through search_memory."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "fact": {
                    "type": "string",
                    "description": "Concise statement of what to remember."
                },
                "tags": {
                    "type": "array",
                    "items": {"type": "string"},
                    "description": "Categorisation labels (e.g. work, "
                                       "preference, family). Optional."
                },
            },
            "required": ["fact"],
        },
    },
    {
        "name": "search_memory",
        "description": (
            "Search remembered facts. Call this BEFORE answering any "
            "question that depends on prior knowledge of the user. "
            "Substring + tag matching; supply both `query` and "
            "(optionally) `tag` to narrow."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "query": {"type": "string"},
                "tag":   {"type": "string",
                            "description": "Optional tag filter."},
                "limit": {"type": "integer", "default": 5},
            },
            "required": ["query"],
        },
    },
    {
        "name": "recent_memories",
        "description": "List the most recently saved facts.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "limit": {"type": "integer", "default": 10},
            },
        },
    },
    {
        "name": "forget",
        "description": "Delete a stored fact by its `key` (returned by "
                       "save_memory or surfaced by search_memory).",
        "inputSchema": {
            "type": "object",
            "properties": {"key": {"type": "string"}},
            "required": ["key"],
        },
    },
    {
        "name": "list_tags",
        "description": "List all distinct tags used so far, with counts.",
        "inputSchema": {"type": "object", "properties": {}},
    },
]


# ---------------------------------------------------------------- #
#  Server — newline-delimited JSON-RPC 2.0 over stdio.               #
# ---------------------------------------------------------------- #
class MCPServer:
    def __init__(self) -> None:
        self.user_id = os.environ.get("MCP_USER_ID", "default_user")
        self.host    = os.environ.get("EVOSQL_HOST",     "127.0.0.1")
        self.port    = int(os.environ.get("EVOSQL_PORT", "9967"))
        self.user    = os.environ.get("EVOSQL_USER",     "admin")
        self.pw      = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.prefix  = os.environ.get("MCP_STORE_PREFIX", "mcp")
        self.backend: Optional[MemoryBackend] = None

    def _connect(self) -> MemoryBackend:
        if self.backend is None:
            self.backend = MemoryBackend(self.host, self.port,
                                            self.user, self.pw,
                                            self.prefix)
        return self.backend

    # -- tool dispatch ------------------------------------------------
    def _call_tool(self, name: str, args: Dict[str, Any]) -> Dict[str, Any]:
        b = self._connect()
        if name == "save_memory":
            fact = args.get("fact") or ""
            if not fact.strip():
                return {"error": "save_memory requires non-empty `fact`"}
            tags = args.get("tags") or []
            if isinstance(tags, str):
                tags = [tags]
            key = b.save(self.user_id, fact, tags)
            return {"ok": True, "key": key, "user_id": self.user_id}

        if name == "search_memory":
            q = args.get("query") or ""
            if not q.strip():
                return {"error": "search_memory requires non-empty `query`"}
            tag = args.get("tag")
            limit = int(args.get("limit") or 5)
            return {"ok": True,
                    "user_id": self.user_id,
                    "results": b.search(self.user_id, q, limit=limit, tag=tag)}

        if name == "recent_memories":
            limit = int(args.get("limit") or 10)
            return {"ok": True, "user_id": self.user_id,
                    "results": b.recent(self.user_id, limit)}

        if name == "forget":
            key = args.get("key") or ""
            if not key:
                return {"error": "forget requires `key`"}
            ok = b.forget(self.user_id, key)
            return {"ok": ok, "key": key}

        if name == "list_tags":
            return {"ok": True, "user_id": self.user_id,
                    "tags": b.list_tags(self.user_id)}

        return {"error": f"unknown tool: {name}"}

    # -- JSON-RPC dispatch -------------------------------------------
    def handle(self, msg: Dict[str, Any]) -> Optional[Dict[str, Any]]:
        method = msg.get("method")
        params = msg.get("params") or {}
        msg_id = msg.get("id")

        # Notifications (no id) get no response.
        if msg_id is None:
            return None

        if method == "initialize":
            return self._ok(msg_id, {
                "protocolVersion": PROTOCOL_VERSION,
                "capabilities":    {"tools": {"listChanged": False}},
                "serverInfo":      {"name": SERVER_NAME,
                                       "version": SERVER_VERSION},
            })

        if method == "tools/list":
            return self._ok(msg_id, {"tools": TOOLS})

        if method == "tools/call":
            name = params.get("name") or ""
            args = params.get("arguments") or {}
            try:
                result = self._call_tool(name, args)
            except Exception as e:
                traceback.print_exc(file=sys.stderr)
                return self._ok(msg_id, {
                    "content": [{"type": "text",
                                    "text": f"tool {name} failed: {e}"}],
                    "isError": True,
                })
            text = json.dumps(result, ensure_ascii=False)
            return self._ok(msg_id, {
                "content": [{"type": "text", "text": text}],
                "isError": bool(result.get("error")),
            })

        if method in ("ping",):
            return self._ok(msg_id, {})

        return self._err(msg_id, -32601, f"method not found: {method}")

    @staticmethod
    def _ok(id_, result) -> Dict[str, Any]:
        return {"jsonrpc": "2.0", "id": id_, "result": result}

    @staticmethod
    def _err(id_, code, message) -> Dict[str, Any]:
        return {"jsonrpc": "2.0", "id": id_,
                "error": {"code": code, "message": message}}


# ---------------------------------------------------------------- #
#  stdio loop                                                       #
# ---------------------------------------------------------------- #
def main() -> int:
    server = MCPServer()
    print(
        f"[mcp-evosql] listening on stdio "
        f"(evosql={server.host}:{server.port}, user_id={server.user_id!r})",
        file=sys.stderr, flush=True)

    for raw_line in sys.stdin:
        raw_line = raw_line.strip()
        if not raw_line:
            continue
        try:
            msg = json.loads(raw_line)
        except json.JSONDecodeError as e:
            print(f"[mcp-evosql] bad JSON line: {e}",
                   file=sys.stderr, flush=True)
            continue
        try:
            resp = server.handle(msg)
        except Exception as e:
            traceback.print_exc(file=sys.stderr)
            resp = server._err(msg.get("id"), -32603, str(e))
        if resp is not None:
            sys.stdout.write(json.dumps(resp, ensure_ascii=False) + "\n")
            sys.stdout.flush()
    return 0
