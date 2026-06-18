"""
test_spend — the opt-in daily token cap (spend.py) and the 429/5xx retry
wrapper in llm._urlopen_json.

The ledger file and clock boundary are isolated per test via tmp_path + the
EVOSQL_LLM_SPEND_FILE override; urllib is stubbed so no network is touched.
"""
from __future__ import annotations

import io
import sys
import urllib.error

import pytest

from mcp_server_evosql import llm, spend


# ---- spend.py: cap / check / record ---------------------------------------

def test_unlimited_by_default_is_noop(tmp_path, monkeypatch):
    ledger = tmp_path / "spend.json"
    monkeypatch.setenv("EVOSQL_LLM_SPEND_FILE", str(ledger))
    monkeypatch.delenv("EVOSQL_LLM_DAILY_TOKENS", raising=False)
    assert spend.cap() == 0
    spend.check(10_000_000)          # never raises with no cap
    spend.record(10_000_000)         # writes nothing when unlimited
    assert not ledger.exists()


def test_cap_blocks_when_exceeded(tmp_path, monkeypatch):
    ledger = tmp_path / "spend.json"
    monkeypatch.setenv("EVOSQL_LLM_SPEND_FILE", str(ledger))
    monkeypatch.setenv("EVOSQL_LLM_DAILY_TOKENS", "100")
    spend.check(50)                  # under cap, fine
    spend.record(80)                 # tally now 80
    assert spend.spent_today() == 80
    spend.check(20)                  # 80 + 20 == 100, still allowed
    with pytest.raises(RuntimeError):
        spend.check(21)              # 80 + 21 > 100 -> blocked


def test_estimate_tokens_rough():
    assert spend.estimate_tokens("") == 0          # empty contributes nothing
    assert spend.estimate_tokens("a" * 40) == 10   # ~4 chars/token
    assert spend.estimate_tokens(123, None) == 0   # non-strings ignored


def test_invalid_cap_is_unlimited(monkeypatch):
    monkeypatch.setenv("EVOSQL_LLM_DAILY_TOKENS", "not-a-number")
    assert spend.cap() == 0


# ---- llm.chat respects the cap before dispatching -------------------------

def test_chat_blocks_over_cap_before_dispatch(tmp_path, monkeypatch):
    ledger = tmp_path / "spend.json"
    monkeypatch.setenv("EVOSQL_LLM_SPEND_FILE", str(ledger))
    monkeypatch.setenv("EVOSQL_LLM_DAILY_TOKENS", "5")
    called = {"n": 0}
    monkeypatch.setattr(llm, "_dispatch", lambda *a, **k: called.__setitem__("n", called["n"] + 1) or "x")
    with pytest.raises(RuntimeError):
        llm.chat("a much longer prompt than five tokens", provider="openai", model="m")
    assert called["n"] == 0          # never reached the provider


# ---- llm._urlopen_json: 429/5xx retry then success ------------------------

class _Resp(io.BytesIO):
    def __enter__(self):
        return self
    def __exit__(self, *a):
        self.close()
        return False


def _http_error(code):
    return urllib.error.HTTPError("http://x", code, "boom", {}, None)


def test_urlopen_retries_then_succeeds(monkeypatch):
    calls = {"n": 0}
    sleeps = []
    monkeypatch.setattr(llm.time, "sleep", lambda s: sleeps.append(s))

    def fake_urlopen(req, timeout=60):
        calls["n"] += 1
        if calls["n"] < 3:
            raise _http_error(429)               # rate-limited twice
        return _Resp(b'{"ok": true}')            # then succeeds

    monkeypatch.setattr(llm.urllib.request, "urlopen", fake_urlopen)
    out = llm._urlopen_json(object())
    assert out == {"ok": True}
    assert calls["n"] == 3 and len(sleeps) == 2  # two backoff waits


def test_urlopen_gives_up_on_non_retryable(monkeypatch):
    monkeypatch.setattr(llm.time, "sleep", lambda s: None)

    def fake_urlopen(req, timeout=60):
        raise _http_error(400)                   # client error -> no retry

    monkeypatch.setattr(llm.urllib.request, "urlopen", fake_urlopen)
    with pytest.raises(urllib.error.HTTPError):
        llm._urlopen_json(object())


def main():
    import subprocess
    raise SystemExit(subprocess.call([sys.executable, "-m", "pytest", __file__, "-q"]))


if __name__ == "__main__":
    main()
