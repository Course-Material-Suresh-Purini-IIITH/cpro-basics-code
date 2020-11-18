/* Linear Congruential Generator 
    X_(n+1) = (aX_n + c) mod m

*/
#include <stdio.h>
#include <time.h>

#define a 1103515245
#define c 12345
#define m (1 << 31)

unsigned int X;

void my_srand(unsigned int seed)
{
    X = seed;
}

unsigned int my_rand()
{
    X = (a * X + c) % m;

    return X;
}

main()
{

    my_srand(time(0));

    printf("%u\n", my_rand());
}