# EvolutionDB marketing site

The public landing site (English) — dark "glassify" theme, adapted from a Stitch
design. Three self-contained, dependency-free pages (Tailwind via CDN): home,
features, comparison. Honest content only (no fabricated benchmarks/figures).

**Live:** https://d1p62l8nd0wgoq.cloudfront.net  (custom domain evolutiondb.org pending)

## Deploy (AWS profile `evolutiondb-deploy`, account 858185170187)
```sh
export AWS_PROFILE=evolutiondb-deploy
aws s3 sync marketing-site/ s3://evolutiondb-site-858185170187/ --delete \
  --exclude "README.md"
aws cloudfront create-invalidation --distribution-id EU42VVYMQUQV --paths "/*"
```

- S3 bucket: `evolutiondb-site-858185170187` (eu-central-1, static-website hosting, public read)
- CloudFront: `EU42VVYMQUQV` (HTTPS + CDN, origin = the S3 website endpoint)

Edit the HTML directly and re-run the deploy. Nav links are relative
(`/`, `/features/`, `/comparison/`); GitHub links point at the repo root.
