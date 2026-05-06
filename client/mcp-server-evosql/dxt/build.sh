#!/usr/bin/env bash
#
# build.sh — assemble the .dxt artifact for Claude Desktop's
#            "Install Extension" flow.
#
# Output: dist/mcp-server-evolutiondb-<version>.dxt
#
# The resulting file is a plain zip with `manifest.json` at the root
# and a vendored Python tree under `server/lib/`. Claude Desktop
# verifies the manifest and runs `python3 server/main.py` on startup.
#
# Requirements: python3 >= 3.9 with `pip` and `zip` on the host.
set -euo pipefail

HERE=$(cd "$(dirname "$0")" && pwd)
ROOT=$(cd "$HERE/.." && pwd)
VERSION=$(python3 -c "import tomllib,sys; print(tomllib.loads(open('$ROOT/pyproject.toml','rb').read().decode())['project']['version'])")
NAME="mcp-server-evolutiondb-${VERSION}"
WORK=$(mktemp -d)
DIST="$ROOT/dist"
mkdir -p "$DIST"

echo "[dxt] staging in $WORK"
cp "$HERE/manifest.json" "$WORK/manifest.json"
mkdir -p "$WORK/server/lib"
cp "$HERE/server/main.py" "$WORK/server/main.py"

echo "[dxt] vendoring package + deps into server/lib"
python3 -m pip install --no-compile --target "$WORK/server/lib" \
    --quiet --upgrade \
    "$ROOT" \
    "psycopg[binary]>=3.1"

# Strip __pycache__ to keep the dxt small.
find "$WORK/server/lib" -type d -name __pycache__ -prune -exec rm -rf {} +
find "$WORK/server/lib" -type d -name "*.dist-info" | head -20

# Optional icon — drop a 256×256 PNG at dxt/icon.png to ship a logo.
if [ -f "$HERE/icon.png" ]; then
    cp "$HERE/icon.png" "$WORK/icon.png"
fi

OUT="$DIST/${NAME}.dxt"
rm -f "$OUT"
( cd "$WORK" && zip -qr "$OUT" . )
echo "[dxt] wrote $OUT"
ls -lh "$OUT"

rm -rf "$WORK"
