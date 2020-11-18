#include <stdio.h>

int sum_array()
{
}

void print_1Darray(int A[], int array_size)
{
    for (int i = 0; i <= array_size - 1; ++i)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }
}

// A[i] = i*i;
void init_1Darray(int A[], int array_size)
{
    for (int i = 0; i <= array_size - 1; ++i)
    {
        A[i] = i * i;   // *(A+i) => *(A+4*i)
    }
}

void print_2Darray(int A[][10], int norows, int nocols)
{
    for (int i = 0; i <= norows - 1; ++i)
    {
        for (int j = 0; j <= nocols - 1; ++j)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
}

void print_2Darray_c99(int norows, int nocols, int A[norows][nocols])
{
    for (int i = 0; i <= norows - 1; ++i)
    {
        for (int j = 0; j <= nocols - 1; ++j)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
}

void init_2Darray(int A[][10], int norows, int nocols)
{
    int i, j;
    for (int i = 0; i <= norows - 1; ++i)
    {
        for (int j = 0; j <= nocols - 1; ++j)
            A[i][j] = i + j;   // *(A + m*i + j)
    }
}

void init_2Darray_c99(int norows, int nocols, int A[norows][nocols])
{
    int i;
    for (i = 0; i <= norows - 1; ++i)
    {
        for (int j = 0; j <= nocols - 1; ++j)
            A[i][j] = j - i;   // *(A + m*i + j)
    }
}

void swap(int* A, int *B)
{
   int temp;
   temp = *A;
   *A = *B;
   *B = temp; 
}

void transpose(int norows, int nocols, int A[norows][nocols])
{
    for (int i = 0; i <= norows - 1; ++i)
    {
        for (int j = i+1; j <= nocols - 1; ++j)
           swap(&A[i][j], &A[j][i]);
    }
}

main()
{
    int n1[10];
    int n2[5][10];
    int n3[10][5];
    int n4[5][5];
    
    init_2Darray_c99(5, 5, n4);
    print_2Darray_c99(5, 5, n4);
    printf("After Transpose\n");
    transpose(5, 5, n4);
    print_2Darray_c99(5, 5, n4);

    //init_1Darray(n1, 10);
    //print_1Darray(n1, 01);
}