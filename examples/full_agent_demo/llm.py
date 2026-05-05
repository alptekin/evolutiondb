"""
llm.py — pluggable LLM backend.

The agent is wired against a small Protocol so the same loop runs
against the real Anthropic API or a deterministic stub. The stub
fires the right tool calls based on regex-matching the user input,
so the demo + tests are reproducible without an API key.

Selection rule:
  - if ANTHROPIC_API_KEY is set, use ClaudeLLM
  - otherwise, use StubLLM (clearly logged at startup)
"""
from __future__ import annotations

import json
import os
import re
from typing import Any, Dict, List, Optional, Protocol


SYSTEM_PROMPT = """You are a helpful long-term-memory-aware agent.

You have access to a structured memory backend through tools:
  - save_memory(user_id, fact, tags): persist a long-term fact about
    the user. Call this whenever the user shares a personal preference,
    biographical detail, decision, or anything you'd want to remember
    across future conversations.
  - search_memory(user_id, query): pull facts you previously saved.
    Call this BEFORE answering whenever a user question depends on
    prior knowledge.
  - remember_entity(key, summary, facts): when the user mentions a
    named person / place / thing repeatedly, register it here so it
    floats to the top of the entity store.

Always:
  1. Search memory before answering personal questions.
  2. Save new facts the user shares — don't just acknowledge.
  3. Be concise. The output goes to a chat UI; no markdown headings.
"""


# ----- Tool schema (Anthropic + stub share this) -----------------------
TOOL_SCHEMAS = [
    {
        "name": "save_memory",
        "description": "Persist a long-term fact about the user.",
        "input_schema": {
            "type": "object",
            "properties": {
                "user_id": {"type": "string"},
                "fact":    {"type": "string"},
                "tags":    {"type": "array",
                              "items": {"type": "string"}},
            },
            "required": ["user_id", "fact"],
        },
    },
    {
        "name": "search_memory",
        "description": "Search the agent's memory for facts about the user.",
        "input_schema": {
            "type": "object",
            "properties": {
                "user_id": {"type": "string"},
                "query":   {"type": "string"},
            },
            "required": ["user_id", "query"],
        },
    },
    {
        "name": "remember_entity",
        "description": "Register a recurring named entity.",
        "input_schema": {
            "type": "object",
            "properties": {
                "key":     {"type": "string"},
                "summary": {"type": "string"},
                "facts":   {"type": "object"},
            },
            "required": ["key", "summary"],
        },
    },
]


class LLM(Protocol):
    name: str

    def turn(self,
              system_prompt: str,
              messages: List[Dict[str, Any]],
              tools: List[Dict[str, Any]]) -> Dict[str, Any]:
        """Return {"text": str, "tool_calls": [{"name", "input"}, ...]}."""
        ...


# --------------------------------------------------------------------
# Real Claude
# --------------------------------------------------------------------
class ClaudeLLM:
    name = "anthropic"

    def __init__(self,
                  model: str = None,
                  max_tokens: int = 1024):
        try:
            import anthropic
        except ImportError as e:
            raise RuntimeError(
                "ClaudeLLM requires `anthropic` — pip install anthropic") from e

        api_key = os.environ.get("ANTHROPIC_API_KEY")
        if not api_key:
            raise RuntimeError(
                "ANTHROPIC_API_KEY missing — set the env var or use StubLLM")
        self._client = anthropic.Anthropic(api_key=api_key)
        self._model = model or os.environ.get(
            "ANTHROPIC_MODEL", "claude-sonnet-4-6")
        self._max_tokens = max_tokens

    def turn(self, system_prompt, messages, tools):
        # Anthropic Messages API supports a tool-use loop where the
        # model decides to call zero or more tools per turn. We
        # surface that directly; the agent loop below executes
        # the tool calls and feeds results back.
        response = self._client.messages.create(
            model=self._model,
            max_tokens=self._max_tokens,
            system=system_prompt,
            tools=tools,
            messages=messages,
        )

        text       = ""
        tool_calls = []
        for block in response.content:
            if getattr(block, "type", None) == "text":
                text += block.text or ""
            elif getattr(block, "type", None) == "tool_use":
                tool_calls.append({
                    "id":    block.id,
                    "name":  block.name,
                    "input": dict(block.input or {}),
                })
        return {
            "text":       text,
            "tool_calls": tool_calls,
            "stop_reason": response.stop_reason,
            "raw":        response,
        }


