#include <stdio.h>
#include <stdbool.h>

main()
{
    int A, B;

    bool flag = true;
    
    printf("Enter A and B: ");
    scanf("%d %d", &A, &B);

    if (A == B) {
        printf("Input value are equal\n");
    }
}