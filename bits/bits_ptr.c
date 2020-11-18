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

void setBit(int* Nptr, int pos)
{
    unsigned int mask = 1 << pos;

    *Nptr =  *Nptr | mask;
}

void clearBit(int* Nptr, int pos)
{
    unsigned int mask = 1 << pos;

    printf("In clearBit: Nptr = %p\n", Nptr);
    printf("In clearBit: &Nptr = %p\n", &Nptr);
    printf("In clearBit: *Nptr = %d\n", *Nptr);
    

    mask = ~mask;

    *Nptr = *Nptr & mask;
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
    scanf("%d", &N);  // printf("%d", N);

    printBits(N);


    printf("In main: &N = %p\n", &N);

    clearBit(&N, 0);


    printBits(N);
}