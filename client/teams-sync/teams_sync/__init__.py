"""
teams_sync — pull Microsoft Teams 1:1 and group chat messages via the
Microsoft Graph API and persist them as long-term memories in
EvolutionDB. Messages then become searchable through the existing MCP
memory server, so any MCP-aware client (Claude, ChatGPT, Gemini,
Copilot) can answer questions like "what did Ahmet say about the
release plan last Tuesday".

Quick start:

    cd client/teams-sync
    python -m teams_sync.sync --auth          # device-code login
    python -m teams_sync.sync --once          # single sync pass
    python -m teams_sync.sync --interval 600  # daemon, 10-minute poll
"""

__version__ = "0.1.0"
