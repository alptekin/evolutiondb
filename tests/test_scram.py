"""
test_scram.py -- SCRAM-SHA-256 authentication tests for EVO protocol

Tests the SCRAM-SHA-256 challenge-response handshake and backward-compatible
cleartext fallback on port 9967.

Protocol flow:
  1. Client -> EVO
  2. Server -> HELLO EvoSQL 1.0
  3. Server -> AUTH_SCRAM
  4a. (SCRAM) Client -> SCRAM-CLIENT-FIRST n,,n=<user>,r=<nonce>
  4b. Server -> SCRAM-SERVER-FIRST r=<nonce>,s=<salt>,i=<iter>
  4c. Client -> SCRAM-CLIENT-FINAL c=<cb>,r=<nonce>,p=<proof>
  4d. Server -> SCRAM-SERVER-FINAL v=<signature>
  4e. Server -> AUTH_OK
  OR
  4a. (Legacy) Client -> AUTH <user> <password>
  4b. Server -> AUTH_OK
"""

import socket
import sys
import os
import hashlib
import hmac
import base64
import struct

HOST = "localhost"
PORT = 9967
PASS_COUNT = 0
FAIL_COUNT = 0
ERRORS = []

# -- crypto helpers for client-side SCRAM -----------------------------------

def _pbkdf2(password, salt, iterations, dk_len=32):
    """PBKDF2-SHA-256 key derivation."""
    return hashlib.pbkdf2_hmac("sha256", password, salt, iterations, dklen=dk_len)

def _hmac_sha256(key, msg):
    """HMAC-SHA-256."""
    return hmac.new(key, msg, hashlib.sha256).digest()

def _sha256(data):
    """SHA-256 hash."""
    return hashlib.sha256(data).digest()

def _xor_bytes(a, b):
    """XOR two equal-length byte strings."""
    return bytes(x ^ y for x, y in zip(a, b))


