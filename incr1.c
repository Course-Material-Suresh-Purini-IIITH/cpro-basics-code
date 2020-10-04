#include <stdio.h>

main()
{
    int i;

    i = 1;
    printf("i is %d\n", --i); /* prints "i is 0" */
    printf("i is %d\n", i);   /* prints "i is 0" */
    
    i = 1;
    printf("i is %d\n", i--); /* prints "i is 1" */
    printf("i is %d\n", i);   /* prints "i is 0" */
}
