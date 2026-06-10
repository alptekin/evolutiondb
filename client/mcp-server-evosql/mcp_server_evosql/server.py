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
import threading
import time
import traceback
import uuid
from typing import Any, Dict, List, Optional, Sequence, Tuple


from .embeddings import EmbeddingProvider, provider_from_env, encode_vec, decode_vec, Reranker, reranker_from_env, embedder2_from_env
from .query_transform import QueryTransform, query_transform_from_env
from .tagger     import TopicTagger, provider_from_env as tagger_provider_from_env
from .episodes   import SUMMARY_TAG, build_episodes as _build_episodes
from .profile    import build_profile as _build_profile

PROTOCOL_VERSION = "2024-11-05"          # MCP version we speak
SERVER_NAME      = "evolutiondb-memory"
SERVER_VERSION   = "1.13.1"

# Step 17: a row whose profile-cluster similarity clears this counts as
# "in the user's interest" and survives the signal filter even with no direct
# query match — that is how a query in your interest area surfaces your
# related items. Only active when the profile boost is on.
PROFILE_SIGNAL_MIN = float(os.environ.get("EVOSQL_PROFILE_SIGNAL_MIN", "0.35"))

# The engine crashes on a `WHERE x IN (...)` list of 30+ values (stack
# overflow in expression evaluation — measured: 29 ok, 30 crashes). Keep every
# IN(...) batch comfortably under that.
MAX_IN_KEYS = int(os.environ.get("EVOSQL_MAX_IN_KEYS", "20"))

# Cap the per-row access-history (`uses`) epoch array. ACT-R base-level
# activation (roadmap step 9) needs the recent access timestamps; a small cap
# keeps the side-store record well under the engine's 8 KB statement limit while
# still giving recency + frequency.
ACCESS_USES_CAP = 16
# Cap the supersedes / superseded_by chains in a validity record so a
# frequently-revised key can't union an unbounded list and breach the 8 KB cap.
VALIDITY_CHAIN_CAP = 50


def _boosts_master_on() -> bool:
    """EVOSQL_MEMORY_BOOSTS is the single switch that turns the whole derived
    "memory" layer (salience / graph / profile / decay) on at sensible levels."""
    return os.environ.get("EVOSQL_MEMORY_BOOSTS", "").strip().lower() in (
        "1", "on", "true", "yes")


def _env_float(key: str, default):
    """Float env var with a default (which may be None for 'unset')."""
    v = os.environ.get(key)
    if v is None or v == "":
        return default
    try:
        return float(v)
    except ValueError:
        return default


SOURCE_RELIABILITY = {"asserted": 1.0, "observed": 0.7, "inferred": 0.4}


def source_reliability(source_class: Optional[str]) -> float:
    """Confidence a memory deserves by how it was acquired (roadmap step 32):
    asserted (user said) > observed (ingested) > inferred (derived)."""
    return SOURCE_RELIABILITY.get(source_class or "observed", 0.5)


def _parse_as_of(v):
    """Parse an as-of timestamp (epoch number or ISO-8601 string) to epoch
    seconds, or None. Used for time-travel queries (roadmap step 22)."""
    if v is None or v == "" or isinstance(v, bool):
        return None
    if isinstance(v, (int, float)):
        return float(v)
    s = str(v).strip()
    try:
        return float(s)                  # bare epoch passed as a string
    except ValueError:
        pass
    try:
        from datetime import datetime, timezone
        dt = datetime.fromisoformat(s.replace("Z", "+00:00"))
        if dt.tzinfo is None:
            dt = dt.replace(tzinfo=timezone.utc)
        return dt.timestamp()
    except Exception:
        return None


def _resolve_boost(env_key: str, default_when_on: float,
                   master_on: Optional[bool] = None) -> float:
    """Resolve a boost weight. An explicit EVOSQL_<X>_BOOST always wins — so it
    doubles as a per-boost kill-switch (set it to 0 to force a boost off even
    when the master is on). Otherwise the EVOSQL_MEMORY_BOOSTS master chooses
    between `default_when_on` and 0. Default (master off, no override) is 0, so
    ranking stays byte-for-byte until an operator opts in."""
    raw = os.environ.get(env_key)
    if raw is not None:
        try:
            return float(raw)
        except ValueError:
            return 0.0
    if master_on is None:
        master_on = _boosts_master_on()
    return default_when_on if master_on else 0.0


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
    # NOTE: we deliberately do NOT escape backslashes here. The main save path
    # serializes via json.dumps first, which already escapes backslashes (and
    # \n/\t/quotes) into the \\. form the EVO lexer expects; re-escaping in _e()
    # would double them and break the json.loads round-trip (a literal "\n"
    # instead of a newline). The raw (non-json) side-store inlines carry a
    # latent lone-backslash quirk, but they take only trusted internal text, so
    # it is not an injection vector. Keep _e symmetric with the json path.
    return s.replace("'", "''")


def _fit_payload(record: Dict[str, Any], key: str, user_id: str,
                 budget: int = 7000) -> str:
    """Serialize a record to JSON kept under the engine's ~8 KB statement cap.

    The C side stores a value in a fixed value_json[8192] buffer and silently
    truncates beyond it, which corrupts the JSON so the row is dropped on read.
    Trim the embedding first (recomputable from the id on read), then any
    provenance/steps lists, flagging the truncation, until the payload fits."""
    payload = json.dumps(record)
    if len(payload) + len(key) + len(user_id) <= budget:
        return payload
    rec = dict(record)
    rec.pop("emb", None)
    rec["payload_truncated"] = True
    payload = json.dumps(rec)
    for field in ("derived_from", "provenance", "steps"):
        while (len(payload) + len(key) + len(user_id) > budget
               and isinstance(rec.get(field), list) and rec[field]):
            rec[field] = rec[field][:-1]
            payload = json.dumps(rec)
    # last resort: clamp the largest free-text field. Include the connector
    # free-text fields (body/snippet/subject) so a row whose bloat lives there
    # — not in fact/description — still gets trimmed under budget instead of
    # being silently truncated by the engine's 8 KB value buffer.
    for field in ("fact", "description", "text", "value",
                  "body", "snippet", "subject"):
        if len(payload) + len(key) + len(user_id) <= budget:
            break
        if isinstance(rec.get(field), str) and len(rec[field]) > 200:
            over = len(payload) + len(key) + len(user_id) - budget
            rec[field] = rec[field][:max(200, len(rec[field]) - over - 16)]
            payload = json.dumps(rec)
    return payload


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


_KEY_RE = _re.compile(r"^[A-Za-z0-9_:|.\-]{1,256}$")


def _valid_key(k: Any) -> bool:
    """True if `k` is a safe memory key/id to inline into SQL.

    Memory keys/ids are ALWAYS server-generated — mem_/sem_/ep_/ent_/intent_/
    skill_ + timestamp/hex, UUID query ids, and pipe-composite mention keys — so
    every legitimate key matches this charset. A tool argument carrying a quote,
    backslash, space or comma (i.e. a SQL-injection attempt through `forget` /
    `expand_episode` / `feedback` / `restore_memory` / `save_memory`'s
    `derived_from`) does NOT match and is rejected. This is the guard for the
    raw (non-json-wrapped) inline sites: `_e()` doubles quotes but deliberately
    does NOT escape backslashes, and the EVO lexer treats `\\'` as an escaped
    quote, so an unvalidated key ending in a backslash could break out of its
    string literal (an IN-list of two such keys yields cross-namespace reads)."""
    return isinstance(k, str) and _KEY_RE.match(k) is not None


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


