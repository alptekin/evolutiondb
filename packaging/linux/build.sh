#!/bin/bash
# build.sh — produce evolutiondb_<version>_<arch>.deb,
# evolutiondb-<version>.<arch>.rpm, and EvolutionDB-<version>-<arch>.AppImage
# for the supplied evosql-server binary.
#
# Usage:
#   ./build.sh <path-to-evosql-server> <version> [arch]
#
# arch defaults to amd64 (.deb) / x86_64 (.rpm / AppImage). Pass
# `arm64` to package the linux-arm64 binary. The script never
# downloads anything itself — the caller has already pulled the
# correct binary out of the GitHub Release.
set -euo pipefail

BIN_SRC="${1:?usage: build.sh <evosql-server> [version] [arch]}"
# Default to src/include/version.h so a local rebuild stamps the same
# version that the engine binary reports via `--version`.
ROOT_REPO="$(cd "$(dirname "$0")/../.." && pwd)"
VERSION="${2:-$("$ROOT_REPO/scripts/get-version.sh")}"
ARCH="${3:-amd64}"

case "$ARCH" in
    amd64|x86_64) DEB_ARCH=amd64;  RPM_ARCH=x86_64; APP_ARCH=x86_64 ;;
    arm64|aarch64) DEB_ARCH=arm64;  RPM_ARCH=aarch64; APP_ARCH=aarch64 ;;
    *) echo "unknown arch $ARCH" >&2; exit 2 ;;
esac

[[ -f "$BIN_SRC" ]] || { echo "binary not found: $BIN_SRC" >&2; exit 2; }

ROOT="$(cd "$(dirname "$0")" && pwd)"
OUT="$ROOT/out"
DEB_STAGE="$ROOT/debian"
APP_STAGE="$ROOT/appimage-stage"

rm -rf "$OUT" "$APP_STAGE"
mkdir -p "$OUT"

# ----------------------------------------------------------------- #
# .deb                                                              #
# ----------------------------------------------------------------- #
echo ">> .deb"
# Make sure the on-disk layout under debian/ exists. Git does not
# preserve empty directories so the runner-side checkout is missing
# the path bins go into.
mkdir -p "$DEB_STAGE/usr/bin" \
         "$DEB_STAGE/usr/share/doc/evolutiondb" \
         "$DEB_STAGE/lib/systemd/system" \
         "$DEB_STAGE/var/lib/evolutiondb"
cp "$BIN_SRC" "$DEB_STAGE/usr/bin/evosql-server"
chmod 755     "$DEB_STAGE/usr/bin/evosql-server"

cat > "$DEB_STAGE/DEBIAN/control" <<EOF
Package: evolutiondb
Version: $VERSION
Section: database
Priority: optional
Architecture: $DEB_ARCH
Maintainer: alptekin topal <topal.alptekin@gmail.com>
Homepage: https://github.com/alptekin/evolutiondb
Depends: libc6, libssl3 | libssl1.1, adduser
Description: SQL engine with built-in long-term memory primitives
 EvolutionDB is an open source SQL engine that targets AI assistant
 long-term memory. It speaks both the PostgreSQL wire protocol and a
 native EVO text protocol, ships memory + checkpoint stores as
 first-class objects, and runs as a single binary with no external
 dependencies beyond glibc + libssl.
EOF

chmod 755 "$DEB_STAGE/DEBIAN/postinst" "$DEB_STAGE/DEBIAN/prerm" "$DEB_STAGE/DEBIAN/postrm"
chmod 644 "$DEB_STAGE/lib/systemd/system/evolutiondb.service"

DEB_NAME="evolutiondb_${VERSION}_${DEB_ARCH}.deb"
dpkg-deb --build --root-owner-group "$DEB_STAGE" "$OUT/$DEB_NAME"

# ----------------------------------------------------------------- #
# .rpm — generated via alien from the .deb so we keep one spec.     #
# ----------------------------------------------------------------- #
if command -v alien >/dev/null 2>&1; then
    echo ">> .rpm (via alien)"
    (
        cd "$OUT"
        alien --to-rpm --keep-version --scripts "$DEB_NAME" 2>&1 | tail -2
    )
    # alien renames to evolutiondb-<version>-<rel>.<arch>.rpm
    mv "$OUT"/evolutiondb-*.rpm "$OUT/evolutiondb-${VERSION}.${RPM_ARCH}.rpm" || true
fi

# ----------------------------------------------------------------- #
# .AppImage                                                         #
# ----------------------------------------------------------------- #
if command -v appimagetool >/dev/null 2>&1; then
    echo ">> .AppImage"
    mkdir -p "$APP_STAGE/usr/bin"
    cp "$BIN_SRC" "$APP_STAGE/usr/bin/evosql-server"
    chmod 755    "$APP_STAGE/usr/bin/evosql-server"
    cp "$ROOT/appimage/AppRun"             "$APP_STAGE/AppRun"
    chmod 755                              "$APP_STAGE/AppRun"
    cp "$ROOT/appimage/evolutiondb.desktop" "$APP_STAGE/"
    # A 1x1 pixel placeholder icon — saves the AppImage SDK from a
    # missing-icon warning while we still don't have proper art.
    printf '\x89PNG\r\n\x1a\n' > "$APP_STAGE/evolutiondb.png"

    APP_NAME="EvolutionDB-${VERSION}-${APP_ARCH}.AppImage"
    ARCH=$APP_ARCH appimagetool "$APP_STAGE" "$OUT/$APP_NAME"
fi

# ----------------------------------------------------------------- #
# Cleanup staging                                                   #
# ----------------------------------------------------------------- #
rm -f "$DEB_STAGE/usr/bin/evosql-server" "$DEB_STAGE/DEBIAN/control"

echo
echo "Built:"
ls -lh "$OUT"
