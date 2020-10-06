#include <stdio.h>

#define N 10

main()
{
    int A[N];

    printf("Enter %d numbers: ", N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &A[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }

    printf("\nSum of series: %d\n", sum);

    int max = A[0];
    for (int i = 1; i < N; i++)
    {
        if (A[i] > max)
            max = A[i];
    }

    printf("Maximum element in the series: %d\n", max);

}