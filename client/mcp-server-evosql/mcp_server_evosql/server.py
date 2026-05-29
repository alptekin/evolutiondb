"""
mcp_server_evosql.server — JSON-RPC 2.0 stdio loop that exposes
EvolutionDB-backed long-term memory to Claude Desktop / Claude Code
through the MCP (Model Context Protocol) standard.

Protocol surface implemented:
  - initialize             — handshake, advertises tools capability
  - tools/list             — describes the five memory tools
  - tools/call             — dispatches to save / search / recent /
                              forget / list_tags
  - notifications/initialized (incoming, no response needed)
  - shutdown / exit        — clean teardown

Threading: MCP stdio is single-threaded. Every request is processed
in order, so the underlying psycopg connection stays inside one
event loop.

User isolation: every tool call has its `user_id` server-side
overridden to MCP_USER_ID env (default "default_user"). This is the
sticky-id trick — keeps the LLM from fragmenting the namespace
across "user" / "default_user" / the user's actual name etc.

Backend: speaks the PostgreSQL wire protocol (port 5433) over psycopg.
This avoids having to ship a compiled C library on PyPI; psycopg has
pre-built binary wheels on every platform. EvolutionDB's PG adaptor
parses the same MEMORY DDL/DML the EVO native protocol does.
"""
from __future__ import annotations

import json
import math
import os
import sys
import time
import traceback
import uuid
from typing import Any, Dict, List, Optional, Sequence


from .embeddings import EmbeddingProvider, provider_from_env, encode_vec, decode_vec, Reranker, reranker_from_env, embedder2_from_env
from .query_transform import QueryTransform, query_transform_from_env
from .tagger     import TopicTagger, provider_from_env as tagger_provider_from_env

PROTOCOL_VERSION = "2024-11-05"          # MCP version we speak
SERVER_NAME      = "evolutiondb-memory"
SERVER_VERSION   = "1.7.0"


# ---------------------------------------------------------------- #
#  Memory backend — speaks EvolutionDB over psycopg / PG wire.       #
# ---------------------------------------------------------------- #
def _e(s: str) -> str:
    """Escape a value for inline SQL.

    The MEMORY DDL/DML doesn't take parameters in the EVO grammar,
    so we have to inline. We strip control bytes and double up
    apostrophes — same defensive shape as the upstream Python SDK.
    """
    if not isinstance(s, str):
        s = str(s)
    s = s.replace("\r", " ").replace("\n", " ").replace("\t", " ")
    return s.replace("'", "''")


# ---------------------------------------------------------------- #
#  Lexical scoring — BM25 (Okapi)                                    #
# ---------------------------------------------------------------- #
import re as _re

_TOKEN_RE = _re.compile(r"\w+", _re.UNICODE)


def _tokenize(text: str) -> List[str]:
    """Unicode word tokens, length > 1. Shared by query and docs so
    the lexical match is symmetric (Turkish letters included via the
    \\w UNICODE class)."""
    return [t for t in _TOKEN_RE.findall(text.lower()) if len(t) > 1]


def _bm25_scores(q_terms: List[str],
                  docs_tokens: List[List[str]],
                  k1: float = 1.5, b: float = 0.75) -> List[float]:
    """Okapi BM25 over an in-memory candidate set. Unlike the legacy
    binary "term present?" count, BM25 rewards term frequency, damps
    common terms via IDF, and normalizes by document length — so a
    five-word note and a 2 KB outlook body compete fairly instead of
    the long body winning purely on surface area.

    Returns one raw (unbounded) score per doc, aligned to
    docs_tokens. Callers normalize to 0-1 before mixing with the
    dense cosine score."""
    n_docs = len(docs_tokens)
    if n_docs == 0 or not q_terms:
        return [0.0] * n_docs
    q_set = set(q_terms)
    avgdl = sum(len(d) for d in docs_tokens) / n_docs or 1.0
    # Document frequency per query term (count docs containing it).
    df: Dict[str, int] = {}
    for d in docs_tokens:
        for tok in set(d):
            if tok in q_set:
                df[tok] = df.get(tok, 0) + 1
    idf = {
        t: math.log((n_docs - df.get(t, 0) + 0.5) / (df.get(t, 0) + 0.5) + 1.0)
        for t in q_set
    }
    scores: List[float] = []
    for d in docs_tokens:
        dl = len(d)
        if dl == 0:
            scores.append(0.0)
            continue
        tf: Dict[str, int] = {}
        for tok in d:
            if tok in q_set:
                tf[tok] = tf.get(tok, 0) + 1
        s = 0.0
        for t, f in tf.items():
            denom = f + k1 * (1.0 - b + b * dl / avgdl)
            s += idf[t] * (f * (k1 + 1.0)) / denom
        scores.append(s)
    return scores


