# ---- Build stage ----
FROM gcc:13 AS builder

RUN apt-get update && apt-get install -y --no-install-recommends \
    bison flex make libssl-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /build
COPY evolution/ evolution/
COPY adaptor/ adaptor/
COPY Makefile .

RUN make generate && make adaptor TLS=1

# ---- Runtime stage ----
FROM debian:bookworm-slim

RUN apt-get update && apt-get install -y --no-install-recommends \
    libc6 libssl3 openssl \
    && rm -rf /var/lib/apt/lists/*

# Binary goes in /app, data lives in /data (volume mount)
COPY --from=builder /build/adaptor/evosql-server /app/evosql-server
COPY entrypoint.sh /app/entrypoint.sh
RUN chmod +x /app/entrypoint.sh

# Default credentials (override in docker-compose or docker run)
ENV EVOSQL_USER_NAME=admin
ENV EVOSQL_PASSWORD=admin

WORKDIR /data

EXPOSE 5433 9967

ENTRYPOINT ["/app/entrypoint.sh"]
