# Lightweight image: just Python + the package. Auth state lives in a
# mounted volume so the device-code login from the host transfers in.
FROM python:3.12-slim

ENV PYTHONDONTWRITEBYTECODE=1 \
    PYTHONUNBUFFERED=1

WORKDIR /app

COPY pyproject.toml /app/
COPY teams_sync /app/teams_sync

RUN pip install --no-cache-dir .

# Default: daemon every 10 minutes. Override with the compose service's
# `command:` if a different cadence or one-shot is needed.
ENTRYPOINT ["evosql-teams-sync"]
CMD ["--interval", "600"]
