"""
test_llm — the provider-agnostic chat resolver (llm.py).

The HTTP/SDK boundaries are stubbed (urllib.request.urlopen + a fake anthropic
module), so no network/key/SDK is needed. Verifies provider dispatch, the
openai-compatible + ollama request shapes, and that an unknown provider is a
clean None. Server-free.
"""
from __future__ import annotations

import io
import json
import os
import sys
import types

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import pytest

from mcp_server_evosql import llm


def test_available():
    for p in ("anthropic", "claude", "sonnet", "openai", "openrouter",
              "custom", "ollama"):
        assert llm.available(p), p
    for p in ("", "weird", None):
        assert not llm.available(p)


def test_anthropic_path(monkeypatch):
    captured = {}

    class _Msg:
        content = [types.SimpleNamespace(text="  the review  ")]

    class _Messages:
        def create(self, **kw):
            captured.update(kw)
            return _Msg()

    class _Client:
        messages = _Messages()

    fake = types.ModuleType("anthropic")
    fake.Anthropic = lambda: _Client()
    monkeypatch.setitem(sys.modules, "anthropic", fake)
    out = llm.chat("hi", provider="anthropic", model="claude-x", max_tokens=99)
    assert out == "the review"
    assert captured["model"] == "claude-x" and captured["max_tokens"] == 99
    assert captured["messages"] == [{"role": "user", "content": "hi"}]


def _fake_urlopen(capture, payload):
    class _Resp:
        def __enter__(self): return self
        def __exit__(self, *a): return False
        def read(self): return json.dumps(payload).encode()

    def _open(req, timeout=None):
        capture["url"] = req.full_url
        capture["headers"] = {k.lower(): v for k, v in req.header_items()}
        capture["body"] = json.loads(req.data.decode())
        return _Resp()
    return _open


def test_openai_compatible_path(monkeypatch):
    cap = {}
    monkeypatch.setattr(llm.urllib.request, "urlopen",
                        _fake_urlopen(cap, {"choices": [
                            {"message": {"content": "openai says hi"}}]}))
    monkeypatch.setenv("EVOSQL_LLM_API_KEY", "sk-test")
    monkeypatch.delenv("EVOSQL_LLM_BASE_URL", raising=False)
    out = llm.chat("q", provider="openai", model="gpt-x")
    assert out == "openai says hi"
    assert cap["url"] == "https://api.openai.com/v1/chat/completions"
    assert cap["headers"]["authorization"] == "Bearer sk-test"
    assert cap["body"]["model"] == "gpt-x"
    assert cap["body"]["messages"] == [{"role": "user", "content": "q"}]


def test_openrouter_default_base(monkeypatch):
    cap = {}
    monkeypatch.setattr(llm.urllib.request, "urlopen",
                        _fake_urlopen(cap, {"choices": [
                            {"message": {"content": "ok"}}]}))
    monkeypatch.delenv("EVOSQL_LLM_BASE_URL", raising=False)
    monkeypatch.setenv("EVOSQL_LLM_API_KEY", "k")
    llm.chat("q", provider="openrouter", model="m")
    assert cap["url"].startswith("https://openrouter.ai/api/v1/")


def test_custom_base_url(monkeypatch):
    cap = {}
    monkeypatch.setattr(llm.urllib.request, "urlopen",
                        _fake_urlopen(cap, {"choices": [
                            {"message": {"content": "x"}}]}))
    monkeypatch.setenv("EVOSQL_LLM_BASE_URL", "https://llm.internal/v1")
    monkeypatch.setenv("EVOSQL_LLM_API_KEY", "k")
    llm.chat("q", provider="custom", model="m")
    assert cap["url"] == "https://llm.internal/v1/chat/completions"


def test_ollama_path(monkeypatch):
    cap = {}
    monkeypatch.setattr(llm.urllib.request, "urlopen",
                        _fake_urlopen(cap, {"message": {"content": "local"}}))
    monkeypatch.setenv("OLLAMA_HOST", "http://127.0.0.1:11434")
    out = llm.chat("q", provider="ollama", model="llama3.1")
    assert out == "local"
    assert cap["url"] == "http://127.0.0.1:11434/api/chat"
    assert cap["body"]["model"] == "llama3.1" and cap["body"]["stream"] is False


def test_unknown_provider_is_none():
    assert llm.chat("q", provider="smoke-signals", model="m") is None
