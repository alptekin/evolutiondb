#!/bin/sh
# entrypoint.sh — wait for evosql, then run the demo + tests.
#
# The compose file points evosql at the hostname `evosql` (compose
# service name). We poll its EVO port until accept() succeeds, then
# run test_agent.py. Exit code propagates so the compose run fails
# loudly on a regression.
set -eu

HOST=${EVOSQL_HOST:-evosql}
PORT=${EVOSQL_PORT:-9967}

echo "[demo] waiting for $HOST:$PORT to accept connections..."
i=0
while [ $i -lt 60 ]; do
    if python3 -c "import socket,sys; s=socket.create_connection(('$HOST',$PORT),1); s.close()" \
        2>/dev/null
    then
        echo "[demo] $HOST:$PORT is up"
        break
    fi
    i=$((i+1))
    sleep 1
done

if [ $i -ge 60 ]; then
    echo "[demo] gave up waiting for $HOST:$PORT" >&2
    exit 2
fi

echo
exec python3 /app/test_agent.py
