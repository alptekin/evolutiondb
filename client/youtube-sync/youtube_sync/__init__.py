"""evolutiondb-youtube-sync — pull YouTube subscriptions, playlists
and liked videos into EvolutionDB long-term memory.

Reuses the Google OAuth client_id + client_secret you already set
for gmail-sync (in `.env`). The first run with `--auth` does the
loopback consent flow against the `youtube.readonly` scope and
caches a refresh token at `~/.evosql/youtube_token.json`."""

__version__ = "0.1.0"