class EvoScramClient:
    """EVO protocol client with SCRAM-SHA-256 support."""

    def __init__(self, host=HOST, port=PORT):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.settimeout(5)
        self.sock.connect((host, port))
        self.buf = b""

    def _recv_line(self):
        while b"\n" not in self.buf:
            chunk = self.sock.recv(4096)
            if not chunk:
                raise ConnectionError("connection closed")
            self.buf += chunk
        idx = self.buf.index(b"\n")
        line = self.buf[:idx].decode("utf-8", errors="replace")
        self.buf = self.buf[idx + 1:]
        return line

    def _send_line(self, line):
        self.sock.sendall((line + "\n").encode("utf-8"))

    def _read_auth_line(self):
        """Read server's auth offer line, transparently declining STARTTLS
        so the caller receives the AUTH_SCRAM / AUTH_REQUIRED line."""
        line = self._recv_line()
        if line == "STARTTLS":
            self._send_line("NOTLS")
            line = self._recv_line()
        return line

    def handshake_scram(self, user="admin", password="admin"):
        """Full SCRAM-SHA-256 handshake. Returns (hello, server_final)."""
        self._send_line("EVO")
        hello = self._recv_line()
        assert hello.startswith("HELLO"), f"Expected HELLO, got: {hello}"

        auth_line = self._recv_line()
        if auth_line == "STARTTLS":
            self._send_line("NOTLS")
            auth_line = self._recv_line()
        assert auth_line == "AUTH_SCRAM", f"Expected AUTH_SCRAM, got: {auth_line}"

        # Generate client nonce (24 random bytes, base64)
        client_nonce = base64.b64encode(os.urandom(24)).decode("ascii")

        # client-first-message
        gs2_header = "n,,"
        client_first_bare = f"n={user},r={client_nonce}"
        client_first = gs2_header + client_first_bare
        self._send_line(f"SCRAM-CLIENT-FIRST {client_first}")

        # Read server-first-message
        server_first_line = self._recv_line()
        assert server_first_line.startswith("SCRAM-SERVER-FIRST "), \
            f"Expected SCRAM-SERVER-FIRST, got: {server_first_line}"
        server_first = server_first_line[len("SCRAM-SERVER-FIRST "):]

        # Parse server-first: r=<nonce>,s=<salt_b64>,i=<iterations>
        sf_parts = {}
        for part in server_first.split(","):
            if "=" in part:
                k, v = part.split("=", 1)
                sf_parts[k] = v

        combined_nonce = sf_parts["r"]
        salt_b64 = sf_parts["s"]
        iterations = int(sf_parts["i"])

        # Verify nonce starts with our client nonce
        assert combined_nonce.startswith(client_nonce), \
            "Server nonce must start with client nonce"

        salt = base64.b64decode(salt_b64)

        # SCRAM key derivation
        salted_password = _pbkdf2(password.encode("utf-8"), salt, iterations)
        client_key = _hmac_sha256(salted_password, b"Client Key")
        stored_key = _sha256(client_key)
        server_key = _hmac_sha256(salted_password, b"Server Key")

        # channel binding
        channel_binding = base64.b64encode(b"n,,").decode("ascii")

        # client-final-without-proof
        client_final_without_proof = f"c={channel_binding},r={combined_nonce}"

        # AuthMessage
        auth_message = f"{client_first_bare},{server_first},{client_final_without_proof}"

        # ClientSignature and ClientProof
        client_signature = _hmac_sha256(stored_key, auth_message.encode("utf-8"))
        client_proof = _xor_bytes(client_key, client_signature)
        proof_b64 = base64.b64encode(client_proof).decode("ascii")

        # ServerSignature (for mutual auth verification)
        server_signature = _hmac_sha256(server_key, auth_message.encode("utf-8"))
        expected_sig_b64 = base64.b64encode(server_signature).decode("ascii")

        # Send client-final
        client_final = f"{client_final_without_proof},p={proof_b64}"
        self._send_line(f"SCRAM-CLIENT-FINAL {client_final}")

        # Read server-final
        server_final_line = self._recv_line()
        assert server_final_line.startswith("SCRAM-SERVER-FINAL "), \
            f"Expected SCRAM-SERVER-FINAL, got: {server_final_line}"
        server_final = server_final_line[len("SCRAM-SERVER-FINAL "):]

        # Verify server signature (mutual authentication)
        sv_parts = {}
        for part in server_final.split(","):
            if "=" in part:
                k, v = part.split("=", 1)
                sv_parts[k] = v
        actual_sig_b64 = sv_parts.get("v", "")
        assert actual_sig_b64 == expected_sig_b64, \
            f"Server signature mismatch: {actual_sig_b64} != {expected_sig_b64}"

        # AUTH_OK
        auth_ok = self._recv_line()
        assert auth_ok == "AUTH_OK", f"Expected AUTH_OK, got: {auth_ok}"

        return hello, server_final

    def handshake_cleartext(self, user="admin", password="admin"):
        """Legacy cleartext handshake for backward compatibility."""
        self._send_line("EVO")
        hello = self._recv_line()
        assert hello.startswith("HELLO"), f"Expected HELLO, got: {hello}"

        auth_line = self._recv_line()
        if auth_line == "STARTTLS":
            self._send_line("NOTLS")
            auth_line = self._recv_line()
        assert auth_line == "AUTH_SCRAM", f"Expected AUTH_SCRAM, got: {auth_line}"

        # Send legacy AUTH instead of SCRAM
        self._send_line(f"AUTH {user} {password}")
        auth_ok = self._recv_line()
        assert auth_ok == "AUTH_OK", f"Expected AUTH_OK, got: {auth_ok}"
        return hello

    def execute(self, sql):
        """Send SQL, return (kind, payload)."""
        encoded = sql.encode("utf-8")
        header = f"SQL {len(encoded)}\n".encode("utf-8")
        self.sock.sendall(header + encoded + b"\n")

        first = self._recv_line()

        if first.startswith("ERR"):
            parts = first.split(" ", 2)
            sqlstate = parts[1] if len(parts) > 1 else "?????"
            message = parts[2] if len(parts) > 2 else ""
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "ERR", {"sqlstate": sqlstate, "message": message}

        if first == "OK":
            tag_line = self._recv_line()
            tag = tag_line[4:] if tag_line.startswith("TAG ") else tag_line
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "OK", {"tag": tag}

        if first == "RESULT":
            cols_line = self._recv_line()
            num_cols = int(cols_line.split()[1])
            col_names = []
            for _ in range(num_cols):
                col_line = self._recv_line()
                col_names.append(col_line[4:])

            rows = []
            while True:
                line = self._recv_line()
                if line == "END":
                    break
                if line == "ROW":
                    row = []
                    for _ in range(num_cols):
                        field_line = self._recv_line()
                        val = field_line[6:]
                        row.append(None if val == "NULL" else val)
                    rows.append(row)

            tag_line = self._recv_line()
            tag = tag_line[4:] if tag_line.startswith("TAG ") else tag_line
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "RESULT", {"cols": col_names, "rows": rows, "tag": tag}

        raise ValueError(f"Unexpected response: {first}")

    def quit(self):
        self._send_line("QUIT")
        try:
            bye = self._recv_line()
        except Exception:
            bye = ""
        self.sock.close()
        return bye

    def close(self):
        try:
            self.sock.close()
        except Exception:
            pass


