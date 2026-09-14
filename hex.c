#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;
    int char_count = 0;

    // Read every single character from stdin until EOF
    while ((c = getchar()) != EOF) {
        // Print the character as 2 uppercase hex digits
        printf("%02X", (unsigned char)c);
        char_count += 2;

        // Line wrapping: Insert a newline after every 80 hex characters
        if (char_count >= 80) {
            putchar('\n');
            char_count = 0;
        }
    }

    // Always print a final newline if the last line wasn't wrapped exactly on the 80th character
    if (char_count > 0) {
        putchar('\n');
    }

    return EXIT_SUCCESS;
}