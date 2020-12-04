#include <stdio.h>

typedef enum {square, rectangle, triangle} Shape;

typedef struct object
{
    Shape shape;
    union
    {
        int length; // square
        struct rect
        {
            int length;
            int breadth;
        } r;
        struct triangle
        {
            int s1;
            int s2;
            int s3;
        } t;
    } x;
} Object;

int main()
{
    Object s;

    // squares
    s.shape = square; 
    s.x.length = 10;

    return 0;
}