def run_test(name, fn):
    global PASS_COUNT, FAIL_COUNT
    try:
        fn()
        PASS_COUNT += 1
        print(f"  PASS {name}")
    except Exception as e:
        FAIL_COUNT += 1
        ERRORS.append((name, str(e)))
        print(f"  FAIL {name}: {e}")


# -- Test cases -------------------------------------------------------------

def test_scram_handshake():
    """SCRAM-SHA-256 full handshake with valid credentials."""
    c = EvoScramClient()
    hello, sf = c.handshake_scram("admin", "admin")
    assert "EvoSQL" in hello
    c.quit()

def test_scram_query_after_auth():
    """Execute a query after SCRAM authentication."""
    c = EvoScramClient()
    c.handshake_scram("admin", "admin")
    kind, payload = c.execute("SELECT 1 AS val")
    assert kind == "RESULT", f"Expected RESULT, got {kind}: {payload}"
    assert len(payload["rows"]) == 1
    assert payload["rows"][0][0] == "1"
    c.quit()

def test_scram_wrong_password():
    """SCRAM with wrong password must fail at client-final verification."""
    c = EvoScramClient()
    raised = False
    try:
        c.handshake_scram("admin", "wrong_password")
    except Exception:
        # Either handshake's own AssertionError on SCRAM-SERVER-FINAL
        # (because server replied ERR) or a protocol-level exception —
        # both are acceptable proof that authentication was rejected.
        raised = True
    finally:
        c.close()
    assert raised, "Wrong password should have triggered authentication failure"

def test_scram_wrong_username():
    """SCRAM with nonexistent user must fail at server-first."""
    c = EvoScramClient()
    c._send_line("EVO")
    hello = c._recv_line()
    auth_line = c._recv_line()
    if auth_line == "STARTTLS":
        c._send_line("NOTLS")
        auth_line = c._recv_line()
    assert auth_line == "AUTH_SCRAM"

    client_nonce = base64.b64encode(os.urandom(24)).decode("ascii")
    client_first = f"n,,n=nonexistent_user_xyz,r={client_nonce}"
    c._send_line(f"SCRAM-CLIENT-FIRST {client_first}")

    # Server should respond with ERR (user not found)
    resp = c._recv_line()
    assert resp.startswith("ERR"), f"Expected ERR for bad user, got: {resp}"
    c.close()

def test_cleartext_fallback():
    """Legacy cleartext AUTH must still work when server sends AUTH_SCRAM."""
    c = EvoScramClient()
    hello = c.handshake_cleartext("admin", "admin")
    assert "EvoSQL" in hello
    c.quit()

def test_cleartext_wrong_password():
    """Legacy cleartext with wrong password must fail."""
    c = EvoScramClient()
    c._send_line("EVO")
    hello = c._recv_line()
    auth_line = c._recv_line()
    if auth_line == "STARTTLS":
        c._send_line("NOTLS")
        auth_line = c._recv_line()
    assert auth_line == "AUTH_SCRAM"

    c._send_line("AUTH admin wrong_password")
    resp = c._recv_line()
    assert resp.startswith("ERR"), f"Expected ERR, got: {resp}"
    c.close()

