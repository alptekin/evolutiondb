# EvolutionDB docs portal

Two static sites that share one design (the "glassify" theme, left-sidebar docs
layout). Dependency-free: Tailwind via CDN + shared `tw.js`/`style.css`/`nav.js`,
no build step. Pages are generated from the real source/packages.

- **developer.evolutiondb.org** — how to USE the clients: language SDKs
  (`*-evosql-memory`), the `*-sync` connectors, and the platform packages. 27 pages.
- **wiki.evolutiondb.org** — the engine internals, function by function, split into
  Engine (evolution/db, 55) · Parser · Adaptor (21) · CLI · Overview. 82 pages.

## Layout
```
docs-portal/
  shared/{tw.js,style.css,nav.js}   # theme + sidebar renderer (copied into each site)
  TEMPLATE.html                     # the page contract
  developer/{index.html, nav-data.js, sdk/, connectors/, platform/, reference/}
  wiki/{index.html, nav-data.js, engine/, adaptor/, parser/, cli/, build/, lifecycle/}
```
Each page loads `/nav-data.js` (the site's page tree) then `/nav.js`, which renders
the top bar + sidebar and highlights the current page.

## Deploy (AWS profile `evolutiondb-deploy`, account 858185170187, region eu-central-1)
```sh
export AWS_PROFILE=evolutiondb-deploy
# developer.evolutiondb.org
aws s3 sync docs-portal/developer/ s3://evolutiondb-developer-858185170187/ --delete --exclude "README.md"
aws cloudfront create-invalidation --distribution-id E3Q087IF39QGP6 --paths "/*"
# wiki.evolutiondb.org
aws s3 sync docs-portal/wiki/ s3://evolutiondb-wiki-858185170187/ --delete --exclude "README.md"
aws cloudfront create-invalidation --distribution-id EA47V86UCM6UK --paths "/*"
```
- Buckets: `evolutiondb-developer-858185170187`, `evolutiondb-wiki-858185170187` (eu-central-1, static-website hosting, public read).
- CloudFront: developer `E3Q087IF39QGP6` (d3b0fwhh14ronp), wiki `EA47V86UCM6UK` (d1utshf08rhrw5); origin = S3 website endpoint; `*.evolutiondb.org` ACM cert (us-east-1).
- To add/refresh a page: regenerate its HTML following `TEMPLATE.html` + `shared/style.css` classes, and add it to the site's `nav-data.js`.

## docs.evolutiondb.org — versioned reference manual (PostgreSQL-style)
A versioned (`/3.0/…`, version selector + prev/next + breadcrumbs) reference
manual in PostgreSQL's writing style: Tutorial · The SQL Language · Administration
· Client Interfaces · SQL Command Reference (Synopsis/Description/Parameters/
Examples/Compatibility/See Also) · Appendixes. 78 content pages, grounded in the
real grammar (`evoparser.y`) + engine source. `docs/` has its own `nav.js`
(version selector) + `nav-data.js` (the TOC).
```sh
aws s3 sync docs-portal/docs/ s3://evolutiondb-docs-858185170187/ --delete --exclude "README.md"
aws cloudfront create-invalidation --distribution-id E3C1LNYEJP1QOY --paths "/*"
```
- Bucket `evolutiondb-docs-858185170187`; CloudFront `E3C1LNYEJP1QOY` (d3oiyfkkg839vm); `*.evolutiondb.org` wildcard cert.
- New version: copy `docs/3.0/` → `docs/<ver>/`, add it to `versions` in `docs/nav-data.js`.
