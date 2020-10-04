#include <stdio.h>
#include <math.h>

main()
{
    float a, b, c;
    float discriminant;
    float root1, root2;
    float value_p;

    printf("Computing roots of a*x^2 + b*x + c\n");
    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b , &c);

    discriminant = b*b - 4*a*c;

    root1 = (-b + sqrt(discriminant))/(2*a);
    root2 = (-b - sqrt(discriminant))/(2*a);

    printf("First Root: %.3f\tSecond Root: %.3f\n", root1, root2);

    value_p = 0;

    value_p = a*root1*root1;
    value_p += b*root1;
    value_p += c;

    printf("P(%f) = %f\n", root1, value_p);

    value_p = 0;

    value_p = a*root2*root2;
    value_p += b*root2;
    value_p += c;

    printf("P(%f) = %f\n", root2, value_p);


}