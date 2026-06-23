"""
test_encryption.py — Transparent Data Encryption (TDE) tests for EvoSQL

Tests that data is encrypted at rest (on disk) while remaining accessible
through normal SQL operations. Requires a server built with TLS=1 and
started with EVOSQL_ENCRYPTION_KEY set.

Usage:
    # Start server with encryption:
    EVOSQL_ENCRYPTION_KEY=testkey docker compose up -d

    # Run tests:
    python tests/test_encryption.py
"""

import os
import sys
import socket
import struct
import time
import subprocess

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0


def ok(msg):
    global PASS
    PASS += 1
    print(f"  PASS: {msg}")


def fail(msg, detail=""):
    global FAIL
    FAIL += 1
    print(f"  FAIL: {msg}")
    if detail:
        print(f"        {detail}")


def section(title):
    print(f"\n{'='*60}")
    print(f"  {title}")
    print(f"{'='*60}")


def restart_server():
    """Restart the server to flush buffer pool to disk."""
    subprocess.run(["docker", "compose", "restart", "evosql"],
                   capture_output=True, timeout=30)
    # Wait for server to be ready
    for _ in range(20):
        time.sleep(0.5)
        try:
            s = conn()
            s.close()
            return True
        except Exception:
            pass
    return False


def read_db_file():
    """Read the raw evosql.db file from the container."""
    result = subprocess.run(
        ["docker", "compose", "exec", "-T", "evosql",
         "cat", "/data/root/evosql.db"],
        capture_output=True, timeout=10
    )
    return result.stdout


# ================================================================
#  Test: Basic SQL operations work with encryption enabled
# ================================================================
def test_basic_operations():
    section("Basic SQL with Encryption")
    s = conn()

    # Create table
    cols, rows, err, tag = simple_query(s, "DROP TABLE IF EXISTS enc_test")
    cols, rows, err, tag = simple_query(
        s,
        "CREATE TABLE enc_test (id INT PRIMARY KEY, name VARCHAR(100), secret VARCHAR(200))"
    )
    if err:
        fail("CREATE TABLE enc_test", err)
        s.close()
        return
    ok("CREATE TABLE enc_test")

    # Insert data with recognizable plaintext
    test_data = [
        (1, "Alice", "SuperSecretPassword123"),
        (2, "Bob", "AnotherSecret456"),
        (3, "Charlie", "TopSecretData789"),
        (4, "Diana", "ConfidentialInfo000"),
        (5, "Eve", "SensitivePayload!!!"),
    ]
    for id_, name, secret in test_data:
        cols, rows, err, tag = simple_query(
            s, f"INSERT INTO enc_test VALUES ({id_}, '{name}', '{secret}')"
        )
        if err:
            fail(f"INSERT id={id_}", err)
            s.close()
            return
    ok(f"INSERT {len(test_data)} rows")

    # SELECT back
    cols, rows, err, tag = simple_query(
        s, "SELECT id, name, secret FROM enc_test ORDER BY id"
    )
    if err:
        fail("SELECT", err)
    elif len(rows) != len(test_data):
        fail("SELECT", f"expected {len(test_data)} rows, got {len(rows)}")
    else:
        all_match = True
        for i, (id_, name, secret) in enumerate(test_data):
            if rows[i] != [str(id_), name, secret]:
                all_match = False
                fail(f"Row {i} mismatch", f"expected {[str(id_), name, secret]}, got {rows[i]}")
        if all_match:
            ok("SELECT returns correct data")

    # Update
    cols, rows, err, tag = simple_query(
        s, "UPDATE enc_test SET secret = 'UpdatedSecret999' WHERE id = 1"
    )
    if err:
        fail("UPDATE", err)
    else:
        cols, rows, err, tag = simple_query(
            s, "SELECT secret FROM enc_test WHERE id = 1"
        )
        if rows and rows[0][0] == "UpdatedSecret999":
            ok("UPDATE + SELECT verify")
        else:
            fail("UPDATE verify", f"got {rows}")

    # Delete
    cols, rows, err, tag = simple_query(
        s, "DELETE FROM enc_test WHERE id = 5"
    )
    if err:
        fail("DELETE", err)
    else:
        cols, rows, err, tag = simple_query(
            s, "SELECT COUNT(*) FROM enc_test"
        )
        if rows and rows[0][0] == "4":
            ok("DELETE + COUNT verify")
        else:
            fail("DELETE verify", f"got {rows}")

    s.close()


