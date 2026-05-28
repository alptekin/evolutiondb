"""
tests/eval_memory_quality.py — MCP memory retrieval eval harness.

Runs MemoryBackend.search() against a YAML gold set and reports
Recall@5, Recall@10, MRR, nDCG@10, and latency percentiles. The
harness is intentionally minimal: no pytest, no fixtures, no mocks —
straight `python -m` against a live EvolutionDB + MCP backend so the
numbers reflect the real code path.

Three modes:

  --gold + --out      run the full gold set, write JSON + Markdown
  --collect "query"   probe the live backend for one query and print
                      candidate keys (use this to find ideal_keys
                      without hand-querying SQL)
  --collect "..." \
      --label qXXX \
      --pick "1,3,5"  in one shot: collect, pick the chosen row
                      numbers, and write their keys into the gold
                      YAML's ideal_keys for query qXXX. Preserves
                      YAML comments via ruamel.yaml.

Environment (same vars the MCP server reads):
  EVOSQL_HOST / EVOSQL_PORT / EVOSQL_USER / EVOSQL_PASSWORD
  EVOSQL_DATABASE / MCP_USER_ID
  EVOSQL_EMBEDDING_PROVIDER (openai|local|none)
  EVOSQL_EMBEDDING_MODEL    (provider-specific)
  OPENAI_API_KEY            (for openai)

Why this file exists: every step of the Context Layer plan is gated
on the metrics this harness produces. No improvement claim ships
without a delta from here. See docs/adr or the plan file in
~/.claude/plans/ for the gating policy.
"""
from __future__ import annotations

import argparse
import json
import math
import os
import statistics
import sys
import time
from collections import defaultdict
from pathlib import Path
from typing import Any, Dict, List, Optional

_REPO_ROOT = Path(__file__).resolve().parents[1]
_MCP_PKG = _REPO_ROOT / "client" / "mcp-server-evosql"
if str(_MCP_PKG) not in sys.path:
    sys.path.insert(0, str(_MCP_PKG))
_PII_PKG = _REPO_ROOT / "client" / "evolutiondb-pii"
if str(_PII_PKG) not in sys.path:
    sys.path.insert(0, str(_PII_PKG))

try:
    import yaml
except ImportError:
    print("[eval] PyYAML required — install with: pip install PyYAML",
          file=sys.stderr)
    sys.exit(2)

from mcp_server_evosql.server import MemoryBackend  # noqa: E402
from mcp_server_evosql.embeddings import provider_from_env, reranker_from_env, embedder2_from_env  # noqa: E402

# evolutiondb-pii is optional for the basic eval but required when
# any query has pii_check: true. Keystore and rules MUST come from
# the DB-backed stores — env is set here so a stray file fallback
# never silently changes the verdict.
os.environ.setdefault("EVOSQL_PII_KEYSTORE", "db")
os.environ.setdefault("EVOSQL_PII_RULES", "db")
try:
    from evolutiondb_pii import mask as _pii_mask  # noqa: E402
    _PII_OK = True
except Exception as _exc:  # pragma: no cover — environment-dependent
    _pii_mask = None  # type: ignore
    _PII_OK = False
    _PII_IMPORT_ERR = repr(_exc)


# ---------------------------------------------------------------- #
#  Metric primitives                                                 #
# ---------------------------------------------------------------- #
def recall_at_k(returned: List[str], ideal: List[str], k: int) -> float:
    if not ideal:
        return 0.0
    top = set(returned[:k])
    hit = sum(1 for r in ideal if r in top)
    return hit / len(ideal)


def mrr(returned: List[str], ideal: List[str]) -> float:
    ideal_set = set(ideal)
    for i, key in enumerate(returned, start=1):
        if key in ideal_set:
            return 1.0 / i
    return 0.0


def ndcg_at_k(returned: List[str], ideal: List[str], k: int) -> float:
    if not ideal:
        return 0.0
    ideal_set = set(ideal)
    dcg = 0.0
    for i, key in enumerate(returned[:k], start=1):
        if key in ideal_set:
            dcg += 1.0 / math.log2(i + 1)
    ideal_n = min(k, len(ideal))
    idcg = sum(1.0 / math.log2(i + 1) for i in range(1, ideal_n + 1))
    return dcg / idcg if idcg > 0 else 0.0


