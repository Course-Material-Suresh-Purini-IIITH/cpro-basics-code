#include <stdio.h>

main()
{
    int A, B, max;
    printf("Enter two integers A and B: ");

    scanf("%d %d", &A, &B);

    if (A > B)
        max = A; 
    else
        max = B;
        
    printf("Maximum of A and B is: %d\n", max);
}