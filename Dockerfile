# ---- Build stage ----
FROM gcc:13 AS builder

RUN apt-get update && apt-get install -y --no-install-recommends \
    bison flex make \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /build
COPY evolution/ evolution/
COPY adaptor/ adaptor/
COPY Makefile .

RUN make generate && make adaptor

# ---- Runtime stage ----
FROM debian:bookworm-slim

RUN apt-get update && apt-get install -y --no-install-recommends \
    libc6 \
    && rm -rf /var/lib/apt/lists/*

# Binary goes in /app, data lives in /data (volume mount)
COPY --from=builder /build/adaptor/evosql-server /app/evosql-server

WORKDIR /data

EXPOSE 5433 9967

CMD ["/app/evosql-server"]
