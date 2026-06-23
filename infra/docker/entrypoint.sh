#!/bin/sh
# EvoSQL Docker entrypoint
# Generates a self-signed TLS certificate if none exists, then starts the server.

CERT_DIR="/data/certs"
CERT_FILE="$CERT_DIR/server.crt"
KEY_FILE="$CERT_DIR/server.key"

# Generate self-signed cert if not present
if [ ! -f "$CERT_FILE" ] || [ ! -f "$KEY_FILE" ]; then
    echo "==> Generating self-signed TLS certificate..."
    mkdir -p "$CERT_DIR"
    openssl req -x509 -newkey rsa:2048 -nodes \
        -keyout "$KEY_FILE" \
        -out "$CERT_FILE" \
        -days 3650 \
        -subj "/CN=evosql-server" \
        2>/dev/null
    echo "==> Certificate generated at $CERT_DIR/"
fi

export EVOSQL_TLS_CERT="$CERT_FILE"
export EVOSQL_TLS_KEY="$KEY_FILE"

echo "==> Starting EvoSQL server..."
exec /app/evosql-server "$@"
