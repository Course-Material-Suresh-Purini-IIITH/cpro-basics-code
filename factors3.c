#include <stdio.h>

main()
{
    int N, f;

    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter f: ");
    scanf("%d", &f);


    if (N % f != 0 )
        printf("f is not a factor of N\n");
    else
        printf("f is a factor of N\n");
    

}