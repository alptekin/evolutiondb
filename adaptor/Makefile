# EvoSQL Adaptor — PostgreSQL Wire Protocol Server
# Makefile for MinGW/MSYS2 and Linux

# Platform detection
UNAME := $(shell uname -s 2>/dev/null || echo Windows)

ifeq ($(UNAME),Linux)
    LDFLAGS = -lpthread
    EXE = evosql-server
else
    # Fix linker temp-file permission issue on Windows
    export TEMP = /tmp
    export TMP  = /tmp
    LDFLAGS = -lws2_32
    EXE = evosql-server.exe
endif

CC = gcc
CFLAGS = -Wall -g -D_CRT_SECURE_NO_WARNINGS -pipe

# Evolution engine paths
EVO_DB     = ../evolution/db
EVO_PARSER = ../evolution/parser

# Adaptor source files
ADAPTOR_SRCS = main.c \
               pg_protocol.c \
               result.c \
               catalog.c \
               query_executor.c

# Evolution DB engine source files (no main.c!)
EVO_DB_SRCS = $(EVO_DB)/db.c \
              $(EVO_DB)/error.c \
              $(EVO_DB)/Create.c \
              $(EVO_DB)/Select.c \
              $(EVO_DB)/Insert.c \
              $(EVO_DB)/Update.c \
              $(EVO_DB)/Delete.c \
              $(EVO_DB)/Drop.c \
              $(EVO_DB)/database_globals.c

# Evolution parser source files
EVO_PARSER_SRCS = $(EVO_PARSER)/evoparser.tab.c \
                  $(EVO_PARSER)/lex.yy.c

# All object files
ADAPTOR_OBJS = $(ADAPTOR_SRCS:.c=.o)
EVO_DB_OBJS  = $(EVO_DB_SRCS:.c=.o)
EVO_PARSER_OBJS = $(EVO_PARSER_SRCS:.c=.o)

ALL_OBJS = $(ADAPTOR_OBJS) $(EVO_DB_OBJS) $(EVO_PARSER_OBJS)

# Default target
all: $(EXE)

$(EXE): $(ALL_OBJS)
	$(CC) $(CFLAGS) -o $@ $(ALL_OBJS) $(LDFLAGS)

# Adaptor source compilation
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Evolution DB sources
$(EVO_DB)/%.o: $(EVO_DB)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Evolution parser (suppress warnings)
$(EVO_PARSER)/evoparser.tab.o: $(EVO_PARSER)/evoparser.tab.c
	$(CC) $(CFLAGS) -w -c $< -o $@

$(EVO_PARSER)/lex.yy.o: $(EVO_PARSER)/lex.yy.c
	$(CC) $(CFLAGS) -w -c $< -o $@

clean:
	rm -f $(ADAPTOR_OBJS) $(EVO_DB_OBJS) $(EVO_PARSER_OBJS) $(EXE) 2>/dev/null

.PHONY: all clean
