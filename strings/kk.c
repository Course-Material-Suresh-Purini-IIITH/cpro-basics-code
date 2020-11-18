#include <stdio.h>
#include <math.h>
#define format "Hello world\n"

const int a = 3;
int add_3(const int x)
{
    *((int *)&x) = 5;
    return x + 3;
}

void print_str(const char *inp)
{
    *((char *)&inp[0]) = 'G';
    printf("%s\n", inp);
}

int main(void)
{
    char str[] = "Hello World";
    // ((char*)&str[2]) = '3';
    const int x = 2;
    printf("%d\n", add_3(x));
    printf("%d\n", x);
    print_str(str);
    printf("%s\n", str);
}