# EvolutionDB — Top-Level Build
#
# Usage:
#   make            Build the engine (evosql) and the server (evosql-server)
#   make engine     Build only src/backend/evosql (standalone engine REPL)
#   make server     Build only src/server/evosql-server
#   make tools      Build the diagnostic tools in src/bin/tools
#   make release    Build + copy stripped binaries to release/
#   make clean      Clean all object files and executables
#   make generate   Regenerate parser/lexer from .y/.l files

UNAME := $(shell uname -s 2>/dev/null || echo Windows)
ifeq ($(UNAME),Linux)
    EXE_SUFFIX =
else
    export TEMP = /tmp
    export TMP  = /tmp
    EXE_SUFFIX = .exe
endif

BACKEND_DIR = src/backend
SERVER_DIR  = src/server
TOOLS_DIR   = src/bin/tools
RELEASE_DIR = release

ENGINE_EXE = $(BACKEND_DIR)/evosql$(EXE_SUFFIX)
SERVER_EXE = $(SERVER_DIR)/evosql-server$(EXE_SUFFIX)

all: engine server
	@echo "===================================="
	@echo "  Build complete!"
	@echo "    $(ENGINE_EXE)"
	@echo "    $(SERVER_EXE)"
	@echo "===================================="

# order matters: the server links backend objects, so build the engine first
engine:
	$(MAKE) -C $(BACKEND_DIR)

server: engine
	$(MAKE) -C $(SERVER_DIR) TLS=$(TLS)

tools: engine
	$(MAKE) -C $(TOOLS_DIR)

# Back-compat aliases for callers that still say `make evolution` / `make adaptor`
evolution: engine
adaptor: server

release: all
	@mkdir -p $(RELEASE_DIR)
	cp $(ENGINE_EXE) $(RELEASE_DIR)/evosql$(EXE_SUFFIX)
	cp $(SERVER_EXE) $(RELEASE_DIR)/evosql-server$(EXE_SUFFIX)
ifeq ($(UNAME),Linux)
	strip $(RELEASE_DIR)/evosql $(RELEASE_DIR)/evosql-server
endif
	@ls -lh $(RELEASE_DIR)/*

clean:
	$(MAKE) -C $(BACKEND_DIR) clean
	$(MAKE) -C $(SERVER_DIR) clean
	-$(MAKE) -C $(TOOLS_DIR) clean
	rm -rf $(RELEASE_DIR)

generate:
	$(MAKE) -C $(BACKEND_DIR) generate

.PHONY: all engine server tools evolution adaptor release clean generate
