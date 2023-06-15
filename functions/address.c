#include <stdio.h>

void main()
{
    int a[5], i;
    printf("enter elements of array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%x\n",a+i);
    }
}