# ================================================================
#  Test: Disk file does NOT contain plaintext data
# ================================================================
def test_no_plaintext_on_disk():
    section("No Plaintext Leakage on Disk")

    # Restart server to flush buffer pool to disk
    if not restart_server():
        fail("Could not restart server for disk inspection")
        return
    ok("Server restarted (buffer pool flushed to disk)")

    db_bytes = read_db_file()
    if len(db_bytes) == 0:
        fail("evosql.db is empty or not accessible")
        return

    ok(f"Read evosql.db ({len(db_bytes)} bytes)")

    # Search for plaintext strings that we inserted
    search_strings = [
        b"SuperSecretPassword123",
        b"AnotherSecret456",
        b"TopSecretData789",
        b"ConfidentialInfo000",
        b"UpdatedSecret999",
        b"Alice",
        b"Charlie",
    ]

    found_plaintext = []
    for s in search_strings:
        if s in db_bytes:
            found_plaintext.append(s.decode())

    if found_plaintext:
        fail(f"Plaintext found on disk: {found_plaintext}")
    else:
        ok("No plaintext data found in evosql.db")

    # Also check that the file header magic is still readable (page 0 is plaintext)
    if len(db_bytes) >= 4:
        magic = struct.unpack("<I", db_bytes[:4])[0]
        if magic == 0x45564F44:  # "EVOD"
            ok("FileHeader magic (EVOD) readable — page 0 is plaintext")
        else:
            fail(f"FileHeader magic mismatch: 0x{magic:08X}")


# ================================================================
#  Test: Multiple tables and indexes work with encryption
# ================================================================
def test_multiple_tables():
    section("Multiple Tables with Encryption")
    s = conn()

    # Create multiple tables
    simple_query(s, "DROP TABLE IF EXISTS enc_orders")
    simple_query(s, "DROP TABLE IF EXISTS enc_products")

    cols, rows, err, tag = simple_query(
        s,
        "CREATE TABLE enc_products (id INT PRIMARY KEY, name VARCHAR(100), price INT)"
    )
    if err:
        fail("CREATE TABLE enc_products", err)
        s.close()
        return
    ok("CREATE TABLE enc_products")

    cols, rows, err, tag = simple_query(
        s,
        "CREATE TABLE enc_orders (id INT PRIMARY KEY, product_id INT, qty INT)"
    )
    if err:
        fail("CREATE TABLE enc_orders", err)
        s.close()
        return
    ok("CREATE TABLE enc_orders")

    # Insert data
    for i in range(1, 21):
        simple_query(s, f"INSERT INTO enc_products VALUES ({i}, 'Product_{i}', {i * 100})")
    ok("INSERT 20 products")

    for i in range(1, 11):
        simple_query(s, f"INSERT INTO enc_orders VALUES ({i}, {i}, {i * 5})")
    ok("INSERT 10 orders")

    # Create index
    cols, rows, err, tag = simple_query(
        s, "CREATE INDEX idx_product_name ON enc_products (name)"
    )
    if err:
        fail("CREATE INDEX", err)
    else:
        ok("CREATE INDEX on enc_products")

    # Query with index
    cols, rows, err, tag = simple_query(
        s, "SELECT name, price FROM enc_products WHERE name = 'Product_15'"
    )
    if err:
        fail("SELECT with index", err)
    elif rows and rows[0][0] == "Product_15" and rows[0][1] == "1500":
        ok("SELECT with index returns correct data")
    else:
        fail("SELECT with index", f"got {rows}")

    s.close()


# ================================================================
#  Test: Transactions work with encryption
# ================================================================
def test_transactions():
    section("Transactions with Encryption")
    s = conn()

    simple_query(s, "DROP TABLE IF EXISTS enc_tx")
    simple_query(s, "CREATE TABLE enc_tx (id INT PRIMARY KEY, val VARCHAR(50))")

    # Committed transaction
    simple_query(s, "BEGIN")
    simple_query(s, "INSERT INTO enc_tx VALUES (1, 'committed_data')")
    simple_query(s, "COMMIT")

    cols, rows, err, tag = simple_query(s, "SELECT val FROM enc_tx WHERE id = 1")
    if rows and rows[0][0] == "committed_data":
        ok("COMMIT preserves data")
    else:
        fail("COMMIT data", f"got {rows}")

    # Rolled back transaction
    simple_query(s, "BEGIN")
    simple_query(s, "INSERT INTO enc_tx VALUES (2, 'rolled_back_data')")
    simple_query(s, "ROLLBACK")

    cols, rows, err, tag = simple_query(s, "SELECT COUNT(*) FROM enc_tx")
    if rows and rows[0][0] == "1":
        ok("ROLLBACK removes uncommitted data")
    else:
        fail("ROLLBACK", f"got {rows}")

    s.close()


