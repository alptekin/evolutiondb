"""
core.py — ctypes binding over libevosql-memory.{dylib,so}.

The C SDK already encapsulates connection state, error handling, and
the EVO wire protocol. This module:

  - Locates the shared library at import time (env override → local
    SDK build dir → system loader path).
  - Exposes a Pythonic Connection class that hides ctypes types and
    raises Python exceptions instead of returning negative ints.
  - Provides a Subscription class for the streaming surface, with a
    Python callback bridged to the C callback signature.

Threading: each Connection owns one C connection — keep one per
thread (the C SDK contract). Subscriptions own their own C-side
worker thread; the Python callback is invoked under the SDK's
internal mutex.
"""
from __future__ import annotations

import ctypes as C
import os
import platform
import threading
from typing import Callable, Iterable, List, Optional, Sequence


# --------------------------------------------------------------------
# Library location
# --------------------------------------------------------------------
def _candidate_libs() -> List[str]:
    here = os.path.dirname(os.path.abspath(__file__))
    sdk_build = os.path.normpath(os.path.join(
        here, "..", "..", "libevosql-memory", "build"))

    is_macos = platform.system() == "Darwin"
    ext = "dylib" if is_macos else "so"
    candidates = [
        os.environ.get("EVOSQL_MEMORY_LIB"),                      # explicit
        os.path.join(sdk_build, f"libevosql-memory.{ext}"),       # local build
        f"libevosql-memory.{ext}",                                # loader path
    ]
    return [p for p in candidates if p]


def _load_library() -> C.CDLL:
    last_err = None
    for path in _candidate_libs():
        try:
            return C.CDLL(path)
        except OSError as e:
            last_err = e
            continue
    raise OSError(
        f"libevosql-memory not found. Set EVOSQL_MEMORY_LIB or build "
        f"client/libevosql-memory. Last error: {last_err}")


_lib = _load_library()


# --------------------------------------------------------------------
# Error classes
# --------------------------------------------------------------------
class EvoError(Exception):
    """Generic SDK error. `code` is the EVO_ERR_* enum, `sqlstate`
    is the 5-char Postgres-style state when known."""

    def __init__(self, message: str, code: int = -1, sqlstate: str = ""):
        super().__init__(message)
        self.code = code
        self.sqlstate = sqlstate


class EvoNotFound(EvoError):
    """Raised by memory_get / checkpoint_get_latest when no row matches."""


class EvoSqlError(EvoError):
    """Raised when the server returns ERR <sqlstate> ... — sqlstate is set."""


# --------------------------------------------------------------------
# C signatures
# --------------------------------------------------------------------
_lib.evo_connect.restype  = C.c_void_p
_lib.evo_connect.argtypes = [C.c_char_p, C.c_int, C.c_char_p, C.c_char_p]

_lib.evo_close.restype  = None
_lib.evo_close.argtypes = [C.c_void_p]

_lib.evo_exec.restype  = C.c_int
_lib.evo_exec.argtypes = [C.c_void_p, C.c_char_p]

_lib.evo_query.restype  = C.c_int
_lib.evo_query.argtypes = [C.c_void_p, C.c_char_p, C.c_char_p,
                            C.c_int, C.c_int, C.c_int, C.POINTER(C.c_int)]

_lib.evo_memory_put.restype  = C.c_int
_lib.evo_memory_put.argtypes = [C.c_void_p, C.c_char_p, C.c_char_p,
                                 C.c_char_p, C.c_char_p, C.c_char_p]

_lib.evo_memory_get.restype  = C.c_int
_lib.evo_memory_get.argtypes = [C.c_void_p, C.c_char_p, C.c_char_p,
                                 C.c_char_p, C.c_char_p, C.c_int]

_lib.evo_memory_delete.restype  = C.c_int
_lib.evo_memory_delete.argtypes = [C.c_void_p, C.c_char_p, C.c_char_p,
                                    C.c_char_p]

_lib.evo_checkpoint_put.restype  = C.c_int
_lib.evo_checkpoint_put.argtypes = [C.c_void_p, C.c_char_p, C.c_char_p,
                                     C.c_char_p, C.c_char_p, C.c_char_p,
                                     C.c_char_p]

_lib.evo_checkpoint_get_latest.restype  = C.c_int
_lib.evo_checkpoint_get_latest.argtypes = [C.c_void_p, C.c_char_p,
                                             C.c_char_p, C.c_char_p,
                                             C.c_int]

_lib.evo_vector_format.restype  = C.c_int
_lib.evo_vector_format.argtypes = [C.POINTER(C.c_float), C.c_int,
                                    C.c_char_p, C.c_int]

_lib.evo_strerror.restype  = C.c_char_p
_lib.evo_strerror.argtypes = [C.c_void_p]

_lib.evo_sqlstate.restype  = C.c_char_p
_lib.evo_sqlstate.argtypes = [C.c_void_p]

