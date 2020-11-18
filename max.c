/* Sums a series of numbers */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, max, retval;

    printf("This program finds the maximum of a series of integers.\n");
    retval = scanf("%d", &n);
    max = n;
    while (retval == 1)
    {
        if (n > max)
            max = n;
        retval = scanf("%d", &n);
    }
    if (max != 0)
        printf("\nThe max is: %d\n", max);
    else
    {
        printf("The list is empty!\n");
    }
    
    return 0;
}
