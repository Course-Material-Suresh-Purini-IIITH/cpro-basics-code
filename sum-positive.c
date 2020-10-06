/* Calculates the number of digits in an integer */

#include <stdio.h>

int main(void)
{
    int inp, sum = 0;

    scanf("%d", &inp);
    while (inp != 0)
    {
        if (inp < 0){
            scanf("%d", &inp);
            continue;
        }
        sum = sum + inp;
        scanf("%d", &inp);
    }

    printf("Sum of positive numbers in the series is %d\n", sum);

    return 0;
}
