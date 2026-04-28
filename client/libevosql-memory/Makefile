# libevosql-memory — Makefile
#
# Builds the shared library (.dylib on macOS, .so on Linux), a static
# archive (.a), and the C unit-test binary. The test binary links the
# static archive so it has no runtime dependency on installation.
#
#   make            # build everything in build/
#   make test       # build + run the unit suite (server must be up)
#   make clean
#   make install    # install to /usr/local by default
#
# Override toolchain or install prefix with the usual env vars:
#   make CC=clang
#   make PREFIX=/opt/evosql install

CC      ?= cc
PREFIX  ?= /usr/local
CFLAGS  ?= -O2 -g -Wall -Wextra -Wpedantic -fPIC -std=c11
INCLUDES = -Iinclude

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
    SHARED_EXT = dylib
    SHARED_FLAGS = -dynamiclib -install_name @rpath/libevosql-memory.dylib
else
    SHARED_EXT = so
    SHARED_FLAGS = -shared -Wl,-soname,libevosql-memory.so
endif

BUILD_DIR = build
SRC      = src/conn.c src/subscribe.c
OBJ      = $(BUILD_DIR)/conn.o $(BUILD_DIR)/subscribe.o
SHARED   = $(BUILD_DIR)/libevosql-memory.$(SHARED_EXT)
STATIC   = $(BUILD_DIR)/libevosql-memory.a

TEST_BIN          = $(BUILD_DIR)/test_sdk
TEST_SRC          = tests/test_sdk.c
TEST_SUB_BIN      = $(BUILD_DIR)/test_subscribe
TEST_SUB_SRC      = tests/test_subscribe.c

LDLIBS = -lpthread

PKGCONFIG = $(BUILD_DIR)/evosql-memory.pc

.PHONY: all clean test install uninstall

all: $(SHARED) $(STATIC) $(PKGCONFIG)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/conn.o: src/conn.c include/evosql_memory.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/subscribe.o: src/subscribe.c include/evosql_memory.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(SHARED): $(OBJ)
	$(CC) $(SHARED_FLAGS) -o $@ $^ $(LDLIBS)

$(STATIC): $(OBJ)
	ar rcs $@ $^

$(PKGCONFIG): | $(BUILD_DIR)
	@echo "prefix=$(PREFIX)" > $@
	@echo "exec_prefix=\$${prefix}" >> $@
	@echo "libdir=\$${exec_prefix}/lib" >> $@
	@echo "includedir=\$${prefix}/include" >> $@
	@echo "" >> $@
	@echo "Name: libevosql-memory" >> $@
	@echo "Description: EvoSQL agent-memory C client (CHECKPOINT, MEMORY)" >> $@
	@echo "Version: 1.0.0" >> $@
	@echo "Libs: -L\$${libdir} -levosql-memory" >> $@
	@echo "Cflags: -I\$${includedir}" >> $@

$(TEST_BIN): $(TEST_SRC) $(STATIC)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $(TEST_SRC) $(STATIC) $(LDLIBS)

$(TEST_SUB_BIN): $(TEST_SUB_SRC) $(STATIC)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $(TEST_SUB_SRC) $(STATIC) $(LDLIBS)

test: $(TEST_BIN) $(TEST_SUB_BIN)
	@echo "==> Running libevosql-memory core suite (server must be on 127.0.0.1:9967)"
	@$(TEST_BIN)
	@echo "==> Running libevosql-memory streaming suite"
	@$(TEST_SUB_BIN)

install: all
	install -d $(DESTDIR)$(PREFIX)/include
	install -d $(DESTDIR)$(PREFIX)/lib
	install -d $(DESTDIR)$(PREFIX)/lib/pkgconfig
	install -m 644 include/evosql_memory.h $(DESTDIR)$(PREFIX)/include/
	install -m 755 $(SHARED) $(DESTDIR)$(PREFIX)/lib/
	install -m 644 $(STATIC) $(DESTDIR)$(PREFIX)/lib/
	install -m 644 $(PKGCONFIG) $(DESTDIR)$(PREFIX)/lib/pkgconfig/

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/include/evosql_memory.h
	rm -f $(DESTDIR)$(PREFIX)/lib/libevosql-memory.$(SHARED_EXT)
	rm -f $(DESTDIR)$(PREFIX)/lib/libevosql-memory.a
	rm -f $(DESTDIR)$(PREFIX)/lib/pkgconfig/evosql-memory.pc

clean:
	rm -rf $(BUILD_DIR)
