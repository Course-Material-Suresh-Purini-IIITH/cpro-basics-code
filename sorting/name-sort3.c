#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>

#define INIT_LIST_SIZE 20
#define INCR_LIST_SIZE 20
#define MAX_NAME_LENGTH 100

int readNames(char ***ptrnames)
{
    char current_name[MAX_NAME_LENGTH];
    char **names;
    int i = 0, length, curr_max_size = INIT_LIST_SIZE;

    names = (char **) malloc(INIT_LIST_SIZE*sizeof(char *));
    *ptrnames = names; 
   
    while (scanf("%s", current_name) == 1)
    {
        length = strlen(current_name);
        names[i] = (char *) malloc((length+1)*sizeof(char)); // free(names[i])
        strcpy(names[i], current_name);
        i = i + 1;
        if (i == curr_max_size){
            curr_max_size += INCR_LIST_SIZE;
            names = (char **) realloc(names, curr_max_size*sizeof(char*));
            if(names == NULL) {
                printf("Unable to read all the names\n");
                return i;
            }
            else {
                printf("Successful realloc at list size %d\n", i);
            }
            *ptrnames = names;
        }
            
    }

    return i;
}

void printNames(char **names, int nonames)
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
void sortNames(char **names, int nonames)
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
   // char names[MAX_LIST][MAX_NAME_LENGTH];    Version 1
   // char* names[MAX_LIST];                    Version 2
   char **names;
   int nonames;    // scalar variable of type integer

    nonames = readNames(&names);
    printNames(names, nonames);

    sortNames(names, nonames);

    printf("=================\n");
    printf("Sorted Name List\n");
    printf("=================\n");

    printNames(names, nonames);

    return 0;
}