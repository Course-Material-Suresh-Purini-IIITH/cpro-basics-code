/* Compute the volume of a cube of dimensions 3 cm x 5 cm x 2 cm*/
#include <stdio.h>

int main()
{
    int length, breadth, height;
    int volume;

    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    printf("Enter the height: ");
    scanf("%d", &height);
    
    volume = length * breadth * height;
    
    printf("Cube Dimensions: %dx%dx%d\n", length, breadth, height);
    printf("Volume: %d \n", volume);

    return 0;
}