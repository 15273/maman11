CC = gcc
CFLAGS = -std=c90 -Wall -ansi -pedantic -Wextra

.PHONY: all clean

all: main

myprogram: main.c
	$(CC) $(CFLAGS) -o myprogram main.c

clean:
	rm -f main




