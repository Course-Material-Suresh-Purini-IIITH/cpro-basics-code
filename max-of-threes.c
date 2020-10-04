#include <stdio.h>

main()
{
    int A, B, C, max;
    printf("Enter three integers A, B and C: ");

    scanf("%d %d %d", &A, &B, &C);

    if (A > B)
        if (A > C)
            max = A;
        else
            max = C;
    else 
        if (B > C)
            max = B;
        else
            max = C;

    printf("Maximum of A, B and C is: %d\n", max);
}