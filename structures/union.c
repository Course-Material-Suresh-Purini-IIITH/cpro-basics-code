#include <stdio.h>

union object {
    int x;
    char b[4];
} A;

int main()
{
    A.x = 0xF1F2F3F4;
    return 0;
}