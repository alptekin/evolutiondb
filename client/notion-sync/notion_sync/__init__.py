"""evolutiondb-notion-sync — pull every Notion page shared with an
integration token into EvolutionDB long-term memory.

Setup
-----
1. Create an internal integration at
   https://www.notion.so/my-integrations and copy its secret.
2. Export it as `NOTION_TOKEN` in `.env` or the calling shell.
3. From each Notion page or database you want indexed, open the
   share menu and add the integration. The sync only sees pages
   that have been explicitly shared with it.
"""

__version__ = "0.1.0"
