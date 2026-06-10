"""
Identity resolution — collapses multiple sender strings into one
canonical person.

Without this layer, a substring search for "Orhan" matches every
sender whose name happens to contain those letters, including
unrelated humans whose surname is "Orhan". The fix is a small
catalog where each real person is one identity carrying a list of
alias strings, plus per-source handle lists (Teams user id, Slack
U…id, gmail address, github login).

Storage lives in a separate memory store (`mcp_identities`) so
identity rows do not pollute `search_memory` results. The shape of
each record:

  key   = identity_<slug>
  value = {
    "canonical_name": "Orhan Özdoğan",
    "aliases":        ["Orhan Özdoğan", "Orhan Özdoğan | Wechip"],
    "sources":        {"teams": [...], "slack": [...], ...},
    "tags":           ["wechip", "team:backend"],
    "updated_at":     unix_seconds,
  }

The merge logic and the resolve logic are pure functions over a
list of records, so they are unit-testable without a database.
"""
from __future__ import annotations

import json
import re
import time
import unicodedata
import uuid
from typing import Any, Dict, Iterable, List, Optional


IDENTITY_STORE = "mcp_identities"
KEY_PREFIX     = "identity_"


# ---------------------------------------------------------------- #
#  Pure helpers (DB-free, easy to test)                             #
# ---------------------------------------------------------------- #
def slugify(name: str) -> str:
    """Slugify a name for use as the identity key. Strips diacritics,
    lowercases, collapses runs of non-alnum into a single underscore.
    Falls back to a short uuid if the result is empty (e.g. all-emoji
    sender)."""
    nk = unicodedata.normalize("NFKD", name)
    nk = "".join(c for c in nk if not unicodedata.combining(c))
    nk = re.sub(r"[^a-zA-Z0-9]+", "_", nk).strip("_").lower()
    return nk or uuid.uuid4().hex[:8]


def _normalize_alias(s: str) -> str:
    """Lowercase + collapse whitespace. Used for alias equality."""
    return re.sub(r"\s+", " ", s.strip()).lower()


def find_identity_by_alias(records: Iterable[Dict[str, Any]],
                            alias: str) -> Optional[Dict[str, Any]]:
    """Return the identity record (from a pre-fetched list) that lists
    this alias. Case- and whitespace-tolerant exact match.

    Caller is responsible for fetching the list first — the function
    itself does no IO so the test suite can pass a plain Python list."""
    target = _normalize_alias(alias)
    if not target:
        return None
    for rec in records:
        for a in (rec.get("aliases") or []):
            if _normalize_alias(a) == target:
                return rec
    return None


def resolve_aliases(records: Iterable[Dict[str, Any]],
                     query: str) -> List[str]:
    """Given a free-form name in a search query, return every alias
    of every identity whose canonical name or alias list contains
    the query as a normalised sub-token. Empty list when nothing
    matches."""
    q = _normalize_alias(query)
    if not q:
        return []
    hits: List[str] = []
    for rec in records:
        haystack_parts = [rec.get("canonical_name", "")] + list(rec.get("aliases") or [])
        haystack = _normalize_alias(" ".join(haystack_parts))
        if q in haystack:
            hits.extend(rec.get("aliases") or [])
    # Deterministic order so callers can fingerprint the set.
    return sorted(set(hits))


def _merge_sources(dst: Dict[str, Any], src: Dict[str, Any]) -> Dict[str, Any]:
    """Union a source map into `dst` in place. Values are per-channel id lists
    ({'teams': [...], 'slack': [...]}); overlapping channels union their lists,
    preserving order and dropping duplicates. Non-list values are kept if not
    already present."""
    for k, v in (src or {}).items():
        if isinstance(v, list):
            cur = dst.setdefault(k, [])
            for item in v:
                if item not in cur:
                    cur.append(item)
        else:
            dst.setdefault(k, v)
    return dst


