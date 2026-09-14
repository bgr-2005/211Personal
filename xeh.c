// PID: 730769478
// I pledge the COMP211 honor code.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char hex[3] = {0}; // Buffer for 2 hex digits + null terminator
    int byte;

    // Read 2 hex characters at a time from stdin
    while (scanf("%2s", hex) == 1) {
        // Convert the 2-character hex string into an integer byte
        byte = (int)strtol(hex, NULL, 16);
        
        putchar(byte);
    }

    // Print a trailing newline for clean terminal output
    //putchar('\n');

    return EXIT_SUCCESS;
}