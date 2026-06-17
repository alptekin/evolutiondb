"""
llm — one provider-agnostic chat resolver for the small, opt-in LLM tasks in
the server (loop classification, PR code review, …).

Each task keeps its own opt-in env flag and model default; this module only
dispatches the actual call by provider, so a task stays a no-op until its flag
is set and gains OpenAI/OpenRouter/Ollama/custom support for free. When the
provider is ``anthropic`` the call is byte-for-byte the previous inline one, so
existing deployments are unchanged.

Providers (the value of a task's EVOSQL_*_LLM flag):
  anthropic | claude | sonnet   -> the anthropic SDK (ANTHROPIC_API_KEY)
  openai | openrouter | custom  -> an OpenAI-compatible /chat/completions
                                   endpoint over stdlib urllib
  ollama                        -> a local Ollama /api/chat

OpenAI-compatible config (shared): EVOSQL_LLM_BASE_URL (default
https://api.openai.com/v1; openrouter defaults to https://openrouter.ai/api/v1)
and EVOSQL_LLM_API_KEY (falls back to OPENAI_API_KEY / OPENROUTER_API_KEY).
"""
from __future__ import annotations

import json
import os
import urllib.request
from typing import Optional

from . import pii_egress

_ANTHROPIC = ("anthropic", "claude", "sonnet")
_OPENAI_COMPAT = ("openai", "openrouter", "custom", "openai-compatible")


def available(provider: Optional[str]) -> bool:
    """True if ``provider`` names a backend this resolver can dispatch."""
    p = (provider or "").strip().lower()
    return p in _ANTHROPIC or p in _OPENAI_COMPAT or p == "ollama"


def _openai_base(provider: str) -> str:
    base = os.environ.get("EVOSQL_LLM_BASE_URL", "").strip()
    if base:
        return base.rstrip("/")
    if provider == "openrouter":
        return "https://openrouter.ai/api/v1"
    return "https://api.openai.com/v1"


def _openai_key() -> str:
    return (os.environ.get("EVOSQL_LLM_API_KEY")
            or os.environ.get("OPENAI_API_KEY")
            or os.environ.get("OPENROUTER_API_KEY") or "")


def chat(prompt: str, *, provider: str, model: str,
         max_tokens: int = 2000) -> Optional[str]:
    """Send a single user message and return the assistant's text (stripped),
    or None when the provider is unknown. Exceptions propagate — every caller
    already wraps its opt-in LLM call in try/except and degrades gracefully."""
    prompt = pii_egress.scrub(prompt)   # mask PII before any provider dispatch
    p = (provider or "").strip().lower()

    if p in _ANTHROPIC:
        import anthropic
        c = anthropic.Anthropic()
        msg = c.messages.create(model=model, max_tokens=max_tokens,
                                messages=[{"role": "user", "content": prompt}])
        return (msg.content[0].text or "").strip()

    if p in _OPENAI_COMPAT:
        key = _openai_key()
        body = json.dumps({"model": model, "max_tokens": max_tokens,
                           "messages": [{"role": "user", "content": prompt}]}
                          ).encode()
        headers = {"Content-Type": "application/json"}
        if key:
            headers["Authorization"] = f"Bearer {key}"
        if p == "openrouter":
            headers["HTTP-Referer"] = "https://github.com/alptekin/evolutiondb"
        req = urllib.request.Request(_openai_base(p) + "/chat/completions",
                                     data=body, headers=headers)
        with urllib.request.urlopen(req, timeout=60) as r:  # noqa: S310
            data = json.loads(r.read().decode("utf-8", "replace") or "{}")
        choices = data.get("choices") or [{}]
        return ((choices[0].get("message") or {}).get("content") or "").strip()

    if p == "ollama":
        host = os.environ.get("OLLAMA_HOST", "http://127.0.0.1:11434").rstrip("/")
        body = json.dumps({"model": model, "stream": False,
                           "messages": [{"role": "user", "content": prompt}]}
                          ).encode()
        req = urllib.request.Request(host + "/api/chat", data=body,
                                     headers={"Content-Type": "application/json"})
        with urllib.request.urlopen(req, timeout=60) as r:  # noqa: S310
            data = json.loads(r.read().decode("utf-8", "replace") or "{}")
        return ((data.get("message") or {}).get("content") or "").strip()

    return None
