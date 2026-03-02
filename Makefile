# EvoSQL — Top-Level Build
# Builds all three components: Evolution CLI, Adaptor Server, PopPad GUI
#
# Usage:
#   make              Build all three executables
#   make evolution    Build only evosql.exe (CLI)
#   make adaptor      Build only evosql-server.exe
#   make poppad       Build only PopPad.exe (Windows only)
#   make release      Build all + copy stripped binaries to release/
#   make clean        Clean all object files and executables
#   make generate     Regenerate parser/lexer from .y/.l files

# Platform detection
UNAME := $(shell uname -s 2>/dev/null || echo Windows)

ifeq ($(UNAME),Linux)
    EXE_SUFFIX =
else
    # Fix linker temp-file permission issue on Windows
    export TEMP = /tmp
    export TMP  = /tmp
    EXE_SUFFIX = .exe
endif

# Sub-project directories
EVO_DIR    = evolution
ADAPTOR_DIR = adaptor
CLI_DIR     = cli
POPPAD_DIR  = PopPad

# Output executables (for release copy)
EVO_EXE     = $(EVO_DIR)/evosql$(EXE_SUFFIX)
ADAPTOR_EXE = $(ADAPTOR_DIR)/evosql-server$(EXE_SUFFIX)
CLI_EXE     = $(CLI_DIR)/evosql-cli$(EXE_SUFFIX)
POPPAD_EXE  = $(POPPAD_DIR)/PopPad$(EXE_SUFFIX)

RELEASE_DIR = release

# ----------------------------------------------------------------
#  Default: build all (Linux: skip PopPad — Win32 GUI only)
# ----------------------------------------------------------------
ifeq ($(UNAME),Linux)
all: evolution adaptor cli
	@echo "===================================="
	@echo "  Build complete!"
	@echo "    $(EVO_EXE)"
	@echo "    $(ADAPTOR_EXE)"
	@echo "    $(CLI_EXE)"
	@echo "  (PopPad skipped — Windows only)"
	@echo "===================================="
else
all: evolution adaptor cli poppad
	@echo "===================================="
	@echo "  Build complete!"
	@echo "    $(EVO_EXE)"
	@echo "    $(ADAPTOR_EXE)"
	@echo "    $(CLI_EXE)"
	@echo "    $(POPPAD_EXE)"
	@echo "===================================="
endif

# ----------------------------------------------------------------
#  Individual targets (order matters: evolution first)
# ----------------------------------------------------------------
evolution:
	$(MAKE) -C $(EVO_DIR)

adaptor: evolution
	$(MAKE) -C $(ADAPTOR_DIR)

cli:
	$(MAKE) -C $(CLI_DIR)

poppad: evolution
	$(MAKE) -C $(POPPAD_DIR)

# ----------------------------------------------------------------
#  Release: build all + copy stripped binaries
# ----------------------------------------------------------------
release: all
	@mkdir -p $(RELEASE_DIR)
	cp $(EVO_EXE)     $(RELEASE_DIR)/evosql$(EXE_SUFFIX)
	cp $(ADAPTOR_EXE) $(RELEASE_DIR)/evosql-server$(EXE_SUFFIX)
	cp $(CLI_EXE)     $(RELEASE_DIR)/evosql-cli$(EXE_SUFFIX)
ifeq ($(UNAME),Linux)
	strip $(RELEASE_DIR)/evosql
	strip $(RELEASE_DIR)/evosql-server
	strip $(RELEASE_DIR)/evosql-cli
else
	cp $(POPPAD_EXE)  $(RELEASE_DIR)/PopPad.exe
	strip $(RELEASE_DIR)/evosql.exe
	strip $(RELEASE_DIR)/evosql-server.exe
	strip $(RELEASE_DIR)/evosql-cli.exe
	strip $(RELEASE_DIR)/PopPad.exe
endif
	@echo "===================================="
	@echo "  Release binaries in $(RELEASE_DIR)/"
	@ls -lh $(RELEASE_DIR)/*
	@echo "===================================="

# ----------------------------------------------------------------
#  Clean everything
# ----------------------------------------------------------------
clean:
	$(MAKE) -C $(EVO_DIR) clean
	$(MAKE) -C $(ADAPTOR_DIR) clean
	$(MAKE) -C $(CLI_DIR) clean
ifeq ($(UNAME),Linux)
	@echo "(PopPad clean skipped — Windows only)"
else
	$(MAKE) -C $(POPPAD_DIR) clean
endif
	rm -rf $(RELEASE_DIR)

# ----------------------------------------------------------------
#  Regenerate parser/lexer from .y/.l source files
# ----------------------------------------------------------------
generate:
	$(MAKE) -C $(EVO_DIR) generate

.PHONY: all evolution adaptor cli poppad release clean generate
