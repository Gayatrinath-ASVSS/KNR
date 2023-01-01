#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size[100] = {0};
    char buffer[100];
    FILE *fp = fopen("not.txt", "r");
    if (fp == NULL)
    {
        printf("Problem");
    }
    char c;
    int i = 1;
    int count = 0;
    int j = 0;
    while ((c = fgetc(fp)) != EOF)
    {
        buffer[j] = c;
        j++;
        count++;
        if (c == '\n')
        {
            size[i] = count;
            i++;
            for(int k=count;k>-1;k--)
            {
                printf("%c",buffer[k]);
            }
            j = 0;
            count = 0;
        }
    }
    return 0;
}