def plan_merge(records: Iterable[Dict[str, Any]],
                aliases: List[str],
                canonical_name: Optional[str] = None
                ) -> Dict[str, Any]:
    """Compute what an identity record should look like after merging
    `aliases` into the existing catalog.

    Behaviour:
      - If any alias already belongs to an identity, that identity is
        extended; its canonical_name is kept unless the caller passes
        a new one.
      - Otherwise a brand new identity is built with canonical_name
        (or the first alias if not provided).
      - The returned record is *plain data* — the caller is in charge
        of persisting it (and deleting the absorbed identity if any).

    Returns a dict {action, record, absorbed_key}.
      action       — "extend" or "create"
      record       — the merged identity dict (no _key field yet)
      absorbed_key — original key of the identity being extended, or None
    """
    cleaned = [a.strip() for a in aliases if a and a.strip()]
    if not cleaned:
        raise ValueError("plan_merge() requires at least one non-empty alias")

    # Collect EVERY existing identity matched by ANY alias, not just the first.
    # When the aliases span two different identities (e.g. a work + a personal
    # address that turn out to be the same person), extending only the first
    # would orphan the second — leaving two records with overlapping aliases
    # that resolve ambiguously. Fold them all into one.
    absorbed_list: List[Dict[str, Any]] = []
    seen_keys: set = set()
    for a in cleaned:
        found = find_identity_by_alias(records, a)
        if found:
            fk = found.get("_key")
            # dedup by _key (or by identity object when keys are absent)
            marker = fk if fk is not None else id(found)
            if marker not in seen_keys:
                seen_keys.add(marker)
                absorbed_list.append(found)

    if absorbed_list:
        all_aliases = set(cleaned)
        merged_sources: Dict[str, Any] = {}
        all_tags: set = set()
        for ident in absorbed_list:
            all_aliases |= set(ident.get("aliases") or [])
            _merge_sources(merged_sources, ident.get("sources") or {})
            all_tags |= set(ident.get("tags") or [])
        name = canonical_name or absorbed_list[0]["canonical_name"]
        new_rec = {
            "canonical_name": name,
            "aliases":        sorted(all_aliases),
            "sources":        merged_sources,
            "tags":           sorted(all_tags),
            "updated_at":     time.time(),
        }
        keys = [i.get("_key") for i in absorbed_list if i.get("_key")]
        return {"action": "extend",
                "record": new_rec,
                "absorbed_key": keys[0] if keys else None,
                "absorbed_keys": keys}

    new_rec = {
        "canonical_name": canonical_name or cleaned[0],
        "aliases":        sorted(set(cleaned)),
        "sources":        {},
        "tags":           [],
        "updated_at":     time.time(),
    }
    return {"action": "create", "record": new_rec,
            "absorbed_key": None, "absorbed_keys": []}


# ---------------------------------------------------------------- #
#  psycopg-backed store                                             #
# ---------------------------------------------------------------- #
def _e(s: str) -> str:
    if not isinstance(s, str):
        s = str(s)
    s = s.replace("\r", " ").replace("\n", " ").replace("\t", " ")
    return s.replace("'", "''")


