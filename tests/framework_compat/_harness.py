"""
_harness.py — shared test fixture for the framework-compat suite.

Each framework's test file imports `runner`, `assert_eq`, and the
`fresh_conn()` helper from this module. The runner counts pass/fail
across the file and exits non-zero when anything fails.

The harness assumes evosql-server is reachable at the default
EVO endpoint (127.0.0.1:9967, admin/admin) — same contract as the
existing tests/ suite.
"""
from __future__ import annotations

import os
import sys
import traceback
from typing import Callable, List

# Make the in-tree Python client importable regardless of CWD.
HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(os.path.dirname(HERE))
PY_SDK = os.path.join(REPO, "client", "python-evosql-memory")
if PY_SDK not in sys.path:
    sys.path.insert(0, PY_SDK)

# ----- Connection factory ---------------------------------------------
def fresh_conn():
    """Return a brand-new evosql_memory.Connection. Each test owns its
    own connection — the SDK contract says one per thread, and most
    of these tests open additional driver connections anyway."""
    from evosql_memory import connect
    return connect("127.0.0.1", 9967, "admin", "admin")


# ----- Tiny test runner -----------------------------------------------
class Runner:
    """Counts PASS/FAIL across one test file. The convention every
    test file follows:

        from _harness import Runner

        runner = Runner("LangGraph compatibility")

        @runner.case("checkpoint put/get round-trip")
        def _():
            ...

        runner.finish()   # prints summary, exits non-zero on failure
    """

    def __init__(self, suite_name: str):
        self.suite = suite_name
        self.cases: List[tuple] = []
        self.passed = 0
        self.failed = 0
        print(f"=== {suite_name} ===\n")

    def case(self, name: str):
        def deco(fn: Callable[[], None]):
            self.cases.append((name, fn))
            return fn
        return deco

    def run(self) -> int:
        for name, fn in self.cases:
            try:
                fn()
                print(f"  PASS: {name}")
                self.passed += 1
            except Exception as e:
                print(f"  FAIL: {name} - {e}")
                if os.environ.get("FCOMPAT_TRACEBACK"):
                    traceback.print_exc()
                self.failed += 1
        print(f"\n=== {self.suite}: {self.passed} passed, "
              f"{self.failed} failed ===")
        return 0 if self.failed == 0 else 1

    def finish(self) -> None:
        sys.exit(self.run())


# ----- Cleanup helper --------------------------------------------------
def drop_if_exists(conn, kind: str, name: str) -> None:
    """kind ∈ {MEMORY STORE, CHECKPOINT STORE, ENTITY STORE,
    MESSAGE LOG, DOCUMENT STORE}. Swallow errors; the next test will
    fail cleanly if the drop didn't take effect."""
    try:
        conn.exec_(f"DROP {kind} IF EXISTS {name}")
    except Exception:
        pass


def assert_eq(actual, expected, msg: str = "") -> None:
    if actual != expected:
        raise AssertionError(
            f"{msg or 'assert_eq'}: expected {expected!r}, got {actual!r}")


def assert_in(needle, haystack, msg: str = "") -> None:
    if needle not in haystack:
        raise AssertionError(
            f"{msg or 'assert_in'}: {needle!r} not in {haystack!r}")
