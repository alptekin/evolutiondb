"""Hybrid encryption for the original (pre-mask) PII fragments.

RSA-2048 alone caps a single plaintext at ~245 bytes, which would
truncate any non-trivial body. We use the same pattern TLS / S/MIME
/ PGP use:

  1. Generate a random 256-bit AES key per token.
  2. AES-256-GCM encrypts the plaintext with a fresh 12-byte IV.
  3. RSA-OAEP (SHA-256) wraps the AES key with the user's public
     key, so encryption only needs the public half.
  4. The triple (wrapped_key, iv, ciphertext+tag) lands inside the
     row's `cipher_tokens` list. Decryption requires the private
     key, which never leaves `~/.evosql/pii_private.pem` and is
     only loaded on demand by callers that explicitly need the
     plaintext back.

This module owns:

  * `generate_keypair()`   — write a new RSA-2048 PEM pair to disk
  * `encrypt_record()`     — detect + mask + wrap the originals into
                              `cipher_tokens`
  * `decrypt_record()`     — restore the original string from a
                              record that went through
                              `encrypt_record`
"""
from __future__ import annotations

import base64
import os
import secrets
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, List, Optional, Tuple

from cryptography.hazmat.primitives import hashes, serialization
from cryptography.hazmat.primitives.asymmetric import padding, rsa
from cryptography.hazmat.primitives.ciphers.aead import AESGCM
from cryptography.hazmat.primitives.kdf.pbkdf2 import PBKDF2HMAC

from .detect import detect
from .mask   import apply_mask, mask
from .rules  import Rule, load_rules


DEFAULT_PUBLIC_KEY_PATH  = "~/.evosql/pii_public.pem"
DEFAULT_PRIVATE_KEY_PATH = "~/.evosql/pii_private.pem"

# Same PBKDF2 iteration count as the engine's password hashing +
# TDE master-key derivation (evolution/db/crypto.h:18). Keeping the
# value consistent across the codebase means a single security
# review covers every place we turn a passphrase into a key.
PBKDF2_ITERATIONS = 100_000
PBKDF2_SALT_LEN   = 16
PBKDF2_KEY_LEN    = 32


# ---------------------------------------------------------------- #
def _b64e(b: bytes) -> str:
    return base64.b64encode(b).decode("ascii")


def _b64d(s: str) -> bytes:
    return base64.b64decode(s)


# ---------------------------------------------------------------- #
def generate_keypair(public_path:  str = DEFAULT_PUBLIC_KEY_PATH,
                     private_path: str = DEFAULT_PRIVATE_KEY_PATH,
                     bits: int = 2048,
                     passphrase: Optional[bytes] = None) -> Dict[str, str]:
    """Generate a fresh RSA keypair and persist both halves. The
    private file is written with mode 0600. Returns a dict with the
    paths so callers can show them to the user.
    """
    if bits < 2048:
        raise ValueError("RSA key must be at least 2048 bits")
    priv = rsa.generate_private_key(public_exponent=65537, key_size=bits)
    pub  = priv.public_key()

    pub_path  = Path(public_path).expanduser()
    priv_path = Path(private_path).expanduser()
    pub_path.parent.mkdir(parents=True, exist_ok=True)
    priv_path.parent.mkdir(parents=True, exist_ok=True)

    enc = (serialization.NoEncryption()
           if passphrase is None
           else serialization.BestAvailableEncryption(passphrase))

    priv_pem = priv.private_bytes(
        encoding=serialization.Encoding.PEM,
        format=serialization.PrivateFormat.PKCS8,
        encryption_algorithm=enc)
    pub_pem = pub.public_bytes(
        encoding=serialization.Encoding.PEM,
        format=serialization.PublicFormat.SubjectPublicKeyInfo)

    priv_path.write_bytes(priv_pem)
    pub_path.write_bytes(pub_pem)
    try:
        os.chmod(priv_path, 0o600)
    except OSError:
        pass
    return {"public": str(pub_path), "private": str(priv_path),
            "bits": str(bits)}


def load_public_key(path: str = DEFAULT_PUBLIC_KEY_PATH):
    p = Path(path).expanduser()
    if not p.is_file():
        raise FileNotFoundError(
            f"public key not found at {p} — run `evolutiondb-pii "
            "keygen` to create one")
    return serialization.load_pem_public_key(p.read_bytes())


def load_private_key(path: str = DEFAULT_PRIVATE_KEY_PATH,
                     passphrase: Optional[bytes] = None):
    p = Path(path).expanduser()
    if not p.is_file():
        raise FileNotFoundError(
            f"private key not found at {p} — supply --private-key "
            "or run `evolutiondb-pii keygen` to create one")
    return serialization.load_pem_private_key(
        p.read_bytes(), password=passphrase)