def test_cleartext_query_after_auth():
    """Execute a query after cleartext fallback authentication."""
    c = EvoScramClient()
    c.handshake_cleartext("admin", "admin")
    kind, payload = c.execute("SELECT 42 AS answer")
    assert kind == "RESULT", f"Expected RESULT, got {kind}: {payload}"
    assert payload["rows"][0][0] == "42"
    c.quit()

def test_scram_server_sends_auth_scram():
    """Verify server sends AUTH_SCRAM (not AUTH_REQUIRED)."""
    c = EvoScramClient()
    c._send_line("EVO")
    hello = c._recv_line()
    auth_line = c._recv_line()
    if auth_line == "STARTTLS":
        c._send_line("NOTLS")
        auth_line = c._recv_line()
    assert auth_line == "AUTH_SCRAM", \
        f"Expected AUTH_SCRAM, got: {auth_line}"
    c.close()

def test_scram_nonce_uniqueness():
    """Each SCRAM handshake must have a unique server nonce."""
    nonces = set()
    for _ in range(3):
        c = EvoScramClient()
        c._send_line("EVO")
        c._recv_line()  # HELLO
        c._read_auth_line()  # AUTH_SCRAM (skipping STARTTLS if present)

        client_nonce = base64.b64encode(os.urandom(24)).decode("ascii")
        client_first = f"n,,n=admin,r={client_nonce}"
        c._send_line(f"SCRAM-CLIENT-FIRST {client_first}")

        sf_line = c._recv_line()
        if sf_line.startswith("SCRAM-SERVER-FIRST "):
            sf = sf_line[len("SCRAM-SERVER-FIRST "):]
            for part in sf.split(","):
                if part.startswith("r="):
                    combined = part[2:]
                    # Server nonce = combined minus client nonce
                    server_nonce = combined[len(client_nonce):]
                    nonces.add(server_nonce)
        c.close()

    assert len(nonces) == 3, \
        f"Expected 3 unique server nonces, got {len(nonces)}"

def test_scram_bad_client_first():
    """Malformed SCRAM-CLIENT-FIRST must fail gracefully."""
    c = EvoScramClient()
    c._send_line("EVO")
    c._recv_line()  # HELLO
    c._read_auth_line()  # AUTH_SCRAM (skipping STARTTLS if present)

    # Send garbage as client-first
    c._send_line("SCRAM-CLIENT-FIRST garbage_not_valid")
    resp = c._recv_line()
    assert resp.startswith("ERR"), f"Expected ERR for bad client-first, got: {resp}"
    c.close()

def test_scram_bad_client_final():
    """Malformed SCRAM-CLIENT-FINAL must fail gracefully."""
    c = EvoScramClient()
    c._send_line("EVO")
    c._recv_line()  # HELLO
    c._read_auth_line()  # AUTH_SCRAM (skipping STARTTLS if present)

    client_nonce = base64.b64encode(os.urandom(24)).decode("ascii")
    client_first = f"n,,n=admin,r={client_nonce}"
    c._send_line(f"SCRAM-CLIENT-FIRST {client_first}")

    sf_line = c._recv_line()
    assert sf_line.startswith("SCRAM-SERVER-FIRST ")

    # Send garbage as client-final
    c._send_line("SCRAM-CLIENT-FINAL garbage_not_valid")
    resp = c._recv_line()
    assert resp.startswith("ERR"), f"Expected ERR for bad client-final, got: {resp}"
    c.close()

