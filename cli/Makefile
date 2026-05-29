# EvoSQL CLI — Interactive Client
# Makefile for MinGW/MSYS2, Linux and macOS

# Platform detection
UNAME := $(shell uname -s 2>/dev/null || echo Windows)

CC = gcc
CFLAGS = -Wall -g -D_CRT_SECURE_NO_WARNINGS -pipe

ifeq ($(UNAME),Linux)
    LDFLAGS = -lreadline
    EXE = evosql-cli
else ifeq ($(UNAME),Darwin)
    # macOS: readline is keg-only under Homebrew — add its include/lib paths.
    READLINE_PREFIX := $(shell brew --prefix readline 2>/dev/null || echo /opt/homebrew/opt/readline)
    CFLAGS  += -I$(READLINE_PREFIX)/include
    LDFLAGS = -L$(READLINE_PREFIX)/lib -lreadline
    EXE = evosql-cli
else
    # Fix linker temp-file permission issue on Windows
    export TEMP = /tmp
    export TMP  = /tmp
    LDFLAGS = -lws2_32
    EXE = evosql-cli.exe
endif

# Optional TLS support: make TLS=1
ifdef TLS
    CFLAGS  += -DEVOSQL_CLI_TLS
    ifeq ($(UNAME),Darwin)
        OPENSSL_PREFIX := $(shell brew --prefix openssl 2>/dev/null || echo /opt/homebrew/opt/openssl)
        CFLAGS  += -I$(OPENSSL_PREFIX)/include
        LDFLAGS += -L$(OPENSSL_PREFIX)/lib -lssl -lcrypto
    else
        LDFLAGS += -lssl -lcrypto
    endif
endif

SRCS = evosql-cli.c
OBJS = $(SRCS:.c=.o)

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXE) 2>/dev/null

.PHONY: all clean
