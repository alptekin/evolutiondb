# EvolutionDB — engine (standalone evosql REPL)
# Builds the engine from main.c + parser + all backend subsystems.
# Headers live in ../include (flat), so every source keeps its plain
# #include "database.h" form and resolves via -I ../include.

UNAME := $(shell uname -s 2>/dev/null || echo Windows)

CC = gcc
CFLAGS = -Wall -g -D_CRT_SECURE_NO_WARNINGS -I../include
LDFLAGS = -llz4

ifeq ($(UNAME),Linux)
    EXE = evosql
else ifeq ($(UNAME),Darwin)
    EXE = evosql
    # Homebrew liblz4 (Apple Silicon /opt/homebrew, Intel /usr/local)
    CFLAGS  += -I/opt/homebrew/include -I/usr/local/include
    LDFLAGS += -L/opt/homebrew/lib -L/usr/local/lib
else
    EXE = evosql.exe
endif

# All backend subsystems + the generated parser. Wildcard so the source
# list never drifts when files move between subsystems.
SRCS = main.c \
       parser/evoparser.tab.c parser/lex.yy.c \
       $(wildcard storage/*.c access/*.c commands/*.c executor/*.c utils/*.c)
OBJS = $(SRCS:.c=.o)

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Generated parser/lexer: suppress warnings
parser/evoparser.tab.o: parser/evoparser.tab.c
	$(CC) $(CFLAGS) -w -c $< -o $@
parser/lex.yy.o: parser/lex.yy.c
	$(CC) $(CFLAGS) -w -c $< -o $@

generate-parser: parser/evoparser.y
	bison -d -o parser/evoparser.tab.c parser/evoparser.y
generate-lexer: parser/evolexer.l parser/evoparser.tab.h
	flex -o parser/lex.yy.c parser/evolexer.l
generate: generate-parser generate-lexer

clean:
	rm -f $(OBJS) $(EXE) 2>/dev/null

.PHONY: all clean generate generate-parser generate-lexer
