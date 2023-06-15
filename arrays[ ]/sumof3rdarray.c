#include <stdio.h>
int main()
{
    int a[5], b[5], c[5];
    int sum, i;
    printf("enter numbers of 1st array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter numbers of 2nd array\n");
    ;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];

        printf(" %d ", c[i]);
    }
}