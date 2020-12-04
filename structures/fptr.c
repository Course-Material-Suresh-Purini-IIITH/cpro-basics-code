#include <stdio.h>

/*
#define SQUARE 0
#define RECTANGLE 1
#define TRIANGLE 2
*/

typedef enum
{
    square,
    rectangle,
    triangle
} Shape;

typedef struct object
{
    Shape shape;
    //int shape;
    struct
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

displayObject(Object s)
{
    switch (s.shape)
    {
    case square: printf("Square: Length = %d\n", s.x.length);
        break;
    case rectangle: printf("Rectangle: Length = %d Breadth = %d\n", s.x.r.length, s.x.r.breadth);
        break;
    case triangle: printf("Triangle: s1 = %d s2 = %d s3 = %d\n", s.x.t.s1, s.x.t.s2, s.x.t.s3);
        break;
    }
}

int main()
{
    Object s;

    printf("Size of Object = %d\n", sizeof(Object));
    // squares
    s.shape = square;
    s.x.length = 10;
    displayObject(s);
    // rectangle
    s.shape = rectangle;
    s.x.r.length = 10;
    s.x.r.breadth = 20;
    displayObject(s);
    return 0;
}