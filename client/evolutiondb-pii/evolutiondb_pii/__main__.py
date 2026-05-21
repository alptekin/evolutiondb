"""CLI entry point.

  evolutiondb-pii keygen          Create the RSA keypair under
                                   ~/.evosql/. Idempotent — refuses
                                   to overwrite existing files
                                   without --force.
  evolutiondb-pii scan FILE       Detect + mask FILE on stdout
                                   without writing any tokens.
                                   Quick way to test new rules.
  evolutiondb-pii encrypt FILE    Detect + mask + encrypt; emit
                                   {masked, cipher_tokens} JSON.
  evolutiondb-pii decrypt FILE    Reverse encrypt — needs the
                                   private key.
  evolutiondb-pii row-decrypt …   Same, but reads the row + its
                                   companions out of a live
                                   EvolutionDB memory store and
                                   prints the reconstructed JSON.
  evolutiondb-pii backfill …      Re-process every pre-rollout
                                   plaintext row in a store: detect
                                   PII, mask, encrypt, write back +
                                   write companions. Idempotent — a
                                   row that already carries
                                   `_pii_refs` is skipped.
"""
from __future__ import annotations

import argparse
import json
import os
import sys
from getpass import getpass
from pathlib import Path
from typing import List

from .crypto  import (
    DEFAULT_PRIVATE_KEY_PATH, DEFAULT_PUBLIC_KEY_PATH,
    decrypt_record, encrypt_record, generate_keypair,
    load_private_key, load_public_key,
)
from .mask    import mask
from .rules   import load_rules


def _cmd_keygen(args: argparse.Namespace) -> int:
    pub  = Path(args.public_key).expanduser()
    priv = Path(args.private_key).expanduser()
    if (pub.exists() or priv.exists()) and not args.force:
        print(f"error: keypair already exists at {pub} / {priv} — "
              "pass --force to overwrite (rotates the keypair; any "
              "previously-encrypted tokens become unreadable)",
              file=sys.stderr)
        return 2
    passphrase: bytes | None = None
    if args.passphrase:
        pw = getpass("Private key passphrase (empty = none): ")
        if pw:
            passphrase = pw.encode("utf-8")
    info = generate_keypair(public_path=str(pub),
                              private_path=str(priv),
                              bits=args.bits,
                              passphrase=passphrase)
    print(json.dumps({"ok": True, **info}))
    return 0


def _read_input(path: str) -> str:
    if path == "-":
        return sys.stdin.read()
    return Path(path).expanduser().read_text(encoding="utf-8")


def _cmd_scan(args: argparse.Namespace) -> int:
    text   = _read_input(args.input)
    rules  = load_rules(args.rules_file)
    masked = mask(text, rules=rules)
    sys.stdout.write(masked)
    sys.stdout.write("\n")
    return 0


def _cmd_encrypt(args: argparse.Namespace) -> int:
    text       = _read_input(args.input)
    rules      = load_rules(args.rules_file)
    public_key = load_public_key(args.public_key)
    record     = {"text": text}
    masked_rec, tokens = encrypt_record(
        record, fields=["text"],
        public_key=public_key, rules=rules)
    print(json.dumps(
        {"masked": masked_rec["text"], "cipher_tokens": tokens},
        ensure_ascii=False))
    return 0


def _cmd_decrypt(args: argparse.Namespace) -> int:
    blob = json.loads(_read_input(args.input))
    masked_rec = {"text": blob["masked"]}
    passphrase: bytes | None = None
    if args.passphrase:
        pw = getpass("Private key passphrase: ")
        if pw:
            passphrase = pw.encode("utf-8")
    priv = load_private_key(args.private_key, passphrase=passphrase)
    out = decrypt_record(masked_rec, blob.get("cipher_tokens", []),
                          private_key=priv)
    sys.stdout.write(out["text"])
    sys.stdout.write("\n")
    return 0


