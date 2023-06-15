#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    char str[50];
    fp = fopen("append.", "a");
    if (fp == NULL)
    {
        printf("error");
    }
    printf("enter the string you want to append:\n");
    gets(str);
    fputs(str, fp);
    printf("succesuflly appened:\n");
    fclose(fp);
}