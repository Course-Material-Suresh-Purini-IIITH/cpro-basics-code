#include <stdio.h>
#include <assert.h>

main()
{
    int i, N, sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; ++i) {
        sum = sum + i*i;
    }

    printf("Sum of first N natural numbers: %d\n", sum); 

    assert(sum == N*(N+1)/2);
}