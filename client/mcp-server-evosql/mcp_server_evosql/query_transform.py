"""
mcp_server_evosql.query_transform — query-side recall experiment.

The retrieval forensics (docs/eval, step-7 analysis) pinned the
recall ceiling on a CROSS-SOURCE semantic gap: a non-English natural-
language query (e.g. asking, in the user's own language, when the last
production release shipped) and the document that answers it (a
technical, English browser-visit title like "PR 5280 Issuer.Customer")
sit far apart in embedding space, so
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
             no model load, production stays exactly as before.

  translate  TR→EN translation. Bridges the Turkish-query ↔ English-
             doc gap directly. Variants: [query, english_query].

  hyde       Hypothetical Document Embeddings. The model writes a short
             plausible answer/document for the query; that text is
             embedded instead of the question, landing the query
             vector in answer-space. Variants: [query, hypo_doc].

  multi      Multi-query expansion. The model emits N paraphrases /
             reformulations; each is embedded and max-pooled.
             Variants: [query, para_1, … para_N].

The rewrite model runs IN-PROCESS via transformers (a small
instruction-tuned causal LM), exactly like the embedding models run
in-process via sentence-transformers. It auto-downloads from
HuggingFace on first use and runs fully offline thereafter — no
ollama, no external daemon, no network endpoint. transformers + torch
already ship with the `embeddings-local` extra, so the query
transform adds no new heavy dependency. Every failure path degrades
to the identity transform, so a missing model never breaks search.
"""
from __future__ import annotations

import os
import re
import sys
from typing import List, Optional

# The rewrite model is loaded after the MCP process has already used
# tokenizers (for embeddings), so HF's fork-safety check would warn on
# every search. We run generation single-threaded anyway, so silence it.
os.environ.setdefault("TOKENIZERS_PARALLELISM", "false")


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
    rewrite model (or "n/a" for the no-op)."""

    kind  = "off"
    model = "n/a"

    def transform(self, query: str) -> List[str]:
        return [query]


class _NoOpTransform(QueryTransform):
    kind  = "off"
    model = "n/a"


class _LocalGenTransform(QueryTransform):
    """In-process query rewriter backed by a small instruction-tuned
    causal LM (transformers). Lazy-loaded so the model download +
    load cost is paid only when a search actually routes through here,
    not at MCPServer startup. Results are cached in-process keyed by
    the raw query so repeated identical queries (and eval warm-up
    passes) don't re-run generation."""

    def __init__(self, mode: str, model: str, n_variants: int = 3,
                  max_new_tokens: int = 0):
        self.kind   = mode
        self.mode   = mode
        self.model  = model
        self._n     = max(1, n_variants)
        self._max_new = max_new_tokens
        self._tok   = None
        self._lm    = None
        self._device = None
        self._cache: dict = {}

    # -- lazy model load ---------------------------------------------
    def _load(self):
        if self._lm is not None:
            return True
        try:
            import torch
            from transformers import AutoModelForCausalLM, AutoTokenizer
            if torch.cuda.is_available():
                self._device = "cuda"
            elif getattr(torch.backends, "mps", None) and \
                    torch.backends.mps.is_available():
                self._device = "mps"
            else:
                self._device = "cpu"
            self._tok = AutoTokenizer.from_pretrained(self.model)
            self._lm = AutoModelForCausalLM.from_pretrained(
                self.model, torch_dtype="auto").to(self._device)
            self._lm.eval()
            # We decode greedily (do_sample=False); clear the model's
            # sampling defaults so transformers doesn't warn on every
            # call that temperature/top_p/top_k are set but unused.
            gc = self._lm.generation_config
            gc.do_sample = False
            gc.temperature = None
            gc.top_p = None
            gc.top_k = None
            return True
        except Exception as exc:
            print(f"[query-transform] model load failed ({self.model}): "
                  f"{exc}; transform disabled.", file=sys.stderr, flush=True)
            return False

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

    def _generate(self, query: str) -> Optional[str]:
        if not self._load():
            return None
        max_new = self._max_new or (80 if self.mode == "translate" else 200)
        try:
            import torch
            text = self._tok.apply_chat_template(
                self._messages(query), tokenize=False,
                add_generation_prompt=True)
            inputs = self._tok(text, return_tensors="pt").to(self._device)
            with torch.no_grad():
                out = self._lm.generate(
                    **inputs, max_new_tokens=max_new, do_sample=False,
                    pad_token_id=(self._tok.pad_token_id
                                  if self._tok.pad_token_id is not None
                                  else self._tok.eos_token_id))
            # Decode only the newly generated continuation.
            gen = out[0][inputs["input_ids"].shape[1]:]
            return self._tok.decode(gen, skip_special_tokens=True)
        except Exception as exc:
            print(f"[query-transform] {self.mode} generation failed: {exc}",
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
        raw = self._generate(q)
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
    EVOSQL_QT_MODEL
        HuggingFace model id for the in-process rewrite LM. Default
        Qwen/Qwen2.5-1.5B-Instruct — small, multilingual (strong on
        Turkish), instruction-tuned, CPU-runnable, auto-downloads on
        first use. Heavier ids (…-3B-Instruct) trade speed for quality.
    EVOSQL_QT_N
        Variant count for `multi` mode (default 3).
    EVOSQL_QT_MAX_TOKENS
        Override the generation length cap (default 80 for translate,
        200 otherwise).
    """
    mode = os.environ.get("EVOSQL_QUERY_TRANSFORM", "off").strip().lower()
    if mode in ("", "off", "none", "0", "false"):
        return _NoOpTransform()
    if mode not in ("translate", "hyde", "multi"):
        print(f"[query-transform] unknown mode '{mode}'; disabling.",
              file=sys.stderr, flush=True)
        return _NoOpTransform()
    model = os.environ.get("EVOSQL_QT_MODEL",
                           "Qwen/Qwen2.5-1.5B-Instruct").strip()
    try:
        n = int(os.environ.get("EVOSQL_QT_N", "3"))
    except ValueError:
        n = 3
    try:
        max_new = int(os.environ.get("EVOSQL_QT_MAX_TOKENS", "0"))
    except ValueError:
        max_new = 0
    return _LocalGenTransform(mode, model, n_variants=n,
                               max_new_tokens=max_new)
