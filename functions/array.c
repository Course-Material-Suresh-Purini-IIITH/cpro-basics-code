#include <stdio.h>

#define N 20

void incrArray(int B[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        B[i]++; // *(A+4*i) = *(A+4*i) + 1
        *(B+i) = *(B+i) - 1;
    }
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }
}

main()
{
    int A[N];

    for (int i = 0; i < N; ++i)
    {
        A[i] = i;
    }

    incrArray(A, N);

    printArray(A, N);
}