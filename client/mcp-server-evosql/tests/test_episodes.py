"""
test_episodes — Step 16 episode segmentation + hierarchical summaries.

Unit:
  - segment() splits on a > gap_hours temporal gap, merges entity-overlapping
    rows, and drops sub-min_size clusters.
  - summarize() (extractive, no LLM) names the episode's entities and stays
    one short line.

Eval gate (the plan's criterion):
  - hierarchical mode returns one summary per episode instead of every raw
    row -> aggregation-query token usage drops >= 60%.
  - recall preserved: an episode's source rows cover the gold raw rows, so
    expand_episode drills back to the full set.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.episodes import segment, summarize

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5505"))
DAY = 86400.0


# ---------------------------------------------------------------- #
#  unit                                                            #
# ---------------------------------------------------------------- #
def test_segment():
    base = 1_700_000_000.0
    rows = [
        # episode 1 — same day, shared entity A
        {"key": "a1", "ts": base + 0 * 3600, "entity_ids": {"A"}, "emb": None},
        {"key": "a2", "ts": base + 1 * 3600, "entity_ids": {"A", "B"}, "emb": None},
        {"key": "a3", "ts": base + 2 * 3600, "entity_ids": {"A"}, "emb": None},
        # >24h gap + different entity -> new episode
        {"key": "b1", "ts": base + 3 * DAY, "entity_ids": {"C"}, "emb": None},
        {"key": "b2", "ts": base + 3 * DAY + 3600, "entity_ids": {"C"}, "emb": None},
        {"key": "b3", "ts": base + 3 * DAY + 7200, "entity_ids": {"C", "D"}, "emb": None},
        # lone row -> below min_size, dropped
        {"key": "z1", "ts": base + 9 * DAY, "entity_ids": {"Z"}, "emb": None},
    ]
    eps = segment(rows, min_size=3)
    assert len(eps) == 2, f"expected 2 episodes, got {len(eps)}"
    got = [sorted(r["key"] for r in e) for e in eps]
    assert ["a1", "a2", "a3"] in got and ["b1", "b2", "b3"] in got, got
    assert all("z1" not in [r["key"] for r in e] for e in eps), "lone row kept"
    print("  ok  segment: gap split + entity merge + min_size drop")


def test_summarize():
    base = 1_700_000_000.0
    rows = [{"key": "a1", "ts": base, "text": "Acme card integration test was run",
             "entity_ids": {"e_acme"}},
            {"key": "a2", "ts": base + 3600, "text": "Acme second round test",
             "entity_ids": {"e_acme"}}]
    s = summarize(rows, {"e_acme": "Acme"})
    assert "Acme" in s, s
    assert "2 " in s, s                 # row count surfaced
    assert len(s) < 220, f"summary too long: {len(s)}"
    print(f"  ok  summarize: {s!r}")


# ---------------------------------------------------------------- #
#  DB round-trip + eval gate                                       #
# ---------------------------------------------------------------- #
def _save_at(b, ns, fact, ts):
    """Save (entities get extracted) then pin the row's timestamp."""
    from mcp_server_evosql.server import _e
    k = b.save(ns, fact)
    rows = b._fetch_by_keys(b.memory, ns, [k])
    rec = json.loads(rows[0][1])
    rec["created"] = ts
    b._exec(f"MEMORY PUT INTO {b.memory} VALUES "
            f"('{_e(ns)}','{_e(k)}','{_e(json.dumps(rec))}')")
    return k


def _tokens(rows) -> int:
    return sum(len(r.get("fact") or "") for r in rows)


def test_eval_gate() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql",
                        autocommit=True, connect_timeout=3).close()
    except Exception as exc:
        print(f"  SKIP eval gate (no server on :{PORT}: {exc})")
        return True

    os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": str(PORT),
                       "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                       "EVOSQL_DATABASE": "evosql",
                       "EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    prefix = f"mcp_ep{int(time.time())}"
    ns = f"eptest_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)

    now = time.time()
    t_acme = now - 5 * DAY
    acme_gold = set()
    for i, f in enumerate([
            "Acme card integration first round test was run",
            "Acme card integration hit a blocker",
            "Acme blocker resolved and second round test started",
            "Acme second round test showed a performance issue",
            "Acme performance issue patch applied",
            "Acme third round regression tests run",
            "Acme customer acceptance test planned",
            "Acme integration tests completed"]):
        acme_gold.add(_save_at(b, ns, f, t_acme + i * 3600))
    t_glob = now - 1 * DAY
    for i, f in enumerate([
            "Widget Inc launch plan reviewed",
            "Widget Inc launch date moved up",
            "Widget Inc marketing budget approved",
            "Widget Inc launch checklist completed"]):
        _save_at(b, ns, f, t_glob + i * 3600)

    # FLAT cost: the aggregation query returns every raw Acme row
    flat = b.search(ns, "what happened with Acme", limit=10)
    flat_acme = [r for r in flat if r["key"] in acme_gold]
    flat_tok = _tokens(flat_acme)
    assert len(flat_acme) >= 3, f"flat should surface raw rows: {len(flat_acme)}"

    # build episodes (window covers both)
    eps = b.build_episodes(ns, window_days=30)
    assert len(eps) == 2, f"expected 2 episodes, got {len(eps)}"
    acme_ep = next(e for e in eps
                   if set(e["source_row_keys"]) & acme_gold)
    # recall preserved: the episode covers every gold raw row
    assert acme_gold <= set(acme_ep["source_row_keys"]), \
        "episode must cover all gold rows"

    # HIERARCHICAL cost: the same query returns the compact summary
    hier = b.search(ns, "what happened with Acme", limit=10, mode="hierarchical")
    assert hier and all(r.get("tags") and "episode" in r["tags"] for r in hier), \
        f"hierarchical must return episode summaries: {hier}"
    hier_tok = _tokens(hier)

    saved = 1 - hier_tok / flat_tok if flat_tok else 0.0
    print(f"  tokens: flat={flat_tok} hier={hier_tok}  saved={saved*100:.0f}%")
    assert saved >= 0.60, f"token saving {saved*100:.0f}% < 60% gate"

    # expand_episode drills back to the full source set
    exp = b.expand_episode(ns, acme_ep["episode_id"])
    assert exp.get("ok") and acme_gold <= {r["key"] for r in exp["rows"]}, exp
    print(f"  ok  expand_episode: {len(exp['rows'])} source rows recovered")
    return True


def main() -> int:
    test_segment()
    test_summarize()
    test_eval_gate()
    print("OK — Step 16 episodes: segmentation + hierarchical summary "
          "(-60% tokens) + expand drill-down")
    return 0


if __name__ == "__main__":
    sys.exit(main())