# Provenance schema version (Step 13). Bump when the derived_from / evidence
# shape changes so synthesized rows can be regenerated against the new schema.
SYNTHESIS_SCHEMA_VERSION = 1


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
                  query_transform: Optional["QueryTransform"] = None,
                  use_database: Optional[str] = None):
        # Per-tenant routing: the engine ignores the PG-wire startup `database`
        # parameter, so the ONLY way to land this connection on a tenant's
        # database is to run `USE <db>` right after connecting. When set, both
        # the initial connect and every reconnect issue it (see _connect). The
        # legacy single-tenant path leaves this None → no USE → unchanged.
        self._use_database = use_database
        # Serialize all statements on this backend's single psycopg connection.
        # The HTTP transport (ThreadingHTTPServer) dispatches concurrent
        # requests for the same tenant onto worker threads that all share this
        # one backend + connection; psycopg connections are NOT safe for
        # concurrent use, so without this lock two in-flight statements corrupt
        # the wire stream ("another operation in progress"). Reentrant because a
        # few code paths nest backend calls. stdio is single-threaded so this is
        # uncontended there.
        self._lock = threading.RLock()
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
        # Salience boost (Step 12): blend the precomputed per-row `salience`
        # (recency × sender-activity × thread-depth × feedback, written by the
        # salience job) into the final ranking. 0 = off (default), so the
        # ranking is unchanged until an operator opts in; rows without a
        # salience field contribute 0 either way, so enabling it is safe even
        # before the compute job has run.
        # An explicit EVOSQL_SALIENCE_BOOST overrides; otherwise the
        # EVOSQL_MEMORY_BOOSTS master switch (roadmap step 2) enables it.
        self.salience_boost = _resolve_boost("EVOSQL_SALIENCE_BOOST", 0.25)
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
        # Implicit-feedback log (Step 11): one record per search keyed by a
        # query_id UUID, holding the query, its returned keys, and — once the
        # caller reports back via the feedback tool — which keys it actually
        # used. Self-improving-memory training signal; kept in its own store
        # so it never touches the primary memory rows.
        self.feedback_store = f"{prefix}_feedback"
        # Entity catalog (Step 14): extracted named entities and their
        # canonical ids live in `entity_store`; each surface-form occurrence
        # in a memory row is recorded in `mention_store`. Both are plain
        # MEMORY STOREs keyed by the entity/mention id (see entities.py).
        self.entity_store  = f"{prefix}_entities"
        self.mention_store = f"{prefix}_entity_mentions"
        # Inline entity extraction after each save (best-effort, regex-fast).
        # Until the Step 18 scheduler exists this runs synchronously; set
        # EVOSQL_ENTITY_EXTRACT=0 to disable (or run entities.py as backfill).
        self.entity_extract = os.environ.get("EVOSQL_ENTITY_EXTRACT", "1") != "0"
        self._entity_stores: Dict[str, Any] = {}   # user_id -> EntityStore
        # Knowledge graph (Step 15): co-occurring entities in a row are wired
        # into `graph_store` so a relational query can reach rows by 1-2 hop
        # spreading activation. Building edges on save is cheap and keeps the
        # graph ready (EVOSQL_GRAPH_BUILD=0 to disable); the *retrieval* boost
        # is opt-in via EVOSQL_GRAPH_BOOST>0 (latency-sensitive hot path).
        self.graph_store = f"{prefix}_graph_edges"
        self.graph_build = os.environ.get("EVOSQL_GRAPH_BUILD", "1") != "0"
        # Assistant layer: open commitments ("who's waiting on me") and the
        # structured self-model ("about me"). They cross-feed — the self-model's
        # team list prioritises loops; the loops feed the self-model commitments.
        self.loops_store = f"{prefix}_loops"
        self.selfmodel_store = f"{prefix}_self"
        # Action loop (read -> suggest -> APPROVE -> send): drafted replies are
        # queued here as pending items; nothing leaves the machine without an
        # explicit approve_send, and delivery is a dry-run unless a real
        # transport is wired and EVOSQL_SEND_ENABLED is set.
        self.outbox_store = f"{prefix}_outbox"
        self.graph_boost = _resolve_boost("EVOSQL_GRAPH_BOOST", 0.30)
        self._graph_stores: Dict[str, Any] = {}    # user_id -> GraphStore
        # Episodes (Step 16): a weekly job groups recent rows into episodes
        # and writes one summary per episode (tagged `episode`, synthesized
        # with derived_from = source keys). The episode record links the
        # summary back to its sources for hierarchical drill-down.
        self.episodes_store = f"{prefix}_episodes"
        # Semantic tier (roadmap step 15): timeless generalizations distilled
        # ACROSS many episodic rows (episodic -> semantic), not within-episode
        # summaries. Each carries tier='semantic' + abstraction_level and is
        # written through save_semantic with derived_from provenance, so it is
        # retrievable + traceable. search() fuses these alongside episodic
        # candidates (step 17).
        self.semantic_store = f"{prefix}_semantic"
        # Fuse semantic candidates into search (roadmap step 17). Opt-in like the
        # other derived layers: an explicit EVOSQL_SEMANTIC_SEARCH wins (and is
        # the kill-switch); otherwise the EVOSQL_MEMORY_BOOSTS master decides.
        # Default off, so a deployment not running job_semanticize never pays the
        # per-search semantic fetch against a permanently-empty store.
        _ss = os.environ.get("EVOSQL_SEMANTIC_SEARCH")
        self.semantic_search = (_ss not in ("0", "", "off", "false", "no")
                                if _ss is not None else _boosts_master_on())
        self.semantic_pool = int(os.environ.get("EVOSQL_SEMANTIC_POOL", "50"))
        # Bitemporal validity + belief revision (roadmap steps 19-22). A side
        # store, keyed by the governed mem_key, records when a fact was valid and
        # its supersession chain: {valid_from, valid_to, tx_from, supersedes[],
        # superseded_by[], status: active|stale|retracted}. Append-only memory
        # becomes RECONCILABLE: a newer fact can mark an older co-referential one
        # stale so it stops out-ranking the truth, and an as-of query can still
        # time-travel. Reads gate on status; writes set it.
        self.validity_store = f"{prefix}_validity"
        # Write-time contradiction reconciliation (roadmap step 20). Off by
        # default; when EVOSQL_RECONCILE is on AND an EVOSQL_RECONCILE_LLM is
        # configured, save() detects a co-referential conflict and marks the
        # superseded row stale. Pure append stays the default.
        self.reconcile_enabled = os.environ.get("EVOSQL_RECONCILE", "0") \
            not in ("0", "", "off", "false", "no")
        # Learned controller (roadmap steps 24-26): per-(centroid, row) utility
        # folded from the feedback corpus, keyed "<centroid>:<mem_key>", and the
        # fitted ranker weights — both side stores. The memory improves from USE.
        self.utility_store = f"{prefix}_utility"
        # Procedural / skill memory (roadmap step 34): reusable how-tos indexed by
        # description, with success/fail counters. Declarative-vs-procedural is a
        # foundational memory distinction.
        self.skill_store = f"{prefix}_skills"
        # Prospective memory (roadmap step 35): remembering to DO something later
        # — time-based (due at an epoch) or event-based (when a cue entity is
        # next mentioned). The scheduler fires the due ones; the rest of the
        # system only ever recomputes the PAST, this looks forward.
        self.intentions_store = f"{prefix}_intentions"
        # Core / working-memory tier (roadmap step 36, MemGPT/Letta): a few named
        # mutable blocks the agent keeps always-in-context and self-edits (human,
        # persona, pinned facts), bounded by max_chars so overflow forces a
        # rewrite. The archival/recall tiers are the existing mem/recent stores.
        self.core_store = f"{prefix}_core"
        self.core_max_chars = int(os.environ.get("EVOSQL_CORE_MAX_CHARS", "1500"))
        # Gist vs verbatim (roadmap step 37): a meaning trace per row so a
        # paraphrased query matches when the surface words differ. A 4th
        # retrieval channel + a slower-decaying trace. Opt-in via EVOSQL_GIST;
        # the gist is written on every save (cheap) but only consulted when on.
        self.gist_store = f"{prefix}_gist"
        self.gist_search = os.environ.get("EVOSQL_GIST", "0") \
            not in ("0", "", "off", "false", "no")
        # Bound the opt-in gist channel so a common-stem query can't scan/inject
        # the whole namespace: cap the scan and keep only the top-overlap misses
        # (defaults to the ANN-pool scale).
        self.gist_scan = int(os.environ.get("EVOSQL_GIST_SCAN", "20000"))
        self.gist_inject_max = int(os.environ.get(
            "EVOSQL_GIST_INJECT_MAX", str(self._ann_pool or 80)))
        # Learned-ranker cutover (roadmap step 26). Off by default; when on AND a
        # ranker has been fit (fit_ranker), search re-scores candidates with the
        # learned logistic weights instead of the hand-tuned blend. Cold start
        # (no ranker) falls back to the existing ranking, so it is safe to enable
        # before any feedback exists.
        self.learned_rank = os.environ.get("EVOSQL_LEARNED_RANK", "0") \
            not in ("0", "", "off", "false", "no")
        # Closed-loop guardrails (roadmap step 27). trust dampens the learned
        # score against the base (1.0 = pure learned); epsilon adds exploration
        # noise so the loop doesn't only ever reinforce what it already shows.
        self.learned_trust = _env_float("EVOSQL_LEARNED_TRUST", 1.0)
        self.learned_epsilon = _env_float("EVOSQL_LEARNED_EPSILON", 0.0)
        # Weight of the per-row utility (step 25) blended into the learned score
        # — the row-identity signal (a row used before is more likely useful),
        # centered at the neutral prior so unseen rows are unaffected.
        self.learned_util_weight = _env_float("EVOSQL_LEARNED_UTIL", 0.5)
        # Active-record gate (roadmap step 21): drop rows the validity store
        # marks stale/retracted so a superseded fact stops out-ranking the truth.
        # Auto-on when reconciliation is on (you want the gate if you revise);
        # an explicit EVOSQL_VALIDITY_GATE overrides. No-op when the validity
        # store is empty (default), so default ranking is unchanged.
        _vg = os.environ.get("EVOSQL_VALIDITY_GATE")
        self.validity_gate = (_vg not in ("0", "", "off", "false", "no")
                              if _vg is not None else self.reconcile_enabled)
        # Confidence-based abstention (roadmap step 32). When set, search returns
        # NOTHING ("no reliable memory") if even the best candidate's source
        # confidence is below this threshold, rather than a confidently-wrong
        # low-source row. None (default) = never abstain.
        self.abstain_conf = _env_float("EVOSQL_ABSTAIN_CONF", None)
        # Confidence calibration layer (roadmap step 40). Opt-in
        # (EVOSQL_CALIBRATE, default off): when on, source_reliability is mapped
        # through the fitted calibrator before the abstain gate, so abstention
        # is driven by empirically-observed correctness, not the hard-coded
        # prior. The calibrator is loaded lazily and cached.
        self.calibrate = os.environ.get("EVOSQL_CALIBRATE", "0") not in (
            "0", "", "off", "false", "no")
        self._calibrator_cache: Dict[str, Any] = {}      # per-namespace, lazy
        # row embeddings into interest clusters (<prefix>_profile_clusters);
        # the retrieval boost biases results toward the clusters the query
        # points at. Opt-in via EVOSQL_PROFILE_BOOST>0 (needs embeddings, so
        # it only engages when an embedder is configured). Default 0.
        self.profile_store = f"{prefix}_profile_clusters"
        self.profile_boost = _resolve_boost("EVOSQL_PROFILE_BOOST", 0.25)
        self._profile_cache: Dict[str, List[Dict[str, Any]]] = {}
        # Sleep-time scheduler (Step 18): per-job state + audit log so the
        # background jobs run idempotently and survive restarts.
        self.job_runs_store = f"{prefix}_job_runs"
        # Decay & archival (Step 20): row access times in a small side store
        # (so a search never rewrites the main record just to record a read);
        # the daily decay pass flags faded rows archived=true. Opt-in via
        # EVOSQL_DECAY>0 — default off keeps search byte-for-byte. When on,
        # search refreshes last_accessed and skips archived rows.
        self.access_store = f"{prefix}_access"
        # Explicit EVOSQL_DECAY wins (kill-switch); else the master enables it.
        _decay_env = os.environ.get("EVOSQL_DECAY")
        self.decay_enabled = (_decay_env != "0" and _decay_env is not None) \
            or (_decay_env is None and _boosts_master_on())
        # Unified ACT-R activation ranking (roadmap steps 9-14). Off by default,
        # so the ranking stays byte-for-byte until an operator opts in. When on,
        # candidates are re-scored by A_i = B_i + w_cos*logit(cos) +
        # w_spread*spread + w_sal*ln(salience) (+ retrieval noise) and gated by
        # a retrieval threshold tau (None = keep all, the no-abstain default).
        self.activation_enabled = os.environ.get("EVOSQL_ACTIVATION", "0") \
            not in ("0", "", "off", "false", "no")
        self.act_tau = _env_float("EVOSQL_ACTIVATION_TAU", None)
        self.act_noise = _env_float("EVOSQL_ACTIVATION_NOISE", 0.0)
        self.act_w_cos = _env_float("EVOSQL_ACTIVATION_W_COS", 1.0)
        self.act_w_spread = _env_float("EVOSQL_ACTIVATION_W_SPREAD", 1.0)
        self.act_w_sal = _env_float("EVOSQL_ACTIVATION_W_SAL", 1.0)
        # Salience (Step 12) lives in its OWN side store, not on the main
        # record. Stamping a number onto a multi-KB row would rewrite the whole
        # record and trip the engine's 8 KB statement cap; a tiny {salience}
        # value never does. search() and the decay pass read salience here.
        self.salience_store = f"{prefix}_salience"
        # Idempotent CREATE — the server must not lose data across
        # restarts. Stores already exist on second start, error swallowed.
        stores = [("MEMORY STORE", self.memory),
                  ("ENTITY STORE", self.entities),
                  ("MEMORY STORE", self.feedback_store),
                  ("MEMORY STORE", self.entity_store),
                  ("MEMORY STORE", self.mention_store),
                  ("MEMORY STORE", self.graph_store),
                  ("MEMORY STORE", self.episodes_store),
                  ("MEMORY STORE", self.profile_store),
                  ("MEMORY STORE", self.job_runs_store),
                  ("MEMORY STORE", self.access_store),
                  ("MEMORY STORE", self.salience_store),
                  ("MEMORY STORE", self.semantic_store),
                  ("MEMORY STORE", self.validity_store),
                  ("MEMORY STORE", self.utility_store),
                  ("MEMORY STORE", self.skill_store),
                  ("MEMORY STORE", self.intentions_store),
                  ("MEMORY STORE", self.core_store),
                  ("MEMORY STORE", self.gist_store),
                  ("MEMORY STORE", self.loops_store),
                  ("MEMORY STORE", self.selfmodel_store),
                  ("MEMORY STORE", self.outbox_store)]
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
        conn = self.psycopg.connect(**self._conn_kwargs)
        # Select the tenant's database. The startup `dbname` is ignored by the
        # engine, so `USE` is the real switch. Runs on first connect AND on
        # every reconnect (this method is the reconnect path in _with_retry),
        # so a tenant connection never silently falls back to the default DB.
        if self._use_database:
            from . import tenancy
            if not tenancy.is_valid_identifier(self._use_database):
                raise RuntimeError(
                    f"refusing to USE unsafe database name: "
                    f"{self._use_database!r}")
            with conn.cursor() as cur:
                cur.execute(f"USE {self._use_database}")
        return conn

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
        # Hold the per-backend lock for the whole execute+fetch so a concurrent
        # worker thread can never interleave a statement on the same connection.
        with self._lock:
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
              tags: Optional[List[str]] = None,
              derived_from: Optional[Sequence[str]] = None,
              source_class: Optional[str] = None) -> str:
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
            # Source / reality monitoring (roadmap step 32): how this memory was
            # acquired. asserted = the user stated it; observed = ingested from a
            # connector; inferred = derived from other memories. Drives the
            # confidence used by the abstention gate.
            "source_class": source_class or ("inferred" if derived_from
                                             else "observed"),
        }
        if topic_tags:
            record["topic_tags"]  = topic_tags
            record["topic_model"] = self.tagger.kind
        # Provenance (Step 13): a fact synthesized from other memories
        # records its source keys so it stays traceable to evidence. The
        # source keys are validated foreign-key style — only keys that
        # actually exist in this namespace are kept, and `regenerable` is
        # true only when every requested source is still present (so a
        # later regeneration has the full evidence).
        if derived_from:
            requested = [k for k in derived_from if k]
            present = {r[0] for r in
                       self._fetch_by_keys(self.memory, user_id, requested)}
            valid = [k for k in requested if k in present]
            record["derived_from"]      = valid
            record["synthesized"]       = True
            record["regenerable"]       = bool(valid) and len(valid) == len(requested)
            record["synthesis_version"] = SYNTHESIS_SCHEMA_VERSION
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
        # Keep the serialized row under the engine's ~8 KB statement cap. The
        # C side stores mem_value in a fixed value_json[8192] and SILENTLY
        # truncates beyond it, corrupting the JSON so the row is dropped/garbled
        # on read while save() still reports success. _fit_payload trims the
        # emb vector first (recomputable on read), then provenance lists, then
        # clamps the fact text — so a long note degrades gracefully instead of
        # being silently lost. (save_semantic/save_skill already do this.)
        value = _fit_payload(record, key, user_id)
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
        # Entity extraction (Step 14) + graph edges (Step 15) — best-effort,
        # never blocks the save. Extraction returns the mentions enriched with
        # their resolved entity ids, which the graph wires into co-occurrence
        # edges in the same pass (no re-extraction).
        if self.entity_extract:
            try:
                ext = self._entities(user_id).process(key, fact, created)
                # Belief revision (step 20): reconcile BEFORE adding this row's
                # edges, so the conflict check compares the new fact against the
                # EXISTING graph, not against itself. No-op unless enabled.
                if self.reconcile_enabled and ext:
                    try:
                        self.reconcile_on_save(user_id, key, fact, ext)
                    except Exception:
                        pass
                if self.graph_build and ext:
                    g = self._graph(user_id)
                    g.add_edges_from_row(key, ext, fact, created)
                    g.note_mentions(key, ext)   # keep the warm boost index live
                    g.flush()   # edges are deferred; persist this row's now
            except Exception:
                pass
        # Gist trace (step 37): a normalized meaning representation so a
        # paraphrased query can still match. Best-effort, side store.
        try:
            from .gist import gist_text
            g = gist_text(fact)
            if g:
                self._exec(f"MEMORY PUT INTO {self.gist_store} VALUES "
                           f"('{_e(user_id)}','{_e(key)}','{_e(json.dumps({'gist': g}))}')")
        except Exception:
            pass
        return key

    def save_semantic(self, user_id: str, proposition: str, *,
                      derived_from: Sequence[str],
                      abstraction_level: int = 1,
                      tags: Optional[List[str]] = None) -> str:
        """Write a semantic-tier memory (roadmap step 15): a timeless
        generalization distilled across several episodic rows. Stored in the
        separate `_semantic` store (not the main memory), tagged tier='semantic'
        with an abstraction_level and derived_from provenance, and embedded so it
        is similarity-retrievable. The source keys are NOT foreign-key validated
        here (they may live in the main store, episodes, or other semantic rows);
        job_semanticize passes already-resolved keys. Returns the new key."""
        created = time.time()
        key = f"sem_{int(created * 1000)}_{uuid.uuid4().hex[:6]}"
        record: Dict[str, Any] = {
            "fact":              proposition,
            "tags":              sorted(set((tags or []) + ["semantic"])),
            "created":           created,
            "tier":              "semantic",
            "abstraction_level": int(abstraction_level),
            "synthesized":       True,
            "derived_from":      [k for k in derived_from if k],
            "synthesis_version": SYNTHESIS_SCHEMA_VERSION,
        }
        if self.embedder is not None:
            vec = self.embedder.embed(proposition)
            if vec:
                record["emb"] = encode_vec(vec)
                mn = getattr(self.embedder, "model_name", "")
                record["emb_model"] = (f"{self.embedder.kind}:{mn}"
                                       if mn else self.embedder.kind)
        # Keep the record under the engine's ~8 KB statement cap: the embedding
        # plus a large provenance list could exceed it, which the engine rejects
        # (and would abort the caller). Trim provenance to fit, flagging it.
        payload = json.dumps(record)
        while (len(payload) + len(key) + len(user_id) > 7000
               and record.get("derived_from")):
            record["derived_from"] = record["derived_from"][:-1]
            record["derived_truncated"] = True
            payload = json.dumps(record)
        self._exec(
            f"MEMORY PUT INTO {self.semantic_store} VALUES "
            f"('{_e(user_id)}','{_e(key)}','{_e(payload)}')")
        if self.embedder2 is not None and self.embedder2.kind != "none":
            vec2 = self.embedder2.embed_passage(proposition)
            if vec2:
                mn2 = getattr(self.embedder2, "model_name", "")
                e2 = {"emb2": encode_vec(vec2),
                      "emb2_model": f"{self.embedder2.kind}:{mn2}"
                                    if mn2 else self.embedder2.kind}
                try:
                    self._exec(f"MEMORY PUT INTO {self.emb2_store} VALUES "
                               f"('{_e(user_id)}','{_e(key)}','{_e(json.dumps(e2))}')")
                except Exception:
                    pass
        return key

    def _entities(self, user_id: str):
        """Per-namespace EntityStore, cached so its canonical-id index stays
        warm across saves in this process."""
        store = self._entity_stores.get(user_id)
        if store is None:
            from .entities import EntityStore
            store = EntityStore(self._exec, self._query, user_id,
                                self.entity_store, self.mention_store)
            self._entity_stores[user_id] = store
        return store

    def _graph(self, user_id: str):
        """Per-namespace GraphStore (edge adjacency cached warm)."""
        store = self._graph_stores.get(user_id)
        if store is None:
            from .graph import GraphStore
            store = GraphStore(self._exec, self._query, user_id,
                               self.graph_store, self.mention_store)
            self._graph_stores[user_id] = store
        return store

    def _graph_row_boost(self, user_id: str, query: str) -> Dict[str, float]:
        """Resolve the query's entities, spread activation 2 hops over the
        knowledge graph, and return {mem_key: boost} for the reached rows.
        Empty when the query names no known entity (so non-relational queries
        pay nothing beyond one cheap extraction)."""
        from .entities import extract_entities
        es = self._entities(user_id)
        seeds, seen = [], set()
        for m in extract_entities(query or ""):
            eid, is_new = es.resolve(m["surface"], m["type"])
            if not is_new and eid not in seen:   # only entities we actually know
                seeds.append(eid)
                seen.add(eid)
        if not seeds:
            return {}
        g = self._graph(user_id)
        act = g.spreading_activation(seeds, depth=2)
        return g.rows_for_entities(act, seeds=seeds)

    # -- episodes (Step 16) ------------------------------------------
    def build_episodes(self, user_id: str, *, window_days: int = 7,
                       dry_run: bool = False) -> List[Dict[str, Any]]:
        """Segment recent rows into episodes and write one summary each.
        Thin wrapper so the tool and CLI share one implementation."""
        return _build_episodes(self, user_id, window_days=window_days,
                               dry_run=dry_run)

    def _patch_episode_summary(self, user_id: str, summary_key: str,
                               episode_id: str,
                               source_row_keys: List[str]) -> None:
        """Mark a freshly-saved summary row as an episode and carry its
        episode_id + sources, so a hierarchical search result can drill down
        without a reverse lookup."""
        rows = self._fetch_by_keys(self.memory, user_id, [summary_key])
        if not rows or not rows[0] or not rows[0][1]:
            return
        try:
            rec = json.loads(rows[0][1])
        except Exception:
            return
        rec["is_episode"]       = True
        rec["episode_id"]       = episode_id
        rec["source_row_keys"]  = source_row_keys
        self._exec(
            f"MEMORY PUT INTO {self.memory} VALUES "
            f"('{_e(user_id)}','{_e(summary_key)}','{_e(json.dumps(rec))}')")

    def expand_episode(self, user_id: str,
                       episode_id: str) -> Dict[str, Any]:
        """Drill-down: return the source rows behind an episode summary."""
        if not _valid_key(episode_id):
            return {"error": f"unknown episode_id: {episode_id}"}
        rows = self._query(
            f"SELECT mem_value FROM __mem_{self.episodes_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' "
            f"AND mem_key = '{_e(episode_id)}'")
        if not rows or not rows[0] or not rows[0][0]:
            return {"error": f"unknown episode_id: {episode_id}"}
        try:
            ep = json.loads(rows[0][0])
        except Exception:
            return {"error": "corrupt episode record"}
        src = ep.get("source_row_keys") or []
        out = []
        for r in self._fetch_by_keys(self.memory, user_id, src):
            try:
                rec = json.loads(r[1]) if r[1] else {}
            except Exception:
                rec = {}
            rec = {k: v for k, v in rec.items() if k not in ("emb", "emb2")}
            out.append({"key": r[0], **rec})
        return {"ok": True, "episode_id": episode_id,
                "time_start": ep.get("time_start"),
                "time_end": ep.get("time_end"),
                "rows": out}

    # -- user profile (Step 17) --------------------------------------
    def build_profile(self, user_id: str, *, window_days: int = 90,
                      k: Optional[int] = None,
                      dry_run: bool = False) -> List[Dict[str, Any]]:
        cl = _build_profile(self, user_id, window_days=window_days,
                            k=k, dry_run=dry_run)
        self._profile_cache.pop(user_id, None)   # invalidate cache
        return cl

    def _load_profile(self, user_id: str) -> List[Dict[str, Any]]:
        """Profile clusters with decoded centroids, cached per process."""
        cached = self._profile_cache.get(user_id)
        if cached is not None:
            return cached
        out: List[Dict[str, Any]] = []
        for r in self._query(
                f"SELECT mem_value FROM __mem_{self.profile_store} "
                f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000") or []:
            try:
                c = json.loads(r[0])
                cen = decode_vec(c.get("centroid"))
                if cen:
                    out.append({"centroid": cen, "label": c.get("label"),
                                "weight": float(c.get("weight") or 0.0),
                                "size": c.get("size")})
            except Exception:
                pass
        self._profile_cache[user_id] = out
        return out

    def show_profile(self, user_id: str) -> List[Dict[str, Any]]:
        """Transparency: the user's interest clusters (label + weight)."""
        cls = self._load_profile(user_id)
        return sorted(
            [{"label": c["label"], "weight": round(c["weight"], 4),
              "size": c.get("size")} for c in cls],
            key=lambda c: -c["weight"])

    def _active_profile_centroids(self, user_id: str,
                                  q_vec: Optional[List[float]],
                                  top: int = 2) -> List[List[float]]:
        """The 1-2 interest clusters the query points at — rows near these
        get the profile boost. Empty on cold start (no clusters) or with no
        query vector, so the boost stays passive."""
        if not q_vec:
            return []
        cls = self._load_profile(user_id)
        if not cls:
            return []
        from .embeddings import cosine
        ranked = sorted(cls, key=lambda c: -cosine(q_vec, c["centroid"]))
        return [c["centroid"] for c in ranked[:top]]

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
        """Fetch (mem_key, mem_value) for specific keys, batched so the
        IN(...) list stays SMALL. The engine crashes on a `WHERE x IN (...)`
        with roughly 50+ values (a stack overflow evaluating the list), so
        each batch is capped at MAX_IN_KEYS — well below that — in addition
        to the 8 KB statement-size budget."""
        # SECURITY: keys are inlined raw (not json-wrapped) into the IN-list, so
        # drop anything that isn't a well-formed server key. A caller-supplied
        # key (e.g. save_memory's `derived_from`) ending in a backslash would
        # otherwise escape its closing quote and inject SQL — a real key never
        # contains the offending characters, so this filter is non-breaking.
        keys = [k for k in keys if _valid_key(k)]
        out: List[Any] = []
        base = (f"SELECT mem_key, mem_value FROM __mem_{store} "
                f"WHERE mem_namespace = '{_e(user_id)}' AND mem_key IN (")
        budget = 7000
        batch: List[str] = []
        size = len(base) + 2
        for k in keys:
            tok = len("'" + _e(k) + "',")
            if batch and (len(batch) >= MAX_IN_KEYS or size + tok > budget):
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
        # A memory key can map to MORE than one physical row: the real record
        # plus connector-written annotation sidecars (gist / salience / PII-token
        # spans) stored under the SAME key. A raw IN(...) returns all of them in
        # arbitrary order, so a by-key fetch could hand back a sidecar twin —
        # which shadows the real memory in the e5-only candidate path (it has no
        # `fact`, so the parse loop drops it) and corrupts evidence / episode /
        # reconcile look-ups. Collapse duplicates to the content-bearing row
        # (one with a `fact`, else the longest value). The guard makes this a
        # no-op for the unique-key side stores, so the default path is unchanged.
        if out and len(out) > len({r[0] for r in out}):
            best: Dict[str, Any] = {}
            for r in out:
                k = r[0]
                if k not in best or self._row_rank(r[1]) > self._row_rank(best[k][1]):
                    best[k] = r
            out = list(best.values())
        return out

    @staticmethod
    def _row_rank(v: Any):
        """Pick order for duplicate-key rows: a content-bearing row (has `fact`)
        outranks a sidecar; among equals the longer value wins."""
        try:
            d = json.loads(v) if v else {}
            hf = 1 if isinstance(d, dict) and d.get("fact") else 0
        except Exception:
            hf = 0
        return (hf, len(v) if v else 0)

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
                sender: Optional[str] = None,
                mode: str = "flat",
                include_archived: bool = False,
                as_of: Optional[float] = None) -> List[Dict[str, Any]]:
        # Hierarchical mode (Step 16): rank only the episode summaries, so an
        # aggregation query returns a few paragraph summaries with drill-down
        # instead of every raw row. Unlike a tag filter this keeps the normal
        # keyword/dense signal requirement, so only episodes relevant to the
        # query come back — not the whole episode set.
        episode_only = (mode == "hierarchical")
        # Tokenize the query the SAME way as documents (_tokenize / \w+), not
        # with str.split(): otherwise a punctuation-attached query term ("go!",
        # "python,", "v1.2") keeps its punctuation and never equals the clean
        # \w+ doc tokens, so it matches neither the BM25 term set nor the
        # substring keyword check below.
        q_terms = _tokenize(query)

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

        # Knowledge-graph spreading activation (Step 15). Resolve the query's
        # entities, spread two hops, and pull in any reached rows the lexical/
        # dense gather missed so they can compete — this is the actual recall
        # lift for relational queries. Gated on EVOSQL_GRAPH_BOOST>0; the
        # default config and any query naming no known entity skip it.
        graph_boost_map: Dict[str, float] = {}
        if self.graph_boost > 0:
            try:
                graph_boost_map = self._graph_row_boost(user_id, query)
            except Exception:
                graph_boost_map = {}
            if graph_boost_map:
                have = {r[1] for r in rows}
                missing = [k for k in graph_boost_map if k not in have]
                for k, v in self._fetch_by_keys(self.memory, user_id, missing):
                    rows.append([user_id, k, v])

        # Gist channel (roadmap step 37): rows whose meaning trace overlaps the
        # query — surfacing a paraphrased / morphologically-varied match the
        # surface words miss. Opt-in (EVOSQL_GIST); a no-op otherwise.
        gist_boost_map: Dict[str, float] = {}
        if self.gist_search:
            try:
                from .gist import gist_overlap
                rows = rows or []
                have = {r[1] for r in rows}
                cands = []
                for gk, gv in self._query(
                        f"SELECT mem_key, mem_value FROM __mem_{self.gist_store} "
                        f"WHERE mem_namespace = '{_e(user_id)}' "
                        f"LIMIT {self.gist_scan}") or []:
                    try:
                        ov = gist_overlap(query, json.loads(gv).get("gist", ""))
                    except Exception:
                        continue
                    if ov >= 0.5:
                        gist_boost_map[gk] = ov
                        if gk not in have:
                            cands.append((ov, gk))
                # cap the injected rows to the ANN-pool scale so a common-stem
                # query can't balloon the per-row scoring pool: keep the
                # highest-overlap misses only.
                inject = [k for _, k in
                          sorted(cands, key=lambda t: -t[0])[:self.gist_inject_max]]
                for k, v in self._fetch_by_keys(self.memory, user_id, inject):
                    rows.append([user_id, k, v])
            except Exception:
                gist_boost_map = {}

        # Semantic-tier fusion (roadmap step 17): pull the namespace's semantic
        # generalizations into the candidate pool so a query gets both "what
        # happened" (episodic) and "what is generally true" (semantic). They are
        # parsed + scored + RRF-fused exactly like episodic rows. Empty until
        # job_semanticize runs, so it is a no-op by default; the store is small
        # (one row per cluster), so a bounded scan suffices.
        if self.semantic_search:
            try:
                rows = rows or []
                have = {r[1] for r in rows}
                for sr in self._query(
                        f"SELECT mem_namespace, mem_key, mem_value FROM "
                        f"__mem_{self.semantic_store} WHERE mem_namespace = "
                        f"'{_e(user_id)}' LIMIT {self.semantic_pool}") or []:
                    if sr[1] not in have:
                        rows.append([user_id, sr[1], sr[2]])
            except Exception:
                pass

        # User-profile bias (Step 17): the 1-2 interest clusters the query
        # points at. Rows near these centroids get a boost downstream, so
        # results lean toward what the user actually cares about. Needs a
        # query vector; empty on cold start so the boost stays passive.
        profile_centroids: List[List[float]] = []
        if self.profile_boost > 0 and q_vecs:
            try:
                profile_centroids = self._active_profile_centroids(
                    user_id, q_vecs[0])
            except Exception:
                profile_centroids = []

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
            # Hierarchical mode ranks episode summaries only; flat mode skips
            # them so a normal search isn't polluted by synthesized overviews.
            if episode_only and not rec.get("is_episode"):
                continue
            if not episode_only and rec.get("is_episode"):
                continue
            # Decay (Step 20): faded rows are archived, not deleted — skip them
            # unless the caller asked to include archived.
            if self.decay_enabled and not include_archived and rec.get("archived"):
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

            # Profile similarity (Step 17): how close this row sits to the
            # interest clusters the query points at. Reuses row_vec.
            psim = 0.0
            if profile_centroids and row_vec:
                psim = max((max(0.0, cosine(row_vec, pc))
                            for pc in profile_centroids), default=0.0)

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
                          or sem2_score > 0 or kw_score > 0
                          or graph_boost_map.get(c["key"], 0.0) > 0
                          or gist_boost_map.get(c["key"], 0.0) > 0
                          or psim >= PROFILE_SIGNAL_MIN)
            if not has_signal and not tag and sender_alias_set is None \
                    and sender_literal is None:
                continue

            # Strip both embedding vectors from the response — noise
            # for the LLM and inflates token cost.
            rec_out = {k: v for k, v in rec.items()
                       if k not in ("emb", "emb2")}
            out.append({"key": c["key"], "score": round(final, 4),
                         "_haystack": haystack, "_psim": psim,
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
        # Retrieval-trace capture (roadmap step 4): stash each candidate's
        # ranker components keyed by mem_key BEFORE they are stripped, so the
        # per-query feature log (the training/eval backbone) has them. The
        # final score + boost contributions are added below, after the boosts.
        self._last_scores = {}
        for x in out:
            self._last_scores[x["key"]] = {
                "bge": round(x.get("_bge", 0.0), 4),
                "e5": round(x.get("_e5", 0.0), 4),
                "kw": round(x.get("_kw", 0.0), 4),
                "hybrid": round(x.get("score", 0.0), 6),
            }
            for f in ("_bge", "_e5", "_kw"):
                x.pop(f, None)
        # Secondary sort by key keeps the ranking stable across
        # repeated calls — without this, tied scores ride on whatever
        # order the heap scan happened to return on this connection,
        # so the same query can yield different top-K between calls.
        out.sort(key=lambda x: (-x["score"], x.get("key", "")))

        # Step 7 — cross-encoder rerank over the top-K of the hybrid
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

        # Step 17 — user-profile boost. final = (1-β)·base + β·profile_sim,
        # where profile_sim is the row's cosine to the interest clusters the
        # query points at. Biases results toward what the user cares about;
        # passive on cold start (no centroids) and for rows without an
        # embedding (psim 0). Same min-max-base shape as the other blends.
        if self.profile_boost > 0 and profile_centroids and out:
            w = self.profile_boost
            smax = max((x["score"] for x in out), default=0.0) or 1.0
            pmax = max((x.get("_psim", 0.0) for x in out), default=0.0) or 1.0
            for x in out:
                base = x["score"] / smax
                ps = x.get("_psim", 0.0) / pmax
                x["score"] = round((1.0 - w) * base + w * ps, 6)
            out.sort(key=lambda x: (-x["score"], x.get("key", "")))

        # Step 15 — knowledge-graph boost. Rows reached by spreading
        # activation from the query's entities get an additive lift, so a
        # relational query ("who is active on X") surfaces rows that never
        # contain the query keyword — they were reached through the entity
        # graph. Same min-max-base + weighted-boost shape as salience; a row
        # with no activation contributes 0, so it never invents signal.
        if self.graph_boost > 0 and graph_boost_map and out:
            w = self.graph_boost
            smax = max((x["score"] for x in out), default=0.0) or 1.0
            gmax = max(graph_boost_map.values()) or 1.0
            for x in out:
                base = x["score"] / smax
                gb = graph_boost_map.get(x["key"], 0.0) / gmax
                x["score"] = round((1.0 - w) * base + w * gb, 6)
            out.sort(key=lambda x: (-x["score"], x.get("key", "")))

        # Gist channel (step 37): lift rows whose meaning trace matched the
        # query, so a paraphrased recall surfaces. Same min-max-base blend shape.
        if self.gist_search and gist_boost_map and out:
            w = 0.4
            smax = max((x["score"] for x in out), default=0.0) or 1.0
            gmax = max(gist_boost_map.values()) or 1.0
            for x in out:
                base = x["score"] / smax
                gb = gist_boost_map.get(x["key"], 0.0) / gmax
                x["score"] = round((1.0 - w) * base + w * gb, 6)
            out.sort(key=lambda x: (-x["score"], x.get("key", "")))

        # Step 12 — salience re-ranking. Blend the precomputed per-row
        # `salience` (recency × sender-activity × thread-depth × feedback)
        # into the base score so important rows surface first. The plan
        # phrases it as reducing a high-salience row's effective distance;
        # in score space that is an additive boost. The base score is min-max
        # normalized within the pool first so one weight works across the
        # RRF / rerank / hybrid score scales. Off by default (boost 0); rows
        # without a salience score contribute 0, so it never invents signal.
        # Salience is read from the side store (the daily job writes it there,
        # never onto the main record — see __init__).
        if self.salience_boost > 0 and len(out) > 1:
            w = self.salience_boost
            sal_map = self._salience_map(user_id, [x["key"] for x in out])
            if sal_map:
                smax = max((x["score"] for x in out), default=0.0) or 1.0
                for x in out:
                    base = x["score"] / smax
                    sal = float(sal_map.get(x["key"], 0.0))
                    x["score"] = round((1.0 - w) * base + w * sal, 6)
                out.sort(key=lambda x: (-x["score"], x.get("key", "")))

        for x in out:
            sc = self._last_scores.get(x["key"])
            if sc is not None:                       # finalize the trace row
                sc["psim"] = round(x.get("_psim", 0.0), 4)
                sc["graph"] = round(graph_boost_map.get(x["key"], 0.0), 4)
                sc["final"] = round(x.get("score", 0.0), 6)
            x.pop("_haystack", None)
            x.pop("_psim", None)
        # Unified ACT-R activation cutover (roadmap step 14): when enabled,
        # re-score + gate by A_i instead of the hand-mixed blend. Off by default,
        # so the line above leaves `out` exactly as the legacy ranking produced.
        if self.activation_enabled:
            out = self._rank_by_activation(user_id, out, graph_boost_map)
        # Learned-ranker cutover (step 26): re-score with the fitted logistic
        # weights instead of the hand-tuned blend. Off by default; cold start
        # (no fitted ranker) is a no-op, so the default ranking is unchanged.
        if self.learned_rank:
            out = self._rank_by_learned(
                user_id, out, q_vecs[0] if q_vecs else None)
        # Active-record gate (step 21) + as-of time travel (step 22). Runs when
        # the gate is on OR the caller asked for time travel (an as_of query
        # must apply the validity window regardless of the default flag); a
        # no-op on a clean/empty validity store at present time.
        if self.validity_gate or as_of is not None:
            out = self._apply_validity_gate(user_id, out, as_of=as_of)
        # Confidence abstention (step 32): if even the best candidate is too
        # low-confidence by source, return nothing rather than a confident wrong.
        # The confidence is the raw source prior by default; with EVOSQL_CALIBRATE
        # (step 40) it is mapped through the fitted calibrator first, so the gate
        # abstains on empirically-observed unreliability, not the prior.
        if self.abstain_conf is not None and out:
            confs = [source_reliability(x.get("source_class")) for x in out]
            if self.calibrate:
                confs = [self._calibrate_conf(user_id, c) for c in confs]
            if max(confs) < self.abstain_conf:
                out = []
        page = out[:limit]
        # Provenance (Step 13): synthesized rows in the returned page carry
        # an evidence_chain resolving each source key to its fact.
        self._attach_evidence(user_id, page)
        # Decay (Step 20): a read refreshes the row's access time so accessed
        # memories resist archival (Ebbinghaus). Best-effort, side store only.
        if self.decay_enabled and page:
            self._touch_access(user_id, [r["key"] for r in page])
        return page

    def _access_records(self, user_id: str,
                        keys: Sequence[str]) -> Dict[str, dict]:
        """{mem_key: access_record} from the side store for the given keys.
        The record is the unified access state (roadmap step 3):
          {last_accessed, retrieval_count, uses[], stability, rif_penalty}.
        Missing keys are simply absent. Best-effort; empty on any read error."""
        out: Dict[str, dict] = {}
        if not keys:
            return out
        try:
            rows = self._fetch_by_keys(self.access_store, user_id, list(keys))
        except Exception:
            return out
        for r in rows:
            try:
                rec = json.loads(r[1]) if r[1] else {}
                if isinstance(rec, dict):
                    out[r[0]] = rec
            except Exception:
                continue
        return out

    def _base_level_map(self, user_id: str, keys: Sequence[str], *,
                        created: Optional[Dict[str, float]] = None,
                        now: Optional[float] = None) -> Dict[str, float]:
        """{mem_key: base-level activation B_i} from the access history (ACT-R,
        roadmap step 9). `created` maps key -> creation epoch so Petrov's tail
        approximation can account for retrievals older than the kept `uses`
        history. Keys never retrieved are absent (the unified score treats a
        missing B_i as the floor)."""
        from .activation import base_level
        if now is None:
            now = time.time()
        out: Dict[str, float] = {}
        for k, rec in self._access_records(user_id, keys).items():
            uses = rec.get("uses") or []
            if not uses:
                continue
            cnt = int(rec.get("retrieval_count", len(uses)) or 0)
            ls = (created or {}).get(k)
            out[k] = base_level(uses, cnt, now, lifetime_start=ls)
        return out

    def _rank_by_activation(self, user_id: str, out: List[Dict[str, Any]],
                            graph_boost_map: Dict[str, float]
                            ) -> List[Dict[str, Any]]:
        """Re-rank candidates by the unified ACT-R activation A_i (roadmap step
        14 cutover). Combines base-level (the row's own use history), the best
        dense similarity as logit(cos), the graph spread, and ln(salience) in
        log-additive space, then gates by the retrieval threshold + noise. Only
        engaged when EVOSQL_ACTIVATION is on; otherwise search ranking is
        untouched."""
        from .activation import activation, threshold_filter, B_FLOOR
        if not out:
            return out
        keys = [x["key"] for x in out]
        created: Dict[str, float] = {}
        for x in out:
            ts = x.get("created") or x.get("saved_at") or x.get("ts")
            try:
                created[x["key"]] = float(ts)
            except (TypeError, ValueError):
                continue
        base_map = self._base_level_map(user_id, keys, created=created)
        sal_map = self._salience_map(user_id, keys)
        for x in out:
            k = x["key"]
            sc = self._last_scores.get(k, {}) if hasattr(self, "_last_scores") else {}
            cos = max(float(sc.get("bge", 0.0)), float(sc.get("e5", 0.0)))
            a = activation(
                base=base_map.get(k, B_FLOOR),
                cos=cos if cos > 0.0 else None,
                spread=float(graph_boost_map.get(k, 0.0)),
                salience=sal_map.get(k),
                w_cos=self.act_w_cos, w_spread=self.act_w_spread,
                w_sal=self.act_w_sal)
            x["score"] = round(a, 6)
            if isinstance(sc, dict) and k in getattr(self, "_last_scores", {}):
                self._last_scores[k]["activation"] = round(a, 6)
        # retrieval threshold + noise: drop rows that don't clear tau (when set)
        kept = dict(threshold_filter([(x["key"], x["score"]) for x in out],
                                     self.act_tau, noise_scale=self.act_noise))
        survivors = [x for x in out if x["key"] in kept]
        for x in survivors:
            x["score"] = round(kept[x["key"]], 6)
        survivors.sort(key=lambda x: (-x["score"], x.get("key", "")))
        return survivors

    def _touch_access(self, user_id: str, keys: List[str]) -> None:
        """Record a read in the unified access side store. A read increments the
        row's retrieval_count and appends to its `uses` epoch history (capped),
        on top of refreshing last_accessed — so later steps get recency AND
        frequency (base-level activation, spaced-repetition) without ever
        rewriting the main record. Other fields (stability, rif_penalty) written
        by the decay/forgetting passes are preserved."""
        now = time.time()
        cur = self._access_records(user_id, keys)
        for k in keys:
            rec = cur.get(k) or {}
            rec["last_accessed"] = now
            rec["retrieval_count"] = int(rec.get("retrieval_count", 0)) + 1
            uses = rec.get("uses") or []
            uses.append(round(now, 3))
            if len(uses) > ACCESS_USES_CAP:
                uses = uses[-ACCESS_USES_CAP:]
            rec["uses"] = uses
            try:
                self._exec(
                    f"MEMORY PUT INTO {self.access_store} VALUES "
                    f"('{_e(user_id)}','{_e(k)}','{_e(json.dumps(rec))}')")
            except Exception:
                pass

    def _bump_rif(self, user_id: str, keys: Sequence[str],
                  delta: float = 0.1) -> None:
        """Add a retrieval-induced-forgetting penalty to rows out-competed by a
        retrieval (roadmap step 30). Accumulates in the access side store
        (capped <1) WITHOUT touching last_accessed, so a penalized near-duplicate
        fades faster in the decay pass while the winner stays. Preserves the
        row's other access fields.

        NOTE: this is the RIF writer; the decay pass already consumes
        rif_penalty (decay.decay_score / _rif_map). Auto-triggering it from the
        hot search() path (near_dup_competitors over the candidate vectors after
        the winner is chosen) is deferred to keep search byte-for-byte unchanged
        on the default path — RIF stays opt-in/explicit until that wiring lands
        behind its own env flag. Callable directly today (tests, scheduler)."""
        if not keys:
            return
        cur = self._access_records(user_id, keys)
        for k in keys:
            rec = cur.get(k) or {}
            rec["rif_penalty"] = round(
                min(0.95, float(rec.get("rif_penalty", 0.0)) + delta), 4)
            try:
                self._exec(
                    f"MEMORY PUT INTO {self.access_store} VALUES "
                    f"('{_e(user_id)}','{_e(k)}','{_e(json.dumps(rec))}')")
            except Exception:
                pass

    def _salience_map(self, user_id: str,
                      keys: Sequence[str]) -> Dict[str, float]:
        """{mem_key: salience} from the side store, for the candidate keys.
        Empty when the salience job hasn't run, so the boost stays inert."""
        out: Dict[str, float] = {}
        try:
            rows = self._fetch_by_keys(self.salience_store, user_id, list(keys))
        except Exception:
            return out
        for r in rows:
            try:
                v = json.loads(r[1]) if r[1] else {}
                if isinstance(v.get("salience"), (int, float)):
                    out[r[0]] = float(v["salience"])
            except Exception:
                continue
        return out

    def _validity_map(self, user_id: str,
                      keys: Sequence[str]) -> Dict[str, dict]:
        """{mem_key: validity_record} from the side store (roadmap step 19).
        Empty when no validity has been recorded — a row with no validity record
        is treated as active (append-only default)."""
        out: Dict[str, dict] = {}
        if not keys:
            return out
        try:
            rows = self._fetch_by_keys(self.validity_store, user_id, list(keys))
        except Exception:
            return out
        for r in rows:
            try:
                v = json.loads(r[1]) if r[1] else {}
                if isinstance(v, dict):
                    out[r[0]] = v
            except Exception:
                continue
        return out

    @staticmethod
    def _created_ts(x: Dict[str, Any]) -> Optional[float]:
        for f in ("created", "saved_at", "ts"):
            try:
                return float(x[f])
            except (KeyError, TypeError, ValueError):
                continue
        return None

    def _apply_validity_gate(self, user_id: str, out: List[Dict[str, Any]], *,
                             as_of: Optional[float] = None
                             ) -> List[Dict[str, Any]]:
        """Validity gate (roadmap steps 21-22).

        PRESENT-TIME (as_of=None): drop rows the validity store marks
        stale/retracted — a multiplicative gate (removed, not an additive boost)
        so a superseded fact stops out-ranking the current one. A row with no
        record is active. No-op when no validity records exist.

        AS-OF (time travel): a row is kept iff it was valid AT that time. A row
        WITH a validity record honors its [valid_from, valid_to) window (the
        window is authoritative). A row WITHOUT a record is kept only if it had
        already been created by then (its own created timestamp <= as_of), so a
        not-yet-existing fact is not leaked into a past-time query."""
        if not out:
            return out
        vmap = self._validity_map(user_id, [x["key"] for x in out])
        if not vmap and as_of is None:
            return out                       # present-time + nothing recorded
        kept: List[Dict[str, Any]] = []
        for x in out:
            v = vmap.get(x["key"]) or {}
            if as_of is not None:
                if v:                        # recorded window is authoritative
                    vf, vt = v.get("valid_from"), v.get("valid_to")
                    if (vf is None or as_of >= vf) and (vt is None or as_of < vt):
                        kept.append(x)
                else:                        # no record -> exists iff created by then
                    cts = self._created_ts(x)
                    if cts is None or cts <= as_of:
                        kept.append(x)
                continue
            # present-time: keep active / unrecorded, drop stale/retracted
            if v.get("status", "active") == "active":
                kept.append(x)
        return kept

    def _set_validity(self, user_id: str, mem_key: str, *,
                      valid_from: Optional[float] = None,
                      valid_to: Optional[float] = None,
                      supersedes: Optional[Sequence[str]] = None,
                      superseded_by: Optional[Sequence[str]] = None,
                      unsupported_by: Optional[Sequence[str]] = None,
                      status: str = "active") -> dict:
        """Write/merge the validity record for `mem_key` (roadmap step 19).
        valid_from defaults to now on first write and is preserved on update;
        the supersedes / superseded_by lists are unioned; status is set each
        call. `unsupported_by` records TMS retraction evidence in a SEPARATE
        field so it never pollutes the superseded_by version chain that
        reconsolidate walks. Returns the written record. Best-effort."""
        now = time.time()
        cur = self._validity_map(user_id, [mem_key]).get(mem_key, {}) or {}

        def _union(a, b):
            out = list(a or [])
            for x in (b or []):
                if x not in out:
                    out.append(x)
            return out

        # Cap the supersession chains so the record can't grow past the engine's
        # 8 KB statement cap (superseded_by on a frequently-revised "hub" key
        # would otherwise union a new entry forever, eventually failing the PUT
        # silently and freezing the row's status). Keep the most recent.
        sup = _union(cur.get("supersedes"), supersedes)[-VALIDITY_CHAIN_CAP:]
        sup_by = _union(cur.get("superseded_by"), superseded_by)[-VALIDITY_CHAIN_CAP:]
        rec = {
            "valid_from": (valid_from if valid_from is not None
                           else cur.get("valid_from", now)),
            "valid_to":   (valid_to if valid_to is not None
                           else cur.get("valid_to")),
            "tx_from":    cur.get("tx_from", now),
            "status":     status,
            "supersedes":    sup,
            "superseded_by": sup_by,
        }
        # TMS evidence (step 39) lives in its own field, not the chain
        usb = (list(unsupported_by) if unsupported_by is not None
               else cur.get("unsupported_by"))
        if usb:
            rec["unsupported_by"] = usb[-VALIDITY_CHAIN_CAP:]
        try:
            self._exec(
                f"MEMORY PUT INTO {self.validity_store} VALUES "
                f"('{_e(user_id)}','{_e(mem_key)}','{_e(json.dumps(rec))}')")
        except Exception:
            pass
        return rec

    def reconcile_on_save(self, user_id: str, new_key: str, text: str,
                          mentions: Sequence[dict], *,
                          adjudicate: Optional[Callable[[str, str], str]] = None
                          ) -> int:
        """Detect + revise a write-time Type-I contradiction (roadmap step 20).
        Extracts the new row's (subject, predicate, object) triples, finds
        existing graph edges with the same (subject, predicate) but a different
        object, and asks the adjudicator (injected, or the opt-in
        EVOSQL_RECONCILE_LLM) for a Mem0 verdict. On UPDATE/DELETE the superseded
        rows are marked stale/retracted in the validity store and the new row
        records what it supersedes. Returns the number of rows marked stale.
        No-op when reconciliation is off or no adjudicator is available."""
        from .reconcile import find_conflicts, llm_adjudicate
        from .graph import extract_triples
        triples = extract_triples(text, list(mentions or []))
        if not triples:
            return 0
        try:
            cache = self._graph(user_id)._edge_cache()
        except Exception:
            return 0
        conflicts = find_conflicts(cache, triples)
        if not conflicts:
            return 0
        if adjudicate is None:
            be = os.environ.get("EVOSQL_RECONCILE_LLM", "").strip().lower()
            if not be:
                return 0                  # opt-in: no adjudicator -> no revision
            adjudicate = lambda new_t, old_o: llm_adjudicate(new_t, old_o, be)

        now = time.time()
        stale = 0
        for c in conflicts:
            superseded = [k for k in set(c["old_source_rows"]) if k != new_key]
            # Only revise rows that are still ACTIVE — re-marking an
            # already-stale row would re-union into its (capped) chain forever
            # and waste an LLM call.
            vstat = self._validity_map(user_id, superseded)
            superseded = [k for k in superseded
                          if vstat.get(k, {}).get("status", "active") == "active"]
            if not superseded:
                continue
            # Give the adjudicator the OLD FACT TEXT, not the opaque object id,
            # so it can judge a real contradiction (the catch-all related_to
            # predicate over-triggers; the LLM is the precision gate).
            old_fact = ""
            try:
                orows = self._fetch_by_keys(self.memory, user_id, superseded[:1])
                if orows and orows[0] and orows[0][1]:
                    old_fact = json.loads(orows[0][1]).get("fact") or ""
            except Exception:
                old_fact = ""
            if not old_fact:
                # Couldn't resolve the superseded row's real text. Never hand
                # the adjudicator the opaque entity id (c["old_object"], e.g.
                # 'ent_person_3_12345') as the 'old fact' — it can't judge a
                # contradiction from an id, and would mostly NOOP or misfire.
                continue
            try:
                verdict = (adjudicate(text, old_fact) or "NOOP").upper()
            except Exception:
                continue
            if verdict not in ("UPDATE", "DELETE"):
                continue
            status = "retracted" if verdict == "DELETE" else "stale"
            for ok in superseded:
                self._set_validity(user_id, ok, valid_to=now, status=status,
                                   superseded_by=[new_key])
                stale += 1
            self._set_validity(user_id, new_key, supersedes=superseded,
                               status="active")
        return stale

    def core_memory_get(self, user_id: str,
                        label: Optional[str] = None) -> Dict[str, str]:
        """Return the always-in-context core blocks (roadmap step 36):
        {label: text}. One label or all. Injected every turn — no query."""
        out: Dict[str, str] = {}
        for k, v in self._query(
                f"SELECT mem_key, mem_value FROM __mem_{self.core_store} "
                f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 1000") or []:
            try:
                rec = json.loads(v) if v else {}
                out[k] = rec.get("text", "")
            except Exception:
                continue
        if label is not None:
            return {label: out.get(label, "")}
        return out

    def _core_put(self, user_id: str, label: str, text: str) -> str:
        # Enforce the block budget: overflow keeps the most recent tail (the
        # agent is expected to summarize-and-replace before it gets here).
        if len(text) > self.core_max_chars:
            text = text[-self.core_max_chars:]
        rec = {"label": label, "text": text, "updated_at": time.time(),
               "max_chars": self.core_max_chars}
        self._exec(f"MEMORY PUT INTO {self.core_store} VALUES "
                   f"('{_e(user_id)}','{_e(label)}','{_e(json.dumps(rec))}')")
        return text

    def core_memory_replace(self, user_id: str, label: str, text: str) -> str:
        """Overwrite a core block (roadmap step 36). Returns the stored text
        (truncated to max_chars)."""
        return self._core_put(user_id, label, text)

    def core_memory_append(self, user_id: str, label: str, text: str) -> str:
        """Append to a core block (newline-joined), enforcing max_chars."""
        cur = self.core_memory_get(user_id, label).get(label, "")
        joined = (cur + "\n" + text) if cur else text
        return self._core_put(user_id, label, joined)

    def add_intention(self, user_id: str, action: str, *,
                      due_ts: Optional[float] = None,
                      cue_entity: Optional[str] = None) -> str:
        """Store a future intention (roadmap step 35): time-based (due_ts) or
        event-based (fire when cue_entity is next mentioned). Returns the key.
        The due epoch is mirrored in the key (zero-padded) so a B+ tree range
        scan can find due ones in order."""
        now = time.time()
        due_tag = f"{int(due_ts):020d}" if due_ts is not None else "00000000000000000000"
        key = f"intent_{due_tag}_{uuid.uuid4().hex[:6]}"
        rec = {"action": action, "due_ts": due_ts, "cue_entity": cue_entity,
               "trigger": "time" if due_ts is not None else "event",
               "status": "pending", "created": now}
        self._exec(f"MEMORY PUT INTO {self.intentions_store} VALUES "
                   f"('{_e(user_id)}','{_e(key)}','{_e(json.dumps(rec))}')")
        return key

    def _pending_intentions(self, user_id: str) -> List[tuple]:
        out = []
        for k, v in self._query(
                f"SELECT mem_key, mem_value FROM __mem_{self.intentions_store} "
                f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 100000") or []:
            try:
                rec = json.loads(v) if v else {}
            except Exception:
                continue
            if rec.get("status") == "pending":
                out.append((k, rec))
        return out

    def due_intentions(self, user_id: str,
                       now: Optional[float] = None) -> List[Dict[str, Any]]:
        """Pending time-based intentions whose due time has passed."""
        now = now if now is not None else time.time()
        out = []
        for k, rec in self._pending_intentions(user_id):
            dt = rec.get("due_ts")
            if rec.get("trigger") == "time" and dt is not None and dt <= now:
                rec = dict(rec); rec["key"] = k
                out.append(rec)
        return out

    def fire_intention(self, user_id: str, key: str) -> None:
        rows = self._fetch_by_keys(self.intentions_store, user_id, [key])
        if not rows or not rows[0] or not rows[0][1]:
            return
        try:
            rec = json.loads(rows[0][1])
        except Exception:
            return
        rec["status"] = "fired"
        rec["fired_at"] = time.time()
        try:
            self._exec(f"MEMORY PUT INTO {self.intentions_store} VALUES "
                       f"('{_e(user_id)}','{_e(key)}','{_e(json.dumps(rec))}')")
        except Exception:
            pass

    def fire_event_intentions(self, user_id: str,
                              entity_ids: Sequence[str]) -> List[Dict[str, Any]]:
        """Fire event-based intentions whose cue entity is among `entity_ids`
        (called when a new row mentions them)."""
        ids = set(entity_ids or [])
        fired = []
        for k, rec in self._pending_intentions(user_id):
            if rec.get("trigger") == "event" and rec.get("cue_entity") in ids:
                self.fire_intention(user_id, k)
                rec = dict(rec); rec["key"] = k
                fired.append(rec)
        return fired

    def save_skill(self, user_id: str, name: str, description: str, *,
                   steps: Optional[List[str]] = None,
                   trigger: str = "", derived_from: Optional[Sequence[str]] = None
                   ) -> str:
        """Record a reusable how-to (roadmap step 34). Indexed by name +
        description + trigger (embedded) so find_skill can retrieve it for a
        matching task; success/fail counters start at 0."""
        created = time.time()
        key = f"skill_{int(created * 1000)}_{uuid.uuid4().hex[:6]}"
        rec = {"name": name, "description": description, "trigger": trigger,
               "steps": list(steps or []), "success_count": 0, "fail_count": 0,
               "derived_from": [k for k in (derived_from or []) if k],
               "created": created}
        idx = " ".join([name, description, trigger]).strip()
        if self.embedder is not None:
            v = self.embedder.embed(idx)
            if v:
                rec["emb"] = encode_vec(v)
        payload = _fit_payload(rec, key, user_id)
        try:
            self._exec(f"MEMORY PUT INTO {self.skill_store} VALUES "
                       f"('{_e(user_id)}','{_e(key)}','{_e(payload)}')")
        except Exception:
            return key
        return key

    def find_skill(self, user_id: str, task: str,
                   limit: int = 3) -> List[Dict[str, Any]]:
        """Retrieve the skills most relevant to `task` (roadmap step 34): cosine
        when an embedder is configured, else keyword overlap over name +
        description + trigger. Ties broken toward a higher success rate."""
        from .embeddings import cosine, decode_vec
        qv = self.embedder.embed(task) if self.embedder is not None else None
        terms = [w.lower() for w in task.split() if len(w) > 2]
        scored: List[tuple] = []
        for k, v in self._query(
                f"SELECT mem_key, mem_value FROM __mem_{self.skill_store} "
                f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 100000") or []:
            try:
                rec = json.loads(v) if v else {}
            except Exception:
                continue
            hay = " ".join([rec.get("name", ""), rec.get("description", ""),
                            rec.get("trigger", "")]).lower()
            if qv and decode_vec(rec.get("emb")):
                sc = cosine(qv, decode_vec(rec.get("emb")))
            else:
                sc = sum(1 for t in terms if t in hay) / (len(terms) or 1)
            if sc <= 0:
                continue
            succ = int(rec.get("success_count", 0)); fail = int(rec.get("fail_count", 0))
            rate = (succ + 1) / (succ + fail + 2)        # Laplace-smoothed
            rec["key"] = k
            scored.append((sc, rate, rec))
        scored.sort(key=lambda t: (-t[0], -t[1]))
        return [r for _s, _r, r in scored[:limit]]

    def record_skill_outcome(self, user_id: str, skill_key: str,
                             success: bool) -> None:
        """Increment a skill's success/fail counter (roadmap step 34) so a
        failing skill ranks lower and eventually decays out."""
        rows = self._fetch_by_keys(self.skill_store, user_id, [skill_key])
        if not rows or not rows[0] or not rows[0][1]:
            return
        try:
            rec = json.loads(rows[0][1])
        except Exception:
            return
        field = "success_count" if success else "fail_count"
        rec[field] = int(rec.get(field, 0)) + 1
        try:
            self._exec(f"MEMORY PUT INTO {self.skill_store} VALUES "
                       f"('{_e(user_id)}','{_e(skill_key)}','{_e(json.dumps(rec))}')")
        except Exception:
            pass

    def reconsolidate(self, user_id: str, key: str, correction: str, *,
                      judge: Optional[Callable[[str, str], str]] = None
                      ) -> Optional[str]:
        """Recall-time reconsolidation (roadmap step 29). A retrieved row,
        recalled with new context/correction, is re-stabilized in an altered
        form: a judge (opt-in LLM or injected) returns CONFIRM/REFINE/CONTRADICT;
        on REFINE/CONTRADICT a NEW version (key#vN) carrying the correction is
        written with supersedes, and the old row is marked stale (kept for audit
        — labile != deleted). Returns the new key, or None (CONFIRM / off / not
        found). Only reactivated traces are labile, so this is keyed on recall."""
        rows = self._fetch_by_keys(self.memory, user_id, [key])
        if not rows or not rows[0] or not rows[0][1]:
            return None
        try:
            rec = json.loads(rows[0][1])
        except Exception:
            return None
        old_fact = rec.get("fact") or ""
        if judge is None:
            from .reconcile import llm_reconsolidate
            be = os.environ.get("EVOSQL_RECONSOLIDATE_LLM", "").strip().lower()
            if not be:
                return None                       # opt-in
            judge = lambda o, c: llm_reconsolidate(o, c, be)
        try:
            verdict = (judge(old_fact, correction) or "CONFIRM").upper()
        except Exception:
            return None
        if "REFINE" not in verdict and "CONTRADICT" not in verdict:
            return None                           # CONFIRM -> trace unchanged

        # Resolve to the CURRENT head of the version chain before minting a new
        # version, so a second reconsolidate on the same (now-superseded) base
        # key versions off the head (k -> k#v2 -> k#v3) instead of recomputing
        # k#v2 and clobbering the first correction (atomic upsert = silent loss).
        head_key, head_rec = key, rec
        seen = {key}
        while True:
            sb = (self._validity_map(user_id, [head_key]).get(head_key) or {}
                  ).get("superseded_by")
            nxt = sb[0] if isinstance(sb, (list, tuple)) and sb else None
            if not nxt or nxt in seen:
                break
            nrows = self._fetch_by_keys(self.memory, user_id, [nxt])
            if not nrows or not nrows[0] or not nrows[0][1]:
                break
            try:
                head_rec = json.loads(nrows[0][1])
            except Exception:
                break
            seen.add(nxt)
            head_key = nxt
        base = head_key.split("#", 1)[0]
        ver = int(head_rec.get("version", 1)) + 1
        new_key = f"{base}#v{ver}"
        # belt-and-suspenders against any chain gap: never reuse an existing key
        while self._fetch_by_keys(self.memory, user_id, [new_key]) and \
                new_key not in seen:
            ver += 1
            new_key = f"{base}#v{ver}"
            seen.add(new_key)
        new_rec = dict(head_rec)
        new_rec.update({"fact": correction, "version": ver, "supersedes": head_key,
                        "reconsolidated_from": head_key, "created": time.time()})
        if self.embedder is not None:
            v = self.embedder.embed(correction)
            if v:
                new_rec["emb"] = encode_vec(v)
        payload = _fit_payload(new_rec, new_key, user_id)
        self._exec(f"MEMORY PUT INTO {self.memory} VALUES "
                   f"('{_e(user_id)}','{_e(new_key)}','{_e(payload)}')")
        now = time.time()
        self._set_validity(user_id, head_key, valid_to=now, status="stale",
                           superseded_by=[new_key])
        self._set_validity(user_id, new_key, supersedes=[head_key], status="active")
        return new_key

    def restore(self, user_id: str, key: str) -> bool:
        """Bring an archived memory back: clear the flag and refresh its
        access time so the next decay pass keeps it active."""
        if not _valid_key(key):
            return False   # reject malformed/injection keys before inlining
        rows = self._fetch_by_keys(self.memory, user_id, [key])
        if not rows or not rows[0] or not rows[0][1]:
            return False
        try:
            rec = json.loads(rows[0][1])
        except Exception:
            return False
        rec["archived"] = False
        self._exec(f"MEMORY PUT INTO {self.memory} VALUES "
                   f"('{_e(user_id)}','{_e(key)}','{_e(json.dumps(rec))}')")
        self._touch_access(user_id, [key])
        return True

    def _attach_evidence(self, user_id: str,
                          rows: List[Dict[str, Any]]) -> None:
        """For each synthesized row, resolve its derived_from keys to evidence.

        Step 13: evidence_chain = [{key, fact, present}] — full traceability.
        Step 19 (co-presented evidence policy): also attach
          evidence_excerpts = [{key, snippet}]  — a 1-2 sentence quote per
          source, the citation-ready short form, and citation_required = true
          so the model is told to co-cite the sources when it uses the row.
        One batched fetch for the whole page."""
        need = set()
        for x in rows:
            if x.get("synthesized") and x.get("derived_from"):
                need.update(x["derived_from"])
        if not need:
            return
        srcmap: Dict[str, str] = {}
        for r in self._fetch_by_keys(self.memory, user_id, list(need)):
            try:
                sr = json.loads(r[1]) if r[1] else {}
            except Exception:
                sr = {}
            srcmap[r[0]] = (sr.get("fact") or "") if isinstance(sr, dict) else ""
        for x in rows:
            if x.get("synthesized") and x.get("derived_from"):
                x["evidence_chain"] = [
                    {"key": k, "fact": srcmap.get(k, ""), "present": k in srcmap}
                    for k in x["derived_from"]
                ]
                # Co-presented evidence: a short quote from each PRESENT
                # source. Anti-confabulation — the row never travels without
                # the evidence the model must cite.
                x["evidence_excerpts"] = [
                    {"key": k, "snippet": _snippet(srcmap[k])}
                    for k in x["derived_from"] if k in srcmap and srcmap[k]
                ]
                x["citation_required"] = True

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
        if not _valid_key(key):
            return False   # reject malformed/injection keys before inlining
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

    # -- implicit feedback (Step 11) ---------------------------------
    def _calibrate_conf(self, user_id: str, conf: float) -> float:
        """Map a raw source-confidence through the namespace's fitted calibrator
        (roadmap step 40), lazily loading + caching it. Identity when no
        calibration has been recorded, so an un-fitted namespace is unchanged."""
        if user_id not in self._calibrator_cache:
            from .calibration import load_calibrator
            try:
                self._calibrator_cache[user_id] = load_calibrator(self, user_id)
            except Exception:
                self._calibrator_cache[user_id] = None
        from .calibration import apply_calibration
        return apply_calibration(self._calibrator_cache.get(user_id), conf)

    def _feedback_records(self, user_id: str,
                          limit: int = 100000) -> List[Dict[str, Any]]:
        """Every feedback record for a namespace (query text, per-candidate
        trace, used_keys) — the training corpus for the learned controller
        (roadmap steps 24-26)."""
        out: List[Dict[str, Any]] = []
        try:
            rows = self._query(
                f"SELECT mem_value FROM __mem_{self.feedback_store} "
                f"WHERE mem_namespace = '{_e(user_id)}' LIMIT {limit}") or []
        except Exception:
            return out
        for r in rows:
            try:
                rec = json.loads(r[0]) if r[0] else None
                if isinstance(rec, dict):
                    out.append(rec)
            except Exception:
                continue
        return out

    def _utility_map(self, user_id: str, keys: Sequence[str],
                     centroid: str = "g") -> Dict[str, float]:
        """{mem_key: utility} for the query's centroid context (roadmap step 25).
        Empty until recompute_utilities has folded feedback into utilities."""
        if not keys:
            return {}
        util_keys = [f"{centroid}:{k}" for k in keys]
        out: Dict[str, float] = {}
        try:
            rows = self._fetch_by_keys(self.utility_store, user_id, util_keys)
        except Exception:
            return out
        for r in rows:
            try:
                v = json.loads(r[1]) if r[1] else {}
                u = v.get("u") if isinstance(v, dict) else None
                if isinstance(u, (int, float)):
                    mk = r[0].split(":", 1)[1] if ":" in r[0] else r[0]
                    out[mk] = float(u)
            except Exception:
                continue
        return out

    def _query_centroid(self, user_id: str, q_vec, *, min_cos: float = 0.3):
        """Nearest profile-cluster id for a query vector ('g' = global fallback).
        Shared by the utility WRITE (recompute_utilities) and READ
        (_rank_by_learned) paths so the conditioned key can't drift between them."""
        from .embeddings import decode_vec, cosine
        if not q_vec:
            return "g"
        best_id, best = "g", float(min_cos)
        try:
            for v in self._query(
                    f"SELECT mem_key, mem_value FROM __mem_{self.profile_store} "
                    f"WHERE mem_namespace = '{_e(user_id)}'") or []:
                try:
                    c = decode_vec((json.loads(v[1]) or {}).get("centroid"))
                    if c:
                        s = cosine(q_vec, c)
                        if s >= best:
                            best, best_id = s, str(v[0])
                except Exception:
                    continue
        except Exception:
            pass
        return best_id

    def recompute_utilities(self, user_id: str, *,
                            alpha: Optional[float] = None) -> int:
        """Fold the feedback corpus into per-(centroid, row) utilities and
        persist them (roadmap step 25). The query centroid is the nearest
        profile cluster of the record's query_emb (global 'g' on cold start).
        Idempotent: each run folds the whole corpus from the neutral prior, so a
        static corpus yields the same utilities (carrying the persisted values
        forward and re-folding would drift toward 0/1). Returns the count written."""
        from . import learn
        from .embeddings import decode_vec
        records = self._feedback_records(user_id)
        if not records:
            return 0

        def centroid_of(rec):
            return self._query_centroid(user_id, decode_vec(rec.get("query_emb")))

        a = alpha if alpha is not None else learn.UTILITY_ALPHA
        U = learn.accumulate_utilities(records, alpha=a, centroid_fn=centroid_of)
        written = 0
        for uk, u in U.items():
            try:
                self._exec(
                    f"MEMORY PUT INTO {self.utility_store} VALUES "
                    f"('{_e(user_id)}','{_e(uk)}','{_e(json.dumps({'u': u}))}')")
                written += 1
            except Exception:
                continue
        return written

    _RANKER_KEY = "__ranker__"          # reserved key in the utility store

    def fit_ranker(self, user_id: str) -> Dict[str, Any]:
        """Fit + persist the learned logistic ranker from the feedback corpus
        (roadmap step 26). Returns the model {weights, bias, n}. A no-op (n=0)
        when there is no labelled feedback yet."""
        from . import learn
        examples = learn.build_examples(self._feedback_records(user_id))
        model = learn.fit_logistic(examples)
        if model.get("n"):
            model["ts"] = time.time()
            try:
                self._exec(
                    f"MEMORY PUT INTO {self.utility_store} VALUES "
                    f"('{_e(user_id)}','{_e(self._RANKER_KEY)}',"
                    f"'{_e(json.dumps(model))}')")
            except Exception:
                pass
        return model

    def _load_ranker(self, user_id: str) -> Optional[Dict[str, Any]]:
        """Load the fitted ranker, or None on cold start / a corrupt model —
        so a hand-edited or truncated __ranker__ degrades to the base ranking
        instead of crashing search."""
        try:
            rows = self._fetch_by_keys(self.utility_store, user_id,
                                       [self._RANKER_KEY])
        except Exception:
            return None
        for r in rows:
            try:
                m = json.loads(r[1]) if r[1] else None
            except Exception:
                continue
            if not (isinstance(m, dict) and m.get("n")):
                continue
            w = m.get("weights")
            b = m.get("bias", 0.0)
            if not isinstance(w, dict):
                continue
            try:
                vals = [float(v) for v in w.values()] + [float(b)]
            except (TypeError, ValueError):
                continue
            if all(math.isfinite(v) for v in vals):
                return m
        return None

    def _rank_by_learned(self, user_id: str, out: List[Dict[str, Any]],
                         q_vec=None) -> List[Dict[str, Any]]:
        """Re-score candidates with the learned ranker (roadmap step 26).
        Cold start (no fitted ranker) returns the input unchanged, so enabling
        EVOSQL_LEARNED_RANK before any feedback is a no-op."""
        if not out:
            return out
        model = self._load_ranker(user_id)
        if not model:
            return out
        from .learn import predict, guarded_score, UTILITY_PRIOR
        scores = getattr(self, "_last_scores", {}) or {}
        base_max = max((x["score"] for x in out), default=1.0) or 1.0
        umap: Dict[str, float] = {}
        if self.learned_util_weight:
            keys = [x["key"] for x in out]
            # Read the query-conditioned utility (same centroid the write path
            # used) and fall back to the global bucket — fixes the read/write key
            # mismatch that left cluster-conditioned utilities inert.
            cid = self._query_centroid(user_id, q_vec)
            umap = self._utility_map(user_id, keys, centroid=cid)
            if cid != "g":
                for k, u in self._utility_map(user_id, keys, "g").items():
                    umap.setdefault(k, u)
        for x in out:
            base_norm = (x["score"] / base_max) if base_max else 0.0
            learned = predict(model, scores.get(x["key"], {}))
            s = guarded_score(learned, base_norm, trust=self.learned_trust,
                              epsilon=self.learned_epsilon)
            u = umap.get(x["key"])           # row-identity: used before -> useful
            if u is not None:
                s += self.learned_util_weight * (u - UTILITY_PRIOR)
            x["score"] = round(max(0.0, min(1.0, s)), 6)   # keep in [0,1]
        out.sort(key=lambda x: (-x["score"], x.get("key", "")))
        return out

    def log_query(self, user_id: str, query_id: str, query_text: str,
                  returned_keys: List[str]) -> None:
        """Record a search for later feedback. Stored under query_id with
        used_keys empty until the caller reports back. Best-effort: a
        logging failure must never break the search response."""
        # Retrieval trace (roadmap step 4): the per-candidate feature scores the
        # last search() stashed, aligned to the returned keys + their rank. This
        # is the labelled-feature backbone the closed-loop learned controller
        # (steps 24-26) and the eval harness train on. Best-effort; absent when
        # search() wasn't the immediately preceding call.
        scores = getattr(self, "_last_scores", {}) or {}
        trace = [{"key": k, "rank": i, "scores": scores.get(k, {})}
                 for i, k in enumerate(returned_keys)]
        rec: Dict[str, Any] = {
            "query_text":    query_text,
            "returned_keys": returned_keys,
            "trace":         trace,
            "used_keys":     [],
            "rating":        None,
            "ts":            time.time(),
            "user_id":       user_id,
        }
        # Query embedding (b64i8) for future offline training. Optional.
        if self.embedder is not None:
            try:
                qv = self.embedder.embed_query(query_text) \
                     if hasattr(self.embedder, "embed_query") \
                     else self.embedder.embed(query_text)
                if qv:
                    rec["query_emb"] = encode_vec(qv)
            except Exception:
                pass
        try:
            self._exec(
                f"MEMORY PUT INTO {self.feedback_store} VALUES "
                f"('{_e(user_id)}','{_e(query_id)}','{_e(json.dumps(rec))}')"
            )
        except Exception:
            pass

    def feedback(self, user_id: str, query_id: str,
                 used_keys: Optional[List[str]] = None,
                 unused_keys: Optional[List[str]] = None,
                 rating: Optional[int] = None) -> Dict[str, Any]:
        """Attach which returned keys the caller actually used to a logged
        search. Validates used_keys ⊆ returned_keys (data-quality gate from
        the eval criteria) and upserts the feedback record."""
        if not _valid_key(query_id):
            return {"error": f"unknown query_id: {query_id}"}
        rows = self._query(
            f"SELECT mem_value FROM __mem_{self.feedback_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' "
            f"AND mem_key = '{_e(query_id)}'"
        )
        if not rows or not rows[0] or not rows[0][0]:
            return {"error": f"unknown query_id: {query_id}"}
        try:
            rec = json.loads(rows[0][0])
        except Exception:
            return {"error": "corrupt feedback record"}
        returned = set(rec.get("returned_keys") or [])
        used = [k for k in (used_keys or []) if k in returned]
        dropped = [k for k in (used_keys or []) if k not in returned]
        rec["used_keys"]   = used
        rec["unused_keys"] = [k for k in (unused_keys or []) if k in returned]
        if rating is not None:
            rec["rating"] = int(rating)
        rec["feedback_ts"] = time.time()
        self._exec(
            f"MEMORY PUT INTO {self.feedback_store} VALUES "
            f"('{_e(user_id)}','{_e(query_id)}','{_e(json.dumps(rec))}')"
        )
        return {"ok": True, "query_id": query_id,
                "recorded_used": len(used),
                "ignored_not_returned": dropped}


def _snippet(text: str, max_sentences: int = 2, max_chars: int = 200) -> str:
    """A 1-2 sentence quote from a source fact, for co-presented evidence
    (Step 19). Trims on sentence boundaries, then on a word boundary if still
    too long, so the cited excerpt stays short but readable."""
    import re as _re
    s = " ".join((text or "").split())
    if not s:
        return ""
    parts = _re.split(r"(?<=[.!?])\s+", s)
    out = " ".join(parts[:max_sentences]).strip()
    if len(out) > max_chars:
        out = out[:max_chars].rsplit(" ", 1)[0].rstrip() + "…"
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
                "derived_from": {
                    "type": "array",
                    "items": {"type": "string"},
                    "description": "If this fact is SYNTHESIZED from other "
                                   "stored memories (e.g. a summary or "
                                   "inference), list their keys here. The row "
                                   "is then marked synthesized and traceable "
                                   "back to those sources; search_memory "
                                   "returns an evidence_chain for it. Optional."
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
            "leak through. Pass `tag` to narrow by topic. The response "
            "includes a `query_id`; after you finish answering, call "
            "`feedback` with that query_id and the keys you actually used "
            "so the memory ranking improves over time. "
            "IMPORTANT — co-presented evidence: a result with "
            "`synthesized: true` is a summary the system derived from other "
            "rows, not a raw fact. When you use such a row you MUST cite its "
            "sources: it carries `citation_required: true` and "
            "`evidence_excerpts` (a short quote per source). Mention or quote "
            "that evidence in your answer instead of stating the synthesized "
            "claim on its own. If the evidence does not actually support the "
            "claim, trust the evidence, not the summary."
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
                "mode":   {"type": "string", "enum": ["flat", "hierarchical"],
                            "default": "flat",
                            "description": "hierarchical searches episode "
                                "summaries first (compact overview of a "
                                "burst of activity); call expand_episode on "
                                "a result's episode_id to drill into its "
                                "source rows."},
                "include_archived": {"type": "boolean", "default": False,
                            "description": "Include faded/archived memories "
                                "(old and long unused). Off by default so "
                                "stale rows do not clutter results; turn on "
                                "to dig up something forgotten."},
                "as_of": {"type": "string",
                            "description": "Time-travel: an epoch or ISO-8601 "
                                "timestamp. Returns what was valid AT that "
                                "time — a fact later superseded is shown if it "
                                "was still valid then, and a fact not yet "
                                "created by then is hidden. Needs the validity "
                                "gate (set by reconciliation)."},
                "limit":  {"type": "integer", "default": 5},
            },
            "required": ["query"],
        },
    },
    {
        "name": "expand_episode",
        "description": ("Return the source rows behind an episode summary. "
                        "Pass the `episode_id` from a hierarchical "
                        "search_memory result to drill down from the "
                        "one-line summary to the underlying facts."),
        "inputSchema": {
            "type": "object",
            "properties": {"episode_id": {"type": "string"}},
            "required": ["episode_id"],
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
    {
        "name": "show_profile",
        "description": ("Show the user's interest profile — the clusters of "
                        "topics they care about, each with a label and a "
                        "weight (its share of their memory). Transparent view "
                        "of what personalizes their retrieval."),
        "inputSchema": {"type": "object", "properties": {}},
    },
    {
        "name": "restore_memory",
        "description": ("Un-archive a faded memory by its `key`, bringing it "
                        "back into normal search. Nothing is ever deleted by "
                        "decay, only archived; this reverses that."),
        "inputSchema": {
            "type": "object",
            "properties": {"key": {"type": "string"}},
            "required": ["key"],
        },
    },
    {
        "name": "feedback",
        "description": (
            "Report which search_memory results you actually used to "
            "answer, so the memory system learns over time. Call after a "
            "search_memory whose results informed your reply. Pass the "
            "`query_id` from that search and the keys you used; keys not "
            "in the original result set are ignored."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "query_id": {"type": "string",
                             "description": "From the search_memory response."},
                "used_keys": {"type": "array", "items": {"type": "string"},
                              "description": "Result keys you used."},
                "unused_keys": {"type": "array", "items": {"type": "string"},
                                "description": "Returned keys you did not use. Optional."},
                "rating": {"type": "integer",
                           "description": "Optional 1-5 quality rating of the result set."},
            },
            "required": ["query_id"],
        },
    },
    {
        "name": "set_language",
        "description": (
            "Set the language the assistant writes its summaries in (open-loop "
            "'what' lines and the about-me dossier). Call this when the user "
            "says e.g. '/language türkçe' or 'reply in Turkish from now on'. "
            "Persists until changed."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "language": {"type": "string",
                             "description": "e.g. türkçe, english, deutsch"},
            },
            "required": ["language"],
        },
    },
    {
        "name": "daily_brief",
        "description": (
            "Return the user's morning brief: who is waiting on them (with the "
            "thing owed), what they're waiting on others for, and the promises "
            "they made — derived from their mail/teams/calendar. Call this when "
            "the user asks what's on their plate, who's waiting, or for a "
            "catch-up / standup summary."
        ),
        "inputSchema": {"type": "object", "properties": {}},
    },
    {
        "name": "meeting_brief",
        "description": (
            "Summarise the user's meetings for a day — each meeting's time, "
            "attendees, and the open loops the user has with those attendees "
            "(what they owe / are owed), derived from their calendar + "
            "conversations. Call when the user asks about their meetings, "
            "agenda, schedule, or how to prep for who they're seeing. Defaults "
            "to today; pass `when` for another day."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "when": {
                    "type": "string",
                    "description": "Day to brief — an ISO-8601 date "
                                   "(YYYY-MM-DD) or 'today'/'tomorrow'/"
                                   "'yesterday'. Optional; defaults to today.",
                },
            },
        },
    },
    {
        "name": "review_pr",
        "description": (
            "Draft a Claude code review for a synced GitHub pull request and "
            "queue it for the user's approval. NOTHING is posted to GitHub — "
            "the draft lands in the outbox; the user inspects it "
            "(list_pending_replies) and approves it, and even then it dry-runs "
            "(no PR-posting transport is wired). Call when the user asks to "
            "review / get feedback on / look over a PR. Needs the reviewer LLM "
            "(EVOSQL_REVIEW_LLM=anthropic) and the PR's diff (fetched from "
            "GitHub when GITHUB_TOKEN is set, or pass `diff`)."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "pr": {"type": "string",
                       "description": "The PR to review: 'owner/repo#123' or a "
                                      "github.com pull-request URL."},
                "diff": {"type": "string",
                         "description": "Optional unified diff. If omitted, it "
                                        "is fetched from the GitHub API when "
                                        "GITHUB_TOKEN is set."},
            },
            "required": ["pr"],
        },
    },
    {
        "name": "release_status",
        "description": (
            "Where a GitHub repo stands release-wise: the latest release/tag, "
            "the commits landed since it, and the most recent CI/workflow runs "
            "(the deploy signal). Read-only, fetched live from the GitHub API. "
            "Call when the user asks about a repo's release state, what's "
            "shipped vs pending, or whether CI/deploys are green."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "repo": {"type": "string",
                         "description": "The repository as 'owner/name'."},
            },
            "required": ["repo"],
        },
    },
    {
        "name": "draft_changelog",
        "description": (
            "Draft a changelog for a GitHub repo from the commits since a tag "
            "(default: the latest release/tag), grouped by conventional-commit "
            "type with PR references kept. Returns text only — nothing is "
            "published anywhere. Call when the user asks for release notes or "
            "a changelog draft."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "repo": {"type": "string",
                         "description": "The repository as 'owner/name'."},
                "since": {"type": "string",
                          "description": "Tag/ref to diff from. Optional; "
                                         "defaults to the latest release/tag."},
            },
            "required": ["repo"],
        },
    },
    {
        "name": "suggest_reply",
        "description": (
            "Draft a reply for an open loop someone is waiting on the user for "
            "(the read -> suggest step after daily_brief). Grounds each draft in "
            "the actual thread, the user's self-model, and their language "
            "preference, and returns BOTH the draft and the thread transcript so "
            "you can refine or rewrite it. Strictly a suggestion — it sends "
            "nothing. Call this when the user asks 'what should I reply', 'draft "
            "a response', or wants to act on the waiting-on-you list. Defaults to "
            "the top open loops; pass loop_key to target a specific one."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "loop_key": {"type": "string",
                             "description": "Draft for one specific loop (the "
                                            "loop_key from daily_brief); omit for "
                                            "the top open loops."},
                "top": {"type": "integer",
                        "description": "How many open loops to draft for "
                                       "(default 3)."},
            },
        },
    },
    {
        "name": "queue_reply",
        "description": (
            "Queue a reply for sending — the APPROVE step of the action loop. "
            "Pass the loop_key (from daily_brief / suggest_reply) and the final "
            "body text (the user's edited/approved wording). This creates a "
            "PENDING item only; it does NOT send. The user must then call "
            "approve_send. Re-queuing the same loop replaces its pending draft."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "loop_key": {"type": "string",
                             "description": "The loop this reply answers."},
                "body": {"type": "string",
                         "description": "The reply text to queue for approval."},
                "to": {"type": "string",
                       "description": "Recipient override; defaults to the "
                                      "loop's counterparty."},
            },
            "required": ["loop_key", "body"],
        },
    },
    {
        "name": "list_pending_replies",
        "description": (
            "List replies queued and awaiting approval (nothing here has been "
            "sent). Call this to review the outbox before approving."
        ),
        "inputSchema": {"type": "object", "properties": {}},
    },
    {
        "name": "approve_send",
        "description": (
            "Approve and send a queued reply — the ONLY tool that delivers. "
            "Requires the item_id from queue_reply / list_pending_replies. "
            "Delivery is a DRY-RUN unless a real transport is wired and "
            "EVOSQL_SEND_ENABLED is set, so today this records intent without "
            "sending. Idempotent: approving an already-sent item does not "
            "re-send. Only call this with the user's explicit go-ahead."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "item_id": {"type": "string",
                            "description": "The outbox item to approve and send."},
            },
            "required": ["item_id"],
        },
    },
    {
        "name": "reject_reply",
        "description": (
            "Cancel a queued reply so it will not be sent. Requires the item_id. "
            "Errors if the item was already sent."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "item_id": {"type": "string",
                            "description": "The outbox item to reject."},
            },
            "required": ["item_id"],
        },
    },
    {
        "name": "outbox_audit",
        "description": (
            "Show the send history and outbox health: every queued / sent / "
            "rejected reply (newest first) with its result, plus counts by status "
            "and how many real sends happened in the last hour vs the rate cap. "
            "Read-only — call this to answer 'what have you sent', 'what's waiting "
            "to send', or 'are we near the send limit'."
        ),
        "inputSchema": {
            "type": "object",
            "properties": {
                "limit": {"type": "integer",
                          "description": "Max trail entries (default 50)."},
            },
        },
    },
    {
        "name": "send_scheduled",
        "description": (
            "Deliver any replies whose undo window has elapsed (replies approved "
            "with an undo delay sit in 'scheduled' until then). A background job "
            "normally does this; call it to push due ones out now. Delivers only "
            "when sending is enabled, otherwise a dry-run."
        ),
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
        # Request-scoped identity (multi-tenant). The legacy single-user
        # attributes above (user_id/db/user/pw/prefix) mirror this default
        # identity, which the stdio transport and any un-resolved request use
        # — behaviour is byte-for-byte unchanged for the single-tenant case.
        from . import tenancy
        self.default_identity = tenancy.env_identity()
        # One MemoryBackend per tenant connection, keyed by
        # Identity.backend_key = (db_user, db_name, prefix). Lazily built and
        # cached for the process lifetime. `self.backend` aliases the default
        # tenant's backend once built (back-compat for introspection).
        self._backends: Dict[Tuple[str, ...], MemoryBackend] = {}
        self.backend: Optional[MemoryBackend] = None
        self.embedded = None      # EmbeddedEvolutionDB handle, if EVOSQL_EMBEDDED
        # The HTTP transport serves requests on many threads (ThreadingHTTPServer),
        # so the lazy first-connect must be serialized: without this lock two
        # concurrent first requests both see a missing backend and race —
        # double-spawning the embedded DB and clobbering the registry/self.embedded.
        self._connect_lock = threading.Lock()
        # Action loop: wire opt-in send transports. No-op unless the operator set
        # EVOSQL_SEND_ENABLED + EVOSQL_SEND_CHANNELS — outbox stays dry-run by default.
        from . import transports
        transports.register_from_env()

    def _backend_for(self, identity: "tenancy.Identity") -> MemoryBackend:
        """Return (lazily build + cache) the MemoryBackend for ``identity``.

        Double-checked locking: the common case (tenant already connected)
        stays lock-free; the first connect per tenant is serialized so only one
        thread spawns the embedded DB and builds each backend. Each tenant
        connects as its own DB user and (when issue_use) lands on its own
        database via ``USE`` — the engine then enforces isolation.
        """
        key = identity.backend_key
        b = self._backends.get(key)
        if b is not None:
            return b
        with self._connect_lock:
            b = self._backends.get(key)
            if b is not None:
                return b
            # Zero-Docker: with EVOSQL_EMBEDDED set, spawn a local EvolutionDB
            # once (shared by all tenants) if nothing is already serving the
            # port (no-op + harmless otherwise).
            if self.embedded is None:
                from . import embedded
                self.embedded = embedded.maybe_start(self.host, self.port)
            # Build fully before publishing into the registry, so a racing
            # reader never sees a half-initialized backend.
            backend = MemoryBackend(
                self.host, self.port, identity.db_user, identity.db_password,
                identity.db_name, identity.prefix,
                embedder=self.embedder, tagger=self.tagger,
                reranker=self.reranker, lexical=self.lexical,
                rerank_mode=self.rerank_mode,
                embedder2=self.embedder2,
                query_transform=self.query_transform,
                use_database=(identity.db_name if identity.issue_use else None))
            self._backends[key] = backend
            if key == self.default_identity.backend_key:
                self.backend = backend
            return backend

    def _connect(self) -> MemoryBackend:
        """Back-compat shim: connect the default tenant's backend.

        Used by the stdio warm-up and the HTTP transport's startup probe.
        Per-request paths call ``_backend_for(identity)`` directly.
        """
        return self._backend_for(self.default_identity)

    # -- multi-tenant token resolution -------------------------------
    def multitenant_enabled(self) -> bool:
        """Tenant resolution is active only when EVOSQL_TENANT_SECRET is set."""
        from . import tenancy
        return tenancy.multitenant_enabled()

    def resolve_identity(self, token: str) -> "Optional[tenancy.Identity]":
        """Resolve a bearer token to a tenant Identity via the control-plane
        registry (read on the admin backend), or None if the token is not a
        known/unexpired tenant token. The transport falls back to the legacy
        shared-secret path / env default when this returns None."""
        if not token or not self.multitenant_enabled():
            return None
        from . import tenancy
        admin = self._backend_for(self.default_identity)
        return tenancy.identity_for_token(token, admin)

    # Tools that mutate tenant state or actually deliver a message. A `viewer`
    # is read-only and is denied these; `member`/`admin` may run them. The
    # cross-tenant boundary is enforced by the engine (per-tenant DB+GRANT);
    # this is the in-tenant RBAC layer only.
    _MUTATING_TOOLS = frozenset({
        "save_memory", "forget", "restore_memory", "set_language", "feedback",
        "queue_reply", "approve_send", "reject_reply", "send_scheduled",
        "review_pr",   # drafts + queues an outbox item -> write; viewers denied
    })

    def _rbac_error(self, name: str,
                     identity: "tenancy.Identity") -> Optional[Dict[str, Any]]:
        """Return an error dict if ``identity`` may not run tool ``name``,
        else None. Fail-closed on writes: only admin/member may mutate."""
        if name in self._MUTATING_TOOLS and not identity.has_role("admin", "member"):
            return {"error": f"permission denied: role(s) {list(identity.roles)} "
                             f"may not run '{name}' (read-only)"}
        return None

    # -- tool dispatch ------------------------------------------------
    def _call_tool(self, name: str, args: Dict[str, Any],
                    identity: "Optional[tenancy.Identity]" = None) -> Dict[str, Any]:
        # Resolve the request-scoped principal. Stdio and any un-resolved
        # request use the env-pinned default identity (single-tenant compat).
        ident = identity or self.default_identity
        deny = self._rbac_error(name, ident)
        if deny is not None:
            return deny
        b = self._backend_for(ident)
        uid = ident.user_id
        if name == "save_memory":
            fact = args.get("fact") or ""
            if not fact.strip():
                return {"error": "save_memory requires non-empty `fact`"}
            tags = args.get("tags") or []
            if isinstance(tags, str):
                tags = [tags]
            derived_from = args.get("derived_from") or []
            if isinstance(derived_from, str):
                derived_from = [derived_from]
            key = b.save(uid, fact, tags, derived_from=derived_from)
            return {"ok": True, "key": key, "user_id": uid}

        if name == "search_memory":
            q = args.get("query") or ""
            if not q.strip():
                return {"error": "search_memory requires non-empty `query`"}
            tag    = args.get("tag")
            sender = args.get("sender")
            mode   = (args.get("mode") or "flat").lower()
            limit  = int(args.get("limit") or 5)
            inc_arch = bool(args.get("include_archived"))
            # As-of time travel (step 22): an epoch or ISO-8601 timestamp;
            # superseded rows that were valid AT that time are kept.
            as_of = _parse_as_of(args.get("as_of"))
            results = b.search(uid, q,
                               limit=limit, tag=tag, sender=sender, mode=mode,
                               include_archived=inc_arch, as_of=as_of)
            # Implicit-feedback hook (Step 11): tag the response with a
            # query_id and log (query -> returned keys) so the caller can
            # later report which keys it used via the feedback tool. The log is
            # a MEMORY PUT (a write), so a read-only `viewer` must NOT trigger
            # it — gate by write role, not by tool name, so search stays
            # genuinely side-effect-free for read-only principals.
            query_id = uuid.uuid4().hex
            if ident.has_role("admin", "member"):
                b.log_query(uid, query_id, q,
                            [r.get("key", "") for r in results])
            return {"ok": True,
                    "user_id": uid,
                    "query_id": query_id,
                    "results": results}

        if name == "feedback":
            query_id = args.get("query_id") or ""
            if not query_id:
                return {"error": "feedback requires `query_id` "
                                 "(from a search_memory response)"}
            used   = args.get("used_keys") or []
            unused = args.get("unused_keys") or []
            if isinstance(used, str):   used = [used]
            if isinstance(unused, str): unused = [unused]
            return b.feedback(uid, query_id,
                              used_keys=used, unused_keys=unused,
                              rating=args.get("rating"))

        if name == "expand_episode":
            episode_id = args.get("episode_id") or ""
            if not episode_id:
                return {"error": "expand_episode requires `episode_id`"}
            return b.expand_episode(uid, episode_id)

        if name == "recent_memories":
            limit = int(args.get("limit") or 10)
            return {"ok": True, "user_id": uid,
                    "results": b.recent(uid, limit)}

        if name == "forget":
            key = args.get("key") or ""
            if not key:
                return {"error": "forget requires `key`"}
            ok = b.forget(uid, key)
            return {"ok": ok, "key": key}

        if name == "list_tags":
            return {"ok": True, "user_id": uid,
                    "tags": b.list_tags(uid)}

        if name == "show_profile":
            return {"ok": True, "user_id": uid,
                    "profile": b.show_profile(uid)}

        if name == "restore_memory":
            key = args.get("key") or ""
            if not key:
                return {"error": "restore_memory requires `key`"}
            return {"ok": b.restore(uid, key), "key": key}

        if name == "set_language":
            from . import prefs
            lang = args.get("language") or ""
            if not lang.strip():
                return {"error": "set_language requires `language`"}
            lang = prefs.set_language(b, uid, lang)
            return {"ok": True, "language": lang,
                    "note": f"Summaries will be written in {lang} from the next "
                            f"open_loops/self_model run."}

        if name == "daily_brief":
            from . import brief, prefs
            data = brief.collect(b, uid)
            _lang, was_set = prefs.get_language(b, uid)
            text = brief.render(data, name=uid.split("_")[0],
                                lang_set=was_set)
            return {"ok": True, "brief": text,
                    "waiting_on_you": len(data["waiting_me"])}

        if name == "meeting_brief":
            from . import meeting, prefs
            data = meeting.collect(b, uid, when=args.get("when"))
            lang, _was_set = prefs.get_language(b, uid)
            text = meeting.render(data, name=uid.split("_")[0], lang=lang)
            return {"ok": True, "user_id": uid, "brief": text,
                    "day": data["day"], "meetings": data["count"]}

        if name == "review_pr":
            from . import codereview, prefs
            pr = args.get("pr") or ""
            lang, _was_set = prefs.get_language(b, uid)
            return codereview.review_pr(b, uid, pr,
                                        diff=args.get("diff"), language=lang)

        if name == "release_status":
            from . import release
            return release.release_status(args.get("repo") or "")

        if name == "draft_changelog":
            from . import release
            return release.draft_changelog(args.get("repo") or "",
                                           since=args.get("since"))

        if name == "suggest_reply":
            from . import suggest
            top = args.get("top")
            try:
                top = int(top) if top is not None else 3
            except (TypeError, ValueError):
                top = 3
            res = suggest.suggest_replies(b, uid, top=top,
                                          loop_key=args.get("loop_key"))
            return {"ok": True, "user_id": uid, **res}

        if name == "queue_reply":
            from . import outbox, suggest
            loop_key = args.get("loop_key") or ""
            body = args.get("body") or ""
            if not loop_key or not body.strip():
                return {"error": "queue_reply requires `loop_key` and `body`"}
            loop = suggest._load_loops(b, uid).get(loop_key, {})
            rcpt = outbox.recipient_for(b, uid, loop)
            to_arg = args.get("to") or ""
            to_val = to_arg or rcpt["to"]
            to_email = (to_arg if "@" in to_arg else None) or rcpt["to_email"]
            try:
                item = outbox.queue(b, uid, loop_key, body,
                                    channel=loop.get("source"),
                                    source=loop.get("source"),
                                    to=to_val, to_email=to_email,
                                    thread_id=loop.get("thread_key"),
                                    subject=loop.get("subject"))
            except ValueError as exc:
                return {"error": str(exc)}
            return {"ok": True, "id": item["id"], "queued": item,
                    "note": "pending approval — nothing sent. Call approve_send "
                            "with this id to deliver."}

        if name == "list_pending_replies":
            from . import outbox
            return {"ok": True, "user_id": uid,
                    "pending": outbox.list_pending(b, uid)}

        if name == "approve_send":
            from . import outbox
            item_id = args.get("item_id") or ""
            if not item_id:
                return {"error": "approve_send requires `item_id`"}
            return outbox.approve_send(b, uid, item_id)

        if name == "reject_reply":
            from . import outbox
            item_id = args.get("item_id") or ""
            if not item_id:
                return {"error": "reject_reply requires `item_id`"}
            return outbox.reject(b, uid, item_id)

        if name == "outbox_audit":
            from . import outbox
            limit = args.get("limit")
            try:
                limit = int(limit) if limit is not None else 50
            except (TypeError, ValueError):
                limit = 50
            return {"ok": True, "user_id": uid,
                    "stats": outbox.stats(b, uid),
                    "trail": outbox.audit(b, uid, limit=limit)}

        if name == "send_scheduled":
            from . import outbox
            results = outbox.flush_scheduled(b, uid)
            return {"ok": True, "user_id": uid,
                    "delivered": sum(1 for r in results if r.get("sent")),
                    "results": results}

        return {"error": f"unknown tool: {name}"}

    # -- JSON-RPC dispatch -------------------------------------------
    def handle(self, msg: Dict[str, Any],
                identity: "Optional[tenancy.Identity]" = None
                ) -> Optional[Dict[str, Any]]:
        # `identity` is the request-scoped principal resolved by the transport
        # (HTTP bearer → tenant). stdio and un-resolved requests pass None and
        # fall back to the env-pinned default identity (single-tenant compat).
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
                result = self._call_tool(name, args, identity)
            except Exception as e:
                # Do NOT echo the raw exception to the client — engine error
                # text can carry table/column names and fragments of the
                # inlined SQL. Log the full traceback + a correlation ref
                # server-side; return only the ref to the caller.
                ref = uuid.uuid4().hex[:12]
                print(f"[mcp-evosql] tool {name} failed (ref {ref}): {e}",
                      file=sys.stderr, flush=True)
                traceback.print_exc(file=sys.stderr)
                return self._ok(msg_id, {
                    "content": [{"type": "text",
                                    "text": f"tool {name} failed (ref {ref})"}],
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
