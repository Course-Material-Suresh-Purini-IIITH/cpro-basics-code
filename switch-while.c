#include <stdio.h>

main()
{
    int n;

    while (1)
    {
        printf("Enter N: ");
        scanf("%d", &n);
        switch (n)
        {
        default: goto L1;
            break;
        case 0:
            printf("It is a zero\n");
            break;
        case 1:
            printf("It is a one\n");
            break;
        }
    }
    L1: ; // null statement
}