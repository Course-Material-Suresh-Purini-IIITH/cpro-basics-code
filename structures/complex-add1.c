#include <stdio.h>

/*
int r1, c1;
int r2, c2;
*/

struct complex {
    int real;
    int imaginary;
} c1, c2;

int main()
{
    struct complex sum;

    printf("Enter complex number 1: ");
    scanf("%d %d", &c1.real, &c1.imaginary);

    printf("Enter complex number 2: ");
    scanf("%d %d", &c2.real, &c2.imaginary);

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    printf("Sum of %d+%di and %d+%di is %d+%di\n", c1.real, c1.imaginary,\
                                                c2.real, c2.imaginary, \
                                                sum.real, sum.imaginary);

}