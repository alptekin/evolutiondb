# EvolutionDB

EvolutionDB is a small SQL database engine written in C. It runs as a single process. It speaks the PostgreSQL wire protocol, so clients like psql, DBeaver, and JDBC drivers can connect to it without any changes.

The engine also has features that AI agent systems often need. It can store vectors and search them by similarity. It can store JSON documents. It can keep time-versioned history. It can push change events to clients so they do not have to poll.

This repository holds the engine only. The AI agent, the memory server, the connectors, and the language SDKs live in a separate repository called [evolutionagent](https://github.com/alptekin/evolutionagent).

## What you get

EvolutionDB is one binary. You do not need to run several services. From that one binary you get:

- A relational SQL engine with tables, indexes, constraints, joins, subqueries, transactions, and MVCC.
- Vector storage and similarity search backed by an HNSW index.
- JSON document storage with a filter syntax.
- Time-travel queries that read data as of an earlier transaction.
- A push system. A client can listen for changes and receive a message when the data changes.
- The PostgreSQL wire protocol on port 5433. It also has a native text protocol called EVO on port 9967.
- AES-256 encryption at rest for on-premise deployments.

## Quick start with Docker

```bash
docker compose up -d        # starts the server on PG 5433 and EVO 9967
```

Then connect with any PostgreSQL client:

```bash
psql -h 127.0.0.1 -p 5433 -U admin -d testdb
```

The default user is `admin`. You set the password with the `EVOSQL_PASSWORD` environment variable. If you leave it unset, the server prints a random password once at startup.

## Build from source

You need GCC, Bison, Flex, and liblz4. For TLS you also need libssl-dev.

```bash
make              # build the engine (src/backend/evosql) and the server (src/server/evosql-server)
make server TLS=1 # build the server with TLS support
make tools        # build the diagnostic tools
make generate     # regenerate the parser after editing the grammar
make clean        # remove build output
```

## Special SQL objects

EvolutionDB adds a few first-class objects on top of normal SQL. They hold the kinds of state that agent frameworks use.

```sql
CREATE MEMORY STORE agent_memories WITH (embedding_dim = 1536);  -- key-value plus vector search
CREATE CHECKPOINT STORE agent_checkpoints;                       -- saved agent state
CREATE MESSAGE LOG agent_chat;                                   -- append-only chat history
CREATE DOCUMENT STORE agent_docs;                                -- JSON documents with filters
CREATE GRAPH STORE agent_kg;                                     -- time-versioned edges
CREATE ENTITY STORE agent_entities;                              -- entities with mention counts
```

You also get everything a relational engine gives you. That includes prepared statements, COPY, replication, and row-level security.

## Repository layout

The layout follows the PostgreSQL source tree.

```
src/include/    engine headers (everything compiles with -I src/include)
src/backend/    the engine, grouped by subsystem:
                storage, access, commands, executor, utils, parser
src/server/     the dual-protocol server (PostgreSQL wire and EVO text)
src/bin/tools/  diagnostic tools
test/           Python tests that run over the wire protocol
infra/          docker, compose, and helm files
packaging/      installers for macOS, Linux, Windows, and the AUR
docs/           the reference manual site and its source
```

## Using it from an application

Any PostgreSQL client works over port 5433. The agent memory features have their own client libraries. The C SDK, the language bindings for Python, Node, Go, Rust, Java, .NET, Ruby, and Swift, the MCP server, and the connectors all live in the [evolutionagent](https://github.com/alptekin/evolutionagent) repository.

## Testing

Start a server first. Then run the Python tests. They connect over the wire protocol and need no extra setup. The default credentials are `admin` and `admin`, and the default database is `testdb`.

```bash
docker compose up -d
python test/test_where.py
python test/test_aggregates.py
python test/test_evo_protocol.py
```

## Documentation

The reference manual is the site under `docs/`. The architecture notes are in the project [Wiki](../../wiki).

## Background

EvolutionDB began about 18 years ago as a personal project in C. The goal was to learn how a database works on the inside. That meant writing the parser, the storage layer, the indexes, and the execution layer by hand. The project was then archived on a DVD and left untouched for more than a decade.

Work resumed in early 2026 with AI-assisted development. The engine grew into a PostgreSQL-compatible core. After that it gained the features that agent systems need, such as vector search, JSON storage, time-versioned history, and push notifications.

## License

See [COPYRIGHT.md](COPYRIGHT.md).