# ---------------------------------------------------------------- #
#  Passphrase-wrapped private key
#
#  Layout the keystore stores when a private key lives in the DB:
#
#      kdf: {name, iters, salt}        — PBKDF2 parameters
#      wrapped:
#        alg: "aes-256-gcm"
#        iv: base64
#        ciphertext: base64            — plaintext PEM bytes,
#                                        AES-GCM encrypted under
#                                        the PBKDF2-derived key
#
#  Same shape `crypto.c` writes for the engine-side TDE wrap of
#  the data-encryption key, just sitting one level up the stack.
# ---------------------------------------------------------------- #
def _derive_kdf_key(passphrase: bytes, salt: bytes,
                    iters: int = PBKDF2_ITERATIONS) -> bytes:
    kdf = PBKDF2HMAC(algorithm=hashes.SHA256(),
                     length=PBKDF2_KEY_LEN, salt=salt,
                     iterations=iters)
    return kdf.derive(passphrase)


def wrap_private_key(private_key, passphrase: bytes) -> Dict[str, object]:
    """Serialise an RSA private key to PEM, then encrypt the PEM
    bytes under a passphrase-derived AES-256-GCM key. Returns a
    dict ready to drop into the keystore row."""
    if not passphrase:
        raise ValueError("wrap_private_key needs a non-empty passphrase")
    pem = private_key.private_bytes(
        encoding=serialization.Encoding.PEM,
        format=serialization.PrivateFormat.PKCS8,
        encryption_algorithm=serialization.NoEncryption())

    salt    = secrets.token_bytes(PBKDF2_SALT_LEN)
    iv      = secrets.token_bytes(12)
    kdf_key = _derive_kdf_key(passphrase, salt)
    ct      = AESGCM(kdf_key).encrypt(iv, pem, None)
    return {
        "kdf": {
            "name":  "pbkdf2-sha256",
            "iters": PBKDF2_ITERATIONS,
            "salt":  _b64e(salt),
        },
        "wrapped": {
            "alg":        "aes-256-gcm",
            "iv":         _b64e(iv),
            "ciphertext": _b64e(ct),
        },
    }


def unwrap_private_key(wrapped: Dict[str, object], passphrase: bytes):
    """Reverse of wrap_private_key. Raises ValueError on a wrong
    passphrase (AESGCM raises InvalidTag, we surface that as a
    plain ValueError so callers don't import cryptography just for
    one exception type)."""
    if not passphrase:
        raise ValueError("unwrap_private_key needs a passphrase")
    if not isinstance(wrapped, dict):
        raise ValueError("wrapped payload is not an object")
    kdf = wrapped.get("kdf") or {}
    w   = wrapped.get("wrapped") or {}
    if (kdf.get("name") or "") != "pbkdf2-sha256":
        raise ValueError(f"unsupported KDF: {kdf.get('name')!r}")
    if (w.get("alg") or "") != "aes-256-gcm":
        raise ValueError(f"unsupported wrap alg: {w.get('alg')!r}")
    salt    = _b64d(kdf["salt"])
    iv      = _b64d(w["iv"])
    ct      = _b64d(w["ciphertext"])
    kdf_key = _derive_kdf_key(passphrase, salt,
                                iters=int(kdf.get("iters",
                                                    PBKDF2_ITERATIONS)))
    try:
        pem = AESGCM(kdf_key).decrypt(iv, ct, None)
    except Exception as exc:                         # InvalidTag etc.
        raise ValueError("private key unwrap failed — wrong "
                         "passphrase?") from exc
    return serialization.load_pem_private_key(pem, password=None)


def public_key_pem(public_key) -> bytes:
    """PEM bytes for the public half — handy when serialising into
    a keystore row."""
    return public_key.public_bytes(
        encoding=serialization.Encoding.PEM,
        format=serialization.PublicFormat.SubjectPublicKeyInfo)


def public_key_from_pem(pem_bytes: bytes):
    return serialization.load_pem_public_key(pem_bytes)


# ---------------------------------------------------------------- #
@dataclass
class CipherToken:
    """One opaque sensitive fragment removed from the record. Holds
    everything needed to put the original back: the ciphertext, the
    GCM IV, and the RSA-wrapped AES key. The `id` is just a sortable
    string used as the placeholder marker inside the masked text."""
    id:           str
    tag:          str           # email / credit_card / ...
    field:        str           # which record field this came from
    start:        int           # offset within the field's masked text
    end:          int
    wrapped_key:  str           # base64
    iv:           str
    ciphertext:   str
    masked:       str           # the user-visible masked rendering

    def to_json(self) -> Dict[str, str]:
        return {
            "id":          self.id,
            "tag":         self.tag,
            "field":       self.field,
            "start":       str(self.start),
            "end":         str(self.end),
            "wrapped_key": self.wrapped_key,
            "iv":          self.iv,
            "ciphertext":  self.ciphertext,
            "masked":      self.masked,
        }

    @classmethod
    def from_json(cls, d: Dict[str, str]) -> "CipherToken":
        return cls(
            id          = d["id"],
            tag         = d["tag"],
            field       = d["field"],
            start       = int(d["start"]),
            end         = int(d["end"]),
            wrapped_key = d["wrapped_key"],
            iv          = d["iv"],
            ciphertext  = d["ciphertext"],
            masked      = d["masked"],
        )


