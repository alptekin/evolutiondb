# EvoSQL Adaptor — PostgreSQL Wire Protocol Server
# Makefile for MinGW/MSYS2 and Linux

# Platform detection
UNAME := $(shell uname -s 2>/dev/null || echo Windows)

# TLS support (set TLS=1 to enable, e.g. make TLS=1)
TLS ?= 0

ifeq ($(UNAME),Linux)
    LDFLAGS = -lpthread -lm
    EXE = evosql-server
else ifeq ($(UNAME),Darwin)
    LDFLAGS = -lpthread -lm
    EXE = evosql-server
else
    # Fix linker temp-file permission issue on Windows
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

CC = gcc
CFLAGS = -Wall -g -D_CRT_SECURE_NO_WARNINGS -pipe $(CFLAGS_TLS)

# Evolution engine paths
EVO_DB     = ../evolution/db
EVO_PARSER = ../evolution/parser

# Adaptor source files
ADAPTOR_SRCS = main.c \
               net.c \
               server.c \
               pg_protocol.c \
               pg_handler.c \
               evo_protocol.c \
               scram.c \
               result.c \
               catalog.c \
               query_executor.c \
               transaction.c \
               xa_transaction.c \
               replication.c \
               raft.c \
               distributed.c \
               shard.c \
               join.c \
               tls.c \
               util.c

# Evolution DB engine source files (no main.c!)
EVO_DB_SRCS = $(EVO_DB)/error.c \
              $(EVO_DB)/Create.c \
              $(EVO_DB)/Select.c \
              $(EVO_DB)/Insert.c \
              $(EVO_DB)/Update.c \
              $(EVO_DB)/Delete.c \
              $(EVO_DB)/Drop.c \
              $(EVO_DB)/database_globals.c \
              $(EVO_DB)/expression.c \
              $(EVO_DB)/DatabaseMgmt.c \
              $(EVO_DB)/crypto.c \
              $(EVO_DB)/UserMgmt.c \
              $(EVO_DB)/GrantMgmt.c \
              $(EVO_DB)/Index.c \
              $(EVO_DB)/Reclaim.c \
              $(EVO_DB)/Analyze.c \
              $(EVO_DB)/Copy.c \
              $(EVO_DB)/csv.c \
              $(EVO_DB)/FullText.c \
              $(EVO_DB)/buffer_pool.c \
              $(EVO_DB)/query_context.c \
              $(EVO_DB)/page_mgr.c \
              $(EVO_DB)/slotted.c \
              $(EVO_DB)/btree2.c \
              $(EVO_DB)/catalog_internal.c \
              $(EVO_DB)/table_api.c \
              $(EVO_DB)/tuple_format.c \
              $(EVO_DB)/hash_idx.c \
              $(EVO_DB)/page_crypt.c \
              $(EVO_DB)/mvcc.c \
              $(EVO_DB)/vmap.c \
              $(EVO_DB)/wal.c \
              $(EVO_DB)/lock_mgr.c \
              $(EVO_DB)/auto_reclaim.c \
              $(EVO_DB)/conflict_guard.c \
              $(EVO_DB)/table_lock.c \
              $(EVO_DB)/Procedure.c \
              $(EVO_DB)/Trigger.c \
              $(EVO_DB)/Json.c \
              $(EVO_DB)/Sequence.c \
              $(EVO_DB)/dml_profile.c

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
