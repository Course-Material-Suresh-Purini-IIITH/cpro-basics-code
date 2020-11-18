#include <stdio.h>

#define N 4

main()
{
    int A[N][N] = {0};

    // for(int i=0; i < N; ++i) {
    //     for(int j = 0; j < N; ++j){
    //         if(i != j) 
    //             A[i][j] = 0;
    //         else
    //             A[i][j] = 1;
    //     }
    // }    


    for(int i=0; i < N; ++i) {
        A[i][i] = 1;
    }


    for(int i=0; i < N; ++i) {
        for(int j = 0; j < N; ++j){
          printf("%6d", A[i][j]);
        }
        printf("\n");
    }
}