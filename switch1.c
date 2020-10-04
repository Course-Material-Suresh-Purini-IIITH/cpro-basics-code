#include <stdio.h>

#define A_CUTOFF 80
#define B_CUTOFF 70
#define C_CUTOFF 50
#define D_CUTOFF 40

main()
{
    char grade;
    int marks;

    printf("Enter student marks: ");
    scanf("%d", &marks);

    if (marks >= A_CUTOFF)
        grade = 'A';
    else if (marks >= B_CUTOFF)
        grade = 'B';
    else if (marks >= C_CUTOFF)
        grade = 'C';
    else if (marks >= D_CUTOFF)
        grade = 'D';
    else
        grade = 'F';

    printf("Student Grade: %c, ", grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good\n");
        break;
    case 'C':
        printf("Average\n");
        break;
    case 'D':
        printf("Poor\n");
        break;
    case 'F':
        printf("Failing\n");
        break;
    default:
        printf("Illegal grade\n");
        break;
    }
}