# --------------------------------------------------------------------
# Stub — deterministic, no API key required
# --------------------------------------------------------------------
class StubLLM:
    """Deterministic mock LLM driven by simple regexes.

    The stub's job isn't to be smart — it's to call the same tools
    Claude would call, in the same order, so the agent loop is
    exercised end-to-end and the tests have stable assertions.
    """
    name = "stub"

    PREF_PATTERNS = [
        (re.compile(r"my favou?rite\s+(\w[\w ]*?)\s+is\s+(.+?)[.!?]?$",
                       re.I),
            lambda m: f"User's favorite {m.group(1).strip()} is {m.group(2).strip()}."),
        (re.compile(r"i (?:work|live) (?:at|in)\s+(.+?)[.!?]?$",
                       re.I),
            lambda m: f"User works/lives at {m.group(1).strip()}."),
        (re.compile(r"i'?m (?:a|an)\s+(.+?)[.!?]?$", re.I),
            lambda m: f"User is {m.group(1).strip()}."),
    ]

    # The query keyword has to lexically appear in the stored facts —
    # we don't ship an embedding model in the stub. "favorite" hits the
    # preference facts we save, "user" matches every fact (since the
    # save_memory shapes them as "User's favorite …" / "User works …").
    QUERY_PATTERNS = [
        (re.compile(r"recommend|suggest|what should|listen|album",       re.I),
            "favorite"),
        (re.compile(r"who am i|tell me about myself|what do you know", re.I),
            "user"),
        (re.compile(r"where do i\s+(?:work|live)",          re.I),
            "work"),
    ]

    def __init__(self):
        self._user_id = "stub_user"
        self._turn    = 0

    def turn(self, system_prompt, messages, tools):
        self._turn += 1
        # Last user message
        last = ""
        for m in reversed(messages):
            if m["role"] == "user":
                last = self._extract_text(m["content"])
                break

        tool_calls: List[Dict[str, Any]] = []

        # Step 1 — has the model already injected tool_results
        # back into this conversation? If yes, this is the SECOND
        # half of a tool-use turn — produce a final natural-language
        # answer and don't call more tools.
        if any(m["role"] == "user" and self._has_tool_result(m["content"])
                for m in messages):
            text = self._final_answer(messages, last)
            return {"text": text, "tool_calls": [],
                    "stop_reason": "end_turn"}

        # Step 2 — first half of the turn: decide what to call.
        for rx, build_fact in self.PREF_PATTERNS:
            m = rx.search(last)
            if m:
                tool_calls.append({
                    "id":    f"sv_{self._turn}",
                    "name":  "save_memory",
                    "input": {
                        "user_id": self._user_id,
                        "fact":    build_fact(m),
                        "tags":    ["preference"],
                    },
                })
                break

        for rx, query in self.QUERY_PATTERNS:
            if rx.search(last):
                tool_calls.append({
                    "id":    f"qr_{self._turn}",
                    "name":  "search_memory",
                    "input": {"user_id": self._user_id,
                                "query": query},
                })
                break

        if tool_calls:
            return {"text":       "",
                    "tool_calls": tool_calls,
                    "stop_reason": "tool_use"}

        # No tool calls — regular acknowledgement.
        return {"text": self._small_talk(last),
                "tool_calls": [],
                "stop_reason": "end_turn"}

    # -- helpers ------------------------------------------------------
    @staticmethod
    def _extract_text(content) -> str:
        if isinstance(content, str):
            return content
        if isinstance(content, list):
            for block in content:
                if isinstance(block, dict) and block.get("type") == "text":
                    return block.get("text", "")
        return str(content)

    @staticmethod
    def _has_tool_result(content) -> bool:
        if isinstance(content, list):
            return any(isinstance(b, dict) and b.get("type") == "tool_result"
                       for b in content)
        return False

    def _final_answer(self, messages, last_user_text: str) -> str:
        # Mine the most-recent tool_result(s) for facts and weave
        # them into a deterministic recommendation.
        facts: List[str] = []
        for m in reversed(messages):
            if m["role"] == "user" and isinstance(m["content"], list):
                for b in m["content"]:
                    if isinstance(b, dict) and b.get("type") == "tool_result":
                        content = b.get("content")
                        if isinstance(content, list):
                            for sub in content:
                                if isinstance(sub, dict) and \
                                   sub.get("type") == "text":
                                    facts.append(sub.get("text", ""))
                        elif isinstance(content, str):
                            facts.append(content)
                break

        if not facts:
            return "I don't have a previous note on that yet."

        # Surface the saved fact verbatim so the test assertion can
        # match on the keyword the user originally provided.
        return ("Based on what I remember about you: " +
                " ".join(f for f in facts if f).strip())

    @staticmethod
    def _small_talk(text: str) -> str:
        if not text:
            return "Got it."
        if "?" in text:
            return "Tell me more."
        return "Noted."


