"""
mcp_server_evosql.query_transform — query-side recall experiment.

The retrieval forensics (docs/eval, step-7 analysis) pinned the
recall ceiling on a CROSS-SOURCE semantic gap: a Turkish natural-
language query ("son production release ne zaman çıktı") and the
document that answers it (a technical, English browser-visit title
like "PR 5280 Issuer.Customer") sit far apart in embedding space, so
the gold row never enters the candidate ranking at all. Doc-side
enrichment (LLM summaries, deterministic prefixes) and rerank both
failed because they operate AFTER retrieval — they can only reorder a
pool the gold row is missing from.

This module attacks the gap from the QUERY side instead: before
embedding, the raw query is rewritten into one or more variants that
live closer to the documents' vocabulary, and search() max-pools the
dense similarity across all variants. Because the original query is
always kept as the first variant, a transform can only ADD coverage
to the dense channels — never strip the baseline signal.

Three transform modes (`EVOSQL_QUERY_TRANSFORM`):

  off        identity — returns [query]. Default. No behavior change,
             no LLM call, production stays exactly as before.

  translate  TR→EN translation. Bridges the Turkish-query ↔ English-
             doc gap directly. Variants: [query, english_query].

  hyde       Hypothetical Document Embeddings. The LLM writes a short
             plausible answer/document for the query; that text is
             embedded instead of the question, landing the query
             vector in answer-space. Variants: [query, hypo_doc].

  multi      Multi-query expansion. The LLM emits N paraphrases /
             reformulations; each is embedded and max-pooled.
             Variants: [query, para_1, … para_N].

The LLM backend is any OpenAI-compatible /v1/chat/completions
endpoint (mirrors tagger.py). It defaults to a local ollama server so
the experiment runs offline and free; point EVOSQL_QT_BASE_URL at
api.openai.com to use a hosted model. Every failure path degrades to
the identity transform, so a flaky or absent LLM never breaks search.
"""
from __future__ import annotations

import json
import os
import re
import sys
import urllib.error
import urllib.request
from typing import List, Optional


def _clean_line(s: str) -> str:
    """Strip list markers, numbering, quotes and surrounding
    whitespace off a single model-emitted line."""
    s = s.strip()
    s = re.sub(r"^\s*(?:[-*•]|\d+[.)])\s*", "", s)
    return s.strip().strip("\"'`").strip()


class QueryTransform:
    """Interface — `.transform(query)` returns a list of search texts.

    The original query is ALWAYS element 0 so callers can rely on the
    baseline signal being present regardless of transform success.
    `kind` is the active mode for reporting; `model` identifies the
    LLM (or "n/a" for the no-op)."""

    kind  = "off"
    model = "n/a"

    def transform(self, query: str) -> List[str]:
        return [query]


class _NoOpTransform(QueryTransform):
    kind  = "off"
    model = "n/a"