def percentile(values: List[float], pct: float) -> float:
    if not values:
        return 0.0
    s = sorted(values)
    idx = max(0, min(len(s) - 1, int(round(pct / 100.0 * (len(s) - 1)))))
    return s[idx]


# ---------------------------------------------------------------- #
#  PII gate — Adım 3                                                 #
# ---------------------------------------------------------------- #
def pii_scan_results(results: List[Dict[str, Any]]
                     ) -> List[Dict[str, Any]]:
    """For each row in `results`, run the DB-backed PII rule set over
    its fact text. Returns the rows where mask() rewrote any
    substring — i.e. rows that exposed plaintext PII through search.
    Each leak entry contains the row key, a truncated original
    snippet, and the masked counterpart so a reviewer can confirm
    the rule fired correctly without re-handling raw PII."""
    if not _PII_OK:
        raise RuntimeError(
            f"evolutiondb_pii unavailable — pii_check requires the "
            f"library to be importable. Original error: {_PII_IMPORT_ERR}"
        )
    leaks: List[Dict[str, Any]] = []
    for r in results:
        fact = r.get("fact") or ""
        masked = _pii_mask(fact)
        if masked != fact:
            leaks.append({
                "key": r.get("key", ""),
                "original_snippet": fact[:120],
                "masked_snippet": masked[:120],
            })
    return leaks


def pii_isolation_check(backend: MemoryBackend, user_id: str
                        ) -> Dict[str, Any]:
    """The PII keystore and rules live in their own memory stores
    (__mem_pii_keystore / __mem_pii_rules) and contain wrapped
    keypairs + rule definitions — the user owns those rows by
    design. What MUST NOT happen is the user-facing search path
    leaking them: backend.search() reads only the configured prefix
    store, so even a query that name-checks "keystore" or "rules"
    must never return a row from those tables. This probe issues
    several adversarial queries and inspects the returned keys for
    PII store prefixes; any hit is a compliance failure."""
    probes = [
        "pii keystore",
        "private key passphrase",
        "credit_card rule pattern",
        "evolutiondb-pii rules",
        "encrypted token wrapped key",
    ]
    forbidden_prefixes = ("pii_keystore_", "pii_rules_", "pii_token_")
    findings: Dict[str, Any] = {"clean": True, "details": [],
                                 "probes": probes}
    for q in probes:
        try:
            rows = backend.search(user_id, q, limit=20)
        except Exception as exc:
            findings["details"].append({
                "probe": q,
                "status": "search_failed",
                "error": repr(exc),
            })
            continue
        bad = [r.get("key", "") for r in rows
               if any(r.get("key", "").startswith(p)
                       for p in forbidden_prefixes)]
        if bad:
            findings["clean"] = False
            findings["details"].append({
                "probe": q,
                "status": "leaked",
                "leaked_keys": bad,
            })
        else:
            findings["details"].append({
                "probe": q,
                "status": "clean",
                "returned_keys_count": len(rows),
            })
    return findings


# ---------------------------------------------------------------- #
#  Backend factory — same env contract as the MCP server             #
# ---------------------------------------------------------------- #
def build_backend(memory_prefix: str) -> MemoryBackend:
    host = os.environ.get("EVOSQL_HOST", "127.0.0.1")
    port = int(os.environ.get("EVOSQL_PORT", "5433"))
    user = os.environ.get("EVOSQL_USER", "admin")
    password = os.environ.get("EVOSQL_PASSWORD", "admin")
    database = os.environ.get("EVOSQL_DATABASE", "evosql")
    embedder = provider_from_env()
    embedder2 = embedder2_from_env()
    reranker = reranker_from_env(embedder)
    lexical = os.environ.get("EVOSQL_LEXICAL", "simple").lower()
    rerank_mode = os.environ.get("EVOSQL_RERANK_MODE", "override").lower()
    # The tagger is only consulted on save; eval is read-only so we
    # skip building one to keep startup quiet.
    return MemoryBackend(
        host=host, port=port, user=user, password=password,
        database=database, prefix=memory_prefix,
        embedder=embedder, tagger=None, reranker=reranker,
        lexical=lexical, rerank_mode=rerank_mode, embedder2=embedder2,
    )


