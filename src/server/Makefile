# EvolutionDB — dual-protocol server (evosql-server)
# Compiles the server sources + the backend engine sources directly
# (no intermediate library), excluding the engine's standalone_stubs.c
# (the server provides the real platform/threading implementations).

UNAME := $(shell uname -s 2>/dev/null || echo Windows)

TLS ?= 0

ifeq ($(UNAME),Linux)
    LDFLAGS = -lpthread -lm
    EXE = evosql-server
else ifeq ($(UNAME),Darwin)
    LDFLAGS = -lpthread -lm
    EXE = evosql-server
else
    export TEMP = /tmp
    export TMP  = /tmp
    LDFLAGS = -lws2_32
    EXE = evosql-server.exe
endif

ifeq ($(TLS),1)
    CFLAGS_TLS = -DEVOSQL_TLS -DEVO_ENCRYPTION
    LDFLAGS += -lssl -lcrypto
else
    CFLAGS_TLS =
endif

# liblz4 (TOAST overflow store). Homebrew paths on macOS.
LDFLAGS += -llz4
ifeq ($(UNAME),Darwin)
    CFLAGS_LZ4 = -I/opt/homebrew/include
    LDFLAGS   += -L/opt/homebrew/lib
else
    CFLAGS_LZ4 =
endif

CC = gcc
# Engine headers live in ../include (flat) — added to the include path so the
# server's `#include "database.h"` / `#include "platform.h"` keep resolving.
CFLAGS = -Wall -g -D_CRT_SECURE_NO_WARNINGS -pipe -I../include $(CFLAGS_TLS) $(CFLAGS_LZ4)

EVO_BACKEND = ../backend

# Server's own sources (this directory).
SERVER_SRCS = $(wildcard *.c)

# Engine sources: every backend subsystem source EXCEPT standalone_stubs.c
# (server brings its own platform impls). main.c is the standalone REPL entry
# and lives at backend root, so the subsystem wildcard never picks it up.
EVO_BACKEND_SRCS = $(filter-out $(EVO_BACKEND)/utils/standalone_stubs.c, \
    $(wildcard $(EVO_BACKEND)/storage/*.c $(EVO_BACKEND)/access/*.c \
               $(EVO_BACKEND)/commands/*.c $(EVO_BACKEND)/executor/*.c \
               $(EVO_BACKEND)/utils/*.c))

EVO_PARSER_SRCS = $(EVO_BACKEND)/parser/evoparser.tab.c $(EVO_BACKEND)/parser/lex.yy.c

ALL_OBJS = $(SERVER_SRCS:.c=.o) $(EVO_BACKEND_SRCS:.c=.o) $(EVO_PARSER_SRCS:.c=.o)

all: $(EXE)

$(EXE): $(ALL_OBJS)
	$(CC) $(CFLAGS) -o $@ $(ALL_OBJS) $(LDFLAGS)

# server-local sources
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# backend engine sources (subsystem subdirs — % spans the subpath)
$(EVO_BACKEND)/%.o: $(EVO_BACKEND)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# generated parser/lexer (suppress warnings)
$(EVO_BACKEND)/parser/evoparser.tab.o: $(EVO_BACKEND)/parser/evoparser.tab.c
	$(CC) $(CFLAGS) -w -c $< -o $@
$(EVO_BACKEND)/parser/lex.yy.o: $(EVO_BACKEND)/parser/lex.yy.c
	$(CC) $(CFLAGS) -w -c $< -o $@

clean:
	rm -f $(ALL_OBJS) $(EXE) 2>/dev/null

.PHONY: all clean
