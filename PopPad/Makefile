# PopPad + EvoSQL Integrated Build
# Makefile for MinGW-w64

CC = gcc
WINDRES = windres
CFLAGS = -Wall -g -D_CRT_SECURE_NO_WARNINGS -DUNICODE -D_UNICODE
LDFLAGS = -mwindows
LIBS = -lcomctl32 -lcomdlg32 -lgdi32

EXE = PopPad.exe

# PopPad sources
POPPAD_SRCS = PopPad.c PopFile.c PopFind.c PopFont.c PopPrnt.c
POPPAD_OBJS = $(POPPAD_SRCS:.c=.o)
RES = poppad.res

# EvoSQL DB sources
DB_DIR = ../evalution/db
DB_SRCS = db.c error.c Create.c Select.c Insert.c Update.c Delete.c Drop.c database_globals.c
DB_OBJS = $(addprefix $(DB_DIR)/, $(DB_SRCS:.c=.o))

# EvoSQL Parser sources
PARSER_DIR = ../evalution/parser
PARSER_SRCS = evoparser.tab.c lex.yy.c
PARSER_OBJS = $(addprefix $(PARSER_DIR)/, $(PARSER_SRCS:.c=.o))

ALL_OBJS = $(POPPAD_OBJS) $(DB_OBJS) $(PARSER_OBJS)

all: $(EXE)

$(EXE): $(ALL_OBJS) $(RES)
	$(CC) $(CFLAGS) -o $@ $(ALL_OBJS) $(RES) $(LDFLAGS) $(LIBS)

# PopPad object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# DB object files
$(DB_DIR)/%.o: $(DB_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Parser object files (suppress warnings)
$(PARSER_DIR)/%.o: $(PARSER_DIR)/%.c
	$(CC) $(CFLAGS) -w -c $< -o $@

$(RES): poppad.rc resource.h
	$(WINDRES) -i poppad.rc -o $(RES) -O coff --include-dir=.

clean:
	del /Q $(POPPAD_OBJS) $(RES) $(EXE) 2>nul
	del /Q $(DB_DIR)\*.o $(PARSER_DIR)\*.o 2>nul

.PHONY: all clean
