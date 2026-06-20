"""
key_rotation — automated at-rest key rotation, KMS-provider-agnostic.

The engine already ships the offline rotation PRIMITIVES and a KMS HOOK:
  * ``--rekey``       rotates the passphrase/MEK that wraps the data key
                      (header-only re-wrap; data pages untouched). Current key
                      from ``EVOSQL_ENCRYPTION_KEY``, new from
                      ``EVOSQL_ENCRYPTION_KEY_NEW`` (env, never argv).
  * ``--rotate-key``  rotates the data key (DEK) itself and re-encrypts every
                      page; the passphrase is unchanged. Crash-safe: a validated
                      copy is swapped in atomically.
  * ``EVOSQL_ENCRYPTION_KEY_CMD``  a command whose stdout is the passphrase
                      (the Vault / cloud-KMS hook).

What was missing is the ORCHESTRATION that ties them into a one-call, scheduled
rotation: ask the key source for a new key, run the offline rotation against the
data dir, and only then promote the new key as current — without an operator
hand-driving env vars and subprocesses.

A ``KeyProvider`` abstracts WHERE the passphrase comes from and how a new version
is minted/committed, so the same orchestration works for a local key file (dev /
simple self-hosted), a shell command (Vault / AWS / GCP CLI), or anything else.
Rotation is the hard part of a KMS integration; the provider just supplies bytes
and a commit/rollback hook.

Two-phase by design (so a crash mid-rotation never strands the data behind a key
nobody has): ``rotate()`` mints a PENDING new version but leaves ``current()``
unchanged; the orchestrator promotes it with ``commit()`` only AFTER the engine
has successfully re-wrapped the header under the new key, and ``rollback()`` on
failure. The commit happens the instant ``--rekey`` succeeds — at that point the
on-disk header is already under the new passphrase, so that IS the new current.
"""
from __future__ import annotations

import json
import os
import secrets
import subprocess
import tempfile
import threading
from typing import Callable, List, Optional


class KeyProviderError(RuntimeError):
    pass


# In-process serialization of FileKeyProvider read-modify-write per key file.
# key_provider_for() hands out a fresh provider instance per call over the SAME
# file, so without this two operations in one process could clobber each other.
# (Cross-PROCESS sharing of one key file is out of scope — a key file belongs to
# a single supervisor host.)
_FILE_LOCKS: dict = {}
_FILE_LOCKS_GUARD = threading.Lock()


def _file_lock(path: str) -> threading.Lock:
    key = os.path.abspath(path)
    with _FILE_LOCKS_GUARD:
        lk = _FILE_LOCKS.get(key)
        if lk is None:
            lk = _FILE_LOCKS[key] = threading.Lock()
        return lk


class KeyProvider:
    """Interface. ``current()`` -> the active passphrase. ``rotate()`` -> mint a
    PENDING new passphrase (current stays put) and return it. ``commit()`` ->
    promote the pending one to current. ``rollback()`` -> discard the pending
    one. commit/rollback are idempotent no-ops if nothing is pending."""

    def current(self) -> str:
        raise NotImplementedError

    def rotate(self) -> str:
        raise NotImplementedError

    def commit(self) -> None:
        pass

    def rollback(self) -> None:
        pass

    def pending_key(self) -> Optional[str]:
        """A minted-but-not-committed key, if the provider tracks one; else None.
        Lets a supervisor recover from a crash between --rekey and commit."""
        return None


