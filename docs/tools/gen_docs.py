#!/usr/bin/env python3
"""EvolutionDB documentation site generator.

One tool builds both static sites under docs/site. The only difference between
them is the scan profile in docs/tools/profiles/<site>.json.

What it does on a version change:
  1. Read the current version from src/include/version.h. Never hardcode it.
  2. Decide the channel from MAJOR.MINOR. The channel is the version folder name.
  3. If the channel changed, fork a new channel folder and freeze the old one.
  4. Scan the engine source that changed between the old and new release tags,
     filtered by the site profile.
  5. Ask the model to update the pages whose sources changed, in the house style.
  6. Refresh version.js and the nav-data version fields.
  7. Emit a per-version content manifest for the comparison page.

The model step is skipped when ANTHROPIC_API_KEY is not set or --no-ai is given.
Everything else still runs, so the structural output is always produced.

Usage:
  python docs/tools/gen_docs.py --site docs
  python docs/tools/gen_docs.py --site wiki
  python docs/tools/gen_docs.py --site docs --base-ref <sha> --head-ref <sha>
  python docs/tools/gen_docs.py --site docs --version 3.0.1   # test override only
"""
import argparse
import json
import os
import re
import subprocess
import sys
from html.parser import HTMLParser
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
VERSION_H = REPO / "src" / "include" / "version.h"
SITE_ROOT = REPO / "docs" / "site"
TOOLS = REPO / "docs" / "tools"
STYLE_GUIDE = TOOLS / "style_guide.md"

API_URL = "https://api.anthropic.com/v1/messages"
API_MODEL = os.environ.get("ANTHROPIC_MODEL", "claude-opus-4-8")
API_VERSION = "2023-06-01"

PAGE_SHELL = """<!DOCTYPE html>
<html class="dark" lang="en"><head>
<meta charset="utf-8"/>
<meta content="width=device-width, initial-scale=1.0" name="viewport"/>
<title>{title} | EvolutionDB</title>
<script src="https://cdn.tailwindcss.com?plugins=forms,container-queries"></script>
<link href="https://fonts.googleapis.com/css2?family=Hanken+Grotesk:wght@600;700;800&amp;family=Inter:wght@400;500;600&amp;family=JetBrains+Mono:wght@400;600&amp;display=swap" rel="stylesheet"/>
<link href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:wght,FILL@100..700,0..1&amp;display=swap" rel="stylesheet"/>
<script src="/tw.js"></script>
<link href="/style.css" rel="stylesheet"/>
</head>
<body class="bg-surface-container-lowest text-on-surface" style="font-family:Inter">
<header id="topbar"></header>
<div class="docs-shell pt-16">
<aside class="docs-sidebar" id="sidebar"></aside>
<main class="docs-content prose reveal">
{body}
</main></div>
<script src="/version.js"></script>
<script src="/nav-data.js"></script>
<script src="/nav.js"></script>
</body></html>
"""


def log(msg):
    print("[gen_docs] " + msg, flush=True)


# ---------------------------------------------------------------- version.h
def read_version():
    """Return (full_version, channel) from src/include/version.h."""
    text = VERSION_H.read_text()
    full = re.search(r'#define\s+EVODB_VERSION\s+"([^"]+)"', text).group(1)
    major = re.search(r'#define\s+EVODB_VERSION_MAJOR\s+(\d+)', text).group(1)
    minor = re.search(r'#define\s+EVODB_VERSION_MINOR\s+(\d+)', text).group(1)
    return full, "{}.{}".format(major, minor)


def channel_of(full):
    parts = full.split(".")
    return "{}.{}".format(parts[0], parts[1])


# ---------------------------------------------------------------- git
def git(*args):
    try:
        return subprocess.run(["git", "-C", str(REPO), *args],
                              capture_output=True, text=True, check=False).stdout.strip()
    except Exception:
        return ""


def changed_files(base_ref, head_ref):
    if not base_ref or not head_ref:
        return None
    out = git("diff", "--name-only", base_ref, head_ref)
    return [f for f in out.splitlines() if f.strip()]


def file_diff(path, base_ref, head_ref):
    return git("diff", base_ref, head_ref, "--", path)


