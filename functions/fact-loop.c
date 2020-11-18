#include <stdio.h>

int fact(int n)
{
    int factorial = 1;

    for(int i = 1; i <= n; ++i)
        factorial *= i;
    

    return factorial;
}

main()
{
    printf("4! = %d\n", fact(4));
}