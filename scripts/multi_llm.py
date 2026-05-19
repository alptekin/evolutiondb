#!/usr/bin/env python3
"""Fan out the same prompt to Anthropic, OpenAI, and Gemini in parallel.

Built for side-by-side UI-test brainstorming on the hub — e.g. paste
the inspector iframe HTML or describe a flow, then compare what each
model proposes. Stdlib-only to keep it usable from a fresh venv.

Usage
-----
  scripts/multi_llm.py "Write a Playwright test for the start button."
  echo "..." | scripts/multi_llm.py            # stdin
  scripts/multi_llm.py -f prompt.txt           # from file
  scripts/multi_llm.py -p anthropic,openai ... # subset

Environment
-----------
  ANTHROPIC_API_KEY            required for the anthropic provider
  OPENAI_API_KEY               required for the openai provider
  GEMINI_API_KEY               required for the gemini provider
  ANTHROPIC_MODEL              default: claude-sonnet-4-6
  OPENAI_MODEL                 default: gpt-4o
  GEMINI_MODEL                 default: gemini-2.5-flash
  MULTI_LLM_MAX_TOKENS         default: 1024
  MULTI_LLM_TIMEOUT            default: 60 (seconds)

Providers whose key is missing are skipped with a notice, so the
script always runs whatever it can."""
from __future__ import annotations

import argparse
import concurrent.futures as futures
import json
import os
import sys
import time
import urllib.error
import urllib.request
from dataclasses import dataclass
from pathlib import Path
from typing import Callable, Dict, List, Optional


def _load_dotenv() -> None:
    """Fill missing API keys from a .env file at the repo root.

    Only sets keys that are unset — never overrides an existing
    value, never logs or prints any value. Silently no-ops if the
    file is absent."""
    path = Path(__file__).resolve().parents[1] / ".env"
    if not path.is_file():
        return
    try:
        for line in path.read_text(encoding="utf-8").splitlines():
            s = line.strip()
            if not s or s.startswith("#") or "=" not in s:
                continue
            if s.startswith("export "):
                s = s[len("export "):].lstrip()
            k, _, v = s.partition("=")
            k = k.strip()
            v = v.strip().strip('"').strip("'")
            if k and k not in os.environ:
                os.environ[k] = v
    except OSError:
        pass


_load_dotenv()

TIMEOUT     = int(os.environ.get("MULTI_LLM_TIMEOUT",   "60"))
MAX_TOKENS  = int(os.environ.get("MULTI_LLM_MAX_TOKENS", "1024"))


@dataclass
class Result:
    provider: str
    model:    str
    text:     str
    seconds:  float
    error:    Optional[str] = None