class IdentityStore:
    """Reads + writes identity rows over the EvolutionDB PG wire.
    Shares a psycopg connection with `MemoryBackend` so it stays on
    the same long-lived session and benefits from the same retry
    semantics at the call sites."""

    def __init__(self, conn, namespace: str,
                 store_name: str = IDENTITY_STORE):
        self.conn       = conn
        self.namespace  = namespace
        self.store_name = store_name
        self._ensured   = False

    def _ensure_store(self):
        if self._ensured:
            return
        try:
            with self.conn.cursor() as cur:
                cur.execute(f"CREATE MEMORY STORE {self.store_name}")
        except Exception:
            pass
        self._ensured = True

    # -- reads -------------------------------------------------------
    def list_records(self) -> List[Dict[str, Any]]:
        self._ensure_store()
        out: List[Dict[str, Any]] = []
        with self.conn.cursor() as cur:
            cur.execute(
                f"SELECT mem_key, mem_value FROM __mem_{self.store_name} "
                f"WHERE mem_namespace = '{_e(self.namespace)}'"
            )
            for k, v in cur.fetchall():
                try:
                    data = json.loads(v) if isinstance(v, str) else v
                except (TypeError, ValueError):
                    continue
                if not isinstance(data, dict):
                    continue
                data["_key"] = k
                out.append(data)
        return out

    def find_by_alias(self, alias: str) -> Optional[Dict[str, Any]]:
        return find_identity_by_alias(self.list_records(), alias)

    def resolve(self, query: str) -> List[str]:
        return resolve_aliases(self.list_records(), query)

    # -- writes ------------------------------------------------------
    def _put(self, record: Dict[str, Any]) -> Dict[str, Any]:
        """Persist `record`. Slug is derived from canonical_name.
        The caller is responsible for deleting any superseded row."""
        self._ensure_store()
        slug = slugify(record["canonical_name"])
        key  = f"{KEY_PREFIX}{slug}"
        record = {k: v for k, v in record.items() if k != "_key"}
        record.setdefault("updated_at", time.time())
        value = json.dumps(record, ensure_ascii=False)
        with self.conn.cursor() as cur:
            cur.execute(
                f"MEMORY PUT INTO {self.store_name} VALUES "
                f"('{_e(self.namespace)}','{_e(key)}','{_e(value)}')"
            )
        record["_key"] = key
        return record

    def delete(self, key: str) -> bool:
        self._ensure_store()
        try:
            with self.conn.cursor() as cur:
                cur.execute(
                    f"MEMORY DELETE FROM {self.store_name} "
                    f"WHERE NS='{_e(self.namespace)}' "
                    f"AND KEY='{_e(key)}'"
                )
            return True
        except Exception:
            return False

    def merge(self, *aliases: str,
              canonical_name: Optional[str] = None) -> Dict[str, Any]:
        """High-level entry point. Computes the merge plan against
        the current catalog and applies it. Idempotent — merging
        aliases that all already belong to the same identity is a
        no-op write but does not corrupt anything."""
        plan = plan_merge(self.list_records(),
                          list(aliases),
                          canonical_name=canonical_name)
        if plan["action"] == "extend":
            # Delete EVERY absorbed identity whose key differs from the new
            # one, not just the first. The merged record is written under
            # new_key; any other matched identity must be removed or it would
            # linger with overlapping aliases (ambiguous resolution). The slug
            # may also change with a new canonical_name, so the primary's old
            # key can differ from new_key too.
            new_slug = slugify(plan["record"]["canonical_name"])
            new_key  = f"{KEY_PREFIX}{new_slug}"
            absorbed_keys = plan.get("absorbed_keys")
            if not absorbed_keys and plan.get("absorbed_key"):
                absorbed_keys = [plan["absorbed_key"]]
            for old_key in absorbed_keys or []:
                if old_key and old_key != new_key:
                    self.delete(old_key)
        return self._put(plan["record"])

    def split(self, alias: str) -> Optional[Dict[str, Any]]:
        """Remove `alias` from its current identity and create a new
        identity that contains only it. Returns the new identity, or
        None if the alias was not found."""
        ident = self.find_by_alias(alias)
        if not ident:
            return None
        target = _normalize_alias(alias)
        kept = [a for a in (ident.get("aliases") or [])
                if _normalize_alias(a) != target]
        if not kept:
            # The alias *was* the identity's only entry.
            self.delete(ident["_key"])
        else:
            ident["aliases"] = kept
            ident["updated_at"] = time.time()
            self._put(ident)
        return self._put({
            "canonical_name": alias.strip(),
            "aliases":        [alias.strip()],
            "sources":        {},
            "tags":           [],
        })

    # -- bulk seeding ------------------------------------------------
    def auto_seed_from_senders(self, senders: Iterable[str]) -> int:
        """Create one identity per never-seen sender. Existing
        identities are left alone (no merging — that is the user's
        call). Returns the number of new records written."""
        existing_aliases = set()
        for rec in self.list_records():
            for a in (rec.get("aliases") or []):
                existing_aliases.add(_normalize_alias(a))

        added = 0
        for s in senders:
            s = (s or "").strip()
            if not s:
                continue
            if _normalize_alias(s) in existing_aliases:
                continue
            self._put({
                "canonical_name": s,
                "aliases":        [s],
                "sources":        {},
                "tags":           [],
            })
            existing_aliases.add(_normalize_alias(s))
            added += 1
        return added
