#include <stdio.h>

int readBit(int N, int pos)
{
    unsigned int mask, temp;

    mask = 1 << pos;

    temp = N & mask;

    if (temp == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int setBit(int N, int pos)
{
    unsigned int mask = 1 << pos;

    return N | mask;
}

int clearBit(int N, int pos)
{
    unsigned int mask = 1 << pos;

    mask = ~mask;

    return N & mask;
}

void printBits(int N)
{
    printf("(%d)_2 : ", N);
    for (int i = 8 * sizeof(int) - 1; i >= 0; --i)
    {
        printf("%d", readBit(N, i));
    }
    printf("\n");
}

main()
{
    int N;
    printf("Enter an integer:  ");
    scanf("%d", &N);

    printBits(N);

    N = clearBit(N, 0);

    printBits(N);
}