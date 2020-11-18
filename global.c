#include <stdio.h>

int A[100];
int numarray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int incrCount() {
    static int count = 1;
    int temp;
    temp = count++;

    return count;
}

main()
{
 int sum, i;

 for(int i=0; i < 10; ++i)
    sum = sum+numarray[i];
}