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

import base64
import json
import math
import os
import struct
import sys
import urllib.error
import urllib.request
from typing import List, Optional, Sequence, Union


# ---------------------------------------------------------------- #
#  Vector serialization                                              #
# ---------------------------------------------------------------- #
# EvoSQL's PG wire protocol caps a single statement at 8 KB. A 1024-
# dimensional bge-m3 vector as a JSON float list is ~12 KB; even as
# float32 base64 it's ~5.5 KB, which already crowds long outlook
# bodies (5-7 KB body + 5.5 KB vector → > 8 KB limit, PUT rejected).
# int8 quantization brings the vector down to ~1.4 KB base64 and
# fits comfortably alongside the largest records the corpus carries.
#
# Quantization layout: 8-byte float32 little-endian `scale` prefix
# followed by N int8 bytes. Vectors are first L2-normalized, then
# scaled so the largest absolute value lands at 127; reconstruction
# divides by 127 / scale_max. For bge-m3 (cosine-friendly, already
# near unit norm) this preserves ranking with negligible drift.
#
# The decoder accepts three shapes for forward/backward
# compatibility across the model upgrade:
#   - legacy Python list (very old rows)
#   - b64f32: float32 buffer (first bge-m3 backfill attempt)
#   - b64i8:  scale prefix + int8 buffer (current)
_VEC_F32_TAG = "b64f32:"
_VEC_I8_TAG  = "b64i8:"


def encode_vec(vec: Sequence[float]) -> str:
    """Quantize and pack a float vector for storage. Result fits
    1024 dims in ~1.4 KB base64, well under the 8 KB statement
    limit even when the row carries a long body."""
    if not vec:
        return _VEC_I8_TAG
    floats = [float(x) for x in vec]
    norm = math.sqrt(sum(x * x for x in floats)) or 1.0
    unit = [x / norm for x in floats]
    scale = max((abs(x) for x in unit), default=1.0) or 1.0
    q = [max(-127, min(127, int(round(x * (127.0 / scale)))))
         for x in unit]
    header = struct.pack("<f", scale)
    body = bytes((x & 0xFF) for x in q)
    return _VEC_I8_TAG + base64.b64encode(header + body).decode("ascii")


