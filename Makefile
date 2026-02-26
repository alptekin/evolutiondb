# EvoSQL — Top-Level Build
# Builds all three components: Evolution CLI, Adaptor Server, PopPad GUI
#
# Usage:
#   make              Build all three executables
#   make evolution    Build only evosql.exe (CLI)
#   make adaptor      Build only evosql-server.exe
#   make poppad       Build only PopPad.exe
#   make release      Build all + copy stripped binaries to release/
#   make clean        Clean all object files and executables
#   make generate     Regenerate parser/lexer from .y/.l files

# Fix linker temp-file permission issue on Windows
export TEMP = /tmp
export TMP  = /tmp

# Sub-project directories
EVO_DIR    = evolution
ADAPTOR_DIR = adaptor
POPPAD_DIR  = PopPad

# Output executables (for release copy)
EVO_EXE     = $(EVO_DIR)/evosql.exe
ADAPTOR_EXE = $(ADAPTOR_DIR)/evosql-server.exe
POPPAD_EXE  = $(POPPAD_DIR)/PopPad.exe

RELEASE_DIR = release

# ----------------------------------------------------------------
#  Default: build all three
# ----------------------------------------------------------------
all: evolution adaptor poppad
	@echo "===================================="
	@echo "  Build complete!"
	@echo "    $(EVO_EXE)"
	@echo "    $(ADAPTOR_EXE)"
	@echo "    $(POPPAD_EXE)"
	@echo "===================================="

# ----------------------------------------------------------------
#  Individual targets (order matters: evolution first)
# ----------------------------------------------------------------
evolution:
	$(MAKE) -C $(EVO_DIR)

adaptor: evolution
	$(MAKE) -C $(ADAPTOR_DIR)

poppad: evolution
	$(MAKE) -C $(POPPAD_DIR)

# ----------------------------------------------------------------
#  Release: build all + copy stripped binaries
# ----------------------------------------------------------------
release: all
	@mkdir -p $(RELEASE_DIR)
	cp $(EVO_EXE)     $(RELEASE_DIR)/evosql.exe
	cp $(ADAPTOR_EXE) $(RELEASE_DIR)/evosql-server.exe
	cp $(POPPAD_EXE)  $(RELEASE_DIR)/PopPad.exe
	strip $(RELEASE_DIR)/evosql.exe
	strip $(RELEASE_DIR)/evosql-server.exe
	strip $(RELEASE_DIR)/PopPad.exe
	@echo "===================================="
	@echo "  Release binaries in $(RELEASE_DIR)/"
	@ls -lh $(RELEASE_DIR)/*.exe
	@echo "===================================="

# ----------------------------------------------------------------
#  Clean everything
# ----------------------------------------------------------------
clean:
	$(MAKE) -C $(EVO_DIR) clean
	$(MAKE) -C $(ADAPTOR_DIR) clean
	$(MAKE) -C $(POPPAD_DIR) clean
	rm -rf $(RELEASE_DIR)

# ----------------------------------------------------------------
#  Regenerate parser/lexer from .y/.l source files
# ----------------------------------------------------------------
generate:
	$(MAKE) -C $(EVO_DIR) generate

.PHONY: all evolution adaptor poppad release clean generate
