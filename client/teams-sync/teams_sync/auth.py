"""
MSAL device-code login + persistent token cache.

Why device code: this is a CLI tool that may run on a server with no
browser, no redirect listener, no port to forward. Device code prints a
code + URL, the user logs in from any browser, and the CLI polls
Microsoft until the login completes. Same flow `az login --use-device-code`
uses.

Token cache: MSAL writes the refresh token (encrypted-at-rest is the
caller's responsibility — we put it under ~/.evosql/ with mode 0600).
After the first interactive login, subsequent runs reuse the refresh
token silently.
"""
from __future__ import annotations

import os
import sys
from pathlib import Path
from typing import List, Optional

import msal


# Permissions the app needs. All three are user-consent only — Chat.Read
# is delegated and limited to chats the signed-in user is part of, so no
# tenant admin needs to be involved.
SCOPES: List[str] = [
    "Chat.Read",
    "User.Read",
]
# offline_access is added by MSAL automatically and would be rejected if
# duplicated in SCOPES.


def _expand(path: str) -> Path:
    return Path(os.path.expanduser(path)).resolve()


class TokenStore:
    """Thin wrapper around msal.SerializableTokenCache that handles the
    on-disk read/write so callers don't have to."""

    def __init__(self, cache_path: str):
        self.path = _expand(cache_path)
        self.path.parent.mkdir(parents=True, exist_ok=True)
        self.cache = msal.SerializableTokenCache()
        if self.path.exists():
            try:
                self.cache.deserialize(self.path.read_text(encoding="utf-8"))
            except Exception as exc:
                print(f"[teams-sync] token cache unreadable, starting "
                      f"fresh ({exc})", file=sys.stderr)

    def flush(self) -> None:
        if self.cache.has_state_changed:
            self.path.write_text(self.cache.serialize(), encoding="utf-8")
            try:
                os.chmod(self.path, 0o600)
            except OSError:
                pass


class TeamsAuth:
    def __init__(self, tenant_id: str, client_id: str, cache_path: str):
        if not client_id:
            raise RuntimeError(
                "AZURE_CLIENT_ID is required. Register a public-client "
                "app under Microsoft Entra ID → App registrations and "
                "set its Application (client) ID in .env."
            )
        self.store = TokenStore(cache_path)
        self.app = msal.PublicClientApplication(
            client_id,
            authority=f"https://login.microsoftonline.com/{tenant_id or 'common'}",
            token_cache=self.store.cache,
        )

    # -- public surface ---------------------------------------------
    def login_interactive(self) -> str:
        """Run the device-code flow. Prints the user_code + verification
        URL and blocks until the user completes login or times out.
        Returns the access token."""
        flow = self.app.initiate_device_flow(scopes=SCOPES)
        if "user_code" not in flow:
            raise RuntimeError(f"device flow init failed: {flow}")
        # Print to stderr so --once piped output stays clean.
        print(flow["message"], file=sys.stderr, flush=True)
        result = self.app.acquire_token_by_device_flow(flow)
        self.store.flush()
        return self._extract_token(result)

    def get_token(self) -> str:
        """Try silent-refresh first; fall back to device code if no
        cached account is found or the refresh token has been revoked."""
        accounts = self.app.get_accounts()
        if accounts:
            result = self.app.acquire_token_silent(SCOPES, account=accounts[0])
            if result and "access_token" in result:
                self.store.flush()
                return result["access_token"]
        return self.login_interactive()

    # -- helpers ----------------------------------------------------
    def _extract_token(self, result: Optional[dict]) -> str:
        if not result or "access_token" not in result:
            err = result.get("error_description") if result else "no result"
            raise RuntimeError(f"login failed: {err}")
        return result["access_token"]
