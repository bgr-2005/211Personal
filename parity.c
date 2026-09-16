// PID: 730769478
// I pledge the COMP211 honor code.

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define BYTE 8

uint8_t is_odd(char c);
uint8_t parityEncoder(char c);

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        //printf("%c: %d\n", c, is_odd(c));
        printf("%c", parityEncoder(c)); 
    }
    printf("\n");
    return EXIT_SUCCESS;
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


// parityEncoder 
/* 
get the input character c 
call is_odd(c) to determine if the number of 1 bits in c is odd or even

if is_odd(c) returns 1 (odd), then insert a 1 at the least significant bit (LSB) of c to make the total number of 1 bits even
if is_odd(c) returns 0 (even), then insert a 0 at the least significant bit (LSB) of c to keep the total number of 1 bits even
return the modified character c with the parity bit added 

yea I can just add the output of the shifted c and is_odd every time 
*/

uint8_t parityEncoder(char c) {
    uint8_t newByte = 0; 
    return newByte = c << 1 | is_odd(c); 
} 