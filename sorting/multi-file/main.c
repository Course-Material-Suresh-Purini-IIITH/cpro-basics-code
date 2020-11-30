#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

/*
static void swap(char *str1, char *str2)
{
    char temp[MAX_NAME_LENGTH + 1];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
*/

int main(int argc, char *argv[])
{
    // char names[MAX_LIST][MAX_NAME_LENGTH];    Version 1
    // char* names[MAX_LIST];                    Version 2
    char **names;
    int nonames; // scalar variable of type integer
    FILE *fp;
    FILE *fpout; 
    char outputfname[100];

    if (argc <= 1) {
        fprintf(stderr, "Usage: sort filename \n");
        exit(0);
    }

    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        fprintf(stderr, "File doesn't exist\n");
        exit(0);
    }

    strcpy(outputfname, argv[1]);
    strcat(outputfname, ".sorted");

    fpout = fopen(outputfname, "w");

    nonames = readNames(&names, fp);

    //  printNames(names, nonames);

    sortNames(names, nonames);

    printf("=================\n");
    printf("Sorted Name List\n");
    printf("=================\n");

   // printNames(names, nonames, stdout);

    printNames(names, nonames, fpout);

    //for(int i = 0; i < nonames; ++i) {
    //    free(names[i]);
    //}
    free(names);


    return 0;
}