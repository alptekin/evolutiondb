"""
Google OAuth 2.0 loopback-redirect flow for an "Installed app"
client. No SDK deps — just urllib + Python's stdlib http.server.

Why this and not the device flow:
  Google's device-code flow has a hard-coded scope allow-list and
  Gmail isn't on it. The loopback redirect is the supported path
  for desktop tools that need full Gmail scopes.

Flow:
  1. `ensure_token()` checks the on-disk cache. If a valid access
     token exists, return it. If only a refresh token exists,
     exchange it for a fresh access token and return.
  2. Otherwise spin up a one-shot HTTP server on 127.0.0.1:<random>,
     build the auth URL, open it in the default browser, wait for
     the redirect, exchange the auth-code for tokens, persist them.

Cache file is JSON: {refresh_token, access_token, expires_at, scope}.
Stored 0600 on POSIX so other users on a shared host can't read it.
"""
from __future__ import annotations

import json
import os
import secrets
import socket
import sys
import threading
import time
import urllib.error
import urllib.parse
import urllib.request
import webbrowser
from http.server import BaseHTTPRequestHandler, HTTPServer
from pathlib import Path
from typing import Dict, Optional


AUTH_URL  = "https://accounts.google.com/o/oauth2/v2/auth"
TOKEN_URL = "https://oauth2.googleapis.com/token"
SCOPES    = ["https://www.googleapis.com/auth/gmail.readonly"]


class AuthError(Exception):
    pass


