# Builds every C program under programs/ into build/, keeping the same folder layout.
#
#   make          build all programs
#   make clean    delete everything in build/
#
# Example: programs/01-fundamentals/area_of_circle.c -> build/01-fundamentals/area_of_circle

# make's built-in default compiler is "cc", which isn't always installed on Windows.
ifeq ($(origin CC),default)
CC := gcc
endif
CFLAGS ?= -Wall -Wextra -std=c11

ifeq ($(OS),Windows_NT)
EXE := .exe
endif

SRCS := $(wildcard programs/*/*.c)
BINS := $(patsubst programs/%.c,build/%$(EXE),$(SRCS))

.PHONY: all clean

all: $(BINS)

build/%$(EXE): programs/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf build
