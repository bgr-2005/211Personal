// PID: 730769478
// I pledge the COMP211 honor code.

#include <stdio.h>
#include <stdlib.h>

// Helper function to convert a single hex ASCII character to its 4-bit numeric value
static int hex_to_nibble(int c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    return -1; // Invalid hex character
}

int main(void) {
    int high_char, low_char;

    // Read characters in pairs from stdin, skipping any formatting whitespace
    while ((high_char = getchar()) != EOF) {
        // Skip whitespace characters (spaces, newlines, tabs)
        if (high_char == ' ' || high_char == '\n' || high_char == '\r' || high_char == '\t') {
            continue;
        }

        // Read the second hex digit of the pair
        low_char = getchar();
        if (low_char == EOF) {
            break;
        }

        int high_nibble = hex_to_nibble(high_char);
        int low_nibble  = hex_to_nibble(low_char);

        if (high_nibble != -1 && low_nibble != -1) {
            // Bitwise shift upper 4 bits left by 4, then OR with lower 4 bits
            unsigned char byte = (unsigned char)((high_nibble << 4) | low_nibble);
            putchar(byte);
        }
    }

    return EXIT_SUCCESS;
}