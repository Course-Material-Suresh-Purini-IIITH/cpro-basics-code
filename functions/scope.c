#include <stdio.h>

int global;

sum()
{
    global++;
}

void fun()
{
    int i = 0;

    global++;
    ++i;
}

main()
{

    sum();
    fun();
}