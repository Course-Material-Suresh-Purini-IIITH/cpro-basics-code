/* Sums a series of numbers */

#include <stdio.h>
 int main(void)
{
    int n, sum = 0;

    printf("This program sums a series of integers.\n");

    while (scanf("%d", &n) == 1)
    {
        sum += n;
    }

    printf("\nThe sum is: %d\n", sum);
     return 0;
}
