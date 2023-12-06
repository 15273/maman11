CC = gcc
CFLAGS = -g -std=c90 -ansi -pedantic -Wall

.PHONY: all clean

all: main

main: main.c
	$(CC) $(CFLAGS) -o main main.c

clean:
	rm -f main
