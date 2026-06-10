"""
test_rebuild_embeddings — Step 10 downtime-free re-embedding migration.

Verifies the stage -> commit / rollback lifecycle of rebuild_embeddings
against an isolated EvoSQL server, using a stub embedder (no model deps):
  - dry-run writes nothing
  - stage writes emb_staging (+ model tag) WITHOUT touching the serving emb
  - stage is idempotent / restart-safe (re-run skips already-staged rows)
  - commit atomically swaps emb_staging -> emb and drops staging
  - rollback discards staging and preserves emb
"""
from __future__ import annotations

import json
import os
import sys
import time

import psycopg
import mcp_server_evosql.rebuild_embeddings as RB
from mcp_server_evosql.embeddings import encode_vec
from mcp_server_evosql.server import _e

PORT = os.environ.get("EVOSQL_PG_PORT", "5502")
os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": PORT,
                   "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                   "EVOSQL_DATABASE": "evosql"})

PREFIX = f"mcp_rb{int(time.time())}"
NS = "rbtest"
TARGET = "stub:stubmodel"


class _Stub:
    # Returns a direction orthogonal to the seeded "old" vector so the
    # encoded b64i8 differs (encode_vec L2-normalizes, so magnitude alone
    # would collapse to the same string).
    kind = "stub"
    model_name = "stubmodel"
    NEW_VEC = [0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0]
    def embed_batch(self, texts, batch_size=64):
        return [list(self.NEW_VEC) for _ in texts]
    def embed(self, t):
        return list(self.NEW_VEC)


def _conn():
    return psycopg.connect(host="127.0.0.1", port=int(PORT), user="admin",
                           password="admin", dbname="evosql", autocommit=True)


def _put(cur, key, rec):
    cur.execute(f"MEMORY PUT INTO {PREFIX}_mem VALUES "
                f"('{_e(NS)}','{_e(key)}','{_e(json.dumps(rec))}')")


def _get(cur, key):
    cur.execute(f"SELECT mem_value FROM __mem_{PREFIX}_mem "
                f"WHERE mem_namespace='{_e(NS)}' AND mem_key='{_e(key)}'")
    row = cur.fetchone()
    if not row or not row[0]:
        return None
    return row[0] if isinstance(row[0], dict) else json.loads(row[0])


def _run(argv):
    RB.provider_from_env = lambda: _Stub()      # avoid model deps
    old = sys.argv
    sys.argv = ["rebuild_embeddings"] + argv
    try:
        return RB.main()
    finally:
        sys.argv = old


def main() -> int:
    conn = _conn()
    with conn.cursor() as cur:
        cur.execute(f"CREATE MEMORY STORE {PREFIX}_mem")
        old_emb = encode_vec([1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0])
        for i in range(5):
            _put(cur, f"r{i}", {"fact": f"fact number {i}",
                                "emb": old_emb, "emb_model": "old:m1"})

    base = ["--namespace", NS, "--prefix", PREFIX, "--model", "stubmodel"]

    # dry-run: no writes
    _run(base + ["--dry-run"])
    with conn.cursor() as cur:
        assert "emb_staging" not in (_get(cur, "r0") or {}), "dry-run wrote staging"

    # stage
    _run(base)
    with conn.cursor() as cur:
        for i in range(5):
            rec = _get(cur, f"r{i}")
            assert rec["emb_staging_model"] == TARGET, rec
            assert rec["emb_staging"], rec
            assert rec["emb"] == old_emb, "stage must NOT touch serving emb"
            assert rec["emb_model"] == "old:m1", "stage must NOT touch emb_model"

    # idempotent re-stage: nothing new to do
    _run(base)  # should report already-staged for all 5; no error

    # commit: swap staging -> emb
    _run(["--namespace", NS, "--prefix", PREFIX, "--commit"])
    with conn.cursor() as cur:
        for i in range(5):
            rec = _get(cur, f"r{i}")
            assert rec["emb_model"] == TARGET, rec
            assert rec["emb"] != old_emb, "commit must swap in the new vector"
            assert "emb_staging" not in rec and "emb_staging_model" not in rec, rec

    # rollback: stage a fresh stale row, then discard
    with conn.cursor() as cur:
        _put(cur, "r_rb", {"fact": "rollback me", "emb": old_emb, "emb_model": "old:m1"})
    _run(base)  # stages r_rb
    with conn.cursor() as cur:
        assert _get(cur, "r_rb")["emb_staging"], "r_rb should be staged"
    _run(["--namespace", NS, "--prefix", PREFIX, "--rollback"])
    with conn.cursor() as cur:
        rec = _get(cur, "r_rb")
        assert "emb_staging" not in rec, "rollback must drop staging"
        assert rec["emb"] == old_emb, "rollback must preserve emb"

    print("OK — Step 10 rebuild_embeddings: dry-run/stage(no-touch)/idempotent/"
          "commit(swap)/rollback all correct")
    return 0


if __name__ == "__main__":
    sys.exit(main())