def test_scram_invalid_proof():
    """SCRAM with tampered client proof must be rejected."""
    c = EvoScramClient()
    c._send_line("EVO")
    c._recv_line()  # HELLO
    c._read_auth_line()  # AUTH_SCRAM (skipping STARTTLS if present)

    client_nonce = base64.b64encode(os.urandom(24)).decode("ascii")
    client_first_bare = f"n=admin,r={client_nonce}"
    client_first = f"n,,{client_first_bare}"
    c._send_line(f"SCRAM-CLIENT-FIRST {client_first}")

    sf_line = c._recv_line()
    assert sf_line.startswith("SCRAM-SERVER-FIRST ")
    server_first = sf_line[len("SCRAM-SERVER-FIRST "):]

    sf_parts = {}
    for part in server_first.split(","):
        if "=" in part:
            k, v = part.split("=", 1)
            sf_parts[k] = v

    combined_nonce = sf_parts["r"]
    channel_binding = base64.b64encode(b"n,,").decode("ascii")
    client_final_without_proof = f"c={channel_binding},r={combined_nonce}"

    # Send a fabricated (wrong) proof
    fake_proof = base64.b64encode(os.urandom(32)).decode("ascii")
    client_final = f"{client_final_without_proof},p={fake_proof}"
    c._send_line(f"SCRAM-CLIENT-FINAL {client_final}")

    resp = c._recv_line()
    assert resp.startswith("ERR"), f"Expected ERR for bad proof, got: {resp}"
    c.close()

def test_unexpected_message():
    """Sending neither AUTH nor SCRAM-CLIENT-FIRST must fail."""
    c = EvoScramClient()
    c._send_line("EVO")
    c._recv_line()  # HELLO
    c._read_auth_line()  # AUTH_SCRAM (skipping STARTTLS if present)

    c._send_line("SOMETHING_UNEXPECTED")
    resp = c._recv_line()
    assert resp.startswith("ERR"), f"Expected ERR, got: {resp}"
    c.close()

def test_scram_iterations_match_stored():
    """Server-first iterations must match the stored PBKDF2 iteration count."""
    c = EvoScramClient()
    c._send_line("EVO")
    c._recv_line()  # HELLO
    c._read_auth_line()  # AUTH_SCRAM (skipping STARTTLS if present)

    client_nonce = base64.b64encode(os.urandom(24)).decode("ascii")
    client_first = f"n,,n=admin,r={client_nonce}"
    c._send_line(f"SCRAM-CLIENT-FIRST {client_first}")

    sf_line = c._recv_line()
    assert sf_line.startswith("SCRAM-SERVER-FIRST ")
    server_first = sf_line[len("SCRAM-SERVER-FIRST "):]

    for part in server_first.split(","):
        if part.startswith("i="):
            iterations = int(part[2:])
            # Must be at least 100000 (PBKDF2_ITERATIONS in crypto.h)
            assert iterations >= 100000, \
                f"Iterations too low: {iterations}"
    c.close()


# -- main -------------------------------------------------------------------

if __name__ == "__main__":
    print("=== test_scram.py ===")

    tests = [
        ("SCRAM-SHA-256 handshake", test_scram_handshake),
        ("SCRAM query after auth", test_scram_query_after_auth),
        ("SCRAM wrong password", test_scram_wrong_password),
        ("SCRAM wrong username", test_scram_wrong_username),
        ("Cleartext fallback", test_cleartext_fallback),
        ("Cleartext wrong password", test_cleartext_wrong_password),
        ("Cleartext query after auth", test_cleartext_query_after_auth),
        ("Server sends AUTH_SCRAM", test_scram_server_sends_auth_scram),
        ("Nonce uniqueness", test_scram_nonce_uniqueness),
        ("Bad client-first", test_scram_bad_client_first),
        ("Bad client-final", test_scram_bad_client_final),
        ("Invalid proof", test_scram_invalid_proof),
        ("Unexpected message", test_unexpected_message),
        ("Iterations match stored", test_scram_iterations_match_stored),
    ]

    for name, fn in tests:
        run_test(name, fn)

    print(f"\n{PASS_COUNT} passed, {FAIL_COUNT} failed out of {PASS_COUNT + FAIL_COUNT}")
    if ERRORS:
        print("\nFailures:")
        for name, msg in ERRORS:
            print(f"  - {name}: {msg}")
    sys.exit(1 if FAIL_COUNT > 0 else 0)
