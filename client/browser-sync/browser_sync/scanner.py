"""
Enumerate every browser profile the current user owns across the
three desktop OSes. Yields one (browser_family, browser_label,
profile_id, history_path) tuple per discovered profile.

Supports
--------
  Chromium family  Chrome, Edge, Brave, Arc, Vivaldi, Chromium
  Mozilla family   Firefox (incl. Developer / Nightly / ESR)

Cross-OS path handling
----------------------
  macOS    ~/Library/Application Support/<vendor>/...
  Linux    ~/.config/<vendor>/... + snap + flatpak sandbox paths
  Windows  %LOCALAPPDATA% or %APPDATA%\\<vendor>\\...

Firefox is special: the profile directory has a random id; the
active profile names live in profiles.ini next to the directory.
We enumerate every *.default* directory plus whatever profiles.ini
lists so users with multiple profiles all flow through.
"""
from __future__ import annotations

import configparser
import os
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Iterator, List


CHROMIUM   = "chromium"
FIREFOX    = "firefox"


@dataclass(frozen=True)
class Profile:
    family:        str    # "chromium" | "firefox"
    browser:       str    # "chrome" | "edge" | "brave" | "arc" | "vivaldi" | "firefox"
    profile_id:    str    # "Default", "Profile 1", or firefox random id
    history_path:  Path


# ---------------------------------------------------------------- #
#  Per-platform vendor roots                                        #
# ---------------------------------------------------------------- #
def _chromium_roots() -> List[tuple]:
    """Return list of (browser_id, browser_label, user_data_root)
    candidates for every Chromium-family browser known to the
    current OS."""
    home = Path.home()
    p = sys.platform
    out: List[tuple] = []

    if p == "darwin":
        base = home / "Library/Application Support"
        out += [
            ("chrome",     "Chrome",      base / "Google/Chrome"),
            ("chrome",     "Chrome Beta", base / "Google/Chrome Beta"),
            ("chrome",     "Chromium",    base / "Chromium"),
            ("edge",       "Edge",        base / "Microsoft Edge"),
            ("brave",      "Brave",       base / "BraveSoftware/Brave-Browser"),
            ("arc",        "Arc",         base / "Arc/User Data"),
            ("vivaldi",    "Vivaldi",     base / "Vivaldi"),
            ("opera",      "Opera",       base / "com.operasoftware.Opera"),
        ]
    elif p.startswith("linux"):
        cfg = home / ".config"
        out += [
            ("chrome",  "Chrome",    cfg / "google-chrome"),
            ("chrome",  "Chrome Beta", cfg / "google-chrome-beta"),
            ("chrome",  "Chromium",  cfg / "chromium"),
            ("edge",    "Edge",      cfg / "microsoft-edge"),
            ("brave",   "Brave",
              cfg / "BraveSoftware/Brave-Browser"),
            ("vivaldi", "Vivaldi",   cfg / "vivaldi"),
            ("opera",   "Opera",     cfg / "opera"),
        ]
        # snap + flatpak sandboxed paths
        snap = home / "snap"
        out += [
            ("chrome",  "Chromium (snap)",
              snap / "chromium/common/chromium"),
        ]
        flat = home / ".var/app"
        out += [
            ("chrome",  "Chromium (flatpak)",
              flat / "org.chromium.Chromium/config/chromium"),
            ("brave",   "Brave (flatpak)",
              flat / "com.brave.Browser/config/BraveSoftware/"
                      "Brave-Browser"),
        ]
    elif p == "win32":
        local   = Path(os.environ.get("LOCALAPPDATA", str(home)))
        roaming = Path(os.environ.get("APPDATA",      str(home)))
        out += [
            ("chrome",  "Chrome",
              local / "Google/Chrome/User Data"),
            ("chrome",  "Chromium",
              local / "Chromium/User Data"),
            ("edge",    "Edge",
              local / "Microsoft/Edge/User Data"),
            ("brave",   "Brave",
              local / "BraveSoftware/Brave-Browser/User Data"),
            ("vivaldi", "Vivaldi",
              local / "Vivaldi/User Data"),
            ("opera",   "Opera",
              roaming / "Opera Software/Opera Stable"),
        ]
        _ = roaming   # quiet linter; reserved for future use
    return out


