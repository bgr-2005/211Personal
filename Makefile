CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

all: xeh hex parity ytirap

xeh: xeh.c
	$(CC) $(CFLAGS) -o xeh xeh.c
hex: hex.c
	$(CC) $(CFLAGS) -o hex hex.c
parity: parity.c
	$(CC) $(CFLAGS) -o parity parity.c
ytirap: ytirap.c
	$(CC) $(CFLAGS) -o ytirap ytirap.c
clean:
	rm -f xeh hex parity ytirap