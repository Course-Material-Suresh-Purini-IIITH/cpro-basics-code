#include <stdio.h>
#include <malloc.h>

/*
int r1, c1;
int r2, c2;
*/


struct complex {
    int real;
    int imaginary;
};

typedef struct complex Complex; 

Complex *readComplex()
{
    Complex *c = (Complex *) malloc(sizeof(Complex));
    printf("Enter a complex number: ");
    scanf("%d %d", &(c->real), &(c->imaginary));
    return c;
}

int main()
{
    Complex *c1, *c2, sum;

    c1 = readComplex();
    c2 = readComplex();

    sum.real = c1->real + c2->real;
    sum.imaginary = c1->imaginary + c2->imaginary;

    printf("Sum of %d+%di and %d+%di is %d+%di\n", c1->real, c1->imaginary,\
                                                c2->real, c2->imaginary, \
                                                sum.real, sum.imaginary);

}