def resolve_user_id(meta: Dict[str, Any]) -> str:
    uid = (meta or {}).get("user_id") or os.environ.get("MCP_USER_ID")
    if not uid:
        print("[eval] user_id missing — set metadata.user_id in the gold "
              "set or export MCP_USER_ID", file=sys.stderr)
        sys.exit(2)
    return uid


def resolve_prefix(meta: Dict[str, Any]) -> str:
    return (meta or {}).get("memory_prefix") or "mcp"


def resolve_embed_meta(backend: MemoryBackend) -> Dict[str, str]:
    kind = backend.embedder.kind if backend.embedder else "none"
    model = os.environ.get("EVOSQL_EMBEDDING_MODEL", "")
    if not model:
        if kind == "openai":
            model = "text-embedding-3-small"
        elif kind == "local":
            model = "sentence-transformers/all-MiniLM-L6-v2"
        else:
            model = "n/a"
    rerank_kind = (backend.reranker.kind
                    if getattr(backend, "reranker", None) else "none")
    rerank_model = (getattr(backend.reranker, "model_name", "")
                    if backend.reranker is not None else "")
    e2 = getattr(backend, "embedder2", None)
    e2_kind = e2.kind if e2 else "none"
    e2_model = getattr(e2, "model_name", "") if e2 else ""
    return {"provider": kind, "model": model,
            "rerank": rerank_kind,
            "rerank_model": rerank_model or "n/a",
            "lexical": getattr(backend, "lexical", "simple"),
            "embedder2": e2_kind,
            "embedder2_model": e2_model or "n/a"}