def _encrypt_token(plain: str, public_key) -> Tuple[str, str, str]:
    """Encrypt one plaintext string and return base64
    (wrapped_aes_key, iv, ciphertext+tag)."""
    aes_key = secrets.token_bytes(32)
    iv      = secrets.token_bytes(12)
    ct = AESGCM(aes_key).encrypt(iv, plain.encode("utf-8"), None)
    wrapped = public_key.encrypt(
        aes_key,
        padding.OAEP(
            mgf=padding.MGF1(algorithm=hashes.SHA256()),
            algorithm=hashes.SHA256(),
            label=None,
        ),
    )
    return _b64e(wrapped), _b64e(iv), _b64e(ct)


def _decrypt_token(wrapped_b64: str, iv_b64: str, ct_b64: str,
                   private_key) -> str:
    aes_key = private_key.decrypt(
        _b64d(wrapped_b64),
        padding.OAEP(
            mgf=padding.MGF1(algorithm=hashes.SHA256()),
            algorithm=hashes.SHA256(),
            label=None,
        ),
    )
    plain = AESGCM(aes_key).decrypt(_b64d(iv_b64), _b64d(ct_b64), None)
    return plain.decode("utf-8")


# ---------------------------------------------------------------- #
# Field-walking helpers — `encrypt_record` works over a dict-shaped
# memory-store record (the one the sync clients hand to MEMORY PUT).
# It rewrites the text of each scanned field with the masked form
# AND appends a `cipher_tokens` list carrying the originals.
# ---------------------------------------------------------------- #
def encrypt_record(record: Dict,
                   fields: List[str],
                   public_key=None,
                   rules: Optional[List[Rule]] = None
                   ) -> Tuple[Dict, List[Dict]]:
    """Walk `fields` in `record`, mask + encrypt every detected PII
    span. Returns (masked_record, cipher_tokens_json_list).

    The record is shallow-copied — caller's original stays intact.
    """
    if public_key is None:
        public_key = load_public_key()
    rules = rules if rules is not None else load_rules()

    by_name = {r.name: r for r in rules}
    out_rec = dict(record)
    tokens:  List[CipherToken] = []
    counter = 0

    for fname in fields:
        original = out_rec.get(fname)
        if not isinstance(original, str) or not original:
            continue
        matches = detect(original, rules)
        if not matches:
            continue

        # Build the masked text + collect cipher tokens with
        # correct offsets in the MASKED string.
        masked_parts: List[str] = []
        cursor = 0
        masked_cursor = 0
        for m in matches:
            rule = by_name.get(m.rule)
            if rule is None:
                continue
            masked_parts.append(original[cursor:m.start])
            masked_cursor += m.start - cursor
            masked_text = apply_mask(m.text, rule.mask)
            counter += 1
            token_id = f"t{counter:06d}"
            wrapped, iv, ct = _encrypt_token(m.text, public_key)
            tokens.append(CipherToken(
                id          = token_id,
                tag         = m.tag,
                field       = fname,
                start       = masked_cursor,
                end         = masked_cursor + len(masked_text),
                wrapped_key = wrapped,
                iv          = iv,
                ciphertext  = ct,
                masked      = masked_text,
            ))
            masked_parts.append(masked_text)
            masked_cursor += len(masked_text)
            cursor = m.end
        masked_parts.append(original[cursor:])
        out_rec[fname] = "".join(masked_parts)

    return out_rec, [t.to_json() for t in tokens]


def decrypt_record(masked_record: Dict,
                   cipher_tokens: List[Dict],
                   private_key=None,
                   passphrase: Optional[bytes] = None) -> Dict:
    """Reverse of `encrypt_record`. Returns a new dict whose
    targeted fields hold the original strings reconstructed from
    `cipher_tokens`."""
    if private_key is None:
        private_key = load_private_key(passphrase=passphrase)
    out_rec = dict(masked_record)

    by_field: Dict[str, List[CipherToken]] = {}
    for d in cipher_tokens:
        tok = CipherToken.from_json(d)
        by_field.setdefault(tok.field, []).append(tok)

    for fname, toks in by_field.items():
        toks.sort(key=lambda t: t.start)
        masked_text = out_rec.get(fname, "") or ""
        parts: List[str] = []
        cursor = 0
        for tok in toks:
            if tok.start < cursor:
                continue
            parts.append(masked_text[cursor:tok.start])
            plain = _decrypt_token(
                tok.wrapped_key, tok.iv, tok.ciphertext, private_key)
            parts.append(plain)
            cursor = tok.end
        parts.append(masked_text[cursor:])
        out_rec[fname] = "".join(parts)

    return out_rec
