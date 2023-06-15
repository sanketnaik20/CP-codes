#include <stdio.h>
#include <string.h>
void main()
{
    int i;
    char str[1000];
    printf("enter string:\n");
    gets(str);
    // i = strlen(str);
    printf("the length of string is %zu", strlen(str));
}