/* Compute the volume of a cube of dimensions 3 cm x 5 cm x 2 cm*/
#include <stdio.h>

int main()
{
    int length, breadth, height;
    int volume;

    length = 3;
    breadth = 5;
    height = 2;

    volume = length * breadth * height;
    
    printf("Cube Dimensions: %dx%dx%d\n", length, breadth, height);
    printf("Volume: %d \n", volume);

    return 0;
}