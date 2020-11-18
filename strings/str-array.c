#include <stdio.h>

int main(void)
{
    char *str1;
    char str2[] = "Hello World\n";
    
    str1 = str2 ; 

    str1[2] = '!';
    printf(str1);

    return 0;
}
