/* wiki.evolutiondb.org - engine internals wiki TOC. Engine only. No agent,
   MCP, connector, or SDK content lives here. "version" is the channel
   (MAJOR.MINOR). The full version shown in the UI is read from /version.js,
   which is generated from src/include/version.h. */
window.DOCS = {
  site: "wiki",
  tagline: "/ wiki",
  home: "/3.0/",
  version: "3.0",
  versions: [ { v: "3.0" } ],
  tree: [
    { title: "Engine Internals", icon: "memory", items: [
      { label: "Unified Storage Overview", href: "/3.0/unified-storage-overview/" },
      { label: "Page Manager & Slotted Pages", href: "/3.0/page-manager-and-slotted-pages/" },
      { label: "B+ Tree", href: "/3.0/bplus-tree/" },
      { label: "System Catalog", href: "/3.0/system-catalog/" },
      { label: "Table API & DML", href: "/3.0/table-api-and-dml/" },
    ]},
    { title: "Versions", icon: "history", items: [
      { label: "Compare versions", href: "/compare/" },
    ]},
  ]
};
