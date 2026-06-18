# ---- Build stage ----
FROM gcc:13 AS builder

RUN apt-get update && apt-get install -y --no-install-recommends \
    bison flex make libssl-dev liblz4-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /build
COPY evolution/ evolution/
COPY adaptor/ adaptor/
COPY Makefile .

RUN make -C evolution clean; make -C adaptor clean; make generate && make adaptor TLS=1

# ---- Runtime stage ----
FROM debian:bookworm-slim

RUN apt-get update && apt-get install -y --no-install-recommends \
    libc6 libssl3 openssl liblz4-1 \
    && rm -rf /var/lib/apt/lists/*

# Binary goes in /app, data lives in /data (volume mount)
COPY --from=builder /build/adaptor/evosql-server /app/evosql-server
COPY entrypoint.sh /app/entrypoint.sh
RUN chmod +x /app/entrypoint.sh

# Default admin username (override with environment variable).
# If EVOSQL_PASSWORD is not set, a random password is generated
# and printed to stdout once on first start (check docker logs).
ENV EVOSQL_USER_NAME=admin

WORKDIR /data

EXPOSE 5433 9967

# Liveness probe, mirroring the docker-compose.yml healthcheck. The
# runtime image has only openssl (no nc/psql/curl/bash), so probe by
# opening a TCP connection to the plain EVO port: a refused connection
# (server not up) exits non-zero => unhealthy.
HEALTHCHECK --interval=10s --timeout=3s --retries=3 --start-period=15s \
    CMD openssl s_client -connect 127.0.0.1:9967 -quiet </dev/null >/dev/null 2>&1 || exit 1

ENTRYPOINT ["/app/entrypoint.sh"]
