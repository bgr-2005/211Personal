// PID: 730769478
// I pledge the COMP211 honor code.

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// next to do : implement this program and finish the brightspace questions 

// other than that this assignment should be completed i think 

#define BYTE 8

uint8_t ytirapDecoder(char c);
uint8_t is_odd(char c);

int main(void) {
    int c; 

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            continue;
        }

        uint8_t decodedByte = ytirapDecoder(c);
        if (decodedByte == 1) {
            return EXIT_FAILURE;
        }
        printf("%c", decodedByte);
    }

    return EXIT_SUCCESS;
}

uint8_t ytirapDecoder(char c) {
    // Implement the ytirapDecoder function here
    // This function should return the parity of the character c
    // You can use the is_odd and parityEncoder functions from parity.c if needed
    uint8_t fixedByte = 0;

    if (is_odd(c)) {
        // If the number of 1 bits in c is odd, return 1
        fprintf(stderr, "\nCorruption detected!\n"); 
        return 1;
    } else {
        fixedByte = c >> 1;
        return fixedByte;
    }
}

uint8_t is_odd(char c) {

    int ones_count = 0;

    for (int i = 0; i < BYTE; i++) {
        int bit = (c >> i) & 1;
        ones_count += bit;
    }
    if (ones_count % 2 == 1) {
        return 1;
    } else {
        return 0;
    }

    return 0;
}