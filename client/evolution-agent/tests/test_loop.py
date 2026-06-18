"""
test_loop — the agent loop, with zero network / API key / database.

Both boundaries are injected: a `FakeClient` returns scripted model responses
(tool_use turns then a final text turn), and a `FakeServer` stands in for
MCPServer's `_call_tool`. This pins the loop's contract — tool dispatch,
result feed-back, termination, the turn cap, pause_turn, and the send rule in
the system prompt — without any of the heavy runtime.
"""
from __future__ import annotations

import copy
import os
import sys
import types

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from evolution_agent.loop import (AgentLoop, DEFAULT_SYSTEM,
                                   build_anthropic_tools, _blocks_to_dicts)


# --- stubs --------------------------------------------------------------
def _text(t):
    return types.SimpleNamespace(type="text", text=t)


def _tool_use(id_, name, inp):
    return types.SimpleNamespace(type="tool_use", id=id_, name=name, input=inp)


class _Resp:
    def __init__(self, content, stop_reason, usage=None):
        self.content = content
        self.stop_reason = stop_reason
        self.usage = usage   # SimpleNamespace(input_tokens=, output_tokens=) or None


class FakeClient:
    """Replays a fixed list of (content, stop_reason) responses, one per call,
    and records the `messages` it was handed each turn."""
    def __init__(self, scripted):
        self._scripted = list(scripted)
        self.calls = []
        self.messages = self  # so `client.messages.create(...)` works

    def create(self, **kw):
        # Snapshot messages at call time: the loop mutates the same list in
        # place across turns (the real SDK serializes per call, so that's fine),
        # but the test inspects each turn's state, which needs a copy.
        self.calls.append({**kw, "messages": copy.deepcopy(kw.get("messages"))})
        item = self._scripted.pop(0)
        content, stop = item[0], item[1]
        usage = item[2] if len(item) > 2 else None
        return _Resp(content, stop, usage)


def _usage(i, o):
    return types.SimpleNamespace(input_tokens=i, output_tokens=o)


class FakeServer:
    """Stands in for MCPServer: records tool calls, returns canned results."""
    def __init__(self, results=None):
        self.results = results or {}
        self.calls = []

    def _call_tool(self, name, args, identity=None):
        self.calls.append((name, args, identity))
        return self.results.get(name, {"ok": True, "echo": args})


# --- tests --------------------------------------------------------------
def test_tool_bridge_maps_schema_key():
    mcp = [{"name": "save_memory", "description": "store a fact",
            "inputSchema": {"type": "object", "properties": {"fact": {}}}}]
    out = build_anthropic_tools(mcp)
    assert out == [{"name": "save_memory", "description": "store a fact",
                    "input_schema": {"type": "object",
                                     "properties": {"fact": {}}}}]


def test_tool_bridge_defaults_missing_schema():
    out = build_anthropic_tools([{"name": "x"}])
    assert out[0]["input_schema"] == {"type": "object", "properties": {}}
    assert out[0]["description"] == ""


def test_single_tool_then_final_answer():
    client = FakeClient([
        ([_text("let me check"), _tool_use("t1", "search_memory",
                                            {"query": "alice"})], "tool_use"),
        ([_text("Alice owes you a reply.")], "end_turn"),
    ])
    server = FakeServer({"search_memory": {"ok": True, "results": ["loop:alice"]}})
    out = AgentLoop(server, client=client, tools=[], system="S").run("who owes me?")

    assert out["final_text"] == "Alice owes you a reply."
    assert out["stop_reason"] == "end_turn"
    assert out["turns"] == 2
    # the tool was dispatched with the model's args, exactly once
    assert server.calls == [("search_memory", {"query": "alice"}, None)]
    # the loop fed the tool result back as a tool_result user turn
    second_turn_msgs = client.calls[1]["messages"]
    assert second_turn_msgs[-1]["role"] == "user"
    tr = second_turn_msgs[-1]["content"][0]
    assert tr["type"] == "tool_result" and tr["tool_use_id"] == "t1"
    assert "loop:alice" in tr["content"]
    # one step recorded with the real result
    assert out["steps"] == [{"tool": "search_memory",
                             "input": {"query": "alice"},
                             "result": {"ok": True, "results": ["loop:alice"]}}]


def test_no_tools_immediate_answer():
    client = FakeClient([([_text("Hi!")], "end_turn")])
    server = FakeServer()
    out = AgentLoop(server, client=client, tools=[]).run("hello")
    assert out["final_text"] == "Hi!"
    assert out["turns"] == 1
    assert server.calls == []


def test_parallel_tool_calls_in_one_turn():
    client = FakeClient([
        ([_tool_use("a", "daily_brief", {}),
          _tool_use("b", "recent_memories", {"n": 3})], "tool_use"),
        ([_text("done")], "end_turn"),
    ])
    server = FakeServer()
    out = AgentLoop(server, client=client, tools=[]).run("brief me")
    assert [c[0] for c in server.calls] == ["daily_brief", "recent_memories"]
    # both results returned in a single user turn of two tool_result blocks
    tr = client.calls[1]["messages"][-1]["content"]
    assert len(tr) == 2 and all(b["type"] == "tool_result" for b in tr)
    assert out["turns"] == 2


