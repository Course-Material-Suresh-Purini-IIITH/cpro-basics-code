#include <stdio.h>

void swap(int* A, int *B)
{
   int temp;
   temp = *A;
   *A = *B;
   *B = temp; 
}

// Incorrect code
void swap(int A, int B)
{
   int temp;
   temp = A;
   A = B;
   B = temp; 
}

main()
{
   int n1, n2, temp;

   printf("Enter two numbers: ");
   
   scanf("%d %d", &n1, &n2);

   printf("Before Swap: n1 = %d\tn2 = %d\n", n1,n2);

   // code to swap the two numbers
   // swap(&n1, &n2);
      swap(n1, n2);


   printf("After Swap: n1 = %d\tn2 = %d\n", n1,n2);
   
}