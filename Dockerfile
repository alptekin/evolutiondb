# ---- Build stage ----
FROM gcc:13 AS builder

RUN apt-get update && apt-get install -y --no-install-recommends \
    bison flex make \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /build
COPY evolution/ evolution/
COPY adaptor/ adaptor/
COPY Makefile .

RUN make adaptor

# ---- Runtime stage ----
FROM debian:bookworm-slim

RUN apt-get update && apt-get install -y --no-install-recommends \
    libc6 \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /data

COPY --from=builder /build/adaptor/evosql-server .

EXPOSE 5433

CMD ["./evosql-server"]
