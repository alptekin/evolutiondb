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
import subprocess
import sys
from pathlib import Path
from typing import List, Optional

import msal


# -------------------------------------------------------------------- #
#  Surface the device code through whatever desktop affordances are    #
#  available so a daemon-mode sync running under launchd / systemd     #
#  isn't silently stuck waiting for a code the user never sees.        #
# -------------------------------------------------------------------- #
def _surface_device_code(code: str, url: str) -> None:
    """Best-effort: pop a native notification, open the device login
    page in the default browser, and copy the code to the clipboard
    so the user can paste it without leaving the dialog. Silent if
    the host platform has none of these tools available."""
    if sys.platform == "darwin":
        _surface_macos(code, url)
    elif sys.platform.startswith("linux"):
        _surface_linux(code, url)
    elif sys.platform.startswith("win"):
        _surface_windows(code, url)


def _spawn(args, *, input_text: Optional[str] = None) -> None:
    """Fire-and-forget subprocess that never blocks the caller and
    swallows any error — these are UI niceties, not critical path."""
    try:
        kwargs = dict(stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        if input_text is not None:
            subprocess.run(args, input=input_text, text=True, timeout=3,
                            check=False, **kwargs)
        else:
            subprocess.Popen(args, **kwargs)
    except (FileNotFoundError, OSError, subprocess.TimeoutExpired):
        pass


def _surface_macos(code: str, url: str) -> None:
    # 1. Clipboard: paste-ready
    _spawn(["pbcopy"], input_text=code)
    # 2. Default browser opens the device login page
    _spawn(["open", url])
    # 3. Banner notification (Notification Center)
    title = "EvolutionDB Teams Sync"
    sub_msg = f"Code {code} copied to clipboard."
    _spawn([
        "osascript", "-e",
        (f'display notification "{sub_msg}" with title "{title}"'
         f' sound name "Glass"')
    ])
    # 4. Modal dialog so the user can't miss it. AppleScript can't
    #    embed newlines literally; use \\n which the shell parses.
    dialog = (
        f"Microsoft Teams sync needs to renew its login.\\n\\n"
        f"Code:  {code}\\n\\n"
        f"The Microsoft device login page is opening in your "
        f"browser. The code is already on your clipboard — paste it "
        f"there, sign in with your work account, and click Accept."
    )
    _spawn([
        "osascript", "-e",
        (f'display dialog "{dialog}" buttons {{"OK"}} default button "OK" '
         f'with title "{title}" with icon caution')
    ])


def _surface_linux(code: str, url: str) -> None:
    _spawn(["xdg-open", url])
    # Try to copy to clipboard via xclip / wl-copy / xsel — first one
    # that's installed wins. _spawn timeouts in 3 s if none.
    for clip in (["xclip", "-selection", "clipboard"],
                  ["wl-copy"],
                  ["xsel", "--clipboard", "--input"]):
        _spawn(clip, input_text=code)
    msg = f"Teams sync needs re-auth. Code: {code}"
    _spawn(["notify-send", "EvolutionDB Teams Sync", msg])


def _surface_windows(code: str, url: str) -> None:
    # PowerShell Set-Clipboard for the code, then Start-Process to
    # open the device login page in the default browser. A native
    # MessageBox would be louder but PowerShell's quote escaping
    # combined with f-strings is fragile enough that we skip it —
    # the clipboard + browser duo is the same shape macOS users get.
    _spawn(["powershell", "-NoProfile", "-Command",
            "Set-Clipboard", "-Value", code])
    _spawn(["cmd", "/c", "start", url])


# Permissions the app needs. All three are user-consent only — Chat.Read
# is delegated and limited to chats the signed-in user is part of, so no
# tenant admin needs to be involved.
SCOPES: List[str] = [
    "Chat.Read",
    "User.Read",
]
# offline_access is added by MSAL automatically and would be rejected if
# duplicated in SCOPES.
# ChatMessage.Send is OPT-IN and off by default — teams-sync stays read-only
# unless the operator enables sending for the outbox action loop (ADR-004).
# Setting EVOSQL_TEAMS_SEND adds the send scope at consent time.
SEND_SCOPE = "ChatMessage.Send"


def _scopes() -> List[str]:
    if os.environ.get("EVOSQL_TEAMS_SEND", "").strip().lower() in (
            "1", "true", "yes", "on"):
        return SCOPES + [SEND_SCOPE]
    return SCOPES


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
        """Run the device-code flow. Surfaces the user_code via every
        affordance the host platform offers (terminal stderr, macOS
        notification + native dialog, clipboard copy, default-browser
        auto-launch), then blocks until the user completes login or
        MSAL times out. Returns the access token."""
        flow = self.app.initiate_device_flow(scopes=_scopes())
        if "user_code" not in flow:
            raise RuntimeError(f"device flow init failed: {flow}")
        # Print to stderr so --once piped output stays clean.
        print(flow["message"], file=sys.stderr, flush=True)
        _surface_device_code(flow["user_code"], flow["verification_uri"])
        result = self.app.acquire_token_by_device_flow(flow)
        self.store.flush()
        return self._extract_token(result)

    def get_token(self) -> str:
        """Try silent-refresh first; fall back to device code if no
        cached account is found or the refresh token has been revoked."""
        accounts = self.app.get_accounts()
        if accounts:
            result = self.app.acquire_token_silent(_scopes(), account=accounts[0])
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
