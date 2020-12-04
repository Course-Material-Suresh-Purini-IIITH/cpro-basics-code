#include <stdio.h>

#define MAX_LIST_SIZE 20

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
    void (*print)(struct object);
    void (*perimeter)(struct object);
} Object;

Object objects[MAX_LIST_SIZE];
int list_size = 0;

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

void perimeterSquare(Object s)
{
    printf("Square: Perimeter = %d\n", s.x.length*4);
}

void perimeterRectangle(Object s)
{
    printf("Rectangle: Perimeter %d\n", 2*(s.x.r.length + s.x.r.breadth));
}

void perimeterTriangle(Object s)
{
    printf("Triangle: Perimeter = %d\n", s.x.t.s1 + s.x.t.s2 + s.x.t.s3);
}

void readObjects()
{
    FILE *fp;
    int shape;
    int length, breadth;
    int s1, s2, s3;

    fp = fopen("objects.txt", "r");
    while (fscanf(fp, "%d", &shape) != EOF)
    {
        switch (shape)
        {
        case square:
            fscanf(fp, "%d", &length);
            objects[list_size].shape = square;
            objects[list_size].x.length = length;
            objects[list_size].print = displaySquare;
            objects[list_size].perimeter = perimeterSquare;
            break;
        case rectangle:
            fscanf(fp, "%d %d", &length, &breadth);
            objects[list_size].shape = rectangle;
            objects[list_size].x.r.length = length;
            objects[list_size].x.r.breadth = breadth;
            objects[list_size].print = displayRectangle;
            objects[list_size].perimeter = perimeterRectangle;
            break;
        case triangle:
            fscanf(fp, "%d %d %d", &s1, &s2, &s3);
            objects[list_size].shape = triangle;
            objects[list_size].x.t.s1 = s1;
            objects[list_size].x.t.s2 = s2;
            objects[list_size].x.t.s3 = s3;
            objects[list_size].print = displayTriangle;
            objects[list_size].perimeter = perimeterTriangle;
            break;
        }
        list_size++;
    }
}

void displayObjects()
{
    for(int i=0; i < list_size; ++i) {
        objects[i].print(objects[i]);
    }
}


void perimeterObjects()
{
    for(int i=0; i < list_size; ++i) {
        objects[i].perimeter(objects[i]);
    }
}

displayObject(Object s)
{
    switch (s.shape)
    {
    case square:
        displaySquare(s);
        break;
    case rectangle:
        displayRectangle(s);
        break;
    case triangle:
        displayTriangle(s);
        break;
    }
}

int main()
{

    readObjects();
    printf("List of objects\n");
    displayObjects();
    printf("Perimeter of objects\n");
    perimeterObjects();
    return 0;
}