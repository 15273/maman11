CC = gcc
CFLAGS = -std=c90 -Wall -ansi -pedantic -Wextra

.PHONY: all clean

all: myprogram maman11.b

myprogram: main.c maman11.b.c
	$(CC) $(CFLAGS) -o  main.c maman11.b.c

clean:
	rm -f main maman11.b
