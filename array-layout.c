#include <stdio.h>

#define N 10

main()
{
    //int A[N]= { 1, 20, 3, 40, 50, 6, 700, 8, 9};
    int A[N] = { 0 };
  
    for (int i = 0; i < N; ++i)
    {
        printf("Address of A[%d]: %p -- %lu -- %d\n", i, &A[i], (long unsigned) &A[i], A[i]);
    }


}