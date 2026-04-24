#!/bin/sh
# Task 97 Commit 8 — replication end-to-end test driver.
# Brings up the 3-node docker-compose, runs tests/test_replication.py, tears down.
#
# Usage:
#   scripts/replication_e2e.sh

set -e
cd "$(dirname "$0")/.."

echo "==> Stopping any existing compose stack..."
docker compose down -v > /dev/null 2>&1 || true
docker compose -f docker-compose.replication.yml down -v > /dev/null 2>&1 || true

echo "==> Starting 3-node replication cluster..."
docker compose -f docker-compose.replication.yml up -d --build

echo "==> Waiting for replicas to catch up with primary..."
sleep 10

echo "==> Running test_replication.py..."
python3 tests/test_replication.py
RC=$?

echo "==> Tearing down cluster..."
docker compose -f docker-compose.replication.yml down -v > /dev/null 2>&1

echo "==> Restoring default single-node compose..."
docker compose up -d > /dev/null 2>&1

exit $RC
