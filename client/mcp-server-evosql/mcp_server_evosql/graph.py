"""
graph — knowledge graph + 2-hop spreading activation (Step 15).

Built on the Step 14 entity catalog: every memory row links the entities it
mentions into a small typed graph, so a relational query ("who is active on
project X") can reach rows that never contain the query keyword — they're
reached by following edges out of the query's entities.

Edges (one MEMORY STORE per prefix, <prefix>_graph_edges):
  key   = subject_id|predicate|object_id
  value = {subject_id, predicate, object_id, weight, source_rows[], ts}
Weight = co-occurrence count with recency decay; predicate comes from a small
verb lexicon between the two entity spans, defaulting to `related_to`.

Retrieval: resolve the query's entities -> seed activation 1.0 -> spread for
`depth` hops (activation × edge_weight, halved per hop, cycle-guarded) ->
the rows that mention an activated entity get a boost proportional to that
entity's activation. server.search() injects those rows into the candidate
pool and blends the boost into the score (gated by EVOSQL_GRAPH_BOOST).
"""
from __future__ import annotations

import json
import math
import time
from typing import Any, Callable, Dict, List, Optional, Sequence, Tuple

from . import locales

# Canonical predicate taxonomy (language-neutral ids). The surface verb stems
# that map onto each are LANGUAGE-SPECIFIC and live in the locale resources
# (locales.heuristics().predicate_keywords, merged across active locales). The
# order below is the match precedence — first predicate whose stems hit wins.
PREDICATES = "worked_on mentioned replied_to assigned escalated_to owns manages supersedes contradicts related_to".split()
_VERB_ORDER = ("worked_on", "replied_to", "escalated_to", "assigned",
               "manages", "owns", "mentioned")
DEFAULT_PREDICATE = "related_to"
_DECAY_HALFLIFE_DAYS = 30.0   # edge-weight recency decay
_HOP_DECAY = 0.5              # activation passed on per hop
MAX_SOURCE_ROWS = 50          # cap an edge's source_rows so it can't bloat
                              # past the 8 KB statement cap (weight still grows)
MAX_BOOST_ROWS = 100          # cap rows the boost injects (a hub entity could
                              # otherwise return thousands → huge IN() fetch)


def _recency(ts: float, now: float) -> float:
    age_days = max(0.0, (now - ts) / 86400.0)
    return math.exp(-math.log(2.0) * age_days / _DECAY_HALFLIFE_DAYS)


def _predicate_between(text: str, a_end: int, b_start: int) -> str:
    """Pick the predicate from the words between two entity spans (subject
    ends at a_end, object starts at b_start). Falls back to related_to."""
    if b_start <= a_end:
        return DEFAULT_PREDICATE
    gap = text[a_end:b_start].lower()
    if len(gap) > 60:                       # too far apart to be one relation
        return DEFAULT_PREDICATE
    pk = locales.heuristics().predicate_keywords
    for pred in _VERB_ORDER:
        if any(s in gap for s in pk.get(pred, ())):
            return pred
    return DEFAULT_PREDICATE


def extract_triples(text: str, mentions: List[dict]
                    ) -> List[Tuple[str, str, str]]:
    """Triples (subject_id, predicate, object_id) between the entities in one
    row. Every ordered pair co-occurs, so it yields at least a related_to
    edge; adjacent pairs get a typed predicate when the gap names a verb.
    Self-pairs and duplicate (subj,obj) keep only the most specific predicate."""
    ents = [m for m in mentions if m.get("entity_id")]
    ents.sort(key=lambda m: m.get("start", 0))
    best: Dict[Tuple[str, str], str] = {}
    for i in range(len(ents)):
        for j in range(i + 1, len(ents)):
            a, b = ents[i], ents[j]
            if a["entity_id"] == b["entity_id"]:
                continue
            pred = _predicate_between(text, a.get("end", 0), b.get("start", 0))
            pair = (a["entity_id"], b["entity_id"])
            # prefer a typed predicate over the related_to default
            if pair not in best or (best[pair] == DEFAULT_PREDICATE
                                    and pred != DEFAULT_PREDICATE):
                best[pair] = pred
    return [(s, p, o) for (s, o), p in best.items()]


