"""
test_query_transform — query-side recall rewriting (query_transform.py).

All server-free and model-free: the heavy in-process rewrite LM is never loaded
(_generate is stubbed), so we test the pure surface — line cleanup, env-driven
mode resolution, per-mode prompt construction, model-output parsing, and the
additive contract that the original query is always variant 0 and a transform
can only ADD coverage, never strip the baseline.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from mcp_server_evosql import query_transform as qt


# ---------------------------------------------------------------- _clean_line
def test_clean_line_strips_markers():
    assert qt._clean_line("  - foo bar ") == "foo bar"
    assert qt._clean_line("1. first variant") == "first variant"
    assert qt._clean_line("2) second") == "second"
    assert qt._clean_line('"quoted query"') == "quoted query"
    assert qt._clean_line("• bullet") == "bullet"
    assert qt._clean_line("   ") == ""


# ---------------------------------------------------------------- no-op
def test_noop_returns_query_unchanged():
    t = qt._NoOpTransform()
    assert t.kind == "off" and t.model == "n/a"
    assert t.transform("son release ne zaman") == ["son release ne zaman"]


# ---------------------------------------------------------------- env resolve
def _clear_env():
    for k in ("EVOSQL_QUERY_TRANSFORM", "EVOSQL_QT_MODEL", "EVOSQL_QT_N",
              "EVOSQL_QT_MAX_TOKENS"):
        os.environ.pop(k, None)


def test_env_default_is_noop():
    _clear_env()
    assert isinstance(qt.query_transform_from_env(), qt._NoOpTransform)


def test_env_off_aliases_are_noop():
    for v in ("off", "none", "0", "false", ""):
        _clear_env()
        os.environ["EVOSQL_QUERY_TRANSFORM"] = v
        assert isinstance(qt.query_transform_from_env(), qt._NoOpTransform), v
    _clear_env()


def test_env_unknown_mode_falls_back_to_noop():
    _clear_env()
    os.environ["EVOSQL_QUERY_TRANSFORM"] = "babelfish"
    assert isinstance(qt.query_transform_from_env(), qt._NoOpTransform)
    _clear_env()


def test_env_valid_modes_build_local_transform():
    for mode in ("translate", "hyde", "multi"):
        _clear_env()
        os.environ["EVOSQL_QUERY_TRANSFORM"] = mode
        t = qt.query_transform_from_env()
        assert isinstance(t, qt._LocalGenTransform)
        assert t.kind == mode and t.mode == mode
        assert t.model == "Qwen/Qwen2.5-1.5B-Instruct"      # default model id
    _clear_env()


def test_env_overrides_model_and_n():
    _clear_env()
    os.environ.update({"EVOSQL_QUERY_TRANSFORM": "multi",
                       "EVOSQL_QT_MODEL": "my/model", "EVOSQL_QT_N": "5"})
    t = qt.query_transform_from_env()
    assert t.model == "my/model" and t._n == 5
    os.environ["EVOSQL_QT_N"] = "not-an-int"                 # bad value -> default 3
    assert qt.query_transform_from_env()._n == 3
    _clear_env()


# ---------------------------------------------------------------- prompts
def test_messages_per_mode():
    tr = qt._LocalGenTransform("translate", "m")
    msgs = tr._messages("son release ne zaman çıktı")
    assert msgs[0]["role"] == "system" and "English" in msgs[0]["content"]
    assert msgs[1]["content"] == "son release ne zaman çıktı"

    hy = qt._LocalGenTransform("hyde", "m")
    assert "ANSWER" in hy._messages("q")[0]["content"]

    mu = qt._LocalGenTransform("multi", "m", n_variants=4)
    assert "4" in mu._messages("q")[0]["content"]            # n interpolated


def test_messages_truncate_long_query():
    tr = qt._LocalGenTransform("translate", "m")
    msgs = tr._messages("x" * 5000)
    assert len(msgs[1]["content"]) == 1000


# ---------------------------------------------------------------- parsing
def test_parse_single_line_modes():
    for mode in ("translate", "hyde"):
        t = qt._LocalGenTransform(mode, "m")
        assert t._parse("- when did the last release ship\n") == \
            ["when did the last release ship"]
        assert t._parse("   ") == []


def test_parse_multi_one_per_line_capped():
    t = qt._LocalGenTransform("multi", "m", n_variants=2)
    raw = "1. release date\n2. son sürüm tarihi\n3. version cut date"
    assert t._parse(raw) == ["release date", "son sürüm tarihi"]   # capped at n=2


# ---------------------------------------------------------------- transform()
class _StubGen(qt._LocalGenTransform):
    """A _LocalGenTransform whose generation is canned — no model load."""
    def __init__(self, mode, raw, **kw):
        super().__init__(mode, "stub", **kw)
        self._raw = raw

    def _generate(self, query):
        return self._raw


def test_transform_keeps_original_first_and_adds_variants():
    t = _StubGen("multi", "release date\nson sürüm", n_variants=3)
    out = t.transform("son sürüm ne zaman")
    assert out[0] == "son sürüm ne zaman"                   # original always first
    assert "release date" in out and "son sürüm" in out


def test_transform_dedups_and_skips_echo_of_query():
    # model echoes the query (case-insensitively) and repeats a variant
    t = _StubGen("multi", "Son Sürüm Ne Zaman\nfoo\nfoo", n_variants=3)
    out = t.transform("son sürüm ne zaman")
    assert out == ["son sürüm ne zaman", "foo"]             # echo + dup removed


def test_transform_failure_degrades_to_identity():
    t = _StubGen("translate", None)                          # generation failed
    assert t.transform("q") == ["q"]


def test_transform_empty_query_is_identity():
    t = _StubGen("multi", "a\nb")
    assert t.transform("   ") == ["   "]


def test_transform_caches_by_query():
    calls = {"n": 0}

    class _Counting(_StubGen):
        def _generate(self, query):
            calls["n"] += 1
            return self._raw

    t = _Counting("multi", "x\ny")
    t.transform("q")
    t.transform("q")
    assert calls["n"] == 1                                   # second hit is cached


def main():
    tests = [test_clean_line_strips_markers, test_noop_returns_query_unchanged,
             test_env_default_is_noop, test_env_off_aliases_are_noop,
             test_env_unknown_mode_falls_back_to_noop,
             test_env_valid_modes_build_local_transform,
             test_env_overrides_model_and_n, test_messages_per_mode,
             test_messages_truncate_long_query, test_parse_single_line_modes,
             test_parse_multi_one_per_line_capped,
             test_transform_keeps_original_first_and_adds_variants,
             test_transform_dedups_and_skips_echo_of_query,
             test_transform_failure_degrades_to_identity,
             test_transform_empty_query_is_identity, test_transform_caches_by_query]
    for fn in tests:
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — query_transform query-side rewriting")
    return 0


if __name__ == "__main__":
    sys.exit(main())
