"""
evoagent — the single front door for the standalone EvolutionAgent.

One command, many subcommands, all of which *wrap* existing functions (no new
backend): run/chat drive the AgentLoop; connect/sync/status/accounts delegate to
the evolutiondb-hub orchestrator; brief/approve call the MCP server's brief +
outbox; config/doctor manage local setup and readiness.

    evoagent doctor                 # is this install healthy?
    evoagent connect gmail          # install + authenticate a connector
    evoagent sync gmail             # run a connector
    evoagent brief                  # the morning brief
    evoagent run "what's pending?"  # one-shot agent turn (default)
    evoagent chat                   # interactive session (+ /approve, /reject)
    evoagent approve [id|all]       # review/approve queued drafts (ADR-004)

Nothing is ever sent without human approval (ADR-004). Connects to EvolutionDB
the same way the MCP server does (EVOSQL_* env, or EVOSQL_EMBEDDED=1).
"""
from __future__ import annotations

import argparse
import json
import os
import sys
from typing import Any, Optional

_ANTHROPIC = ("anthropic", "claude", "sonnet")


# ----------------------------------------------------------------- config
def _config_path() -> str:
    return os.path.expanduser(
        os.environ.get("EVOAGENT_CONFIG", "~/.evoagent/config.toml"))


def _load_config_into_env() -> None:
    """Read the [env] table of ~/.evoagent/config.toml and set os.environ
    DEFAULTS (env always wins). Silent when the file or tomllib is missing."""
    path = _config_path()
    if not os.path.exists(path):
        return
    try:
        import tomllib
        with open(path, "rb") as fh:
            data = tomllib.load(fh)
    except Exception:
        return
    for k, v in (data.get("env") or {}).items():
        os.environ.setdefault(str(k), str(v))


# ----------------------------------------------------------------- helpers
def _stderr(s: str) -> None:
    sys.stderr.write(s + "\n")
    sys.stderr.flush()


def _backend_ns():
    """The (backend, namespace) pair the brief/approve commands act on — the
    same idiom brief.py and outbox.py use for their CLIs."""
    from mcp_server_evosql import scheduler
    prefix = os.environ.get("MCP_STORE_PREFIX", "mcp")
    backend = scheduler._backend(prefix)
    ns = os.environ.get("MCP_USER_ID") or (
        scheduler.discover_namespaces(backend) or ["default"])[0]
    return backend, ns


def _check_provider(provider: Optional[str]) -> str:
    """The tool-calling loop is Anthropic-message-shaped today; expose the
    --provider surface honestly instead of pretending multi-provider works."""
    p = (provider or os.environ.get("EVOSQL_AGENT_PROVIDER") or "anthropic")
    p = p.strip().lower()
    if p not in _ANTHROPIC:
        raise NotImplementedError(
            f"provider '{provider}' is not yet supported by the agent loop — "
            "use --provider anthropic, or configure EVOSQL_*_LLM for the "
            "enrichment tasks (entities/episodes/etc. already support OpenAI/"
            "OpenRouter/Ollama via llm.chat).")
    return p


def _hub(argv: list) -> int:
    """Delegate to the evolutiondb-hub orchestrator's own argv dispatch."""
    from orchestrator.cli import main as hub_main
    return hub_main(argv)


# ----------------------------------------------------------------- commands
def cmd_run(a) -> int:
    _check_provider(a.provider)
    prompt = " ".join(a.prompt).strip()
    if not prompt and not sys.stdin.isatty():
        prompt = sys.stdin.read().strip()
    if not prompt:
        _stderr('usage: evoagent run "<your request>"  (or pipe it on stdin)')
        return 2
    from .loop import AgentLoop, DEFAULT_MODEL
    from .__main__ import _make_observer
    from mcp_server_evosql.server import MCPServer
    model = a.model or os.environ.get("EVOSQL_AGENT_MODEL", DEFAULT_MODEL)
    agent = AgentLoop(MCPServer(), model=model, max_turns=a.max_turns,
                      on_event=_make_observer(sys.stderr.isatty(), a.verbose))
    res = agent.run(prompt)
    text = (res.get("final_text") or "").strip()
    if text:
        print(text)
    if res.get("stop_reason") == "max_turns":
        _stderr(f"\n[stopped after {res['turns']} turns — narrow the request "
                f"or raise --max-turns]")
    return 0


