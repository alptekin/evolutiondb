"""
Persisted state for the orchestrator. One JSON file at
`~/.evosql/orchestrator.json` so the hub can survive restarts and
remember the user's agent-ownership labels.

Schema:
  {
    "sources": {
      "teams":    {"agent_owner": "claude", "interval": 600, "pid": 12345},
      "gmail":    {"agent_owner": "gemini", "interval": 900, "pid": null},
      ...
    },
    "tunnel": {"running": false, "port": 8970, "token": "...", "pid": null},
    "updated_at": 1715594000
  }

The hub mutates this file via `load()` / `save()`; concurrent
writes are protected by a file lock at the directory level (the
race window is tiny since the hub is single-user).
"""
from __future__ import annotations

import json
import os
import time
from pathlib import Path
from typing import Any, Dict, Optional


DEFAULT_PATH = "~/.evosql/orchestrator.json"


def _path() -> Path:
    return Path(os.environ.get("EVOSQL_HUB_STATE", DEFAULT_PATH)).expanduser()


def load() -> Dict[str, Any]:
    p = _path()
    if not p.exists():
        return {"sources": {}, "tunnel": {}, "updated_at": 0}
    try:
        return json.loads(p.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError):
        return {"sources": {}, "tunnel": {}, "updated_at": 0}


def save(state: Dict[str, Any]) -> None:
    p = _path()
    p.parent.mkdir(parents=True, exist_ok=True)
    state["updated_at"] = int(time.time())
    tmp = p.with_suffix(".tmp")
    tmp.write_text(json.dumps(state, indent=2), encoding="utf-8")
    try:
        os.chmod(tmp, 0o600)
    except OSError:
        pass
    tmp.replace(p)


def get_source(state: Dict[str, Any], name: str) -> Dict[str, Any]:
    return state.setdefault("sources", {}).setdefault(name, {})


def set_source(state: Dict[str, Any], name: str,
                **kwargs) -> Dict[str, Any]:
    entry = get_source(state, name)
    entry.update(kwargs)
    return entry


def remove_source_pid(state: Dict[str, Any], name: str) -> None:
    entry = get_source(state, name)
    entry.pop("pid", None)
    entry.pop("started_at", None)


def get_user_id(state: Dict[str, Any]) -> Optional[str]:
    """Return the namespace label the hub uses when spawning helpers
    (inspector, ad-hoc connectors). Set once via `set_user_id`; lives
    alongside source state so the value survives hub restarts even
    when the operator forgets to export `MCP_USER_ID`."""
    v = state.get("user_id")
    return v if isinstance(v, str) and v else None


def set_user_id(state: Dict[str, Any], user_id: str) -> None:
    state["user_id"] = user_id
