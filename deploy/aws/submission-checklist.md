# AWS Marketplace Submission — Step-by-Step Checklist

Engineering side (the parts in this PR) is mostly ready. The
maintainer-side prerequisites that I can't automate are below in
order. Work through them top-down; nothing later in the list works
without the earlier items.

## 1. Legal entity (1-2 weeks)

AWS Marketplace will ask for the seller's legal name + tax forms
+ banking. Three options:

- **Personal (sole proprietor)** — fastest, but personal liability
  exposure for "data corruption" lawsuits. Not recommended for any
  paid tier.
- **Türkiye Limited Şirket** — moderate setup time (1-2 weeks),
  ~₺3,000 (lawyer + notary). USD payments require a foreign-
  currency bank account.
- **Estonia e-Residency LLC** — fully online, ~€500 + €100/yr,
  USD/EUR-friendly banking via Wise / LHV. Recommended path for
  international solo founders.

Decision goes here before submission.

## 2. AWS account + APN registration (1 week)

1. Create / choose an AWS account dedicated to publishing (don't
   mix with personal dev).
2. https://aws.amazon.com/partners/ → register as an AWS Partner.
3. Choose **Software Path** (Building Software).
4. Complete the AWS Partner Central onboarding (company info,
   competencies, contact).
5. Wait for AWS approval (1-2 business days for free tier).

## 3. AWS Marketplace seller registration (1 week)

1. https://aws.amazon.com/marketplace/management/ → "Become a
   seller".
2. Provide:
   - Legal entity (from step 1)
   - Tax form: **W-8BEN-E** (non-US LLC) or **W-9** (US LLC)
   - Banking: international wire-capable USD account (IBAN OK if
     your bank routes USD)
   - Contact: support email + escalation phone
3. Wait for AWS verification (3-5 business days).

## 4. ECR Public registry (1 day)

1. Open https://gallery.ecr.aws/ → Sign in.
2. Create public repo: `evolutiondb/evolutiondb`.
3. (Or: `aws ecr-public create-repository --repository-name evolutiondb`)
4. Set the repo description to match `LISTING.md` long description.
5. Add the same logo PNG that goes on the marketplace listing.
6. **Push the existing `evolutiondb/evolutiondb:latest` image** to
   `public.ecr.aws/evolutiondb/evolutiondb:latest`.

The push step is automated by `.github/workflows/aws-ecr-publish.yml`
(in this PR). Triggered on the same `v*` tag push as the existing
release pipelines. Requires repo secrets: `AWS_ACCESS_KEY_ID`,
`AWS_SECRET_ACCESS_KEY` (or, preferably, set up an OIDC role and
remove the access keys entirely).

## 5. Marketplace listing creation (1-3 days drafting)

1. https://aws.amazon.com/marketplace/management/products/server-products/
2. **Create container product**.
3. Fill the form fields exactly per [`LISTING.md`](LISTING.md):
   - Product title, short / long description, highlights, search
     keywords, categories
   - Logo + cover + architecture image (from `assets/`)
   - EULA (upload `EULA.md` rendered as PDF)
   - Setup guide (upload `setup-guide.md` rendered as PDF)
   - Pricing model: BYOL ($0/hr) for v1
4. **Container delivery options**: pick "Helm Chart" + "ECS Fargate"
   + "EKS" — point at the CloudFormation templates in this PR and
   the Helm chart at `https://alptekin.github.io/evolutiondb`.
5. Submit for review.

## 6. AWS review (2-3 weeks)

1. **Form completeness check** (2-4 business days). AWS responds
   with either "approved to scan" or a list of fixes.
2. **Container security scan** (Trivy + AWS internal). Failures
   here are typically: vulnerable base image, secret in image,
   excessive image size. Our Dockerfile uses `gcc:13` builder +
   `debian:bookworm-slim` runtime — should pass cleanly.
3. **Listing review** (5-10 business days). Reviewer reads the
   description + EULA + setup guide; flags anything that doesn't
   match the product or violates marketplace policy.
4. **Final approval** (1-2 business days after revisions).

Total realistic: **2-3 weeks**.

## 7. Post-launch monitoring (ongoing)

- **Marketplace dashboard**: https://aws.amazon.com/marketplace/management/dashboard
- **Metering** (paid tier only): subscribers, MRR, churn
- **Disbursement**: monthly wire to your bank account (~30 days
  after the buyer billing cycle)
- **Buyer support requests**: come into the email you set as
  `support contact` on the listing. Respond within 48h to keep
  the listing's "responsive" badge.

---

## Open items engineering still has to deliver before submission

These are tracked in this PR's todo block:

- [ ] `assets/logo-256.png` — marketplace tile (256×256, transparent
      PNG). Currently a placeholder; upgrade to a designer asset.
- [ ] `assets/cover-1024.png` — listing hero image (1024×512). Same.
- [ ] `assets/architecture.svg` — single-page architecture diagram
      (target: 1024×768 SVG, exportable to PNG).
- [ ] Multi-arch ECR Public push (`linux/amd64` + `linux/arm64`) —
      `aws-ecr-publish.yml` workflow handles this once secrets land.
- [ ] EULA rendered to PDF (Marketplace expects PDF, not Markdown).
      `pandoc EULA.md -o EULA.pdf` on the maintainer's laptop.
- [ ] Setup guide rendered to PDF: same pandoc command on
      `setup-guide.md`.

Once those check, paste each field from `LISTING.md` into the
portal form and submit.
