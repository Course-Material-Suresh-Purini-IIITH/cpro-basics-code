#include <stdio.h>

main()
{
    int letterhist[26] = { 0 }, index;
    float count = 0;
    char c;

    while (scanf("%c", &c) == 1)
    {
        if (c >= 'A' && c <= 'Z')
            index = c - 'A';
        else if (c >= 'a' && c <= 'z')
            index = c - 'a';
        else
            continue;

        letterhist[index]++;
        count++;
    }

    printf("\tLetter Histogram==>\n");
    for(int i = 0; i < 26; ++i) {
        printf("%c -- %d -- %.1f\n", 'A' + i, letterhist[i], (letterhist[i]/count)*100);
    }
}