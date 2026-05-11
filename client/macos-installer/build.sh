#!/bin/bash
# build.sh — local builder for EvolutionDB macOS installer.
#
# Usage:
#   ./build.sh <path-to-evosql-server-binary> [version]
#
# Output:
#   ./out/EvolutionDB-<version>.pkg   (productbuild bundle)
#   ./out/EvolutionDB-<version>.dmg   (drag-mountable wrapper)
#
# The .dmg is what we ship to end users. Double-clicking it mounts a
# disk image; inside is the .pkg which launches Installer.app for the
# wizard UX. The .pkg alone is useful for fully scripted installs
# (`sudo installer -pkg EvolutionDB.pkg -target /`).
set -euo pipefail

BIN_SRC="${1:?usage: build.sh <evosql-server binary> [version]}"
VERSION="${2:-0.1.0}"

ROOT="$(cd "$(dirname "$0")" && pwd)"
PAYLOAD_ROOT="$ROOT/pkg/payload-root"
OUT="$ROOT/out"
PKG_NAME="EvolutionDB-${VERSION}.pkg"
DMG_NAME="EvolutionDB-${VERSION}.dmg"

[[ -f "$BIN_SRC" ]] || { echo "binary not found: $BIN_SRC" >&2; exit 2; }

rm -rf "$OUT" "$PAYLOAD_ROOT"
mkdir -p "$OUT"
mkdir -p "$PAYLOAD_ROOT/usr/local/bin"
mkdir -p "$PAYLOAD_ROOT/usr/local/share/evosql"
mkdir -p "$PAYLOAD_ROOT/Library/LaunchDaemons"

cp "$BIN_SRC"                                       "$PAYLOAD_ROOT/usr/local/bin/evosql-server"
chmod 755                                           "$PAYLOAD_ROOT/usr/local/bin/evosql-server"
cp "$ROOT/pkg/LaunchDaemon/com.evolutiondb.server.plist" \
                                                    "$PAYLOAD_ROOT/Library/LaunchDaemons/"
chmod 644                                           "$PAYLOAD_ROOT/Library/LaunchDaemons/com.evolutiondb.server.plist"

chmod 755 "$ROOT/pkg/Scripts/preinstall" "$ROOT/pkg/Scripts/postinstall"

# Component .pkg (the actual payload + scripts).
pkgbuild \
    --root "$PAYLOAD_ROOT" \
    --identifier com.evolutiondb.server.pkg \
    --version "$VERSION" \
    --scripts "$ROOT/pkg/Scripts" \
    --install-location / \
    "$OUT/EvolutionDB.pkg"

# Distribution .pkg with welcome / license / conclusion screens.
productbuild \
    --distribution "$ROOT/distribution.xml" \
    --resources "$ROOT/pkg/Resources" \
    --package-path "$OUT" \
    --version "$VERSION" \
    "$OUT/$PKG_NAME"

rm "$OUT/EvolutionDB.pkg"

# Wrap the .pkg in a single-file .dmg for distribution. Inside the
# mounted image the user sees the .pkg + a short README.
DMG_STAGE="$OUT/dmg-stage"
rm -rf "$DMG_STAGE"
mkdir -p "$DMG_STAGE"
cp "$OUT/$PKG_NAME"                    "$DMG_STAGE/"
cat > "$DMG_STAGE/README.txt" <<README
EvolutionDB ${VERSION} for macOS (Apple Silicon)

Double-click EvolutionDB-${VERSION}.pkg to start the installer. The
wizard walks through three short screens and then puts the server in
the background. After it finishes you can verify the install with:

    psql -h 127.0.0.1 -p 5433 -U admin -d evosql      (password: admin)

To remove everything later:

    sudo /usr/local/share/evosql/uninstall.sh
README

hdiutil create \
    -volname "EvolutionDB ${VERSION}" \
    -srcfolder "$DMG_STAGE" \
    -ov -format UDZO \
    "$OUT/$DMG_NAME"

rm -rf "$DMG_STAGE"

echo
echo "Built:"
ls -lh "$OUT"
