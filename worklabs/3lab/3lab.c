#include <stdio.h>

void hexNibbleToBinaryNibble(unsigned char value) {
    switch (value) {
        case 0x00: printf("0000"); break;
        case 0x01: printf("0001"); break;
        case 0x02: printf("0010"); break;
        case 0x03: printf("0011"); break;
        case 0x04: printf("0100"); break;
        case 0x05: printf("0101"); break;
        case 0x06: printf("0110"); break;
        case 0x07: printf("0111"); break;
        case 0x08: printf("1000"); break;
        case 0x09: printf("1001"); break;
        case 0x0A: printf("1010"); break;
        case 0x0B: printf("1011"); break;
        case 0x0C: printf("1100"); break;
        case 0x0D: printf("1101"); break;
        case 0x0E: printf("1110"); break;
        case 0x0F: printf("1111"); break;
        default: printf("invalid hex\n"); break;
  }
}

char charToHighNibble(unsigned char x) {
    char highNibble = (x >> 4) & 0x0F;
    return highNibble;
}

char charToLowNibble(unsigned char x) {
    char lowNibble = x & 0x0F;
    return lowNibble;
}

int main()
{

    // unsigned char creation
    unsigned char c = '!';

    // highNibble char creation
    char highNibble = 0x0;

    // lowNibble char creation
    char lowNibble = 0x0;

    // char to nibble translation
    highNibble = charToHighNibble(c);
    lowNibble = charToLowNibble(c);

    // Print out the resulting binary number
    hexNibbleToBinaryNibble(highNibble);
    hexNibbleToBinaryNibble(lowNibble);
    printf("\n");

    return 0;
}