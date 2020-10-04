#include <stdio.h>

main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    if (N % 2 == 0 || N % 3 == 0)
        printf("N has either 2 or 3 as a factor\n");
    else
    {
        printf("N has neither 2 nor 3 as a factor\n");
    }
    

}