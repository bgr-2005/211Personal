#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

uint8_t is_odd(char c);

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        printf("%c: %d\n", c, is_odd(c));
    }
    return EXIT_SUCCESS;
}

uint8_t is_num_one_odd(char c) {
    /* Implement this function */
    return 0;
}