# --------------------------------------------------------------------
# Local LLM via Ollama (CPU-friendly, e.g. llama3.2:3b-instruct-q4_K_M)
# --------------------------------------------------------------------
class OllamaLLM:
    """Ollama backend (https://ollama.com).

    The agent loop only cares that turn() returns the same shape as
    Claude / Stub. Ollama's /api/chat surface accepts an OpenAI-shaped
    `tools` list and emits `message.tool_calls` when the model picks
    one — we translate both directions so the upstream tool schemas
    (defined in TOOL_SCHEMAS) round-trip without modification.

    Performance note: small models (Llama 3.1 8B Instruct, Qwen 2.5
    7B) decide to call tools less reliably than Claude / GPT-4o. The
    agent.py loop already tolerates "no tool call this turn" — the
    StubLLM exercises that fallback in the test suite — and a
    follow-up task can add a regex-driven tool-call backstop on top
    of Ollama for harder reliability guarantees.
    """
    name = "ollama"

    def __init__(self,
                  base_url: str = None,
                  model: str = None,
                  timeout: int = 300):
        try:
            import requests          # noqa: F401
        except ImportError as e:
            raise RuntimeError(
                "OllamaLLM requires `requests` — pip install requests") from e

        self._base_url = (base_url or
                            os.environ.get("OLLAMA_BASE_URL",
                                              "http://localhost:11434"))
        self._model = (model or
                          os.environ.get("OLLAMA_MODEL",
                                            "llama3.2:3b-instruct-q4_K_M"))
        self._timeout = timeout

    def turn(self, system_prompt, messages, tools):
        import requests
        ollama_messages = self._to_ollama_messages(system_prompt, messages)
        ollama_tools = [
            {"type": "function",
             "function": {
                 "name":        t["name"],
                 "description": t["description"],
                 "parameters":  t["input_schema"],
             }}
            for t in tools
        ]
        try:
            resp = requests.post(
                f"{self._base_url}/api/chat",
                json={
                    "model":   self._model,
                    "messages": ollama_messages,
                    "tools":   ollama_tools,
                    "stream":  False,
                },
                timeout=self._timeout,
            )
            resp.raise_for_status()
            payload = resp.json()
        except Exception as e:
            return {"text": f"(ollama error: {e})",
                     "tool_calls": [],
                     "stop_reason": "end_turn"}

        msg = payload.get("message", {}) or {}
        text = msg.get("content", "") or ""

        tool_calls: List[Dict[str, Any]] = []
        for tc in msg.get("tool_calls") or []:
            fn = tc.get("function", {}) or {}
            args = fn.get("arguments")
            # Ollama returns arguments either as a JSON string or as
            # a parsed dict — normalise to a dict for the agent loop.
            if isinstance(args, str):
                try:
                    args = json.loads(args)
                except Exception:
                    args = {}
            elif not isinstance(args, dict):
                args = {}
            tool_calls.append({
                "id":    tc.get("id") or f"oc_{len(tool_calls)}",
                "name":  fn.get("name", ""),
                "input": args,
            })

        stop = "tool_use" if tool_calls else "end_turn"
        return {"text": text, "tool_calls": tool_calls,
                 "stop_reason": stop, "raw": payload}

    @staticmethod
    def _to_ollama_messages(system_prompt: str,
                              messages: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
        """Translate the Anthropic-shaped chat history into Ollama's
        flatter format. Ollama wants string content per message and
        carries tool calls / tool results as separate roles."""
        out: List[Dict[str, Any]] = [
            {"role": "system", "content": system_prompt},
        ]
        for m in messages:
            role = m.get("role")
            content = m.get("content")

            # Anthropic-style content blocks. Flatten to Ollama:
            #   - text blocks → role/message text
            #   - tool_use blocks → assistant message with tool_calls
            #   - tool_result blocks → role=tool messages
            if isinstance(content, list):
                texts: List[str] = []
                tool_use_blocks: List[Dict[str, Any]] = []
                tool_result_blocks: List[Dict[str, Any]] = []
                for block in content:
                    if not isinstance(block, dict):
                        continue
                    btype = block.get("type")
                    if btype == "text":
                        texts.append(block.get("text", "") or "")
                    elif btype == "tool_use":
                        tool_use_blocks.append({
                            "id":   block.get("id"),
                            "type": "function",
                            "function": {
                                "name":      block.get("name", ""),
                                "arguments": block.get("input") or {},
                            },
                        })
                    elif btype == "tool_result":
                        result_text = ""
                        rc = block.get("content")
                        if isinstance(rc, list):
                            for sub in rc:
                                if isinstance(sub, dict) and \
                                   sub.get("type") == "text":
                                    result_text += sub.get("text", "") or ""
                        elif isinstance(rc, str):
                            result_text = rc
                        tool_result_blocks.append({
                            "tool_call_id": block.get("tool_use_id"),
                            "content":      result_text,
                        })

                if role == "assistant" and tool_use_blocks:
                    out.append({
                        "role":       "assistant",
                        "content":    " ".join(texts),
                        "tool_calls": tool_use_blocks,
                    })
                elif tool_result_blocks:
                    # Each tool_result becomes its own role=tool message.
                    for trb in tool_result_blocks:
                        out.append({
                            "role":         "tool",
                            "content":      trb["content"],
                            "tool_call_id": trb["tool_call_id"],
                        })
                else:
                    out.append({"role": role, "content": " ".join(texts)})
            else:
                out.append({"role": role, "content": str(content or "")})
        return out


def make_llm() -> LLM:
    """Pick the LLM backend by env var precedence:

      1. OLLAMA_BASE_URL set → OllamaLLM (local)
      2. ANTHROPIC_API_KEY set → ClaudeLLM (cloud)
      3. otherwise            → StubLLM   (offline / CI)

    OLLAMA_MODEL alone does NOT switch to Ollama — compose files often
    bake a default model name into the container env even when the
    user wants to talk to Claude, and we don't want that to silently
    short-circuit. The base URL is the real signal.
    """
    if os.environ.get("OLLAMA_BASE_URL"):
        return OllamaLLM()
    if os.environ.get("ANTHROPIC_API_KEY"):
        return ClaudeLLM()
    return StubLLM()
