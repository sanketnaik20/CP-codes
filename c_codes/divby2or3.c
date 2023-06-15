#include <stdio.h>
int main()
{
    int x;
    printf("enter  numbers");
    scanf("%d", &x);
    if (x % 2 == 0 && x % 3 == 0)
    {
        printf("div by 2 and 3");
    }
    else
    {
        printf(" not div by 2 or 3");
    }
}