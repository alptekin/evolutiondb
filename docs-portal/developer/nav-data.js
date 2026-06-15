window.DOCS = {
  site: "developer",
  tagline: "/ developers",
  home: "/",
  tree: [
    { title: "Getting Started", icon: "rocket_launch", items: [
      { label: "Overview", href: "/" },
      { label: "Install & Run EvolutionDB", href: "/install/" },
      { label: "Connect (PG wire & EVO)", href: "/connect/" },
    ]},
    { title: "Memory SDKs", icon: "memory", items: [
      { label: "Python — python-evosql-memory", href: "/sdk/python/" },
      { label: "Node.js — node-evosql-memory", href: "/sdk/node/" },
      { label: "Go — go-evosql-memory", href: "/sdk/go/" },
      { label: "C — libevosql-memory", href: "/sdk/c/" },
      { label: "Other languages (roadmap)", href: "/sdk/roadmap/" },
    ]},
    { title: "Connectors (sync)", icon: "sync", items: [
      { label: "GitHub", href: "/connectors/github/" },
      { label: "Azure DevOps", href: "/connectors/azure-devops/" },
      { label: "Gmail", href: "/connectors/gmail/" },
      { label: "Outlook", href: "/connectors/outlook/" },
      { label: "Microsoft Teams", href: "/connectors/teams/" },
      { label: "Slack", href: "/connectors/slack/" },
      { label: "Google Calendar", href: "/connectors/calendar/" },
      { label: "Notion", href: "/connectors/notion/" },
      { label: "Apple Notes", href: "/connectors/notes/" },
      { label: "Browser history", href: "/connectors/browser/" },
      { label: "iMessage", href: "/connectors/imessage/" },
      { label: "YouTube", href: "/connectors/youtube/" },
      { label: "Claude sessions", href: "/connectors/claude-session/" },
    ]},
    { title: "Platform", icon: "hub", items: [
      { label: "MCP Server", href: "/platform/mcp-server/" },
      { label: "evolution-agent", href: "/platform/agent/" },
      { label: "PII guard", href: "/platform/pii/" },
      { label: "Orchestrator (hub)", href: "/platform/orchestrator/" },
    ]},
    { title: "Reference", icon: "menu_book", items: [
      { label: "EVO text protocol", href: "/reference/evo-protocol/" },
      { label: "Memory & Entity SQL", href: "/reference/memory-sql/" },
    ]},
  ]
};
