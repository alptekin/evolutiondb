#!/bin/sh
# get-version.sh — print the EvolutionDB engine version as MAJOR.MINOR.PATCH.
#
# `evolution/db/version.h` is the single source of truth for the user-visible
# version. Installer workflows, build.sh helpers, AUR PKGBUILDs, and the
# distribution.xml manifest all read it through this helper instead of
# hard-coding their own string. When you bump the version, edit version.h
# and nothing else.
#
# Usage:
#   $(./scripts/get-version.sh)        → 3.0.0
#
# Exit 1 if any of the three #defines is missing.

set -eu

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
HDR="$ROOT/evolution/db/version.h"

[ -f "$HDR" ] || { echo "missing $HDR" >&2; exit 1; }

read_define() {
    grep -E "^#define[[:space:]]+$1[[:space:]]" "$HDR" \
        | awk '{print $3}' \
        | tr -d '"'
}

MAJOR="$(read_define EVODB_VERSION_MAJOR)"
MINOR="$(read_define EVODB_VERSION_MINOR)"
PATCH="$(read_define EVODB_VERSION_PATCH)"

[ -n "$MAJOR" ] && [ -n "$MINOR" ] && [ -n "$PATCH" ] || {
    echo "version.h is missing one of MAJOR/MINOR/PATCH" >&2
    exit 1
}

echo "${MAJOR}.${MINOR}.${PATCH}"
