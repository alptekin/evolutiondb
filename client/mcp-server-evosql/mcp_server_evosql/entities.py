"""
entities — entity extraction + canonical-id resolution (Step 14).

Two-stage extraction:
  1. regex + heuristic — email / phone / IBAN / TC kimlik / organization /
     person-name patterns (TR + EN). Deterministic, no deps.
  2. optional local-LLM second pass (EVOSQL_ENTITY_LLM = "ollama" | "anthropic")
     to catch what the regex misses; best-effort, off by default.

Canonicalization folds surface forms that refer to the same thing into one
entity id: normalized edit-distance < 2 (or a first-name + last-initial match
for people) merges the new mention into an existing entity as an alias.

Storage (per MCP store prefix):
  <prefix>_entities         key=entity_id  -> {id, canonical, aliases[], type,
                                               first_seen, last_seen, mention_count}
  <prefix>_entity_mentions  key=mem_key|entity_id|start
                                          -> {mem_key, entity_id, start, end,
                                              confidence, surface}

Extraction runs inline (best-effort) after save_memory and as a backfill CLI:
  python -m mcp_server_evosql.entities --namespace alptekin_topal [--dry-run]
"""
from __future__ import annotations

import argparse
import json
import os
import re
import sys
import time
import unicodedata
from typing import Any, Callable, Dict, List, Optional, Tuple

from . import locales

# Size bounds so a single record never approaches the engine's 8 KB statement
# cap (which, when exceeded, makes the engine reject the write and drop the
# connection — killing a whole batch job).
MAX_NAME_LEN = 200      # stored surface / canonical length
MAX_ALIASES = 25        # alias list per entity
MAX_PUT_BYTES = 7000    # skip a write whose value would risk the cap


def _safe_put(exec_fn, store, ns, key, value) -> bool:
    """MEMORY PUT that skips an over-large value instead of letting the engine
    reject it and drop the connection. Returns True if written."""
    from .server import _e
    s = json.dumps(value)
    if len(s) + len(key) + len(ns) > MAX_PUT_BYTES:
        return False
    exec_fn(f"MEMORY PUT INTO {store} VALUES "
            f"('{_e(ns)}','{_e(key)}','{_e(s)}')")
    return True


# ---------------------------------------------------------------- #
#  regex patterns                                                   #
# ---------------------------------------------------------------- #
# De-ambiguated AND length-bounded to RFC limits so it is linear-time. The old
# `[A-Za-z0-9._%+\-]+@[A-Za-z0-9.\-]+\.[A-Za-z]{2,}` had unbounded greedy runs +
# two adjacent '.'-matching classes, giving O(n^2) backtracking on a long input
# (~8.5s for 80 KB). Bounding the local part (<=64), each domain label (<=63)
# and the TLD caps the work per start position, so a malicious long fact can't
# stall the (globally-serialized) engine. Domain is now (label.)+TLD.
_RE_EMAIL = re.compile(
    r"[A-Za-z0-9._%+\-]{1,64}@(?:[A-Za-z0-9-]{1,63}\.){1,8}[A-Za-z]{2,24}")
# Cap the text fed to regex extraction — NER needs only the first few KB, and an
# uncapped fact (no length limit on save_memory) is attacker-reachable DoS fuel.
MAX_EXTRACT_CHARS = 20000
# The structured-id detectors (IBAN / phone / national id), the org-suffix and
# person/honorific patterns, the Title-case letter class and the stop-title set
# are all LANGUAGE-SPECIFIC, so they live in the locale resources (runtime data)
# and are compiled from the union of the active input locales — see
# locales.heuristics(). The email pattern above is language-neutral and stays.

Mention = Dict[str, Any]   # {surface, type, start, end, confidence}


# ---------------------------------------------------------------- #
#  helpers                                                          #
# ---------------------------------------------------------------- #
def _norm(s: str) -> str:
    """Lowercase + strip diacritics + collapse non-alnum to single spaces.
    Used for canonical matching so 'Jane G.' and 'jane g' compare equal."""
    # U+0131 (dotless i) has no NFKD decomposition, so it would survive
    # lowercasing and then be deleted by the [^a-z] collapse below, fragmenting
    # a word into pieces. Fold it to 'i' first so such names normalize whole
    # (NFKD already handles the other accented letters via combining-mark strip).
    s = s.lower().replace("ı", "i")
    s = unicodedata.normalize("NFKD", s)
    s = "".join(c for c in s if not unicodedata.combining(c))
    s = re.sub(r"[^a-z0-9]+", " ", s).strip()
    return s


def _edit_distance(a: str, b: str) -> int:
    if a == b:
        return 0
    if not a:
        return len(b)
    if not b:
        return len(a)
    prev = list(range(len(b) + 1))
    for i, ca in enumerate(a, 1):
        cur = [i]
        for j, cb in enumerate(b, 1):
            cur.append(min(prev[j] + 1, cur[j - 1] + 1,
                           prev[j - 1] + (ca != cb)))
        prev = cur
    return prev[-1]