class FileKeyProvider(KeyProvider):
    """Versioned passphrases in a local JSON file: ``{"versions":[...],
    "current": i, "pending": j|null}``. Good for dev and simple self-hosted
    deployments; the file should itself live on an encrypted volume / be 0600.
    A real KMS uses CommandKeyProvider instead — this is the reference impl and
    the test vehicle."""

    def __init__(self, path: str, *, key_bytes: int = 32):
        self.path = path
        self.key_bytes = key_bytes
        self._lock = _file_lock(path)

    def _load(self) -> dict:
        try:
            with open(self.path) as f:
                return json.load(f)
        except FileNotFoundError:
            return {"versions": [], "current": None, "pending": None}

    def _save(self, st: dict) -> None:
        # atomic write (tmp + rename), 0600 — the key material never lands in a
        # world-readable partial file.
        d = os.path.dirname(self.path) or "."
        fd, tmp = tempfile.mkstemp(dir=d, prefix=".keys-")
        try:
            os.fchmod(fd, 0o600)
            with os.fdopen(fd, "w") as f:
                json.dump(st, f)
                f.flush()
                os.fsync(f.fileno())     # durable before the rename
            os.replace(tmp, self.path)
            try:                          # fsync the dir so the rename survives a crash
                dfd = os.open(d, os.O_DIRECTORY)
                try:
                    os.fsync(dfd)
                finally:
                    os.close(dfd)
            except OSError:
                pass
        except Exception:
            try:
                os.unlink(tmp)
            except OSError:
                pass
            raise

    def _ensure_baseline(self, st: dict) -> dict:
        """Mint version 0 if the file is empty (caller holds the lock)."""
        if st.get("current") is None:
            key = secrets.token_urlsafe(self.key_bytes)
            st = {"versions": [key], "current": 0, "pending": None}
            self._save(st)
        return st

    def current(self) -> str:
        with self._lock:
            st = self._ensure_baseline(self._load())
            return st["versions"][st["current"]]

    def pending_key(self) -> Optional[str]:
        """The minted-but-not-committed key, if a rotation is mid-flight — used
        by the supervisor to recover from a crash strictly between a successful
        --rekey and commit() (the on-disk header is then under this key)."""
        with self._lock:
            st = self._load()
            p = st.get("pending")
            return st["versions"][p] if p is not None else None

    def rotate(self) -> str:
        with self._lock:
            st = self._ensure_baseline(self._load())
            if st.get("pending") is not None:
                # never start a second rotation over an uncommitted one — the
                # first pending key would be orphaned (unrecoverable).
                raise KeyProviderError(
                    "a rotation is already pending; commit or rollback first")
            key = secrets.token_urlsafe(self.key_bytes)
            st["versions"].append(key)
            st["pending"] = len(st["versions"]) - 1
            self._save(st)
            return key

    def commit(self) -> None:
        with self._lock:
            st = self._load()
            if st.get("pending") is not None:
                st["current"] = st["pending"]
                st["pending"] = None
                self._save(st)

    def rollback(self) -> None:
        with self._lock:
            st = self._load()
            if st.get("pending") is not None:
                # The pending version is ALWAYS the last appended one (rotate()
                # refuses a second pending), so dropping it is just a pop. Assert
                # the invariant rather than silently skipping, so any future
                # version-scheme change fails loudly instead of leaking key bytes.
                assert st["pending"] == len(st["versions"]) - 1, \
                    "pending key is not the last version — refusing to leak it"
                st["versions"].pop()
                st["pending"] = None
                self._save(st)


class CommandKeyProvider(KeyProvider):
    """Provider-agnostic KMS hook via shell commands (Vault / AWS / GCP CLI).
    ``current_cmd`` stdout is the active passphrase. ``rotate_cmd`` stdout is a
    freshly minted version's passphrase (the KMS generates + stores it).
    Optional ``commit_cmd`` / ``rollback_cmd`` promote / discard it. Each command
    is a list (argv) — no shell, so no injection surface. Whitespace is stripped
    from stdout."""

    def __init__(self, current_cmd: List[str], rotate_cmd: List[str], *,
                 commit_cmd: Optional[List[str]] = None,
                 rollback_cmd: Optional[List[str]] = None,
                 timeout: int = 30,
                 runner: Optional[Callable[[List[str]], str]] = None):
        self.current_cmd = list(current_cmd)
        self.rotate_cmd = list(rotate_cmd)
        self.commit_cmd = list(commit_cmd) if commit_cmd else None
        self.rollback_cmd = list(rollback_cmd) if rollback_cmd else None
        self.timeout = timeout
        self._run = runner or self._default_run

    def _default_run(self, cmd: List[str]) -> str:
        try:
            p = subprocess.run(cmd, capture_output=True, text=True,
                               timeout=self.timeout)
        except (OSError, subprocess.SubprocessError) as e:
            raise KeyProviderError(f"key command {cmd!r} failed: {e}")
        if p.returncode != 0:
            raise KeyProviderError(
                f"key command {cmd!r} exited {p.returncode}: {p.stderr.strip()}")
        return p.stdout.strip()

    def current(self) -> str:
        out = self._run(self.current_cmd)
        if not out:
            raise KeyProviderError("current key command returned empty output")
        return out

    def rotate(self) -> str:
        out = self._run(self.rotate_cmd)
        if not out:
            raise KeyProviderError("rotate key command returned empty output")
        return out

    def commit(self) -> None:
        if self.commit_cmd:
            self._run(self.commit_cmd)

    def rollback(self) -> None:
        if self.rollback_cmd:
            self._run(self.rollback_cmd)


