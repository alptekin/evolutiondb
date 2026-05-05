"""
agent.py — single-loop ReAct-style agent backed by EvolutionDB.

For each user turn:

  1. Append the user message to MESSAGE LOG.
  2. Build the model context: system prompt + recent history.
  3. Call the LLM with the tool schemas; it may call zero or more
     tools (save_memory / search_memory / remember_entity).
  4. Execute every tool call against MemoryBackend, feed results
     back into the same conversation as a tool_result block, and
     loop until the model returns a natural-language answer.
  5. Append the assistant's final reply to MESSAGE LOG and write
     a checkpoint snapshot for replay.

The loop is deliberately short — debugging an agent's memory
behaviour is easier when you can read every step of the loop in
under 100 lines.
"""
from __future__ import annotations

import json
import os
import sys
import time
from typing import Any, Dict, List

from memory_backend import MemoryBackend
from llm           import LLM, SYSTEM_PROMPT, TOOL_SCHEMAS, make_llm


def execute_tool(backend: MemoryBackend, name: str, args: Dict[str, Any]) -> str:
    """Run the agent's tool against the live memory backend and
    return the JSON string the model will see as tool_result.

    Small models (Llama 3.x 8B, Qwen 2.5 7B) routinely emit calls with
    missing or malformed args. Rather than crashing the turn we
    coerce gracefully and return a structured error string so the
    model can self-correct on the next iteration."""

    DEFAULT_USER = "default_user"

    def _coerce_str(v, default=""):
        if v is None: return default
        if isinstance(v, (list, tuple)):
            return ", ".join(map(str, v))
        return str(v)

    def _coerce_tags(v):
        if v is None: return []
        if isinstance(v, list):  return [str(x) for x in v]
        if isinstance(v, str):
            # Llama sometimes serialises tags as a single quoted Python
            # repr, e.g. "['jazz', 'musician']" — try json.loads, fall
            # back to a 1-element list.
            try:
                parsed = json.loads(v.replace("'", '"'))
                if isinstance(parsed, list):
                    return [str(x) for x in parsed]
            except Exception:
                pass
            return [v]
        return [str(v)]

    if name == "save_memory":
        fact = _coerce_str(args.get("fact"))
        if not fact:
            return json.dumps({"ok": False,
                                 "error": "save_memory requires non-empty 'fact'"})
        key = backend.save_memory(
            user_id=_coerce_str(args.get("user_id"), DEFAULT_USER),
            fact=fact,
            tags=_coerce_tags(args.get("tags")))
        return json.dumps({"ok": True, "key": key})

    if name == "search_memory":
        query = _coerce_str(args.get("query"))
        if not query:
            return json.dumps({"ok": False,
                                 "error": "search_memory requires non-empty 'query'"})
        results = backend.search_memory(
            user_id=_coerce_str(args.get("user_id"), DEFAULT_USER),
            query=query)
        return json.dumps({"ok": True, "results": results})

    if name == "remember_entity":
        ekey = _coerce_str(args.get("key"))
        summ = _coerce_str(args.get("summary"))
        if not ekey or not summ:
            return json.dumps({"ok": False,
                                 "error": "remember_entity requires 'key' + 'summary'"})
        backend.remember_entity(
            key=ekey, summary=summ,
            facts=args.get("facts") if isinstance(args.get("facts"), dict) else None)
        return json.dumps({"ok": True})

    return json.dumps({"ok": False,
                       "error": f"unknown tool: {name}"})