def cmd_chat(a) -> int:
    _check_provider(a.provider)
    from .loop import AgentLoop, DEFAULT_MODEL
    from .__main__ import _make_observer
    from mcp_server_evosql.server import MCPServer
    from mcp_server_evosql import outbox
    model = a.model or os.environ.get("EVOSQL_AGENT_MODEL", DEFAULT_MODEL)
    agent = AgentLoop(MCPServer(), model=model, max_turns=a.max_turns,
                      on_event=_make_observer(sys.stderr.isatty(), a.verbose))
    backend, ns = _backend_ns()
    _stderr("evoagent chat — a request, /approve <id>, /reject <id>, or /quit")
    while True:
        try:
            line = input("» ").strip()
        except (EOFError, KeyboardInterrupt):
            print()
            break
        if not line:
            continue
        if line in ("/quit", "/exit", "/q"):
            break
        if line.startswith("/approve "):
            _id = line.split(None, 1)[1].strip()
            print(json.dumps(outbox.approve_send(backend, ns, _id), default=str))
            continue
        if line.startswith("/reject "):
            _id = line.split(None, 1)[1].strip()
            print(json.dumps(outbox.reject(backend, ns, _id), default=str))
            continue
        res = agent.run(line)
        print((res.get("final_text") or "").strip())
    return 0


def cmd_brief(a) -> int:
    from mcp_server_evosql import brief, prefs
    backend, ns = _backend_ns()
    data = brief.collect(backend, ns)
    if a.json:
        print(json.dumps(data, ensure_ascii=False, indent=2, default=str))
        return 0
    lang, _ = prefs.get_language(backend, ns)
    print(brief.render(data, name=ns.split("_")[0], lang=lang))
    if a.queue:
        items = brief.queue_drafts(backend, ns, top=a.queue,
                                   name=ns.split("_")[0].capitalize())
        _stderr(f"\nqueued {len(items)} draft(s) — review with: evoagent approve")
    return 0


def cmd_approve(a) -> int:
    from mcp_server_evosql import outbox
    backend, _ns = _backend_ns()
    pending = outbox.list_pending_all(backend)
    if not a.id:                                 # list mode
        if not pending:
            print("no pending drafts.")
            return 0
        for it in pending:
            print(f"  {it.get('id')}  [{it.get('namespace')}] "
                  f"→{it.get('to') or '?'}  {(it.get('body') or '')[:70]}")
        return 0
    targets = pending if a.id == "all" else [it for it in pending
                                             if it.get("id") == a.id]
    if not targets:
        _stderr(f"no pending draft with id {a.id!r}")
        return 1
    for it in targets:
        res = outbox.approve_send(backend, it["namespace"], it["id"])
        tag = "sent" if res.get("sent") else "approved (dry-run)"
        print(f"  {it['id']}: {tag}")
    return 0


def cmd_status(a) -> int:
    rc = _hub(["status"] + (["--json"] if getattr(a, "json", False) else []))
    try:
        backend, ns = _backend_ns()
        backend._query(f"SELECT mem_namespace FROM __mem_{backend.memory}")
        n = len(__import__("mcp_server_evosql.outbox", fromlist=["x"])
                .list_pending_all(backend))
        print(f"EvolutionDB: reachable (namespace={ns}); pending drafts: {n}")
    except Exception as e:
        print(f"EvolutionDB: NOT reachable — {str(e)[:80]}")
    return rc


def cmd_connect(a) -> int:
    from orchestrator import install
    print(json.dumps(install.install(a.name), default=str))
    print(json.dumps(install.authenticate(a.name), default=str))
    return 0


def cmd_accounts(a) -> int:
    return _hub(["status"])


def cmd_sync(a) -> int:
    argv = ["start", a.name]
    if a.interval:
        argv += ["--interval", str(a.interval)]
    return _hub(argv)