# ---------------------------------------------------------------- HTML helpers
class BodyExtractor(HTMLParser):
    """Pull the inner HTML of <main> back out of a built page."""
    def __init__(self):
        super().__init__(convert_charrefs=False)
        self.depth = 0
        self.inside = False
        self.parts = []

    def _attrs(self, attrs):
        return "".join(' {}="{}"'.format(k, v if v is not None else "") for k, v in attrs)

    def handle_starttag(self, tag, attrs):
        if tag == "main" and not self.inside:
            self.inside = True
            return
        if self.inside:
            self.parts.append("<{}{}>".format(tag, self._attrs(attrs)))

    def handle_startendtag(self, tag, attrs):
        if self.inside:
            self.parts.append("<{}{}/>".format(tag, self._attrs(attrs)))

    def handle_endtag(self, tag):
        if tag == "main" and self.inside:
            self.inside = False
            return
        if self.inside:
            self.parts.append("</{}>".format(tag))

    def handle_data(self, data):
        if self.inside:
            self.parts.append(data)

    def handle_entityref(self, name):
        if self.inside:
            self.parts.append("&{};".format(name))

    def handle_charref(self, name):
        if self.inside:
            self.parts.append("&#{};".format(name))


def extract_body(html_text):
    p = BodyExtractor()
    p.feed(html_text)
    return "".join(p.parts).strip()


class SectionExtractor(HTMLParser):
    """Flatten a page into sections keyed by h2/h3, with plain text. Used for
    the version comparison data."""
    def __init__(self):
        super().__init__(convert_charrefs=True)
        self.inside_main = False
        self.cur_tag = None
        self.cur_id = None
        self.sections = []
        self.buf = []
        self.heading = "Introduction"
        self.hid = "intro"
        self._in_heading = False
        self._htext = []

    def handle_starttag(self, tag, attrs):
        if tag == "main":
            self.inside_main = True
            return
        if not self.inside_main:
            return
        if tag in ("h2", "h3"):
            self._flush()
            self._in_heading = True
            self._htext = []
            self.hid = dict(attrs).get("id") or ""

    def handle_endtag(self, tag):
        if tag == "main":
            self._flush()
            self.inside_main = False
            return
        if self.inside_main and tag in ("h2", "h3"):
            self._in_heading = False
            self.heading = "".join(self._htext).strip()

    def handle_data(self, data):
        if not self.inside_main:
            return
        if self._in_heading:
            self._htext.append(data)
        else:
            self.buf.append(data)

    def _flush(self):
        text = re.sub(r"\s+", " ", "".join(self.buf)).strip()
        if text or self.heading:
            self.sections.append({"id": self.hid, "heading": self.heading, "text": text})
        self.buf = []
        self.heading = ""
        self.hid = ""


def page_sections(html_text):
    p = SectionExtractor()
    p.feed(html_text)
    return [s for s in p.sections if s["text"] or s["heading"]]


def page_title(html_text):
    m = re.search(r"<title>(.*?)</title>", html_text, re.S)
    if not m:
        return ""
    return m.group(1).split("|")[0].strip()


def wrap_page(title, body):
    return PAGE_SHELL.format(title=title, body=body)


# ---------------------------------------------------------------- model call
def call_model(system, user, max_tokens=16000):
    import urllib.request
    key = os.environ.get("ANTHROPIC_API_KEY")
    if not key:
        return None
    payload = json.dumps({
        "model": API_MODEL,
        "max_tokens": max_tokens,
        "system": system,
        "messages": [{"role": "user", "content": user}],
    }).encode("utf-8")
    req = urllib.request.Request(API_URL, data=payload, headers={
        "x-api-key": key,
        "anthropic-version": API_VERSION,
        "content-type": "application/json",
    })
    try:
        with urllib.request.urlopen(req, timeout=180) as resp:
            data = json.loads(resp.read().decode("utf-8"))
        return "".join(b.get("text", "") for b in data.get("content", []) if b.get("type") == "text")
    except Exception as exc:
        log("model call failed: {}".format(exc))
        return None