class Agent:
    def __init__(self,
                  backend: MemoryBackend,
                  llm: LLM,
                  session_id: str = "default-session"):
        self.backend = backend
        self.llm     = llm
        self.session = session_id
        self._step   = 0

    def turn(self, user_text: str) -> Dict[str, Any]:
        """Run one user→assistant turn end-to-end."""
        self._step += 1
        self.backend.append_message(self.session, "user", user_text)

        # Bootstrap the conversation the LLM sees. Stub mode looks at
        # the inline history; the real Claude API picks up its own
        # context from this list, so keep it the source of truth.
        chat: List[Dict[str, Any]] = [
            {"role": m["role"], "content": m["content"]}
            for m in self.backend.read_messages(self.session, last_n=12)
        ]

        tool_calls_log: List[Dict[str, Any]] = []
        tool_results_log: List[Dict[str, Any]] = []

        # Tool-use loop: keep calling the model until it returns a
        # plain answer (no tool calls). 5 iters is the safety cap.
        for _ in range(5):
            response = self.llm.turn(SYSTEM_PROMPT, chat, TOOL_SCHEMAS)
            tool_calls = response.get("tool_calls") or []

            if not tool_calls:
                final_text = response.get("text") or ""
                self.backend.append_message(
                    self.session, "assistant", final_text)
                state = {
                    "step":          self._step,
                    "session":       self.session,
                    "user":          user_text,
                    "assistant":     final_text,
                    "tool_calls":    tool_calls_log,
                    "tool_results":  tool_results_log,
                    "llm":           self.llm.name,
                }
                self.backend.checkpoint(self.session, self._step, state)
                return state

            # Append the assistant's tool_use block as one message,
            # then a single user message with all tool_result blocks
            # — the format Anthropic's API expects.
            assistant_blocks: List[Dict[str, Any]] = []
            if response.get("text"):
                assistant_blocks.append({
                    "type": "text",
                    "text": response["text"],
                })
            for tc in tool_calls:
                assistant_blocks.append({
                    "type":  "tool_use",
                    "id":    tc["id"],
                    "name":  tc["name"],
                    "input": tc["input"],
                })
                tool_calls_log.append({
                    "name":  tc["name"],
                    "input": tc["input"],
                })

            chat.append({"role": "assistant", "content": assistant_blocks})

            tool_results: List[Dict[str, Any]] = []
            for tc in tool_calls:
                result_str = execute_tool(self.backend, tc["name"], tc["input"])
                tool_results.append({
                    "type":         "tool_result",
                    "tool_use_id":  tc["id"],
                    "content":      [{"type": "text", "text": result_str}],
                })
                tool_results_log.append({
                    "name":   tc["name"],
                    "result": result_str,
                })

            chat.append({"role": "user", "content": tool_results})

        # Safety cap — record what we have and bail.
        final_text = "(agent: tool-loop budget exhausted)"
        self.backend.append_message(self.session, "assistant", final_text)
        state = {
            "step":         self._step,
            "session":      self.session,
            "user":         user_text,
            "assistant":    final_text,
            "tool_calls":   tool_calls_log,
            "tool_results": tool_results_log,
            "llm":          self.llm.name,
        }
        self.backend.checkpoint(self.session, self._step, state)
        return state


# ----------------------------------------------------------------------
# CLI: `python3 agent.py` runs the scripted scenario and prints the
# transcript. Used as the docker-compose entrypoint.
# ----------------------------------------------------------------------
def run_scripted_scenario(session: str = "demo-session") -> int:
    from scenarios import SCENARIO

    print(f"=== EvolutionDB long-term memory demo ===")
    print(f"  Connecting to evosql at "
          f"{os.environ.get('EVOSQL_HOST', '127.0.0.1')}:9967")
    backend = MemoryBackend(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "9967")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        store_prefix="demo",
    )
    llm   = make_llm()
    agent = Agent(backend, llm, session_id=session)

    print(f"  Using LLM backend: {llm.name}")
    if llm.name == "stub":
        print("  (set ANTHROPIC_API_KEY to use real Claude)")
    print()

    failures = 0
    for i, (user_text, expectation) in enumerate(SCENARIO, start=1):
        print(f"--- turn {i} ---")
        print(f"  user:      {user_text}")
        state = agent.turn(user_text)
        print(f"  assistant: {state['assistant'] or '(no text)'}")
        if state["tool_calls"]:
            for tc in state["tool_calls"]:
                print(f"  tool:      {tc['name']}({json.dumps(tc['input'])})")

        if expectation:
            ok = expectation(state)
            print(f"  expect:    {expectation.__doc__ or expectation}")
            print(f"  result:    {'PASS' if ok else 'FAIL'}")
            if not ok:
                failures += 1
        print()

    print("=== final entity ranking ===")
    for ent in backend.top_entities():
        print(f"  {ent['key']}: {ent['summary']} "
              f"(mentioned {ent['mention_count']}x)")

    backend.close()

    if failures:
        print(f"\n=== {failures} expectation(s) FAILED ===")
        return 1
    print("\n=== all expectations passed ===")
    return 0


if __name__ == "__main__":
    sys.exit(run_scripted_scenario())
