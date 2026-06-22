"""
Microsoft identity platform device-code OAuth 2.0 flow. urllib only —
no MSAL or other SDK dependency.

Why device code and not loopback redirect:
  Outlook / Microsoft 365 is overwhelmingly used from corporate hosts
  where opening random local TCP ports for an OAuth callback is awkward
  (firewalls, locked-down WSL, headless SSH sessions). The device-code
  flow needs only HTTPS out and a short user-visible code typed into a
  browser — the same pattern `az login --use-device-code` uses.

Flow:
  1. POST /oauth2/v2.0/devicecode  → {device_code, user_code,
     verification_uri, interval, expires_in}.
  2. Print the code + URL to stderr. User opens the URL, types the
     code, signs in.
  3. Poll POST /oauth2/v2.0/token every `interval` seconds with
     grant_type=urn:ietf:params:oauth:grant-type:device_code. The
     endpoint returns `authorization_pending` until the user completes
     consent, then returns access_token + refresh_token.
  4. Subsequent runs read the cached refresh_token and exchange it for
     a fresh access_token (no user interaction).

Cache file is JSON at ~/.evosql/outlook_token.json (0600).
"""
from __future__ import annotations

import json
import os
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from pathlib import Path
from typing import Dict


# Default tenant — `common` lets any work / school / personal Microsoft
# account sign in. Override via AZURE_TENANT_ID to lock the app to a
# specific Entra ID tenant.
DEFAULT_TENANT = "common"

SCOPES = [
    "https://graph.microsoft.com/Mail.Read",
    "https://graph.microsoft.com/Calendars.Read",
    "https://graph.microsoft.com/User.Read",
    "offline_access",
]
# Mail.Send is OPT-IN and off by default — outlook-sync stays read-only unless
# the operator enables sending for the outbox action loop (ADR-004). Setting
# EVOSQL_OUTLOOK_SEND adds the send scope at consent time.
SEND_SCOPE = "https://graph.microsoft.com/Mail.Send"


def _truthy(v):
    return str(v or "").strip().lower() in ("1", "true", "yes", "on")


def _scopes():
    scopes = list(SCOPES)
    # Mail-only mode: drop Calendars.Read. Useful when the tenant restricts (or
    # requires admin consent for) calendar access but mail is already consented —
    # the existing mail consent then covers the request, so no re-consent/admin is
    # needed. EVOSQL_OUTLOOK_NO_CALENDAR=1 (or EVOSQL_OUTLOOK_MAIL_ONLY=1).
    if _truthy(os.environ.get("EVOSQL_OUTLOOK_NO_CALENDAR")) or \
            _truthy(os.environ.get("EVOSQL_OUTLOOK_MAIL_ONLY")):
        scopes = [s for s in scopes if "Calendars.Read" not in s]
    if _truthy(os.environ.get("EVOSQL_OUTLOOK_SEND")):
        scopes = scopes + [SEND_SCOPE]
    return scopes


class AuthError(Exception):
    pass


# ---------------------------------------------------------------- #
#  Token cache                                                      #
# ---------------------------------------------------------------- #
class TokenCache:
    def __init__(self, path: Path, connector: str = None, namespace: str = None):
        self.path = path.expanduser()
        # Per-tenant store (opt-in): when EVOSQL_TENANT_SECRET + the engine are
        # configured, the token lives encrypted in the engine namespaced by
        # MCP_USER_ID instead of one machine-wide file. None -> local file (dev
        # unchanged).
        self._store = None
        if connector:
            try:
                from evolutiondb_pii.token_store import TokenStore
                self._store = TokenStore.maybe(connector, namespace)
            except ImportError:
                self._store = None

    def load(self) -> Dict:
        if self._store is not None:
            return self._store.load()
        if not self.path.exists():
            return {}
        try:
            return json.loads(self.path.read_text(encoding="utf-8"))
        except (json.JSONDecodeError, OSError):
            return {}

    def save(self, data: Dict) -> None:
        if self._store is not None:
            self._store.save(data)
            return
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
            payload = {}
        # The device-code endpoint returns 400 + error=authorization_pending
        # while we wait for the user — surface that to the poll loop
        # instead of raising.
        if payload.get("error"):
            raise AuthError(
                f"{payload.get('error')}: "
                f"{payload.get('error_description', '')}"
            ) from None
        raise AuthError(f"HTTP {e.code} from {url}: {e.reason}") from None


