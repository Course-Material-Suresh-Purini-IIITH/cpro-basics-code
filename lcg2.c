/* Linear Congruential Generator 
    X_(n+1) = (aX_n + c) mod m

*/
#include <stdio.h>
#include <time.h>

#define a 1103515245
#define c 12345
#define m (1 << 31)

main()
{
    unsigned int X;

    X = time(0);

    X = (a * X + c) % m;
    printf("R1: %u\n", X);

    X = (a * X + c) % m;
    printf("R2: %u\n", X);

    X = (a * X + c) % m;
    printf("R3: %u\n", X);
}