class GraphStore:
    def __init__(self, exec_fn: Callable[[str], None],
                 query_fn: Callable[[str], List[List[str]]],
                 ns: str, edge_store: str, mention_store: str):
        self._exec = exec_fn
        self._query = query_fn
        self.ns = ns
        self.edge_store = edge_store
        self.men_store = mention_store
        self._adj: Optional[Dict[str, Dict[str, float]]] = None  # undirected
        self._mentions_by_entity: Optional[Dict[str, List[str]]] = None
        self._edges: Optional[Dict[str, dict]] = None   # edge cache (write path)
        self._dirty_edges: set = set()                  # edge keys to flush

    # -- write path ---------------------------------------------------
    def _edge_cache(self) -> Dict[str, dict]:
        """All edges by key, loaded once. Replaces a per-edge SELECT in the
        hot write loop (the round-trips were the cold-start bottleneck)."""
        if self._edges is not None:
            return self._edges
        from .server import _e
        self._edges = {}
        for k, v in self._query(
                f"SELECT mem_key, mem_value FROM __mem_{self.edge_store} "
                f"WHERE mem_namespace = '{_e(self.ns)}' LIMIT 500000") or []:
            try:
                self._edges[k] = json.loads(v)
            except Exception:
                continue
        return self._edges

    def add_edges_from_row(self, mem_key: str, mentions: List[dict],
                           text: str, ts: float, write: bool = True) -> int:
        cache = self._edge_cache()
        triples = extract_triples(text, mentions)
        now = time.time()
        for subj, pred, obj in triples:
            key = f"{subj}|{pred}|{obj}"
            edge = cache.get(key)
            if edge is None:
                edge = {"subject_id": subj, "predicate": pred,
                        "object_id": obj, "weight": 0.0,
                        "source_rows": [], "ts": ts}
                cache[key] = edge
            delta = _recency(ts, now)
            edge["weight"] = round(float(edge.get("weight", 0.0)) + delta, 4)
            # weight keeps growing with co-occurrence; the source_rows sample
            # is capped so the record can't bloat past the statement cap.
            if mem_key not in edge["source_rows"] \
                    and len(edge["source_rows"]) < MAX_SOURCE_ROWS:
                edge["source_rows"].append(mem_key)
            edge["ts"] = max(float(edge.get("ts", ts)), ts)
            # Defer the write: a popular edge is touched on every co-occurrence,
            # so writing through here meant re-writing it hundreds of times.
            # Mark it dirty and flush each unique edge once.
            if write:
                self._dirty_edges.add(key)
            # Keep the in-memory adjacency warm if it was already built. ADD the
            # delta (not assign edge["weight"]): the load path SUMS the weights
            # of all predicate edges between a pair, so a single edge's running
            # weight would undercount when two predicates link the same pair.
            # Accumulating the same delta keeps the warm adjacency identical to
            # a fresh reload.
            if self._adj is not None:
                self._adj.setdefault(subj, {})
                self._adj.setdefault(obj, {})
                self._adj[subj][obj] = round(
                    self._adj[subj].get(obj, 0.0) + delta, 4)
                self._adj[obj][subj] = round(
                    self._adj[obj].get(subj, 0.0) + delta, 4)
        return len(triples)

    def flush(self) -> int:
        """Persist every edge touched since the last flush (one write each)."""
        from .entities import _safe_put
        cache = self._edges or {}
        n = 0
        for key in self._dirty_edges:
            edge = cache.get(key)
            if edge and _safe_put(self._exec, self.edge_store, self.ns, key, edge):
                n += 1
        self._dirty_edges.clear()
        return n

    # -- read path ----------------------------------------------------
    def _load(self) -> None:
        if self._adj is not None:
            return
        from .server import _e
        self._adj = {}
        rows = self._query(
            f"SELECT mem_value FROM __mem_{self.edge_store} "
            f"WHERE mem_namespace = '{_e(self.ns)}' LIMIT 200000") or []
        for (v,) in [(r[0],) for r in rows]:
            try:
                e = json.loads(v) if not isinstance(v, dict) else v
            except Exception:
                continue
            s, o, w = e["subject_id"], e["object_id"], float(e.get("weight", 0))
            self._adj.setdefault(s, {})
            self._adj.setdefault(o, {})
            self._adj[s][o] = self._adj[s].get(o, 0.0) + w
            self._adj[o][s] = self._adj[o].get(s, 0.0) + w

    def spreading_activation(self, seeds: Sequence[str], depth: int = 2,
                             hop_decay: float = _HOP_DECAY) -> Dict[str, float]:
        """BFS activation from the seed entities. A seed starts at 1.0; each
        hop multiplies by the (normalized) edge weight and `hop_decay`. Cycle
        detection: an entity keeps its first (highest) activation and is not
        re-expanded, so a cyclic graph can't feed back forever."""
        self._load()
        act: Dict[str, float] = {s: 1.0 for s in seeds if s}
        frontier = list(act.keys())
        for _hop in range(depth):
            nxt: Dict[str, float] = {}
            for node in frontier:
                base = act[node]
                nbrs = self._adj.get(node, {})
                wsum = sum(nbrs.values()) or 1.0
                for nb, w in nbrs.items():
                    flow = base * (w / wsum) * hop_decay
                    if flow <= 1e-4:
                        continue
                    if nb in act and act[nb] >= flow:
                        continue          # already reached at >= strength
                    if flow > nxt.get(nb, 0.0):
                        nxt[nb] = flow
            advanced = []
            for nb, a in nxt.items():
                if a > act.get(nb, 0.0):
                    act[nb] = a
                    advanced.append(nb)
            frontier = advanced
            if not frontier:
                break
        return act

    def spreading_activation_fan(self, seeds: Sequence[str], depth: int = 2,
                                 hop_decay: float = _HOP_DECAY
                                 ) -> Dict[str, float]:
        """Fan-normalised spreading activation (ACT-R fan effect, roadmap step
        11). The strength a cue j passes to an associated item i is
        S_ji = max(0, S - ln(fan_j)) with S = ln(total entities), so a HUB cue
        (high fan) self-damps: each of its many neighbours receives less than the
        sole neighbour of a narrow cue. Source weight W = 1/|seeds| is split over
        the resolved query entities. Returns {entity_id: accumulated strength} in
        log-additive space — the +Spread term of A_i (step 10). Distinct from
        spreading_activation (kept for the legacy graph boost); this one removes
        the need for the MAX_BOOST_ROWS flood cap because hubs no longer flood."""
        self._load()
        adj = self._adj or {}
        seeds_in = [s for s in seeds if s and s in adj]
        if not seeds_in:
            return {}
        S = math.log(max(len(adj), 2))
        W = 1.0 / len(seeds_in)
        seedset = set(seeds_in)
        spread: Dict[str, float] = {}
        frontier: Dict[str, float] = {s: W for s in seeds_in}
        for _hop in range(depth):
            nxt: Dict[str, float] = {}
            for j, aj in frontier.items():
                fan_j = len(adj.get(j, {})) or 1
                s_ji = S - math.log(fan_j)
                if s_ji <= 0.0:                  # cue too connected to inform
                    continue
                for i in adj.get(j, {}):
                    if i in seedset:
                        continue
                    flow = aj * s_ji * hop_decay
                    if flow <= 1e-9:
                        continue
                    spread[i] = spread.get(i, 0.0) + flow
                    if flow > nxt.get(i, 0.0):
                        nxt[i] = flow
            frontier = nxt
            if not frontier:
                break
        return spread

    def personalized_pagerank(self, seeds: Sequence[str], *,
                              damping: float = 0.85, iters: int = 20,
                              eps: float = 1e-6) -> Dict[str, float]:
        """Personalised PageRank over the entity graph (HippoRAG, roadmap step
        12): the restart vector is the resolved query entities, so the
        stationary distribution r = (1-d)·p + d·M·r is each entity's
        query-conditioned associative relevance — a principled multi-hop signal
        replacing the fixed 2-hop halving. Edge weights (already recency-decayed)
        define the column-stochastic transition; power-iterated to convergence.
        Returns {entity_id: stationary mass}. Kept separate from the legacy boost
        path; the cutover (step 14) chooses which feeds A_i."""
        self._load()
        adj = self._adj or {}
        seeds_in = [s for s in seeds if s and s in adj]
        if not seeds_in:
            return {}
        p = {s: 1.0 / len(seeds_in) for s in seeds_in}     # restart vector
        wsum = {j: sum(nbrs.values()) for j, nbrs in adj.items()}
        r = dict(p)
        for _ in range(iters):
            nr: Dict[str, float] = {}
            for s, pv in p.items():                        # teleport
                nr[s] = nr.get(s, 0.0) + (1.0 - damping) * pv
            for j, rj in r.items():                        # propagate
                ws = wsum.get(j, 0.0)
                if ws <= 0.0:
                    continue                               # dangling: leak (ok)
                share = damping * rj
                for i, w in adj.get(j, {}).items():
                    nr[i] = nr.get(i, 0.0) + share * (w / ws)
            diff = sum(abs(nr.get(k, 0.0) - r.get(k, 0.0))
                       for k in set(nr) | set(r))
            r = nr
            if diff < eps:
                break
        return r

    def _mention_index(self) -> Dict[str, List[str]]:
        if self._mentions_by_entity is not None:
            return self._mentions_by_entity
        from .server import _e
        idx: Dict[str, List[str]] = {}
        rows = self._query(
            f"SELECT mem_value FROM __mem_{self.men_store} "
            f"WHERE mem_namespace = '{_e(self.ns)}' LIMIT 500000") or []
        for r in rows:
            try:
                m = json.loads(r[0]) if r[0] else None
            except Exception:
                m = None
            if not m:
                continue
            idx.setdefault(m["entity_id"], []).append(m["mem_key"])
        self._mentions_by_entity = idx
        return idx

    def note_mentions(self, mem_key: str, mentions: List[dict]) -> None:
        """Keep the warm mention index current after a new row is saved in this
        long-lived process. The GraphStore is cached per-namespace for the
        process lifetime, so without this the index — built once on the first
        search — never sees rows saved afterward, and the graph boost can never
        reach them. No-op until the index is first built (the next search builds
        it fresh, including this row)."""
        if self._mentions_by_entity is None:
            return
        for m in mentions or ():
            eid = m.get("entity_id")
            if not eid:
                continue
            lst = self._mentions_by_entity.setdefault(eid, [])
            if mem_key not in lst:
                lst.append(mem_key)

    def rows_for_entities(self, activations: Dict[str, float],
                          seeds: Sequence[str] = (),
                          limit: int = MAX_BOOST_ROWS) -> Dict[str, float]:
        """Map activated entities to the rows that mention them. A row's boost
        is the max activation among the entities it mentions. Seed entities
        contribute their own rows too (so the query's own entity still ranks),
        but those carry no extra lift beyond what keyword/embedding already
        gives — only the *reached* (non-seed) entities add recall.

        Returns at most `limit` rows (the highest-boost ones). A hub entity
        can mention thousands of rows; injecting them all would balloon the
        downstream IN(...) fetch and add noise, so we keep only the top slice."""
        idx = self._mention_index()
        seedset = set(seeds)
        boost: Dict[str, float] = {}
        for eid, a in activations.items():
            if a <= 0:
                continue
            # de-emphasize seed rows: their recall is already covered by the
            # lexical/dense channels; the graph's job is the 1-2 hop reach.
            scale = 0.3 if eid in seedset else 1.0
            for mk in idx.get(eid, ()):
                boost[mk] = max(boost.get(mk, 0.0), a * scale)
        if len(boost) > limit:
            top = sorted(boost.items(), key=lambda kv: -kv[1])[:limit]
            boost = dict(top)
        return boost