# Streaming
_EVO_CALLBACK = C.CFUNCTYPE(None,           # return
                             C.c_char_p,    # channel
                             C.c_char_p,    # payload
                             C.c_uint64,    # lsn
                             C.c_void_p)    # ctx (unused — we capture
                                            # the Python callback in
                                            # the Subscription object
                                            # to keep refs alive)

_lib.evo_subscribe.restype  = C.c_void_p
_lib.evo_subscribe.argtypes = [C.c_char_p, C.c_int, C.c_char_p, C.c_char_p,
                                C.c_char_p, _EVO_CALLBACK, C.c_void_p]

_lib.evo_cdc_subscribe.restype  = C.c_void_p
_lib.evo_cdc_subscribe.argtypes = [C.c_char_p, C.c_int,
                                    _EVO_CALLBACK, C.c_void_p, C.c_uint64]

_lib.evo_ack_up_to.restype  = C.c_int
_lib.evo_ack_up_to.argtypes = [C.c_void_p, C.c_uint64]

_lib.evo_unsubscribe.restype  = None
_lib.evo_unsubscribe.argtypes = [C.c_void_p]


# --------------------------------------------------------------------
# Helper: lift the SDK's last-error into a Python exception
# --------------------------------------------------------------------
def _last_error_str() -> tuple[str, str]:
    msg = _lib.evo_strerror(None)
    state = _lib.evo_sqlstate(None)
    return (msg.decode() if msg else "", state.decode() if state else "")


def _raise_last(default_msg: str = "EvoSQL SDK error") -> None:
    msg, state = _last_error_str()
    if state:
        raise EvoSqlError(msg or default_msg, sqlstate=state)
    raise EvoError(msg or default_msg)


def _b(s: Optional[str]) -> Optional[bytes]:
    return s.encode("utf-8") if s is not None else None


