#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp = NULL;
    char str[50];
    fp = fopen("sanket1234.bin", "wb");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter string");
    gets(str);
    for (int i = 0; i != strlen(str); i++)
    {
        fputc(str[i], fp);
    }

    fclose(fp);
}