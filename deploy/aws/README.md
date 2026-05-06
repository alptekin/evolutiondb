# EvolutionDB on AWS

Production-ready deployment assets for running EvolutionDB on AWS,
plus the listing package we use to publish on AWS Marketplace as a
container offering.

EvolutionDB is the agent-memory backend that fits in one binary.
Native `MEMORY STORE` / `CHECKPOINT STORE` / `VECTOR(N)` / temporal
queries / push streaming over the PostgreSQL wire protocol — the
single-binary alternative to the four-product side stack agent
applications usually run.

## Quick deploy paths

| Path                                  | Recipe                                            | Time     |
|---------------------------------------|---------------------------------------------------|----------|
| EC2 single-instance (eval / dev)      | `cloudformation/evolutiondb-ec2.yaml`             | ~3 min   |
| ECS Fargate (managed, 1 service)      | `cloudformation/evolutiondb-ecs-fargate.yaml`     | ~5 min   |
| EKS via Helm                          | `helm install evolutiondb evolutiondb/evolutiondb` (chart published at https://alptekin.github.io/evolutiondb) | ~5 min   |
| Marketplace 1-click (after listing)   | https://aws.amazon.com/marketplace/pp/evolutiondb | ~2 min   |

## Container image

- Public Docker Hub: `evolutiondb/evolutiondb:latest`
- Public ECR (post-marketplace listing): `public.ecr.aws/evolutiondb/evolutiondb:latest`
- Versioned tags follow `vMAJOR.MINOR.YYYYMMDD.SEQ` (set by the
  `docker-publish.yml` and `aws-ecr-publish.yml` workflows).

The image is multi-arch (`linux/amd64` + `linux/arm64`) and runs as
non-root user `evosql` (uid 1000). Default ports inside the
container: `5433` (PostgreSQL wire) and `9967` (EVO native).

## Marketplace listing materials

- [`LISTING.md`](LISTING.md) — copy/paste cheat sheet for the AWS
  Marketplace seller portal forms (description, search keywords,
  category, support contacts, pricing model, etc.)
- [`EULA.md`](EULA.md) — End-User License Agreement we attach to
  the listing.
- [`submission-checklist.md`](submission-checklist.md) — every item
  the maintainer has to handle on the AWS side (account setup, tax
  forms, banking) plus links to the right portal pages.
- [`assets/architecture.svg`](assets/architecture.svg) — top-of-listing
  diagram.
- [`setup-guide.md`](setup-guide.md) — what a buyer reads after
  clicking Subscribe; covers EC2 boot, ECS task definition, EKS Helm
  install, default credentials, port exposure, and first
  `docker compose exec evosql evosql-cli` round-trip.
