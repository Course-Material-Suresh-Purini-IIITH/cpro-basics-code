#include <stdio.h>

main()
{
    while (1)
    {
        int n;
        printf("Enter N: ");
        scanf("%d", &n);
        switch (n)
        {
        case 0:
            printf("It is a zero\n");
            break;
        case 1:
            printf("It is a one\n");
            break;
        default:
            break;
        }
    }
}