class _LLMTransform(QueryTransform):
    """OpenAI-compatible chat client. One short completion per query,
    parsed into variant strings. Results are cached in-process keyed
    by the raw query so repeated identical queries (and eval warm-up
    passes) don't re-hit the model."""

    def __init__(self, mode: str, base_url: str, model: str,
                  api_key: str = "", n_variants: int = 3,
                  timeout: int = 20):
        self.kind       = mode
        self.mode       = mode
        self.model      = model
        self._url       = base_url
        self._api_key   = api_key
        self._n         = max(1, n_variants)
        self._timeout   = timeout
        self._cache: dict = {}

    # -- prompt construction per mode --------------------------------
    def _messages(self, query: str):
        if self.mode == "translate":
            sys_p = (
                "You translate search queries to English for a "
                "multilingual document retrieval system. The corpus is "
                "mostly English technical text (code, PR titles, tool "
                "names, web page titles). Translate the user's query to "
                "natural English, preserving proper nouns, product names "
                "and technical terms verbatim. Reply with ONLY the "
                "English query — no quotes, no explanation, no label.")
            return [{"role": "system", "content": sys_p},
                    {"role": "user",   "content": query[:1000]}]
        if self.mode == "hyde":
            sys_p = (
                "You write a brief, plausible passage that would directly "
                "ANSWER the user's question, as if it were an excerpt from "
                "a personal work knowledge base — emails, chat messages, "
                "calendar entries, meeting notes, code/PR descriptions, or "
                "browser history. The content is software-engineering and "
                "business oriented, NOT entertainment or fiction. 1-3 "
                "sentences. Write ONLY in English or Turkish — never any "
                "other language. Invent concrete specifics (names, dates, "
                "technical terms) so the passage reads like real content. "
                "Reply with ONLY the passage, no preamble.")
            return [{"role": "system", "content": sys_p},
                    {"role": "user",   "content": query[:1000]}]
        # multi
        sys_p = (
            f"You reformulate a search query into {self._n} alternative "
            "phrasings to match documents in a personal work knowledge "
            "base (emails, chats, notes, code/PRs, web history). Vary the "
            "vocabulary and include at least one English reformulation "
            "using likely technical terms. Write ONLY in English or "
            "Turkish — never any other language, no transliteration. Reply "
            "with one reformulation per line, no numbering, no explanation.")
        return [{"role": "system", "content": sys_p},
                {"role": "user",   "content": query[:1000]}]

    def _call(self, query: str) -> Optional[str]:
        max_tokens = 200 if self.mode != "translate" else 80
        body = json.dumps({
            "model": self.model,
            "messages": self._messages(query),
            "max_tokens":  max_tokens,
            "temperature": 0.0,
            "stream": False,
        }).encode()
        headers = {"Content-Type": "application/json",
                    "Accept": "application/json"}
        if self._api_key:
            headers["Authorization"] = f"Bearer {self._api_key}"
        req = urllib.request.Request(self._url, data=body, method="POST",
                                      headers=headers)
        try:
            with urllib.request.urlopen(req, timeout=self._timeout) as resp:
                payload = json.loads(resp.read().decode())
            return payload["choices"][0]["message"]["content"]
        except (urllib.error.URLError, TimeoutError,
                ValueError, KeyError, IndexError) as exc:
            print(f"[query-transform] {self.mode} call failed: {exc}",
                  file=sys.stderr, flush=True)
            return None

    def _parse(self, raw: str) -> List[str]:
        if self.mode in ("translate", "hyde"):
            v = _clean_line(raw.replace("\n", " "))
            return [v] if v else []
        # multi — one variant per line
        out: List[str] = []
        for line in raw.splitlines():
            v = _clean_line(line)
            if v:
                out.append(v)
        return out[: self._n]

    def transform(self, query: str) -> List[str]:
        q = (query or "").strip()
        if not q:
            return [query]
        if q in self._cache:
            return self._cache[q]
        variants = [query]  # original always first — additive only
        raw = self._call(q)
        if raw:
            for v in self._parse(raw):
                if v and v.lower() != q.lower() and v not in variants:
                    variants.append(v)
        self._cache[q] = variants
        return variants


def query_transform_from_env() -> QueryTransform:
    """Resolve the query-side transform from environment variables.

    EVOSQL_QUERY_TRANSFORM
        off | translate | hyde | multi   (default: off)
    EVOSQL_QT_BASE_URL
        OpenAI-compatible chat endpoint. Default the local ollama
        server (http://localhost:11434/v1/chat/completions) so the
        experiment runs offline; set to
        https://api.openai.com/v1/chat/completions for a hosted model.
    EVOSQL_QT_MODEL
        Model id. Default qwen2.5 (the local model used in the
        haystack-enrichment experiments).
    EVOSQL_QT_API_KEY
        Bearer token. Falls back to OPENAI_API_KEY. ollama ignores it.
    EVOSQL_QT_N
        Variant count for `multi` mode (default 3).
    EVOSQL_QT_TIMEOUT
        Per-call timeout seconds (default 20).
    """
    mode = os.environ.get("EVOSQL_QUERY_TRANSFORM", "off").strip().lower()
    if mode in ("", "off", "none", "0", "false"):
        return _NoOpTransform()
    if mode not in ("translate", "hyde", "multi"):
        print(f"[query-transform] unknown mode '{mode}'; disabling.",
              file=sys.stderr, flush=True)
        return _NoOpTransform()
    base_url = os.environ.get(
        "EVOSQL_QT_BASE_URL",
        "http://localhost:11434/v1/chat/completions").strip()
    model = os.environ.get("EVOSQL_QT_MODEL", "qwen2.5").strip()
    api_key = (os.environ.get("EVOSQL_QT_API_KEY", "").strip()
               or os.environ.get("OPENAI_API_KEY", "").strip())
    try:
        n = int(os.environ.get("EVOSQL_QT_N", "3"))
    except ValueError:
        n = 3
    try:
        timeout = int(os.environ.get("EVOSQL_QT_TIMEOUT", "20"))
    except ValueError:
        timeout = 20
    return _LLMTransform(mode, base_url, model, api_key=api_key,
                          n_variants=n, timeout=timeout)
