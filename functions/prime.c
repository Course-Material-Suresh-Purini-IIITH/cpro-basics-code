/* Calculates the number of digits in an integer */

#include <stdio.h>
#include <stdbool.h>

bool isDivisor(int N, int d)
{
    if (N % d == 0)
        return true;
    else
        return false;
}

int main(void)
{
    int d, n;

    printf("Enter N: ");
    scanf("%d", &n);

    for(d = 2; d <= n; d++)
    {
        if (isDivisor(n, d) == true) 
            break;
    } 

    if (d < n)
	  printf("%d is divisible by %d\n", n, d);
	else
	  printf("%d is prime\n", n);

    return 0;
}
