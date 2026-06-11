"""
evolution-agent CLI — run the standalone agent loop from a terminal.

    evolution-agent "what meetings do I have today and who owes me a reply?"
    echo "summarize my open loops" | evolution-agent
    evolution-agent --once "..."        # single prompt then exit (default)

Connects to EvolutionDB the same way the MCP server does (env: EVOSQL_HOST/PORT/
USER/PASSWORD, or EVOSQL_EMBEDDED=1 for zero-Docker). Needs the `anthropic` SDK
and ANTHROPIC_API_KEY for the default Anthropic model. Tool calls stream to
stderr; the final answer goes to stdout. Nothing is ever sent — drafts are
queued for human approval (ADR-004).
"""
from __future__ import annotations

import os
import sys
from typing import Dict, Any

from .loop import AgentLoop, DEFAULT_MODEL


def _stderr(s: str) -> None:
    sys.stderr.write(s + "\n")
    sys.stderr.flush()


def _short(v: Any, n: int = 160) -> str:
    s = v if isinstance(v, str) else repr(v)
    return s if len(s) <= n else s[:n - 1] + "…"


def _make_observer(color: bool, verbose: bool):
    dim = "\033[2m" if color else ""
    cyan = "\033[36m" if color else ""
    rst = "\033[0m" if color else ""

    def on_event(kind: str, payload: Dict[str, Any]) -> None:
        if kind == "tool_call":
            _stderr(f"{cyan}→ {payload['tool']}{rst} "
                    f"{dim}{_short(payload.get('input'))}{rst}")
        elif kind == "tool_result" and verbose:
            _stderr(f"  {dim}{_short(payload.get('result'))}{rst}")
    return on_event


def main() -> int:
    args = sys.argv[1:]
    model = os.environ.get("EVOSQL_AGENT_MODEL", DEFAULT_MODEL)
    max_turns = 12
    verbose = False
    prompt_parts = []

    i = 0
    while i < len(args):
        a = args[i]
        if a in ("--model",) and i + 1 < len(args):
            model = args[i + 1]; i += 2; continue
        if a in ("--max-turns",) and i + 1 < len(args):
            max_turns = int(args[i + 1]); i += 2; continue
        if a in ("-v", "--verbose"):
            verbose = True; i += 1; continue
        if a in ("--once",):
            i += 1; continue          # default mode; accepted for clarity
        if a in ("-h", "--help"):
            print(__doc__)
            return 0
        prompt_parts.append(a); i += 1

    prompt = " ".join(prompt_parts).strip()
    if not prompt and not sys.stdin.isatty():
        prompt = sys.stdin.read().strip()
    if not prompt:
        _stderr("usage: evolution-agent \"<your request>\"  (or pipe it on stdin)")
        return 2

    color = sys.stderr.isatty()
    try:
        from mcp_server_evosql.server import MCPServer
    except Exception as e:  # pragma: no cover
        _stderr(f"cannot import mcp_server_evosql ({e}). Install it: "
                f"pip install mcp-server-evolutiondb")
        return 1

    try:
        server = MCPServer()
        agent = AgentLoop(server, model=model, max_turns=max_turns,
                          on_event=_make_observer(color, verbose))
        result = agent.run(prompt)
    except ImportError as e:  # pragma: no cover - missing anthropic SDK
        _stderr(f"the Anthropic SDK is required for the default model ({e}). "
                f"Install it: pip install anthropic  (and set ANTHROPIC_API_KEY)")
        return 1
    except Exception as e:  # pragma: no cover
        _stderr(f"agent error: {e}")
        return 1

    text = (result.get("final_text") or "").strip()
    if text:
        print(text)
    if result.get("stop_reason") == "max_turns":
        _stderr(f"\n[stopped after {result['turns']} turns without a final "
                f"answer — try a narrower request or raise --max-turns]")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
