#include <stdio.h>

#define KGSPERSACK 20

int main()
{
    int weight, no_of_sacks;

    printf("Enter the quantity of rice (in KGs): ");
    scanf("%d", &weight);

    no_of_sacks = weight / KGSPERSACK; 

    printf("Number of sacks required to hold %d KGs of Rice is %d\n", weight, no_of_sacks);
}