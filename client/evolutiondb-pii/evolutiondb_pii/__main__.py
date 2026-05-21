"""CLI entry point.

  evolutiondb-pii keygen           Create the RSA keypair under
                                    ~/.evosql/. Idempotent — refuses
                                    to overwrite existing files
                                    without --force.
  evolutiondb-pii scan FILE        Detect + mask FILE on stdout
                                    without writing any tokens.
                                    Quick way to test new rules.
  evolutiondb-pii encrypt FILE     Detect + mask + encrypt; emit
                                    {masked, cipher_tokens} JSON.
  evolutiondb-pii decrypt FILE     Reverse encrypt — needs the
                                    private key.
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

    args = parser.parse_args(argv)
    try:
        return args.func(args)
    except Exception as exc:  # noqa: BLE001
        print(json.dumps({"ok": False, "error": str(exc)}),
              file=sys.stderr)
        return 4


if __name__ == "__main__":
    raise SystemExit(main())
