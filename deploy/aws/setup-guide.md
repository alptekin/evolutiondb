# EvolutionDB on AWS — Setup Guide

This is what a buyer reads after clicking Subscribe on the AWS
Marketplace listing. Three deploy paths, sized from "10 minutes
of evaluation" to "production AKS-equivalent on EKS".

## Path 1 — EC2 single-instance (evaluation)

The fastest way to try EvolutionDB. One CloudFormation stack,
~3 minutes from click to first SQL query.

### Launch

1. Open the CloudFormation template:
   `cloudformation/evolutiondb-ec2.yaml`
2. Required parameters:
   - `KeyName`: an existing EC2 KeyPair in your region
   - `EvosqlPassword`: pick a password ≥8 chars
3. Optional:
   - `InstanceType` (default `t3.small`, fine for eval)
   - `AllowedSshCidr` / `AllowedClientCidr` (default `0.0.0.0/0`;
     tighten in production)
   - `EncryptionKey` (TDE passphrase; leave empty to skip on-disk
     encryption)
   - `DataVolumeSizeGB` (default 50 GB)

CloudFormation provisions an EC2 instance + a 50 GB encrypted gp3
EBS volume mounted at `/var/lib/evosql`, installs Docker, pulls the
EvolutionDB image, and starts it on ports 5433 (PostgreSQL wire)
and 9967 (EVO native).

### Connect

Stack outputs include `PostgresWireEndpoint`. Copy that into psql /
DBeaver / pgAdmin:

```bash
psql -h <PostgresWireEndpoint> -p 5433 -U admin -d testdb
# password: whatever you set as EvosqlPassword
```

### Verify

```sql
CREATE MEMORY STORE demo;
MEMORY PUT INTO demo VALUES ('alice', 'k1', '{"fact":"hello"}');
SELECT mem_namespace, mem_key, mem_value FROM __mem_demo;
```

### Backup

The EBS volume is gp3 + encrypted, attached as a separate device
from the root volume. The CloudFormation stack's `DeletionPolicy:
Snapshot` retains the volume on stack delete. For point-in-time
backup, use AWS Backup or a cron'd `aws ec2 create-snapshot`.

## Path 2 — ECS on Fargate (managed, single-AZ)

Production-shaped, no EC2 host management. Backed by EFS for
persistence so the task can be replaced without losing data.

### Launch

1. Pre-requisite: an existing VPC + at least 2 subnets.
2. Open `cloudformation/evolutiondb-ecs-fargate.yaml`.
3. Required parameters:
   - `VpcId`, `SubnetIds`, `EvosqlPassword`
4. Optional: `Cpu` / `Memory` (default 1 vCPU / 2 GB), `ImageTag`,
   `AllowedClientCidr`.

The stack creates:
- An ECS cluster + Fargate task definition
- An EFS file system mounted at `/var/lib/evosql` inside the task
- A security group exposing 5433 + 9967 to your CIDR range
- A CloudWatch log group with 14-day retention

### Connect

The task gets a private IP within `SubnetIds`. For external access,
front the service with a Network Load Balancer pointed at port 5433
(NOT included in the template — add a separate NLB stack so you can
choose internal vs internet-facing per environment).

### Scale

Fargate single-task is the simplest topology. For HA, deploy the
EvolutionDB Helm chart on EKS instead (Path 3) — multi-replica
StatefulSet with leader election is not yet supported on a single
Fargate task.

## Path 3 — EKS via Helm (production, multi-AZ)

The path we use ourselves and recommend for production. Uses the
existing EvolutionDB Helm chart at https://alptekin.github.io/evolutiondb.

### Launch

```bash
helm repo add evolutiondb https://alptekin.github.io/evolutiondb
helm repo update

helm install evolutiondb evolutiondb/evolutiondb \
  --namespace evolutiondb --create-namespace \
  --set persistence.size=100Gi \
  --set auth.password=<your-password> \
  --set service.type=LoadBalancer
```

The chart provisions:
- A StatefulSet + PVC (gp3 by default)
- A Service exposing 5433 + 9967 (LoadBalancer or ClusterIP)
- Optional ingress for TLS termination
- Pre-configured TDE passphrase via Kubernetes Secret

### Connect

```bash
kubectl get svc -n evolutiondb evolutiondb
# Use the EXTERNAL-IP / endpoint with psql
```

### Upgrades

```bash
helm upgrade evolutiondb evolutiondb/evolutiondb \
  --namespace evolutiondb --reuse-values \
  --set image.tag=v3.0.20260601.1
```

The chart uses `RollingUpdate` for the StatefulSet; downtime is
limited to the pod restart window (~10s).

## Default credentials

| Field    | Value                               |
|----------|-------------------------------------|
| User     | `admin`                             |
| Database | `testdb`                            |
| Password | whatever you set in `EvosqlPassword` (or random + printed once if you don't set it) |

Change the password before exposing the instance to anything beyond
your VPC.

## Network exposure

| Port | Protocol           | Default state                                  |
|------|--------------------|------------------------------------------------|
| 5433 | PostgreSQL wire    | Open to `AllowedClientCidr` in CFN params      |
| 9967 | EVO native text    | Open to `AllowedClientCidr`                    |
| 22   | SSH (EC2 path only) | Open to `AllowedSshCidr`                       |

For internet-facing deploys, terminate TLS at an upstream NLB +
ACM certificate; the EvolutionDB process speaks plain TCP for the
PostgreSQL wire (just like RDS). On EKS, use cert-manager + an
ingress with `tls` annotation.

## Encryption at rest (TDE)

- Set `EncryptionKey` (CFN) or `auth.encryptionKey` (Helm) to a
  passphrase ≥16 chars.
- The Software derives a Master Encryption Key (MEK) from the
  passphrase via PBKDF2-SHA256, wraps a randomly-generated DEK,
  and encrypts all data pages on disk with AES-256-CTR.
- Page 0 (FileHeader) stays in plaintext; pages 1+ are encrypted.
- Without the passphrase, the data file is unrecoverable.

## Observability

- **Logs**: stdout/stderr; CloudWatch (ECS) or `kubectl logs` (EKS).
- **Metrics**: scrape the built-in `pg_stat_*` views via psql, or
  enable Prometheus exporter (Helm value `metrics.enabled=true`) →
  Grafana dashboard at `dashboards/evolutiondb-overview.json`.

## Common operations

```sql
-- Show current memory stores + their backing tables
SELECT * FROM pg_catalog.pg_stat_user_tables WHERE relname LIKE '__mem_%';

-- Show subscriptions (durable mailboxes)
SHOW SUBSCRIPTIONS;

-- Run a vacuum-equivalent (auto-RECLAIM cleans dead tuples)
SELECT pg_catalog.pg_stat_get_dead_tuples('public.your_table');

-- Time-travel query
SELECT * FROM your_table FOR SYSTEM_TIME AS OF TRANSACTION 4217;
```

For deeper operations (backup + restore, replication setup,
performance tuning) see https://alptekin.github.io/evolutiondb/.

## Support

- **Documentation**: https://alptekin.github.io/evolutiondb/
- **Issues**: https://github.com/alptekin/evolutiondb/issues
- **Email**: topal.alptekin@gmail.com
- **Smithery / MCP integration**: https://smithery.ai/server/topal-alptekin/evolutiondb-memory