# ---------------------------------------------------------------- #
#  Full-eval pass                                                    #
# ---------------------------------------------------------------- #
def run_eval(gold_path: Path, out_base: Path, *,
              search_limit: int = 10, warmup: bool = True) -> Dict[str, Any]:
    with gold_path.open() as f:
        gold = yaml.safe_load(f) or {}

    meta = gold.get("metadata") or {}
    memory_prefix = resolve_prefix(meta)
    user_id = resolve_user_id(meta)

    all_queries = gold.get("queries") or []
    # Skip reasons:
    #   - empty ideal_keys AND no pii_check (nothing to measure)
    #   - requires_unbounded_k: true (waits for adaptive-K support;
    #     see Adım 5.5 in the plan — these queries need a different
    #     pipeline than fixed-top-K recall)
    # pii_check queries are kept even when ideal_keys is empty: the
    # gate is "no plaintext PII in returned rows", not retrieval
    # quality. They contribute 0.0 to recall metrics (which is the
    # honest read — we are not asking the system to retrieve PII).
    queries = [
        q for q in all_queries
        if (q.get("ideal_keys") or q.get("pii_check"))
        and not q.get("requires_unbounded_k")
    ]
    skipped_unfilled = sum(
        1 for q in all_queries
        if not q.get("ideal_keys") and not q.get("pii_check")
    )
    skipped_unbounded = sum(1 for q in all_queries
                              if q.get("requires_unbounded_k"))
    skipped = skipped_unfilled + skipped_unbounded

    if not queries:
        print("[eval] no queries have ideal_keys yet — fill the gold set "
              "before running the full eval. Use --collect to find "
              "candidate keys.", file=sys.stderr)
        sys.exit(2)

    backend = build_backend(memory_prefix)
    if warmup:
        try:
            backend.search(user_id, queries[0]["query"], limit=search_limit)
        except Exception:
            pass

    per_query: List[Dict[str, Any]] = []
    by_cat: Dict[str, List[Dict[str, Any]]] = defaultdict(list)
    pii_gate_total = 0
    pii_gate_passed = 0
    pii_gate_failures: List[Dict[str, Any]] = []

    # Workaround: under bge-m3 the backend silently degrades after
    # ~6 large LIMIT-10000 SELECTs on the same psycopg connection —
    # subsequent calls return zero rows without raising. _with_retry
    # never sees an exception so it doesn't reconnect. Until the
    # server-side cause is tracked down, refresh just the connection
    # before each query — embedder/tagger stay shared so the bge-m3
    # weights load once.
    def _refresh_conn(b: MemoryBackend) -> None:
        try:
            b.conn.close()
        except Exception:
            pass
        b.conn = b._connect()

    for q in queries:
        qid = q["id"]
        category = q.get("category", "uncategorized")
        text = q["query"]
        ideal = q["ideal_keys"]
        pii_check_on = bool(q.get("pii_check"))
        _refresh_conn(backend)
        t0 = time.perf_counter()
        try:
            results = backend.search(user_id, text, limit=search_limit)
            error = None
        except Exception as exc:
            results = []
            error = repr(exc)
        latency_ms = (time.perf_counter() - t0) * 1000.0
        returned = [r["key"] for r in results]

        row = {
            "id": qid,
            "category": category,
            "query": text,
            "ideal_keys": ideal,
            "returned_keys": returned,
            "latency_ms": round(latency_ms, 2),
            "recall_at_5": recall_at_k(returned, ideal, 5),
            "recall_at_10": recall_at_k(returned, ideal, 10),
            "mrr": mrr(returned, ideal),
            "ndcg_at_10": ndcg_at_k(returned, ideal, 10),
            "error": error,
        }
        if pii_check_on:
            pii_gate_total += 1
            leaks = pii_scan_results(results)
            row["pii_check"] = True
            row["pii_leaks"] = leaks
            row["pii_clean"] = not leaks
            if leaks:
                pii_gate_failures.append({"id": qid, "leaks": leaks})
            else:
                pii_gate_passed += 1
        per_query.append(row)
        by_cat[category].append(row)

    def avg(rows, field):
        if not rows:
            return 0.0
        return round(sum(r[field] for r in rows) / len(rows), 4)

    latencies = [r["latency_ms"] for r in per_query]
    isolation = pii_isolation_check(backend, user_id) if _PII_OK else {
        "clean": None,
        "details": [{"status": "pii_lib_unavailable",
                      "error": _PII_IMPORT_ERR}],
    }
    pii_gate_clean = (
        pii_gate_total > 0
        and pii_gate_passed == pii_gate_total
        and isolation.get("clean") is not False
    )
    aggregate = {
        "query_count": len(per_query),
        "skipped_unfilled": skipped_unfilled,
        "skipped_unbounded_k": skipped_unbounded,
        "recall_at_5": avg(per_query, "recall_at_5"),
        "recall_at_10": avg(per_query, "recall_at_10"),
        "mrr": avg(per_query, "mrr"),
        "ndcg_at_10": avg(per_query, "ndcg_at_10"),
        "latency_ms_p50": round(percentile(latencies, 50), 2),
        "latency_ms_p95": round(percentile(latencies, 95), 2),
        "latency_ms_mean": round(statistics.mean(latencies), 2),
        "pii_gate": {
            "total": pii_gate_total,
            "passed": pii_gate_passed,
            "clean": pii_gate_clean,
            "isolation": isolation,
            "failures": pii_gate_failures,
        },
    }

    category_summary: Dict[str, Dict[str, Any]] = {}
    for cat, rows in by_cat.items():
        cat_lat = [r["latency_ms"] for r in rows]
        category_summary[cat] = {
            "count": len(rows),
            "recall_at_5": avg(rows, "recall_at_5"),
            "recall_at_10": avg(rows, "recall_at_10"),
            "mrr": avg(rows, "mrr"),
            "ndcg_at_10": avg(rows, "ndcg_at_10"),
            "latency_ms_p50": round(percentile(cat_lat, 50), 2),
        }

    embed_meta = resolve_embed_meta(backend)
    report = {
        "config": {
            "gold_set": str(gold_path),
            "memory_prefix": memory_prefix,
            "embedding_provider": embed_meta["provider"],
            "embedding_model": embed_meta["model"],
            "rerank": embed_meta.get("rerank", "none"),
            "rerank_model": embed_meta.get("rerank_model", "n/a"),
            "lexical": embed_meta.get("lexical", "simple"),
            "embedder2": embed_meta.get("embedder2", "none"),
            "embedder2_model": embed_meta.get("embedder2_model", "n/a"),
            "search_limit": search_limit,
            "warmup": warmup,
            "ts": time.strftime("%Y-%m-%dT%H:%M:%S"),
        },
        "aggregate": aggregate,
        "by_category": category_summary,
        "per_query": per_query,
    }

    out_base.parent.mkdir(parents=True, exist_ok=True)
    out_json = out_base.with_suffix(".json")
    out_md = out_base.with_suffix(".md")
    with out_json.open("w") as f:
        json.dump(report, f, indent=2, ensure_ascii=False)
    with out_md.open("w") as f:
        f.write(render_markdown(report))

    print(f"[eval] JSON → {out_json}")
    print(f"[eval] MD   → {out_md}")
    print(f"[eval] Recall@5={aggregate['recall_at_5']} "
          f"MRR={aggregate['mrr']} "
          f"p95={aggregate['latency_ms_p95']}ms "
          f"({aggregate['query_count']} queries, "
          f"{aggregate['skipped_unfilled']} skipped)")
    gate = aggregate.get("pii_gate") or {}
    if gate.get("total", 0) > 0:
        verdict = "PASS" if gate.get("clean") else "FAIL"
        print(f"[eval] PII gate {verdict} — {gate.get('passed', 0)}/"
              f"{gate.get('total', 0)} queries clean, isolation "
              f"{'clean' if gate.get('isolation', {}).get('clean') else 'leak'}")
    return report