def _firefox_roots() -> List[Path]:
    """Return list of Firefox-family base directories (Mozilla/Firefox
    or equivalent) for the current OS. The actual profile lives one
    or two levels deeper."""
    home = Path.home()
    p = sys.platform
    if p == "darwin":
        base = home / "Library/Application Support"
        return [
            base / "Firefox",
            base / "Firefox Developer Edition",
            base / "Firefox Nightly",
        ]
    if p.startswith("linux"):
        out = [
            home / ".mozilla/firefox",
            home / "snap/firefox/common/.mozilla/firefox",
            home / ".var/app/org.mozilla.firefox/.mozilla/firefox",
        ]
        return out
    if p == "win32":
        roaming = Path(os.environ.get("APPDATA", str(home)))
        return [
            roaming / "Mozilla/Firefox",
            roaming / "Mozilla/Firefox Developer Edition",
        ]
    return []


# ---------------------------------------------------------------- #
#  Discovery                                                        #
# ---------------------------------------------------------------- #
def _iter_chromium() -> Iterator[Profile]:
    for browser_id, browser_label, root in _chromium_roots():
        if not root.is_dir():
            continue
        for prof_dir in sorted(root.iterdir()):
            if not prof_dir.is_dir():
                continue
            name = prof_dir.name
            if name not in ("Default",) and not name.startswith("Profile"):
                continue
            hist = prof_dir / "History"
            if hist.is_file():
                yield Profile(
                    family       = CHROMIUM,
                    browser      = browser_id,
                    profile_id   = f"{browser_label}/{name}",
                    history_path = hist,
                )


def _iter_firefox() -> Iterator[Profile]:
    for root in _firefox_roots():
        if not root.is_dir():
            continue
        # profiles.ini tells us which directories Firefox itself
        # treats as profiles. Falling back to a glob in case the ini
        # is missing or stale.
        seen: set = set()
        ini = root / "profiles.ini"
        if ini.is_file():
            try:
                cfg = configparser.ConfigParser()
                cfg.read(ini, encoding="utf-8")
                for section in cfg.sections():
                    if not section.startswith("Profile"):
                        continue
                    rel = cfg.get(section, "Path", fallback="")
                    if not rel:
                        continue
                    is_relative = cfg.get(section, "IsRelative",
                                            fallback="1") == "1"
                    p = (root / rel) if is_relative else Path(rel)
                    if p.is_dir():
                        seen.add(p.resolve())
            except (configparser.Error, OSError):
                pass

        profiles_root = root / "Profiles"
        if profiles_root.is_dir():
            for prof_dir in profiles_root.iterdir():
                if prof_dir.is_dir():
                    seen.add(prof_dir.resolve())

        for prof_dir in sorted(seen):
            hist = prof_dir / "places.sqlite"
            if hist.is_file():
                yield Profile(
                    family       = FIREFOX,
                    browser      = "firefox",
                    profile_id   = f"Firefox/{prof_dir.name}",
                    history_path = hist,
                )


def discover_profiles(
    browser_filter: List[str] = None) -> List[Profile]:
    """Return every profile we can see on this machine. Optional
    `browser_filter` keeps only matching browser ids (e.g.
    ['chrome', 'firefox'])."""
    result: List[Profile] = []
    for p in _iter_chromium():
        result.append(p)
    for p in _iter_firefox():
        result.append(p)
    if browser_filter:
        keep = {b.strip().lower() for b in browser_filter if b.strip()}
        result = [p for p in result if p.browser in keep]
    return result
