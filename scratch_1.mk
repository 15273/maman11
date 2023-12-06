CC = gcc
CFLAGS = -g -std=c90 -ansi -pedantic -Wall

.PHONY: all clean

all: maman11.b

maman11.b: maman11.b.c
	$(CC) $(CFLAGS) -o maman11.b maman11.b.c

clean:
	rm -f maman11.b