# ---------------------------------------------------------------- #
#  Tiny callback server                                             #
# ---------------------------------------------------------------- #
class _Handler(BaseHTTPRequestHandler):
    server_version = "evolutiondb-gmail-sync/0.1"
    captured: Dict = {}

    def log_message(self, *_args, **_kwargs):
        return  # silence default access log

    def do_GET(self):
        parsed = urllib.parse.urlparse(self.path)
        params = dict(urllib.parse.parse_qsl(parsed.query))
        _Handler.captured = params
        body = (b"<!doctype html><html><body>"
                b"<h2>You can close this tab.</h2>"
                b"<p>evolutiondb-gmail-sync got the code.</p>"
                b"</body></html>")
        if "error" in params:
            body = (f"<!doctype html><html><body><h2>OAuth error</h2>"
                    f"<p>{params['error']}</p></body></html>"
                    ).encode()
        self.send_response(200)
        self.send_header("Content-Type", "text/html; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)


def _free_port() -> int:
    s = socket.socket()
    s.bind(("127.0.0.1", 0))
    port = s.getsockname()[1]
    s.close()
    return port


def _await_callback(port: int, timeout: float = 300.0) -> Dict:
    srv = HTTPServer(("127.0.0.1", port), _Handler)
    _Handler.captured = {}

    t = threading.Thread(target=srv.handle_request, daemon=True)
    t.start()
    t.join(timeout)
    srv.server_close()
    if not _Handler.captured:
        raise AuthError("OAuth timed out waiting for the redirect")
    return _Handler.captured


# ---------------------------------------------------------------- #
#  Token cache                                                      #
# ---------------------------------------------------------------- #
class TokenCache:
    def __init__(self, path: Path):
        self.path = path.expanduser()

    def load(self) -> Dict:
        if not self.path.exists():
            return {}
        try:
            return json.loads(self.path.read_text(encoding="utf-8"))
        except (json.JSONDecodeError, OSError):
            return {}

    def save(self, data: Dict) -> None:
        self.path.parent.mkdir(parents=True, exist_ok=True)
        tmp = self.path.with_suffix(".tmp")
        tmp.write_text(json.dumps(data), encoding="utf-8")
        try:
            os.chmod(tmp, 0o600)
        except OSError:
            pass
        tmp.replace(self.path)


# ---------------------------------------------------------------- #
#  HTTP                                                             #
# ---------------------------------------------------------------- #
def _post(url: str, form: Dict[str, str]) -> Dict:
    body = urllib.parse.urlencode(form).encode()
    req = urllib.request.Request(url, data=body, method="POST", headers={
        "Content-Type": "application/x-www-form-urlencoded",
        "Accept":       "application/json",
    })
    try:
        with urllib.request.urlopen(req, timeout=30) as resp:
            return json.loads(resp.read().decode() or "{}")
    except urllib.error.HTTPError as e:
        try:
            payload = json.loads(e.read().decode() or "{}")
        except Exception:
            payload = {"error": str(e)}
        raise AuthError(
            f"token endpoint returned {e.code}: "
            f"{payload.get('error', '')} — "
            f"{payload.get('error_description', '')}"
        ) from None


# ---------------------------------------------------------------- #
#  Public flow                                                      #
# ---------------------------------------------------------------- #
class GmailAuth:
    def __init__(self, client_id: str, client_secret: str,
                 cache_path: str):
        if not client_id or not client_secret:
            raise AuthError("client_id + client_secret are required")
        self.client_id     = client_id
        self.client_secret = client_secret
        self.cache         = TokenCache(Path(cache_path))

    # -- main API ----------------------------------------------------
    def ensure_token(self, interactive: bool = False) -> str:
        cached = self.cache.load()
        if cached.get("access_token") and cached.get("expires_at", 0) \
                > time.time() + 60:
            return cached["access_token"]

        if cached.get("refresh_token"):
            try:
                fresh = self._refresh(cached["refresh_token"])
                fresh.setdefault("refresh_token", cached["refresh_token"])
                self.cache.save(fresh)
                return fresh["access_token"]
            except AuthError as exc:
                if not interactive:
                    raise
                print(f"[gmail-sync] refresh failed ({exc}); "
                      "re-running consent flow", file=sys.stderr,
                      flush=True)

        if not interactive:
            raise AuthError("no cached token and interactive=False — "
                            "run with --auth to consent")
        fresh = self._interactive()
        self.cache.save(fresh)
        return fresh["access_token"]

    # -- the two halves ---------------------------------------------
    def _refresh(self, refresh_token: str) -> Dict:
        payload = _post(TOKEN_URL, {
            "client_id":     self.client_id,
            "client_secret": self.client_secret,
            "refresh_token": refresh_token,
            "grant_type":    "refresh_token",
        })
        return {
            "access_token":  payload["access_token"],
            "expires_at":    time.time() + int(payload.get("expires_in", 3600)),
            "scope":         payload.get("scope"),
        }

    def _interactive(self) -> Dict:
        port = _free_port()
        redirect = f"http://127.0.0.1:{port}/"
        state    = secrets.token_urlsafe(16)
        params = {
            "client_id":     self.client_id,
            "redirect_uri":  redirect,
            "response_type": "code",
            "scope":         " ".join(SCOPES),
            "access_type":   "offline",
            "prompt":        "consent",
            "state":         state,
        }
        url = f"{AUTH_URL}?{urllib.parse.urlencode(params)}"
        print(f"[gmail-sync] opening browser for consent …\n  {url}",
              file=sys.stderr, flush=True)
        try:
            webbrowser.open(url)
        except Exception:
            pass

        captured = _await_callback(port)
        if captured.get("state") != state:
            raise AuthError("OAuth state mismatch — possible MITM, "
                            "refusing to continue")
        if "error" in captured:
            raise AuthError(f"OAuth error: {captured['error']}")
        if "code" not in captured:
            raise AuthError("OAuth redirect did not include a code")

        payload = _post(TOKEN_URL, {
            "client_id":     self.client_id,
            "client_secret": self.client_secret,
            "code":          captured["code"],
            "redirect_uri":  redirect,
            "grant_type":    "authorization_code",
        })
        if "refresh_token" not in payload:
            raise AuthError("Google did not return a refresh_token. "
                            "Did you reuse a previously consented "
                            "session? Remove the app from "
                            "https://myaccount.google.com/permissions "
                            "and retry.")
        return {
            "access_token":  payload["access_token"],
            "refresh_token": payload["refresh_token"],
            "expires_at":    time.time() + int(payload.get("expires_in", 3600)),
            "scope":         payload.get("scope"),
        }
