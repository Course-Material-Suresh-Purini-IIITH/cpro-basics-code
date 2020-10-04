/* Linear Congruential Generator 
    X_(n+1) = (aX_n + c) mod m

*/
#include <stdio.h>

#define seed 2000
#define a 10
#define c 200
#define m 300

main()
{
    unsigned int X;

    X = seed;

    X = (a * X + c) % m;

    printf("%u\n", X);
}