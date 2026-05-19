"""Install AI host applications (Claude Desktop, Claude Code,
ChatGPT Desktop, OpenAI Codex, Gemini CLI) by running the package-
manager command declared on each `ClientSpec.install_cmd`.

The shape mirrors `orchestrator.install.install()` for connectors:
synchronous subprocess that streams to `~/.evosql/logs/`, returns
ok + log path + tail. Cask downloads can take minutes — the
ThreadingHTTPServer keeps unrelated requests responsive in the
meantime."""
from __future__ import annotations

import shutil
import subprocess
from pathlib import Path
from typing import Dict, Optional


_TIMEOUT_SEC = 900   # 15 min — `brew install --cask` can be slow.


def _logs_dir() -> Path:
    p = Path("~/.evosql/logs").expanduser()
    p.mkdir(parents=True, exist_ok=True)
    return p


def _tail(path: Path, n: int) -> str:
    try:
        lines = path.read_text(encoding="utf-8",
                                errors="replace").splitlines()
    except OSError:
        return ""
    return "\n".join(lines[-n:])


def install(name: str, install_cmd: list) -> Dict[str, object]:
    """Run the install command for a client. `install_cmd` comes
    from the matching ClientSpec; an empty list means there is no
    installer wired up for this host."""
    if not install_cmd:
        return {"ok": False,
                "error": f"no installer configured for {name!r}"}

    tool = install_cmd[0]
    if shutil.which(tool) is None:
        return {"ok": False,
                "error": (f"{tool!r} not on PATH — install it first "
                          f"(e.g. Homebrew or Node.js) and retry")}

    log_path = _logs_dir() / f"client-install-{name}.log"
    try:
        with open(log_path, "w", encoding="utf-8") as log:
            log.write(f"$ {' '.join(install_cmd)}\n\n")
            log.flush()
            r = subprocess.run(install_cmd, stdout=log,
                                stderr=subprocess.STDOUT,
                                timeout=_TIMEOUT_SEC, text=True)
    except subprocess.TimeoutExpired:
        return {"ok": False, "log": str(log_path),
                "error": f"install timed out after {_TIMEOUT_SEC}s",
                "tail": _tail(log_path, 30)}
    except OSError as exc:
        return {"ok": False, "log": str(log_path),
                "error": f"failed to spawn installer: {exc}",
                "tail": _tail(log_path, 30)}

    ok = (r.returncode == 0)
    return {"ok": ok, "log": str(log_path),
            "returncode": r.returncode,
            "tail": _tail(log_path, 15 if ok else 30)}
