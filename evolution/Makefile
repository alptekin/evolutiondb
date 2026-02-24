# EvoSQL - SQL Parser & Database Engine
# Standalone Makefile (cross-platform: Windows MinGW + Linux GCC)

CC = gcc
CFLAGS = -Wall -g
LDFLAGS =

# Windows-specific settings
ifdef OS
    # Windows detected
    EXE = evosql.exe
    CFLAGS += -D_CRT_SECURE_NO_WARNINGS
    RM = del /Q
else
    EXE = evosql
    RM = rm -f
endif

# Source files (with subdirectory paths)
SRCS = main.c \
       parser/evoparser.tab.c \
       parser/lex.yy.c \
       db/db.c \
       db/error.c \
       db/Create.c \
       db/Select.c \
       db/Insert.c \
       db/Update.c \
       db/Delete.c \
       db/Drop.c \
       db/database_globals.c

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
	$(RM) $(OBJS) $(EXE) 2>nul

# Run the application
run: $(EXE)
	./$(EXE)

.PHONY: all clean run generate-parser generate-lexer generate