class MemoryBackend:
    # Long-running MCP server processes outlive the database container
    # they connect to (docker compose restart, server upgrade, network
    # blip). Without retry the next tool call after a connection drop
    # returns "the connection is closed" and the user has to restart
    # the whole MCP host (Claude Desktop / Claude Code) to recover.
    _RECONNECT_ATTEMPTS = 3
    _RECONNECT_BACKOFF_SEC = 0.5

    def __init__(self, host: str, port: int, user: str, password: str,
                  database: str, prefix: str,
                  embedder: Optional["EmbeddingProvider"] = None,
                  tagger: Optional["TopicTagger"] = None,
                  reranker: Optional["Reranker"] = None,
                  lexical: str = "simple",
                  rerank_mode: str = "override",
                  embedder2: Optional["EmbeddingProvider"] = None,
                  query_transform: Optional["QueryTransform"] = None):
        self.embedder = embedder
        # Optional second dense embedder (e5) for RRF ensemble. When
        # present, search() fuses bge + e5 + keyword rankings via
        # Reciprocal Rank Fusion. Stored under the `emb2` record key.
        self.embedder2 = embedder2
        # Optional query-side transform (translate/hyde/multi). Rewrites
        # the raw query into variants embedded alongside the original;
        # search() max-pools dense similarity across them to close the
        # cross-source query↔doc gap. Default no-op = identity.
        from .query_transform import _NoOpTransform
        self.query_transform = query_transform or _NoOpTransform()
        # Server-side ANN candidate pool: when a query vector exists,
        # search() asks the engine for the top-N nearest rows per
        # (variant, model) via `ORDER BY <vec> <=> 'b64i8:…' LIMIT N`
        # instead of pulling the whole namespace and scoring in Python.
        # The union of these pools is the candidate set the RRF/keyword
        # fusion runs over. 0 disables (forces the legacy full scan).
        try:
            self._ann_pool = int(os.environ.get("EVOSQL_ANN_POOL", "80"))
        except ValueError:
            self._ann_pool = 80
        self.tagger   = tagger
        self.reranker = reranker
        # Lexical scorer: "simple" = legacy binary term-presence
        # count, "bm25" = Okapi BM25. Hybrid weighting is identical;
        # only the keyword half changes.
        self.lexical  = lexical
        # Rerank blend: "override" | "fusion" (see search()).
        self.rerank_mode = rerank_mode
        try:
            import psycopg
        except ImportError as exc:
            raise RuntimeError(
                "mcp-server-evosql requires psycopg. "
                "Install with `pip install 'mcp-server-evosql'` "
                "or `pip install psycopg[binary]>=3.1`."
            ) from exc

        self.psycopg  = psycopg
        self._conn_kwargs = dict(
            host=host, port=port, user=user, password=password,
            dbname=database, autocommit=True,
        )
        self.conn = self._connect()
        self.memory   = f"{prefix}_mem"
        self.entities = f"{prefix}_ents"
        # Second dense vector (e5) lives in a SEPARATE store keyed by the
        # same mem_key, not on the main record. Two reasons: the main row
        # plus two int8 vectors plus a long body can blow past the 8KB
        # statement cap, and keeping emb2 out of the main store means a
        # backfill never rewrites — and so never risks — the primary data.
        self.emb2_store = f"{prefix}_emb2"
        # Idempotent CREATE — the server must not lose data across
        # restarts. Stores already exist on second start, error swallowed.
        stores = [("MEMORY STORE", self.memory),
                  ("ENTITY STORE", self.entities)]
        if self.embedder2 is not None and self.embedder2.kind != "none":
            stores.append(("MEMORY STORE", self.emb2_store))
        for kind, name in stores:
            try:
                with self.conn.cursor() as cur:
                    cur.execute(f"CREATE {kind} {name}")
            except Exception:
                pass

    # -- connection lifecycle ----------------------------------------
    def _connect(self):
        return self.psycopg.connect(**self._conn_kwargs)

    def _is_dead_connection_error(self, exc: BaseException) -> bool:
        """psycopg surfaces stale-connection failures via OperationalError
        (and InterfaceError for a fully-closed handle). Anything else
        is a real query error we should propagate as-is."""
        return isinstance(exc, (self.psycopg.OperationalError,
                                self.psycopg.InterfaceError))

    def _with_retry(self, fn):
        """Run `fn(cursor)` against the live connection. If the connection
        is dead, close it, reopen it, and try again — up to
        _RECONNECT_ATTEMPTS times. Final failure surfaces the original
        OperationalError so the JSON-RPC dispatcher can return a
        meaningful tool error."""
        last_exc = None
        for attempt in range(self._RECONNECT_ATTEMPTS):
            try:
                with self.conn.cursor() as cur:
                    return fn(cur)
            except Exception as exc:
                if not self._is_dead_connection_error(exc):
                    raise
                last_exc = exc
                print(f"[mcp-evosql] connection lost (attempt "
                      f"{attempt + 1}/{self._RECONNECT_ATTEMPTS}): {exc}",
                      file=sys.stderr, flush=True)
                try:
                    self.conn.close()
                except Exception:
                    pass
                if attempt + 1 < self._RECONNECT_ATTEMPTS:
                    time.sleep(self._RECONNECT_BACKOFF_SEC * (attempt + 1))
                    try:
                        self.conn = self._connect()
                    except Exception as reconnect_exc:
                        last_exc = reconnect_exc
                        continue
        # Out of attempts — re-raise the last error so the caller knows.
        raise last_exc  # type: ignore[misc]

    # -- helpers ------------------------------------------------------
    def _exec(self, sql: str) -> None:
        def run(cur):
            cur.execute(sql)
        self._with_retry(run)

    def _query(self, sql: str) -> List[List[str]]:
        def run(cur):
            cur.execute(sql)
            try:
                return [list(map(_to_str, row)) for row in cur.fetchall()]
            except self.psycopg.ProgrammingError:
                return []
        return self._with_retry(run)

    # -- DML wrappers -------------------------------------------------
    def save(self, user_id: str, fact: str,
              tags: Optional[List[str]] = None) -> str:
        created = time.time()
        key = f"mem_{int(created*1000)}_{uuid.uuid4().hex[:6]}"
        # Topic tags are merged into the regular `tags` list so the
        # existing tag-filter logic in search picks them up for free.
        topic_tags: List[str] = []
        if self.tagger is not None:
            try:
                topic_tags = self.tagger.tag(fact)
            except Exception:
                topic_tags = []
        merged_tags = sorted(set((tags or []) + topic_tags))
        record: Dict[str, Any] = {
            "fact":    fact,
            "tags":    merged_tags,
            "created": created,
        }
        if topic_tags:
            record["topic_tags"]  = topic_tags
            record["topic_model"] = self.tagger.kind
        # Concatenate tags so a save like "fact='likes Go'"
        # tags=['language'] still ranks for the query "programming
        # languages" via the embedding model. Shared by both embedders.
        emb_text = fact if not (tags or []) else \
                   fact + " " + " ".join(tags or [])
        if self.embedder is not None:
            vec = self.embedder.embed(emb_text)
            if vec:
                record["emb"]       = encode_vec(vec)
                # Store provider + model name so a future backfill
                # can spot stale vectors after a model upgrade. Old
                # rows wrote only the provider kind; the search path
                # treats either shape as opaque, so this is forward-
                # compatible without a migration.
                model_name = getattr(self.embedder, "model_name", "")
                record["emb_model"] = (
                    f"{self.embedder.kind}:{model_name}"
                    if model_name else self.embedder.kind
                )
        value = json.dumps(record)
        self._exec(
            f"MEMORY PUT INTO {self.memory} VALUES "
            f"('{_e(user_id)}','{_e(key)}','{_e(value)}')"
        )
        # Second dense vector (e5) goes to the separate emb2 store under
        # the same key — never onto the main record (see __init__).
        if self.embedder2 is not None and self.embedder2.kind != "none":
            vec2 = self.embedder2.embed_passage(emb_text)
            if vec2:
                m2 = getattr(self.embedder2, "model_name", "")
                e2rec = {
                    "emb2": encode_vec(vec2),
                    "emb2_model": f"{self.embedder2.kind}:{m2}"
                                  if m2 else self.embedder2.kind,
                }
                e2val = json.dumps(e2rec)
                try:
                    self._exec(
                        f"MEMORY PUT INTO {self.emb2_store} VALUES "
                        f"('{_e(user_id)}','{_e(key)}','{_e(e2val)}')"
                    )
                except Exception:
                    pass  # emb2 is best-effort; main row already saved
        return key

    # -- server-side ANN candidate gathering (Step 6) ----------------
    def _ann_query(self, store: str, user_id: str, field: str,
                    q_b64: str, limit: int) -> List[Any]:
        """Top-`limit` nearest rows in `store` by `field` cosine to the
        b64i8 query vector. Returns (mem_key, mem_value) tuples. The
        engine decodes the stored b64i8 `emb`/`emb2` and ranks server-
        side; rows without the vector sort last and fall out of LIMIT."""
        try:
            return self._query(
                f"SELECT mem_key, mem_value FROM __mem_{store} "
                f"WHERE mem_namespace = '{_e(user_id)}' "
                f"ORDER BY {field} <=> '{q_b64}' LIMIT {int(limit)}"
            ) or []
        except Exception:
            return []  # engine without b64i8 ORDER BY → caller falls back

    def _fetch_by_keys(self, store: str, user_id: str,
                        keys: Sequence[str]) -> List[Any]:
        """Fetch (mem_key, mem_value) for specific keys, batched by SQL
        size so a large `IN (...)` list never trips the 8 KB statement
        cap (mem_keys vary from short to ~150 chars)."""
        out: List[Any] = []
        base = (f"SELECT mem_key, mem_value FROM __mem_{store} "
                f"WHERE mem_namespace = '{_e(user_id)}' AND mem_key IN (")
        budget = 7000
        batch: List[str] = []
        size = len(base) + 2
        for k in keys:
            tok = len("'" + _e(k) + "',")
            if batch and size + tok > budget:
                out += self._query(
                    base + ",".join("'" + _e(x) + "'" for x in batch)
                    + ")") or []
                batch, size = [], len(base) + 2
            batch.append(k)
            size += tok
        if batch:
            out += self._query(
                base + ",".join("'" + _e(x) + "'" for x in batch)
                + ")") or []
        return out

    @staticmethod
    def _decode_emb2(val: Any) -> Optional[List[float]]:
        try:
            er = json.loads(val) if isinstance(val, str) else val
        except Exception:
            return None
        return decode_vec((er or {}).get("emb2"))

    def _gather_ann_candidates(self, user_id: str,
                                q_vecs: List[List[float]],
                                q_vecs2: List[List[float]],
                                use_rrf: bool):
        """Build the candidate set via engine-side ANN. bge nearest
        rows (per variant) come back with their full value; e5 nearest
        keys (per variant) extend coverage with docs bge missed. Then
        backfill: main records for e5-only keys, and the e5 vector for
        every candidate that lacks one. Returns (rows, emb2_by_key)
        where rows match the legacy (ns, key, value) shape so the
        scoring loop is unchanged."""
        N = self._ann_pool
        cand: Dict[str, Any] = {}            # key -> (ns, key, value)
        emb2_by_key: Dict[str, Any] = {}

        for qv in q_vecs:
            qb = encode_vec(qv)
            for row in self._ann_query(self.memory, user_id, "emb", qb, N):
                key, val = row[0], row[1]
                if key not in cand:
                    cand[key] = (user_id, key, val)

        if use_rrf:
            e5_only: List[str] = []
            for qv2 in q_vecs2:
                qb2 = encode_vec(qv2)
                for row in self._ann_query(self.emb2_store, user_id,
                                            "emb2", qb2, N):
                    key, val = row[0], row[1]
                    dv = self._decode_emb2(val)
                    if dv:
                        emb2_by_key[key] = dv
                    if key not in cand:
                        e5_only.append(key)
            # main records for e5-surfaced keys bge didn't return
            seen: set = set()
            need_main = [k for k in e5_only
                         if not (k in seen or seen.add(k))
                         and k not in cand]
            for row in self._fetch_by_keys(self.memory, user_id, need_main):
                key, val = row[0], row[1]
                if key not in cand:
                    cand[key] = (user_id, key, val)
            # e5 vector for bge candidates that don't have one yet
            need_emb2 = [k for k in cand if k not in emb2_by_key]
            for row in self._fetch_by_keys(self.emb2_store, user_id,
                                            need_emb2):
                key, val = row[0], row[1]
                dv = self._decode_emb2(val)
                if dv:
                    emb2_by_key[key] = dv

        return list(cand.values()), emb2_by_key

    def search(self, user_id: str, query: str,
                limit: int = 5,
                tag: Optional[str] = None,
                sender: Optional[str] = None) -> List[Dict[str, Any]]:
        q_terms = [w for w in query.lower().split() if len(w) > 1]

        # Query-side transform: rewrite the raw query into variants that
        # sit closer to the documents' vocabulary (TR→EN translation,
        # HyDE answer-space, or multi-paraphrase). The original query is
        # always variants[0], so the dense channels can only GAIN
        # coverage from the extra phrasings — never lose the baseline.
        # No-op transform returns just [query], leaving the path
        # identical to before.
        variants = self.query_transform.transform(query)

        # Compute the query embedding for every variant. If the embedder
        # is off or a call fails the list is empty and we silently fall
        # through to pure keyword scoring. Per row we max-pool cosine
        # across variants (best-matching phrasing wins).
        q_vecs: List[List[float]] = []
        if self.embedder is not None:
            for v in variants:
                qv = self.embedder.embed(v)
                if qv:
                    q_vecs.append(qv)
        # Second dense query vectors (e5, asymmetric query prefix) for
        # the RRF ensemble. Empty when no second embedder is wired up.
        q_vecs2: List[List[float]] = []
        use_rrf = (self.embedder2 is not None
                   and self.embedder2.kind != "none")
        if use_rrf:
            for v in variants:
                qv2 = self.embedder2.embed_query(v)
                if qv2:
                    q_vecs2.append(qv2)

        # Candidate gathering. With at least one query vector we ask the
        # ENGINE for the nearest rows per (variant, model) via server-
        # side ANN (`ORDER BY emb <=> 'b64i8:…' LIMIT N`) and fuse over
        # that small union — no full-namespace pull, no Python-side scan
        # of 10 K+ rows. Without a query vector (embedder off / failed)
        # we keep the legacy keyword scan so pure-lexical search still
        # works. emb2_by_key holds the e5 vector for each candidate.
        emb2_by_key: Dict[str, Any] = {}
        if self._ann_pool > 0 and (q_vecs or q_vecs2):
            rows, emb2_by_key = self._gather_ann_candidates(
                user_id, q_vecs, q_vecs2, use_rrf)
        else:
            rows = self._query(
                f"SELECT mem_namespace, mem_key, mem_value FROM "
                f"__mem_{self.memory} WHERE mem_namespace = "
                f"'{_e(user_id)}' LIMIT 10000"
            )

        # Resolve the sender filter through the identity catalog so
        # "Onur" expands to every alias of the right human (and only
        # that human). If the catalog has no match we fall back to a
        # literal substring filter on the sender field.
        sender_alias_set: Optional[set] = None
        sender_literal: Optional[str]   = None
        if sender:
            from .identity import IdentityStore, _normalize_alias
            ident_store = IdentityStore(self.conn, user_id)
            try:
                aliases = ident_store.resolve(sender)
            except Exception:
                aliases = []
            if aliases:
                sender_alias_set = {_normalize_alias(a) for a in aliases}
            else:
                sender_literal = sender.lower()

        # Phase 1 — parse every fact-bearing row into a candidate
        # carrying its haystack (and, for BM25, the haystack tokens).
        # BM25 needs corpus-level stats (document frequency, average
        # length) so the per-row score can't be computed until the
        # whole candidate set is known — hence the two-pass shape.
        use_bm25 = (self.lexical == "bm25")
        candidates: List[Dict[str, Any]] = []
        for r in rows:
            try:
                rec = json.loads(r[2]) if r[2] else None
            except Exception:
                rec = {"fact": r[2]}
            if not rec or not rec.get("fact"):
                continue
            # Match across every text field a connector might use, not
            # only `fact`. Teams uses `text`, gmail uses `subject` +
            # `snippet`, calendar uses `summary`, browser uses `title`
            # + `url`. Anything keyword-relevant goes in here.
            haystack = " ".join([
                str(rec.get("fact")     or ""),
                str(rec.get("text")     or ""),
                str(rec.get("snippet")  or ""),
                str(rec.get("body")     or ""),
                str(rec.get("subject")  or ""),
                str(rec.get("summary")  or ""),
                str(rec.get("title")    or ""),
                str(rec.get("url")      or ""),
                str(rec.get("sender")   or ""),
                str(rec.get("from")     or ""),
                str(rec.get("author")   or ""),
                " ".join(rec.get("tags") or []),
            ]).lower()
            candidates.append({
                "key": r[1], "rec": rec, "haystack": haystack,
                "tokens": _tokenize(haystack) if use_bm25 else None,
            })

        # BM25 raw scores over the candidate set, then min-max to 0-1
        # so the lexical half lands on the same scale as cosine. Max-
        # normalization keeps the relative ordering and pins the best
        # lexical match at 1.0 without inventing a magic divisor.
        bm25_norm: List[float] = []
        if use_bm25 and candidates:
            raw = _bm25_scores(q_terms, [c["tokens"] for c in candidates])
            mx = max(raw) if raw else 0.0
            bm25_norm = [(s / mx if mx > 0 else 0.0) for s in raw]

        # Phase 2 — dense score, hybrid mix, filters.
        out: List[Dict[str, Any]] = []
        for i, c in enumerate(candidates):
            rec = c["rec"]
            haystack = c["haystack"]
            if use_bm25:
                kw_score = bm25_norm[i]
            else:
                kw_hits = sum(1 for w in q_terms if w in haystack)
                kw_score = kw_hits / max(len(q_terms), 1)

            from .embeddings import cosine
            sem_score = 0.0
            row_vec = decode_vec(rec.get("emb"))
            if q_vecs and row_vec:
                sem_score = max((max(0.0, cosine(qv, row_vec))
                                 for qv in q_vecs), default=0.0)

            sem2_score = 0.0
            if use_rrf and q_vecs2:
                # Prefer the separate emb2 store; fall back to an inline
                # emb2 on the main record for pre-split rows.
                row_vec2 = emb2_by_key.get(c["key"])
                if row_vec2 is None:
                    row_vec2 = decode_vec(rec.get("emb2"))
                if row_vec2:
                    sem2_score = max((max(0.0, cosine(qv2, row_vec2))
                                      for qv2 in q_vecs2), default=0.0)

            # Hybrid: prefer semantic when available, but keep keyword
            # weight non-zero so an exact term match always beats a
            # vaguely-similar embedding. Both branches normalize to
            # the same 0-1 scale; mixing a 0-1 hybrid against a 0-N
            # raw hit-count would let embedding-less rows dominate
            # purely because their integer count is bigger than any
            # cosine.
            if sem_score > 0:
                final = 0.7 * sem_score + 0.3 * kw_score
            else:
                final = kw_score

            if tag and tag.lower() not in [t.lower() for t in (rec.get("tags") or [])]:
                continue

            if sender_alias_set is not None:
                from .identity import _normalize_alias
                rec_snd = _normalize_alias(rec.get("sender") or "")
                if rec_snd not in sender_alias_set:
                    continue
            elif sender_literal is not None:
                if sender_literal not in (rec.get("sender") or "").lower():
                    continue

            # When the user supplied an explicit sender/tag filter we
            # surface the row even if it has no signal — the filter
            # itself is the relevance signal. Under RRF, "has signal"
            # means any of the three rankers scored it.
            has_signal = (final > 0 or sem_score > 0
                          or sem2_score > 0 or kw_score > 0)
            if not has_signal and not tag and sender_alias_set is None \
                    and sender_literal is None:
                continue

            # Strip both embedding vectors from the response — noise
            # for the LLM and inflates token cost.
            rec_out = {k: v for k, v in rec.items()
                       if k not in ("emb", "emb2")}
            out.append({"key": c["key"], "score": round(final, 4),
                         "_haystack": haystack,
                         "_bge": sem_score, "_e5": sem2_score,
                         "_kw": kw_score, **rec_out})

        # RRF ensemble: when a second dense ranker is present, fuse the
        # bge / e5 / keyword rankings by Reciprocal Rank Fusion rather
        # than the linear hybrid. RRF is rank-based, so it needs the
        # full candidate set scored first (this block), then ranks each
        # ranker independently and sums 1/(k+rank). It beat both single
        # models and the linear blend on the gold set because the two
        # dense models are strong on disjoint query shapes.
        if use_rrf and out:
            K = 60
            def _ranks(field):
                order = sorted(range(len(out)),
                               key=lambda i: -out[i][field])
                r = [0] * len(out)
                for pos, idx in enumerate(order):
                    r[idx] = pos
                return r
            rb = _ranks("_bge")
            re5 = _ranks("_e5")
            rkw = _ranks("_kw")
            for i, x in enumerate(out):
                fused = (1.0 / (K + rb[i]) + 1.0 / (K + re5[i])
                         + 1.0 / (K + rkw[i]))
                x["score"] = round(fused, 6)
        for x in out:
            for f in ("_bge", "_e5", "_kw"):
                x.pop(f, None)
        # Secondary sort by key keeps the ranking stable across
        # repeated calls — without this, tied scores ride on whatever
        # order the heap scan happened to return on this connection,
        # so the same query can yield different top-K between calls.
        out.sort(key=lambda x: (-x["score"], x.get("key", "")))

        # Adım 7 — cross-encoder rerank over the top-K of the hybrid
        # ranking. Pool size is adaptive: a short query carries less
        # disambiguating signal so a wider pool risks more noise,
        # while a longer query benefits from re-judging more
        # candidates. The reranker reads (query, doc) pairs jointly,
        # so it catches semantic relationships dense embedding
        # similarity misses (negation, role swaps, "X by Y" vs
        # "Y by X").
        #
        # Two blend modes (EVOSQL_RERANK_MODE):
        #   override — replace the hybrid score with the sigmoid of
        #     the cross-encoder logit. On the gold set this lifted
        #     MRR +20% / nDCG +18% and doubled simple_fact Recall@5,
        #     at the cost of a small aggregation Recall@5 dip (it
        #     collapses multi-key clusters around the single best
        #     match). Net-positive on ranking quality, so it's the
        #     default.
        #   fusion — average sigmoid(logit) with the hybrid score.
        #     Protects the aggregation clusters but cancels the
        #     override gains; kept for callers who care more about
        #     multi-key recall than first-hit rank.
        #
        # Caveat learned the hard way: rerank only reorders the pool
        # it's handed. When dense recall is the bottleneck (gold keys
        # ranking past the pool, or absent entirely) no blend helps —
        # fix retrieval coverage first, then rerank pays off.
        if self.reranker is not None and self.reranker.enabled \
                and len(out) > 1:
            qtok = len([w for w in query.split() if w.strip()])
            pool_size = 20 if qtok <= 3 else 50
            pool = out[:pool_size]
            scores = self.reranker.score(
                query, [x["_haystack"] for x in pool])
            if scores is not None and len(scores) == len(pool):
                fuse = (self.rerank_mode == "fusion")
                for x, s in zip(pool, scores):
                    rr = 1.0 / (1.0 + math.exp(-float(s)))
                    x["score"] = round(
                        0.5 * rr + 0.5 * x["score"] if fuse else rr, 4)
                pool.sort(key=lambda x: (-x["score"], x.get("key", "")))
                out = pool + out[pool_size:]
        for x in out:
            x.pop("_haystack", None)
        return out[:limit]

    def recent(self, user_id: str, limit: int = 10) -> List[Dict[str, Any]]:
        rows = self._query(
            f"SELECT mem_namespace, mem_key, mem_value FROM "
            f"__mem_{self.memory} WHERE mem_namespace = "
            f"'{_e(user_id)}' LIMIT 10000"
        )
        out: List[Dict[str, Any]] = []
        for r in rows:
            try:
                rec = json.loads(r[2]) if r[2] else {}
            except Exception:
                rec = {"fact": r[2]}
            out.append({"key": r[1], **rec})
        out.sort(key=lambda x: -x.get("created", 0))
        return out[:limit]

    def forget(self, user_id: str, key: str) -> bool:
        try:
            self._exec(
                f"MEMORY DELETE FROM {self.memory} "
                f"WHERE NS='{_e(user_id)}' AND KEY='{_e(key)}'"
            )
            return True
        except Exception:
            return False

    def list_tags(self, user_id: str) -> List[Dict[str, Any]]:
        rows = self._query(
            f"SELECT mem_namespace, mem_value FROM "
            f"__mem_{self.memory} WHERE mem_namespace = "
            f"'{_e(user_id)}' LIMIT 10000"
        )
        counts: Dict[str, int] = {}
        for r in rows:
            try:
                rec = json.loads(r[1]) if r[1] else {}
            except Exception:
                continue
            for tag in (rec.get("tags") or []):
                counts[tag] = counts.get(tag, 0) + 1
        out = [{"tag": t, "count": c} for t, c in counts.items()]
        out.sort(key=lambda x: -x["count"])
        return out


