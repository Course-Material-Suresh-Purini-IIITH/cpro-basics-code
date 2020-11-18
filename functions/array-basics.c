#include <stdio.h>

main()
{
    int A[6] = { 0, 1, 2, 3, 4, 5}, *ptr;
    printf("A = %p &A[0] = %p &A[1] = %p\n", A, &A[0], &A[1]);
  
    ptr=A;

    for(int i = 0 ; i <= 5; ++i, ptr++){
        printf("&A[%d] = %p ptr = %p \n", i, &A[i], ptr);
        printf("A[%d] = %d, *ptr = %d\n", i, A[i], *ptr);
    }
}