# EvolutionDB docs writing and markup guide

This guide governs every page on docs.evolutiondb.org and wiki.evolutiondb.org.
The site generator embeds this file in the system prompt when it writes or
updates pages. Follow it exactly.

## Voice and sentence rules

- Write in plain B1 English. A non-native reader should understand it.
- Do not use the em dash character. Do not use it anywhere.
- Do not use a colon inside a sentence. Start a new sentence instead.
- Do not use interrupting clauses. Do not split a sentence with a clause set
  off by commas, parentheses, or dashes in the middle.
- Each sentence states one thing. Keep sentences short and declarative.
- The reader should feel a person wrote this. Do not sound like a machine.
- Do not inflate. State what the engine really does. Name real limits.

A colon is allowed only when it introduces a code block or a definition list.
It is never allowed in the middle of a normal sentence.

## What to preserve

- Keep every technical fact. Keep file names like `Select.c` and `btree2.c`.
- Keep struct names, constant names, function names, and type codes.
- Keep the Compatibility sections. They separate SQL standard, PostgreSQL,
  MySQL, and EvolutionDB-specific behavior.
- Keep honest limitation notes. If a feature is partial, say so plainly.

## Versions

- Never write a version string by hand. The current version comes from
  `src/include/version.h` at build time.
- To show the full version use `<span data-evodb-version></span>`.
- To show the channel use `<span data-evodb-channel></span>`.
- The channel is MAJOR.MINOR. It is also the version folder name, for example
  `3.0`. Inside a channel folder, links and channel text use that channel.

## Page shell

Every content page is one self-contained HTML file with this exact shell. Only
the `<title>` and the inside of `<main>` change per page.

```html
<!DOCTYPE html>
<html class="dark" lang="en"><head>
<meta charset="utf-8"/>
<meta content="width=device-width, initial-scale=1.0" name="viewport"/>
<title>PAGE TITLE | EvolutionDB</title>
<script src="https://cdn.tailwindcss.com?plugins=forms,container-queries"></script>
<link href="https://fonts.googleapis.com/css2?family=Hanken+Grotesk:wght@600;700;800&amp;family=Inter:wght@400;500;600&amp;family=JetBrains+Mono:wght@400;600&amp;display=swap" rel="stylesheet"/>
<link href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:wght,FILL@100..700,0..1&amp;display=swap" rel="stylesheet"/>
<script src="/tw.js"></script>
<link href="/style.css" rel="stylesheet"/>
</head>
<body class="bg-surface-container-lowest text-on-surface" style="font-family:Inter">
<header id="topbar"></header>
<div class="docs-shell pt-16">
<aside class="docs-sidebar" id="sidebar"></aside>
<main class="docs-content prose reveal">
  <!-- page body here -->
</main></div>
<script src="/version.js"></script>
<script src="/nav-data.js"></script>
<script src="/nav.js"></script>
</body></html>
```

The page title has no version in it. The top bar, version selector, sidebar,
breadcrumb, and prev/next links are drawn by `nav.js`. Do not hand-write them.

## Prose markup vocabulary

- `<h1>` once, then `<p class="lede">` with a one-paragraph summary.
- `<h2 id="...">` and `<h3 id="...">` for sections, with a short anchor id.
- `<p>`, `<ul>`, `<ol>`, `<li>` for normal text and lists.
- `<code>` for inline names and `<strong>` for emphasis.
- `<pre><code> ... </code></pre>` for code blocks and command output.
- Highlight code with spans. `c-key` is a keyword. `c-str` is a string or a
  literal. `c-com` is a comment. `c-fn` is a function or a name. `opt` marks an
  optional token. `<i>` marks a metavariable.
- `<div class="synopsis"><pre><code> ... </code></pre></div>` for SQL grammar.
- `<dl class="params"><dt>...</dt><dd>...</dd></dl>` for parameter lists.
- `<table><thead>...</thead><tbody>...</tbody></table>` for tables.
- `<div class="callout callout-note">` for notes. `callout-warn` for warnings.
  Each note starts with `<span class="material-symbols-outlined">icon</span>`.
- `<div class="card-grid">` with `<a class="doc-card">` only on landing pages.
- All internal links are root absolute and channel prefixed, like
  `href="/3.0/ref/insert/"` for docs or `href="/3.0/system-catalog/"` for wiki.

## Reference command page order

Command reference pages on docs.evolutiondb.org follow this section order.
Synopsis, then Description, then Parameters, then Examples, then Compatibility,
then See Also.
