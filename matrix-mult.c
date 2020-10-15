#include <stdio.h>

#define N 2

main()
{
    int A[N][N], B[N][N], C[N][N];

    printf("Enter Matrix A (%d x %d) row-wise\n", N, N);

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter Matrix B (%d x %d) row-wise\n", N, N);

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int sum = 0;
            for (int k = 0; k < N; ++k)
                sum += A[i][k] * B[k][j];
            C[i][j] = sum;
        }
    }

    printf("Product of the two matrices A and B\n");

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            printf("%6d", C[i][j]);
        }
        printf("\n");
    }
}