def cmd_config(a) -> int:
    path = _config_path()
    if a.action == "path":
        print(path)
        return 0
    if a.action == "show":
        print(open(path).read() if os.path.exists(path) else f"(no {path})")
        return 0
    if a.action == "set":
        os.makedirs(os.path.dirname(path), exist_ok=True)
        lines = open(path).read().splitlines() if os.path.exists(path) else []
        if "[env]" not in lines:
            lines = ["[env]"] + lines
        key = a.key
        new = f'{key} = "{a.value}"'
        for i, ln in enumerate(lines):
            if ln.strip().startswith(f"{key} ") or ln.strip().startswith(f"{key}="):
                lines[i] = new
                break
        else:
            lines.append(new)
        open(path, "w").write("\n".join(lines) + "\n")
        print(f"set {key} in {path}")
        return 0
    _stderr("usage: evoagent config {path|show|set KEY VALUE}")
    return 2


def cmd_doctor(a) -> int:
    ok = True

    def check(good: bool, label: str, detail: str = "") -> None:
        nonlocal ok
        if not good:
            ok = False
        print(f"  {'✓' if good else '✗'} {label}"
              f"{(' — ' + detail) if detail else ''}")

    prov = _check_provider_safe(a.provider)
    if prov in _ANTHROPIC:
        check(bool(os.environ.get("ANTHROPIC_API_KEY")),
              "model key present (ANTHROPIC_API_KEY)")
    try:
        backend, ns = _backend_ns()
        backend._query(f"SELECT mem_namespace FROM __mem_{backend.memory}")
        check(True, "EvolutionDB reachable", f"namespace={ns}")
    except Exception as e:
        check(False, "EvolutionDB reachable", str(e)[:80])
    if os.environ.get("EVOSQL_EMBEDDED"):
        check(True, "embedded mode", "EVOSQL_EMBEDDED set")

    # Bind posture (advisory). The engine now defaults to loopback; only a
    # wildcard bind without TLS is worth flagging.
    bind = os.environ.get("EVOSQL_BIND", "").strip() or "127.0.0.1 (default)"
    if bind in ("0.0.0.0", "*"):
        print(f"  ⚠ engine bind = {bind} (all interfaces) — front it with TLS, "
              "or set EVOSQL_BIND=127.0.0.1 / --bind 127.0.0.1")
    else:
        print(f"  ✓ engine bind = {bind}")

    # Daily LLM spend cap (advisory).
    cap = os.environ.get("EVOSQL_LLM_DAILY_TOKENS", "").strip()
    if cap and cap.isdigit() and int(cap) > 0:
        print(f"  ✓ daily LLM token cap = {cap}")
    else:
        print("  ⓘ no daily LLM token cap — set EVOSQL_LLM_DAILY_TOKENS to bound spend")

    print("  ⓘ data dir: EVOSQL_DATA_DIR overrides the default ./root")
    print("  ⓘ connectors: manage with `evoagent connect <name>` / `accounts`")
    return 0 if ok else 1


def _check_provider_safe(provider) -> str:
    try:
        return _check_provider(provider)
    except NotImplementedError as e:
        print(f"  ✗ provider — {e}")
        return "unsupported"


# ----------------------------------------------------------------- backup
def _data_dir() -> str:
    """The engine's data directory (EVOSQL_DATA_DIR, default 'root') — the
    self-contained folder that holds evosql.db + the WAL after the data-dir
    hardening, so a copy of it is a complete backup."""
    return os.environ.get("EVOSQL_DATA_DIR") or "root"


def _engine_reachable(timeout: float = 0.4) -> bool:
    """True if something is listening on the engine's PG port — used to refuse a
    restore under a live server (which would corrupt the data)."""
    import socket
    host = os.environ.get("EVOSQL_HOST", "127.0.0.1")
    port = int(os.environ.get("EVOSQL_PORT", "5433"))
    try:
        with socket.create_connection((host, port), timeout):
            return True
    except OSError:
        return False