def _to_str(v: Any) -> str:
    if v is None:
        return ""
    if isinstance(v, (bytes, bytearray)):
        try:
            return v.decode("utf-8")
        except UnicodeDecodeError:
            return v.decode("latin-1", "replace")
    if isinstance(v, (dict, list)):
        return json.dumps(v, ensure_ascii=False)
    return str(v)


# ---------------------------------------------------------------- #
#  Tool catalog — what Claude Desktop sees on tools/list.            #
# ---------------------------------------------------------------- #
TOOLS = [
    {
        "name": "save_memory",
        "description": (
            "Persist a long-term fact about the user. Call this whenever "
            "the user shares a preference, decision, biographical detail, "
            "or anything you'd want to remember across future "
            "conversations. The fact will be available to all future "
            "Claude sessions through search_memory."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "fact": {
                    "type": "string",
                    "description": "Concise statement of what to remember."
                },
                "tags": {
                    "type": "array",
                    "items": {"type": "string"},
                    "description": "Categorisation labels (e.g. work, "
                                       "preference, family). Optional."
                },
            },
            "required": ["fact"],
        },
    },
    {
        "name": "search_memory",
        "description": (
            "Search remembered facts. Call this BEFORE answering any "
            "question that depends on prior knowledge of the user. "
            "Semantic + keyword hybrid: when the server is configured "
            "with an embedding provider it ranks by meaning, and falls "
            "back to substring matching otherwise. Pass `sender` to "
            "limit results to one person — aliases of that person are "
            "auto-resolved from the identity catalog, so a different "
            "human whose name happens to share a substring will not "
            "leak through. Pass `tag` to narrow by topic."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "query":  {"type": "string"},
                "tag":    {"type": "string",
                            "description": "Optional tag filter."},
                "sender": {"type": "string",
                            "description": "Filter by one human. "
                                "Aliases are expanded through the "
                                "identity catalog when present."},
                "limit":  {"type": "integer", "default": 5},
            },
            "required": ["query"],
        },
    },
    {
        "name": "recent_memories",
        "description": "List the most recently saved facts.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "limit": {"type": "integer", "default": 10},
            },
        },
    },
    {
        "name": "forget",
        "description": "Delete a stored fact by its `key` (returned by "
                       "save_memory or surfaced by search_memory).",
        "inputSchema": {
            "type": "object",
            "properties": {"key": {"type": "string"}},
            "required": ["key"],
        },
    },
    {
        "name": "list_tags",
        "description": "List all distinct tags used so far, with counts.",
        "inputSchema": {"type": "object", "properties": {}},
    },
]


