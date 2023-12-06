CC = gcc
CFLAGS = -g -std=c90 -ansi -pedantic -Wall

.PHONY: all clean

all: maman11

maman11.b: maman11.c
	$(CC) $(CFLAGS) -o maman11 maman11.c

clean:
	rm -f maman11
