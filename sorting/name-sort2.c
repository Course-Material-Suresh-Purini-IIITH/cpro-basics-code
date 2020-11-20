#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>

#define MAX_LIST 100
#define MAX_NAME_LENGTH 100

int readNames(char *names[])
{
    char current_name[MAX_NAME_LENGTH];

    int i = 0, length;
    while (scanf("%s", current_name) == 1)
    {
        length = strlen(current_name);
        names[i] = (char *) malloc(length+1); // free(names[i])
        strcpy(names[i], current_name);
        i = i + 1;
        if (i == MAX_LIST)
            break;
    }

    return i;
}

void printNames(char *names[], int nonames)
{
    for (int i = 0; i < nonames; ++i)
        printf("%s\n", names[i]);
}

void swap(char **str1, char **str2)
{
    char *temp;

    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
void sortNames(char *names[], int nonames)
{
    for (int i = 0; i < nonames; i++)
    {
        bool anyswap = false;
        for (int j = 0; j < nonames - 1 - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) < 0)
            {
                swap(&names[j], &names[j + 1]);
                anyswap = true;
            }
        }
        if (!anyswap)
            break;
    }
}
int main(void)
{
   // char names[MAX_LIST][MAX_NAME_LENGTH];    
    char* names[MAX_LIST];
    int nonames;    // scalar variable of type integer

    nonames = readNames(names);
    printNames(names, nonames);

    sortNames(names, nonames);

    printf("Sorted Name List\n");

    printNames(names, nonames);

    return 0;
}