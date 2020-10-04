#include <stdio.h>

main()
{
    int x, absx;

    printf("Enter x: ");
    scanf("%d", &x);

    if (x > 0)
        absx = x;
    else
        absx = -x;

    printf("|x| = %d\n", absx);
}