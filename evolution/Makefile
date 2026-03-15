# EvoSQL - SQL Parser & Database Engine
# Standalone Makefile (MinGW/MSYS2 and Linux)

# Platform detection
UNAME := $(shell uname -s 2>/dev/null || echo Windows)

CC = gcc
CFLAGS = -Wall -g -D_CRT_SECURE_NO_WARNINGS
LDFLAGS =

ifeq ($(UNAME),Linux)
    EXE = evosql
else
    EXE = evosql.exe
endif

# Source files (with subdirectory paths)
SRCS = main.c \
       parser/evoparser.tab.c \
       parser/lex.yy.c \
       db/error.c \
       db/Create.c \
       db/Select.c \
       db/Insert.c \
       db/Update.c \
       db/Delete.c \
       db/Drop.c \
       db/database_globals.c \
       db/expression.c \
       db/DatabaseMgmt.c \
       db/crypto.c \
       db/UserMgmt.c \
       db/GrantMgmt.c \
       db/Index.c \
       db/Reclaim.c \
       db/Analyze.c \
       db/buffer_pool.c \
       db/query_context.c \
       db/page_mgr.c \
       db/slotted.c \
       db/btree2.c \
       db/catalog_internal.c \
       db/table_api.c \
       db/tuple_format.c \
       db/hash_idx.c \
       db/page_crypt.c

OBJS = $(SRCS:.c=.o)

# Default target
all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

# Pattern rule for .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Suppress warnings for generated parser/lexer code
parser/evoparser.tab.o: parser/evoparser.tab.c
	$(CC) $(CFLAGS) -w -c $< -o $@

parser/lex.yy.o: parser/lex.yy.c
	$(CC) $(CFLAGS) -w -c $< -o $@

# Generate parser from bison/yacc (only if bison is available)
generate-parser: parser/evoparser.y
	bison -d -o parser/evoparser.tab.c parser/evoparser.y

# Generate lexer from flex (only if flex is available)
generate-lexer: parser/evolexer.l parser/evoparser.tab.h
	flex -o parser/lex.yy.c parser/evolexer.l

# Regenerate both parser and lexer
generate: generate-parser generate-lexer

clean:
	rm -f $(OBJS) $(EXE) 2>/dev/null

# Run the application
run: $(EXE)
	./$(EXE)

.PHONY: all clean run generate-parser generate-lexer generate
