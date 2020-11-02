#include <stdio.h>
#include <stdbool.h>

#define N 5

bool verifyMagic(int A[][N])
{
    int i, j;
    int rowsum[N] = {0}, colsum[N] = {0};

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            rowsum[i] += A[i][j];
            colsum[j] += A[i][j];
        }
    }

    for (int i = 0; i < N - 1; ++i)
    {
        if (rowsum[i] != rowsum[i + 1])
            return false;
        if (colsum[i] != colsum[i + 1])
            return false;
#if DEBUG >= 2
        printf("Row %d Sum: %d\n", i, rowsum[i]);
        printf("Col %d Sum: %d\n", i, colsum[i]);
#endif
    }

    return true;
}

void displayArray(int A[][N])
{
    static int state = 0;

    state++;
    printf("State %d\n", state);

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

main()
{
    int A[N][N] = {0}, i;

    int c_row = 0, c_col = N / 2;

    int next_row, next_col;

    i = 1;
    for (i = 1; i <= N * N; ++i)
    {
#if DEBUG >= 1
        printf("c_row = %d c_col = %d\n ", c_row, c_col);
#endif

        A[c_row][c_col] = i;

        // Try to go one row up and one col right
        next_row = (c_row - 1 + N) % N;
        next_col = (c_col + 1) % N;

        // Check if the new tentative cell is empty
        if (A[next_row][next_col] == 0)
        {
            // empty cellx
            c_row = next_row;
            c_col = next_col;
        }
        else
        {
            c_row = (c_row + 1) % N;
        }
#if DEBUG >= 2
        displayArray(A);
#endif
    }

    if (verifyMagic(A))
    {
        displayArray(A);
    }
    else
    {
        printf("Some thing went wrong!\n");
    }
}