def style_system():
    guide = STYLE_GUIDE.read_text() if STYLE_GUIDE.exists() else ""
    return ("You write and update pages for the EvolutionDB documentation sites. "
            "You return only the inner HTML that goes inside <main>. You do not "
            "return the <html>, <head>, <body>, or <main> tags. Follow this guide "
            "exactly.\n\n" + guide)


def update_page_with_model(page_path, slug, sources, base_ref, head_ref, channel):
    cur = page_path.read_text()
    body = extract_body(cur)
    diffs = []
    for s in sources:
        d = file_diff(s, base_ref, head_ref)
        if d.strip():
            diffs.append("### diff of {}\n{}".format(s, d[:12000]))
    if not diffs:
        return False
    user = (
        "The page below documents this engine source. The source changed in the "
        "new release. Update the page so it matches the new behavior. Keep the "
        "same structure and the same section order. Change only what the diff "
        "requires. Keep every other fact. Use the channel {ch} for any internal "
        "links.\n\n"
        "Current page body (inner HTML of <main>):\n{body}\n\n"
        "Source diffs:\n{diffs}\n\n"
        "Return the full updated inner HTML of <main>. Return HTML only."
    ).format(ch=channel, body=body, diffs="\n\n".join(diffs))
    out = call_model(style_system(), user)
    if not out:
        return False
    out = out.strip()
    if out.startswith("```"):
        out = re.sub(r"^```[a-zA-Z]*\n", "", out)
        out = re.sub(r"\n```$", "", out).strip()
    title = page_title(cur)
    page_path.write_text(wrap_page(title, out))
    log("updated page {} from {} diff(s)".format(slug, len(diffs)))
    return True


# ---------------------------------------------------------------- version.js
def write_version_js(site, full, channel):
    out = (SITE_ROOT / site / "version.js")
    out.write_text(
        "/* GENERATED from src/include/version.h by docs/tools/gen_docs.py. Do not edit by hand. */\n"
        'window.EVODB = {{ version: "{}", channel: "{}" }};\n'.format(full, channel))
    log("wrote {}".format(out.relative_to(REPO)))


# ---------------------------------------------------------------- nav-data
def update_nav_data(site, channel):
    nav = SITE_ROOT / site / "nav-data.js"
    text = nav.read_text()
    text = re.sub(r'home:\s*"/[^"]*/"', 'home: "/{}/"'.format(channel), text, count=1)
    text = re.sub(r'version:\s*"[^"]*"', 'version: "{}"'.format(channel), text, count=1)
    nav.write_text(text)


# ---------------------------------------------------------------- channel fork
def channel_dirs(site):
    root = SITE_ROOT / site
    return sorted([p.name for p in root.iterdir()
                   if p.is_dir() and re.fullmatch(r"\d+\.\d+", p.name)])


def fork_channel(site, old_channel, new_channel):
    """Copy the current channel forward to a new channel and rewrite the prefix.
    The old channel folder is left untouched and becomes a frozen snapshot."""
    import shutil
    root = SITE_ROOT / site
    src = root / old_channel
    dst = root / new_channel
    if dst.exists():
        log("channel {} already exists, skipping fork".format(new_channel))
        return
    shutil.copytree(src, dst)
    for html in dst.rglob("*.html"):
        t = html.read_text()
        t = t.replace("/{}/".format(old_channel), "/{}/".format(new_channel))
        t = re.sub(r"EvolutionDB {}\b".format(re.escape(old_channel)),
                   "EvolutionDB {}".format(new_channel), t)
        html.write_text(t)
    log("forked channel {} -> {} (old channel frozen)".format(old_channel, new_channel))


# ---------------------------------------------------------------- compare data
def emit_compare_manifest(site, full, channel):
    root = SITE_ROOT / site
    chan_dir = root / channel
    data_dir = root / "compare" / "data"
    data_dir.mkdir(parents=True, exist_ok=True)
    pages = {}
    for html in sorted(chan_dir.rglob("index.html")):
        slug = str(html.parent.relative_to(chan_dir)).replace("\\", "/")
        if slug == ".":
            slug = "index"
        text = html.read_text()
        pages[slug] = {"title": page_title(text), "sections": page_sections(text)}
    manifest = {"version": full, "channel": channel, "pages": pages}
    (data_dir / "{}.json".format(full)).write_text(json.dumps(manifest, ensure_ascii=False, indent=1))
    index_path = data_dir / "index.json"
    versions = []
    if index_path.exists():
        try:
            versions = json.loads(index_path.read_text()).get("versions", [])
        except Exception:
            versions = []
    if full not in versions:
        versions.append(full)
    versions = sorted(set(versions), key=lambda v: [int(x) for x in re.findall(r"\d+", v)])
    index_path.write_text(json.dumps({"versions": versions, "latest": full}, indent=1))
    log("compare manifest for {} written ({} pages, {} versions known)".format(
        full, len(pages), len(versions)))


