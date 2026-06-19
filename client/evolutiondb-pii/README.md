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
no PII reaches an external LLM through the standard **search/retrieval**
path; a one-shot CLI restores the originals when the operator
authenticates with the private key.

**Scope (read this).** Masking is applied where it is wired:
per-connector at rest via `protect_record`, and at retrieval via
`EVOSQL_PII_RETRIEVAL`. Internal **enrichment** calls (entity extraction,
episode summaries, the standalone agent loop) only mask their outbound
prompts when `EVOSQL_PII_EGRESS=on` (opt-in, fail-closed); with it `off`
(the default) those tasks send their text to the configured model
provider unmasked. At-rest masking is field-level, **not** whole-DB
encryption — the engine WAL/replication stream is not yet encrypted.

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

Two equivalent storage modes — pick whichever fits the deployment.

### File-backed (default — single host, simplest)

```bash
evolutiondb-pii keygen
# {"ok": true, "store": "file",
#  "public": "~/.evosql/pii_public.pem",
#  "private": "~/.evosql/pii_private.pem", "bits": "2048"}
```

The private file lands at mode `0600`. Pass `--passphrase` to
encrypt the PEM at rest.

### DB-backed (recommended for multi-host or shared backup)

```bash
evolutiondb-pii keygen --store=db
# Private key passphrase: ********
# {"ok": true, "store": "db",
#  "namespace": "alptekin_topal",
#  "key_id": "0db220f5-…",
#  "created_at": "2026-05-22T18:58:39Z"}
```

The keypair is wrapped with **PBKDF2-SHA256 (100 000 iterations)
+ AES-256-GCM** before it lands in `__mem_pii_keystore`. The
passphrase you type is the only thing that can unwrap it — a DB
snapshot alone is useless to an attacker. The `mem_namespace`
column scopes each user's row by `MCP_USER_ID`, so multi-tenant
setups isolate keypairs without extra schema work.

`EVOSQL_PII_PASSPHRASE=…` lets you drive the CLI non-interactively
(CI, ops scripts pulling from Vault).

To migrate an existing filesystem keypair into the DB without
rotating:

```bash
evolutiondb-pii keystore-import   # reads ~/.evosql/pii_*.pem
```

And to leave the DB-backed mode:

```bash
evolutiondb-pii keystore-export   # writes ~/.evosql/pii_*.pem
```

Tell the sync clients which keystore to use:

```bash
export EVOSQL_PII_KEYSTORE=db    # or "file" or "auto" (default)
```

`auto` prefers the DB row when one exists and falls back to the
filesystem PEM — zero-config migration path.

### Custom rule set in the DB

Same shape as the JSON file, just stored as one row per rule in
the `__mem_pii_rules` memory store:

```bash
# Upload a rule file once
evolutiondb-pii rules-push my_rules.json --replace
# Inspect what's live
evolutiondb-pii rules-list
# Dump for diffing or backup
evolutiondb-pii rules-pull > /tmp/dump.json
# Tell the library to read from the DB instead of disk
export EVOSQL_PII_RULES=db
```

DB rules layer the same way the file overrides do — they merge
over defaults by `name`.

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
evolutiondb-pii keygen [--store=file|db]
                                  # one-time RSA setup. With --store=db the
                                  # private key is passphrase-wrapped before
                                  # it lands in __mem_pii_keystore.
evolutiondb-pii keystore-import   # move a filesystem keypair into the DB
evolutiondb-pii keystore-export   # pull a DB keypair back to filesystem PEMs
evolutiondb-pii rules-push FILE   # upload rules to __mem_pii_rules
evolutiondb-pii rules-pull        # dump DB rules as JSON
evolutiondb-pii rules-list        # compact summary table
evolutiondb-pii scan FILE         # show the masked rendering
evolutiondb-pii encrypt FILE      # emit {masked, cipher_tokens} JSON
evolutiondb-pii decrypt FILE [--keystore=auto|file|db]
                                  # restore plaintext (needs private key)
evolutiondb-pii row-decrypt --store=… --namespace=… --key=…
                                  # fetch a row + companions from DB and
                                  # restore it; honours --keystore
evolutiondb-pii backfill --store=… [--namespace=…]
                                  # re-mask + companion-write every legacy
                                  # plaintext row in a memory store
```

`FILE` is `-` for stdin.

### Environment matrix

| Variable                   | Meaning                                                              |
|----------------------------|----------------------------------------------------------------------|
| `EVOSQL_PII_KEYSTORE`      | `auto` (default), `file`, or `db`. Tells the library where the keypair lives. |
| `EVOSQL_PII_RULES`         | A path to a JSON override file, or the literal `db` to read rules from `__mem_pii_rules`. |
| `EVOSQL_PII_PASSPHRASE`    | Non-interactive private-key passphrase (CI / Vault flows).           |
| `EVOSQL_PII_MASK`          | `on` (default) — flip to `off` to disable masking and protection at the integration layer. |
| `MCP_USER_ID`              | Namespace for DB keystore + rules rows (default `default_user`).     |

## Roadmap

- Phase 1: library + rule format + crypto + tests *(shipped)*
- Phase 2: sync-client pilot in `outlook-sync` *(shipped)*
- Phase 3: roll into the rest of the sync fleet *(shipped)*
- Phase 4: companion-row chunking + 4400+ row backfill *(shipped)*
- Phase 5 (this release): keystore + rules in the database, with
  passphrase-wrapped private key
- Phase 6: multi-keypair + key rotation (`keygen --rotate`,
  `rekey --from=… --to=…`, `revoke --key-id=…`)
- Phase 7: engine SQL surface — `CREATE MEMORY STORE … WITH
  MASKING=on` + `MEMORY GET DECRYPTED FROM …`
- Phase 8: multi-tenant keystore (RLS per `MCP_USER_ID`, shared
  baseline rules, decrypt audit log)

## Limits

- Names need a real NER pass (LLM or library) to be reliable; the
  default `person_name_tr` rule is heuristic-only and ships
  disabled.
- Validators are conservative — they err on the side of dropping
  ambiguous spans rather than leaking; a clearly valid PII that
  happens to flunk a checksum will look like normal text.
- Keys live on disk under `~/.evosql/` **or** in
  `__mem_pii_keystore` (passphrase-wrapped). Either way, rotation
  rewraps every token — there is no in-place re-encrypt today; the
  library emits a new public key but cipher tokens encrypted
  against the old public key must be decrypted then re-encrypted
  under the new one. Phase 6 will add `keygen --rotate` and a
  `rekey` command so the legacy key can stay around in
  `decrypt_only` mode while new writes move to the fresh one.
- DB-backed keystore + rules need the operator's passphrase only
  at decrypt time, not at write time. Sync workers can keep using
  the public key alone (they never need the private one), so PII
  protection runs unattended after the initial `keygen --store=db`.