def _honorifics() -> frozenset:
    """Courtesy titles that are NOT surnames (so they're ignored when deciding
    whether a surface is a bare first-name reference). Reference vocabulary from
    the active input locales — already in the normalized form `_norm` produces."""
    return locales.heuristics().honorific_tokens


def _person_keys(canon: str) -> List[str]:
    """Strong person match keys: normalized full name AND first+last-initial
    (so 'Jane Gardner' and 'Jane G.' collapse).

    NB: deliberately NO bare-first-name key here. Indexing/querying on the
    first name alone fused any two people sharing a first name ('John Doe' and
    'John Smith') into one entity_id, corrupting the catalog and everything
    built on it (graph edges, episode 'who', salience). Folding a bare
    first-name / courtesy-title reference onto a full name is handled separately
    and asymmetrically via the first-name index — see EntityStore._fname /
    resolve()."""
    n = _norm(canon)
    parts = n.split()
    keys = [n]
    if len(parts) >= 2:
        keys.append(parts[0] + " " + parts[-1][0])      # first + last initial
    return keys


def _first_token(canon: str) -> Optional[str]:
    """First non-honorific token of a normalized person name (the 'first
    name'), used to populate/query the asymmetric first-name index."""
    hon = _honorifics()
    parts = [p for p in _norm(canon).split() if p not in hon]
    return parts[0] if parts else None


def _first_name_ref(canon: str) -> Optional[str]:
    """If `canon` is a *bare* first-name reference — just a first name, or a
    first name + courtesy title — return the normalized first name; otherwise
    None. A genuine first+surname has >=2 non-title tokens and returns None, so
    it never folds onto a same-first-name person. This is what makes the
    first-name fold safe (asymmetric): only a bare reference *queries* the
    index; full names only *populate* it."""
    hon = _honorifics()
    parts = [p for p in _norm(canon).split() if p not in hon]
    return parts[0] if len(parts) == 1 else None


# ---------------------------------------------------------------- #
#  stage 1 — regex + heuristic extraction                           #
# ---------------------------------------------------------------- #
def _add(out: List[Mention], seen: List[Tuple[int, int]], surface: str,
         typ: str, start: int, end: int, conf: float) -> None:
    # drop spans that overlap an already-accepted (higher-priority) mention
    for s, e in seen:
        if start < e and end > s:
            return
    out.append({"surface": surface.strip(), "type": typ,
                "start": start, "end": end, "confidence": conf})
    seen.append((start, end))


def extract_regex(text: str) -> List[Mention]:
    out: List[Mention] = []
    seen: List[Tuple[int, int]] = []
    text = (text or "")[:MAX_EXTRACT_CHARS]   # bound regex work (DoS guard)
    h = locales.heuristics()
    # priority order: structured ids first, then org, then person. Email is the
    # one language-neutral pattern; the rest come from the active input locales.
    for m in _RE_EMAIL.finditer(text):
        _add(out, seen, m.group(0), "email", m.start(), m.end(), 0.99)
    for typ, rx, conf in h.id_patterns:
        for m in rx.finditer(text):
            _add(out, seen, m.group(0), typ, m.start(), m.end(), conf)
    for m in h.re_org.finditer(text):
        _add(out, seen, m.group(1), "org", m.start(1), m.end(1), 0.8)
    for rx, conf in ((h.re_person_pre, 0.85), (h.re_person_post, 0.85)):
        for m in rx.finditer(text):
            name = m.group(1)
            _add(out, seen, name, "person", m.start(1), m.end(1), conf)
    for m in h.re_person_full.finditer(text):
        name = m.group(1)
        if any(w in h.stop_title for w in name.split()):
            continue
        _add(out, seen, name, "person", m.start(1), m.end(1), 0.7)
    for m in h.re_person_initial.finditer(text):
        name = m.group(1)
        if name.split()[0] in h.stop_title:
            continue
        _add(out, seen, name, "person", m.start(1), m.end(1), 0.65)
    out.sort(key=lambda x: x["start"])
    return out


# ---------------------------------------------------------------- #
#  stage 2 — optional local-LLM refine (off unless EVOSQL_ENTITY_LLM)
# ---------------------------------------------------------------- #
def llm_refine(text: str, mentions: List[Mention]) -> List[Mention]:
    backend = os.environ.get("EVOSQL_ENTITY_LLM", "").strip().lower()
    if not backend:
        return mentions
    try:
        extra = _llm_extract(text, backend)
    except Exception:
        return mentions
    # merge LLM spans that don't overlap regex ones
    seen = [(m["start"], m["end"]) for m in mentions]
    for e in extra:
        s, en = e.get("start", -1), e.get("end", -1)
        if s < 0 or en <= s:
            continue
        if any(s < pe and en > ps for ps, pe in seen):
            continue
        mentions.append({"surface": e.get("surface", text[s:en]),
                         "type": e.get("type", "person"),
                         "start": s, "end": en,
                         "confidence": float(e.get("confidence", 0.6))})
        seen.append((s, en))
    mentions.sort(key=lambda x: x["start"])
    return mentions


