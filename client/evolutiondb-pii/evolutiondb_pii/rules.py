"""Rule loader. Reads the bundled default rule set, then layers the
user's override file (~/.evosql/pii_rules.json by default) on top
using the rule `name` as the merge key. Per-rule fields supplied by
the user replace those of the same-named default; rules with new
names are appended."""
from __future__ import annotations

import json
import os
import re
from dataclasses import dataclass, field
from pathlib import Path
from typing import Any, Dict, List, Optional


# Importlib resources hop is the standard way to ship a JSON file
# inside an installable package.
try:
    from importlib import resources as _res
except ImportError:                                  # pragma: no cover
    import importlib_resources as _res               # type: ignore


DEFAULT_USER_RULES_PATH = "~/.evosql/pii_rules.json"


@dataclass
class MaskSpec:
    """Mask configuration parsed from a rule's `mask` block. The
    exact field set depends on `kind`; unused fields stay None."""
    kind: str                                        # positional / keep_after / ...
    keep_first:     int = 0
    keep_last:      int = 0
    preserve_sep:   bool = False                     # keep ' ' and '-' visible
    separator:      Optional[str] = None             # for keep_after / keep_before
    head_stars:     int = 3
    short_threshold: int = 5                         # for name_smart
    template:       Optional[str] = None             # for kind=template
    extract:        Optional[str] = None             # which extractor feeds template


@dataclass
class Rule:
    """A single PII rule. `compiled` holds the pre-compiled regex so
    `detect` can be hot-path cheap."""
    name:     str
    enabled:  bool
    priority: int
    tag:      str
    pattern:  str
    validate: Optional[str]
    mask:     MaskSpec
    compiled: re.Pattern = field(init=False)

    def __post_init__(self):
        self.compiled = re.compile(self.pattern)


# ---------------------------------------------------------------- #
def _parse_mask(raw: Dict[str, Any]) -> MaskSpec:
    if not isinstance(raw, dict):
        raise ValueError(f"mask must be an object, got {type(raw).__name__}")
    kind = raw.get("kind")
    if not kind:
        raise ValueError("mask.kind is required")
    return MaskSpec(
        kind            = kind,
        keep_first      = int(raw.get("keep_first",      0)),
        keep_last       = int(raw.get("keep_last",       0)),
        preserve_sep    = bool(raw.get("preserve_sep",   False)),
        separator       = raw.get("separator"),
        head_stars      = int(raw.get("head_stars",      3)),
        short_threshold = int(raw.get("short_threshold", 5)),
        template        = raw.get("template"),
        extract         = raw.get("extract"),
    )


def _parse_rule(raw: Dict[str, Any]) -> Rule:
    name = raw.get("name")
    if not name:
        raise ValueError("rule.name is required")
    if "pattern" not in raw:
        raise ValueError(f"rule {name!r}: pattern is required")
    if "mask" not in raw:
        raise ValueError(f"rule {name!r}: mask is required")
    return Rule(
        name     = str(name),
        enabled  = bool(raw.get("enabled", True)),
        priority = int(raw.get("priority", 50)),
        tag      = str(raw.get("tag", name)),
        pattern  = str(raw["pattern"]),
        validate = raw.get("validate"),
        mask     = _parse_mask(raw["mask"]),
    )


def _load_default_blob() -> Dict[str, Any]:
    # importlib.resources is the platform-portable way to read a
    # data file shipped inside the wheel.
    with _res.files("evolutiondb_pii.data").joinpath(
            "default_rules.json").open("r", encoding="utf-8") as f:
        return json.load(f)


def _load_user_blob(path: Optional[str]) -> Optional[Dict[str, Any]]:
    if path is None:
        path = os.environ.get("EVOSQL_PII_RULES",
                              DEFAULT_USER_RULES_PATH)
    p = Path(path).expanduser()
    if not p.is_file():
        return None
    try:
        return json.loads(p.read_text(encoding="utf-8"))
    except (json.JSONDecodeError, OSError) as exc:
        raise RuntimeError(
            f"failed to read user rules at {p}: {exc}") from exc


def load_rules(user_path: Optional[str] = None) -> List[Rule]:
    """Return the merged + sorted list of active rules.

    Merge policy:
      1. Start with the bundled `default_rules.json`.
      2. If a user file exists (env `EVOSQL_PII_RULES` or default
         path), overlay it: rules with matching `name` replace the
         default field-by-field (the user's `mask` block fully
         replaces the default `mask`); novel names are appended.
      3. Sort by descending `priority` so higher-priority rules
         claim overlapping spans first in `detect`.
      4. Drop rules with `enabled: false`.
    """
    base = _load_default_blob()
    by_name: Dict[str, Dict[str, Any]] = {
        r["name"]: dict(r) for r in base.get("rules", []) if "name" in r}

    user = _load_user_blob(user_path)
    if user:
        for raw in user.get("rules", []):
            name = raw.get("name")
            if not name:
                continue
            if name in by_name:
                # Per-field overlay (mask block replaces wholesale)
                merged = dict(by_name[name])
                for k, v in raw.items():
                    merged[k] = v
                by_name[name] = merged
            else:
                by_name[name] = raw

    rules: List[Rule] = []
    for raw in by_name.values():
        rule = _parse_rule(raw)
        if rule.enabled:
            rules.append(rule)

    rules.sort(key=lambda r: r.priority, reverse=True)
    return rules


def load_limits(user_path: Optional[str] = None) -> Dict[str, int]:
    """Engine guardrails: max matches per field, max chars scanned."""
    base = _load_default_blob().get("limits") or {}
    user = _load_user_blob(user_path) or {}
    base.update(user.get("limits") or {})
    return {
        "max_matches_per_field":   int(base.get("max_matches_per_field",   200)),
        "max_field_chars_scanned": int(base.get("max_field_chars_scanned", 65536)),
    }
