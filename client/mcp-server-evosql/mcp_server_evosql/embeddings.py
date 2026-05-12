"""
mcp_server_evosql.embeddings — optional semantic-search support.

When `EVOSQL_EMBEDDING_PROVIDER` is set, save_memory persists a
dense vector alongside the text and search_memory ranks by cosine
similarity. With no provider configured we fall back to the legacy
keyword-overlap score, so the server stays fully usable offline.

Two providers are supported:

  openai  — POSTs to https://api.openai.com/v1/embeddings using
            urllib (no extra dependency). Reads OPENAI_API_KEY,
            defaults to text-embedding-3-small (1536 dims, ~$0.02
            per million input tokens at 2026 rates).

  local   — sentence-transformers (`pip install
            'mcp-server-evolutiondb[embeddings-local]'`). Runs the
            all-MiniLM-L6-v2 model on CPU; fully offline.

The Provider object is built once at MCPServer startup and shared
across every tool call.
"""
from __future__ import annotations

import json
import math
import os
import sys
import urllib.error
import urllib.request
from typing import List, Optional, Sequence


def _norm(v: Sequence[float]) -> float:
    return math.sqrt(sum(x * x for x in v)) or 1.0


def cosine(a: Sequence[float], b: Sequence[float]) -> float:
    if not a or not b or len(a) != len(b):
        return 0.0
    dot = 0.0
    for x, y in zip(a, b):
        dot += x * y
    return dot / (_norm(a) * _norm(b))


class EmbeddingProvider:
    """Common interface — `.embed(text)` returns a Python list of
    floats or None if the provider is disabled / fails."""

    def __init__(self, kind: str):
        self.kind = kind

    def embed(self, text: str) -> Optional[List[float]]:
        raise NotImplementedError


class _NoOpProvider(EmbeddingProvider):
    def __init__(self):
        super().__init__("none")

    def embed(self, text: str) -> Optional[List[float]]:
        return None


class _OpenAIProvider(EmbeddingProvider):
    """Tiny urllib client — keeps the package free of openai SDK
    pin churn and avoids an async runtime inside the stdio loop."""

    _URL = "https://api.openai.com/v1/embeddings"

    def __init__(self, api_key: str, model: str):
        super().__init__("openai")
        self.api_key = api_key
        self.model   = model

    def embed(self, text: str) -> Optional[List[float]]:
        if not text or not text.strip():
            return None
        body = json.dumps({"input": text, "model": self.model}).encode()
        req = urllib.request.Request(
            self._URL,
            data=body,
            method="POST",
            headers={
                "Content-Type":  "application/json",
                "Authorization": f"Bearer {self.api_key}",
            },
        )
        try:
            with urllib.request.urlopen(req, timeout=15) as resp:
                payload = json.loads(resp.read().decode())
        except (urllib.error.URLError, TimeoutError, ValueError) as exc:
            print(f"[mcp-evosql] openai embed failed: {exc}",
                  file=sys.stderr, flush=True)
            return None
        try:
            return payload["data"][0]["embedding"]
        except (KeyError, IndexError, TypeError):
            return None


class _LocalProvider(EmbeddingProvider):
    """sentence-transformers — model is lazy-loaded so the import
    cost is only paid when the user actually opts in."""

    def __init__(self, model_name: str):
        super().__init__("local")
        self.model_name = model_name
        self._model = None

    def _load(self):
        if self._model is None:
            from sentence_transformers import SentenceTransformer
            self._model = SentenceTransformer(self.model_name)
        return self._model

    def embed(self, text: str) -> Optional[List[float]]:
        if not text or not text.strip():
            return None
        try:
            model = self._load()
            vec = model.encode(text, normalize_embeddings=False)
            return [float(x) for x in vec.tolist()]
        except Exception as exc:
            print(f"[mcp-evosql] local embed failed: {exc}",
                  file=sys.stderr, flush=True)
            return None


def provider_from_env() -> EmbeddingProvider:
    """Resolve the embedding backend from environment variables.

    EVOSQL_EMBEDDING_PROVIDER
        openai | local | none (default: none — semantic search off)
    EVOSQL_EMBEDDING_MODEL
        Provider-specific model name. Default text-embedding-3-small
        for openai, all-MiniLM-L6-v2 for local.
    OPENAI_API_KEY
        Required for the openai provider; absent → falls back to no-op.
    """
    kind = os.environ.get("EVOSQL_EMBEDDING_PROVIDER", "none").lower()
    if kind == "openai":
        key = os.environ.get("OPENAI_API_KEY", "").strip()
        if not key:
            print("[mcp-evosql] EVOSQL_EMBEDDING_PROVIDER=openai but "
                  "OPENAI_API_KEY is unset; semantic search disabled.",
                  file=sys.stderr, flush=True)
            return _NoOpProvider()
        model = os.environ.get("EVOSQL_EMBEDDING_MODEL",
                               "text-embedding-3-small")
        return _OpenAIProvider(key, model)
    if kind == "local":
        model = os.environ.get("EVOSQL_EMBEDDING_MODEL",
                               "sentence-transformers/all-MiniLM-L6-v2")
        return _LocalProvider(model)
    return _NoOpProvider()