def rotate_engine_key(binary: str, data_dir: str, provider: KeyProvider, *,
                      rotate_dek: bool = True, timeout: int = 180,
                      env: Optional[dict] = None) -> dict:
    """Rotate the at-rest key for an OFFLINE engine data dir (the engine must NOT
    be running — ``--rekey`` / ``--rotate-key`` are run-then-exit modes).

    Sequence (fail-closed; the data is never stranded behind a key nobody has):
      1. ``cur = provider.current()``; ``new = provider.rotate()`` (pending).
      2. ``--rekey``  (KEY=cur, KEY_NEW=new): re-wrap the DEK under ``new``.
         On failure -> ``provider.rollback()``; the data is untouched (still
         ``cur``); return ``{ok: False}``.
      3. ``provider.commit()`` — the on-disk header is now under ``new``, so that
         IS the current key from this instant.
      4. if ``rotate_dek``: ``--rotate-key`` (KEY=new): new DEK + re-encrypt all
         pages. A failure here leaves the data readable under ``new`` (the engine
         keeps the original file intact), so ``current`` stays correctly ``new``;
         it is reported but not rolled back.

    Returns ``{ok, passphrase_rotated, dek_rotated, detail}``."""
    base = dict(env or os.environ)
    base["EVOSQL_DATA_DIR"] = data_dir
    # Never run a background checkpointer during an offline maintenance run.
    base.setdefault("EVOSQL_CHECKPOINT_INTERVAL_SEC", "0")

    cur = provider.current()
    new = provider.rotate()

    def _attempt(args: List[str], extra_env: dict):
        """Run an offline engine mode. Returns (clean_ok, indeterminate, output):
        clean_ok = exited 0; indeterminate = could not be observed to completion
        (timeout/spawn error) so the on-disk state is UNKNOWN. The new/secret
        passphrases go via env, never argv (the process list)."""
        e = dict(base)
        e.update(extra_env)
        try:
            p = subprocess.run([binary, *args], env=e, capture_output=True,
                               text=True, timeout=timeout)
        except (subprocess.SubprocessError, OSError) as ex:
            return (False, True, str(ex)[:400])
        return (p.returncode == 0, False, (p.stderr or p.stdout).strip()[:500])

    # 2. rotate the passphrase (MEK).
    rk_ok, rk_indeterminate, rk_out = _attempt(
        ["--rekey"], {"EVOSQL_ENCRYPTION_KEY": cur,
                      "EVOSQL_ENCRYPTION_KEY_NEW": new})
    if not rk_ok:
        if rk_indeterminate:
            # The engine was killed / could not be observed — the header swap MAY
            # have happened. Rolling back could discard the very key the data now
            # needs, so leave the pending key in place and flag for reconcile.
            return {"ok": False, "passphrase_rotated": False, "dek_rotated": False,
                    "needs_reconcile": True,
                    "detail": "rekey indeterminate (engine not observed to exit); "
                              "pending key retained: " + rk_out}
        # Clean non-zero exit: the engine validated and refused BEFORE swapping
        # anything (e.g. plaintext DB / wrong current key), so the data is intact
        # under `cur`. Safe to discard the pending key.
        provider.rollback()
        return {"ok": False, "passphrase_rotated": False, "dek_rotated": False,
                "needs_reconcile": False, "detail": rk_out}

    # 3. --rekey succeeded: the on-disk header is now under `new`. Promote it and
    # NEVER roll back past this point (that would strand the data). A commit
    # failure is surfaced for manual reconcile, not rolled back — pending_key()
    # still holds `new`.
    committed, commit_detail = True, ""
    try:
        provider.commit()
    except Exception as ex:                       # noqa: BLE001 - must not strand
        committed = False
        commit_detail = ("rekeyed on disk but key-source commit failed — promote "
                         "the pending key manually: " + str(ex)[:300])

    result = {"ok": True, "passphrase_rotated": True, "dek_rotated": False,
              "needs_reconcile": not committed, "detail": commit_detail}

    # 4. optionally rotate the data key too (re-encrypt every page). A failure
    # here leaves the data readable under `new` (the engine keeps the original
    # intact), so it is reported but never rolled back.
    if rotate_dek:
        rd_ok, _ind, rd_out = _attempt(["--rotate-key"],
                                       {"EVOSQL_ENCRYPTION_KEY": new})
        if rd_ok:
            result["dek_rotated"] = True
        else:
            extra = ("data-key rotation failed (data still readable under the "
                     "new passphrase): " + rd_out)
            result["detail"] = (result["detail"] + "; " + extra
                                if result["detail"] else extra)
    return result
