#include <stdio.h>

unsigned char setBit(unsigned char n, unsigned char pos)
{
    n = n | (1 << pos);
    
    return n;
}

unsigned char maskBit(unsigned char n, unsigned char pos)
{
    n = n & ~(1 << pos);

    return n;
}

int extractBit(unsigned char n, int pos)
{
    return n & ( 1 << pos ) ? 1 : 0;
}

main()
{
    unsigned char n;

    printf("Enter a number between 0 to 255: ");
    scanf("%d", &n);

    for(int i = 0; i < 8; ++i) {
        int bit = extractBit(n, i);
        printf("b%d = %d\t", i, bit);
    }
    
    printf("\n");
}