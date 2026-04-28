# Demo agent container.
#
# Stages:
#   1. builder — compile libevosql-memory from source
#   2. runtime — slim Python image that bundles the compiled .so plus
#                the Python ctypes binding plus the demo scripts
#
# Single-shot run:
#   docker compose -f docker-compose.demo.yml up --build --abort-on-container-exit
#
# The container's CMD runs test_agent.py end-to-end, exits 0 on success.

# ----------------------------------------------------------------------
# 1) builder — produce libevosql-memory.so
# ----------------------------------------------------------------------
FROM debian:bookworm-slim AS sdkbuild

RUN apt-get update && apt-get install -y --no-install-recommends \
        build-essential ca-certificates \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /src
COPY client/libevosql-memory ./libevosql-memory
# Wipe any host-built artifacts that hitched a ride from the build
# context (Mach-O .o files from a macOS dev box don't link with
# Linux ld) — then build cleanly inside the container.
RUN rm -rf libevosql-memory/build && make -C libevosql-memory all

# ----------------------------------------------------------------------
# 2) runtime — Python 3.12 slim with the demo + binding + .so
# ----------------------------------------------------------------------
FROM python:3.12-slim

# Carry over the compiled SDK shared library + its public header.
COPY --from=sdkbuild /src/libevosql-memory/build /opt/evosql-memory/build
COPY --from=sdkbuild /src/libevosql-memory/include /opt/evosql-memory/include

# Install pip deps (anthropic for the real Claude path; stub LLM has
# no external deps so the demo runs even when the optional API isn't
# reachable).
WORKDIR /app
COPY examples/full_agent_demo/requirements.txt /app/requirements.txt
RUN pip install --no-cache-dir -r /app/requirements.txt

# Python ctypes binding (Task 218) — auto-discovers the .so via
# EVOSQL_MEMORY_LIB env var pointing at the file from the build stage.
COPY client/python-evosql-memory /opt/python-evosql-memory

# The demo source itself.
COPY examples/full_agent_demo /app

ENV PYTHONPATH=/opt/python-evosql-memory:/app
ENV EVOSQL_MEMORY_LIB=/opt/evosql-memory/build/libevosql-memory.so
ENV EVOSQL_HOST=evosql
ENV EVOSQL_PORT=9967
ENV EVOSQL_USER=admin
ENV EVOSQL_PASSWORD=admin

RUN chmod +x /app/entrypoint.sh
CMD ["/app/entrypoint.sh"]
