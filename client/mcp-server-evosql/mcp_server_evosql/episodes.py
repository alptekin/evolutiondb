"""
episodes — segmentation + hierarchical summaries (Adım 16).

A weekly job groups recent rows into episodes (a burst of related activity)
and writes one short summary per episode, so an aggregation query ("what
happened on X last month") returns a handful of paragraph summaries with
drill-down instead of dozens of raw rows.

Segmentation (dependency-free, deterministic):
  1. order rows by time,
  2. start a new episode on a > gap_hours gap, OR when a row shares no entity
     with the running episode AND its embedding cosine is below sim_threshold,
  3. keep only episodes with >= min_size rows (HDBSCAN's min_cluster_size; a
     real HDBSCAN pass is an optional refinement when the lib is installed).

Each episode's summary is written through the normal save path with
derived_from = source row keys and synthesized = true (Adım 13 provenance),
tagged `episode`. An episode record in <prefix>_episodes links the summary to
its sources for expand_episode() drill-down.

Summary text is extractive by default (no LLM); set EVOSQL_EPISODE_LLM =
ollama | anthropic for a real generated summary — same opt-in shape as the
Adım 14 entity LLM.

CLI (the weekly job):
  python -m mcp_server_evosql.episodes --namespace alptekin_topal [--dry-run]
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time
from datetime import datetime, timezone
from typing import Any, Dict, List, Optional, Sequence

from .embeddings import cosine, decode_vec

GAP_HOURS = 24.0
SIM_THRESHOLD = 0.7
MIN_SIZE = 3
SUMMARY_TAG = "episode"


def _row_ts(rec: dict) -> float:
    for k in ("created", "ts", "received_at", "date"):
        v = rec.get(k)
        if v is None:
            continue
        if isinstance(v, (int, float)):
            return float(v)
        try:
            s = str(v).strip().replace("Z", "+00:00")
            dt = datetime.fromisoformat(s)
            if dt.tzinfo is None:
                dt = dt.replace(tzinfo=timezone.utc)
            return dt.timestamp()
        except Exception:
            continue
    return 0.0


def _date(ts: float) -> str:
    if ts <= 0:
        return "?"
    return datetime.fromtimestamp(ts, timezone.utc).strftime("%Y-%m-%d")


def _centroid_add(cen: Optional[List[float]], n: int,
                  vec: Optional[List[float]]) -> Optional[List[float]]:
    """Running mean of the episode's row embeddings (for cosine fusion)."""
    if not vec:
        return cen
    if cen is None:
        return list(vec)
    if len(cen) != len(vec):
        return cen
    return [(c * n + v) / (n + 1) for c, v in zip(cen, vec)]


def segment(rows: List[dict], *, gap_hours: float = GAP_HOURS,
            sim_threshold: float = SIM_THRESHOLD,
            min_size: int = MIN_SIZE) -> List[List[dict]]:
    """rows: [{key, ts, entity_ids:set, emb:list|None, ...}] -> list of
    episodes (each a list of rows) with len >= min_size."""
    ordered = sorted(rows, key=lambda r: r.get("ts", 0.0))
    segments: List[List[dict]] = []
    cur: List[dict] = []
    cur_ents: set = set()
    centroid: Optional[List[float]] = None
    for r in ordered:
        if not cur:
            cur = [r]
            cur_ents = set(r.get("entity_ids") or ())
            centroid = _centroid_add(None, 0, r.get("emb"))
            continue
        gap_h = (r.get("ts", 0.0) - cur[-1].get("ts", 0.0)) / 3600.0
        overlap = bool(cur_ents & (r.get("entity_ids") or set()))
        sim = 0.0
        if centroid and r.get("emb"):
            sim = cosine(centroid, r["emb"])
        if gap_h <= gap_hours and (overlap or sim > sim_threshold):
            cur.append(r)
            cur_ents |= (r.get("entity_ids") or set())
            centroid = _centroid_add(centroid, len(cur) - 1, r.get("emb"))
        else:
            segments.append(cur)
            cur = [r]
            cur_ents = set(r.get("entity_ids") or ())
            centroid = _centroid_add(None, 0, r.get("emb"))
    if cur:
        segments.append(cur)
    return [s for s in segments if len(s) >= min_size]


