"""Cross-vendor benchmark drivers.

Every driver implements the same interface so `run_all.py` can iterate
over them generically:

    class Driver:
        name: str

        def setup(self) -> None: ...           # create whatever the vendor needs
        def teardown(self) -> None: ...        # cleanup
        def memory_put(self, ns, key, value, embedding=None) -> None: ...
        def memory_get(self, ns, key) -> str: ...
        def is_available(self) -> bool: ...    # detect at runtime; skip if False

The runner gracefully skips any driver whose `is_available()` returns
False (e.g. when the vendor's package or its dependent service isn't
installed). That keeps the harness usable on a clean dev box: out of
the box you get the EvolutionDB column; install vendor dependencies
to fill in the rest.
"""
