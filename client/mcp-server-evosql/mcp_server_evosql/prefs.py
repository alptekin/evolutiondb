"""
prefs — per-namespace user preferences, stored in the self-model store.

v0 holds one thing: the language the assistant should write its summaries in
(open-loop 'what' lines, self-model dossier). It is NOT set until the user
chooses one — so the brief can tell a first-time user "summaries are in English,
switch with /language türkçe" exactly once, then stop nagging.
"""
from __future__ import annotations

import json
from datetime import datetime, timezone

_KEY = "pref_language"
_DEFAULT = "english"


def get_language(backend, ns):
    """Return (language, was_explicitly_set)."""
    from .server import _e
    for row in backend._query(
            f"SELECT mem_value FROM __mem_{backend.selfmodel_store} "
            f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = '{_KEY}'") or []:
        try:
            return json.loads(row[0]).get("language", _DEFAULT), True
        except Exception:
            pass
    return _DEFAULT, False


def set_language(backend, ns, language):
    from .server import _e
    lang = (language or _DEFAULT).strip().lower()
    rec = {"language": lang, "set_at": datetime.now(timezone.utc).isoformat()}
    backend._exec(f"MEMORY PUT INTO {backend.selfmodel_store} VALUES "
                  f"('{_e(ns)}','{_KEY}','{_e(json.dumps(rec))}')")
    return lang