def render_markdown(report: Dict[str, Any]) -> str:
    cfg = report["config"]
    agg = report["aggregate"]
    cats = report["by_category"]
    lines = [
        f"# Eval Report — {Path(cfg['gold_set']).name}",
        "",
        f"Generated: {cfg['ts']}",
        "",
        "## Configuration",
        "",
        f"- Embedding provider: `{cfg['embedding_provider']}`",
        f"- Embedding model: `{cfg['embedding_model']}`",
        f"- Second embedder (RRF): `{cfg.get('embedder2', 'none')}`"
        + (f" (`{cfg.get('embedder2_model')}`)"
           if cfg.get('embedder2', 'none') != 'none' else ""),
        f"- Lexical scorer: `{cfg.get('lexical', 'simple')}`",
        f"- Reranker: `{cfg.get('rerank', 'none')}`"
        + (f" (`{cfg.get('rerank_model')}`)"
           if cfg.get('rerank', 'none') != 'none' else ""),
        f"- Memory prefix: `{cfg['memory_prefix']}`",
        f"- Search limit: {cfg['search_limit']}",
        f"- Query count: {agg['query_count']} "
        f"(skipped without ideal_keys: {agg['skipped_unfilled']}, "
        f"skipped unbounded_k: {agg['skipped_unbounded_k']})",
        "",
        "## Aggregate",
        "",
        "| Metric | Value |",
        "|---|---|",
        f"| Recall@5     | {agg['recall_at_5']} |",
        f"| Recall@10    | {agg['recall_at_10']} |",
        f"| MRR          | {agg['mrr']} |",
        f"| nDCG@10      | {agg['ndcg_at_10']} |",
        f"| Latency p50  | {agg['latency_ms_p50']} ms |",
        f"| Latency p95  | {agg['latency_ms_p95']} ms |",
        f"| Latency mean | {agg['latency_ms_mean']} ms |",
        "",
        "## By Category",
        "",
        "| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |",
        "|---|---|---|---|---|---|---|",
    ]
    for cat in sorted(cats.keys()):
        c = cats[cat]
        lines.append(
            f"| {cat} | {c['count']} | {c['recall_at_5']} | "
            f"{c['recall_at_10']} | {c['mrr']} | {c['ndcg_at_10']} | "
            f"{c['latency_ms_p50']} ms |"
        )
    gate = agg.get("pii_gate") or {}
    if gate.get("total", 0) > 0 or gate.get("isolation"):
        lines += [
            "",
            "## PII Gate",
            "",
            f"- pii_check queries run:  {gate.get('total', 0)}",
            f"- pii_check queries clean: {gate.get('passed', 0)}",
            f"- Overall gate verdict:    "
            f"{'PASS' if gate.get('clean') else 'FAIL'}",
            "",
        ]
        iso = gate.get("isolation") or {}
        if iso.get("details"):
            lines += [
                "### PII Store Isolation",
                "",
                "| Probe | Status | Notes |",
                "|---|---|---|",
            ]
            for d in iso["details"]:
                if d.get("status") == "leaked":
                    note = ", ".join(d.get("leaked_keys") or [])
                elif d.get("status") == "search_failed":
                    note = d.get("error", "—")
                else:
                    note = f"{d.get('returned_keys_count', 0)} rows, none from PII stores"
                lines.append(
                    f"| `{d.get('probe', '?')}` | {d.get('status', '?')} | "
                    f"{note} |"
                )
            lines.append("")
        if gate.get("failures"):
            lines += [
                "### PII Query Failures",
                "",
                "| Query | Leaked rows |",
                "|---|---|",
            ]
            for f in gate["failures"]:
                rows_summary = ", ".join(
                    leak["key"][:32] for leak in f.get("leaks", [])
                )
                lines.append(f"| {f['id']} | {rows_summary} |")
            lines.append("")
    lines += [
        "Per-query detail with returned vs. ideal keys: see the "
        "accompanying `.json`.",
        "",
    ]
    return "\n".join(lines)


