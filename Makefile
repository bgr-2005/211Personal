CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

all: xeh hex parity

xeh: xeh.c
	$(CC) $(CFLAGS) -o xeh xeh.c
hex: hex.c
	$(CC) $(CFLAGS) -o hex hex.c
parity: parity.c
	$(CC) $(CFLAGS) -o parity parity.c
clean:
	rm -f xeh hex parity