"""evolutiondb-browser-sync — read local browser history (Chrome,
Edge, Firefox, Brave, Arc, Vivaldi) directly from each browser's
on-disk SQLite store and pour the entries into EvolutionDB
long-term memory.

No OAuth, no extension install, no remote API. The browser's own
data lives in a local file the user already owns, so the sync
just opens it read-only and copies the rows out."""

__version__ = "0.1.0"
