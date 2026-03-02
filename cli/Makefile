# EvoSQL CLI — Interactive Client
# Makefile for MinGW/MSYS2 and Linux

# Platform detection
UNAME := $(shell uname -s 2>/dev/null || echo Windows)

ifeq ($(UNAME),Linux)
    LDFLAGS = -lreadline
    EXE = evosql-cli
else
    # Fix linker temp-file permission issue on Windows
    export TEMP = /tmp
    export TMP  = /tmp
    LDFLAGS = -lws2_32
    EXE = evosql-cli.exe
endif

CC = gcc
CFLAGS = -Wall -g -D_CRT_SECURE_NO_WARNINGS -pipe

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