def test_turn_cap_stops_runaway_loop():
    # a client that ALWAYS asks for a tool would loop forever without the cap
    forever = [([_tool_use(f"i{n}", "search_memory", {})], "tool_use")
               for n in range(50)]
    client = FakeClient(forever)
    server = FakeServer()
    out = AgentLoop(server, client=client, tools=[], max_turns=4).run("go")
    assert out["turns"] == 4
    assert out["stop_reason"] == "max_turns"
    assert len(server.calls) == 4


def test_pause_turn_is_resumed_not_finalized():
    client = FakeClient([
        ([_text("thinking...")], "pause_turn"),     # must continue, not finish
        ([_text("final")], "end_turn"),
    ])
    out = AgentLoop(FakeServer(), client=client, tools=[]).run("q")
    assert out["final_text"] == "final"
    assert out["turns"] == 2


def test_events_are_emitted():
    seen = []
    client = FakeClient([
        ([_tool_use("t1", "forget", {"key": "k"})], "tool_use"),
        ([_text("ok")], "end_turn"),
    ])
    AgentLoop(FakeServer(), client=client, tools=[],
              on_event=lambda k, p: seen.append(k)).run("x")
    assert "tool_call" in seen and "tool_result" in seen and "done" in seen


def test_system_prompt_states_the_send_invariant():
    low = DEFAULT_SYSTEM.lower()
    assert "approve_send" in low
    assert "never" in low and "send" in low   # the hard no-auto-send rule


def test_usage_is_accumulated_across_turns():
    client = FakeClient([
        ([_tool_use("t1", "daily_brief", {})], "tool_use", _usage(100, 30)),
        ([_text("done")], "end_turn", _usage(50, 20)),
    ])
    out = AgentLoop(FakeServer(), client=client, tools=[]).run("go")
    assert out["usage"] == {"input_tokens": 150, "output_tokens": 50,
                            "total_tokens": 200}
    assert out["stop_reason"] == "end_turn"


def test_token_budget_stops_the_run():
    # turn 1 spends 10k (over the 6k budget); the loop must NOT make a 2nd call
    client = FakeClient([
        ([_tool_use("t1", "search_memory", {})], "tool_use", _usage(5000, 5000)),
        ([_text("should never run")], "end_turn", _usage(1, 1)),
    ])
    server = FakeServer()
    out = AgentLoop(server, client=client, tools=[], token_budget=6000).run("go")
    assert out["stop_reason"] == "budget"
    assert out["turns"] == 1
    assert len(client.calls) == 1          # second model call was prevented
    assert len(server.calls) == 1          # turn 1's tool still ran
    assert out["usage"]["total_tokens"] == 10000


def test_daily_spend_cap_stops_the_run():
    # Pre-seed today's ledger above a small cap; the loop must stop before the
    # first model call (no scripted FakeClient response is consumed).
    import datetime
    import json
    import tempfile

    fd, path = tempfile.mkstemp(suffix=".json")
    os.close(fd)
    today = datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%d")
    with open(path, "w") as f:
        json.dump({today: 1000}, f)

    saved = {k: os.environ.get(k)
             for k in ("EVOSQL_LLM_SPEND_FILE", "EVOSQL_LLM_DAILY_TOKENS")}
    os.environ["EVOSQL_LLM_SPEND_FILE"] = path
    os.environ["EVOSQL_LLM_DAILY_TOKENS"] = "500"      # 1000 already >= 500
    try:
        client = FakeClient([([_text("should never run")], "end_turn", _usage(1, 1))])
        out = AgentLoop(FakeServer(), client=client, tools=[]).run("go")
        assert out["stop_reason"] == "spend_cap"
        assert len(client.calls) == 0                  # no model call was made
        assert out["turns"] == 0
    finally:
        for k, v in saved.items():
            if v is None:
                os.environ.pop(k, None)
            else:
                os.environ[k] = v
        os.remove(path)


def test_no_budget_never_stops_on_cost():
    client = FakeClient([
        ([_tool_use("t1", "daily_brief", {})], "tool_use", _usage(9999, 9999)),
        ([_text("ok")], "end_turn", _usage(9999, 9999)),
    ])
    out = AgentLoop(FakeServer(), client=client, tools=[]).run("go")  # budget=None
    assert out["stop_reason"] == "end_turn"   # huge usage, but no ceiling


def test_blocks_to_dicts_drops_unknown_types():
    blocks = [_text("hi"), types.SimpleNamespace(type="thinking", thinking="…"),
              _tool_use("t", "n", {"a": 1})]
    out = _blocks_to_dicts(blocks)
    assert out == [{"type": "text", "text": "hi"},
                   {"type": "tool_use", "id": "t", "name": "n",
                    "input": {"a": 1}}]