# ================================================================
#  Test: Large data volume works with encryption
# ================================================================
def test_bulk_data():
    section("Bulk Data with Encryption")
    s = conn()

    simple_query(s, "DROP TABLE IF EXISTS enc_bulk")
    simple_query(
        s,
        "CREATE TABLE enc_bulk (id INT PRIMARY KEY, data VARCHAR(200))"
    )

    # Insert 200 rows to exercise multiple pages
    t0 = time.time()
    for i in range(1, 201):
        data = f"EncryptedRow_{i:04d}_{'X' * 100}"
        cols, rows, err, tag = simple_query(
            s, f"INSERT INTO enc_bulk VALUES ({i}, '{data}')"
        )
        if err:
            fail(f"Bulk INSERT row {i}", err)
            s.close()
            return
    elapsed = time.time() - t0
    ok(f"INSERT 200 rows in {elapsed:.2f}s")

    # Verify count
    cols, rows, err, tag = simple_query(s, "SELECT COUNT(*) FROM enc_bulk")
    if rows and rows[0][0] == "200":
        ok("COUNT(*) = 200")
    else:
        fail("COUNT verify", f"got {rows}")

    # Read back some rows
    cols, rows, err, tag = simple_query(
        s, "SELECT data FROM enc_bulk WHERE id = 100"
    )
    expected = f"EncryptedRow_0100_{'X' * 100}"
    if rows and rows[0][0] == expected:
        ok("SELECT specific row returns correct data")
    else:
        fail("SELECT row 100", f"got {rows}")

    s.close()


# ================================================================
#  Test: Encryption metadata in FileHeader
# ================================================================
def test_fileheader_metadata():
    section("FileHeader Encryption Metadata")

    db_bytes = read_db_file()
    if len(db_bytes) < 165:
        fail("evosql.db too small for FileHeader")
        return

    # Parse FileHeader fields
    magic = struct.unpack("<I", db_bytes[0:4])[0]
    version = struct.unpack("<H", db_bytes[4:6])[0]
    page_size = struct.unpack("<H", db_bytes[6:8])[0]

    if magic != 0x45564F44:
        fail(f"Magic mismatch: 0x{magic:08X}")
        return
    ok(f"Magic: EVOD (0x{magic:08X})")

    # FileHeader layout (page_mgr.h):
    #   magic(4) + version(2) + page_size(2) + total_pages(4) + free_list_head(4) = 16
    #   catalog_roots[19] = 76   (Task 93 added CAT_SYS_POLICIES)     -> 92
    #   next_table_id(4) + next_schema_id(4) + next_db_id(4) = 12     -> 104
    #   next_xid(4) + next_csn(4) = 8                                 -> 112
    #   encryption_enabled(1) @ 112, encryption_salt[16] @ 113,
    #   wrapped_dek[48] @ 129, page_iv_prefix[8] @ 177
    ENC_OFFSET = 112

    enc_enabled = db_bytes[ENC_OFFSET]
    if enc_enabled == 1:
        ok("encryption_enabled = 1")
    else:
        fail(f"encryption_enabled = {enc_enabled} (expected 1)")

    enc_salt = db_bytes[ENC_OFFSET + 1:ENC_OFFSET + 17]
    if enc_salt != b'\x00' * 16:
        ok(f"encryption_salt is non-zero ({enc_salt[:4].hex()}...)")
    else:
        fail("encryption_salt is all zeros")

    wrapped_dek = db_bytes[ENC_OFFSET + 17:ENC_OFFSET + 65]
    if wrapped_dek != b'\x00' * 48:
        ok(f"wrapped_dek is non-zero ({wrapped_dek[:4].hex()}...)")
    else:
        fail("wrapped_dek is all zeros")

    iv_prefix = db_bytes[ENC_OFFSET + 65:ENC_OFFSET + 73]
    if iv_prefix != b'\x00' * 8:
        ok(f"page_iv_prefix is non-zero ({iv_prefix.hex()})")
    else:
        fail("page_iv_prefix is all zeros")


# ================================================================
#  Test: Data survives server restart (encrypt→disk→decrypt cycle)
# ================================================================
def test_data_survives_restart():
    section("Data Survives Restart")

    # Server was already restarted by test_no_plaintext_on_disk
    # Verify previously inserted data is still readable
    s = conn()

    cols, rows, err, tag = simple_query(
        s, "SELECT secret FROM enc_test WHERE id = 2"
    )
    if rows and rows[0][0] == "AnotherSecret456":
        ok("enc_test data survived restart")
    else:
        fail("enc_test data after restart", f"got {rows}, err={err}")

    cols, rows, err, tag = simple_query(
        s, "SELECT COUNT(*) FROM enc_bulk"
    )
    if rows and rows[0][0] == "200":
        ok("enc_bulk 200 rows survived restart")
    else:
        fail("enc_bulk count after restart", f"got {rows}, err={err}")

    cols, rows, err, tag = simple_query(
        s, "SELECT name FROM enc_products WHERE id = 15"
    )
    if rows and rows[0][0] == "Product_15":
        ok("enc_products data survived restart")
    else:
        fail("enc_products data after restart", f"got {rows}, err={err}")

    s.close()


# ================================================================
#  Main
# ================================================================
if __name__ == "__main__":
    print("EvoSQL Transparent Data Encryption (TDE) Tests")
    print("=" * 60)

    test_basic_operations()
    test_multiple_tables()
    test_transactions()
    test_bulk_data()
    test_no_plaintext_on_disk()      # restarts server to flush
    test_data_survives_restart()     # verifies data readable after restart
    test_fileheader_metadata()

    print(f"\n{'='*60}")
    print(f"  Results: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    print(f"{'='*60}")

    sys.exit(0 if FAIL == 0 else 1)