def _cmd_row_decrypt(args: argparse.Namespace) -> int:
    """Reconstruct the plaintext form of a record stored in
    EvolutionDB by stitching its main row together with the cipher
    tokens spread across its companion rows."""
    from . import store_io
    passphrase: bytes | None = None
    if args.passphrase:
        pw = getpass("Private key passphrase: ")
        if pw:
            passphrase = pw.encode("utf-8")
    priv = load_private_key(args.private_key, passphrase=passphrase)
    conn = store_io.connect_from_env()
    main_rec = store_io.fetch_row(conn, args.store, args.namespace,
                                    args.key)
    if main_rec is None:
        print(json.dumps({"ok": False, "error":
                          f"row not found: ns={args.namespace} "
                          f"key={args.key}"}),
              file=sys.stderr)
        return 4
    refs = main_rec.get("_pii_refs") or []
    if not refs:
        # Row was never PII-protected — return as-is so the same
        # CLI works on plaintext and protected rows alike.
        sys.stdout.write(json.dumps(main_rec, ensure_ascii=False))
        sys.stdout.write("\n")
        return 0
    tokens = store_io.gather_tokens(conn, args.store, args.namespace, refs)
    restored = decrypt_record(main_rec, tokens, private_key=priv)
    sys.stdout.write(json.dumps(restored, ensure_ascii=False))
    sys.stdout.write("\n")
    return 0


def _cmd_backfill(args: argparse.Namespace) -> int:
    """Walk every row in the store whose key starts with
    `--key-prefix` and is not already PII-protected, run it through
    detect → mask → encrypt, and write the masked record + the
    companion rows back. Existing protected rows are skipped so the
    command is safe to re-run.

    Re-syncs naturally create masked rows going forward; this
    command exists to bring old plaintext rows into line.
    """
    from . import store_io
    from .crypto       import load_public_key
    from .integration  import protect_record, reset_cache

    # Pre-flight: insist on a key file so the user can't silently
    # backfill without protection. Force the integration helper to
    # re-resolve in case the previous CLI command in this process
    # has already cached an `off` engine.
    load_public_key(args.public_key)
    os.environ["EVOSQL_PII_MASK"]       = "on"
    os.environ["EVOSQL_PII_PUBLIC_KEY"] = args.public_key
    reset_cache()

    conn = store_io.connect_from_env()
    rows = list(store_io.fetch_rows_with_prefix(
        conn, args.store, args.namespace, args.key_prefix,
        limit=args.limit))
    fields = args.fields.split(",") if args.fields else None
    if not fields:
        # Default to the union of every sync client's PII field
        # list — picks up subject / from / text / title / body /
        # snippet / etc. without the caller having to know.
        fields = ["fact", "subject", "from", "to", "cc", "snippet",
                   "body", "text", "title", "url", "description",
                   "summary", "location", "organizer", "attendees",
                   "sender", "handle", "chat", "channel",
                   "rfc_message_id"]

    seen, skipped, rewrote, errors = 0, 0, 0, 0
    for key, value in rows:
        seen += 1
        # Skip companion rows themselves (they carry their own
        # protected payload).
        if "_pii_" in key and key.rsplit("_", 1)[-1].isdigit():
            skipped += 1
            continue
        if value.get("_pii_refs"):
            skipped += 1
            continue
        try:
            masked, companions = protect_record(
                value, fields=fields, key_prefix=f"{key}_pii")
            if not companions:
                # Nothing detected — no point rewriting the row.
                skipped += 1
                continue
            if args.dry_run:
                rewrote += 1
                continue
            store_io.write_row(conn, args.store, args.namespace,
                                key, masked)
            for ck, cv in companions:
                store_io.write_row(conn, args.store, args.namespace,
                                    ck, cv)
            rewrote += 1
        except Exception as exc:  # noqa: BLE001
            errors += 1
            if errors <= 5:
                print(f"[backfill] {key}: {exc}",
                      file=sys.stderr, flush=True)

    print(json.dumps({"ok": True, "scanned": seen,
                      "rewrote": rewrote, "skipped": skipped,
                      "errors": errors,
                      "dry_run": args.dry_run}))
    return 0 if errors == 0 else 5