def decode_vec(value: Union[str, Sequence[float], None]
                 ) -> Optional[List[float]]:
    """Inverse of encode_vec. Returns None when the value is missing
    or unparseable. Accepts legacy float32 and Python-list shapes
    so a partially-migrated corpus stays queryable."""
    if value is None:
        return None
    if isinstance(value, list):
        return [float(x) for x in value]
    if not isinstance(value, str):
        return None
    if value.startswith(_VEC_I8_TAG):
        try:
            raw = base64.b64decode(value[len(_VEC_I8_TAG):])
            if len(raw) < 5:
                return None
            scale = struct.unpack("<f", raw[:4])[0]
            body = raw[4:]
            inv = scale / 127.0
            return [int.from_bytes(body[i:i+1], "little", signed=True) * inv
                    for i in range(len(body))]
        except Exception:
            return None
    if value.startswith(_VEC_F32_TAG):
        try:
            raw = base64.b64decode(value[len(_VEC_F32_TAG):])
            n = len(raw) // 4
            return list(struct.unpack(f"<{n}f", raw))
        except Exception:
            return None
    return None


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
    floats or None if the provider is disabled / fails.

    Asymmetric models (e5 family) distinguish query vs passage via a
    text prefix; embed_query / embed_passage default to plain embed()
    so symmetric providers need no changes."""

    def __init__(self, kind: str):
        self.kind = kind

    def embed(self, text: str) -> Optional[List[float]]:
        raise NotImplementedError

    def embed_query(self, text: str) -> Optional[List[float]]:
        return self.embed(text)

    def embed_passage(self, text: str) -> Optional[List[float]]:
        return self.embed(text)


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

    @property
    def model_name(self) -> str:
        """Alias so callers that read `model_name` (the local/e5 providers'
        attribute) get the OpenAI model id too. Without this, the stored
        emb_model tag was just 'openai' with no model id, so a migration
        between two OpenAI models looked identical and was silently skipped."""
        return self.model

    def embed(self, text: str) -> Optional[List[float]]:
        if not text or not text.strip():
            return None
        # Residency / no-train gate: refuse to send embedding input to an
        # unvetted provider/endpoint (fail-closed when on; no-op by default).
        # (PII masking is intentionally NOT applied here — it would alter the
        # embedding vector and degrade search; that is a separate policy.)
        from . import provider_policy
        provider_policy.check("openai", endpoint=self._URL)
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

    def embed_batch(self, texts: List[str],
                     batch_size: int = 32
                     ) -> List[Optional[List[float]]]:
        """Encode many texts in one model call. Empty strings are
        kept as None placeholders so the caller can zip results
        back to the input order. The single-call path keeps the
        previous behavior; this exists so a backfill over 6 K rows
        finishes in tens of minutes instead of hours."""
        if not texts:
            return []
        idx = [i for i, t in enumerate(texts) if t and t.strip()]
        if not idx:
            return [None] * len(texts)
        try:
            model = self._load()
            vecs = model.encode([texts[i] for i in idx],
                                 batch_size=batch_size,
                                 normalize_embeddings=False,
                                 show_progress_bar=False)
        except Exception as exc:
            print(f"[mcp-evosql] local embed_batch failed: {exc}",
                  file=sys.stderr, flush=True)
            return [None] * len(texts)
        out: List[Optional[List[float]]] = [None] * len(texts)
        for pos, v in zip(idx, vecs):
            out[pos] = [float(x) for x in v.tolist()]
        return out


class _E5Provider(_LocalProvider):
    """Asymmetric multilingual-e5 wrapper. e5 was trained with
    'query: ' / 'passage: ' prefixes and L2-normalized embeddings;
    feeding raw text (the symmetric path) measurably degrades
    cross-lingual recall. Used as the SECOND dense ranker alongside
    bge-m3 — on the gold set, RRF(bge, e5) beat either model alone
    (+19% Recall@5 on the 2K-doc subset) because the two models are
    strong on different query shapes (e5 on conceptual, bge on
    specific lookups)."""

    def __init__(self, model_name: str):
        super().__init__(model_name)
        self.kind = "e5"

    def _encode(self, text: str, prefix: str) -> Optional[List[float]]:
        if not text or not text.strip():
            return None
        try:
            model = self._load()
            vec = model.encode(f"{prefix}{text}", normalize_embeddings=True)
            return [float(x) for x in vec.tolist()]
        except Exception as exc:
            print(f"[mcp-evosql] e5 embed failed: {exc}",
                  file=sys.stderr, flush=True)
            return None

    def embed(self, text: str) -> Optional[List[float]]:
        # Default to passage shape — save() stores passages.
        return self._encode(text, "passage: ")

    def embed_query(self, text: str) -> Optional[List[float]]:
        return self._encode(text, "query: ")

    def embed_passage(self, text: str) -> Optional[List[float]]:
        return self._encode(text, "passage: ")

    def embed_batch(self, texts: List[str],
                     batch_size: int = 16
                     ) -> List[Optional[List[float]]]:
        if not texts:
            return []
        idx = [i for i, t in enumerate(texts) if t and t.strip()]
        if not idx:
            return [None] * len(texts)
        try:
            model = self._load()
            vecs = model.encode([f"passage: {texts[i]}" for i in idx],
                                 batch_size=batch_size,
                                 normalize_embeddings=True,
                                 show_progress_bar=False)
        except Exception as exc:
            print(f"[mcp-evosql] e5 embed_batch failed: {exc}",
                  file=sys.stderr, flush=True)
            return [None] * len(texts)
        out: List[Optional[List[float]]] = [None] * len(texts)
        for pos, v in zip(idx, vecs):
            out[pos] = [float(x) for x in v.tolist()]
        return out


def embedder2_from_env() -> EmbeddingProvider:
    """Resolve the optional SECOND dense embedder for RRF ensemble.

    EVOSQL_EMBEDDING_MODEL_2
        unset / "none" → no second ranker (single-model behavior)
        a model name   → e5-family wrapper (asymmetric prefixes).
                         Recommended: intfloat/multilingual-e5-large.
    """
    model = os.environ.get("EVOSQL_EMBEDDING_MODEL_2", "").strip()
    if not model or model.lower() == "none":
        return _NoOpProvider()
    return _E5Provider(model)


class Reranker:
    """Cross-encoder reranker — scores (query, doc) pairs jointly so
    near-tied embedding neighbors get reordered by the model that
    actually reads both texts together. The base class is the no-op
    fallback so callers can `reranker.score(...)` unconditionally."""

    def __init__(self, kind: str):
        self.kind = kind

    @property
    def enabled(self) -> bool:
        return False

    def score(self, query: str,
                docs: Sequence[str]) -> Optional[List[float]]:
        """Return one score per doc, ordered to match `docs`. None
        means the reranker is off or the call failed; the caller
        keeps the upstream hybrid ranking in that case."""
        return None


class _NoOpReranker(Reranker):
    def __init__(self):
        super().__init__("none")


class _CrossEncoderReranker(Reranker):
    """sentence-transformers CrossEncoder wrapper. Lazy-loaded so the
    model download cost is paid only when the first search actually
    routes through here, not at MCPServer startup."""

    def __init__(self, model_name: str):
        super().__init__("cross-encoder")
        self.model_name = model_name
        self._model = None

    @property
    def enabled(self) -> bool:
        return True

    def _load(self):
        if self._model is None:
            from sentence_transformers import CrossEncoder
            self._model = CrossEncoder(self.model_name)
        return self._model

    def score(self, query: str,
                docs: Sequence[str]) -> Optional[List[float]]:
        if not query or not docs:
            return None
        try:
            model = self._load()
            pairs = [(query, d or "") for d in docs]
            scores = model.predict(pairs, show_progress_bar=False)
        except Exception as exc:
            print(f"[mcp-evosql] cross-encoder rerank failed: {exc}",
                  file=sys.stderr, flush=True)
            return None
        return [float(x) for x in scores]


def reranker_from_env(
        provider: Optional[EmbeddingProvider] = None) -> Reranker:
    """Resolve the reranker backend.

    EVOSQL_RERANK
        "1"/"true"/"on"  → force enable (default when an embedding
                            provider is configured)
        "0"/"false"/"off"→ force disable
        unset            → on when `provider` is local/openai, off
                            otherwise (pure-keyword backends gain
                            nothing from cross-encoder rerank)
    EVOSQL_RERANK_MODEL
        Override the cross-encoder name. Default
        BAAI/bge-reranker-base — multilingual, CPU-friendly.
    """
    raw = os.environ.get("EVOSQL_RERANK", "").strip().lower()
    if raw in ("0", "false", "off", "no"):
        return _NoOpReranker()
    if raw in ("1", "true", "on", "yes"):
        forced_on = True
    else:
        forced_on = False
    if not forced_on:
        # Default-on only when a real embedding provider is wired up;
        # without dense scores reranking has nothing meaningful to
        # rerank and the cross-encoder import + load is pure cost.
        if provider is None or provider.kind == "none":
            return _NoOpReranker()
    model = os.environ.get("EVOSQL_RERANK_MODEL",
                           "BAAI/bge-reranker-base")
    return _CrossEncoderReranker(model)


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
        # bge-m3 is the multilingual default: 1024 dim, strong on
        # Turkish + IR-style queries, single model for dense
        # retrieval. The override env stays the same so callers who
        # want the lighter all-MiniLM or the multilingual-MiniLM can
        # set it explicitly.
        model = os.environ.get("EVOSQL_EMBEDDING_MODEL",
                               "BAAI/bge-m3")
        return _LocalProvider(model)
    return _NoOpProvider()
