"""
tests/remask_corpus.py — re-apply PII masking to every memory row.

Adım 3 retroaktif: sync clients yazarken `EVOSQL_PII_MASK=auto`
default'u keystore-okuma race/cache'i sebebiyle mask atlamış,
corpus'a plaintext PII düşmüş. Bu script her satırı çeker,
evolutiondb_pii.integration.protect_record'ı `MASK=on` modunda
çağırır (engine eksikse istemediğimiz şeydir, fail-loud), maskelenen
fact + structured field'ları geri yazar, üretilen şifreli
companion token row'larını da `__mem_mcp_mem` içine PUT eder.

Idempotent: zaten mask'li olan satırlar protect_record tarafından
no-op kabul edilir (mask sonrası fact aynen döner, token üretilmez).

Kullanım:
    EVOSQL_PII_KEYSTORE=db EVOSQL_PII_RULES=db EVOSQL_PII_MASK=on \\
    MCP_USER_ID=alptekin_topal \\
    python tests/remask_corpus.py --prefix mcp

    # Bir parça çalıştır, ya da progress aralığını değiştir
    python tests/remask_corpus.py --prefix mcp --limit 200 --progress-every 50
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time
from pathlib import Path

_REPO_ROOT = Path(__file__).resolve().parents[1]
_MCP_PKG = _REPO_ROOT / "client" / "mcp-server-evosql"
_PII_PKG = _REPO_ROOT / "client" / "evolutiondb-pii"
for pkg in (_MCP_PKG, _PII_PKG):
    if str(pkg) not in sys.path:
        sys.path.insert(0, str(pkg))

os.environ.setdefault("EVOSQL_PII_KEYSTORE", "db")
os.environ.setdefault("EVOSQL_PII_RULES", "db")
os.environ.setdefault("EVOSQL_PII_MASK", "on")

from mcp_server_evosql.server import MemoryBackend, _e  # noqa: E402
from evolutiondb_pii.integration import protect_record  # noqa: E402
from evolutiondb_pii import mask as _pii_mask  # noqa: E402


# Fields per source that a sync client would PII-protect. Anything
# missing from this list stays unchanged; structural identifiers
# (message_id, internal_date_ms, …) are not PII and must not be
# rewritten. Names align with what the existing sync clients pass to
# protect_record() so this script's masking sees the same shape.
_FIELDS_BY_SOURCE = {
    "outlook":  ["fact", "subject", "from", "to", "cc", "snippet", "body"],
    "gmail":    ["fact", "subject", "from", "to", "cc", "snippet", "body"],
    "teams":    ["fact", "text", "from", "sender"],
    "imessage": ["fact", "text", "sender", "body"],
    "browser":  ["fact", "title", "url"],
    "youtube":  ["fact", "title", "channel", "author"],
    "notes":    ["fact", "title", "body"],
    "calendar": ["fact", "summary", "description", "attendees"],
    "slack":    ["fact", "text", "sender", "body"],
    "github":   ["fact", "title", "body"],
    "notion":   ["fact", "title", "body"],
}
_DEFAULT_FIELDS = ["fact"]


def fields_for(rec: dict) -> list:
    src = (rec.get("source") or "").lower()
    return _FIELDS_BY_SOURCE.get(src, _DEFAULT_FIELDS)


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--prefix", default=os.environ.get("MCP_MEMORY_PREFIX",
                                                       "mcp"))
    p.add_argument("--user",   default=os.environ.get("MCP_USER_ID",
                                                       "alptekin_topal"))
    p.add_argument("--limit",  type=int, default=0)
    p.add_argument("--progress-every", type=int, default=500)
    p.add_argument("--mask-only", action="store_true",
                    help="Skip RSA-encrypted companion rows. Drops "
                         "the recoverability path but runs ~10x "
                         "faster — appropriate when the original "
                         "data can be re-synced from source.")
    args = p.parse_args()

    backend = MemoryBackend(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "5433")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        database=os.environ.get("EVOSQL_DATABASE", "testdb"),
        prefix=args.prefix,
        embedder=None,  # rewrite preserves whatever emb the row already has
    )

    rows = backend._query(
        f"SELECT mem_namespace, mem_key, mem_value FROM "
        f"__mem_{backend.memory} WHERE mem_namespace = "
        f"'{_e(args.user)}' LIMIT 1000000"
    )
    print(f"[remask] candidates fetched: {len(rows)}")

    rewritten = 0
    unchanged = 0
    tokens_written = 0
    put_failed = 0
    started = time.time()

    for i, r in enumerate(rows, start=1):
        if args.limit and rewritten + unchanged + put_failed >= args.limit:
            break
        ns, key, value = r[0], r[1], r[2]
        try:
            rec = json.loads(value) if value else None
        except Exception:
            unchanged += 1
            continue
        if not isinstance(rec, dict):
            unchanged += 1
            continue
        # Don't reprocess companion token rows — those are encrypted
        # and live in a separate keyspace (key_prefix_<chunk>).
        if "_pii_chunk" in rec or "_pii_index" in rec:
            unchanged += 1
            continue

        fields = fields_for(rec)
        try:
            if args.mask_only:
                masked = dict(rec)
                for field in fields:
                    v = masked.get(field)
                    if isinstance(v, str) and v:
                        masked[field] = _pii_mask(v)
                companions = []
            else:
                masked, companions = protect_record(
                    rec, fields=fields, key_prefix=f"{key}_pii"
                )
        except Exception as exc:
            put_failed += 1
            print(f"[remask] protect failed for {key[:40]}…: {exc}",
                  file=sys.stderr)
            continue

        if masked is rec or masked == rec:
            unchanged += 1
        else:
            new_value = json.dumps(masked, ensure_ascii=False)
            try:
                backend._exec(
                    f"MEMORY PUT INTO {backend.memory} VALUES "
                    f"('{_e(ns)}','{_e(key)}','{_e(new_value)}')"
                )
                rewritten += 1
            except Exception as exc:
                put_failed += 1
                print(f"[remask] PUT failed for {key[:40]}…: {exc}",
                      file=sys.stderr)
                continue

        # Companion token rows always lay down a fresh copy: the
        # encrypted ciphertext is keyed (key, iv) and we never
        # want a stale row to outlive its source. PUT is upsert.
        for chunk_key, chunk_rec in companions:
            chunk_value = json.dumps(chunk_rec, ensure_ascii=False)
            try:
                backend._exec(
                    f"MEMORY PUT INTO {backend.memory} VALUES "
                    f"('{_e(ns)}','{_e(chunk_key)}','{_e(chunk_value)}')"
                )
                tokens_written += 1
            except Exception as exc:
                put_failed += 1
                print(f"[remask] token PUT failed for "
                      f"{chunk_key[:40]}…: {exc}", file=sys.stderr)

        if i % args.progress_every == 0:
            elapsed = time.time() - started
            rate = i / max(elapsed, 0.001)
            print(f"[remask] {i}/{len(rows)} "
                  f"(rewritten={rewritten} unchanged={unchanged} "
                  f"tokens={tokens_written} put_failed={put_failed}) "
                  f"@ {rate:.1f} rows/s")

    elapsed = time.time() - started
    print(f"[remask] done in {elapsed:.1f}s — "
          f"rewritten={rewritten} unchanged={unchanged} "
          f"tokens_written={tokens_written} put_failed={put_failed}")
    return 0 if put_failed == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
