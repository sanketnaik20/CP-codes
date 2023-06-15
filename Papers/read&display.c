#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char ch[100];
    fp = fopen("san.txt", "r");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    // while (!feof(fp))
    // {

    //     ch = fgetc(fp);
    //     printf("%c", ch);
    // }
    fgets(ch, 50, fp);
    printf("%s", ch);
    fclose(fp);
}