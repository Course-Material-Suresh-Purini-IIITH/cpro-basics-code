#include <stdio.h>
//#include <unistd.h>

void main(void) {
    int i, N;

    printf("Enter the Table you would like to print: ");

    scanf("%d", &N);

    for(i = 1; i <=10; ++i) {
        printf("%d x %d = %d\n", N, i, N*i);
    }
}