def emit_compare_highlights(site, old_full, new_full):
    """Ask the model for a short plain-English summary of what changed between
    two versions, for the top of the comparison page."""
    if not old_full or old_full == new_full:
        return
    root = SITE_ROOT / site
    data_dir = root / "compare" / "data"
    old_p = data_dir / "{}.json".format(old_full)
    new_p = data_dir / "{}.json".format(new_full)
    if not (old_p.exists() and new_p.exists()):
        return
    user = (
        "Two version manifests of a documentation site are below. Write a short "
        "summary of what changed from {a} to {b}. Use the house style. Plain B1 "
        "English. No em dash. No colon inside a sentence. One idea per sentence. "
        "Return 3 to 6 short sentences as plain text. No HTML.\n\n"
        "OLD {a}:\n{old}\n\nNEW {b}:\n{new}"
    ).format(a=old_full, b=new_full, old=old_p.read_text()[:40000], new=new_p.read_text()[:40000])
    summary = call_model(style_system(), user, max_tokens=1200)
    if not summary:
        return
    hl_dir = data_dir / "highlights"
    hl_dir.mkdir(parents=True, exist_ok=True)
    (hl_dir / "{}__{}.json".format(old_full, new_full)).write_text(
        json.dumps({"from": old_full, "to": new_full, "summary": summary.strip()},
                   ensure_ascii=False, indent=1))
    log("wrote highlights {} -> {}".format(old_full, new_full))


# ---------------------------------------------------------------- main
def main():
    ap = argparse.ArgumentParser(description="EvolutionDB docs site generator")
    ap.add_argument("--site", required=True, choices=["docs", "wiki"])
    ap.add_argument("--version", help="override the version (test only; normally read from version.h)")
    ap.add_argument("--base-ref", help="git ref of the previous release, for the source diff")
    ap.add_argument("--head-ref", help="git ref of the new release, for the source diff")
    ap.add_argument("--old-version", help="previous full version, for the comparison highlights")
    ap.add_argument("--no-ai", action="store_true", help="skip the model step")
    args = ap.parse_args()

    profile = json.loads((TOOLS / "profiles" / "{}.json".format(args.site)).read_text())

    if args.version:
        full = args.version
        channel = channel_of(full)
    else:
        full, channel = read_version()
    log("site={} version={} channel={}".format(args.site, full, channel))

    existing = channel_dirs(args.site)
    if existing and channel not in existing:
        # a new channel. fork the most recent one forward and freeze it.
        fork_channel(args.site, existing[-1], channel)

    write_version_js(args.site, full, channel)
    update_nav_data(args.site, channel)

    # model page updates, only for pages whose sources changed
    use_ai = not args.no_ai and bool(os.environ.get("ANTHROPIC_API_KEY"))
    if use_ai and args.base_ref and args.head_ref:
        changed = changed_files(args.base_ref, args.head_ref) or []
        changed_set = set(changed)
        chan_dir = SITE_ROOT / args.site / channel
        for slug, sources in profile.get("pages", {}).items():
            if any(s in changed_set or any(c.startswith(s) for c in changed) for s in sources):
                page = chan_dir / slug / "index.html"
                if page.exists():
                    update_page_with_model(page, slug, sources, args.base_ref, args.head_ref, channel)
    elif not use_ai:
        log("model step skipped (no ANTHROPIC_API_KEY or --no-ai)")
    else:
        log("no base/head ref given, skipping source-diff page updates")

    emit_compare_manifest(args.site, full, channel)
    if use_ai:
        emit_compare_highlights(args.site, args.old_version, full)

    log("done")


if __name__ == "__main__":
    main()
