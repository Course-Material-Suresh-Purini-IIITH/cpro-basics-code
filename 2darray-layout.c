#include <stdio.h>

#define N 2

main()
{
    int A[N][N] = {1, 0, 0, 1};

    for (int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            printf("Address of A[%d][%d]: %p -- %lu -- %d\n", \
                    i, j, &A[i][j], (long unsigned)&A[i][j], A[i][j]);
        }
    }
}