def _llm_extract(text: str, backend: str) -> List[Mention]:
    prompt = ("Extract named entities (person, org, email, phone, iban, tckn) "
              "from the text. Return JSON list of {surface,type,start,end}. "
              "Text:\n" + text)
    default = "claude-sonnet-4-6" if backend in ("anthropic", "sonnet") else "llama3.1"
    model = os.environ.get("EVOSQL_ENTITY_LLM_MODEL", default)
    from . import llm
    if not llm.available(backend):
        return []
    out = llm.chat(prompt, provider=backend, model=model, max_tokens=1024)
    parsed = json.loads(out or "[]")
    return parsed if isinstance(parsed, list) else parsed.get("entities", [])


def extract_entities(text: str) -> List[Mention]:
    return llm_refine(text, extract_regex(text))


# ---------------------------------------------------------------- #
#  canonical-id resolution + storage                                #
# ---------------------------------------------------------------- #
class EntityStore:
    def __init__(self, exec_fn: Callable[[str], None],
                 query_fn: Callable[[str], List[List[str]]],
                 ns: str, ent_store: str, men_store: str):
        self._exec = exec_fn
        self._query = query_fn
        self.ns = ns
        self.ent_store = ent_store
        self.men_store = men_store
        self._cache: Optional[Dict[str, dict]] = None   # entity_id -> entity
        self._index: Dict[Tuple[str, str], str] = {}    # (type, match_key) -> entity_id
        # Asymmetric first-name index: (type, first_name) -> {entity_id, ...}.
        # Full names POPULATE it; only bare first-name references QUERY it, and
        # only when exactly one candidate exists — so two distinct people who
        # share a first name are never fused (see resolve()).
        self._fname: Dict[Tuple[str, str], set] = {}
        self._dirty: set = set()                        # entity ids to flush

    def _load(self) -> None:
        if self._cache is not None:
            return
        self._cache, self._index, self._fname = {}, {}, {}
        from .server import _e
        rows = self._query(
            f"SELECT mem_key, mem_value FROM __mem_{self.ent_store} "
            f"WHERE mem_namespace = '{_e(self.ns)}' LIMIT 100000") or []
        for k, v in rows:
            try:
                ent = json.loads(v) if not isinstance(v, dict) else v
            except Exception:
                continue
            self._cache[k] = ent
            self._index_entity(ent)

    def _index_entity(self, ent: dict) -> None:
        typ = ent["type"]
        names = [ent["canonical"]] + list(ent.get("aliases") or [])
        for nm in names:
            for mk in (_person_keys(nm) if typ == "person" else [_norm(nm)]):
                self._index[(typ, mk)] = ent["id"]
            if typ == "person":
                ft = _first_token(nm)
                if ft:
                    self._fname.setdefault((typ, ft), set()).add(ent["id"])

    def resolve(self, surface: str, typ: str) -> Tuple[str, bool]:
        """Return (entity_id, is_new). Folds the surface into an existing
        entity by exact normalized match, person key match, or edit-distance
        < 2; otherwise mints a new entity."""
        self._load()
        keys = _person_keys(surface) if typ == "person" else [_norm(surface)]
        for mk in keys:
            hit = self._index.get((typ, mk))
            if hit:
                return hit, False
        # fuzzy: edit-distance < 2 against same-type canonicals/aliases
        nsurf = _norm(surface)
        for (t, mk), eid in self._index.items():
            if t == typ and abs(len(mk) - len(nsurf)) <= 2 \
                    and _edit_distance(mk, nsurf) < 2:
                return eid, False
        # bare first-name / courtesy-title reference (e.g. 'John' -> 'John Doe'):
        # fold ONLY when exactly one known person has that first name. With two
        # ('John Doe' + 'John Smith') it is genuinely ambiguous, so we mint a
        # new entity rather than guess and fuse them.
        if typ == "person":
            ref = _first_name_ref(surface)
            if ref is not None:
                cands = self._fname.get((typ, ref))
                if cands and len(cands) == 1:
                    return next(iter(cands)), False
        eid = f"ent_{typ}_{len(self._cache) + 1}_{int(time.time()*1000)%100000}"
        return eid, True

    def upsert(self, mem_key: str, surface: str, typ: str,
               start: int, end: int, conf: float, ts: float,
               write: bool = True) -> str:
        from .server import _e
        # Bound the stored surface: a runaway regex match must not bloat the
        # entity/mention record toward the engine's 8 KB statement cap.
        surface = (surface or "").strip()[:MAX_NAME_LEN]
        eid, is_new = self.resolve(surface, typ)
        if is_new:
            ent = {"id": eid, "canonical": surface, "type": typ,
                   "aliases": [], "first_seen": ts, "last_seen": ts,
                   "mention_count": 0}
            self._cache[eid] = ent
        else:
            ent = self._cache[eid]
            # Cap the alias list: a popular entity could otherwise accumulate
            # thousands of surface forms and blow past the statement cap.
            if _norm(surface) != _norm(ent["canonical"]) \
                    and surface not in (ent.get("aliases") or []) \
                    and len(ent.get("aliases") or []) < MAX_ALIASES:
                ent.setdefault("aliases", []).append(surface)
        ent["last_seen"] = ts
        ent["mention_count"] = int(ent.get("mention_count", 0)) + 1
        self._index_entity(ent)
        if write:
            # The mention is unique per occurrence, so write it inline. The
            # entity record changes on every mention, so just mark it dirty
            # and flush once — rewriting it per mention was the cold-start
            # bottleneck (and the write count).
            men_key = f"{mem_key}|{eid}|{start}"
            men = {"mem_key": mem_key, "entity_id": eid, "start": start,
                   "end": end, "confidence": conf, "surface": surface}
            _safe_put(self._exec, self.men_store, self.ns, men_key, men)
            self._dirty.add(eid)
        return eid

    def flush(self) -> int:
        """Persist every entity touched since the last flush (one write each)."""
        n = 0
        for eid in self._dirty:
            ent = (self._cache or {}).get(eid)
            if ent and _safe_put(self._exec, self.ent_store, self.ns, eid, ent):
                n += 1
        self._dirty.clear()
        return n

    def process(self, mem_key: str, text: str, ts: float,
                write: bool = True, flush: bool = True) -> List[Mention]:
        """Extract, resolve, and (optionally) persist every mention in the
        row. Returns the mentions enriched with their resolved `entity_id`
        so a caller (the knowledge graph) can wire edges between co-occurring
        entities without re-extracting. Pass flush=False to batch a whole job
        and call flush() once at the end."""
        out: List[Mention] = []
        for m in extract_entities(text or ""):
            eid = self.upsert(mem_key, m["surface"], m["type"],
                              m["start"], m["end"], m["confidence"],
                              ts, write=write)
            m = dict(m)
            m["entity_id"] = eid
            out.append(m)
        if write and flush:
            self.flush()
        return out


