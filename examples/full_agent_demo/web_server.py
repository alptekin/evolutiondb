"""
web_server.py — small FastAPI wrapper around the demo Agent.

Why exist:
  - test_agent.py and run_scripted_scenario already prove the agent
    works programmatically against EvolutionDB and any LLM backend.
  - For interactive feel — typing a question into a browser and
    watching the model save / search memory — we need a human-facing
    surface. This server is that surface, kept deliberately tiny.

Routes:
  GET  /                          → static/index.html (chat UI)
  GET  /static/*                   → CSS / JS (none today, room for them)
  POST /api/chat   {message}      → runs agent.turn(message), returns
                                       the same dict the agent emits
                                       (assistant text, tool_calls,
                                       tool_results, llm name).
  POST /api/reset  {prefix?}       → drop + recreate the demo stores so
                                       you can start a clean session
                                       from the UI.
  GET  /api/state                  → snapshot of memories / entities /
                                       last N messages — what the agent
                                       "remembers" right now.
  GET  /api/health                 → 200 OK if evosql + LLM are wired.

Threading model: a single global Agent instance under a `with` lock so
two browser tabs hitting /api/chat at once don't race the
non-thread-safe Connection.
"""
from __future__ import annotations

import json
import os
import threading
from typing import Any, Dict, Optional

from fastapi               import FastAPI, HTTPException
from fastapi.responses      import HTMLResponse, JSONResponse
from fastapi.staticfiles    import StaticFiles
from pydantic               import BaseModel

from agent          import Agent, execute_tool                       # noqa: F401
from llm            import make_llm
from memory_backend import MemoryBackend


HERE         = os.path.dirname(os.path.abspath(__file__))
STATIC_DIR   = os.path.join(HERE, "static")
DEFAULT_PFX  = os.environ.get("WEB_STORE_PREFIX",  "web")
DEFAULT_SESS = os.environ.get("WEB_SESSION_ID",    "browser-session")


# ----------------------------------------------------------------------
#  Singleton agent + lock
# ----------------------------------------------------------------------
class AgentRuntime:
    def __init__(self, store_prefix: str, session_id: str):
        self._lock      = threading.Lock()
        self._store_prefix = store_prefix
        self._session_id   = session_id

        backend = MemoryBackend(
            host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
            port=int(os.environ.get("EVOSQL_PORT", "9967")),
            user=os.environ.get("EVOSQL_USER", "admin"),
            password=os.environ.get("EVOSQL_PASSWORD", "admin"),
            store_prefix=store_prefix,
            reset=False,           # reuse existing data; reset endpoint clears it
        )
        # Make sure the four stores exist (the constructor only creates
        # them when reset=True). Do it idempotently here.
        for kind, name in [
            ("MEMORY STORE",     backend.memory),
            ("MESSAGE LOG",      backend.messages),
            ("ENTITY STORE",     backend.entities),
            ("CHECKPOINT STORE", backend.checkpoints),
        ]:
            try:
                backend.conn.exec_(f"CREATE {kind} {name}")
            except Exception:
                pass        # already exists — fine.

        self.backend = backend
        self.llm     = make_llm()
        self.agent   = Agent(backend, self.llm, session_id=session_id)

    @property
    def session_id(self) -> str: return self._session_id

    @property
    def store_prefix(self) -> str: return self._store_prefix

    def turn(self, message: str) -> Dict[str, Any]:
        with self._lock:
            return self.agent.turn(message)

    def reset_stores(self) -> None:
        with self._lock:
            for kind, name in [
                ("MEMORY STORE",     self.backend.memory),
                ("MESSAGE LOG",      self.backend.messages),
                ("ENTITY STORE",     self.backend.entities),
                ("CHECKPOINT STORE", self.backend.checkpoints),
            ]:
                try:
                    self.backend.conn.exec_(f"DROP {kind} IF EXISTS {name}")
                except Exception:
                    pass
                self.backend.conn.exec_(f"CREATE {kind} {name}")
            # Restart the agent's step counter.
            self.agent = Agent(self.backend, self.llm,
                                  session_id=self._session_id)

    def state_snapshot(self, last_messages: int = 20) -> Dict[str, Any]:
        with self._lock:
            sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
                   f"__mem_{self.backend.memory} ORDER BY mem_key")
            mem_rows = self.backend.conn.query(
                sql, max_rows=128, max_cols=4, col_buf_size=2048)
            memories = []
            for r in mem_rows:
                try:
                    val = json.loads(r[2]) if r[2] else None
                except Exception:
                    val = r[2]
                memories.append({
                    "namespace": r[0],
                    "key":       r[1],
                    "value":     val,
                })

            messages = self.backend.read_messages(
                self._session_id, last_n=last_messages)
            entities = self.backend.top_entities(n=10)

            return {
                "llm":          self.llm.name,
                "session_id":   self._session_id,
                "store_prefix": self._store_prefix,
                "memories":     memories,
                "entities":     entities,
                "messages":     messages,
            }


# ----------------------------------------------------------------------
#  FastAPI app
# ----------------------------------------------------------------------
app = FastAPI(title="evosql full_agent_demo (web)",
                description="Chat with the EvolutionDB-backed agent")

runtime: Optional[AgentRuntime] = None


@app.on_event("startup")
def _startup() -> None:
    global runtime
    runtime = AgentRuntime(DEFAULT_PFX, DEFAULT_SESS)


# ---- API ----
class ChatRequest(BaseModel):
    message: str


@app.post("/api/chat")
def api_chat(req: ChatRequest):
    if not runtime:
        raise HTTPException(503, "agent not initialised")
    if not req.message.strip():
        raise HTTPException(400, "empty message")
    state = runtime.turn(req.message)
    return JSONResponse(state)


@app.post("/api/reset")
def api_reset():
    if not runtime:
        raise HTTPException(503, "agent not initialised")
    runtime.reset_stores()
    return {"ok": True}


@app.get("/api/state")
def api_state():
    if not runtime:
        raise HTTPException(503, "agent not initialised")
    return JSONResponse(runtime.state_snapshot())


@app.get("/api/health")
def api_health():
    return {"ok": True,
              "llm":          runtime.llm.name if runtime else None,
              "session_id":   runtime.session_id   if runtime else None,
              "store_prefix": runtime.store_prefix if runtime else None}


# ---- static UI ----
if os.path.isdir(STATIC_DIR):
    app.mount("/static", StaticFiles(directory=STATIC_DIR), name="static")


@app.get("/", response_class=HTMLResponse)
def root():
    index = os.path.join(STATIC_DIR, "index.html")
    if not os.path.exists(index):
        return HTMLResponse(
            "<h1>chat UI not bundled — run from a checked-out repo</h1>",
            status_code=500)
    with open(index, "r", encoding="utf-8") as fh:
        return HTMLResponse(fh.read())
