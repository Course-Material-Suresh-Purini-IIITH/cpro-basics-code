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
    float mean;

    mean = (a + b) / 2.0;

    return mean;
}

int main()
{
    int A, B;

    printf("Enter numbers A and B: ");

    scanf("%d %d", &A, &B);

    printf("Average: %f\n", average(A, B));
    printf("Maximum: %d\n", max(A, B));

    return 0;
}