def cmd_backup(a) -> int:
    """Copy the engine data directory to a timestamped backup folder. This is a
    crash-consistent online backup: it copies evosql.db first and the WAL last,
    so a restore replays the WAL to reach a consistent state (the same recovery
    the engine runs after a crash). For a guaranteed-quiescent copy, stop the
    engine first."""
    import shutil
    import datetime
    src = a.data_dir or _data_dir()
    if not os.path.isdir(src):
        _stderr(f"data dir not found: {src} (set EVOSQL_DATA_DIR or --data-dir)")
        return 1
    stamp = datetime.datetime.now().strftime("%Y%m%d-%H%M%S")
    dest_root = a.dest or "."
    dest = os.path.join(dest_root, f"evosql-backup-{stamp}")
    os.makedirs(dest, exist_ok=True)
    # Order matters for crash consistency: data file first, WAL/archive last,
    # so the copied WAL is at least as new as the copied data file.
    names = os.listdir(src)
    ordered = ([n for n in names if n == "evosql.db"]
               + [n for n in names if n not in ("evosql.db", "evosql.wal",
                                                 "evosql.wal.archive")]
               + [n for n in names if n in ("evosql.wal", "evosql.wal.archive")])
    copied = 0
    for n in ordered:
        s = os.path.join(src, n)
        if os.path.isfile(s):
            shutil.copy2(s, os.path.join(dest, n)); copied += 1
        elif os.path.isdir(s):
            shutil.copytree(s, os.path.join(dest, n)); copied += 1
    print(f"backed up {copied} item(s) from {src} -> {dest}")
    print("note: crash-consistent online backup; restore replays the WAL. "
          "Stop the engine first for a fully quiescent copy.")
    return 0


def cmd_restore(a) -> int:
    """Restore a backup folder into the engine data directory. Refuses to run
    while the engine is reachable (restoring under a live server corrupts data)
    and refuses to overwrite a non-empty data dir without --force."""
    import shutil
    src = a.src
    if not os.path.isdir(src):
        _stderr(f"backup folder not found: {src}")
        return 1
    dest = a.data_dir or _data_dir()
    if _engine_reachable():
        _stderr("the engine appears to be running — stop it before restoring "
                "(restoring under a live server corrupts data).")
        return 1
    if os.path.isdir(dest) and os.listdir(dest) and not a.force:
        _stderr(f"target data dir {dest} is not empty — pass --force to overwrite.")
        return 1
    os.makedirs(dest, exist_ok=True)
    restored = 0
    for n in os.listdir(src):
        s = os.path.join(src, n); d = os.path.join(dest, n)
        if os.path.isfile(s):
            shutil.copy2(s, d); restored += 1
        elif os.path.isdir(s):
            shutil.rmtree(d, ignore_errors=True); shutil.copytree(s, d); restored += 1
    print(f"restored {restored} item(s) from {src} -> {dest}")
    print("now (re)start the engine — it will replay the WAL to reach a "
          "consistent state.")
    return 0


# ----------------------------------------------------------------- DSAR
def cmd_export_data(a) -> int:
    """Right-to-access: export every row a user owns, across all stores, as
    JSON (to --out or stdout)."""
    from mcp_server_evosql import dsar
    backend, default_ns = _backend_ns()
    user = a.user or default_ns
    data = dsar.export_user(backend, user)
    text = json.dumps(data, indent=2, ensure_ascii=False, default=str)
    if a.out:
        with open(a.out, "w", encoding="utf-8") as fh:
            fh.write(text)
        print(f"exported {data['row_count']} row(s) for {user} -> {a.out}")
    else:
        print(text)
    return 0


def cmd_erase_data(a) -> int:
    """Right-to-erasure: delete every row a user owns across all stores. IRREVERSIBLE.
    Without --yes it is a dry run that only reports what WOULD be erased."""
    from mcp_server_evosql import dsar
    backend, default_ns = _backend_ns()
    user = a.user or default_ns
    if not a.yes:
        preview = dsar.export_user(backend, user)
        print(f"DRY RUN — would erase {preview['row_count']} row(s) for {user} "
              f"across {len(preview['stores'])} store(s). Pass --yes to proceed "
              f"(this is IRREVERSIBLE).")
        return 0
    res = dsar.erase_user(backend, user)
    print(f"erased {res['row_count']} row(s) for {user} "
          f"across {len(res['deleted'])} store(s).")
    return 0


# ----------------------------------------------------------------- wiring
_SUBCOMMANDS = {"run", "chat", "brief", "approve", "status", "connect",
                "accounts", "sync", "config", "doctor", "backup", "restore",
                "export-data", "erase-data"}


