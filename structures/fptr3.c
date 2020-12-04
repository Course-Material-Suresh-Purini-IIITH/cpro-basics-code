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
    void (*fptr)(struct object);
} Object;

void displaySquare(Object s)
{
    printf("Square: Length = %d\n", s.x.length);
}

void displayRectangle(Object s)
{
    printf("Rectangle: Length = %d Breadth = %d\n", s.x.r.length, s.x.r.breadth);
}

void displayTriangle(Object s)
{
    printf("Triangle: s1 = %d s2 = %d s3 = %d\n", s.x.t.s1, s.x.t.s2, s.x.t.s3);
}

displayObject(Object s)
{
    switch (s.shape)
    {
    case square: displaySquare(s);
        break;
    case rectangle: displayRectangle(s);
        break;
    case triangle: displayTriangle(s);
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
    s.fptr = displaySquare;
   // (*s.fptr)(s);
    s.fptr(s);
    
    // rectangle
    s.shape = rectangle;
    s.x.r.length = 10;
    s.x.r.breadth = 20;
    s.fptr = displayRectangle;
    (*s.fptr)(s);

    return 0;
}