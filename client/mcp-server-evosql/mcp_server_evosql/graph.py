"""
graph — knowledge graph + 2-hop spreading activation (Adım 15).

Built on the Adım 14 entity catalog: every memory row links the entities it
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

# Predicate vocabulary (~14 verbs). Each maps a set of surface verb stems
# (TR + EN) to a canonical predicate. Order matters: first match wins.
PREDICATES = "worked_on mentioned replied_to assigned escalated_to owns manages related_to".split()
_VERB_LEXICON: List[Tuple[str, Tuple[str, ...]]] = [
    ("worked_on",    ("worked on", "working on", "worked", "çalıştı", "çalışıyor",
                      "üzerinde", "geliştirdi", "developed", "built")),
    ("replied_to",   ("replied to", "replied", "responded", "yanıt", "cevap",
                      "döndü")),
    ("escalated_to", ("escalated to", "escalated", "yükseltildi", "iletildi",
                      "escalate")),
    ("assigned",     ("assigned to", "assigned", "atandı", "atadı",
                      "görevlendirildi", "verildi")),
    ("manages",      ("manages", "managed", "yönetiyor", "yönetti", "yönetir",
                      "lead", "leads", "led")),
    ("owns",         ("owns", "owner", "sahibi", "ait")),
    ("mentioned",    ("mentioned", "bahsetti", "söz etti", "andı", "dedi")),
]
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
    for pred, stems in _VERB_LEXICON:
        if any(s in gap for s in stems):
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
            edge["weight"] = round(
                float(edge.get("weight", 0.0)) + _recency(ts, now), 4)
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
            # keep the in-memory adjacency warm if it was already built
            if self._adj is not None:
                self._adj.setdefault(subj, {})
                self._adj.setdefault(obj, {})
                self._adj[subj][obj] = edge["weight"]
                self._adj[obj][subj] = edge["weight"]
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