# ---------------------------------------------------------------- #
#  backfill CLI                                                     #
# ---------------------------------------------------------------- #
def _connect():
    import psycopg
    return psycopg.connect(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "5433")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        dbname=os.environ.get("EVOSQL_DATABASE", "evosql"),
        autocommit=True,
    )


def main() -> int:
    from .server import _e, _to_str

    ap = argparse.ArgumentParser()
    ap.add_argument("--namespace", required=True)
    ap.add_argument("--prefix", default=os.environ.get("MCP_STORE_PREFIX", "mcp"))
    ap.add_argument("--limit", type=int, default=100000)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    ent_store = f"{args.prefix}_entities"
    men_store = f"{args.prefix}_entity_mentions"
    conn = _connect()
    with conn.cursor() as cur:
        for s in (ent_store, men_store):
            try:
                cur.execute(f"CREATE MEMORY STORE {s}")
            except Exception:
                pass

    def q(sql):
        with conn.cursor() as cur:
            cur.execute(sql)
            try:
                return [[_to_str(x) for x in row] for row in cur.fetchall()]
            except Exception:
                return []

    def ex(sql):
        with conn.cursor() as cur:
            cur.execute(sql)

    store = EntityStore(ex, q, args.namespace, ent_store, men_store)
    rows = q(f"SELECT mem_key, mem_value FROM __mem_{args.prefix}_mem "
             f"WHERE mem_namespace = '{_e(args.namespace)}' LIMIT {args.limit}")
    total_mentions = 0
    for key, val in rows:
        try:
            rec = json.loads(val) if val else {}
        except Exception:
            rec = {}
        text = " ".join(str(rec.get(k) or "") for k in
                        ("fact", "text", "body", "subject", "snippet", "from"))
        ts = rec.get("created") or rec.get("ts") or time.time()
        try:
            ts = float(ts)
        except (TypeError, ValueError):
            ts = time.time()
        ids = store.process(key, text, ts, write=not args.dry_run)
        total_mentions += len(ids)
    print(f"ns={args.namespace}: {len(rows)} rows, {total_mentions} mentions, "
          f"{len(store._cache or {})} entities"
          + (" (dry-run)" if args.dry_run else ""))
    return 0


if __name__ == "__main__":
    sys.exit(main())
