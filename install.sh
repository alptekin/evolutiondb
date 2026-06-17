#!/bin/sh
# install.sh — one-command EvolutionDB stack bootstrap.
#
# Idempotent: safe to re-run. It never overwrites an existing .env and
# only fills in secrets that are still blank or the well-known default.
#
#   ./install.sh
#
# Brings up the engine + agent web UI with secure-by-default settings
# (loopback host ports, random generated secrets).
set -eu

# Run from the repo root regardless of where the script is invoked from.
SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
cd "$SCRIPT_DIR"

# ---- Prerequisite checks -------------------------------------------
if ! command -v docker >/dev/null 2>&1; then
    echo "error: docker is not installed or not on PATH." >&2
    echo "       install Docker Desktop / Docker Engine first." >&2
    exit 1
fi

if ! docker compose version >/dev/null 2>&1; then
    echo "error: the 'docker compose' plugin is not available." >&2
    echo "       install Docker Compose v2 (the 'docker compose' subcommand)." >&2
    exit 1
fi

# ---- .env bootstrap (never clobber an existing one) ----------------
# cp -n leaves an existing .env untouched.
cp -n .env.example .env
echo "==> .env ready (existing file left untouched if present)."

# ---- Generate secrets if still blank or default -------------------
# read_env KEY -> prints the current value of KEY in .env (empty if unset).
read_env() {
    sed -n "s/^$1=//p" .env | head -n 1
}

# set_env KEY VALUE -> replace KEY's line in .env, or append if missing.
# Writes to a temp file then moves it into place (atomic, no in-place sed
# portability traps between GNU and BSD).
set_env() {
    key=$1
    val=$2
    tmp=$(mktemp)
    if grep -q "^$key=" .env; then
        # Strip the existing line, then append the new one.
        grep -v "^$key=" .env > "$tmp"
    else
        cp .env "$tmp"
    fi
    printf '%s=%s\n' "$key" "$val" >> "$tmp"
    mv "$tmp" .env
}

gen_secret() {
    if command -v openssl >/dev/null 2>&1; then
        openssl rand -hex 24
    else
        # Fallback when openssl is absent: 48 hex chars from /dev/urandom.
        od -vN 24 -An -tx1 /dev/urandom | tr -d ' \n'
    fi
}

PW=$(read_env EVOSQL_PASSWORD)
if [ -z "$PW" ] || [ "$PW" = "admin" ]; then
    set_env EVOSQL_PASSWORD "$(gen_secret)"
    echo "==> generated a random EVOSQL_PASSWORD in .env"
fi

KEY=$(read_env EVOSQL_ENCRYPTION_KEY)
if [ -z "$KEY" ] || [ "$KEY" = "admin" ]; then
    set_env EVOSQL_ENCRYPTION_KEY "$(gen_secret)"
    echo "==> generated a random EVOSQL_ENCRYPTION_KEY in .env"
fi

# ---- Bring up the stack --------------------------------------------
echo "==> building and starting the stack (engine + agent)..."
docker compose --profile agent up -d --build

# ---- Report --------------------------------------------------------
echo ""
echo "EvolutionDB is up (secure-by-default, loopback-only host ports):"
echo "  PostgreSQL wire : 127.0.0.1:5433"
echo "  EVO protocol    : 127.0.0.1:9967"
echo "  CDC stream      : 127.0.0.1:9970"
echo "  Agent web UI    : http://127.0.0.1:8800"
echo ""
echo "Reminder: set ANTHROPIC_API_KEY in .env to enable the cloud LLM,"
echo "then 'docker compose --profile agent up -d' to pick it up."
