#include <stdio.h>
#include <math.h>

main()
{
	float x, y, result;
	printf("Enter x and y: ");
	scanf("%f %f", &x, &y);
	if (y != 0)
		if (x >= 0){
			result = sqrt(x) / y;
			printf("Result: %f\n", result);
		}
	else
		printf("Error: y is equal to 0\n");
}