# ---------------------------------------------------------------- #
#  summary                                                         #
# ---------------------------------------------------------------- #
def _top_names(rows: List[dict], names: Dict[str, str], k: int = 3) -> List[str]:
    freq: Dict[str, int] = {}
    for r in rows:
        for eid in (r.get("entity_ids") or ()):
            freq[eid] = freq.get(eid, 0) + 1
    ranked = sorted(freq, key=lambda e: -freq[e])
    out = []
    for eid in ranked:
        nm = names.get(eid)
        if nm and nm not in out:
            out.append(nm)
        if len(out) >= k:
            break
    return out


def summarize(rows: List[dict], names: Dict[str, str]) -> str:
    """Extractive template by default; EVOSQL_EPISODE_LLM swaps in a real
    generated summary. Kept to ~one sentence (~50 tokens)."""
    rows = sorted(rows, key=lambda r: r.get("ts", 0.0))
    who = _top_names(rows, names)
    backend = os.environ.get("EVOSQL_EPISODE_LLM", "").strip().lower()
    if backend:
        try:
            return _llm_summary(rows, who, backend)
        except Exception:
            pass
    d0, d1 = _date(rows[0].get("ts", 0)), _date(rows[-1].get("ts", 0))
    span = d0 if d0 == d1 else f"{d0}–{d1}"
    snippet = (rows[0].get("text") or "").strip().replace("\n", " ")
    if len(snippet) > 90:
        snippet = snippet[:90].rsplit(" ", 1)[0] + "…"
    whos = ", ".join(who) if who else "—"
    return f"{span} · {len(rows)} ilgili kayıt ({whos}). {snippet}"


def _llm_summary(rows: List[dict], who: List[str], backend: str) -> str:
    facts = "\n".join(f"- {(r.get('text') or '')[:160]}" for r in rows[:12])
    prompt = ("Summarize this burst of related activity in one sentence "
              "(<=50 tokens), naming the key people/orgs. Items:\n" + facts)
    if backend == "ollama":
        import urllib.request
        host = os.environ.get("OLLAMA_HOST", "http://127.0.0.1:11434")
        model = os.environ.get("EVOSQL_EPISODE_LLM_MODEL", "llama3.1")
        body = json.dumps({"model": model, "prompt": prompt,
                           "stream": False}).encode()
        req = urllib.request.Request(host + "/api/generate", body,
                                     {"Content-Type": "application/json"})
        with urllib.request.urlopen(req, timeout=30) as r:
            return json.loads(r.read().decode()).get("response", "").strip()
    if backend in ("anthropic", "sonnet"):
        import anthropic
        c = anthropic.Anthropic()
        m = c.messages.create(
            model=os.environ.get("EVOSQL_EPISODE_LLM_MODEL", "claude-sonnet-4-6"),
            max_tokens=120, messages=[{"role": "user", "content": prompt}])
        return m.content[0].text.strip()
    raise RuntimeError("unknown EVOSQL_EPISODE_LLM backend")


