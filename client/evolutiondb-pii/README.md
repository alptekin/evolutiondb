# evolutiondb-pii

Detect, mask, and hybrid-encrypt sensitive data before it lands in
EvolutionDB long-term memory or leaves the host via a public LLM.

The library is the bridge every sync client (`notes-sync`,
`imessage-sync`, `outlook-sync`, …) is expected to call before
issuing a `MEMORY PUT`. It produces two parallel renderings of the
same record:

- a **masked** copy — what the row stores by default, what
  `search_memory` hands to LLMs (`a***@example.com`,
  `5218 0711 **** 5683`, `Me***et Yı***ız`, …);
- a **cipher_tokens** list — the original sensitive substrings
  encrypted with **AES-256-GCM** under a fresh per-token key that
  is itself wrapped with **RSA-OAEP-2048**. Recovery requires the
  private key, which never leaves `~/.evosql/pii_private.pem`.

No data is ever stored in plaintext alongside the masked record;
no PII reaches an external LLM through the standard search path;
a one-shot CLI restores the originals when the operator
authenticates with the private key.

## Why hybrid encryption (and not plain RSA)?

Raw RSA-2048 caps a single plaintext at about 245 bytes — too small
for an email body or a Notes entry. The library follows the same
shape TLS / S/MIME / PGP use: generate a random 256-bit AES key per
token, wrap that key with RSA-OAEP-SHA256, and let AES-256-GCM
encrypt the actual bytes. The triple
`(wrapped_key, iv, ciphertext+tag)` lands in the row.

## Install

```
pip install evolutiondb-pii
# or, from this repo
pip install -e client/evolutiondb-pii
```

The only runtime dependency is `cryptography>=42`.

## One-time setup

```bash
evolutiondb-pii keygen
# {"ok": true, "public": "~/.evosql/pii_public.pem",
#  "private": "~/.evosql/pii_private.pem", "bits": "2048"}
```

The private file lands at mode `0600`. Pass `--passphrase` to
encrypt it at rest (you'll be prompted on `decrypt`).

## Quick tour

```python
from evolutiondb_pii import encrypt_record, decrypt_record, mask

# Just see the mask
mask("Kart 4111 1111 1111 1111 sahibi mehmet@example.com")
# → 'Kart 4111 1111 **** 1111 sahibi ***@example.com'

# Full pipeline — what a sync client does
record = {"text": "Mehmet Yıldız, kart 4111 1111 1111 1111, "
                  "TC 10000000146"}
masked, tokens = encrypt_record(record, fields=["text"])
# masked["text"] → "Me***et Yı***ız, kart 4111 1111 **** 1111, "
#                  "TC 10000******"
# tokens         → [{id:"t000001", tag:"name", iv:"...", ...}, ...]

# Round-trip (private key needed)
restored = decrypt_record(masked, tokens)
# restored["text"] == record["text"]
```

## Rule format

Rules ship as `evolutiondb_pii/data/default_rules.json`. The user
can override or extend them by writing a file with the same shape
to `~/.evosql/pii_rules.json` (or wherever `EVOSQL_PII_RULES`
points). The loader merges user rules over defaults by **name**;
unknown names are appended.

Each rule:

```json
{
  "name":     "credit_card",
  "enabled":  true,
  "priority": 95,
  "tag":      "credit_card",
  "pattern":  "\\b(?:\\d[ \\-]?){12,18}\\d\\b",
  "validate": "luhn",
  "mask": {
    "kind":         "positional",
    "keep_first":   8,
    "keep_last":    4,
    "preserve_sep": true
  }
}
```

### Mask kinds

| Kind          | Fields                                  | What it does |
|---------------|-----------------------------------------|--------------|
| `positional`  | `keep_first`, `keep_last`, `preserve_sep` | Stars in the middle; head + tail visible. `preserve_sep` keeps spaces / dashes intact (good for cards, IBANs, plates). |
| `keep_after`  | `separator`, `head_stars`               | Star the head, keep everything from `separator` onward — email shape. |
| `keep_before` | `separator`                             | Mirror of `keep_after`. |
| `name_smart`  | `short_threshold`                       | Per token: if length ≥ threshold, keep first 2 + last 2; else keep first + last. Whitespace-preserving. |
| `full_star`   | —                                        | Length-preserving stars. |
| `template`    | `template`, `extract`                   | Render a template (`url_userinfo` extractor strips user:pass from a URL; `literal` echoes the template unchanged). |

### Validators

Detection-time post-checks that drop false positives the regex can't
catch:

| Name                     | Use |
|--------------------------|-----|
| `luhn`                   | Credit / debit card check digit |
| `tckn_checksum`          | Turkish citizen ID (TC Kimlik) |
| `vkn_checksum`           | Turkish tax number |
| `iban_mod97`             | IBAN per ISO 13616 |
| `entropy_gte_4_0`        | Reject low-entropy long strings (text vs key) |
| `person_name_heuristic`  | Trim obviously-not-name title-cased word runs |

Unknown validator names accept silently, so a typo never silently
drops a span.

## Default rule set (v1)

email, credit_card, tckn, iban, phone_tr, phone_intl, vkn,
passport_generic, plate_tr, api_token_long, high_entropy_blob, jwt,
url_with_credentials. `date_of_birth` and `person_name_tr` are
**off by default** — opt-in.

## CLI

```
evolutiondb-pii keygen          # one-time RSA setup
evolutiondb-pii scan FILE       # show the masked rendering
evolutiondb-pii encrypt FILE    # emit {masked, cipher_tokens} JSON
evolutiondb-pii decrypt FILE    # restore plaintext (needs private key)
```

`FILE` is `-` for stdin.

## Roadmap

- Phase 1 (this release): library + rule format + crypto + tests
- Phase 2: pilot integration in `outlook-sync` (every PII type lives
  in mail bodies)
- Phase 3: roll into the other eight sync clients
- Phase 4: `CREATE MEMORY STORE … WITH MASKING=on` SQL surface +
  `MEMORY GET DECRYPTED FROM …` for explicit operator decryption

## Limits

- Names need a real NER pass (LLM or library) to be reliable; the
  default `person_name_tr` rule is heuristic-only and ships
  disabled.
- Validators are conservative — they err on the side of dropping
  ambiguous spans rather than leaking; a clearly valid PII that
  happens to flunk a checksum will look like normal text.
- Keys live on disk under `~/.evosql/`. Rotation rewraps every
  token — there is no in-place re-encrypt today; the library can
  emit a new public key but cipher tokens encrypted against the
  old public key must be decrypted then re-encrypted under the new
  one.
