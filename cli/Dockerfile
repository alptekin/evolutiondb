# ---- Build stage ----
FROM gcc:13 AS builder

RUN apt-get update && apt-get install -y --no-install-recommends \
    make libreadline-dev libssl-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /build/cli
COPY . .

RUN make TLS=1

# ---- Runtime stage ----
FROM debian:bookworm-slim

RUN apt-get update && apt-get install -y --no-install-recommends \
    libreadline8 libssl3 \
    && rm -rf /var/lib/apt/lists/*

COPY --from=builder /build/cli/evosql-cli /usr/local/bin/evosql-cli

ENTRYPOINT ["evosql-cli"]
CMD ["-h", "evosql"]
