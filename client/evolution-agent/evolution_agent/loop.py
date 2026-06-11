"""
evolution-agent — the agent loop (Phase 0).

`mcp-server-evolutiondb` is an MCP *server*: it executes tools that a host model
(Claude Desktop / Claude Code) decides to call. It has no will of its own. This
module adds that missing will — a manual agentic loop that calls a model
directly, lets it choose tools, executes them through the MCP server's own
`_call_tool` (so RBAC, audit, the PII gate, tenancy and the embedded EvolutionDB
all come for free), feeds results back, and repeats until the model is done.

"Standalone" here means host-independent, NOT model-independent: the reasoning
still comes from an LLM (Anthropic by default; any provider with a compatible
client can be injected). What changes is that *our* process drives the loop
instead of Claude Desktop.

Nothing is ever sent to the outside world here. The send invariant (ADR-004) is
unchanged: the agent may draft and queue (`queue_reply`), but a human approves
(`approve_send`), and delivery stays dry-run unless the operator explicitly
opted in. The system prompt states this rule to the model as well.

The model client and the tool server are both injectable, so the loop is
unit-testable with zero network, API key, or database (see tests/test_loop.py).
"""
from __future__ import annotations

import json
import os
from typing import Any, Callable, Dict, List, Optional

DEFAULT_MODEL = os.environ.get("EVOSQL_AGENT_MODEL", "claude-opus-4-8")

# The agent's persona + the non-negotiable send rule. English by repo
# convention; the model answers in the user's own language regardless.
DEFAULT_SYSTEM = (
    "You are evolution-agent, a personal/work assistant backed by EvolutionDB "
    "long-term memory. You have tools to recall and save memory, summarize the "
    "day and meetings, track open loops (who is waiting on whom), review pull "
    "requests, and draft replies.\n\n"
    "HARD RULE — never deliver anything to the outside world yourself. You may "
    "draft and queue a reply with `queue_reply`, but a human must approve it "
    "with `approve_send`; sending stays dry-run unless the operator has "
    "explicitly enabled it. Never claim a message was sent. When you draft "
    "something to send, queue it and tell the user it is awaiting their "
    "approval.\n\n"
    "Prefer recalling existing memory before answering from assumptions. Be "
    "concise and concrete. Answer in the user's language. When a tool returns "
    "an `error`, read it and adjust rather than repeating the same call."
)


