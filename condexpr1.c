#include <stdio.h>
#include <stdbool.h>

main()
{
    int N;
    bool flag;

    printf("Enter N: ");
    scanf("%d", &N);

    flag = N >= 0 ? true : false;

    if (flag) 
        printf("N is a positive number\n");
    else
        printf("N is a negative number\n");  
}