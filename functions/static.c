#include <stdio.h>

int count()
{
    static int counter = 5;
    int blah;

    counter+=1;

    return counter;
}

main()
{
    for(int i = 0; i < 10; ++i) {
        printf("counter = %d\n", count());
    }
}