# ----------------------------------------------------------------- tool bridge
def build_anthropic_tools(tools: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
    """Map MCP tool descriptors ({name, description, inputSchema}) to the
    Anthropic Messages `tools=` shape ({name, description, input_schema}). The
    only real difference is the schema key name."""
    out: List[Dict[str, Any]] = []
    for t in tools:
        out.append({
            "name": t["name"],
            "description": t.get("description", ""),
            "input_schema": t.get("inputSchema")
                            or {"type": "object", "properties": {}},
        })
    return out


def _blocks_to_dicts(content: Any) -> List[Dict[str, Any]]:
    """Normalize a model response's content blocks (SDK objects or our test
    stubs) into plain dicts suitable for echoing back as an assistant turn."""
    out: List[Dict[str, Any]] = []
    for b in content or []:
        bt = getattr(b, "type", None)
        if bt == "text":
            out.append({"type": "text", "text": getattr(b, "text", "")})
        elif bt == "tool_use":
            out.append({"type": "tool_use", "id": getattr(b, "id", ""),
                        "name": getattr(b, "name", ""),
                        "input": getattr(b, "input", {}) or {}})
        # thinking / other block types are dropped from the echoed turn — they
        # are not required to continue the tool conversation.
    return out


# ----------------------------------------------------------------- defaults
def _default_client():  # pragma: no cover - thin SDK wrapper
    """An Anthropic client; imported lazily so the package (and its tests)
    don't require the `anthropic` SDK unless a real run is performed."""
    import anthropic
    return anthropic.Anthropic()


def _default_server():  # pragma: no cover - exercised by the CLI, not tests
    from mcp_server_evosql.server import MCPServer
    return MCPServer()


def default_tools() -> List[Dict[str, Any]]:  # pragma: no cover - CLI path
    from mcp_server_evosql.server import TOOLS
    return build_anthropic_tools(TOOLS)


# ----------------------------------------------------------------- the loop
class AgentLoop:
    """A plan → act → observe → repeat loop over the MCP server's tools.

    `server` only needs a ``_call_tool(name, args, identity=None) -> dict``
    method (MCPServer provides it; tests pass a fake). `client` only needs
    ``messages.create(...) -> response`` with ``.content`` (blocks) and
    ``.stop_reason`` (the Anthropic SDK matches; tests pass a scripted stub).
    """

    def __init__(self, server=None, *, client=None,
                 model: Optional[str] = None,
                 system: Optional[str] = None,
                 tools: Optional[List[Dict[str, Any]]] = None,
                 identity: Any = None,
                 max_turns: int = 12,
                 max_tokens: int = 4096,
                 on_event: Optional[Callable[[str, Dict[str, Any]], None]] = None):
        self.server = server if server is not None else _default_server()
        self.client = client if client is not None else _default_client()
        self.model = model or DEFAULT_MODEL
        self.system = system if system is not None else DEFAULT_SYSTEM
        self.tools = tools if tools is not None else default_tools()
        self.identity = identity
        self.max_turns = max_turns
        self.max_tokens = max_tokens
        self.on_event = on_event

    def _emit(self, kind: str, payload: Dict[str, Any]) -> None:
        if self.on_event:
            try:
                self.on_event(kind, payload)
            except Exception:
                pass  # an observer must never break the loop

    def run(self, user_message: str) -> Dict[str, Any]:
        """Drive the conversation to completion. Returns a transcript:
        {final_text, steps:[{tool,input,result}], turns, stop_reason}."""
        messages: List[Dict[str, Any]] = [
            {"role": "user", "content": user_message}]
        steps: List[Dict[str, Any]] = []
        final_text = ""
        stop_reason = "max_turns"

        for turn in range(self.max_turns):
            resp = self.client.messages.create(
                model=self.model, max_tokens=self.max_tokens,
                system=self.system, tools=self.tools, messages=messages)
            stop_reason = getattr(resp, "stop_reason", None) or ""

            messages.append({"role": "assistant",
                             "content": _blocks_to_dicts(resp.content)})

            tool_uses = [b for b in (resp.content or [])
                         if getattr(b, "type", None) == "tool_use"]
            text = "\n".join(getattr(b, "text", "")
                             for b in (resp.content or [])
                             if getattr(b, "type", None) == "text").strip()
            if text:
                self._emit("text", {"text": text})

            if not tool_uses:
                # `pause_turn` means the model paused mid-thought — re-request
                # with the accumulated turn rather than treating it as final.
                if stop_reason == "pause_turn":
                    continue
                final_text = text
                self._emit("done", {"final_text": final_text, "turns": turn + 1})
                return {"final_text": final_text, "steps": steps,
                        "turns": turn + 1, "stop_reason": stop_reason}

            # Execute every requested tool and feed the results back as one
            # user turn of tool_result blocks.
            tool_results: List[Dict[str, Any]] = []
            for tu in tool_uses:
                name = getattr(tu, "name", "")
                args = dict(getattr(tu, "input", {}) or {})
                self._emit("tool_call", {"tool": name, "input": args})
                result = self.server._call_tool(name, args, self.identity)
                steps.append({"tool": name, "input": args, "result": result})
                self._emit("tool_result", {"tool": name, "result": result})
                tool_results.append({
                    "type": "tool_result",
                    "tool_use_id": getattr(tu, "id", ""),
                    "content": json.dumps(result, ensure_ascii=False,
                                          default=str),
                })
            messages.append({"role": "user", "content": tool_results})

        # Ran out of turns without the model ending — return what we have so a
        # runaway tool loop can't spin forever.
        self._emit("done", {"final_text": final_text, "turns": self.max_turns,
                            "stop_reason": "max_turns"})
        return {"final_text": final_text, "steps": steps,
                "turns": self.max_turns, "stop_reason": "max_turns"}
