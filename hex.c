// PID: 730769478
// I pledge the COMP211 honor code.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;
    int char_count = 0;
    
    // Lookup table mapping 4-bit values (0-15) to their hex ASCII characters
    const char hex_digits[] = "0123456789ABCDEF";

    while ((c = getchar()) != EOF) {
        unsigned char byte = (unsigned char)c;

        // High nibble: shift right by 4 bits and isolate with mask 0x0F
        char high_char = hex_digits[(byte >> 4) & 0x0F];
        
        // Low nibble: isolate the lower 4 bits with mask 0x0F
        char low_char = hex_digits[byte & 0x0F];

        // Print the two hex characters using putchar
        putchar(high_char);
        putchar(low_char);

        char_count += 2;

        if (char_count >= 80) {
            putchar('\n');
            char_count = 0;
        }
    }

    if (char_count > 0) {
        putchar('\n');
    }

    return EXIT_SUCCESS;
}