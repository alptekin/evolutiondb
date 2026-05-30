"""
profile — user interest profile as a K-cluster mixture (Adım 17).

A daily job clusters the user's recent row embeddings into 5-10 interest
clusters; each cluster keeps a centroid, a human-readable label, and a weight
(its share of the corpus). Retrieval then biases results toward the clusters
the query points at:

    final = α · query_sim(row) + β · max over active clusters of
            cosine(row_emb, centroid)

so "the system knows what I care about" — and transparently: the labels are
extractive (top tags / entities / keywords) by default, or generated when
EVOSQL_PROFILE_LLM is set. Cold start: a user with < min_rows rows gets no
profile (the boost stays passive).

Storage: <prefix>_profile_clusters, key = cluster_id, value = {cluster_id,
centroid (b64i8), label, weight, size, refreshed_at}.

K-means here is dependency-free spherical (cosine) Lloyd's iteration with a
seeded k-means++ init — deterministic, no scikit-learn.

CLI (daily job):
  python -m mcp_server_evosql.profile --namespace alptekin_topal [--dry-run]
  python -m mcp_server_evosql.profile --namespace alptekin_topal --show
"""
from __future__ import annotations

import argparse
import json
import math
import os
import random
import re
import sys
import time
from typing import Any, Dict, List, Optional, Sequence, Tuple

from .embeddings import cosine, decode_vec, encode_vec

MIN_ROWS = 20          # cold-start threshold
K_MIN, K_MAX = 2, 10
TARGET_PER_CLUSTER = 4
_STOP = set("ve ile bir bu şu the a an of to and or for in on at is are was "
            "ne oldu için çok daha en de da ki mi mı".split())


def _norm_vec(v: Sequence[float]) -> List[float]:
    n = math.sqrt(sum(x * x for x in v)) or 1.0
    return [x / n for x in v]


def _mean(vecs: List[List[float]]) -> List[float]:
    d = len(vecs[0])
    acc = [0.0] * d
    for v in vecs:
        for i in range(d):
            acc[i] += v[i]
    return [a / len(vecs) for a in acc]


def kmeans(vecs: List[List[float]], k: int, *, iters: int = 30,
           seed: int = 17) -> Tuple[List[int], List[List[float]]]:
    """Spherical (cosine) k-means with seeded k-means++ init. Vectors are
    L2-normalized; centroids are the normalized cluster means. Returns
    (label per vector, centroids). Deterministic for a fixed seed."""
    rng = random.Random(seed)
    pts = [_norm_vec(v) for v in vecs]
    n = len(pts)
    k = max(1, min(k, n))
    # k-means++ seeding by cosine distance (1 - dot)
    first = rng.randrange(n)
    centroids = [pts[first]]
    while len(centroids) < k:
        d2 = []
        for p in pts:
            best = max(sum(a * b for a, b in zip(p, c)) for c in centroids)
            d2.append(max(0.0, 1.0 - best) ** 2)
        tot = sum(d2)
        if tot <= 0:
            centroids.append(pts[rng.randrange(n)])
            continue
        r = rng.random() * tot
        acc = 0.0
        for i, w in enumerate(d2):
            acc += w
            if acc >= r:
                centroids.append(pts[i])
                break
    labels = [0] * n
    for _ in range(iters):
        changed = False
        for i, p in enumerate(pts):
            best, bj = -2.0, 0
            for j, c in enumerate(centroids):
                s = sum(a * b for a, b in zip(p, c))
                if s > best:
                    best, bj = s, j
            if labels[i] != bj:
                labels[i] = bj
                changed = True
        for j in range(len(centroids)):
            members = [pts[i] for i in range(n) if labels[i] == j]
            if members:
                centroids[j] = _norm_vec(_mean(members))
        if not changed:
            break
    return labels, centroids


def _label(rows: List[dict], names: Dict[str, str]) -> str:
    """Extractive 5-word label: prefer entity/tag names, fall back to the
    most frequent content tokens. EVOSQL_PROFILE_LLM swaps in a generated
    label (best-effort)."""
    backend = os.environ.get("EVOSQL_PROFILE_LLM", "").strip().lower()
    if backend:
        try:
            return _llm_label(rows, backend)
        except Exception:
            pass
    freq: Dict[str, int] = {}
    for r in rows:
        for nm in r.get("ent_names", ()):
            freq[nm] = freq.get(nm, 0) + 3      # entities weigh more
        for t in r.get("tags", ()):
            freq[t.lower()] = freq.get(t.lower(), 0) + 2
        for w in re.findall(r"[\wçğıöşüÇĞİÖŞÜ]+", (r.get("text") or "").lower()):
            if len(w) > 2 and w not in _STOP and not w.isdigit():
                freq[w] = freq.get(w, 0) + 1
    top = sorted(freq, key=lambda w: -freq[w])[:5]
    return ", ".join(top) if top else "—"