# ---------------------------------------------------------------- #
#  Server — newline-delimited JSON-RPC 2.0 over stdio.               #
# ---------------------------------------------------------------- #
class MCPServer:
    def __init__(self) -> None:
        self.user_id = os.environ.get("MCP_USER_ID", "default_user")
        self.host    = os.environ.get("EVOSQL_HOST",     "127.0.0.1")
        # Default to PostgreSQL wire (5433). Older deployments using EVO
        # native (9967) won't work over psycopg — point them at 5433.
        self.port    = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.user    = os.environ.get("EVOSQL_USER",     "admin")
        self.pw      = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.db      = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.prefix  = os.environ.get("MCP_STORE_PREFIX", "mcp")
        self.embedder = provider_from_env()
        self.embedder2 = embedder2_from_env()
        self.tagger   = tagger_provider_from_env()
        self.reranker = reranker_from_env(self.embedder)
        self.lexical  = os.environ.get("EVOSQL_LEXICAL", "simple").lower()
        self.rerank_mode = os.environ.get("EVOSQL_RERANK_MODE",
                                          "override").lower()
        self.query_transform = query_transform_from_env()
        self.backend: Optional[MemoryBackend] = None

    def _connect(self) -> MemoryBackend:
        if self.backend is None:
            self.backend = MemoryBackend(self.host, self.port,
                                            self.user, self.pw,
                                            self.db, self.prefix,
                                            embedder=self.embedder,
                                            tagger=self.tagger,
                                            reranker=self.reranker,
                                            lexical=self.lexical,
                                            rerank_mode=self.rerank_mode,
                                            embedder2=self.embedder2,
                                            query_transform=self.query_transform)
        return self.backend

    # -- tool dispatch ------------------------------------------------
    def _call_tool(self, name: str, args: Dict[str, Any]) -> Dict[str, Any]:
        b = self._connect()
        if name == "save_memory":
            fact = args.get("fact") or ""
            if not fact.strip():
                return {"error": "save_memory requires non-empty `fact`"}
            tags = args.get("tags") or []
            if isinstance(tags, str):
                tags = [tags]
            key = b.save(self.user_id, fact, tags)
            return {"ok": True, "key": key, "user_id": self.user_id}

        if name == "search_memory":
            q = args.get("query") or ""
            if not q.strip():
                return {"error": "search_memory requires non-empty `query`"}
            tag    = args.get("tag")
            sender = args.get("sender")
            limit  = int(args.get("limit") or 5)
            return {"ok": True,
                    "user_id": self.user_id,
                    "results": b.search(self.user_id, q,
                                          limit=limit, tag=tag,
                                          sender=sender)}

        if name == "recent_memories":
            limit = int(args.get("limit") or 10)
            return {"ok": True, "user_id": self.user_id,
                    "results": b.recent(self.user_id, limit)}

        if name == "forget":
            key = args.get("key") or ""
            if not key:
                return {"error": "forget requires `key`"}
            ok = b.forget(self.user_id, key)
            return {"ok": ok, "key": key}

        if name == "list_tags":
            return {"ok": True, "user_id": self.user_id,
                    "tags": b.list_tags(self.user_id)}

        return {"error": f"unknown tool: {name}"}

    # -- JSON-RPC dispatch -------------------------------------------
    def handle(self, msg: Dict[str, Any]) -> Optional[Dict[str, Any]]:
        method = msg.get("method")
        params = msg.get("params") or {}
        msg_id = msg.get("id")

        # Notifications (no id) get no response.
        if msg_id is None:
            return None

        if method == "initialize":
            return self._ok(msg_id, {
                "protocolVersion": PROTOCOL_VERSION,
                "capabilities":    {"tools": {"listChanged": False}},
                "serverInfo":      {"name": SERVER_NAME,
                                       "version": SERVER_VERSION},
            })

        if method == "tools/list":
            return self._ok(msg_id, {"tools": TOOLS})

        if method == "tools/call":
            name = params.get("name") or ""
            args = params.get("arguments") or {}
            try:
                result = self._call_tool(name, args)
            except Exception as e:
                traceback.print_exc(file=sys.stderr)
                return self._ok(msg_id, {
                    "content": [{"type": "text",
                                    "text": f"tool {name} failed: {e}"}],
                    "isError": True,
                })
            text = json.dumps(result, ensure_ascii=False)
            return self._ok(msg_id, {
                "content": [{"type": "text", "text": text}],
                "isError": bool(result.get("error")),
            })

        if method in ("ping",):
            return self._ok(msg_id, {})

        return self._err(msg_id, -32601, f"method not found: {method}")

    @staticmethod
    def _ok(id_, result) -> Dict[str, Any]:
        return {"jsonrpc": "2.0", "id": id_, "result": result}

    @staticmethod
    def _err(id_, code, message) -> Dict[str, Any]:
        return {"jsonrpc": "2.0", "id": id_,
                "error": {"code": code, "message": message}}


# ---------------------------------------------------------------- #
#  stdio loop                                                       #
# ---------------------------------------------------------------- #
def main() -> int:
    server = MCPServer()
    print(
        f"[mcp-evosql] listening on stdio "
        f"(evosql={server.host}:{server.port}, user_id={server.user_id!r})",
        file=sys.stderr, flush=True)

    for raw_line in sys.stdin:
        raw_line = raw_line.strip()
        if not raw_line:
            continue
        try:
            msg = json.loads(raw_line)
        except json.JSONDecodeError as e:
            print(f"[mcp-evosql] bad JSON line: {e}",
                   file=sys.stderr, flush=True)
            continue
        try:
            resp = server.handle(msg)
        except Exception as e:
            traceback.print_exc(file=sys.stderr)
            resp = server._err(msg.get("id"), -32603, str(e))
        if resp is not None:
            sys.stdout.write(json.dumps(resp, ensure_ascii=False) + "\n")
            sys.stdout.flush()
    return 0
