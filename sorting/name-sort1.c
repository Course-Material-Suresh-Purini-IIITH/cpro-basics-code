#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LIST 100
#define MAX_NAME_LENGTH 20

int readNames(char names[][MAX_NAME_LENGTH])
{
    int i = 0;
    while (scanf("%s", &names[i][0]) == 1)
    {
        i = i + 1;
        if (i == MAX_LIST)
            break;
    }

    return i;
}

void printNames(char names[][MAX_NAME_LENGTH], int nonames)
{
    for (int i = 0; i < nonames; ++i)
        printf("%s\n", &names[i][0]);
}

void swap(char *str1, char *str2)
{
    char temp[MAX_NAME_LENGTH + 1];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
void sortNames(char names[][MAX_NAME_LENGTH], int nonames)
{
    for (int i = 0; i < nonames; i++)
    {
        bool anyswap = false;
        for (int j = 0; j < nonames - 1 - i; j++)
        {
            if (strcmp(&names[j][0], &names[j + 1][0]) < 0)
            {
                swap(&names[j][0], &names[j + 1][0]);
                anyswap = true;
            }
        }
        if (!anyswap)
            break;
    }
}
int main(void)
{
    char names[MAX_LIST][MAX_NAME_LENGTH];
    int nonames;

    nonames = readNames(names);
    printNames(names, nonames);

    sortNames(names, nonames);

    printf("Sorted Name List\n");

    printNames(names, nonames);

    return 0;
}