def build_parser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser(prog="evoagent", description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest="command")

    def _agent_flags(sp):
        sp.add_argument("--model")
        sp.add_argument("--provider", default=None)
        sp.add_argument("--max-turns", type=int, default=12)
        sp.add_argument("-v", "--verbose", action="store_true")

    r = sub.add_parser("run", help="one-shot agent turn (default)")
    r.add_argument("prompt", nargs="*"); _agent_flags(r); r.set_defaults(fn=cmd_run)
    c = sub.add_parser("chat", help="interactive session (+ /approve, /reject)")
    _agent_flags(c); c.set_defaults(fn=cmd_chat)

    b = sub.add_parser("brief", help="the morning brief")
    b.add_argument("--json", action="store_true")
    b.add_argument("--queue", type=int, default=0)
    b.set_defaults(fn=cmd_brief)

    ap = sub.add_parser("approve", help="review/approve queued drafts (ADR-004)")
    ap.add_argument("id", nargs="?"); ap.set_defaults(fn=cmd_approve)

    st = sub.add_parser("status", help="connectors + DB + pending drafts")
    st.add_argument("--json", action="store_true"); st.set_defaults(fn=cmd_status)

    cn = sub.add_parser("connect", help="install + authenticate a connector")
    cn.add_argument("name"); cn.set_defaults(fn=cmd_connect)
    sub.add_parser("accounts", help="connected accounts").set_defaults(fn=cmd_accounts)

    sy = sub.add_parser("sync", help="run a connector")
    sy.add_argument("name"); sy.add_argument("--interval", type=int, default=0)
    sy.set_defaults(fn=cmd_sync)

    cf = sub.add_parser("config", help="local config (~/.evoagent/config.toml)")
    cf.add_argument("action", choices=["path", "show", "set"])
    cf.add_argument("key", nargs="?"); cf.add_argument("value", nargs="?")
    cf.set_defaults(fn=cmd_config)

    sub.add_parser("doctor", help="readiness checklist").set_defaults(
        fn=cmd_doctor, model=None, provider=None)

    bk = sub.add_parser("backup", help="copy the engine data dir to a backup folder")
    bk.add_argument("dest", nargs="?", help="destination folder (default: .)")
    bk.add_argument("--data-dir", default=None, help="engine data dir (default: $EVOSQL_DATA_DIR or root)")
    bk.set_defaults(fn=cmd_backup)

    rs = sub.add_parser("restore", help="restore a backup folder into the data dir")
    rs.add_argument("src", help="backup folder to restore from")
    rs.add_argument("--data-dir", default=None, help="engine data dir (default: $EVOSQL_DATA_DIR or root)")
    rs.add_argument("--force", action="store_true", help="overwrite a non-empty data dir")
    rs.set_defaults(fn=cmd_restore)

    ed = sub.add_parser("export-data", help="export all of a user's data (DSAR access)")
    ed.add_argument("--user", default=None, help="user namespace (default: MCP_USER_ID)")
    ed.add_argument("--out", default=None, help="write JSON here (default: stdout)")
    ed.set_defaults(fn=cmd_export_data)

    er = sub.add_parser("erase-data", help="erase all of a user's data (DSAR erasure, IRREVERSIBLE)")
    er.add_argument("--user", default=None, help="user namespace (default: MCP_USER_ID)")
    er.add_argument("--yes", action="store_true", help="actually erase (omit for a dry run)")
    er.set_defaults(fn=cmd_erase_data)
    return p


def main(argv: Optional[list] = None) -> int:
    argv = list(sys.argv[1:] if argv is None else argv)
    # default to `run` when the first token is a prompt, not a subcommand
    if argv and not argv[0].startswith("-") and argv[0] not in _SUBCOMMANDS:
        argv = ["run"] + argv
    elif not argv:
        argv = ["run"]
    _load_config_into_env()
    parser = build_parser()
    a = parser.parse_args(argv)
    fn = getattr(a, "fn", None)
    if fn is None:
        parser.print_help()
        return 0
    try:
        return fn(a)
    except NotImplementedError as e:
        _stderr(str(e))
        return 1
    except Exception as e:  # pragma: no cover
        _stderr(f"evoagent error: {e}")
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
