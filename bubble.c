#include <stdio.h>

#define N 10

main()
{
    int A[N];

    printf("Enter %d numbers: \n", N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N - 1; ++i)
    {
        // Bubble up maximal element from into A[N-1-i]
        for (int j = 0; j < N - 1 - i; ++j)
        {
            if (A[j] > A[j + 1])
            {
                int temp;

                // Swap A[j] and A[j+1]
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        printf("%d\n", A[i]);
    }
}