def _llm_label(rows: List[dict], backend: str) -> str:
    sample = "\n".join(f"- {(r.get('text') or '')[:120]}" for r in rows[:10])
    prompt = ("Summarize this cluster of a user's notes in <=5 words "
              "(a topic label). Notes:\n" + sample)
    if backend == "ollama":
        import urllib.request
        host = os.environ.get("OLLAMA_HOST", "http://127.0.0.1:11434")
        model = os.environ.get("EVOSQL_PROFILE_LLM_MODEL", "llama3.1")
        body = json.dumps({"model": model, "prompt": prompt,
                           "stream": False}).encode()
        req = urllib.request.Request(host + "/api/generate", body,
                                     {"Content-Type": "application/json"})
        with urllib.request.urlopen(req, timeout=30) as r:
            return json.loads(r.read().decode()).get("response", "").strip()[:60]
    if backend in ("anthropic", "sonnet"):
        import anthropic
        c = anthropic.Anthropic()
        m = c.messages.create(
            model=os.environ.get("EVOSQL_PROFILE_LLM_MODEL", "claude-sonnet-4-6"),
            max_tokens=40, messages=[{"role": "user", "content": prompt}])
        return m.content[0].text.strip()[:60]
    raise RuntimeError("unknown EVOSQL_PROFILE_LLM backend")


def _pick_k(n: int, k: Optional[int]) -> int:
    if k:
        return max(K_MIN, min(k, K_MAX, n))
    return max(K_MIN, min(K_MAX, n // TARGET_PER_CLUSTER))


def build_profile(backend, user_id: str, *, window_days: int = 90,
                  k: Optional[int] = None, min_rows: int = MIN_ROWS,
                  dry_run: bool = False) -> List[dict]:
    """Cluster the user's recent embedded rows into an interest mixture and
    persist one record per cluster. Returns the cluster summaries (without
    the centroid vectors). Empty list on cold start (< min_rows embedded
    rows) — the retrieval boost then stays passive."""
    from .server import _e

    now = time.time()
    horizon = now - window_days * 86400.0 if window_days > 0 else 0.0

    # entity names per row (for labels)
    ent_by_row: Dict[str, List[str]] = {}
    names: Dict[str, str] = {}
    for r in backend._query(
            f"SELECT mem_value FROM __mem_{backend.entity_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 200000") or []:
        try:
            e = json.loads(r[0]); names[e["id"]] = e["canonical"]
        except Exception:
            pass
    for r in backend._query(
            f"SELECT mem_value FROM __mem_{backend.mention_store} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 500000") or []:
        try:
            m = json.loads(r[0])
            ent_by_row.setdefault(m["mem_key"], []).append(
                names.get(m["entity_id"], ""))
        except Exception:
            pass

    rows: List[dict] = []
    vecs: List[List[float]] = []
    for r in backend._query(
            f"SELECT mem_key, mem_value FROM __mem_{backend.memory} "
            f"WHERE mem_namespace = '{_e(user_id)}' LIMIT 100000") or []:
        try:
            rec = json.loads(r[1]) if r[1] else {}
        except Exception:
            continue
        if rec.get("is_episode"):
            continue
        v = decode_vec(rec.get("emb"))
        if not v:
            continue
        ts = rec.get("created")
        if horizon and isinstance(ts, (int, float)) and ts < horizon:
            continue
        rows.append({"text": " ".join(str(rec.get(x) or "") for x in
                                      ("fact", "text", "subject")),
                     "tags": rec.get("tags") or [],
                     "ent_names": [n for n in ent_by_row.get(r[0], []) if n]})
        vecs.append(v)

    if len(vecs) < min_rows:
        return []          # cold start — profile passive

    kk = _pick_k(len(vecs), k)
    labels, centroids = kmeans(vecs, kk)
    clusters: List[dict] = []
    total = len(vecs)
    for j in range(len(centroids)):
        members = [i for i in range(total) if labels[i] == j]
        if not members:
            continue
        cid = f"cl_{int(now)}_{j}"
        rec = {"cluster_id": cid,
               "centroid": encode_vec(centroids[j]),
               "label": _label([rows[i] for i in members], names),
               "weight": round(len(members) / total, 4),
               "size": len(members),
               "refreshed_at": now}
        if not dry_run:
            backend._exec(
                f"MEMORY PUT INTO {backend.profile_store} VALUES "
                f"('{_e(user_id)}','{_e(cid)}','{_e(json.dumps(rec))}')")
        clusters.append({k2: v for k2, v in rec.items() if k2 != "centroid"})
    clusters.sort(key=lambda c: -c["weight"])
    return clusters


def main() -> int:
    from .server import MemoryBackend

    ap = argparse.ArgumentParser()
    ap.add_argument("--namespace", required=True)
    ap.add_argument("--prefix", default=os.environ.get("MCP_STORE_PREFIX", "mcp"))
    ap.add_argument("--window-days", type=int, default=90)
    ap.add_argument("--k", type=int, default=None)
    ap.add_argument("--show", action="store_true",
                    help="Print the stored profile and exit.")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    b = MemoryBackend(
        os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        int(os.environ.get("EVOSQL_PORT", "5433")),
        os.environ.get("EVOSQL_USER", "admin"),
        os.environ.get("EVOSQL_PASSWORD", "admin"),
        os.environ.get("EVOSQL_DATABASE", "evosql"),
        args.prefix)

    if args.show:
        for c in b.show_profile(args.namespace):
            print(f"  [{c['weight']:.2f}] {c['label']}  (n={c['size']})")
        return 0

    cl = build_profile(b, args.namespace, window_days=args.window_days,
                       k=args.k, dry_run=args.dry_run)
    if not cl:
        print(f"ns={args.namespace}: cold start (< {MIN_ROWS} embedded rows), "
              "profile passive")
        return 0
    print(f"ns={args.namespace}: {len(cl)} interest cluster(s)"
          + (" (dry-run)" if args.dry_run else ""))
    for c in cl:
        print(f"  [{c['weight']:.2f}] {c['label']}  (n={c['size']})")
    return 0


if __name__ == "__main__":
    sys.exit(main())
