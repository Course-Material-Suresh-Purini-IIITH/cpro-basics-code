#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

float average(int a, int b)
{
    float average;

    average = (a + b)/2;

    return average;
}

main()
{
    int A, B;

    printf("Enter numbers A and B: ");

    scanf("%d %d", &A, &B);

    printf("Average: %f\n", average(A, B));
    printf("Maximum: %d\n", max(A, B));
}