# ---------------------------------------------------------------- #
#  the job — build episodes for a namespace                        #
# ---------------------------------------------------------------- #
def build_episodes(backend, user_id: str, *, window_days: int = 7,
                   gap_hours: float = GAP_HOURS,
                   sim_threshold: float = SIM_THRESHOLD,
                   min_size: int = MIN_SIZE,
                   dry_run: bool = False) -> List[dict]:
    """Segment the namespace's recent rows and persist one summary +
    episode record per episode. Idempotent: rows already covered by an
    existing episode (or that are themselves episode summaries) are skipped,
    so a re-run only episodizes new activity."""
    from .server import _e

    now = time.time()
    horizon = now - window_days * 86400.0 if window_days > 0 else 0.0

    # rows already inside an episode, and existing episode summary rows
    covered: set = set()
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.episodes_store} "
        f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 100000") or []
    for (v,) in [(r[0],) for r in rows]:
        try:
            covered.update(json.loads(v).get("source_row_keys") or [])
        except Exception:
            pass

    # entity mentions per row + entity names
    ent_by_row: Dict[str, set] = {}
    for r in backend._query(
            f"SELECT mem_value FROM __mem_{backend.mention_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 500000") or []:
        try:
            m = json.loads(r[0])
        except Exception:
            continue
        ent_by_row.setdefault(m["mem_key"], set()).add(m["entity_id"])
    names: Dict[str, str] = {}
    for r in backend._query(
            f"SELECT mem_value FROM __mem_{backend.entity_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 200000") or []:
        try:
            e = json.loads(r[0])
            names[e["id"]] = e["canonical"]
        except Exception:
            pass

    # candidate rows
    items: List[dict] = []
    for r in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 100000") or []:
        key = r[0]
        try:
            rec = json.loads(r[1]) if r[1] else {}
        except Exception:
            rec = {}
        if not rec or rec.get("is_episode") or key in covered:
            continue
        ts = _row_ts(rec)
        if horizon and ts and ts < horizon:
            continue
        text = " ".join(str(rec.get(k) or "") for k in
                        ("fact", "text", "subject", "snippet", "body"))
        items.append({"key": key, "ts": ts, "text": text,
                      "entity_ids": ent_by_row.get(key, set()),
                      "emb": decode_vec(rec.get("emb"))})

    episodes = segment(items, gap_hours=gap_hours,
                       sim_threshold=sim_threshold, min_size=min_size)
    out: List[dict] = []
    for i, ep in enumerate(episodes):
        src_keys = [r["key"] for r in ep]
        ent_ids = sorted({e for r in ep for e in (r.get("entity_ids") or ())})
        summary = summarize(ep, names)
        eid = f"ep_{int(now*1000)}_{i}"
        rec = {"episode_id": eid,
               "time_start": min(r["ts"] for r in ep),
               "time_end": max(r["ts"] for r in ep),
               "entity_ids": ent_ids, "source_row_keys": src_keys}
        if not dry_run:
            # summary row through the normal save path (embedding +
            # provenance), then patch in the episode linkage so a
            # hierarchical search result can drill down directly.
            skey = backend.save(user_id, summary, tags=[SUMMARY_TAG],
                                derived_from=src_keys)
            backend._patch_episode_summary(user_id, skey, eid, src_keys)
            rec["summary_key"] = skey
            backend._exec(
                f"MEMORY PUT INTO {backend.episodes_store} VALUES "
                f"('{_e(user_id)}','{_e(eid)}','{_e(json.dumps(rec))}')")
        rec["summary"] = summary
        out.append(rec)
    return out


# ---------------------------------------------------------------- #
#  CLI                                                             #
# ---------------------------------------------------------------- #
def main() -> int:
    from .server import MemoryBackend

    ap = argparse.ArgumentParser()
    ap.add_argument("--namespace", required=True)
    ap.add_argument("--prefix", default=os.environ.get("MCP_STORE_PREFIX", "mcp"))
    ap.add_argument("--window-days", type=int, default=7)
    ap.add_argument("--gap-hours", type=float, default=GAP_HOURS)
    ap.add_argument("--min-size", type=int, default=MIN_SIZE)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    b = MemoryBackend(
        os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        int(os.environ.get("EVOSQL_PORT", "5433")),
        os.environ.get("EVOSQL_USER", "admin"),
        os.environ.get("EVOSQL_PASSWORD", "admin"),
        os.environ.get("EVOSQL_DATABASE", "evosql"),
        args.prefix)
    eps = build_episodes(b, args.namespace, window_days=args.window_days,
                         gap_hours=args.gap_hours, min_size=args.min_size,
                         dry_run=args.dry_run)
    print(f"ns={args.namespace}: {len(eps)} episode(s)"
          + (" (dry-run)" if args.dry_run else ""))
    for e in eps:
        print(f"  {e['episode_id']}: {len(e['source_row_keys'])} rows — "
              f"{e['summary'][:80]}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