def _post_json(url: str, body: dict, headers: dict) -> dict:
    req = urllib.request.Request(url,
        data=json.dumps(body).encode(),
        method="POST", headers={**headers, "Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=TIMEOUT) as resp:
        return json.loads(resp.read().decode())


# ---------------------------------------------------------------- #
#  Providers                                                        #
# ---------------------------------------------------------------- #
def call_anthropic(prompt: str, model: str, key: str) -> str:
    payload = _post_json(
        "https://api.anthropic.com/v1/messages",
        {
            "model": model,
            "max_tokens": MAX_TOKENS,
            "messages": [{"role": "user", "content": prompt}],
        },
        {"x-api-key": key, "anthropic-version": "2023-06-01"},
    )
    parts = [b.get("text", "") for b in payload.get("content", [])
             if b.get("type") == "text"]
    return "".join(parts).strip()


def call_openai(prompt: str, model: str, key: str) -> str:
    payload = _post_json(
        "https://api.openai.com/v1/chat/completions",
        {
            "model": model,
            "max_tokens": MAX_TOKENS,
            "messages": [{"role": "user", "content": prompt}],
        },
        {"Authorization": f"Bearer {key}"},
    )
    return payload["choices"][0]["message"]["content"].strip()


def call_gemini(prompt: str, model: str, key: str) -> str:
    payload = _post_json(
        f"https://generativelanguage.googleapis.com/v1beta/models/"
        f"{model}:generateContent?key={key}",
        {
            "contents": [{"parts": [{"text": prompt}]}],
            "generationConfig": {"maxOutputTokens": MAX_TOKENS},
        },
        {},
    )
    cands = payload.get("candidates") or []
    if not cands:
        return ""
    parts = cands[0].get("content", {}).get("parts", []) or []
    return "".join(p.get("text", "") for p in parts).strip()


@dataclass
class Provider:
    name:    str
    key_env: str
    model:   str
    fn:      Callable[[str, str, str], str]


PROVIDERS: Dict[str, Provider] = {
    "anthropic": Provider("anthropic", "ANTHROPIC_API_KEY",
        os.environ.get("ANTHROPIC_MODEL", "claude-sonnet-4-6"),
        call_anthropic),
    "openai":    Provider("openai", "OPENAI_API_KEY",
        os.environ.get("OPENAI_MODEL", "gpt-4o"),
        call_openai),
    "gemini":    Provider("gemini", "GEMINI_API_KEY",
        os.environ.get("GEMINI_MODEL", "gemini-2.5-flash"),
        call_gemini),
}


# ---------------------------------------------------------------- #
#  Runner                                                           #
# ---------------------------------------------------------------- #
def _run_one(p: Provider, prompt: str) -> Result:
    t0 = time.perf_counter()
    try:
        key = os.environ[p.key_env]
        text = p.fn(prompt, p.model, key)
        return Result(p.name, p.model, text, time.perf_counter() - t0)
    except (urllib.error.HTTPError, urllib.error.URLError, TimeoutError,
            KeyError, ValueError) as exc:
        msg = str(exc)
        if isinstance(exc, urllib.error.HTTPError):
            try:
                msg = f"{exc.code} {exc.read().decode()[:400]}"
            except Exception:
                pass
        return Result(p.name, p.model, "",
                      time.perf_counter() - t0, error=msg)


def run(prompt: str, providers: List[Provider]) -> List[Result]:
    with futures.ThreadPoolExecutor(max_workers=len(providers)) as ex:
        return list(ex.map(lambda p: _run_one(p, prompt), providers))


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
def _read_prompt(args) -> str:
    if args.file:
        return open(args.file, encoding="utf-8").read()
    if args.prompt:
        return args.prompt
    if not sys.stdin.isatty():
        return sys.stdin.read()
    sys.exit("error: no prompt — pass as arg, -f FILE, or via stdin")


def _select(names: Optional[str]) -> List[Provider]:
    if not names:
        chosen = list(PROVIDERS.keys())
    else:
        chosen = [n.strip().lower() for n in names.split(",") if n.strip()]
        for n in chosen:
            if n not in PROVIDERS:
                sys.exit(f"error: unknown provider '{n}'. "
                         f"known: {', '.join(PROVIDERS)}")
    active: List[Provider] = []
    for n in chosen:
        p = PROVIDERS[n]
        if not os.environ.get(p.key_env):
            print(f"[skip] {n}: {p.key_env} unset", file=sys.stderr)
            continue
        active.append(p)
    if not active:
        sys.exit("error: no providers active (set at least one API key)")
    return active


def _render(results: List[Result], as_json: bool) -> None:
    if as_json:
        print(json.dumps([r.__dict__ for r in results], indent=2,
                         ensure_ascii=False))
        return
    for r in results:
        bar = "=" * 70
        print(f"\n{bar}\n{r.provider}  ({r.model})  "
              f"{r.seconds:.2f}s\n{bar}")
        if r.error:
            print(f"[error] {r.error}")
        else:
            print(r.text or "[empty response]")


def main(argv: Optional[List[str]] = None) -> int:
    ap = argparse.ArgumentParser(
        description="Fan a prompt out to anthropic + openai + gemini.")
    ap.add_argument("prompt", nargs="?", help="prompt text")
    ap.add_argument("-f", "--file", help="read prompt from file")
    ap.add_argument("-p", "--providers",
        help="comma list: anthropic,openai,gemini  (default: all)")
    ap.add_argument("--json", action="store_true",
        help="machine-readable JSON output")
    args = ap.parse_args(argv)

    prompt = _read_prompt(args)
    providers = _select(args.providers)
    results = run(prompt, providers)
    _render(results, as_json=args.json)
    return 0 if all(r.error is None for r in results) else 1


if __name__ == "__main__":
    raise SystemExit(main())