# ---------------------------------------------------------------- #
#  Collect mode — surface candidates so the human can label fast    #
# ---------------------------------------------------------------- #
DEFAULT_YAML = _REPO_ROOT / "tests" / "eval" / "gold_set_v0.yaml"


def collect_candidates(query: str, memory_prefix: str, user_id: str,
                        limit: int = 20) -> List[Dict[str, Any]]:
    backend = build_backend(memory_prefix)
    try:
        results = backend.search(user_id, query, limit=limit)
    except Exception as exc:
        print(f"[eval] search failed: {exc}", file=sys.stderr)
        sys.exit(1)

    print(f"\nQuery: {query!r}")
    print(f"Backend: prefix=__mem_{memory_prefix}_mem  user={user_id}  "
          f"results={len(results)}")
    print()
    # Truncate the key column so very long ids (Outlook EWS keys can be
    # 200+ chars) don't blow out the row width. The full key still goes
    # into the YAML when --label is used.
    print(f"{'#':<3} {'Key (truncated)':<48} {'Score':<7} Fact (truncated)")
    print("-" * 130)
    for i, r in enumerate(results, start=1):
        key = r.get("key", "")
        key_display = key if len(key) <= 46 else key[:43] + "..."
        score = r.get("score", 0)
        fact = (r.get("fact") or r.get("text") or r.get("snippet")
                or r.get("subject") or r.get("summary") or "")
        fact = str(fact).replace("\n", " ")[:70]
        print(f"{i:<3} {key_display:<48} {score:<7} {fact}")
    print()
    return results


def parse_pick(s: str) -> List[int]:
    """Parse '1,3,5' or '1 3 5' into a list of 1-indexed row numbers."""
    cleaned = s.replace(",", " ").split()
    out: List[int] = []
    for part in cleaned:
        try:
            out.append(int(part))
        except ValueError:
            print(f"[eval] --pick: skipping non-integer token {part!r}",
                  file=sys.stderr)
    return out


def label_query(yaml_path: Path, query_id: str, picked_keys: List[str],
                 append: bool = False) -> None:
    """Write picked_keys into the gold YAML's `ideal_keys` slot for the
    query whose `id` matches `query_id`. Comments are preserved via
    ruamel.yaml round-trip."""
    try:
        from ruamel.yaml import YAML
    except ImportError:
        print("[eval] --label requires ruamel.yaml — install with: "
              "pip install ruamel.yaml", file=sys.stderr)
        sys.exit(2)
    rw = YAML()
    rw.preserve_quotes = True
    rw.width = 4096
    # Keep `- id: …` items indented under `queries:` the same way the
    # hand-edited template uses them — sequence indented 4, dash at
    # column 2 → reads identically to a 2-space block mapping.
    rw.indent(mapping=2, sequence=4, offset=2)
    with yaml_path.open() as f:
        doc = rw.load(f)
    queries = doc.get("queries") or []
    target = None
    for q in queries:
        if q.get("id") == query_id:
            target = q
            break
    if target is None:
        print(f"[eval] no query with id={query_id!r} in {yaml_path}. "
              f"Add it to the YAML first, then re-run --label.",
              file=sys.stderr)
        sys.exit(2)
    if append:
        existing = list(target.get("ideal_keys") or [])
        merged = list(existing)
        for k in picked_keys:
            if k not in merged:
                merged.append(k)
        target["ideal_keys"] = merged
    else:
        target["ideal_keys"] = list(picked_keys)
    with yaml_path.open("w") as f:
        rw.dump(doc, f)
    action = "appended to" if append else "wrote"
    print(f"[eval] {action} {len(target['ideal_keys'])} ideal_keys for "
          f"{query_id} → {yaml_path}")