def main(argv: List[str] | None = None) -> int:
    parser = argparse.ArgumentParser(
        prog="evolutiondb-pii",
        description="Detect, mask, and hybrid-encrypt PII before "
                    "writing to EvolutionDB long-term memory.")
    sub = parser.add_subparsers(dest="cmd", required=True)

    # ── keygen ──────────────────────────────────────────────────
    sp = sub.add_parser("keygen", help="Create an RSA-2048 keypair")
    sp.add_argument("--public-key",  default=DEFAULT_PUBLIC_KEY_PATH)
    sp.add_argument("--private-key", default=DEFAULT_PRIVATE_KEY_PATH)
    sp.add_argument("--bits",        type=int, default=2048)
    sp.add_argument("--passphrase",  action="store_true",
                    help="Prompt for a passphrase to encrypt the "
                         "private key")
    sp.add_argument("--force",       action="store_true",
                    help="Overwrite an existing keypair on disk")
    sp.set_defaults(func=_cmd_keygen)

    # ── scan ────────────────────────────────────────────────────
    sp = sub.add_parser("scan",
        help="Show the masked rendering of a file without "
             "encrypting anything")
    sp.add_argument("input", help="path to a text file, or - for stdin")
    sp.add_argument("--rules-file", default=None)
    sp.set_defaults(func=_cmd_scan)

    # ── encrypt ─────────────────────────────────────────────────
    sp = sub.add_parser("encrypt",
        help="Detect + mask + encrypt; emit a {masked, "
             "cipher_tokens} JSON document")
    sp.add_argument("input")
    sp.add_argument("--rules-file", default=None)
    sp.add_argument("--public-key", default=DEFAULT_PUBLIC_KEY_PATH)
    sp.set_defaults(func=_cmd_encrypt)

    # ── decrypt ─────────────────────────────────────────────────
    sp = sub.add_parser("decrypt",
        help="Restore a record produced by `encrypt` back to its "
             "original text (needs the private key)")
    sp.add_argument("input")
    sp.add_argument("--private-key", default=DEFAULT_PRIVATE_KEY_PATH)
    sp.add_argument("--passphrase",  action="store_true",
                    help="Prompt for the private-key passphrase")
    sp.set_defaults(func=_cmd_decrypt)

    # ── row-decrypt ─────────────────────────────────────────────
    sp = sub.add_parser("row-decrypt",
        help="Fetch a row from a live EvolutionDB memory store, "
             "stitch its cipher tokens from the companion rows, "
             "and print the reconstructed JSON")
    sp.add_argument("--store",      default="mcp_mem")
    sp.add_argument("--namespace",  required=True,
                    help="The MCP_USER_ID under which the row was "
                         "written")
    sp.add_argument("--key",        required=True,
                    help="The mem_key of the primary row (e.g. "
                         "`outlook_msg_AAMk…`)")
    sp.add_argument("--private-key", default=DEFAULT_PRIVATE_KEY_PATH)
    sp.add_argument("--passphrase",  action="store_true")
    sp.set_defaults(func=_cmd_row_decrypt)

    # ── backfill ────────────────────────────────────────────────
    sp = sub.add_parser("backfill",
        help="Re-process every plaintext row in a store: detect "
             "PII, mask, encrypt, write back + drop companion rows. "
             "Skips rows that already carry `_pii_refs`. Pre-rollout "
             "history catches up to the masked default.")
    sp.add_argument("--store",      default="mcp_mem")
    sp.add_argument("--namespace",  required=True)
    sp.add_argument("--key-prefix", default="",
                    help="Limit to rows whose key starts with this "
                         "prefix (e.g. `outlook_msg_` only re-"
                         "encrypts Outlook mail)")
    sp.add_argument("--public-key", default=DEFAULT_PUBLIC_KEY_PATH)
    sp.add_argument("--fields",     default="",
                    help="Comma-separated field names to scan. "
                         "Default is the union of every sync "
                         "client's field list.")
    sp.add_argument("--limit",      type=int, default=100_000)
    sp.add_argument("--dry-run",    action="store_true",
                    help="Count what would change without writing")
    sp.set_defaults(func=_cmd_backfill)

    args = parser.parse_args(argv)
    try:
        return args.func(args)
    except Exception as exc:  # noqa: BLE001
        print(json.dumps({"ok": False, "error": str(exc)}),
              file=sys.stderr)
        return 4


if __name__ == "__main__":
    raise SystemExit(main())
