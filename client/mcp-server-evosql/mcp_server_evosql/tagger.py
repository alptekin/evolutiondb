"""
Topic-tag extraction — runs a small chat model over each fact and
attaches 3-5 kebab-case topic tags to the stored record. The result
lands in two places of the record:

  topic_tags  — the raw list returned by the model
  tags        — the union of the connector's source tags and the
                topic tags, so existing tag-filter logic in
                search_memory keeps working

Disabled by default. Activate via EVOSQL_TOPIC_PROVIDER.

  EVOSQL_TOPIC_PROVIDER = openai | none
  EVOSQL_TOPIC_MODEL    = (provider default — e.g. gpt-4o-mini)
  OPENAI_API_KEY        = required when provider is openai

Cost reference: gpt-4o-mini in 2026 lists at ~$0.15 / 1M input
tokens. A typical memory record is under 200 tokens, so 10k
records cost about $0.30 of model time.

The tagger surface intentionally mirrors mcp_server_evosql.embeddings
so both providers can be swapped or extended on the same shape.
"""
from __future__ import annotations

import json
import os
import re
import sys
import urllib.error
import urllib.request
from typing import List, Optional


# ---------------------------------------------------------------- #
#  Pure helpers (DB-free, easy to test)                             #
# ---------------------------------------------------------------- #
_PREFIXES = ("tags:", "topics:", "topic tags:", "topic:")


def parse_tags(raw: str, *, max_tags: int = 5,
                max_len: int = 40) -> List[str]:
    """Clean the model's reply into a deduplicated kebab-case list.

    The prompt asks for "tag1, tag2, tag3" lowercase kebab-case, but
    real models sometimes prepend "Tags:" or wrap in quotes or use a
    bullet list. This function normalises whatever comes back."""
    s = (raw or "").strip()
    for prefix in _PREFIXES:
        if s.lower().startswith(prefix):
            s = s[len(prefix):].strip()
    # Non-conforming replies sometimes use bullet markers. Promote
    # them to commas before splitting so each bullet becomes its own
    # tag. We only touch obvious bullet positions — `-` adjacent to
    # letters is part of a kebab-case tag and is left alone.
    s = re.sub(r"(?:^|[\s])[*•]\s+", ",", s)
    s = re.sub(r"\s-\s",              ",", s)
    parts = re.split(r"[,\n;]+", s)
    out: List[str] = []
    for p in parts:
        p = p.strip().strip("\"'`-•*[]()<>").lower()
        p = re.sub(r"\s+", "-", p)
        p = re.sub(r"[^a-z0-9\-]", "", p)
        p = re.sub(r"-+", "-", p).strip("-")
        if not p or len(p) > max_len:
            continue
        out.append(p)
    seen: set = set()
    final: List[str] = []
    for p in out:
        if p not in seen:
            seen.add(p)
            final.append(p)
    return final[:max_tags]


# ---------------------------------------------------------------- #
#  Providers                                                        #
# ---------------------------------------------------------------- #
class TopicTagger:
    """Interface — subclasses implement `tag(text)` returning a list
    of clean kebab-case topic tags. `kind` is a short identifier
    that gets stored alongside the tags so future re-tagging passes
    can distinguish providers if needed."""
    kind = "none"

    def tag(self, text: str) -> List[str]:
        raise NotImplementedError


class _NoOpTagger(TopicTagger):
    kind = "none"

    def tag(self, text: str) -> List[str]:
        return []


class _OpenAITagger(TopicTagger):
    """Tiny urllib client — no openai SDK pin, no async runtime."""
    kind = "openai"
    _URL = "https://api.openai.com/v1/chat/completions"

    _SYSTEM_PROMPT = (
        "You extract topic tags from short text snippets. "
        "Reply with 3 to 5 lowercase kebab-case tags, separated by "
        "commas, with no quotes, no markdown, no leading 'Tags:' "
        "label, no explanation."
    )

    def __init__(self, api_key: str, model: str):
        self.api_key = api_key
        self.model   = model

    def tag(self, text: str) -> List[str]:
        snippet = (text or "").strip()
        if not snippet:
            return []
        body = json.dumps({
            "model": self.model,
            "messages": [
                {"role": "system", "content": self._SYSTEM_PROMPT},
                {"role": "user",   "content": snippet[:2000]},
            ],
            "max_tokens":  60,
            "temperature": 0.0,
        }).encode()
        req = urllib.request.Request(self._URL, data=body, method="POST",
            headers={
                "Authorization": f"Bearer {self.api_key}",
                "Content-Type":  "application/json",
                "Accept":        "application/json",
            })
        try:
            with urllib.request.urlopen(req, timeout=20) as resp:
                payload = json.loads(resp.read().decode())
            raw = payload["choices"][0]["message"]["content"]
        except (urllib.error.URLError, TimeoutError,
                ValueError, KeyError, IndexError) as exc:
            print(f"[tagger] openai call failed: {exc}",
                  file=sys.stderr, flush=True)
            return []
        return parse_tags(raw)


def provider_from_env() -> TopicTagger:
    """Resolve the active tagger from environment variables.

    EVOSQL_TOPIC_PROVIDER  openai | none  (default: none)
    EVOSQL_TOPIC_MODEL     model id for the chosen provider
    OPENAI_API_KEY         required when provider is openai
    """
    kind = os.environ.get("EVOSQL_TOPIC_PROVIDER", "none").strip().lower()
    if kind == "openai":
        key = os.environ.get("OPENAI_API_KEY", "").strip()
        if not key:
            print("[tagger] EVOSQL_TOPIC_PROVIDER=openai but "
                  "OPENAI_API_KEY is unset; topic tagging disabled.",
                  file=sys.stderr, flush=True)
            return _NoOpTagger()
        model = os.environ.get("EVOSQL_TOPIC_MODEL", "gpt-4o-mini")
        return _OpenAITagger(key, model)
    return _NoOpTagger()