# ---------------------------------------------------------------- #
#  Public flow                                                      #
# ---------------------------------------------------------------- #
class OutlookAuth:
    def __init__(self, client_id: str, tenant: str, cache_path: str,
                 namespace: str = None):
        if not client_id:
            raise AuthError(
                "AZURE_CLIENT_ID is required — register a public client "
                "in Azure Portal → App registrations and put the "
                "Application (client) ID in .env")
        self.client_id = client_id
        self.tenant    = tenant or DEFAULT_TENANT
        self.cache     = TokenCache(Path(cache_path), connector="outlook",
                                    namespace=namespace)

    @property
    def _device_url(self) -> str:
        return (f"https://login.microsoftonline.com/"
                f"{self.tenant}/oauth2/v2.0/devicecode")

    @property
    def _token_url(self) -> str:
        return (f"https://login.microsoftonline.com/"
                f"{self.tenant}/oauth2/v2.0/token")

    # -- main API ----------------------------------------------------
    def ensure_token(self, interactive: bool = False) -> str:
        cached = self.cache.load()
        # Scopes we now require (offline_access never appears in the granted
        # scope string, so exclude it). A refresh-token grant can only return
        # ALREADY-consented scopes — it can never ADD a newly requested one. So
        # on an explicit interactive (--auth) run, if the cached token does not
        # already cover what we need, skip the cached/refresh shortcuts and force
        # a FRESH consent; otherwise scope widening (e.g. adding Calendars.Read)
        # silently no-ops.
        want = {s for s in _scopes() if s != "offline_access"}
        covers = want.issubset(set((cached.get("scope") or "").split()))

        if cached.get("access_token") and cached.get("expires_at", 0) \
                > time.time() + 60 and (covers or not interactive):
            return cached["access_token"]

        if cached.get("refresh_token") and (covers or not interactive):
            try:
                fresh = self._refresh(cached["refresh_token"])
                # Microsoft rotates refresh tokens on each refresh —
                # always persist the new one or future calls 400.
                self.cache.save(fresh)
                return fresh["access_token"]
            except AuthError as exc:
                if not interactive:
                    raise
                print(f"[outlook-sync] refresh failed ({exc}); "
                      "re-running device-code flow",
                      file=sys.stderr, flush=True)

        if not interactive:
            raise AuthError("no cached token and interactive=False — "
                            "run with --auth to consent")
        fresh = self._interactive()
        self.cache.save(fresh)
        return fresh["access_token"]

    # -- the two halves ---------------------------------------------
    def _refresh(self, refresh_token: str) -> Dict:
        payload = _post(self._token_url, {
            "client_id":     self.client_id,
            "refresh_token": refresh_token,
            "grant_type":    "refresh_token",
            "scope":         " ".join(_scopes()),
        })
        return {
            "access_token":  payload["access_token"],
            "refresh_token": payload.get("refresh_token", refresh_token),
            "expires_at":    time.time() + int(payload.get("expires_in", 3600)),
            "scope":         payload.get("scope"),
        }

    def _interactive(self) -> Dict:
        start = _post(self._device_url, {
            "client_id": self.client_id,
            "scope":     " ".join(_scopes()),
        })
        for k in ("device_code", "user_code", "verification_uri",
                  "expires_in", "interval"):
            if k not in start:
                raise AuthError(
                    f"device-code response missing {k!r}: {start!r}")

        print(
            f"\n[outlook-sync] open {start['verification_uri']} "
            f"and enter the code:\n\n    {start['user_code']}\n",
            file=sys.stderr, flush=True)

        interval = max(1, int(start.get("interval", 5)))
        deadline = time.time() + int(start["expires_in"])
        while time.time() < deadline:
            time.sleep(interval)
            try:
                payload = _post(self._token_url, {
                    "client_id":   self.client_id,
                    "grant_type":  "urn:ietf:params:oauth:grant-type:"
                                   "device_code",
                    "device_code": start["device_code"],
                })
            except AuthError as exc:
                # The pending / slow_down errors are normal during polling
                # — keep waiting. Anything else aborts.
                msg = str(exc).lower()
                if "authorization_pending" in msg:
                    continue
                if "slow_down" in msg:
                    interval += 5
                    continue
                raise

            if "access_token" in payload:
                return {
                    "access_token":  payload["access_token"],
                    "refresh_token": payload.get("refresh_token", ""),
                    "expires_at":    time.time() + int(payload.get(
                        "expires_in", 3600)),
                    "scope":         payload.get("scope"),
                }

        raise AuthError("device-code flow timed out before consent")