# ---------------------------------------------------------------- #
#  CLI                                                               #
# ---------------------------------------------------------------- #
def main() -> None:
    p = argparse.ArgumentParser(
        description="MCP memory retrieval evaluation harness.",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=(
            "Examples:\n"
            "  # Full eval, baseline run\n"
            "  python tests/eval_memory_quality.py \\\n"
            "      --gold tests/eval/gold_set_v0.yaml \\\n"
            "      --out  docs/eval/baseline-$(date +%Y-%m-%d)\n\n"
            "  # Collect candidates for one query\n"
            "  python tests/eval_memory_quality.py \\\n"
            "      --collect 'Süreyya neden yazıyor son hafta'\n\n"
            "  # Collect + label + write YAML in one shot\n"
            "  python tests/eval_memory_quality.py \\\n"
            "      --collect 'Süreyya neden yazıyor son hafta' \\\n"
            "      --label q010 --pick '1,3,5'\n"
        ),
    )
    p.add_argument("--gold", type=Path,
                   help="Path to gold_set_*.yaml (full eval mode).")
    p.add_argument("--out", type=Path,
                   help="Output base path; writes .json and .md.")
    p.add_argument("--collect", type=str,
                   help="Probe live backend with one query; print "
                        "candidate keys for manual labeling.")
    p.add_argument("--prefix", type=str, default="mcp",
                   help="MEMORY STORE prefix (default: mcp). Used in "
                        "collect mode; full eval reads from YAML metadata.")
    p.add_argument("--limit", type=int, default=10,
                   help="search_memory limit (default 10).")
    p.add_argument("--no-warmup", action="store_true",
                   help="Skip the warmup query (faster start, cold "
                        "first-row latency).")
    p.add_argument("--label", type=str,
                   help="With --collect: write the picked rows' keys "
                        "into ideal_keys for this query id "
                        "(e.g. q001). Requires --pick.")
    p.add_argument("--pick", type=str,
                   help="Comma- or space-separated 1-indexed row "
                        "numbers from --collect output (e.g. '1,3,5').")
    p.add_argument("--append", action="store_true",
                   help="With --label: append to existing ideal_keys "
                        "(deduplicated) instead of overwriting.")
    p.add_argument("--yaml", type=Path, default=DEFAULT_YAML,
                   help=f"Gold YAML to edit when --label is used "
                        f"(default: {DEFAULT_YAML.relative_to(_REPO_ROOT)}).")
    args = p.parse_args()

    if args.collect:
        user_id = os.environ.get("MCP_USER_ID")
        if not user_id:
            print("[eval] MCP_USER_ID must be set for --collect mode",
                  file=sys.stderr)
            sys.exit(2)
        results = collect_candidates(
            args.collect, args.prefix, user_id,
            limit=max(args.limit, 20))
        if args.label:
            if not args.pick:
                print("[eval] --label requires --pick "
                      "(e.g. --pick '1,3,5')", file=sys.stderr)
                sys.exit(2)
            picks = parse_pick(args.pick)
            picked_keys: List[str] = []
            for n in picks:
                if 1 <= n <= len(results):
                    picked_keys.append(results[n - 1]["key"])
                else:
                    print(f"[eval] --pick: row #{n} out of range "
                          f"(1..{len(results)})", file=sys.stderr)
            if not picked_keys:
                print("[eval] no valid picks; nothing written.",
                      file=sys.stderr)
                sys.exit(2)
            label_query(args.yaml, args.label, picked_keys,
                         append=args.append)
        else:
            print("To label: re-run with --label qXXX --pick '1,3,5' "
                  "or paste keys manually into "
                  f"{args.yaml.relative_to(_REPO_ROOT)}.")
        return

    if not args.gold or not args.out:
        p.error("--gold and --out are required for full eval mode "
                "(or use --collect for candidate exploration)")
    if not args.gold.exists():
        print(f"[eval] gold set not found: {args.gold}", file=sys.stderr)
        sys.exit(2)

    report = run_eval(args.gold, args.out, search_limit=args.limit,
                       warmup=not args.no_warmup)
    # PII gate is a CI hard gate (Adım 3): when any pii_check
    # queries were measured and either a query leaked or an
    # isolation probe leaked, exit non-zero so the pipeline blocks.
    gate = report["aggregate"].get("pii_gate") or {}
    if gate.get("total", 0) > 0 and not gate.get("clean"):
        print("[eval] PII gate FAIL — exiting 3", file=sys.stderr)
        sys.exit(3)


if __name__ == "__main__":
    main()