# --------------------------------------------------------------------
# Connection
# --------------------------------------------------------------------
class Connection:
    """Wraps a single libevosql-memory connection. Not thread-safe —
    use one Connection per thread."""

    def __init__(self, host: str, port: int, user: str, password: str):
        handle = _lib.evo_connect(_b(host), port, _b(user), _b(password))
        if not handle:
            _raise_last("evo_connect failed")
        self._handle: Optional[int] = handle

    # Lifecycle ---------------------------------------------------------
    def close(self) -> None:
        if self._handle:
            _lib.evo_close(self._handle)
            self._handle = None

    def __enter__(self) -> "Connection":
        return self

    def __exit__(self, *exc) -> None:
        self.close()

    def __del__(self) -> None:
        try:
            self.close()
        except Exception:
            pass

    def _h(self) -> int:
        if not self._handle:
            raise EvoError("Connection is closed")
        return self._handle

    # Generic SQL -------------------------------------------------------
    def exec_(self, sql: str) -> int:
        """Execute DML / DDL. Returns the affected-row count (or 0).
        Raises EvoSqlError on server-side failure."""
        rc = _lib.evo_exec(self._h(), _b(sql))
        if rc < 0:
            _raise_last("exec failed")
        return rc

    def query(self, sql: str, max_rows: int = 256, max_cols: int = 32,
               col_buf_size: int = 4096) -> List[List[str]]:
        """Run a SELECT and return rows. Each cell is a string (the
        wire format is text). NULL fields come back as "".

        For larger results bump max_rows / col_buf_size. The buffer is
        allocated on the Python side so over-sizing is cheap RAM but
        no harm."""
        buf_len = max_rows * max_cols * col_buf_size
        buf = C.create_string_buffer(buf_len)
        cols_out = C.c_int(0)
        n = _lib.evo_query(self._h(), _b(sql), buf,
                            max_rows, max_cols, col_buf_size,
                            C.byref(cols_out))
        if n < 0:
            _raise_last("query failed")
        cols = cols_out.value
        out: List[List[str]] = []
        for r in range(n):
            row: List[str] = []
            for c in range(cols):
                start = (r * max_cols + c) * col_buf_size
                end   = buf.raw.find(b"\x00", start, start + col_buf_size)
                if end < 0:
                    end = start + col_buf_size
                row.append(buf.raw[start:end].decode("utf-8",
                                                       errors="replace"))
            out.append(row)
        return out

    # Memory store ------------------------------------------------------
    def memory_put(self, store: str, ns: str, key: str, value_json: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        emb_lit = format_vector(embedding) if embedding else None
        rc = _lib.evo_memory_put(self._h(), _b(store), _b(ns),
                                  _b(key), _b(value_json), _b(emb_lit))
        if rc != 0:
            _raise_last("memory_put failed")

    def memory_get(self, store: str, ns: str, key: str,
                    buf_size: int = 32768) -> str:
        out = C.create_string_buffer(buf_size)
        rc = _lib.evo_memory_get(self._h(), _b(store), _b(ns), _b(key),
                                  out, buf_size)
        if rc == -7:    # EVO_ERR_NOT_FOUND
            raise EvoNotFound(
                f"no memory row in {store} for ns={ns!r} key={key!r}")
        if rc != 0:
            _raise_last("memory_get failed")
        return out.value.decode("utf-8")

    def memory_delete(self, store: str, ns: str, key: str) -> None:
        rc = _lib.evo_memory_delete(self._h(), _b(store), _b(ns), _b(key))
        if rc != 0:
            _raise_last("memory_delete failed")

    # Checkpoint store --------------------------------------------------
    def checkpoint_put(self, store: str, thread_id: str,
                        ns: str, checkpoint_id: str,
                        values_json: str,
                        metadata_json: str = "{}") -> None:
        rc = _lib.evo_checkpoint_put(self._h(), _b(store), _b(thread_id),
                                      _b(ns), _b(checkpoint_id),
                                      _b(values_json), _b(metadata_json))
        if rc != 0:
            _raise_last("checkpoint_put failed")

    def checkpoint_get_latest(self, store: str, thread_id: str,
                                buf_size: int = 65536) -> str:
        out = C.create_string_buffer(buf_size)
        rc = _lib.evo_checkpoint_get_latest(self._h(), _b(store),
                                              _b(thread_id), out, buf_size)
        if rc == -7:
            raise EvoNotFound(
                f"no checkpoint in {store} for thread={thread_id!r}")
        if rc != 0:
            _raise_last("checkpoint_get_latest failed")
        return out.value.decode("utf-8")


def connect(host: str, port: int, user: str, password: str) -> Connection:
    """Convenience factory mirroring sqlite3.connect / psycopg2.connect."""
    return Connection(host, port, user, password)


# --------------------------------------------------------------------
# Vector helper
# --------------------------------------------------------------------
def format_vector(vec: Iterable[float]) -> str:
    arr = list(vec)
    Float = C.c_float * len(arr)
    cvec = Float(*arr)
    out = C.create_string_buffer(len(arr) * 16 + 32)
    n = _lib.evo_vector_format(cvec, len(arr), out, C.sizeof(out))
    if n < 0:
        # Fall back to pure-Python formatter if the C side rejects
        # (only happens on tiny-buffer overflow which we already
        # over-sized for).
        return "[" + ",".join(f"{v:.6f}" for v in arr) + "]"
    return out.value.decode("ascii")


# --------------------------------------------------------------------
# Subscription
# --------------------------------------------------------------------
PyEventCallback = Callable[[str, str, int], None]


class Subscription:
    """Background subscription. The C SDK owns the worker thread; we
    bridge the C callback back into Python under a private lock that
    keeps the trampoline closure alive while the C side is running."""

    def __init__(self, host: str, port: int, user: str, password: str,
                  channel: str, callback: PyEventCallback):
        self._lock = threading.Lock()
        self._callback = callback

        # The trampoline must outlive the subscription; storing it on
        # self keeps the ctypes object reachable.
        @_EVO_CALLBACK
        def _trampoline(ch, payload, lsn, _ctx):
            try:
                cb = self._callback
                if cb is None:
                    return
                cb(ch.decode("utf-8") if ch else "",
                   payload.decode("utf-8", errors="replace") if payload else "",
                   int(lsn))
            except Exception:
                # Don't propagate — we're in a C-owned thread.
                pass

        self._trampoline = _trampoline

        handle = _lib.evo_subscribe(_b(host), port, _b(user), _b(password),
                                     _b(channel), _trampoline, None)
        if not handle:
            _raise_last("evo_subscribe failed")
        self._handle: Optional[int] = handle

    def ack(self, lsn: int) -> None:
        if self._handle:
            _lib.evo_ack_up_to(self._handle, lsn)

    def close(self) -> None:
        with self._lock:
            if self._handle:
                _lib.evo_unsubscribe(self._handle)
                self._handle = None
                self._callback = None  # type: ignore[assignment]

    def __enter__(self) -> "Subscription":
        return self

    def __exit__(self, *exc) -> None:
        self.close()

    def __del__(self) -> None:
        try:
            self.close()
        except Exception:
            pass


def cdc_subscribe(host: str, port: int,
                   callback: PyEventCallback,
                   from_lsn: int = 0) -> Subscription:
    """CDC stream subscriber — same Subscription wrapper, different
    server-side endpoint."""
    sub = Subscription.__new__(Subscription)
    sub._lock = threading.Lock()
    sub._callback = callback

    @_EVO_CALLBACK
    def _trampoline(ch, payload, lsn, _ctx):
        try:
            cb = sub._callback
            if cb is None:
                return
            cb(ch.decode("utf-8") if ch else "",
               payload.decode("utf-8", errors="replace") if payload else "",
               int(lsn))
        except Exception:
            pass

    sub._trampoline = _trampoline
    handle = _lib.evo_cdc_subscribe(_b(host), port, _trampoline,
                                      None, from_lsn)
    if not handle:
        _raise_last("evo_cdc_subscribe failed")
    sub._handle = handle
    return sub
