#include <stdio.h>

void main(void) {
    int i, N;

    printf("Enter the Table you would like to print: ");

    scanf("%d", &N);

    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", N, i, N*i);
        i = i + 1;
    }

}