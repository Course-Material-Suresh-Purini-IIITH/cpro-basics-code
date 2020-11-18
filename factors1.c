#include <stdio.h>

main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    if (N % 2 == 0 && N % 3 == 0)
        printf("N has factors 2 and 3\n");

   //  code assumes that N is incremented by 1 

    if (N % 2 == 0 && ! (N % 3 == 0))
        printf("N has factor 2 but not 3\n");

    if (!(N % 2 == 0) && N % 3 == 0)
        printf("N has factor 3 but not 2\n");

    if (!(N % 2 == 0) && !(N % 3 == 0))
        printf("N has neither factors 2 and 3\n");
    
}