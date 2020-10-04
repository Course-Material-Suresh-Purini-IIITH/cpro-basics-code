/* Sums a series of numbers */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, max = INT_MIN;

    printf("This program finds the maximum of a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &n);
    while (n != 0)
    {
        if(n > max)
        max = n;
        scanf("%d", &n);
    }
    printf("The max is: %d\n", max);
    return 0;
}
