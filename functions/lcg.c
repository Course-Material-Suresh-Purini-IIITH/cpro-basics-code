/* Linear Congruential Generator 
    X_(n+1) = (aX_n + c) mod m

*/
#include <stdio.h>
#include <time.h>

#define a 1103515245
#define c 12345
#define m (1 << 31)

unsigned int X;

void srand(unsigned int seed)
{
    X = seed;
}

unsigned int rand()
{
    X = (a * X + c) % m;
}

main()
{

    srand(time(0));

    printf("%u\n", rand());
}